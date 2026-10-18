"""Emit shared template instantiations so the raw build does not duplicate helpers."""
from pathlib import Path
import re


def emit(root):
    generated = root / "generated"
    signatures = set()
    for p in generated.glob("page_*.cpp"):
        for op, sizes in re.findall(r"eval<Op::([A-Z0-9_]+),([0-9,]+)>", p.read_text(encoding="utf-8")):
            ns = list(map(int, sizes.split(",")))
            if len(ns) == 2:
                ns.append(1)
            signatures.add(f"V eval<Op::{op},{','.join(map(str, ns))}>(V,V)")
    for n in [1, 2, 4, 8, 10, 16]:
        for name in ["r", "u"]:
            signatures.add(f"V {name}<{n}>(Cpu&,uint32_t)")
        signatures.add(f"V m<{n}>(Cpu&,V)")
        for name in ["wr", "wu"]:
            signatures.add(f"void {name}<{n}>(Cpu&,uint32_t,V)")
        signatures.add(f"void wm<{n}>(Cpu&,V,V)")
    declarations = "".join("extern template " + x + ";\n" for x in sorted(signatures))
    definitions = "".join("template " + x + ";\n" for x in sorted(signatures))
    for name,contents in [("extern_templates.inc",declarations),("template_instantiations.inc",definitions)]:
        target=generated/name
        if not target.exists() or target.read_text(encoding="utf-8")!=contents:
            target.write_text(contents,encoding="utf-8")
    print(f"Shared helper template instantiations: {len(signatures)}", flush=True)


if __name__ == "__main__":
    emit(Path(__file__).resolve().parents[1])
