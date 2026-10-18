"""Generate an operation-level differential test: reference lowering vs fast lowering.

For every operation signature that occurs in the game's P-code (name, destination width,
argument widths, constant/register operand shape) this emits a one-operation pseudo-instruction
lowered twice -- by generate.py (the reference oracle) and by generate_fast.py -- plus a case table.
The C++ harness (optests_main.cpp) runs both on identical random and boundary register states and
compares the full register file, the returned PC, faults, and the memory arena.
"""
from pathlib import Path
import collections
import gzip
import json
import sys

HERE = Path(__file__).resolve().parent
ROOT = HERE.parent
sys.path.insert(0, str(HERE))
import generate as reference  # noqa: E402
import generate_fast as fast  # noqa: E402

PAGE_BASE = 0x40000  # fake pages: addresses 0x40000000 + i * 0x1000
DEST, A0, A1 = "400", "500", "600"
CONSTS = [0, 1, 2, 3, 7, 8, 0x1f, 0x20, 0x3f, 0x7f, 0x80, 0xff, 0x7fff, 0x8000, 0xffff, 0x7fffffff, 0x80000000, 0xffffffff]
SKIP = {"CALLOTHER", "CALLIND", "BRANCHIND", "RETURN"}


USEROP_SHAPES = collections.OrderedDict()   # (userop id, destination width, operand widths) seen in the game


def collect_signatures():
    sigs = collections.OrderedDict()
    with gzip.open(ROOT / "export/instructions.jsonl.gz", "rt", encoding="utf-8") as source:
        for line in source:
            ins = json.loads(line)
            for op in ins["p"]:
                name, dest, *args = op
                if name == "CALLOTHER":
                    USEROP_SHAPES[(int(args[0][1], 16), dest[2] if dest else 0, tuple(a[2] for a in args[1:]))] = True
                    continue
                if name in SKIP or name in ("BRANCH", "CBRANCH", "CALL"):
                    continue
                dsz = dest[2] if dest else 0
                asz = tuple(a[2] for a in args)
                const_flags = tuple(a[0] == "const" for a in args)
                key = (name, dsz, asz)
                entry = sigs.setdefault(key, {"consts": set(), "const_flags": set()})
                entry["const_flags"].add(const_flags)
                for a, is_const in zip(args, const_flags):
                    if is_const and name in ("SUBPIECE",) and a is args[1]:
                        entry["consts"].add(int(a[1], 16))
    return sigs


def register(off, size):
    return ["register", off, size]


