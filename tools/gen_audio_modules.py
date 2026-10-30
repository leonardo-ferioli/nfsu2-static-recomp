#!/usr/bin/env python3
"""Translate the x86 code in the game's audio banks ahead of time (docs/AUDIO_MODULES.md, docs/AUDIO_MODULES_TRANSLATION.md).

    python tools/gen_audio_modules.py --decoder <decode_modules.exe> [--out generated_fast] [--only <hash prefix>]

Input: export/modules/audio_modules.json (tools/extract_audio_modules.py). For each distinct code range (key: code_sha256) the code is
decoded with SLEIGH (tools/decode_modules.cpp, generation time only) at TWO different base addresses, with the fixups resolved to
direct calls into the executable's functions and the relocations applied. A constant that moves with the base is a position of the
bank (code base + K), one that does not is absolute: that is how the position independent C++ is made without guessing which
immediates are addresses. Output (into --out): audio_<hash12>.cpp, one function per distinct range
    u32 audio_<hash12>(Cpu& c, u32 code_base)
which runs from c.pc (an address inside [code_base, code_base+size)) until control leaves the range and returns the new pc, and
audio_modules.cpp, the table the platform queries by the sha256 of the range (audio_modules.hpp).
"""
import argparse
import hashlib
import json
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
import generate_fast as GF  # noqa: E402

BASE0, BASE1 = 0x20000000, 0x30000000
DELTA = BASE1 - BASE0
MASK = 0xFFFFFFFF
FUNCTION_TABLE = 0x817FE0
ZONE = 0x00100000         # no absolute constant of the code may lie this close to a canonical base (the relativizing below is textual)
UNIQUE_BASE = 0x7F000000  # P-code unique offsets for the hoisted position constants


def load_modules():
    data = json.loads((ROOT / "export/modules/audio_modules.json").read_text())
    table_file = ROOT / "export/memory_7e8000.bin"
    table_bytes = table_file.read_bytes()
    base = 0x7E8000

    def function(index):
        return struct.unpack_from("<I", table_bytes, FUNCTION_TABLE - base + 4 * index)[0]

    modules = {}
    for bank in data["banks"]:
        key = bank["code_sha256"]
        code = bytes.fromhex(data["code"][key]["bytes"])
        cb, ce = bank["code_begin"], bank["code_end"]
        assert len(code) == ce - cb
        fixups = tuple(sorted((o - cb, i) for o, i in bank["fixups"] if cb <= o < ce))
        relocs = tuple(sorted((o - cb, v - cb) for o, v in bank["relocations"] if cb <= o < ce))
        # The only entry the bank names is its first byte. The section's fields at +0x30/+0x34 and the relocated words that point into the range
        # are data (tables), not code: they land in the middle of instructions. The other functions are found as code that follows a terminator
        # (function_starts) and, in the product, by the platform when the executable calls them.
        seeds = {0}
        m = modules.setdefault(key, {"hash": key, "code": code, "fixups": fixups, "relocs": relocs, "seeds": set(), "banks": []})
        if (m["fixups"], m["relocs"]) != (fixups, relocs):
            raise ValueError(f"banks with the same code bytes differ in their fixups or relocations: {bank['path']}")
        m["seeds"] |= seeds
        m["banks"].append(bank["path"])
    for m in modules.values():
        for _, index in m["fixups"]:
            if function(index) == 0:
                raise ValueError(f"function table entry {index} is empty in the exported image")
        m["function"] = function
    return modules


def patched(m, base):
    """The code as the loader leaves it for an image whose code starts at `base`."""
    code = bytearray(m["code"])
    marks = set()
    for offset, index in m["fixups"]:
        struct.pack_into("<I", code, offset, (m["function"](index) - (base + offset) - 4) & MASK)
        marks.update(range(offset, offset + 4))
    for offset, k in m["relocs"]:
        if marks.intersection(range(offset, offset + 4)):
            raise ValueError("a fixup and a relocation overlap")
        struct.pack_into("<I", code, offset, (base + k) & MASK)
    return bytes(code)


