"""Resolve the hottest image blocks of a --profile log to symbols of the matching linker map.

    python tools/resolve_profile.py <native_trace.log> <nfsu2_launcher.map> [lines-from-end]
"""
import re
import sys
from bisect import bisect_right
from pathlib import Path

log, map_file = Path(sys.argv[1]), Path(sys.argv[2])
window = int(sys.argv[3]) if len(sys.argv) > 3 else 6
preferred_base = 0x400000
symbols = []
section_starts = {}
for line in map_file.read_text(errors="replace").splitlines():
    m = re.match(r"\s*0001:([0-9a-f]+)\s+([0-9a-f]+)H\s+(\S+)", line)
    m2 = re.match(r"\s*[0-9a-f]{4}:[0-9a-f]{8}\s+(\S+)\s+([0-9a-f]{8,16})\s+(?:f\s+)?(\S+)", line)
    if m2:
        symbols.append((int(m2.group(2), 16) - preferred_base, m2.group(1), m2.group(3)))
symbols.sort()
rvas = [s[0] for s in symbols]

def name(rva):
    i = bisect_right(rvas, rva) - 1
    if i < 0:
        return "?"
    sym = symbols[i][1]
    m = re.match(r"\?(body_[0-9a-f]+|page_[0-9a-f]+|blk_[0-9a-f]+|ent_[0-9a-f]+)@", sym)
    return (m.group(1) if m else sym[:70]) + f" (+0x{rva - rvas[i]:x}) [{symbols[i][2][:40]}]"

blocks = [l for l in log.read_text(errors="replace").splitlines() if "hottest 256-byte blocks of the launcher image" in l]
totals = {}
for l in blocks[-window:]:
    for rva, pct in re.findall(r"0x([0-9a-f]+)=([0-9.]+)%", l):
        key = name(int(rva, 16))
        base = key.split(" (+")[0]
        totals[base] = totals.get(base, 0.0) + float(pct) / min(window, len(blocks))
for base, pct in sorted(totals.items(), key=lambda kv: -kv[1])[:25]:
    print(f"{pct:5.2f}%  {base}")
