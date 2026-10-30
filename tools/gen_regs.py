"""Register-parameter lowering for the fast backend (generate_fast.py --reg-params).

The default fast backend keeps the guest registers in Cpu::regs and every instruction loads and stores them there. This
lowering instead cuts the program into guest superblocks, one C++ function each, that receive the eight general registers
as arguments (clang preserve_none: all of them in host registers) and pass them on to the next block with a guaranteed tail
call (musttail), so a loop's registers stay in host registers from one iteration to the next:

  * a function is a run of guest instructions that starts at a leader (a static branch target, a call return site, a function
    entry, a jump-table destination, or the first instruction after an unconditional transfer or a gap) and runs to the next
    leader; conditional branches leave the run by a tail call and the fall-through simply continues;
  * the eight general registers (register file offsets 0..31) are the local array G (promoted to SSA values by SROA); the flag
    bytes (0x200..0x21f) are the local array F, loaded from Cpu::regs on entry and stored only where a successor still needs
    them (whole-program liveness from flaglive.py); everything else (x87/SSE/MMX state, FPU control, shadow EIP) stays in
    Cpu::regs, reached through R;
  * dynamic transfers (RETURN, CALLIND, BRANCHIND) store c.pc and tail-call ent_dispatch, which switches on the page and then
    on the address to the block function; an address that is not a leader is a missing instruction (see check_leaders);
  * the executed-instruction count is a down-counter `bud` in a register; it also bounds how long translated code runs before
    control returns to the dispatch loop (checked on backward edges and dynamic transfers, which every cycle contains).
Runtime services (user operations, mod hooks, faults) see the registers through Cpu::regs: SPILL_OUT/SPILL_IN around them.
"""
import bisect
import json
import re
import struct
from pathlib import Path

import flaglive

BUDGET = 1 << 16
TEXT_LO, TEXT_HI = 0x401000, 0x783000
G_SIZE = 32
# Which guest general registers travel as arguments (index k = register file offset 4k: EAX ECX EDX EBX ESP EBP ESI EDI) and in
# which order the arguments are declared; "c" is the processor, "bud" the instruction budget. set_target() chooses them.
PASSED = list(range(8))
ORDER = [0, 1, 2, 3, 4, 5, 6, 7, "c", "bud"]
HOT_ORDER = [4, 0, 1, 6, 7, 2, 3, 5]   # ESP EAX ECX ESI EDI EDX EBX EBP: by static use count in the program
# Speed layer (speed.hpp): predicted return sites tried per RETURN before the dispatch switch (0 = no predictions).
PREDICT_MAX = 4


def set_target(spec):
    """'x64' (all eight registers, preserve_none) or 'x86:K' (the K hottest registers; regcall puts c and the first K in registers)."""
    global PASSED, ORDER
    if spec == "x64":
        PASSED, ORDER = list(range(8)), [0, 1, 2, 3, 4, 5, 6, 7, "c", "bud"]
    elif spec.startswith("x86:"):
        k = int(spec[4:])
        PASSED = sorted(HOT_ORDER[:k])
        ORDER = ["c"] + HOT_ORDER[:k] + ["bud"]
    else:
        raise ValueError(f"unknown register-parameter target {spec}")
    return spec


def arg_decl():
    return ",".join({"c": "Cpu& __restrict c", "bud": "s32 bud"}.get(t, f"u32 a{t}") if isinstance(t, str) else f"u32 a{t}" for t in ORDER)


def arg_names():
    return ",".join(t if isinstance(t, str) else f"a{t}" for t in ORDER)


def arg_values():
    return ",".join(t if isinstance(t, str) else f"r4(G+{4 * t})" for t in ORDER)
F_LO, F_HI = flaglive.FLAG_LO, flaglive.FLAG_HI