def run_decoder(decoder, sla, modules, seeds, base):
    lines = []
    for key, m in modules.items():
        lines.append(f"module {key} {base:x} {patched(m, base).hex()}")
        lines.extend(f"seed {s:x}" for s in sorted(seeds[key]))
        lines.append("end")
    with tempfile.TemporaryDirectory() as directory:
        spec = Path(directory) / "spec.txt"
        spec.write_text("\n".join(lines) + "\n")
        result = subprocess.run([str(decoder), str(sla), str(spec)], capture_output=True, text=True, check=False)
    if result.returncode:
        raise RuntimeError(result.stderr)
    found = {key: {} for key in modules}
    errors = {key: {} for key in modules}
    for line in result.stdout.splitlines():
        d = json.loads(line)
        key = d["m"]
        if "error" in d:
            errors[key][d["a"] - base] = d["error"]
        else:
            found[key][d["a"] - base] = d
    return found, errors


def terminator(mnemonic):
    return mnemonic in ("ret", "retf", "jmp", "ljmp", "hlt", "iret", "int3", "ud2")


def function_starts(m, found, md):
    """Offsets of unreached non-zero code that follows a terminator and decodes cleanly to the next terminator: more entries."""
    covered = set()
    for a, d in found.items():
        covered.update(range(a, a + d["n"]))
    code = m["code"]
    patched_code = patched(m, BASE0)
    new = set()
    a = 0
    n = len(code)
    while a < n:
        if a in covered:
            a += 1
            continue
        start = a
        while a < n and a not in covered:
            a += 1
        end = a
        if start == 0 or (start - 1) not in covered:
            continue
        previous = next((x for x, d in found.items() if x + d["n"] == start), None)
        if previous is None:
            continue
        # a function begins right after a terminator
        last = next(md.disasm(patched_code[previous:previous + 16], previous), None)
        if last is None or not terminator(last.mnemonic):
            continue
        if not any(patched_code[start:min(end, start + 8)]) or patched_code[start:start + 2] == b"\0\0":
            continue
        position, ok = start, True
        while position < end:
            ins = next(md.disasm(patched_code[position:position + 16], position), None)
            if ins is None or position + ins.size > end or ins.mnemonic in ("int1", "into", "sldt", "outsb", "outsd", "ljmp", "lds", "aaa", "aas", "daa", "das", "aam", "salc"):
                ok = False
                break
            position += ins.size
            if terminator(ins.mnemonic):
                break
        else:
            ok = False
        if ok:
            new.add(start)
    return new


def decode_all(modules, decoder, sla, only):
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    seeds = {key: set(m["seeds"]) for key, m in modules.items()}
    for round_ in range(8):
        found0, errors0 = run_decoder(decoder, sla, modules, seeds, BASE0)
        changed = False
        for key, m in modules.items():
            new = function_starts(m, found0[key], md) - seeds[key]
            if new:
                seeds[key] |= new
                changed = True
        print(f"discovery round {round_}: {sum(len(f) for f in found0.values())} instructions, "
              f"{sum(len(s) for s in seeds.values())} entries, {sum(len(e) for e in errors0.values())} decode errors", flush=True)
        if not changed:
            break
    found1, errors1 = run_decoder(decoder, sla, modules, seeds, BASE1)
    return seeds, found0, errors0, found1, errors1


def signed32(v):
    v &= MASK
    return v - (1 << 32) if v & 0x80000000 else v


