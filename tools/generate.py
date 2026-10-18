"""Lower Ghidra raw instruction P-code to literal, statically compiled C++.

This is a low-level translation: guest registers, addresses and explicit branches
are preserved. The original x86 code is never called or marked executable.
"""
from pathlib import Path
import collections
import gzip
import hashlib
import json
import io
import re

ROOT = Path(__file__).resolve().parents[1]
INTEGER = set("COPY INT_ZEXT INT_SEXT INT_ADD INT_SUB INT_MULT INT_DIV INT_REM INT_SDIV INT_SREM INT_AND INT_OR INT_XOR INT_NEGATE INT_2COMP INT_LEFT INT_RIGHT INT_SRIGHT INT_EQUAL INT_NOTEQUAL INT_LESS INT_LESSEQUAL INT_SLESS INT_SLESSEQUAL INT_CARRY INT_SCARRY INT_SBORROW BOOL_NEGATE BOOL_AND BOOL_OR BOOL_XOR POPCOUNT SUBPIECE".split())
FLOAT = set("FLOAT2FLOAT FLOAT_ABS FLOAT_ADD FLOAT_DIV FLOAT_EQUAL FLOAT_LESS FLOAT_LESSEQUAL FLOAT_MULT FLOAT_NAN FLOAT_NEG FLOAT_NOTEQUAL FLOAT_SQRT FLOAT_SUB INT2FLOAT ROUND TRUNC".split())


def number(node):
    return int(node[1], 16)


def read(node):
    space, off, size = node
    value = int(off, 16)
    if space == "const":
        return f"0x{value & ((1 << (size * 8)) - 1):x}ull"
    return f"{dict(register='r', unique='u', ram='m')[space]}<{size}>(c,0x{value:x})"


def write(node, value):
    space, off, size = node
    return f"{dict(register='wr', unique='wu', ram='wm')[space]}<{size}>(c,0x{int(off, 16):x},{value});"


def branch(node, index, count, address):
    if node[0] == "const":
        offset = number(node)
        if offset & (1 << 63):
            offset -= 1 << 64
        target = index + offset
        if not 0 <= target <= count:
            raise ValueError(f"invalid P-code branch at {address:x}: {target}")
        return f"goto L_{address:x}_{target};"
    if node[0] == "ram":
        return f"return 0x{number(node):x};"
    return f"return uint32_t({read(node)});"