# ---- whole-program facts (filled by Program.finish) ------------------------------------------------------------------
class Program:
    def __init__(self):
        self.addrs = []            # every instruction address in file order
        self.lengths = {}
        self.static_targets = set()
        self.return_sites = set()
        self.terminal_next = set() # first instruction after an unconditional transfer
        self.address_taken = set() # 32-bit constants of instructions that lie in the code range (function pointers, pushed addresses)
        self.leaders = set()
        self.live_in = {}
        self.blocks = set()        # leaders that exist as generated functions
        self.calls = []            # (call instruction, return site, static target) of every direct CALL
        self.jumps = []            # (instruction, static target) of every direct unconditional BRANCH (tail calls among them)
        self.returns = set()       # RETURN instructions
        self.ret_candidates = {}   # RETURN instruction -> likely return sites (speed layer: predicted returns)
        self.tight = False         # --leaders tight: the constants of x87 instructions that equal their own address are not code pointers

    def note(self, raw):
        a, n = raw["a"], raw["n"]
        self.addrs.append(a)
        self.lengths[a] = n
        ops = raw["p"]
        x87 = self.tight and (raw["asm"] or " ").split()[0].startswith("F")
        for op in ops:
            if op[0] == "CALL" and op[2][0] == "ram":
                self.calls.append((a, a + n, int(op[2][1], 16)))
            elif op[0] == "BRANCH" and op[2][0] == "ram":
                self.jumps.append((a, int(op[2][1], 16)))
            elif op[0] == "RETURN":
                self.returns.add(a)
        for op in ops:
            name = op[0]
            for node in op[2:]:
                if node and node[0] == "const" and node[2] == 4:
                    v = int(node[1], 16)
                    if TEXT_LO <= v < TEXT_HI and not (x87 and v == a):   # the SLEIGH x87 model stores each instruction's own address in FIP
                        self.address_taken.add(v)
            if name in ("BRANCH", "CBRANCH", "CALL") and op[2][0] == "ram":
                self.static_targets.add(int(op[2][1], 16))
            if name in ("CALL", "CALLIND"):
                self.return_sites.add(a + n)
        last = ops[-1][0] if ops else None
        if last in ("BRANCH", "BRANCHIND", "RETURN"):
            self.terminal_next.add(a + n)

    def add_external(self, root, spec_paths, mods):
        """Entry points that code outside the translation names: the mod patch points (a hook range ends, a retarget or a forced
        jump lands, a skipped instruction continues, a hook handler redirects c.pc) and every code address written as a literal
        in the native sources (call_guest targets, callbacks, tables) or as a number in the mod specifications."""
        ext = set()
        for h in mods.get("hooks", []):
            ext.add(h["begin"])
            if h.get("end") is not None:
                ext.add(h["end"])
        for e in mods.get("retargets", []):
            ext |= {e["old"], e["new"]}
        for e in mods.get("force_jumps", []):
            ext.add(e["target"])
        for e in mods.get("nops", []):
            ext.add(e["insn"])
        self.mod_points = set(ext)
        self.nop_insns = {e["insn"] for e in mods.get("nops", [])}

        def numbers(node):
            if isinstance(node, bool):
                return
            if isinstance(node, int):
                yield node
            elif isinstance(node, str):
                if re.fullmatch(r"0x[0-9a-fA-F]+", node):
                    yield int(node, 16)
            elif isinstance(node, dict):
                for v in node.values():
                    yield from numbers(v)
            elif isinstance(node, list):
                for v in node:
                    yield from numbers(v)
        for path in spec_paths:
            ext |= {v for v in numbers(json.loads(Path(path).read_text())) if TEXT_LO <= v < TEXT_HI}
        for pattern in ("mods*.cpp", "mods*.inc", "mods*.hpp", "launcher.cpp", "native32.cpp", "dynamic_code.cpp", "userops.cpp"):
            for f in Path(root).glob(pattern):
                for m in re.finditer(r"0x([0-9a-fA-F]{6,8})", f.read_text(errors="replace")):
                    v = int(m.group(1), 16)
                    if TEXT_LO <= v < TEXT_HI:
                        ext.add(v)
        self.external = ext

    def finish(self, manifest, jump_tables, info, live_out, pages, export_dir):
        have = set(self.addrs)
        leaders = set(self.static_targets) | self.return_sites | self.terminal_next | self.address_taken | self.external
        # a skipped (nopped) instruction continues at the next one
        leaders |= {a + self.lengths[a] for a in self.nop_insns if a in self.lengths}
        # Every aligned 32-bit word of the program image that points into the code (vtables, callback tables, SEH and
        # switch tables): a dynamic transfer can only enter a function body at a leader.
        self.image = []   # (base, bytes) of the program image, for the jump tables of BRANCHIND (table_targets)
        for block in manifest["memory"]:
            data = (Path(export_dir) / block["file"]).read_bytes()
            self.image.append((block["start"], data))
            words = struct.unpack_from(f"<{len(data) // 4}I", data)
            leaders |= {w for w in words if TEXT_LO <= w < TEXT_HI}
        leaders |= {f["entry"] for f in manifest["functions"] if not f.get("external")}
        for table in jump_tables:
            leaders |= {int(d, 16) for d in table["destinations"]}
        prev = None
        for a in sorted(have):
            if prev is None or prev + self.lengths[prev] != a or (prev >> 12) != (a >> 12):
                leaders.add(a)
            prev = a
        self.leaders = leaders & have
        self.live_in = {a: flaglive.transfer(info[a], live_out[a]) for a in self.addrs}
        self.blocks = {a for a in self.leaders if (a >> 12) in pages}
        missing = sorted(a for a in self.mod_points if (a >> 12) in pages and a in have and a not in self.blocks)
        if missing:
            raise ValueError("mod patch points without a block entry: " + ", ".join(hex(a) for a in missing))
        self.predict_returns(manifest)

    def table_targets(self, ins, limit=256):
        """Blocks named by a jump table that an indirect JMP reads (JMP [base+reg*4]): the code addresses stored from each image
        constant of the instruction onwards, until the first word that is not one. Only a prediction (the dispatch switch stays the
        fallback), so a table read too far or too short costs time, not correctness."""
        out = []
        for op in ins.ops:
            for node in op[2:]:
                if not (node and node[0] == "const" and node[2] == 4):
                    continue
                base = int(node[1], 16)
                for start, data in self.image:
                    if start <= base < start + len(data) - 3:
                        at = base - start
                        while at + 4 <= len(data) and len(out) < limit:
                            w = struct.unpack_from("<I", data, at)[0]
                            if not TEXT_LO <= w < TEXT_HI:
                                break
                            if w in self.blocks and w not in out:
                                out.append(w)
                            at += 4
        return out

    def predict_returns(self, manifest):
        """Likely targets of each RETURN: the return sites of the direct calls to the function that holds it, plus those of the
        callers of functions that reach it by a tail jump. A prediction is only ever an exact comparison of the dynamic target
        followed by a direct tail call to the block the dispatch switch would select, so a wrong or missing one costs time, not
        correctness."""
        ranges = sorted((lo, hi, f["entry"]) for f in manifest["functions"] if not f.get("external") for lo, hi in f["ranges"])
        starts = [r[0] for r in ranges]

        def owner(a):
            i = bisect.bisect_right(starts, a) - 1
            while i >= 0 and ranges[i][0] <= a:
                if a <= ranges[i][1]:
                    return ranges[i][2]
                i -= 1
            return None
        entries = {r[2] for r in ranges}
        sites = {}
        for a, ret, target in self.calls:
            if target in entries and ret in self.blocks:
                sites.setdefault(target, []).append(ret)
        tails = {}
        for a, target in self.jumps:
            if target in entries:
                src = owner(a)
                if src is not None and src != target:
                    tails.setdefault(target, set()).add(src)
        for r in self.returns:
            f = owner(r)
            if f is None:
                continue
            cands = list(dict.fromkeys(sites.get(f, []) + [s for g in sorted(tails.get(f, ())) for s in sites.get(g, [])]))
            if cands:
                self.ret_candidates[r] = cands