def to_insns(key, f0, f1, size):
    """Instructions at canonical addresses with the position constants hoisted into RELCONST operations."""
    insns = []
    for rel in sorted(f0):
        d0, d1 = f0[rel], f1.get(rel)
        if d1 is None or d1["n"] != d0["n"] or len(d1["p"]) != len(d0["p"]):
            raise ValueError(f"{key}+{rel:#x}: the decode differs between the two bases")
        hoisted, ops = [], []
        for op0, op1 in zip(d0["p"], d1["p"]):
            if op0[0] != op1[0]:
                raise ValueError(f"{key}+{rel:#x}: operation {op0[0]} / {op1[0]}")
            new = [op0[0]]
            for j in range(1, len(op0)):
                v0, v1 = op0[j], op1[j]
                if v0 is None:
                    new.append(None)
                    continue
                if v0[0] != v1[0] or v0[2] != v1[2]:
                    raise ValueError(f"{key}+{rel:#x}: varnode {v0} / {v1}")
                o0, o1 = int(v0[1], 16), int(v1[1], 16)
                if v0[0] in ("register", "unique"):
                    if o0 != o1:
                        raise ValueError(f"{key}+{rel:#x}: register/unique offset moved")
                    new.append(v0)
                elif v0[0] == "ram":
                    if o0 == o1:
                        if BASE0 - ZONE <= o0 < BASE0 + size + ZONE:
                            raise ValueError(f"{key}+{rel:#x}: absolute target {o0:#x} near the canonical base")
                        new.append(v0)                 # a function of the executable
                    elif (o1 - o0) & MASK == DELTA:
                        new.append(["ram", format(o0, "x"), v0[2]])   # inside the bank: canonical address, relativized when written
                    else:
                        raise ValueError(f"{key}+{rel:#x}: ram operand {o0:#x} / {o1:#x}")
                else:  # const
                    if o0 == o1:
                        if v0[2] == 4 and BASE0 - ZONE <= o0 < BASE0 + size + ZONE:
                            raise ValueError(f"{key}+{rel:#x}: absolute constant {o0:#x} near the canonical base")
                        new.append(v0)
                    elif v0[2] == 4 and (o1 - o0) & MASK == DELTA and j >= 2:
                        k = signed32(o0 - BASE0)
                        temp = ["unique", format(UNIQUE_BASE + 16 * len(hoisted), "x"), 4]
                        hoisted.append(["RELCONST", temp, ["const", format(k & MASK, "x"), 4]])
                        new.append(temp)
                    else:
                        raise ValueError(f"{key}+{rel:#x}: constant {o0:#x} / {o1:#x} (size {v0[2]}, operand {j})")
            ops.append(new)
        raw = {"a": BASE0 + rel, "n": d0["n"], "asm": "", "p": hoisted + ops}
        insns.append(GF.Insn(raw))
    return insns


HEX = re.compile(r"0x([0-9a-f]+)(ull|u)?")


class ModuleEmitter(GF.Emitter):
    def on_page(self, address):
        return address in self.page_addrs   # the whole range is one function: falling through to the next instruction is a plain flow

    def arith(self, name, dest, args, um, ins):
        if name == "RELCONST":
            return self.wr(dest, f"u32(code+0x{args[0][1]:x}u)", um)
        return super().arith(name, dest, args, um, ins)


def relativize(text, size):
    def sub(match):
        value = int(match.group(1), 16)
        if BASE0 <= value < BASE0 + size + 1:
            return f"(code+0x{value - BASE0:x}u)"
        return match.group(0)
    return HEX.sub(sub, text)


