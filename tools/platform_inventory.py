#!/usr/bin/env python3
"""Inventory of the operating-system services the translated game uses (input of docs/PLATFORM_API.md).

Sources, all local and read-only:
  * export/platform_imports.json          the 252 import slots of SPEED2.EXE
  * logs/native_trace.log (any number)    first call of every (native target, guest return site) and the 5 s PROFILE windows
  * export/memory_401000.bin              the game's .text, only to decode the COM call at a recorded return site (slot number)
  * Windows SDK headers (d3d9.h, dinput.h, dsound.h, ddraw.h)  method names and argument counts, in vtable order

Output: Markdown tables on standard output (no game bytes, only counts and names). Nothing is written to the repository.

    python tools/platform_inventory.py --trace <native_trace.log> [--sdk <Include/10.0.x.y>] [--json out.json]

How COM calls are attributed. The trace line "RETURN target=T guest=R EAX=.. stack-pop=P" says that the native function at T was
called from the instruction that precedes guest address R and popped P bytes (return address included, so P/4-1 argument words,
`this` included). The instruction before R is "call [reg+disp]" (FF /2); disp/4 is the vtable slot. Targets are grouped into address
clusters (one cluster per system DLL); the interface of a cluster is the one whose method table agrees with the slot AND the
argument count of the most targets. That is evidence, not proof; the table below says how many targets agreed.
"""
import argparse, collections, json, os, re, struct, sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)

# --------------------------------------------------------------------------------------------------------------------------
# 1. COM interface tables from the SDK headers
# --------------------------------------------------------------------------------------------------------------------------
INTERFACE_FILES = {"shared/d3d9.h", "um/dinput.h", "um/dsound.h", "um/ddraw.h"}
WANTED = [
    "IDirect3D9", "IDirect3DDevice9", "IDirect3DSwapChain9", "IDirect3DSurface9", "IDirect3DTexture9", "IDirect3DCubeTexture9",
    "IDirect3DVolumeTexture9", "IDirect3DVertexBuffer9", "IDirect3DIndexBuffer9", "IDirect3DVertexDeclaration9",
    "IDirect3DVertexShader9", "IDirect3DPixelShader9", "IDirect3DStateBlock9", "IDirect3DQuery9",
    "IDirectInput8A", "IDirectInputDevice8A", "IDirectSound", "IDirectSoundBuffer", "IDirectSound8", "IDirectSoundBuffer8",
    "IDirectDraw", "IDirectDraw2", "IDirectDraw4", "IDirectDraw7", "IDirectDrawSurface", "IDirectDrawSurface7",
]


def split_params(text):
    depth, cur, out = 0, "", []
    for ch in text:
        if ch in "(<[":
            depth += 1
        elif ch in ")>]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip()); cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def parse_headers(sdk):
    """name -> {'base': name|None, 'methods': [(method, words_after_this)]} (own methods only)."""
    interfaces = {}
    for rel in INTERFACE_FILES:
        path = os.path.join(sdk, rel)
        if not os.path.exists(path):
            continue
        text = open(path, encoding="latin-1").read()
        text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
        # strip C++ line comments
        text = re.sub(r"//[^\n]*", "", text)
        for m in re.finditer(r"DECLARE_INTERFACE_\(\s*(\w+)\s*,\s*(\w+)\s*\)\s*\{(.*?)\n\};", text, flags=re.S):
            name, base, body = m.group(1), m.group(2), m.group(3)
            methods = []
            for s in re.finditer(r"STDMETHOD(?:_\(\s*[^,()]+,\s*(\w+)\s*\)|\(\s*(\w+)\s*\))\s*\(\s*(.*?)\)\s*PURE\s*;", body, flags=re.S):
                params = s.group(3).strip()
                if params.startswith("THIS_"):
                    params = params[len("THIS_"):].strip()
                elif params.startswith("THIS"):
                    params = ""
                n = len(split_params(params)) if params and params != "VOID" else 0
                methods.append((s.group(1) or s.group(2), n))
            interfaces[name] = {"base": None if base == "IUnknown" else base, "methods": methods}
    return interfaces


