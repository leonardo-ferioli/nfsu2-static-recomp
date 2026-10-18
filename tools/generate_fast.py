"""Lower Ghidra raw instruction P-code to the fast static backend (generated_fast/).

Same input as generate.py (export/instructions.jsonl.gz) and the same P-code semantics, but:
  * each 4 KiB page is one C++ function; the guest register file is Cpu::regs itself, reached through
    a noalias pointer (the optimizer forwards accesses between guest-memory operations; nothing is
    loaded or spilled at page boundaries). A per-page local copy is available with --local-regs but is
    slower on x86-32;
  * P-code temporaries ("unique" space) are per-instruction locals;
  * guest memory is accessed at the identical 32-bit host address;
  * integer, SSE-sized float and x87 operations use native types / dedicated helpers.
The reference backend (generate.py) stays the oracle; this lowering never executes original x86.
"""
from pathlib import Path
import argparse
import gzip
import hashlib
import io
import json
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
CT = {1: "u8", 2: "u16", 4: "u32", 8: "u64"}
SG = {1: "s8", 2: "s16", 4: "s32", 8: "s64"}
SCALAR = (1, 2, 4, 8)
BRANCH_OPS = ("BRANCH", "CBRANCH", "CALL", "CALLIND", "BRANCHIND", "RETURN")
LOOP_LIMIT = 0x40000  # instructions per page invocation before yielding to the dispatcher
MEMORY_REGS = True    # registers live in Cpu::regs behind a noalias pointer (False: local copy per page)
TRACK_PC = False      # store the guest PC in Cpu::pc before every instruction (precise fault reports; costs one store each)


def W(n):
    return "u32" if n <= 4 else "u64"


def vn(node):
    """Parse a JSON varnode into (space, offset, size)."""
    return (node[0], int(node[1], 16), node[2]) if node else None


class Fallback(Exception):
    """The typed lowering does not cover this signature; use the generic eval<> path."""


def literal(value, size):
    return f"{CT[size]}(0x{value & ((1 << (size * 8)) - 1):x}ull)"


def typed(name, D, sizes, a, b, const_b, addr):
    """Return (pre, expr) for an operation over scalar-size values, or raise Fallback.

    `a`/`b` are expressions of the argument types; `const_b` is the integer value of `b`
    when it is a constant (SUBPIECE needs it at generation time).
    """
    A = sizes[0] if sizes else 0
    B = sizes[1] if len(sizes) > 1 else 0
    if D not in SCALAR or any(s not in SCALAR for s in sizes):
        raise Fallback
    cd = CT[D]
    same = A == B == D
    n = name
    if n == "INT_ZEXT" and D > A:
        return "", f"{cd}({a})"
    if n == "INT_SEXT" and D > A:
        return "", f"{cd}({SG[D]}({SG[A]}({a})))"
    if n in ("INT_ADD", "INT_SUB", "INT_MULT", "INT_AND", "INT_OR", "INT_XOR") and same:
        op = {"INT_ADD": "+", "INT_SUB": "-", "INT_MULT": "*", "INT_AND": "&", "INT_OR": "|", "INT_XOR": "^"}[n]
        w = W(D)
        return "", f"{cd}({w}({a}){op}{w}({b}))"
    if n == "INT_NEGATE" and A == D:
        return "", f"{cd}(~{W(D)}({a}))"
    if n == "INT_2COMP" and A == D:
        return "", f"{cd}(0-{W(D)}({a}))"
    if n in ("INT_LEFT", "INT_RIGHT", "INT_SRIGHT") and A == D:
        fn = {"INT_LEFT": "shl", "INT_RIGHT": "shr", "INT_SRIGHT": "sar"}[n]
        return "", f"{fn}<{cd}>({a},u64({b}))"
    if n in ("INT_EQUAL", "INT_NOTEQUAL", "INT_LESS", "INT_LESSEQUAL") and D == 1 and A == B:
        op = {"INT_EQUAL": "==", "INT_NOTEQUAL": "!=", "INT_LESS": "<", "INT_LESSEQUAL": "<="}[n]
        return "", f"u8(({a}){op}({b}))"
    if n in ("INT_SLESS", "INT_SLESSEQUAL") and D == 1 and A == B:
        op = "<" if n == "INT_SLESS" else "<="
        return "", f"u8({SG[A]}({a}){op}{SG[A]}({b}))"
    if n in ("INT_CARRY", "INT_SCARRY", "INT_SBORROW") and D == 1 and A == B:
        fn = {"INT_CARRY": "carry", "INT_SCARRY": "scarry", "INT_SBORROW": "sborrow"}[n]
        return "", f"{fn}<{CT[A]}>({a},{b})"
    if n == "BOOL_NEGATE" and D == 1 and A == 1:
        return "", f"u8(!({a}))"
    if n in ("BOOL_AND", "BOOL_OR", "BOOL_XOR") and D == 1 and A == B == 1:
        op = {"BOOL_AND": "&&", "BOOL_OR": "||", "BOOL_XOR": "!="}[n]
        if n == "BOOL_XOR":
            return "", f"u8((({a})!=0)!=(({b})!=0))"
        return "", f"u8(({a}){op}({b}))"
    if n == "POPCOUNT":
        return "", f"{cd}(__builtin_popcountll(u64({a})))"
    if n == "SUBPIECE" and const_b is not None:
        bits = const_b * 8
        if bits >= A * 8:
            return "", f"{cd}(0)"
        if bits == 0:
            return "", f"{cd}({a})"
        return "", f"{cd}({W(A)}({a})>>{bits})"
    if n in ("INT_DIV", "INT_REM") and A <= 8 and B <= 8:
        op = "/" if n == "INT_DIV" else "%"
        pre = f"u64 d_=u64({b});if(__builtin_expect(!d_,0))NFSU2_FAULT(\"integer division by zero\",0x{addr:x});"
        return pre, f"{cd}(u64({a}){op}d_)"
    if n in ("INT_SDIV", "INT_SREM") and A <= 8 and B <= 8:
        op = "/" if n == "INT_SDIV" else "%"
        pre = (f"s64 x_=s64({SG[A]}({a})),y_=s64({SG[B]}({b}));"
               f"if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT(\"signed integer division fault\",0x{addr:x});")
        return pre, f"{cd}(x_{op}y_)"
    # SSE-sized IEEE arithmetic: native hardware operations.
    if n in ("FLOAT_ADD", "FLOAT_SUB", "FLOAT_MULT", "FLOAT_DIV") and same and D in (4, 8):
        op = {"FLOAT_ADD": "+", "FLOAT_SUB": "-", "FLOAT_MULT": "*", "FLOAT_DIV": "/"}[n]
        f, bk = ("f32", "b32") if D == 4 else ("f64", "b64")
        return "", f"{bk}({f}({a}){op}{f}({b}))"
    if n in ("FLOAT_EQUAL", "FLOAT_NOTEQUAL", "FLOAT_LESS", "FLOAT_LESSEQUAL") and D == 1 and A == B and A in (4, 8):
        op = {"FLOAT_EQUAL": "==", "FLOAT_NOTEQUAL": "!=", "FLOAT_LESS": "<", "FLOAT_LESSEQUAL": "<="}[n]
        f = "f32" if A == 4 else "f64"
        return "", f"u8({f}({a}){op}{f}({b}))"
    if n == "FLOAT_NAN" and D == 1 and A in (4, 8):
        f = "f32" if A == 4 else "f64"
        return "", f"u8(std::isnan({f}({a})))"
    if n == "FLOAT_NEG" and A == D and D in (4, 8):
        return "", f"{cd}({a}^{cd}(0x{1 << (D * 8 - 1):x}ull))"
    if n == "FLOAT_ABS" and A == D and D in (4, 8):
        return "", f"{cd}({a}&{cd}(0x{(1 << (D * 8 - 1)) - 1:x}ull))"
    if n == "FLOAT_SQRT" and A == D and D in (4, 8):
        f, bk, sq = ("f32", "b32", "sqrtf") if D == 4 else ("f64", "b64", "sqrt")
        return "", f"{bk}({sq}({f}({a})))"
    if n == "FLOAT2FLOAT" and {A, D} == {4, 8}:
        if D == 8:
            return "", f"b64(double(f32({a})))"
        return "", f"b32(float(f64({a})))"
    if n == "INT2FLOAT" and D in (4, 8) and A in SCALAR:
        f, bk = ("float", "b32") if D == 4 else ("double", "b64")
        return "", f"{bk}({f}(s64({SG[A]}({a}))))"
    raise Fallback


