"""Turn runtime 'no statically translated instruction' stops into disassembly seeds.

    python tools/add_runtime_seed.py logs/boot_trace.log 0x0047f7f0 ...

Each argument is either a log file (every `no statically translated instruction at 0x........`
line is used) or a hexadecimal address. New entries are OBSERVED (the game really branched there)
and required, so the next export must decode them. Existing seeds are never changed. After adding
seeds run `powershell tools/export.ps1`, `python tools/generate.py`, `python tools/generate_fast.py`
and rebuild: only the pages whose source changed are recompiled.
"""
from pathlib import Path
import hashlib
import json
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
identity = json.loads((ROOT / "export/manifest.json").read_text())["input_sha256"]
assert hashlib.sha256((ROOT.parent / "binaries/SPEED2.EXE").read_bytes()).hexdigest() == identity
seeds_path = ROOT / "tools/disassembly_seeds.json"
seeds = {int(s["address"], 16): s for s in json.loads(seeds_path.read_text())}
found = {}
for argument in sys.argv[1:]:
    path = Path(argument)
    if path.is_file():
        for line in path.open(encoding="utf-8", errors="replace"):
            match = re.search(r"no statically translated instruction at 0x([0-9a-fA-F]{8})", line)
            if match:
                found.setdefault(int(match[1], 16), f"{path.name}: {line.strip()[:160]}")
    else:
        found.setdefault(int(argument, 16), "address given on the command line")
added = 0
for address, evidence in sorted(found.items()):
    entry = seeds.get(address)
    if entry and entry.get("required", True) and entry.get("classification", "").startswith("OBSERVED"):
        continue
    seeds[address] = dict(address=hex(address), input_sha256=identity, required=True,
                          classification="OBSERVED_MISSING_CODE", evidence=f"Runtime stop: {evidence}")
    added += 1
seeds_path.write_text(json.dumps([seeds[a] for a in sorted(seeds)], indent=2) + "\n")
print(f"{len(found)} missing address(es) found, {added} seed(s) added or promoted, {len(seeds)} total")