def vtable(interfaces, name):
    """Full method list in vtable order as (method, words_including_this).

    The SDK headers list every method of an interface (IUnknown's included) in its own DECLARE_INTERFACE_ block, so the own list is
    already the vtable; a header that only lists the new methods is completed with its base."""
    if name not in interfaces:
        return []
    own = [(m, n + 1) for m, n in interfaces[name]["methods"]]
    if own and own[0][0] == "QueryInterface":
        return own
    base = interfaces[name]["base"]
    head = vtable(interfaces, base) if base else [("QueryInterface", 3), ("AddRef", 1), ("Release", 1)]
    return head + own


# --------------------------------------------------------------------------------------------------------------------------
# 2. Trace log
# --------------------------------------------------------------------------------------------------------------------------
CALL_RE = re.compile(r"^(\d+) (?P<dll>[A-Za-z0-9_]+\.dll|Windows)!(?P<name>\S+) return=0x(?P<ret>[0-9a-f]+)")
RET_RE = re.compile(r"^RETURN target=0x(?P<t>[0-9a-f]+) guest=0x(?P<r>[0-9a-f]+) EAX=0x(?P<eax>[0-9a-f]+) stack-pop=(?P<pop>\d+)")
PROFILE_RE = re.compile(r"^PROFILE\s+(?P<name>\S+) calls/s=(?P<cps>[0-9.]+) per-frame=(?P<pf>[0-9.]+)")
PROFILE_TIME_RE = re.compile(r"^PROFILE\s+(?P<name>\S+) (?P<ms>[0-9.]+) ms/frame \((?P<pct>[0-9.]+)% of wall time\)")
FPS_RE = re.compile(r"^PROFILE FPS=(?P<fps>[0-9.]+)")


def parse_trace(paths):
    imports_used = collections.Counter()      # import name -> distinct call sites
    com_sites = collections.defaultdict(set)  # target -> {return sites}
    com_pop = {}                              # target -> stack-pop
    per_frame = collections.defaultdict(list)  # name -> [per-frame counts of the windows that listed it]
    ms_frame = collections.defaultdict(list)
    fps = []
    for path in paths:
        pending = None
        for line in open(path, encoding="utf-8", errors="replace"):
            line = line.rstrip("\n")
            m = CALL_RE.match(line)
            if m:
                if m["name"] != "system-COM-or-dynamic-call":
                    imports_used[m["name"]] += 1
                pending = m
                continue
            m = RET_RE.match(line)
            if m:
                if pending is not None and pending["name"] == "system-COM-or-dynamic-call" and pending["ret"] == m["r"]:
                    t = int(m["t"], 16)
                    com_sites[t].add(int(m["r"], 16))
                    com_pop[t] = int(m["pop"])
                pending = None
                continue
            m = PROFILE_RE.match(line)
            if m:
                per_frame[m["name"]].append(float(m["pf"])); continue
            m = PROFILE_TIME_RE.match(line)
            if m:
                ms_frame[m["name"]].append(float(m["ms"])); continue
            m = FPS_RE.match(line)
            if m:
                fps.append(float(m["fps"]))
    return imports_used, com_sites, com_pop, per_frame, ms_frame, fps


def decode_slot(text, base, ret):
    """vtable slot of the 'call [reg+disp]' that ends at guest address `ret`, or None."""
    o = ret - base
    if o < 6 or o > len(text):
        return None
    b = text
    if b[o - 6] == 0xFF and (b[o - 5] & 0xF8) == 0x90 and (b[o - 5] & 7) != 4:   # call [reg+disp32]
        return struct.unpack_from("<i", b, o - 4)[0] // 4
    if b[o - 3] == 0xFF and (b[o - 2] & 0xF8) == 0x50 and (b[o - 2] & 7) != 4:   # call [reg+disp8]
        d = b[o - 1]
        return (d - 256 if d > 127 else d) // 4
    if b[o - 2] == 0xFF and (b[o - 1] & 0xF8) == 0x10 and (b[o - 1] & 7) != 4:   # call [reg]
        return 0
    return None


def clusters(targets, gap=0x300000):
    out, cur = [], []
    for t in sorted(targets):
        if cur and t - cur[-1] > gap:
            out.append(cur); cur = []
        cur.append(t)
    if cur:
        out.append(cur)
    return out