# --------------------------------------------------------------------------------------
# Per-instruction emission
# --------------------------------------------------------------------------------------
class Insn:
    def __init__(self, raw):
        self.addr = raw["a"]
        self.length = raw["n"]
        self.asm = raw["asm"]
        self.error = raw.get("error")
        self.ops = raw["p"]
        self.flags = 0
        self.mod_addresses = ()
        self.mod_retarget = None


def unique_layout(ops):
    """Compact the sparse P-code unique offsets into one per-instruction scratch array."""
    ranges = set()
    for op in ops:
        for node in op[1:]:
            if node and node[0] == "unique":
                ranges.add((int(node[1], 16), node[2]))
    if not ranges:
        return {}, 0
    merged = []
    for off, size in sorted(ranges):
        if merged and off < merged[-1][1]:
            merged[-1][1] = max(merged[-1][1], off + size)
        else:
            merged.append([off, off + size])
    mapping, base = [], 0
    for start, end in merged:
        mapping.append((start, end, base))
        base += end - start
    return mapping, base


def ucmap(mapping, off):
    for start, end, base in mapping:
        if start <= off < end:
            return base + off - start
    raise KeyError(off)


PURE_USEROPS = {
    "paddsb": "paddsb", "paddsw": "paddsw", "paddusb": "paddusb", "paddusw": "paddusw",
    "psubsb": "psubsb", "psubsw": "psubsw", "psubusb": "psubusb", "psubusw": "psubusw",
    "pmulhw": "pmulhw", "pmaddwd": "pmaddwd", "psllw": "psllw", "psraw": "psraw",
    "packssdw": "packssdw", "packsswb": "packsswb", "movdq2q": "movdq2q",
    "rcpps": "rcpps", "rcpss": "rcpss", "rsqrtss": "rsqrtss",
    "fsin": "fsin", "fcos": "fcos", "f2xm1": "f2xm1", "fptan": "fptan", "fpatan": "fpatan", "fscale": "fscale", "log2": "log2",
    "PackedFloatingADD": "pfadd", "PackedFloatingSUB": "pfsub", "PackedFloatingSUBR": "pfsubr", "PackedFloatingMUL": "pfmul",
    "PackedFloatingMAX": "pfmax", "PackedFloatingMIN": "pfmin", "PackedFloatingCompareEQ": "pfcmpeq",
    "PackedFloatingCompareGE": "pfcmpge", "PackedFloatingCompareGT": "pfcmpgt", "PackedFloatingAccumulate": "pfacc",
    "PackedFloatingNegAccumulate": "pfnacc", "PackedFloatingPosNegAccumulate": "pfpnacc", "PackedSwapDWords": "pswapd",
    "PackedIntToFloatingDwordConv": "pi2fd", "PackedFloatingToIntDwordConv": "pf2id",
}
USEROP_NAMES = {}      # SLEIGH userop id -> name, filled from export/manifest.json
FPU_TAG_WORD = 4260    # register offset of FPUTagWord in the exported register map


def set_userops(manifest):
    USEROP_NAMES.clear()
    USEROP_NAMES.update({int(k): v for k, v in manifest["userops"].items()})
    global FPU_TAG_WORD
    FPU_TAG_WORD = next(r["offset"] for r in manifest["registers"] if r["name"] == "FPUTagWord")


FPU_CONTROL, MXCSR = (0x10a0, 2), (0x1094, 4)   # register-file offset and width


# ---- x87 passed through to the host FPU -----------------------------------------------------------------------------
# The P-code x87 model copies the whole eight-register stack on every push/pop and round-trips each operand through
# memory (about 40 cycles per instruction). Instead, each x87 instruction becomes the same single FPU operation on the
# host FPU, whose stack then holds the guest's stack between instructions (a 4-byte-per-register-slot model is not
# needed: well-formed code has an empty stack at calls, returns and threads). Only the operation (opcode and ModRM
# extension) is emitted: the effective address is evaluated from the guest registers and handed over in EAX.
TEXT = b""
TEXT_BASE = 0x401000
GUEST_REG = {0: 0, 1: 4, 2: 8, 3: 12, 4: 16, 5: 20, 6: 24, 7: 28}   # EAX ECX EDX EBX ESP EBP ESI EDI -> register-file offset
X87_PASSTHROUGH = True
# Transfers to other pages are tail calls (clang musttail) straight into the target page's body function instead of a
# return to the dispatch loop: no loop, no platform checks, no dispatch switch for static targets. A chain counter hands
# control back to the loop every CHAIN_LIMIT transfers so threads can still be stopped.
TAIL_CALLS = True
CHAIN_LIMIT = 2048
ALL_PAGES = set()   # pages that exist as generated functions

