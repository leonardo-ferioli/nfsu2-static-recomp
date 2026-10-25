#!/usr/bin/env python3
"""Inventory of the Win32 and DirectInput surface of SPEED2.EXE (input of docs/NUE_HANDOVER_WIN32_DINPUT.md and docs/legacy/*.tbl).

Sources, all local and read-only:
  * export/platform_imports.json        the 252 import slots of SPEED2.EXE (module, name)
  * native_trace.log files (any number)  "N dll!Name return=0x.." = first call of every (native target, guest return site); the 5 s PROFILE
                                         windows give calls per second for the hottest targets
  * native32.cpp / mods_*.cpp            what the bridge handles itself today (special names, override_import)
  * tools/win32_api_status.py            which Level A module answers each function and with what status (the table this tool prints)

    python tools/win32_inventory.py --trace a.log --trace b.log [--tbl docs/legacy] [--markdown out.md]

Counts are what the traced sessions show, not a proof of what the game never does: a function with 0 call sites was not reached in the traced
sessions (a menu, a race, a garage), and the table says so.
"""
import argparse, collections, json, os, re, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
import win32_api_status as status_table  # noqa: E402


def load_imports():
    with open(os.path.join(ROOT, "export", "platform_imports.json"), encoding="utf-8") as f:
        return json.load(f)["imports"]


def trace_counts(paths):
    sites = collections.defaultdict(set)
    rates = collections.defaultdict(list)
    windows = 0
    first = re.compile(r"^\d+ (\S+?)!(\S+) return=0x([0-9a-f]+)")
    rate = re.compile(r"^PROFILE\s+(\S+) calls/s=([\d.]+) per-frame=([\d.]+)")
    for path in paths:
        with open(path, encoding="utf-8", errors="replace") as f:
            for line in f:
                m = first.match(line)
                if m:
                    sites[m.group(2)].add(m.group(3))
                    continue
                if line.startswith("PROFILE window="):
                    windows += 1
                    continue
                m = rate.match(line)
                if m:
                    rates[m.group(1)].append(float(m.group(3)))
    per_frame = {k: sum(v) / max(len(v), 1) for k, v in rates.items()}
    return {k: len(v) for k, v in sites.items()}, per_frame, windows


def bridge_special():
    names = set()
    text = open(os.path.join(ROOT, "native32.cpp"), encoding="utf-8", errors="replace").read()
    m = re.search(r"special_names=\[\]\{\s*std::unordered_set<std::string_view> t=\{(.*?)\};", text, re.S)
    if m:
        names |= set(re.findall(r'"([A-Za-z0-9_]+)"', m.group(1)))
    return names


def mod_overrides():
    out = collections.defaultdict(list)
    for fn in sorted(os.listdir(ROOT)):
        if fn.startswith("mods_") and fn.endswith(".cpp"):
            text = open(os.path.join(ROOT, fn), encoding="utf-8", errors="replace").read()
            for name in re.findall(r'override_import\("([A-Za-z0-9_]+)"', text):
                out[name].append(fn)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--trace", action="append", required=True)
    ap.add_argument("--tbl", help="folder for win32.tbl / dinput8.tbl")
    ap.add_argument("--markdown")
    args = ap.parse_args()

    imports = load_imports()
    sites, per_frame, windows = trace_counts(args.trace)
    special, overrides = bridge_special(), mod_overrides()

    rows = []
    for imp in imports:
        name, dll = imp["name"], imp["dll"].lower()
        if dll in ("d3d9.dll", "ddraw.dll", "dsound.dll"):
            continue
        entry = status_table.lookup(dll, name)
        handled = []
        if name in special:
            handled.append("bridge")
        if name in overrides:
            handled.append("mod override (%s)" % ", ".join(sorted(set(overrides[name]))))
        rows.append(dict(dll=dll, name=name, sites=sites.get(name, 0), rate=per_frame.get(name), handled=" + ".join(handled) or "OS pass-through",
                         module=entry["module"], status=entry["status"], note=entry["note"]))

    lines = []
    lines.append("| Function | DLL | Call sites | Calls/frame | Today | Level A module | Status | Behaviour notes |")
    lines.append("|---|---|---:|---:|---|---|---|---|")
    for r in sorted(rows, key=lambda r: (r["dll"], r["module"], r["name"])):
        rate = "" if r["rate"] is None else ("%.1f" % r["rate"])
        lines.append("| %s | %s | %s | %s | %s | %s | %s | %s |" % (r["name"], r["dll"], r["sites"] or "0 (not reached)", rate, r["handled"], r["module"], r["status"], r["note"]))
    called = sum(1 for r in rows if r["sites"])
    header = "%d imports (graphics, DirectDraw and DirectSound entry points excluded), %d reached in the traced sessions (%d profile windows)\n\n" % (len(rows), called, windows)
    text = header + "\n".join(lines) + "\n"
    if args.markdown:
        open(args.markdown, "w", encoding="utf-8", newline="\n").write(text)
    else:
        sys.stdout.write(text)

    if args.tbl:
        os.makedirs(args.tbl, exist_ok=True)
        with open(os.path.join(args.tbl, "win32.tbl"), "w", encoding="utf-8", newline="\n") as f:
            for r in sorted(rows, key=lambda r: (r["dll"], r["name"])):
                f.write("%-14s %-34s since 1  status %-12s module %-10s sites %-3d %s\n" % (r["dll"], r["name"], r["status"], r["module"], r["sites"], r["note"]))
        with open(os.path.join(args.tbl, "dinput8.tbl"), "w", encoding="utf-8", newline="\n") as f:
            for line in status_table.dinput_rows():
                f.write(line + "\n")


if __name__ == "__main__":
    main()