def lower(ins, spaces):
    address = ins["a"]
    if "error" in ins:
        raise ValueError(f"Ghidra could not lift {address:x}")
    ops = ins["p"]
    labels = set()
    for i, op in enumerate(ops):
        if op[0] in ("BRANCH", "CBRANCH") and op[2][0] == "const":
            off = number(op[2])
            if off & (1 << 63):
                off -= 1 << 64
            labels.add(i + off)
    lines = [f"case 0x{address:x}:{{ // {ins['asm']}"]
    FPU_CONTROL, MXCSR = (0x10a0, 2), (0x1094, 4)

    def overlaps(node, reg):
        return bool(node) and node[0] == "register" and number(node) < reg[0] + reg[1] and reg[0] < number(node) + node[2]
    for i, op in enumerate(ops):
        if i in labels:
            lines.append(f"L_{address:x}_{i}:;")
        name, dest, *args = op
        mark = len(lines)
        sync_before, sync_after = [], []
        if any(overlaps(a, FPU_CONTROL) for a in args):
            sync_before.append("wr<2>(c,0x10a0,x87_store_control());")
        if any(overlaps(a, MXCSR) for a in args):
            sync_before.append("wr<4>(c,0x1094,mxcsr_store());")
        if overlaps(dest, FPU_CONTROL):
            if (number(dest), dest[2]) != FPU_CONTROL:
                raise ValueError(f"partial write of the x87 control word at {address:x}")
            sync_after.append("x87_load_control(uint16_t(r<2>(c,0x10a0)));")
        if overlaps(dest, MXCSR):
            if (number(dest), dest[2]) != MXCSR:
                raise ValueError(f"partial write of MXCSR at {address:x}")
            sync_after.append("mxcsr_load(uint32_t(r<4>(c,0x1094)));")
        if name in INTEGER:
            ns = [dest[2]] + [a[2] for a in args]
            value = f"eval<Op::{name},{','.join(map(str, ns))}>({','.join(read(a) for a in args)})"
            lines.append(write(dest, value))
        elif name in FLOAT:
            b = args[1] if len(args) > 1 else ["const", "0", 4]
            value = f"float_op(\"{name}\",{read(args[0])},{args[0][2]},{read(b)},{b[2]},{dest[2]})"
            lines.append(write(dest, value))
        elif name == "LOAD":
            spaces.add(number(args[0]))
            lines.append(write(dest, f"m<{dest[2]}>(c,{read(args[1])})"))
        elif name == "STORE":
            spaces.add(number(args[0]))
            lines.append(f"wm<{args[2][2]}>(c,{read(args[1])},{read(args[2])});")
        elif name in ("BRANCH", "CALL"):
            lines.append(branch(args[0], i, len(ops), address))
        elif name == "CBRANCH":
            lines.append(f"if({read(args[1])}){{{branch(args[0], i, len(ops), address)}}}")
        elif name in ("CALLIND", "BRANCHIND", "RETURN"):
            lines.append(f"return uint32_t({read(args[0])});")
        elif name == "CALLOTHER":
            # Carry the SLEIGH result width without changing the stable page ABI.
            # Low 16 bits: userop ID; high 16 bits: result width (zero for void).
            encoded = number(args[0]) | ((dest[2] if dest else 0) << 16)
            value = f"user_op(c,{encoded},{{{','.join(read(a) for a in args[1:])}}})"
            lines.append(write(dest, value) if dest else value + ";")
        else:
            raise ValueError(f"No lowering for {name} at 0x{address:x}")
        lines[mark:mark] = sync_before
        lines.extend(sync_after)
    if len(ops) in labels:
        lines.append(f"L_{address:x}_{len(ops)}:;")
    lines.append(f"return 0x{address+ins['n']:x};}}")
    return "\n".join(lines) + "\n"


