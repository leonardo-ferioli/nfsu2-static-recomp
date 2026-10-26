"""Resolve the launcher's --profile report (logs/native_trace.log) to translated guest functions.

The report lists the hottest 256-byte blocks of the launcher image by RVA and the callers of time spent in system
modules ("ntdll.dll <- launcher code, RVA 0x...").  With the linker map of the very same build (nfsu2_launcher.map,
written next to the executable) every RVA becomes a host symbol; generated superblocks (blk_XXXXXX) become guest
addresses and, through export/manifest.json, guest functions.

    python tools/profile_resolve.py --map build32/nfsu2_launcher.map --log logs/native_trace.log [--export export]
           [--windows 3-9] [--top 40]

Windows are the 5 s PROFILE blocks of the log, numbered from 1 (printed with their FPS so a race can be picked).
"""
import argparse
import bisect
import json
import re
from collections import defaultdict
from pathlib import Path

IMAGE_BASE = 0x400000


def load_map(path):
    syms = []
    in_publics = False
    for line in Path(path).read_text(errors="replace").splitlines():
        if "Publics by Value" in line:
            in_publics = True
            continue
        if not in_publics:
            continue
        parts = line.split()
        if len(parts) < 3 or ":" not in parts[0]:
            continue
        try:
            va = int(parts[2], 16)
        except ValueError:
            continue
        if va < IMAGE_BASE:
            continue
        name = parts[1]
        obj = parts[3] if len(parts) > 3 else ""
        syms.append((va - IMAGE_BASE, name, obj))
    syms.sort()
    return syms


def short(name):
    m = re.match(r"\?([^@]+)@", name)
    if m:
        return m.group(1)
    return name.lstrip("_")


class Resolver:
    def __init__(self, syms, functions):
        self.syms = syms
        self.starts = [s[0] for s in syms]
        self.functions = functions   # sorted [(start, end, entry, name)]
        self.fstarts = [f[0] for f in functions]

    def at(self, rva):
        i = bisect.bisect_right(self.starts, rva) - 1
        return self.syms[i] if i >= 0 else (0, "?", "")

    def overlapping(self, rva, size=256):
        """[(symbol, share)] of the host code in [rva, rva+size)."""
        i = max(bisect.bisect_right(self.starts, rva) - 1, 0)
        out = []
        while i < len(self.syms) and self.syms[i][0] < rva + size:
            lo = max(self.syms[i][0], rva)
            hi = min(self.syms[i + 1][0] if i + 1 < len(self.syms) else rva + size, rva + size)
            if hi > lo:
                out.append((self.syms[i], (hi - lo) / size))
            i += 1
        return out or [(self.at(rva), 1.0)]

    def guest_function(self, addr):
        i = bisect.bisect_right(self.fstarts, addr) - 1
        while i >= 0:
            start, end, entry, name = self.functions[i]
            if start <= addr <= end:
                return f"{name}"
            if start < addr - 0x10000:
                break
            i -= 1
        return "?"

    def describe(self, sym):
        name = short(sym[1])
        m = re.match(r"blk_([0-9a-f]+)$", name)
        if m:
            g = int(m.group(1), 16)
            return f"guest {g:#x} in {self.guest_function(g)}", self.guest_function(g)
        m = re.match(r"ent_([0-9a-f]+)$", name)
        if m:
            return f"page entry switch ent_{m.group(1)} (dynamic transfer)", "(dispatch: page switch)"
        if name == "ent_dispatch":
            return "ent_dispatch (dynamic transfer)", "(dispatch: ent_dispatch)"
        obj = sym[2].split(":")[-1]
        return f"{name} [{obj}]", f"{name} [{obj}]"


def load_functions(export):
    path = Path(export) / "manifest.json"
    if not path.exists():
        return []
    m = json.loads(path.read_text())
    out = []
    for f in m["functions"]:
        if f.get("external"):
            continue
        for lo, hi in f.get("ranges", []):
            out.append((lo, hi, f["entry"], f["name"]))
    out.sort()
    return out


def parse_windows(log):
    windows = []
    cur = None
    for line in Path(log).read_text(errors="replace").splitlines():
        if line.startswith("PROFILE FPS="):
            cur = {"head": line, "blocks": [], "callers": [], "lines": []}
            windows.append(cur)
            continue
        if cur is None or not line.startswith("PROFILE"):
            continue
        cur["lines"].append(line)
        if "hottest 256-byte blocks of the launcher image" in line:
            for rva, pct in re.findall(r"0x([0-9a-f]+)=([0-9.]+)%", line):
                cur["blocks"].append((int(rva, 16), float(pct)))
        m = re.match(r"PROFILE\s+([0-9.]+)% (\S+) <- launcher code, RVA 0x([0-9a-f]+)", line)
        if m:
            cur["callers"].append((float(m.group(1)), m.group(2), int(m.group(3), 16)))
    return windows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--map", required=True)
    ap.add_argument("--log", required=True)
    ap.add_argument("--export", default="export")
    ap.add_argument("--windows", default="")
    ap.add_argument("--top", type=int, default=40)
    args = ap.parse_args()
    res = Resolver(load_map(args.map), load_functions(args.export))
    windows = parse_windows(args.log)
    for i, w in enumerate(windows, 1):
        fps = re.search(r"FPS=([0-9.]+)", w["head"])
        instr = next((re.search(r"instructions/s=([0-9.]+)M", l) for l in w["lines"] if "instructions/s=" in l), None)
        print(f"window {i}: FPS {fps.group(1) if fps else '?'} guest instr/s {instr.group(1) if instr else '?'}M blocks {len(w['blocks'])}")
    sel = range(1, len(windows) + 1)
    if args.windows:
        a, _, b = args.windows.partition("-")
        sel = range(int(a), int(b or a) + 1)
    by_sym = defaultdict(float)
    by_func = defaultdict(float)
    callers = defaultdict(float)
    n = 0
    for i in sel:
        w = windows[i - 1]
        n += 1
        for rva, pct in w["blocks"]:
            for sym, share in res.overlapping(rva):
                d, f = res.describe(sym)
                by_sym[d] += pct * share
                by_func[f] += pct * share
        for pct, mod, rva in w["callers"]:
            d, _ = res.describe(res.at(rva))
            callers[f"{mod} <- {d}"] += pct
    n = max(n, 1)
    print(f"\n== {n} windows; shares are % of main-thread instruction-pointer samples (launcher image only listed blocks)")
    print("\n-- by guest function / host function")
    for k, v in sorted(by_func.items(), key=lambda kv: -kv[1])[:args.top]:
        print(f"{v / n:6.2f}%  {k}")
    print("\n-- by host symbol")
    for k, v in sorted(by_sym.items(), key=lambda kv: -kv[1])[:args.top]:
        print(f"{v / n:6.2f}%  {k}")
    print("\n-- time in system modules by launcher caller")
    for k, v in sorted(callers.items(), key=lambda kv: -kv[1])[:args.top]:
        print(f"{v / n:6.2f}%  {k}")


if __name__ == "__main__":
    main()