# --------------------------------------------------------------------------------------------------------------------------
# 3. Subsystem of each import (hand classification, checked against the list: every import must be classified)
# --------------------------------------------------------------------------------------------------------------------------
SUBSYSTEM_RULES = [
    ("graphics", r"^(Direct3DCreate9|DirectDrawCreate)$"),
    ("input", r"^(DirectInput8Create)$"),
    ("audio", r"^(#1)$"),   # dsound.dll ordinal 1 = DirectSoundCreate
    ("window", r"^(CreateWindowExA|DestroyWindow|RegisterClassExA|UnregisterClassA|DefWindowProcA|ShowWindow|UpdateWindow|SetFocus|SetForegroundWindow|SetActiveWindow|GetForegroundWindow|GetClientRect|GetWindowRect|SetRect|AdjustWindowRect|SetWindowLongA|GetDesktopWindow|GetSystemMetrics|IsIconic|LoadIconA|LoadCursorA|BeginPaint|EndPaint|SetCapture|ReleaseCapture|ShowCursor|SetCursor|GetCursorPos|GetMessageA|PeekMessageA|TranslateMessage|DispatchMessageA|PostMessageA|PostThreadMessageA|PostQuitMessage|MessageBoxA|wsprintfA|wvsprintfA)$"),
    ("gdi-text", r"^(SetTextColor|CreateCompatibleDC|CreateFontA|CreateBitmap|SetBkMode|DeleteDC|ExtTextOutA|SetBkColor|GetPixel|DeleteObject|SelectObject|BitBlt)$"),
    ("settings", r"^(Reg\w+|SHGetFolderPathA)$"),
    ("files", r"^(CreateFileA|CreateFileW|ReadFile|WriteFile|SetFilePointer|SetEndOfFile|FlushFileBuffers|GetFileSize|CloseHandle|DeleteFileA|MoveFileA|CreateDirectoryA|RemoveDirectoryA|FindFirstFileA|FindNextFileA|FindClose|GetFullPathNameA|GetLongPathNameA|GetCurrentDirectoryA|CreateFileMappingA|MapViewOfFile|UnmapViewOfFile|GetDiskFreeSpaceA|GetDiskFreeSpaceExA|GetDriveTypeA|GetLogicalDrives|GetFileType|SetStdHandle|GetStdHandle|SetHandleCount|FileTimeToSystemTime|FileTimeToLocalFileTime|GetTimeZoneInformation|ShellExecuteA|FindResourceA|FindResourceW|LoadResource|LockResource|SizeofResource)$"),
    ("time", r"^(QueryPerformanceCounter|QueryPerformanceFrequency|GetTickCount|GetSystemTimeAsFileTime|timeGetTime|timeBeginPeriod|timeEndPeriod|timeGetDevCaps|Sleep|SleepEx|timeSetEvent|timeKillEvent)$"),
    ("threads", r"^(CreateThread|ExitThread|TerminateThread|SuspendThread|ResumeThread|GetCurrentThread|GetCurrentThreadId|GetExitCodeThread|SetThreadPriority|GetThreadPriority|SetPriorityClass|GetPriorityClass|SetProcessAffinityMask|GetProcessAffinityMask|CreateEventA|SetEvent|ResetEvent|WaitForSingleObject|WaitForMultipleObjects|CreateMutexA|ReleaseMutex|DuplicateHandle|\w*CriticalSection\w*|Interlocked\w+|TlsAlloc|TlsFree|TlsGetValue|TlsSetValue|GetSystemInfo|IsProcessorFeaturePresent)$"),
    ("memory", r"^(Heap\w+|GetProcessHeap|GlobalAlloc|GlobalFree|VirtualAlloc|VirtualFree|VirtualProtect|VirtualQuery|IsBad\w+)$"),
    ("network", r"^(WSA\w+|setsockopt|ioctlsocket|socket|closesocket|shutdown|bind|connect|listen|accept|sendto|send|recvfrom|recv|select|getpeername|getsockname|gethostbyname|gethostname|Netbios|line\w+|WaitCommEvent|GetOverlappedResult|SetCommMask|PurgeComm|SetCommState|GetCommState|SetCommConfig|GetCommConfig|SetCommTimeouts|SetupComm)$"),
    ("process-and-runtime", r"^(ExitProcess|TerminateProcess|GetCurrentProcess|GetCurrentProcessId|GetModuleHandleA|GetModuleFileNameA|GetCommandLineA|GetStartupInfoA|GetProcAddress|LoadLibraryA|FreeLibrary|GetVersionExA|GetEnvironment\w+|FreeEnvironment\w+|SetEnvironmentVariableA|SetErrorMode|SetLastError|GetLastError|SetUnhandledExceptionFilter|UnhandledExceptionFilter|RtlUnwind|RaiseException|IsDebuggerPresent|DebugBreak|OutputDebugStringA|CreateToolhelp32Snapshot|Process32First|Process32Next)$"),
    ("text-and-locale", r"^(MultiByteToWideChar|WideCharToMultiByte|GetStringType\w|LCMapString\w|CompareString\w|lstrcmpiA|GetLocaleInfo\w|GetUserDefaultLCID|IsValidLocale|IsValidCodePage|EnumSystemLocalesA|GetCPInfo|GetOEMCP|GetACP)$"),
]