# ---- mods (tools/mods/*.py write mods/*_spec.json): patch points resolved against the original code --------------------------
# immediates  a 32-bit immediate of an instruction is read from a run-time variable (initial value: the original immediate);
# addresses   the absolute memory operand of an instruction is read through a run-time pointer (initial value: the original);
# nops        an instruction is skipped while a run-time flag is non-zero;
# hooks       a native handler (mod_hook_table[id]) runs instead of an instruction range (mode "replace"), before an
#             instruction (mode "before"), or instead of a whole function (mode "function": the handler does the work of the
#             function and generated code performs its `ret`, popping `pop` bytes of arguments); with no handler installed
#             the original instructions run. A handler that changes c.pc redirects execution there. A function hook is
#             bypassed once when the handler calls the original (mod_bypass_take). The game is unchanged until the platform
#             installs a mod.
# retargets   the destination of a (conditional) jump is replaced while a run-time flag is non-zero;
# force_jumps a conditional jump becomes unconditional while a run-time flag is non-zero.
MODS = None
MOD_VARS = []          # names; index = slot in g_mod_vars
MOD_IMMEDIATES = {}    # instruction -> [(value, slot)]
MOD_ADDRESSES = {}     # instruction -> [(value, slot)]
MOD_NOPS = {}          # instruction -> slot of the flag
MOD_HOOKS = {}         # begin address -> (id, end or None, mode, pop)
MOD_RETARGETS = {}     # jump instruction -> (old target, new target, slot of the flag)
MOD_FORCE_JUMPS = {}   # jump instruction -> (target, slot of the flag)
MOD_HOOK_NAMES = []
MOD_DATA = []


def load_mods(paths):
    global MODS
    MODS = {"vars": [], "immediates": [], "addresses": [], "nops": [], "hooks": [], "data": [], "retargets": [], "force_jumps": []}
    defaults = {}
    for path in paths:
        spec = json.loads(Path(path).read_text())
        for v in spec["vars"]:
            if v["name"] in defaults and defaults[v["name"]] != v["default"]:
                raise ValueError(f"mod variable {v['name']} has two defaults")
            if v["name"] not in defaults:
                MOD_VARS.append(v["name"])
            defaults[v["name"]] = v["default"]
        for key in ("immediates", "addresses", "nops", "hooks", "data", "retargets", "force_jumps"):
            MODS[key] += spec.get(key, [])
    MODS["vars"] = [(n, defaults[n]) for n in MOD_VARS]
    slot = {n: i for i, n in enumerate(MOD_VARS)}
    for e in MODS["immediates"]:
        MOD_IMMEDIATES.setdefault(e["insn"], []).append((e["value"], slot[e["var"]]))
    for e in MODS["addresses"]:
        MOD_ADDRESSES.setdefault(e["insn"], []).append((e["value"], slot[e["var"]]))
    for e in MODS["nops"]:
        MOD_NOPS[e["insn"]] = slot[e["flag"]]
    for i, h in enumerate(MODS["hooks"]):
        if h["begin"] in MOD_HOOKS:
            raise ValueError(f"two hooks at {h['begin']:x}")
        MOD_HOOKS[h["begin"]] = (i, h["end"], h["mode"], h.get("pop", 0))
        MOD_HOOK_NAMES.append(h["name"])
    for e in MODS["retargets"]:
        MOD_RETARGETS[e["insn"]] = (e["old"], e["new"], slot[e["flag"]])
    for e in MODS["force_jumps"]:
        MOD_FORCE_JUMPS[e["insn"]] = (e["target"], slot[e["flag"]])
    MOD_DATA[:] = MODS["data"]


def apply_mod_patches(ins):
    """Rewrite the operands of one instruction that a mod makes variable (see load_mods)."""
    if ins.addr in MOD_IMMEDIATES:
        for value, slot in MOD_IMMEDIATES[ins.addr]:
            replaced = 0
            for op in ins.ops:
                for i in range(2, len(op)):
                    node = op[i]
                    if node and node[0] == "const" and node[2] == 4 and int(node[1], 16) == value:
                        op[i] = ["modvar", format(slot * 4, "x"), 4]
                        replaced += 1
            if not replaced:
                raise ValueError(f"mod immediate {value:#x} not found in the P-code of {ins.addr:x} ({ins.asm})")
    if ins.addr in MOD_RETARGETS:
        ins.mod_retarget = MOD_RETARGETS[ins.addr]
    if ins.addr in MOD_ADDRESSES:
        ins.mod_addresses = MOD_ADDRESSES[ins.addr]
        for value, slot in MOD_ADDRESSES[ins.addr]:
            for op in ins.ops:
                for i in range(1, len(op)):
                    node = op[i]
                    if node and node[0] == "ram" and int(node[1], 16) == value:
                        op[i] = ["modptr", format(slot * 4, "x"), node[2]]


def x87_encoding(ins):
    """The FPU opcode bytes of an x87 instruction (optionally after FWAIT), or None for anything else."""
    mnemonic = ins.asm.split()[0] if ins.asm else ""
    if not X87_PASSTHROUGH or not TEXT or not mnemonic.startswith("F") or mnemonic == "FEMMS":
        return None
    start = ins.addr - TEXT_BASE
    if not 0 <= start < len(TEXT):
        return None
    raw = TEXT[start:start + ins.length]
    if len(raw) != ins.length:
        return None
    body = raw[1:] if raw[:1] == bytes([0x9b]) else raw
    if len(body) < 2 or not 0xd8 <= body[0] <= 0xdf:
        raise ValueError(f"x87 instruction {mnemonic} at {ins.addr:x} has an unexpected encoding {raw.hex()}")
    return raw


def x87_address(raw, regptr=lambda off, size: f"R+{off}"):
    """(prefix, opcode, reg field, C++ effective-address expression, consumed length) of a memory-form x87 instruction."""
    prefix = raw[:1] if raw[:1] == bytes([0x9b]) else b""
    body = raw[len(prefix):]
    modrm = body[1]
    mod, reg, rm = modrm >> 6, (modrm >> 3) & 7, modrm & 7
    if mod == 3:
        return None
    pos, terms, disp = 2, [], 0
    def register(n, scale=1):
        base = f"r4({regptr(GUEST_REG[n], 4)})"
        return base if scale == 1 else f"({base}*{scale}u)"
    if rm == 4:
        sib = body[pos]; pos += 1
        scale, index, base = 1 << (sib >> 6), (sib >> 3) & 7, sib & 7
        if index != 4:
            terms.append(register(index, scale))
        if base == 5 and mod == 0:
            disp = int.from_bytes(body[pos:pos + 4], "little", signed=True); pos += 4
        else:
            terms.append(register(base))
    elif mod == 0 and rm == 5:
        disp = int.from_bytes(body[pos:pos + 4], "little", signed=True); pos += 4
    else:
        terms.append(register(rm))
    if mod == 1:
        disp += int.from_bytes(body[pos:pos + 1], "little", signed=True); pos += 1
    elif mod == 2:
        disp += int.from_bytes(body[pos:pos + 4], "little", signed=True); pos += 4
    if pos != len(body):
        raise ValueError(f"unexpected extra bytes in x87 instruction {raw.hex()}")
    expression = "+".join(terms + [f"u32({disp & 0xffffffff}u)"]) if disp or not terms else "+".join(terms)
    return prefix, body[0], reg, f"u32({expression})"


def touches(node, reg):
    return bool(node) and node[0] == "register" and node[1] < reg[0] + reg[1] and reg[0] < node[1] + node[2]


