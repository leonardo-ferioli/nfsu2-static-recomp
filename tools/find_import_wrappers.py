"""List small guest functions that only call an import (benchmark candidates for the native-call path).

    python tools/find_import_wrappers.py [--export export] [--max-insns 6]
"""
import argparse
import gzip
import json
import re
from collections import defaultdict
from pathlib import Path


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--export", default="export")
    ap.add_argument("--max-insns", type=int, default=6)
    args = ap.parse_args()
    m = json.loads((Path(args.export) / "manifest.json").read_text())
    small = {f["entry"]: f for f in m["functions"] if not f.get("external") and f["size"] <= 40}
    body = defaultdict(list)
    with gzip.open(Path(args.export) / "instructions.jsonl.gz", "rt") as fh:
        for line in fh:
            if not line.strip():
                continue
            d = json.loads(line)
            body_key = None
            a = d["a"]
            # small functions are contiguous: look for an entry at most 40 bytes back
            for e in range(a, a - 41, -1):
                if e in small and a < e + small[e]["size"]:
                    body_key = e
                    break
            if body_key is not None:
                body[body_key].append(d["asm"])
    for e, ins in sorted(body.items()):
        if len(ins) <= args.max_insns and any(re.match(r"CALL dword ptr \[0x[0-9a-f]+\]", x) for x in ins) and ins[-1].startswith("RET"):
            print(f"{e:#x} {small[e]['name']}: " + " ; ".join(ins))


if __name__ == "__main__":
    main()