def emit_unit(key, insns, size):
    GF.TAIL_CALLS = False
    GF.MEMORY_REGS = True
    addrs = {i.addr for i in insns}
    targets = set()
    for ins in insns:
        for op in ins.ops:
            if op[0] in ("BRANCH", "CBRANCH", "CALL") and op[2][0] == "ram":
                t = int(op[2][1], 16)
                if t in addrs:
                    targets.add(t)
    em = ModuleEmitter(BASE0 >> 12, addrs, targets)
    em.block_info = GF.analyze_blocks(insns, targets)
    body = [em.instruction(i) for i in insns]
    cases = "".join(
        (f"case 0x{i.addr - BASE0:x}:goto L{i.addr:x};\n" if em.block_info[i.addr][0] else
         f"case 0x{i.addr - BASE0:x}:c.instructions+={em.block_info[i.addr][1]};goto B{i.addr:x};\n") for i in insns)
    name = f"audio_{key[:12]}"
    head = ['#include "fast.hpp"', "namespace nfsu2raw {",
            "#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)",
            "#define TAIL_STATIC(T,PG) EXIT(T)", "#define TAIL_DYNAMIC(T) EXIT(T)",
            "#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)",
            "#define SPILL() NFSU2_BARRIER(R)",
            f"// code range sha256 {key}, {size} bytes, {len(insns)} instructions",
            f"__attribute__((noinline)) static u32 {name}_body(u8* __restrict R,Cpu& c,u32 code){{",
            "u32 nx=0,fpc=0;const char* fm=nullptr;", "switch(c.pc-code){"]
    text = "\n".join(head) + "\n" + cases + "default:missing_instruction(c.pc);}\n" + "".join(body)
    text += ("XIT:return nx;\nFLT:fast_fault(c,fm,fpc);\n#undef SPILL\n#undef EXIT\n#undef NFSU2_FAULT\n#undef TAIL_STATIC\n#undef TAIL_DYNAMIC\n}\n"
             f"u32 {name}(Cpu& c,u32 code){{return {name}_body(c.regs.data(),c,code);}}\n}}\n")
    return relativize(text, size)


def write_if_changed(path, text):
    GF.write_if_changed(path, text)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--decoder", required=True, help="decode_modules.exe (tools/build_decode_modules.sh)")
    parser.add_argument("--sla", default=str(ROOT / "third_party/sleigh_spec/x86.sla"))
    parser.add_argument("--out", default="generated_fast")
    parser.add_argument("--only", default=None, help="hash prefix: a development build of one range")
    args = parser.parse_args()
    modules = load_modules()
    manifest = json.loads((ROOT / "export/manifest.json").read_text())
    GF.set_userops(manifest)
    if args.only:
        modules = {k: m for k, m in modules.items() if k.startswith(args.only)}
    GF.TEXT = b""   # x87 goes through the P-code model: the translation is the same on every host
    GF.X87_MODE = "pcode"
    GF.X87_PASSTHROUGH = False
    seeds, found0, errors0, found1, errors1 = decode_all(modules, Path(args.decoder), args.sla, args.only)
    out = ROOT / args.out
    out.mkdir(exist_ok=True)
    rows = []
    for key, m in sorted(modules.items()):
        size = len(m["code"])
        if errors0[key] or errors1[key]:
            print(f"{key[:12]}: {len(errors0[key])} decode errors (first: {next(iter(errors0[key].items()))})")
        insns = to_insns(key, found0[key], found1[key], size)
        text = emit_unit(key, insns, size)
        write_if_changed(out / f"audio_{key[:12]}.cpp", text)
        rows.append((key, size, sorted(seeds[key]), len(insns), m["banks"]))
    registry = ['#include "audio_modules.hpp"', "namespace nfsu2raw {"]
    for key, size, entries, count, banks in rows:
        registry.append(f"uint32_t audio_{key[:12]}(Cpu& c,uint32_t code_base);")
        registry.append(f"static const uint32_t entries_{key[:12]}[]={{{','.join(f'0x{e:x}' for e in entries)}}};")
    registry.append("const AudioModule audio_modules[]={")
    for key, size, entries, count, banks in rows:
        registry.append(f'{{"{key}",{size},{count},&audio_{key[:12]},entries_{key[:12]},{len(entries)}}},   // {len(banks)} bank(s), e.g. {banks[0]}')
    registry.append("};")
    registry.append(f"const unsigned audio_module_count={len(rows)};")
    registry.append("}")
    write_if_changed(out / "audio_modules.cpp", chr(10).join(registry) + chr(10))
    print(json.dumps({"ranges": len(rows), "instructions": sum(r[3] for r in rows), "bytes": sum(r[1] for r in rows)}))


if __name__ == "__main__":
    main()