class Emitter:
    def __init__(self, page, page_addrs, targets):
        self.page = page
        self.page_addrs = page_addrs
        self.targets = targets
        self.reg_reads = []
        self.reg_writes = []
        self.userop_sites = 0
        self.block_info = {}   # address -> (starts a block, instructions from here to the end of its block)

    # ---- operand access -------------------------------------------------------
    def reg(self, off, size):
        """C++ pointer expression of `size` bytes of the guest register file at `off` (see gen_regs.RegEmitter)."""
        return f"R+{off}"

    def ptr(self, v, um):
        space, off, size = v
        if space == "register":
            return f"({self.reg(off, size)})"
        if space == "unique":
            return f"(U+{ucmap(um, off)})"
        if space == "ram":
            return f"gp(0x{off:x})"
        if space == "modvar":
            return f"(MODV+{off})"
        if space == "modptr":
            return f"gp(r4(MODV+{off}))"
        raise ValueError("const has no storage")

    def rd(self, v, um):
        space, off, size = v
        if space == "const":
            return literal(off, size)
        if space == "register":
            return f"r{size}({self.reg(off, size)})"
        if space == "unique":
            return f"r{size}(U+{ucmap(um, off)})"
        if space == "modvar":
            return f"r{size}(MODV+{off})"
        if space == "modptr":
            return f"m{size}(r4(MODV+{off}))"
        return f"m{size}(0x{off:x})"

    def wr(self, v, expr, um):
        space, off, size = v
        if space == "register":
            return f"w{size}({self.reg(off, size)},{expr});"
        if space == "unique":
            return f"w{size}(U+{ucmap(um, off)},{expr});"
        if space == "ram":
            return f"{'s8_' if size == 8 else 's' + str(size)}(0x{off:x},{expr});"
        if space == "modptr":
            return f"{'s8_' if size == 8 else 's' + str(size)}(r4(MODV+{off}),{expr});"
        raise ValueError("cannot write a constant")

    def rdv(self, v, um):
        space, off, size = v
        if space == "const":
            return f"V(0x{off & ((1 << (size * 8)) - 1):x}ull)"
        return f"rv<{size}>({self.ptr(v, um)})"

    def wrv(self, v, expr, um):
        return f"wv<{v[2]}>({self.ptr(v, um)},{expr});"

    # ---- control flow ---------------------------------------------------------
    def jump_static(self, target, from_addr):
        if target in self.page_addrs:
            back = f"if(__builtin_expect(++c.chain>={CHAIN_LIMIT},0)){{c.chain=0;EXIT(0x{target:x}u);}}" if target <= from_addr else ""
            return f"{{{back}goto L{target:x};}}"
        return self.exit_static(target)

    def exit_static(self, target):
        if TAIL_CALLS and (target >> 12) in ALL_PAGES and (target >> 12) != self.page:
            return f"TAIL_STATIC(0x{target:x}u,{target >> 12:x});"
        return f"EXIT(0x{target:x}u);"

    def branch(self, node, idx, count, ins):
        space, off, size = vn(node)
        if space == "const":
            offset = off
            if offset & (1 << 63):
                offset -= 1 << 64
            target = idx + offset
            if not 0 <= target <= count:
                raise ValueError(f"invalid P-code branch at {ins.addr:x}: {target}")
            return f"goto L{ins.addr:x}_{target};"
        if space == "ram":
            if ins.mod_retarget and ins.mod_retarget[0] == off:
                old, new, slot = ins.mod_retarget
                return f"if(r4(MODV+{slot * 4})){self.jump_static(new, ins.addr)}else{self.jump_static(old, ins.addr)}"
            return self.jump_static(off, ins.addr)
        raise ValueError("indirect branch handled by caller")

    def mod_prologue(self, a, length):
        """Statements that follow the head of the instruction at `a`: a hook, a forced jump, or the skip of a nopped instruction."""
        out = []
        nxt = a + length
        if a in MOD_HOOKS:
            hook_id, end, mode, pop = MOD_HOOKS[a]
            call = f"SPILL();c.pc=0x{a:x}u;mod_hook_table[{hook_id}](c);SPILL();"
            if mode == "function":
                body = call + f"{{u32 sp_=r4({self.reg(GUEST_REG[4], 4)});u32 ra_=m4(sp_);w4({self.reg(GUEST_REG[4], 4)},sp_+{4 + pop}u);TAIL_DYNAMIC(ra_);}}"
                out.append(f"if(mod_hook_table[{hook_id}]&&!mod_bypass_take({hook_id})){{{body}}}")
            else:
                body = call + f"if(c.pc!=0x{a:x}u){{TAIL_DYNAMIC(c.pc);}}"
                if mode == "replace":
                    if end in self.page_addrs and (end >> 12) == self.page:
                        body += f"goto B{end:x};"
                    else:
                        body += self.exit_static(end)
                out.append(f"if(mod_hook_table[{hook_id}]){{{body}}}")
        if a in MOD_NOPS:
            jump = f"goto B{nxt:x};" if nxt in self.page_addrs and (nxt >> 12) == self.page else self.exit_static(nxt)
            out.append(f"if(r4(MODV+{MOD_NOPS[a] * 4})){{{jump}}}")
        if a in MOD_FORCE_JUMPS:
            target, slot = MOD_FORCE_JUMPS[a]
            out.append(f"if(r4(MODV+{slot * 4})){self.jump_static(target, a)}")
        return out

    def head(self, a):
        leader, length = self.block_info[a]
        label = f"B{a:x}:" + (f"L{a:x}:" if leader else "")
        return f"{label}{{" + (f"c.instructions+={length};" if leader else "") + f"NFSU2_TR(0x{a:x});" + (f"c.pc=0x{a:x}u;" if TRACK_PC else "")

    # ---- one instruction ------------------------------------------------------
    def instruction(self, ins):
        out = []
        if ins.error:
            raise ValueError(f"Ghidra could not lift {ins.addr:x}")
        raw = x87_encoding(ins)
        if raw is not None:
            return self.x87(ins, raw)
        ops = ins.ops
        um, usize = unique_layout(ops)
        labels = set()
        for i, op in enumerate(ops):
            if op[0] in ("BRANCH", "CBRANCH") and op[2][0] == "const":
                off = int(op[2][1], 16)
                if off & (1 << 63):
                    off -= 1 << 64
                labels.add(i + off)
        a = ins.addr
        out.append(self.head(a))
        out.extend(self.mod_prologue(a, ins.length))
        if usize:
            out.append(f"u8 U[{usize}];")
        pc_written = False
        terminal = False
        for i, op in enumerate(ops):
            if i in labels:
                out.append(f"L{a:x}_{i}:;")
            name = op[0]
            dest = vn(op[1])
            args = [vn(x) for x in op[2:]]
            mark = len(out)
            # The reference engine keeps a shadow EIP at register 644 refreshed before each step.
            if not pc_written:
                if any(x and x[0] == "register" and x[1] <= 644 < x[1] + x[2] for x in args):
                    out.append(f"w4({self.reg(644, 4)},0x{a:x}u);")
                if dest and dest[0] == "register" and dest[1] <= 644 < dest[1] + dest[2]:
                    pc_written = True
            terminal = False
            if name == "COPY":
                if args[0][0] == "const" and dest[2] in SCALAR:
                    out.append(self.wr(dest, literal(args[0][1], dest[2]), um))
                elif args[0][0] == "const":
                    out.append(self.wrv(dest, self.rdv(args[0], um), um))
                else:
                    out.append(f"__builtin_memmove({self.ptr(dest, um)},{self.ptr(args[0], um)},{dest[2]});")
            elif name == "LOAD":
                addr = f"u32({self.rd(args[1], um)})"
                out.append(f"__builtin_memmove({self.ptr(dest, um)},gp({addr}),{dest[2]});")
            elif name == "STORE":
                addr = f"u32({self.rd(args[1], um)})"
                val = args[2]
                if val[0] == "const" or val[2] in SCALAR and val[0] != "ram":
                    if val[2] in SCALAR:
                        w = "s8_" if val[2] == 8 else f"s{val[2]}"
                        out.append(f"{w}({addr},{self.rd(val, um)});")
                    else:
                        raise ValueError("wide constant store")
                else:
                    out.append(f"__builtin_memmove(gp({addr}),{self.ptr(val, um)},{val[2]});")
            elif name in ("BRANCH", "CALL"):
                terminal = True
                out.append(self.branch(op[2], i, len(ops), ins))
            elif name == "CBRANCH":
                out.append(f"if({self.rd(args[1], um)}){{{self.branch(op[2], i, len(ops), ins)}}}")
            elif name in ("CALLIND", "BRANCHIND", "RETURN"):
                terminal = True
                out.append(f"{{u32 t_=u32({self.rd(args[0], um)});{'TAIL_DYNAMIC(t_);' if TAIL_CALLS else 'EXIT(t_);'}}}")
            elif name == "CALLOTHER":
                out.append(self.callother(ins, dest, args, um))
            else:
                out.append(self.arith(name, dest, args, um, ins))
            # Host FPU state follows the guest's x87 control word and MXCSR (see runtime.hpp).
            before, after = [], []
            if any(touches(x, FPU_CONTROL) for x in args):
                before.append(f"w2({self.reg(FPU_CONTROL[0], 2)},x87_store_control());")
            if any(touches(x, MXCSR) for x in args):
                before.append(f"w4({self.reg(MXCSR[0], 4)},mxcsr_store());")
            if touches(dest, FPU_CONTROL):
                if (dest[1], dest[2]) != FPU_CONTROL:
                    raise ValueError(f"partial write of the x87 control word at {ins.addr:x}")
                after.append(f"x87_load_control(r2({self.reg(FPU_CONTROL[0], 2)}));")
            if touches(dest, MXCSR):
                if (dest[1], dest[2]) != MXCSR:
                    raise ValueError(f"partial write of MXCSR at {ins.addr:x}")
                after.append(f"mxcsr_load(r4({self.reg(MXCSR[0], 4)}));")
            out[mark:mark] = before
            out.extend(after)
        if len(ops) in labels:
            out.append(f"L{a:x}_{len(ops)}:;")
            terminal = False
        nxt = a + ins.length
        if not terminal:
            if nxt not in self.page_addrs or (nxt >> 12) != self.page:
                out.append(self.exit_static(nxt))
        out.append("}")
        return "\n".join(out) + "\n"

    def x87(self, ins, raw):
        a = ins.addr
        out = [self.head(a)]
        out.extend(self.mod_prologue(a, ins.length))
        memory = x87_address(raw, self.reg)
        if memory is not None:
            prefix, opcode, reg, expression = memory
            if ins.mod_addresses:   # the absolute operand of this instruction is read through a mod pointer
                expression = f"u32(r4(MODV+{ins.mod_addresses[0][1] * 4}))"
            encoded = ",".join(f"0x{x:02x}" for x in prefix + bytes([opcode, (reg << 3)]))  # ModRM mod=00 rm=000: [eax]
            out.append(f'{{u32 ea_={expression};__asm__ volatile(".byte {encoded}"::"a"(ea_):"memory");}}')
        else:
            encoded = ",".join(f"0x{x:02x}" for x in raw)
            if raw[-2:] == bytes([0xdf,0xe0]):          # FNSTSW AX: the status word goes to the guest's AX
                out.append(f'{{u32 ax_;__asm__ volatile(".byte {encoded}":"=a"(ax_)::"memory");w2({self.reg(0, 2)},u16(ax_));}}')
            else:
                out.append(f'__asm__ volatile(".byte {encoded}":::"memory");')
        nxt = a + ins.length
        if nxt not in self.page_addrs or (nxt >> 12) != self.page:
            out.append(self.exit_static(nxt))
        out.append("}")
        return "\n".join(out) + "\n"

    def callother(self, ins, dest, args, um):
        self.userop_sites += 1
        name = USEROP_NAMES.get(args[0][1])
        if name in PURE_USEROPS and dest and len(args) in (2, 3):
            # Pure operations are called directly: no register-file barrier, no string dispatch.
            b = self.rdv(args[2], um) if len(args) == 3 else "V(0)"
            call = f"uo::{PURE_USEROPS[name]}<{dest[2]}>({self.rdv(args[1], um)},{b})"
            return "{" + self.wrv(dest, call, um) + "}"
        if name == "FastExitMediaState":
            return f"w2({self.reg(FPU_TAG_WORD, 2)},0xffffu);"  # FEMMS has the same effect as EMMS in SLEIGH
        if name == "ffree" and dest:
            return "{" + self.wrv(dest, f"V(r2({self.reg(FPU_TAG_WORD, 2)}))", um) + "}"  # tags are not modelled beyond FPUTagWord
        encoded = args[0][1] | ((dest[2] if dest else 0) << 16)
        vals = ",".join(self.rdv(x, um) for x in args[1:])
        call = f"{{SPILL();c.pc=0x{ins.addr:x}u;{'V r_=' if dest else ''}user_op(c,{encoded},{{{vals}}});SPILL();"
        if dest:
            call += self.wrv(dest, "r_", um)
        return call + "}"

    FLOAT10 = {"FLOAT_ADD": "x80_add", "FLOAT_SUB": "x80_sub", "FLOAT_MULT": "x80_mul", "FLOAT_DIV": "x80_div"}

    def arith(self, name, dest, args, um, ins):
        sizes = [x[2] for x in args]
        D = dest[2]
        if any(x[0] == "const" for x in args) and (D == 10 or 10 in sizes):
            return self.generic(name, dest, args, um, ins)
        # x87 80-bit and conversions
        if name in self.FLOAT10 and D == 10 and sizes == [10, 10]:
            return f"{self.FLOAT10[name]}({self.ptr(dest, um)},{self.ptr(args[0], um)},{self.ptr(args[1], um)});"
        if name == "FLOAT_SQRT" and D == 10 and sizes == [10]:
            return f"x80_sqrt({self.ptr(dest, um)},{self.ptr(args[0], um)});"
        if name == "ROUND" and D == 10 and sizes == [10]:
            return f"x80_round({self.ptr(dest, um)},{self.ptr(args[0], um)});"
        if name == "FLOAT_NEG" and D == 10 and sizes == [10]:
            return f"x80_neg({self.ptr(dest, um)},{self.ptr(args[0], um)});"
        if name == "FLOAT_ABS" and D == 10 and sizes == [10]:
            return f"x80_abs({self.ptr(dest, um)},{self.ptr(args[0], um)});"
        if name == "FLOAT_NAN" and D == 1 and sizes == [10]:
            return self.wr(dest, f"x80_nan({self.ptr(args[0], um)})", um)
        if name in ("FLOAT_EQUAL", "FLOAT_NOTEQUAL", "FLOAT_LESS", "FLOAT_LESSEQUAL") and D == 1 and sizes == [10, 10]:
            cond = {"FLOAT_EQUAL": "k.eq&&!k.un", "FLOAT_NOTEQUAL": "!k.eq||k.un",
                    "FLOAT_LESS": "k.lt&&!k.un", "FLOAT_LESSEQUAL": "(k.lt||k.eq)&&!k.un"}[name]
            return "{X80Cmp k=x80_cmp(%s,%s);%s}" % (self.ptr(args[0], um), self.ptr(args[1], um),
                                                     self.wr(dest, f"u8({cond})", um))
        if name == "FLOAT2FLOAT":
            if D == 10 and sizes == [4]:
                return f"x80_from_f32({self.ptr(dest, um)},{self.rd(args[0], um)});"
            if D == 10 and sizes == [8]:
                return f"x80_from_f64({self.ptr(dest, um)},{self.rd(args[0], um)});"
            if D == 4 and sizes == [10]:
                return self.wr(dest, f"x80_to_f32({self.ptr(args[0], um)})", um)
            if D == 8 and sizes == [10]:
                return self.wr(dest, f"x80_to_f64({self.ptr(args[0], um)})", um)
        if name == "INT2FLOAT" and D == 10 and sizes[0] in SCALAR:
            return f"x80_from_i64({self.ptr(dest, um)},s64({SG[sizes[0]]}({self.rd(args[0], um)})));"
        if name == "TRUNC" and sizes == [10] and D in SCALAR:
            return self.wr(dest, f"{CT[D]}(x80_trunc({self.ptr(args[0], um)}))", um)
        # typed integer / SSE-float path
        if dest[2] in SCALAR and all(x[2] in SCALAR for x in args):
            a = self.rd(args[0], um) if args else None
            b = self.rd(args[1], um) if len(args) > 1 else None
            const_b = args[1][1] if len(args) > 1 and args[1][0] == "const" else None
            try:
                pre, expr = typed(name, D, sizes, a, b, const_b, ins.addr)
                return "{" + pre + self.wr(dest, expr, um) + "}" if pre else self.wr(dest, expr, um)
            except Fallback:
                pass
        return self.generic(name, dest, args, um, ins)

    INTEGER = set("COPY INT_ZEXT INT_SEXT INT_ADD INT_SUB INT_MULT INT_DIV INT_REM INT_SDIV INT_SREM INT_AND INT_OR INT_XOR INT_NEGATE INT_2COMP INT_LEFT INT_RIGHT INT_SRIGHT INT_EQUAL INT_NOTEQUAL INT_LESS INT_LESSEQUAL INT_SLESS INT_SLESSEQUAL INT_CARRY INT_SCARRY INT_SBORROW BOOL_NEGATE BOOL_AND BOOL_OR BOOL_XOR POPCOUNT SUBPIECE".split())
    FLOAT = set("FLOAT2FLOAT FLOAT_ABS FLOAT_ADD FLOAT_DIV FLOAT_EQUAL FLOAT_LESS FLOAT_LESSEQUAL FLOAT_MULT FLOAT_NAN FLOAT_NEG FLOAT_NOTEQUAL FLOAT_SQRT FLOAT_SUB INT2FLOAT ROUND TRUNC".split())

    def generic(self, name, dest, args, um, ins):
        """Reference semantics on 128-bit values; used for wide or unusual operand sizes."""
        if name in self.INTEGER:
            ns = [dest[2]] + [x[2] for x in args]
            value = f"eval<Op::{name},{','.join(map(str, ns))}>({','.join(self.rdv(x, um) for x in args)})"
            return self.wrv(dest, value, um)
        if name in self.FLOAT:
            b = args[1] if len(args) > 1 else ("const", 0, 4)
            value = f"float_op(\"{name}\",{self.rdv(args[0], um)},{args[0][2]},{self.rdv(b, um)},{b[2]},{dest[2]})"
            return self.wrv(dest, value, um)
        raise ValueError(f"No lowering for {name} at 0x{ins.addr:x}")