def main():
    export = ROOT / "export"
    out = ROOT / "generated"
    out.mkdir(exist_ok=True)
    manifest = json.loads((export / "manifest.json").read_text())
    original = ROOT.parent / "binaries/SPEED2.EXE"
    actual = hashlib.sha256(original.read_bytes()).hexdigest()
    if actual.lower() != manifest["input_sha256"].lower():
        raise ValueError("Ghidra program SHA-256 does not match the source binary")
    if (export / "memory_401000.bin").read_bytes() != (ROOT.parent / "data/text.bin").read_bytes():
        raise ValueError("Ghidra .text has been patched: export the original instruction stream")
    pages = set()
    addresses = set()
    spaces = set()
    empty = collections.Counter()
    max_register = max_unique = count = 0
    page = None
    stream = None
    def flush_page():
        stream.write("default:missing_instruction(c.pc);}}\n}\n")
        contents=stream.getvalue()
        target=out / f"page_{page:05x}.cpp"
        if not target.exists() or target.read_text(encoding="utf-8")!=contents:
            target.write_text(contents,encoding="utf-8",newline="\n")
        stream.close()
    with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
        for line in source:
            ins = json.loads(line)
            new_page = ins["a"] >> 12
            if new_page != page:
                if stream:
                    flush_page()
                if new_page in pages:
                    raise ValueError("Instruction stream is not monotonically ordered")
                page = new_page
                pages.add(page)
                stream = io.StringIO()
                stream.write('#include "runtime.hpp"\nnamespace nfsu2raw {\n')
                stream.write(f"uint32_t page_{page:x}(Cpu& c){{switch(c.pc){{\n")
            if not ins["p"]:
                empty[ins["asm"].split()[0]] += 1
            for op in ins["p"]:
                for n in op[1:]:
                    if n:
                        if not 1 <= n[2] <= 16:
                            raise ValueError(f"Varnode width {n[2]} requires a different representation")
                        if n[0] == "register": max_register = max(max_register, number(n) + n[2])
                        if n[0] == "unique": max_unique = max(max_unique, number(n) + n[2])
            stream.write(lower(ins, spaces))
            addresses.add(ins["a"])
            count += 1
            if count % 100000 == 0:
                print(f"Lowered {count} instructions to C++", flush=True)
    if stream:
        flush_page()
    if max_register > 0x4000 or max_unique > 0x400000:
        raise ValueError(f"CPU storage too small: register={max_register:x}, unique={max_unique:x}")
    if spaces != {0x1a1}:
        raise ValueError(f"Unrecognized memory address spaces: {spaces}")
    missing = [f for f in manifest["functions"] if not f["external"] and f["entry"] not in addresses]
    with (out / "dispatch.cpp").open("w", encoding="utf-8", newline="\n") as f:
        f.write('#include "runtime.hpp"\nnamespace nfsu2raw {\n')
        for page in sorted(pages):f.write(f"uint32_t page_{page:x}(Cpu&);\n")
        f.write("uint32_t dispatch(Cpu& c){switch(c.pc>>12){\n")
        for page in sorted(pages):f.write(f"case 0x{page:x}:return page_{page:x}(c);\n")
        f.write("default:missing_instruction(c.pc);}}\n")
        f.write(f"const uint64_t instruction_count={count};\nconst uint64_t pcode_count={manifest['pcode_count']};\nconst uint64_t function_count={len(manifest['functions'])};\n")
        f.write(f'const char input_sha256[]="{actual}";\n')
        f.write("const char* user_name(unsigned id){switch(id){\n")
        for n, name in manifest["userops"].items():f.write(f"case {n}:return {json.dumps(name)};\n")
        f.write('default:return "unknown";}}\n}\n')
    userop_source = (ROOT / "userops.cpp").read_text(encoding="utf-8")
    handled_names = set(re.findall(r'name\s*==\s*"([^"]+)"', userop_source))
    handled_names.update(name for name in manifest["userop_counts"] if name.startswith("cpuid_"))
    handled_names.update(re.findall(r'\{"([A-Za-z0-9_]+)",uo::', userop_source))
    # Operations that stop the run on purpose: a trap, or an approximation whose hardware contract is unspecified.
    explicit_stops = {name for name in manifest["userop_counts"]
                      if name == "swi" or name == "FloatingReciprocalAprox" or name.startswith("PackedFloatingReciprocal")}
    handled_names -= explicit_stops
    report = {
        "input_sha256": actual,
        "language": manifest["language"],
        "translation": "raw SLEIGH P-code lowered to explicit C++ assignments and branches",
        "original_x86_execution_fallback": False,
        "identified_functions": len(manifest["functions"]),
        "translated_instructions": count,
        "translated_instruction_bytes": manifest["instruction_bytes"],
        "pcode_operations": manifest["pcode_count"],
        "translation_units": len(pages),
        "missing_function_entries": missing,
        "empty_pcode_instructions": dict(empty),
        "additional_disassembly_seeds": manifest.get("additional_disassembly_seeds", []),
        "additional_disassembly_results": manifest.get("additional_disassembly_results", []),
        "automatic_indexed_disassembly": manifest.get("automatic_indexed_disassembly", []),
        "userops_with_runtime_handlers": {name: count for name, count in manifest["userop_counts"].items() if name in handled_names},
        "userops_explicit_stop": {name: count for name, count in manifest["userop_counts"].items() if name in explicit_stops},
        "unresolved_userops": {name: count for name, count in manifest["userop_counts"].items()
                               if name not in handled_names and name not in explicit_stops},
        "userop_coverage_limit": "Handler presence is not proof of all operand widths, exceptions, or whole-game numerical equivalence; see runtime tests.",
        "unresolved_userop_behavior": "explicit runtime fault with operation name and guest PC",
        "native_import_bridge": "x86 Windows system API/COM calls; translated window, worker, multimedia timer and DirectInput enumeration callbacks. Guest SEH and additional callback contracts remain incomplete.",
        "gameplay_validated": False,
        "register_storage_used": max_register,
        "temporary_storage_used": max_unique,
    }
    (ROOT / "coverage.json").write_text(json.dumps(report, indent=2), encoding="utf-8")
    from instantiate import emit
    emit(ROOT)
    print(json.dumps({k:report[k] for k in ["translated_instructions","pcode_operations","translation_units"]}))


if __name__ == "__main__":
    main()
