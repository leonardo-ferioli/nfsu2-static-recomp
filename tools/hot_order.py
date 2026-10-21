"""Linker order file of the hot translated code from --profile reports (speed layer: code layout).

    python tools/hot_order.py --out tools/hot_order.txt (--profile <native_trace.log> <nfsu2_launcher.map> [--windows a-b])...

Each profile is resolved with the map of the launcher that wrote it; the 256-byte blocks it lists become symbols (generated
superblocks, the dispatch switches, the bridge), ranked by their total share, and are written one mangled name per line for
lld-link /order:@file. Names of generated code are guest addresses (blk_XXXXXX), so a profile of an older build still names the
same functions. Symbols the new build lacks are ignored by the linker (it only warns).
"""
import argparse
import re
from collections import defaultdict
from pathlib import Path

import profile_resolve as pr


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", required=True)
    ap.add_argument("--profile", nargs=2, action="append", metavar=("LOG", "MAP"), required=True)
    ap.add_argument("--windows", action="append", default=[], help="window range per profile, in the same order (default all)")
    args = ap.parse_args()
    weight = defaultdict(float)
    for i, (log, mapfile) in enumerate(args.profile):
        syms = pr.load_map(mapfile)
        res = pr.Resolver(syms, [])
        windows = pr.parse_windows(log)
        sel = range(1, len(windows) + 1)
        if i < len(args.windows) and args.windows[i]:
            a, _, b = args.windows[i].partition("-")
            sel = range(int(a), int(b or a) + 1)
        for w in sel:
            for rva, pct in windows[w - 1]["blocks"]:
                for sym, share in res.overlapping(rva):
                    name = sym[1]
                    if re.match(r"\?(blk_|ent_|ent_dispatch|ent_native|dispatch|plain_call|cached_call)", name) or "native32" in sym[2]:
                        weight[name] += pct * share
    ranked = sorted(weight.items(), key=lambda kv: -kv[1])
    Path(args.out).write_text("".join(f"{name}\n" for name, _ in ranked), encoding="utf-8", newline="\n")
    print(f"{len(ranked)} symbols, top: " + ", ".join(pr.short(n) for n, _ in ranked[:8]))


if __name__ == "__main__":
    main()