def merge_ranges(ranges, gap=16):
    merged = []
    for start, end in sorted(ranges):
        if merged and start <= merged[-1][1] + gap:
            merged[-1][1] = max(merged[-1][1], end)
        else:
            merged.append([start, end])
    return merged


def page_registers(insns):
    reads, writes = set(), set()
    for ins in insns:
        for op in ins.ops:
            if op[1] and op[1][0] == "register":
                writes.add((int(op[1][1], 16), int(op[1][1], 16) + op[1][2]))
            for node in op[2:]:
                if node and node[0] == "register":
                    o = int(node[1], 16)
                    reads.add((o, o + node[2]))
    loads = merge_ranges(reads | writes)
    spills = merge_ranges(writes)
    # Every spilled byte must also be loaded so untouched paths write back what they read.
    for s, e in spills:
        assert any(l <= s and e <= le for l, le in loads), (s, e)
    return loads, spills



import flaglive  # noqa: E402
SIMPLE = flaglive.SIMPLE


def ends_block(ins):
    """True if control may leave the straight-line sequence after this instruction (branches inside one instruction do not count)."""
    for op in ins.ops:
        if op[0] in ("CALL", "CALLIND", "BRANCHIND", "RETURN"):
            return True
        if op[0] in ("BRANCH", "CBRANCH") and op[2][0] != "const":
            return True
    return False