def written_flags(insns):
    mask = 0
    for ins in insns:
        for op in ins.ops:
            d = op[1]
            if d and d[0] == "register":
                off = int(d[1], 16)
                mask |= flaglive.fmask(off, d[2])
    return mask


def make(GF):
    class RegEmitter(GF.Emitter):
        def __init__(self, page, page_addrs, targets, program, start, written, dyn_mask):
            super().__init__(page, page_addrs, targets)
            self.prog, self.start, self.written, self.dyn_mask = program, start, written, dyn_mask
            self.cur = None
            self.referenced = set()

        # ---- register file split: G (general registers), F (flags), R (everything else) ----------------------------
        def reg(self, off, size):
            if off + size <= G_SIZE:
                slots = {k for k in range(off // 4, (off + size - 1) // 4 + 1)}
                if slots <= set(PASSED):
                    return f"G+{off}"
                if not slots & set(PASSED):
                    return f"R+{off}"
                raise ValueError(f"register access {off:#x}+{size} straddles a register passed as an argument and one that is not")
            if F_LO <= off and off + size <= F_HI:
                return f"F+{off - F_LO}"
            if off < G_SIZE or (off < F_HI and off + size > F_LO):
                raise ValueError(f"register access {off:#x}+{size} straddles the general/flag/other register groups")
            return f"R+{off}"

        def instruction(self, ins):
            self.cur = ins
            text = super().instruction(ins)
            parts = text.split("SPILL();")
            if len(parts) > 1:
                text = parts[0] + "".join(("SPILL_OUT();" if i % 2 == 0 else "SPILL_IN();") + p for i, p in enumerate(parts[1:]))
            return text

        def head(self, a):
            leader, length = self.block_info[a]
            label = f"B{a:x}:" + (f"L{a:x}:" if leader else "")
            return f"{label}{{" + (f"bud-={length};" if leader else "") + f"NFSU2_TR(0x{a:x});" + (f"c.pc=0x{a:x}u;" if GF.TRACK_PC else "")

        # ---- control transfers -----------------------------------------------------------------------------------
        def flush_flags(self, mask):
            mask &= self.written
            out, bit = [], 0
            while bit < F_HI - F_LO:
                if mask >> bit & 1:
                    end = bit
                    while end < F_HI - F_LO and mask >> end & 1:
                        end += 1
                    out.append(f"__builtin_memcpy(R+{F_LO + bit},F+{bit},{end - bit});")
                    bit = end
                else:
                    bit += 1
            return "".join(out)

        def dynamic_transfer(self, name, ins):
            """TAIL_PRED(target, predicted blocks): see emit_function. A RETURN tries the return sites of the callers of its
            function; an indirect JMP through a jump table of the image switches on the table's blocks."""
            pred = ""
            if name == "RETURN" and PREDICT_MAX:
                for t in self.prog.ret_candidates.get(ins.addr, [])[:PREDICT_MAX]:
                    self.referenced.add(t)
                    pred += f"if(t__==0x{t:x}u)[[clang::musttail]] return blk_{t:x}(ARGS);"
            elif name == "BRANCHIND" and PREDICT_MAX:
                cases = self.prog.table_targets(ins)
                if cases:
                    self.referenced.update(cases)
                    pred = "switch(t__){" + "".join(f"case 0x{t:x}u:[[clang::musttail]] return blk_{t:x}(ARGS);" for t in cases) + "default:break;}"
            return f"TAIL_PRED(t_,{pred});"

        def exit_code(self, target):
            return self.flush_flags(self.prog.live_in.get(target, flaglive.ALL_FLAGS)) + f"EXIT(0x{target:x}u);"

        def jump_static(self, target, from_addr):
            if target == self.start:
                return f"{{if(__builtin_expect(bud<=0,0)){{{self.exit_code(target)}}}goto L{target:x};}}"
            return self.exit_static(target)

        def exit_static(self, target):
            if target in self.prog.blocks:
                self.referenced.add(target)
                flush = self.flush_flags(self.prog.live_in.get(target, flaglive.ALL_FLAGS))
                check = f"if(__builtin_expect(bud<=0,0)){{EXIT(0x{target:x}u);}}" if self.cur is not None and target <= self.cur.addr else ""
                return "{" + flush + check + f"[[clang::musttail]] return blk_{target:x}(ARGS);" + "}"
            return "{" + self.exit_code(target) + "}"

    return RegEmitter


def dyn_mask_of(insns, prog):
    """Flags that may be live where a dynamic transfer (RETURN, CALLIND, BRANCHIND, a function hook) leaves the function."""
    mask = 0
    for ins in insns:
        names = {op[0] for op in ins.ops}
        if names & {"CALLIND", "BRANCHIND", "RETURN"}:
            mask |= prog.live_out[ins.addr]
        if ins.addr in prog.hook_addrs:
            mask |= flaglive.ALL_FLAGS
    return mask


def declare_args():
    return arg_decl()


def emit_page_regs(GF, RegEmitter, prog, page, insns, live_out):
    for ins in insns:
        flaglive.prune(ins, live_out[ins.addr])
    # split into functions at leaders
    functions, current = [], []
    for i, ins in enumerate(insns):
        gap = i > 0 and insns[i - 1].addr + insns[i - 1].length != ins.addr
        if current and (ins.addr in prog.leaders or gap):
            functions.append(current)
            current = []
        current.append(ins)
    if current:
        functions.append(current)
    pieces, referenced = [], set()
    for fn in functions:
        start = fn[0].addr
        addrs = {i.addr for i in fn}
        written = written_flags(fn)
        dyn = dyn_mask_of(fn, prog)
        em = RegEmitter(page, addrs, {start}, prog, start, written, dyn)
        em.block_info = GF.analyze_blocks(fn, {start})
        body = "".join(em.instruction(i) for i in fn)
        referenced |= em.referenced
        pieces.append(emit_function(GF, prog, start, fn, written, dyn, body))
    head = [(GF.x87_defines() + '#include "fast_regs.hpp"' + ('\n#include "fast_arena.hpp"' if GF.HOST != "x86_32" else "")).strip(), "namespace nfsu2raw {","#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)"]
    head.append("PN u32 ent_dispatch(%s);" % declare_args())
    head.append("PN u32 ent_native(%s);" % declare_args())
    head.append("PN u32 ent_missing(%s);" % declare_args())   # the switch default, a tail call (see dispatch.cpp)
    for t in sorted(referenced):
        head.append("PN u32 blk_%x(%s);" % (t, declare_args()))
    own = sorted(i.addr for i in insns if i.addr in prog.blocks)
    for a in own:
        if a not in referenced:
            head.append("PN u32 blk_%x(%s);" % (a, declare_args()))
    lo, hi = min(GF.ALL_PAGES), max(GF.ALL_PAGES)
    ent = ["PN u32 ent_%x(%s){switch(c.pc){" % (page, declare_args())]
    for a in own:
        ent.append(f"case 0x{a:x}:[[clang::musttail]] return blk_{a:x}({arg_names()});")
    ent.append(f"default:[[clang::musttail]] return ent_missing({arg_names()});}}}}")
    wrapper = (f"u32 page_{page:x}(Cpu& c){{u8* R=c.regs.data();return ent_{page:x}("
               + ",".join("c" if t == "c" else "REG_BUDGET" if t == "bud" else f"r4(R+{4 * t})" for t in ORDER) + ");}")
    return "\n".join(head) + "\n" + "".join(pieces) + "\n".join(ent) + "\n" + wrapper + "\n#undef EXIT\n}\n"


def emit_function(GF, prog, start, fn, written, dyn, body):
    out = [f"PN u32 blk_{start:x}({declare_args()}){{"]
    # Arena hosts: the base of guest memory is read once per function (fast_arena.hpp).
    out.append(("NFSU2_ARENA_LOCAL " if GF.HOST != "x86_32" else "") + "u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;")
    out.append("alignas(4) u8 G[32];alignas(16) u8 F[32];")
    out.append("".join(f"w4(G+{4 * k},a{k});" for k in PASSED) + f"__builtin_memcpy(F,R+{F_LO},{F_HI - F_LO});")
    spill_flags = ""
    bit = 0
    mask = written
    while bit < F_HI - F_LO:
        if mask >> bit & 1:
            end = bit
            while end < F_HI - F_LO and mask >> end & 1:
                end += 1
            spill_flags += f"__builtin_memcpy(R+{F_LO + bit},F+{bit},{end - bit});"
            bit = end
        else:
            bit += 1
    store_g = "".join(f"w4(R+{4 * k},r4(G+{4 * k}));" for k in PASSED)
    out.append("#define ARGS " + arg_values())
    out.append(f"#define SPILL_OUT() do{{{store_g}{spill_flags}c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}}while(0)")
    out.append(f"#define SPILL_IN() do{{" + "".join(f"w4(G+{4 * k},r4(R+{4 * k}));" for k in PASSED) + f"__builtin_memcpy(F,R+{F_LO},{F_HI - F_LO});}}while(0)")
    dflush = ""
    bit, m = 0, dyn & written
    while bit < F_HI - F_LO:
        if m >> bit & 1:
            end = bit
            while end < F_HI - F_LO and m >> end & 1:
                end += 1
            dflush += f"__builtin_memcpy(R+{F_LO + bit},F+{bit},{end - bit});"
            bit = end
        else:
            bit += 1
    lo, hi = min(GF.ALL_PAGES), max(GF.ALL_PAGES)
    # A dynamic transfer: into the translated image through the dispatch switch, after the predicted blocks P when the speed
    # layer allows them (g_speed_predict); outside it (Windows, Direct3D, COM methods, the run-time interpreter) through the speed
    # layer's native-call hook without leaving translated code (ent_native, a tail call: a call made here would make every block
    # with a dynamic transfer save registers on entry). Without the hook control returns to the dispatch loop as before.
    inimg = f"u32((t__>>12)-0x{lo:x}u)<=0x{hi - lo:x}u"
    out.append(f"#define TAIL_PRED(T,P) do{{u32 t__=u32(T);{dflush}c.pc=t__;"
               f"if(__builtin_expect(bud>0&&{inimg},1)){{if(g_speed_predict){{P}}[[clang::musttail]] return ent_dispatch(ARGS);}}"
               f"if(bud>0&&g_native_hook){{[[clang::musttail]] return ent_native(ARGS);}}"
               f"nx=t__;goto XIT;}}while(0)")
    out.append("#define TAIL_DYNAMIC(T) TAIL_PRED(T,)")
    out.append("#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)")
    out.append(body)
    out.append(f"XIT:{store_g}c.instructions+=REG_BUDGET-bud;return nx;")
    out.append("FLT:SPILL_OUT();fast_fault(c,fm,fpc);")
    out.append("#undef ARGS\n#undef SPILL_OUT\n#undef SPILL_IN\n#undef TAIL_DYNAMIC\n#undef TAIL_PRED\n#undef NFSU2_FAULT\n}\n")
    return "\n".join(out)