def pseudo_cases(sigs):
    """Yield (label, ops, pointer registers, memory flag)."""
    for (name, dsz, asz), meta in sigs.items():
        if name in ("LOAD", "STORE"):
            continue
        shapes = set(meta["const_flags"]) | {tuple(False for _ in asz)}
        if len(asz) == 2:
            shapes.add((False, True))
        for flags in sorted(shapes):
            if name == "SUBPIECE":
                values = sorted(meta["consts"]) or [0]
            elif any(flags):
                values = CONSTS
            else:
                values = [None]
            for value in values:
                args = []
                for idx, (size, is_const) in enumerate(zip(asz, flags)):
                    if is_const:
                        args.append(["const", f"{(value or 0) & ((1 << (size * 8)) - 1):x}", size])
                    else:
                        args.append(register(A0 if idx == 0 else A1, size))
                dest = register(DEST, dsz) if dsz else None
                tag = "".join("c" if f else "r" for f in flags)
                label = f"{name}:{dsz}<-{','.join(map(str, asz))}:{tag}" + (f":k={value}" if value is not None else "")
                yield label, [[name, dest, *args]], [], False
    for (name, dsz, asz), meta in sigs.items():
        if name == "LOAD":
            yield f"LOAD:{dsz}<-{','.join(map(str, asz))}", [["LOAD", register(DEST, dsz), ["const", "1a1", asz[0]], register(A0, asz[1])]], [A0], True
        if name == "STORE":
            yield f"STORE:{','.join(map(str, asz))}", [["STORE", None, ["const", "1a1", asz[0]], register(A0, asz[1]), register(A1, asz[2])]], [A0], True
    # Runtime-free user operations: the reference user_op() against the direct calls of the fast backend.
    exercised = set(fast.PURE_USEROPS) | {"FastExitMediaState", "ffree"}
    for (uid, dsz, asz) in USEROP_SHAPES:
        name = fast.USEROP_NAMES.get(uid)
        if name not in exercised:
            continue
        args = [register(A0 if i == 0 else A1, size) for i, size in enumerate(asz)]
        dest = register(DEST if name != "ffree" else "10a4", dsz) if dsz else None
        yield f"CALLOTHER:{name}:{dsz}<-{','.join(map(str, asz))}", [["CALLOTHER", dest, ["const", f"{uid:x}", 4], *args]], [], False
    # Control flow: static branches leave the pseudo page.
    # The guest's x87 control word programs the host FPU (FLDCW) and reads it back (FNSTCW).
    yield "X87:FLDCW", [["COPY", register("10a0", 2), register(A0, 2)]], [], False
    yield "X87:FNSTCW", [["COPY", register(DEST, 2), register("10a0", 2)]], [], False
    yield "CBRANCH:ram", [["CBRANCH", None, ["ram", "50000000", 4], register(A0, 1)]], [], False
    yield "BRANCH:ram", [["BRANCH", None, ["ram", "50000010", 4]]], [], False
    yield "COPY:const4", [["COPY", register(DEST, 4), ["const", "12345678", 4]]], [], False


def main():
    out = ROOT / "generated_optests"
    out.mkdir(exist_ok=True)
    fast.set_userops(json.loads((ROOT / "export/manifest.json").read_text()))
    sigs = collect_signatures()
    cases = list(pseudo_cases(sigs))
    ref_lines = ['#include "runtime.hpp"', "namespace nfsu2raw {"]
    fast_text = ['#include "fast.hpp"', "namespace nfsu2raw {"]
    decls, rows = [], []
    spaces = set()
    for i, (label, ops, ptrs, memory) in enumerate(cases):
        page = PAGE_BASE + i
        addr = page << 12
        raw = {"a": addr, "n": 4, "asm": label, "p": ops}
        ref_lines.append("uint32_t ref_%d(Cpu& c){switch(c.pc){\n%sdefault:return 0;}}" % (i, reference.lower(raw, spaces)))
        page_text = fast.emit_page(page, [fast.Insn(raw)], None)
        fast_text.append(page_text.split("namespace nfsu2raw {\n", 1)[1].rsplit("}\n", 1)[0])
        decls.append("uint32_t ref_%d(Cpu&);uint32_t page_%x(Cpu&);" % (i, page))
        ptr_list = ",".join("0x%x" % int(p, 16) for p in ptrs) or "0"
        rows.append("{%s,0x%xu,ref_%d,page_%x,%d,{%s},%s}," % (json.dumps(label), addr, i, page, len(ptrs), ptr_list, "true" if memory else "false"))
    ref_lines.append("}")
    fast_text.append("}")
    table_text = "\n".join(['#include "optests.hpp"', "namespace nfsu2raw {"] + decls +
                           ["extern const OpCase op_cases[];", "const OpCase op_cases[] = {"] + rows +
                           ["};", "extern const unsigned op_case_count;", "const unsigned op_case_count=%d;" % len(cases), "}", ""])
    for name, text in (("optests_ref.cpp", "\n".join(ref_lines)), ("optests_fast.cpp", "\n".join(fast_text)),
                       ("optests_table.cpp", table_text)):
        target = out / name
        if not target.exists() or target.read_text(encoding="utf-8") != text:
            target.write_text(text, encoding="utf-8", newline="\n")
    print(f"{len(cases)} operation cases from {len(sigs)} signatures")


if __name__ == "__main__":
    main()