def analyze_blocks(insns, targets):
    count = len(insns)
    ends = [ends_block(i) for i in insns]
    leader = [idx == 0 or insns[idx].addr in targets or ends[idx - 1] or insns[idx - 1].addr + insns[idx - 1].length != insns[idx].addr
              for idx in range(count)]
    length = [0] * count
    for idx in reversed(range(count)):
        length[idx] = 1 if ends[idx] or idx == count - 1 or leader[idx + 1] else 1 + length[idx + 1]
    return {insns[idx].addr: (leader[idx], length[idx]) for idx in range(count)}


def emit_page(page, insns, live_out=None):
    if live_out is not None:
        for ins in insns:
            flaglive.prune(ins, live_out[ins.addr])
    addrs = {i.addr for i in insns}
    targets = set()
    for ins in insns:
        for op in ins.ops:
            if op[0] in ("BRANCH", "CBRANCH", "CALL") and op[2][0] == "ram":
                t = int(op[2][1], 16)
                if t in addrs:
                    targets.add(t)
    loads, spills = page_registers(insns)
    span = max([e for _, e in loads] + [8]) if loads else 8
    if span > 0x4000:
        raise ValueError("register file outside Cpu::regs")
    em = Emitter(page, addrs, targets)
    em.block_info = analyze_blocks(insns, targets)
    body = [em.instruction(i) for i in insns]
    entries = "".join(
        (f"case 0x{i.addr:x}:goto L{i.addr:x};\n" if em.block_info[i.addr][0] else f"case 0x{i.addr:x}:c.instructions+={em.block_info[i.addr][1]};goto B{i.addr:x};\n")
        for i in insns)
    load = "".join(f"__builtin_memcpy(R+{s},c.regs.data()+{s},{e - s});" for s, e in loads)
    spill = "".join(f"__builtin_memcpy(c.regs.data()+{s},R+{s},{e - s});" for s, e in spills)
    head = io.StringIO()
    head.write('#include "fast.hpp"\nnamespace nfsu2raw {\n')
    head.write("#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)\n")
    if TAIL_CALLS and MEMORY_REGS:
        referenced = sorted({int(m, 16) for m in re.findall(r"TAIL_STATIC\(0x[0-9a-f]+u,([0-9a-f]+)\)", "".join(body))})
        for pg in referenced:
            head.write(f"u32 body_{pg:x}(u8* __restrict R,Cpu& c);\n")
        head.write("u32 body_dispatch(u8* __restrict R,Cpu& c);\n")
        head.write(f"#define TAIL_STATIC(T,PG) do{{if(__builtin_expect(++c.chain<{CHAIN_LIMIT},1)){{c.pc=u32(T);NFSU2_TR_EXIT(0x{page:x},u32(T));[[clang::musttail]] return body_##PG(R,c);}}c.chain=0;EXIT(T);}}while(0)\n")
        lo, hi = min(ALL_PAGES), max(ALL_PAGES)
        head.write(f"#define TAIL_DYNAMIC(T) do{{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x{lo:x}u)<=0x{hi - lo:x}u && ++c.chain<{CHAIN_LIMIT},1)){{c.pc=t__;NFSU2_TR_EXIT(0x{page:x},t__);[[clang::musttail]] return body_dispatch(R,c);}}c.chain=0;EXIT(t__);}}while(0)\n")
    else:
        head.write("#define TAIL_STATIC(T,PG) EXIT(T)\n#define TAIL_DYNAMIC(T) EXIT(T)\n")
    head.write("#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)\n")
    if MEMORY_REGS:
        # The register file is Cpu::regs itself, reached through a noalias pointer: the optimizer may
        # forward and merge register accesses between guest-memory operations, but nothing is loaded on
        # entry or spilled on exit. Runtime services see the registers through NFSU2_BARRIER.
        head.write("#define SPILL() NFSU2_BARRIER(R)\n")
        head.write(f"u32 body_{page:x}(u8* __restrict R,Cpu& c);\n")
        head.write(f"u32 page_{page:x}(Cpu& c){{return body_{page:x}(c.regs.data(),c);}}\n")
        head.write(f"__attribute__((noinline)) u32 body_{page:x}(u8* __restrict R,Cpu& c){{\n")
        head.write("u32 nx=0,fpc=0;const char* fm=nullptr;\nswitch(c.pc){\n" + entries + "default:missing_instruction(c.pc);}\n")
        tail = (f"XIT:NFSU2_TR_EXIT(0x{page:x},nx);return nx;\n"
                "FLT:fast_fault(c,fm,fpc);\n"
                "#undef SPILL\n#undef EXIT\n#undef NFSU2_FAULT\n#undef TAIL_STATIC\n#undef TAIL_DYNAMIC\n}\n}\n")
    else:
        head.write(f"#define SPILL() do{{{spill}}}while(0)\n")
        head.write(f"u32 page_{page:x}(Cpu& c){{\n")
        head.write(f"alignas(16) u8 R[{(span + 15) & ~15}];\n{load}\nu32 nx=0,fpc=0;const char* fm=nullptr;\nswitch(c.pc){{\n" + entries + "default:missing_instruction(c.pc);}\n")
        tail = (f"XIT:SPILL();NFSU2_TR_EXIT(0x{page:x},nx);return nx;\n"
                "FLT:SPILL();fast_fault(c,fm,fpc);\n"
                "#undef SPILL\n#undef EXIT\n#undef NFSU2_FAULT\n#undef TAIL_STATIC\n#undef TAIL_DYNAMIC\n}\n}\n")
    return head.getvalue() + "".join(body) + tail


