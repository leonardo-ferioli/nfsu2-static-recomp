"""Every address that code outside the translation can transfer to must be an entry of the register-parameter shape.

    python tools/test_reg_entries.py <generated_fast dir> <export dir> <mods dir>

Checks the mod patch points (hook ranges, retargets, forced jumps, skipped instructions), every function entry of the export and
every address in the mod specifications against the `case 0x...: ... blk_...` entries of the generated pages. Does nothing for
the default shape (which has an entry for every instruction).
"""
import json
import re
import sys
from pathlib import Path

generated, export, mods = (Path(a) for a in sys.argv[1:4])
dispatch = (generated / "dispatch.cpp").read_text()
if "fast_regs.hpp" not in dispatch:
    print("default shape: every instruction is an entry; nothing to check")
    sys.exit(0)
entries = set()
for page in generated.glob("page_*.cpp"):
    entries |= {int(m, 16) for m in re.findall(r"case 0x([0-9a-f]+):\[\[clang::musttail\]\] return blk_", page.read_text())}
instructions = set()
import gzip
with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
    for line in source:
        instructions.add(json.loads(line)["a"])
wanted = {}
for spec in sorted(mods.glob("*_spec.json")):
    data = json.loads(spec.read_text())
    for h in data.get("hooks", []):
        wanted[h["begin"]] = f"{spec.name} hook {h['name']} begin"
        if h.get("end") is not None:
            wanted[h["end"]] = f"{spec.name} hook {h['name']} end"
    for e in data.get("retargets", []):
        wanted[e["old"]] = f"{spec.name} retarget old"
        wanted[e["new"]] = f"{spec.name} retarget new"
    for e in data.get("force_jumps", []):
        wanted[e["target"]] = f"{spec.name} forced jump target"
    for e in data.get("nops", []):
        wanted[e["insn"]] = f"{spec.name} skipped instruction"
manifest = json.loads((export / "manifest.json").read_text())
for f in manifest["functions"]:
    if not f.get("external") and f["entry"] in instructions:
        wanted.setdefault(f["entry"], f"function {f['name']}")
missing = sorted((a, why) for a, why in wanted.items() if a in instructions and a not in entries)
for a, why in missing[:40]:
    print(f"no entry for 0x{a:x} ({why})")
if missing:
    sys.exit(f"FAILED: {len(missing)} addresses have no entry in the generated code")
print(f"PASS {len(wanted)} addresses checked against {len(entries)} entries")
