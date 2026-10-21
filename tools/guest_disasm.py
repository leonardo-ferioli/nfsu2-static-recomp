"""Print the exported disassembly of guest functions (by entry or any address inside), with call targets.

    python tools/guest_disasm.py 0x669286 0x662ecc [--export export] [--max 400]
"""
import argparse
import bisect
import gzip
import json
from pathlib import Path


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("addrs", nargs="+")
    ap.add_argument("--export", default="export")
    ap.add_argument("--max", type=int, default=400)
    args = ap.parse_args()
    m = json.loads((Path(args.export) / "manifest.json").read_text())
    funcs = sorted((f["entry"], f) for f in m["functions"] if not f.get("external"))
    entries = [e for e, _ in funcs]
    want = []
    for a in args.addrs:
        a = int(a, 16)
        i = bisect.bisect_right(entries, a) - 1
        f = funcs[i][1]
        for lo, hi in f["ranges"]:
            if lo <= a <= hi:
                break
        else:
            print(f"{a:#x}: no function contains it")
            continue
        want.append(f)
    ranges = [(lo, hi, f) for f in want for lo, hi in f["ranges"]]
    ins = {}
    with gzip.open(Path(args.export) / "instructions.jsonl.gz", "rt") as fh:
        for line in fh:
            if not line.strip():
                continue
            d = json.loads(line)
            a = d["a"]
            for lo, hi, f in ranges:
                if lo <= a <= hi:
                    ins.setdefault(f["entry"], []).append((a, d["asm"]))
    for f in want:
        lst = sorted(ins.get(f["entry"], []))
        print(f"\n== {f['name']} entry {f['entry']:#x} size {f['size']} ({len(lst)} instructions)")
        for a, asm in lst[:args.max]:
            print(f"  {a:06x}  {asm}")


if __name__ == "__main__":
    main()