def write_if_changed(path, text):
    if not path.exists() or path.read_text(encoding="utf-8") != text:
        path.write_text(text, encoding="utf-8", newline="\n")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--pages", help="comma-separated hex pages (e.g. 573,574) for development builds")
    parser.add_argument("--out", default="generated_fast")
    parser.add_argument("--local-regs", action="store_true", help="register file as a per-page local copy")
    parser.add_argument("--track-pc", action="store_true", help="store the guest PC before every instruction so faults report it exactly")
    parser.add_argument("--mods", action="append", help="mod patch specification (default: mods/*_spec.json)")
    parser.add_argument("--no-mods", dest="use_mods", action="store_false", help="generate the unmodified game")
    parser.add_argument("--reg-params", nargs="?", const="x64", metavar="TARGET",
                        help="code shape: guest registers as function arguments. Default x86:3 (the three hottest, regcall; the shape of the product). "
                             "x64 (all eight, clang preserve_none) is for the benchmark harness; 'off' gives one function per 4 KiB page (reference "
                             "shape of the differential trace build). See tools/gen_regs.py and docs/REGISTER_PARAMS.md")
    parser.add_argument("--no-tail-calls", dest="tail_calls", action="store_false",
                        help="return to the dispatch loop on every page transfer")
    parser.add_argument("--no-x87-passthrough", dest="x87_passthrough", action="store_false",
                        help="lower x87 through the P-code stack model instead of the host FPU")
    parser.add_argument("--no-liveness", dest="liveness", action="store_false",
                        help="keep every flag computation (full-fidelity register hashes)")
    args = parser.parse_args()
    if args.reg_params is None:
        # The product shape unless an option that only exists in the page shape was asked for.
        page_only = args.local_regs or args.track_pc or not args.liveness or not args.tail_calls or args.pages
        args.reg_params = "off" if page_only else "x86:3"
    global MEMORY_REGS, TRACK_PC
    MEMORY_REGS = not args.local_regs
    TRACK_PC = args.track_pc
    only = {int(x, 16) for x in args.pages.split(",")} if args.pages else None
    export = ROOT / "export"
    out = ROOT / args.out
    out.mkdir(exist_ok=True)
    manifest = json.loads((export / "manifest.json").read_text())
    set_userops(manifest)
    original = ROOT.parent / "binaries/SPEED2.EXE"
    actual = hashlib.sha256(original.read_bytes()).hexdigest()
    if actual.lower() != manifest["input_sha256"].lower():
        raise ValueError("Ghidra program SHA-256 does not match the source binary")
    if (export / "memory_401000.bin").read_bytes() != (ROOT.parent / "data/text.bin").read_bytes():
        raise ValueError("Ghidra .text has been patched: export the original instruction stream")
    global TEXT, X87_PASSTHROUGH, TAIL_CALLS
    TEXT = (export / "memory_401000.bin").read_bytes()
    X87_PASSTHROUGH = args.x87_passthrough
    TAIL_CALLS = args.tail_calls and MEMORY_REGS
    regs = None
    if args.reg_params != "off":
        if not args.liveness:
            raise ValueError("--reg-params needs the flag liveness analysis")
        import gen_regs
        regs = gen_regs
        gen_regs.set_target(args.reg_params)
        TAIL_CALLS = True
        program = gen_regs.Program()
    specs = []
    if args.use_mods:
        specs = args.mods or sorted(str(f) for f in (ROOT / "mods").glob("*_spec.json"))
        if specs:
            load_mods(specs)
    with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
        for line in source:
            ALL_PAGES.add(int(line[line.index('"a":') + 4:].split(",", 1)[0]) >> 12)
    if only is not None:
        ALL_PAGES.intersection_update(only)
    pages = []
    current, batch, count = None, [], 0
    live_out = None
    info = {}
    if args.liveness:
        with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
            for line in source:
                raw = json.loads(line)
                info[raw["a"]] = flaglive.analyze(raw)
                if regs:
                    program.note(raw)
        live_out, rounds = flaglive.solve(info)
        print(f"Flag liveness solved over {len(info)} instructions in {rounds} rounds", flush=True)
        if regs:
            tables = json.loads((ROOT / "tools/static_jump_tables.json").read_text())
            program.add_external(ROOT, specs, MODS or {})
            program.finish(manifest, tables, info, live_out, ALL_PAGES, export)
            program.live_out, program.hook_addrs = live_out, set(MOD_HOOKS)
            reg_emitter = regs.make(sys.modules[__name__])
            print(f"Register-parameter lowering: {len(program.leaders)} leaders, {len(program.blocks)} block functions", flush=True)
    stats = {"ops": 0, "kept": 0}

    def flush():
        nonlocal batch
        if current is not None and (only is None or current in only):
            stats["ops"] += sum(len(i.ops) for i in batch)
            text = regs.emit_page_regs(sys.modules[__name__], reg_emitter, program, current, batch, live_out) if regs else emit_page(current, batch, live_out)
            stats["kept"] += sum(len(i.ops) for i in batch)
            write_if_changed(out / f"page_{current:05x}.cpp", text)
            pages.append(current)
        batch = []

    with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
        for line in source:
            ins = Insn(json.loads(line))
            if MODS:
                apply_mod_patches(ins)
            if info:
                ins.flags = info[ins.addr][3]
            page = ins.addr >> 12
            if page != current:
                flush()
                if page in pages:
                    raise ValueError("Instruction stream is not monotonically ordered")
                current = page
            batch.append(ins)
            count += 1
            if count % 100000 == 0:
                print(f"Lowered {count} instructions", flush=True)
    flush()
    with (out / "dispatch.cpp").open("w", encoding="utf-8", newline="\n") as f:
        f.write('#include "fast_regs.hpp"\nnamespace nfsu2raw {\n' if regs else '#include "fast.hpp"\nnamespace nfsu2raw {\n')
        for p in sorted(pages):
            f.write(f"u32 page_{p:x}(Cpu&);\n")
        if regs:
            for p in sorted(pages):
                f.write(f"PN u32 ent_{p:x}({regs.declare_args()});\n")
            f.write(f"PN u32 ent_dispatch({regs.declare_args()}){{switch(c.pc>>12){{\n")
            for p in sorted(pages):
                f.write(f"case 0x{p:x}:[[clang::musttail]] return ent_{p:x}({regs.arg_names()});\n")
            f.write("default:missing_instruction(c.pc);}}\n")
        elif TAIL_CALLS:
            for p in sorted(pages):
                f.write(f"u32 body_{p:x}(u8* __restrict R,Cpu& c);\n")
            f.write("u32 body_dispatch(u8* __restrict R,Cpu& c){switch(c.pc>>12){\n")
            for p in sorted(pages):
                f.write(f"case 0x{p:x}:[[clang::musttail]] return body_{p:x}(R,c);\n")
            f.write("default:missing_instruction(c.pc);}}\n")
        f.write("u32 dispatch(Cpu& c){switch(c.pc>>12){\n")
        for p in sorted(pages):
            f.write(f"case 0x{p:x}:return page_{p:x}(c);\n")
        f.write("default:missing_instruction(c.pc);}}\n")
        f.write(f"const uint64_t instruction_count={count};\nconst uint64_t pcode_count={manifest['pcode_count']};\n")
        f.write(f"const uint64_t function_count={len(manifest['functions'])};\n")
        f.write(f'const char input_sha256[]="{actual}";\n')
        f.write("const char* user_name(unsigned id){switch(id){\n")
        for n, name in manifest["userops"].items():
            f.write(f"case {n}:return {json.dumps(name)};\n")
        f.write('default:return "unknown";}}\n}\n')
    with (out / "mods_tables.cpp").open("w", encoding="utf-8", newline="\n") as f:
        f.write('#include "mods.hpp"\nnamespace nfsu2raw {\n')
        variables = MODS["vars"] if MODS else []
        f.write(f"uint32_t g_mod_vars[{max(len(variables), 1)}]={{{','.join(str(v) for _, v in variables) or '0'}}};\n")
        f.write(f"const char* const mod_var_names[{max(len(variables), 1)}]={{{','.join(json.dumps(n) for n, _ in variables) or 'nullptr'}}};\n")
        f.write(f"const unsigned mod_var_count={len(variables)};\n")
        f.write(f"void (*mod_hook_table[{max(len(MOD_HOOK_NAMES), 1)}])(Cpu&)={{}};\n")
        f.write(f"const char* const mod_hook_names[{max(len(MOD_HOOK_NAMES), 1)}]={{{','.join(json.dumps(n) for n in MOD_HOOK_NAMES) or 'nullptr'}}};\n")
        f.write(f"const unsigned mod_hook_count={len(MOD_HOOK_NAMES)};\n")
        f.write(f"thread_local uint8_t g_mod_bypass[{max(len(MOD_HOOK_NAMES), 1)}]={{}};\n")
        f.write(f"const ModDataAddress mod_data_addresses[{max(len(MOD_DATA), 1)}]={{{','.join('{' + json.dumps(d['name']) + ',' + hex(d['address']) + 'u}' for d in MOD_DATA) or '{nullptr,0}'}}};\n")
        f.write(f"const unsigned mod_data_count={len(MOD_DATA)};\n}}\n")
    print(json.dumps({"instructions": count, "pages": len(pages), "ops_before": stats["ops"], "ops_after": stats["kept"]}))


if __name__ == "__main__":
    main()
