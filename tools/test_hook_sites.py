"""The interface-anchoring hooks (fe_*) of the mods exist in the generated fast code where mods/*_spec.json says.

These hooks replace single loads inside one translated routine (the quad and line routines of the interface); a regenerated tree
(speed layer, register parameters, hot layout) must keep exactly one call site per hook, at the specified address, that
  * is guarded by the hook table slot of that hook's name,
  * stores the hook's address in c.pc before calling, and
  * for the replaced loads (fe_quad_*, fe_line_*) continues at the end of the replaced range.

usage: test_hook_sites.py <generated_fast dir> <mods dir>
"""
from pathlib import Path
import json
import re
import sys


def main():
    fast, mods = Path(sys.argv[1]), Path(sys.argv[2])
    tables = (fast / "mods_tables.cpp").read_text(encoding="utf-8")
    names = re.search(r"mod_hook_names\[\d+\]=\{(.*?)\};", tables, re.S).group(1)
    index = {name.strip().strip('"'): i for i, name in enumerate(names.split(","))}
    specs = [json.loads(path.read_text()) for path in sorted(mods.glob("*_spec.json"))]
    hooks = [hook for spec in specs for hook in spec.get("hooks", []) if hook["name"].startswith("fe_")]
    assert hooks, "no hooks in the specifications"
    text = {}
    for page in fast.glob("page_*.cpp"):
        text[int(page.stem.split("_")[1], 16)] = page.read_text(encoding="utf-8")
    failures = []
    for hook in hooks:
        name, begin, end, mode = hook["name"], hook["begin"], hook.get("end"), hook["mode"]
        if name not in index:
            failures.append(f"{name}: not in mod_hook_names")
            continue
        slot = index[name]
        site = re.compile(rf"if\(mod_hook_table\[{slot}\]\)\{{SPILL_OUT\(\);c\.pc=0x{begin:x}u;mod_hook_table\[{slot}\]\(c\);SPILL_IN\(\);if\(c\.pc!=0x{begin:x}u\)\{{TAIL_DYNAMIC\(c\.pc\);\}}(.*?)\}}\n", re.S)
        source = text.get(begin >> 12, "")
        found = site.findall(source)
        if len(found) != 1:
            failures.append(f"{name} (slot {slot}, 0x{begin:x}): {len(found)} call sites in page {begin >> 12:x}, expected 1")
            continue
        if mode == "replace" and end and name.startswith(("fe_quad_", "fe_line_")) and f"blk_{end:x}(" not in found[0]:
            failures.append(f"{name}: continues elsewhere than 0x{end:x}: {found[0][:80]}")
    if failures:
        print("\n".join(failures))
        return 1
    print(f"{len(hooks)} hooks, each with one call site at its address")
    return 0


if __name__ == "__main__":
    sys.exit(main())