def subsystem_of(name):
    for sub, rx in SUBSYSTEM_RULES:
        if re.match(rx, name):
            return sub
    return "unclassified"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--trace", action="append", required=True)
    ap.add_argument("--sdk", default=r"C:\Program Files (x86)\Windows Kits\10\Include\10.0.26100.0")
    ap.add_argument("--exports", default=os.path.join(ROOT, "export"))
    ap.add_argument("--json")
    args = ap.parse_args()

    imports = json.load(open(os.path.join(args.exports, "platform_imports.json")))["imports"]
    interfaces = parse_headers(args.sdk)
    tables = {n: vtable(interfaces, n) for n in WANTED if n in interfaces}
    used, com_sites, com_pop, per_frame, ms_frame, fps = parse_trace(args.trace)
    text = open(os.path.join(args.exports, "memory_401000.bin"), "rb").read()

    report = {}
    # ---- imports by subsystem
    by_sub = collections.defaultdict(list)
    for i in imports:
        by_sub[subsystem_of(i["name"])].append(i)
    print("## Imports by subsystem (252 slots; 'seen' = called at least once in the traced session)\n")
    print("| Subsystem | Imports | Seen | Names |")
    print("|---|---:|---:|---|")
    report["imports"] = {}
    for sub in sorted(by_sub, key=lambda s: -len(by_sub[s])):
        names = [i["name"] for i in by_sub[sub]]
        seen = [n for n in names if n in used]
        report["imports"][sub] = {"total": len(names), "seen": len(seen), "names": names, "seen_names": seen}
        print(f"| {sub} | {len(names)} | {len(seen)} | {', '.join(n + ('' if n in used else '*') for n in names)} |")
    print("\n(`*` after a name: not called in the traced session.)\n")

    # ---- COM call sites
    rows = []
    for t, sites in com_sites.items():
        slots = collections.Counter()
        for r in sites:
            s = decode_slot(text, 0x401000, r)
            if s is not None:
                slots[s] += 1
        slot = slots.most_common(1)[0][0] if slots else None
        words = com_pop[t] // 4 - 1
        rows.append({"target": t, "slot": slot, "words": words, "sites": len(sites)})
    cl = clusters([r["target"] for r in rows], gap=0x20000)
    print("## COM calls recorded in the traced session\n")
    print(f"{len(rows)} distinct native COM targets from {sum(r['sites'] for r in rows)} distinct call sites, in {len(cl)} address clusters "
          "(one or more per system DLL).\n")
    family_names = {
        "Direct3D 9 (d3d9.dll)": [n for n in WANTED if n.startswith("IDirect3D")],
        "DirectInput 8 (dinput8.dll)": ["IDirectInput8A", "IDirectInputDevice8A"],
        "DirectSound (dsound.dll)": ["IDirectSound", "IDirectSoundBuffer", "IDirectSound8", "IDirectSoundBuffer8"],
        "DirectDraw (ddraw.dll)": [n for n in WANTED if n.startswith("IDirectDraw")],
    }

    def matches(r, name):
        table = tables.get(name, [])
        return r["slot"] is not None and r["slot"] < len(table) and table[r["slot"]][1] == r["words"]

    print("| Cluster | Targets | Call sites | Family (targets with a matching slot+arguments in some interface of it / targets) |")
    print("|---|---:|---:|---|")
    report["clusters"] = []
    cluster_family = []
    for c in cl:
        mine = [r for r in rows if c[0] <= r["target"] <= c[-1]]
        score = {f: sum(1 for r in mine if any(matches(r, n) for n in names)) for f, names in family_names.items()}
        best = max(score.items(), key=lambda kv: kv[1])
        cluster_family.append(best[0])
        print(f"| 0x{c[0]:08x}..0x{c[-1]:08x} | {len(mine)} | {sum(r['sites'] for r in mine)} | "
              + ", ".join(f"{f.split(' (')[0]} {k}/{len(mine)}" for f, k in sorted(score.items(), key=lambda kv: -kv[1])[:2]) + " |")
        report["clusters"].append({"first": c[0], "last": c[-1], "targets": len(mine), "family": best[0], "scores": score})
    print()
    # Per family: one row per (slot, argument count) with every interface method that fits, and the number of targets/call sites.
    print("### Methods by family (slot, words incl. `this`; candidates are the interface methods that fit; `?` = none fits)\n")
    report["methods"] = {}
    for family, names in family_names.items():
        members = [r for r, f in ((r, next(cluster_family[i] for i, c in enumerate(cl) if c[0] <= r["target"] <= c[-1])) for r in rows) if f == family]
        if not members:
            continue
        print(f"**{family}**: {len(members)} targets, {sum(r['sites'] for r in members)} call sites\n")
        print("| Slot | Words | Targets | Call sites | Candidates |")
        print("|---:|---:|---:|---:|---|")
        grouped = collections.defaultdict(list)
        for r in members:
            grouped[(r["slot"], r["words"])].append(r)
        report["methods"][family] = []
        for (slot, words), rs in sorted(grouped.items(), key=lambda kv: (kv[0][0] is None, kv[0][0] or 0, kv[0][1])):
            cands = []
            for n in names:
                t = tables.get(n, [])
                if slot is not None and slot < len(t) and t[slot][1] == words:
                    cands.append(f"{n[len('IDirect'):] if n.startswith('IDirect') else n}::{t[slot][0]}")
            shown = ", ".join(cands[:5]) + (f" (+{len(cands)-5})" if len(cands) > 5 else "") if cands else "?"
            print(f"| {slot} | {words} | {len(rs)} | {sum(r['sites'] for r in rs)} | {shown} |")
            report["methods"][family].append({"slot": slot, "words": words, "targets": len(rs), "sites": sum(r["sites"] for r in rs), "candidates": cands})
        print()
    report["com_rows"] = rows

    # ---- profile
    print("## Per-frame call rates from the PROFILE windows (mean over the windows that listed the call; a window lists the 14 most frequent)\n")
    print("| Call | per frame: mean | min | max | windows listed |")
    print("|---|---:|---:|---:|---:|")
    report["per_frame"] = {}
    for name, vals in sorted(per_frame.items(), key=lambda kv: -sum(kv[1]) / len(kv[1])):
        report["per_frame"][name] = sum(vals) / len(vals)
        print(f"| {name} | {sum(vals)/len(vals):.1f} | {min(vals):.1f} | {max(vals):.1f} | {len(vals)} |")
    print()
    print("## Time inside Windows/Direct3D per frame (mean ms/frame of the windows that listed the call)\n")
    print("| Call | ms/frame (mean) | max | windows |")
    print("|---|---:|---:|---:|")
    for name, vals in sorted(ms_frame.items(), key=lambda kv: -sum(kv[1]) / len(kv[1])):
        print(f"| {name} | {sum(vals)/len(vals):.2f} | {max(vals):.2f} | {len(vals)} |")
    if fps:
        print(f"\nFPS reported by the windows: min {min(fps):.1f}, median {sorted(fps)[len(fps)//2]:.1f}, max {max(fps):.1f} ({len(fps)} windows).")
    if args.json:
        json.dump(report, open(args.json, "w"), indent=1, default=str)


if __name__ == "__main__":
    main()
