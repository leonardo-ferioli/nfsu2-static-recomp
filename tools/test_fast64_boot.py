"""The fast backend on the 64-bit platform follows the reference engine: the boot calls the same imports in the same order and stops at the same one.

    python tools/test_fast64_boot.py <speed_raw> <speed_fast64> <export dir> <game dir>

Runs `--boot64` with both programs (Platform64, the guest in the arena, the Win32 layer over legacy_win32), reads the trace each one writes (one line per
import, the first time it is called) and requires the same sequence of imports and the same stop. The instruction counts are not compared: the guest reads
the environment block, whose size depends on where the test is started."""
import os
import re
import subprocess
import sys

raw, fast, export, game = sys.argv[1:5]
trace = os.path.join(os.path.dirname(os.path.abspath(export)), "logs", "boot64_trace.log")


def run(exe):
    env = dict(os.environ)
    env["NFSU2_STOP_AT_IMPORT"] = "#1"   # DirectSoundCreate: after the window, the registry, the files and the Direct3D 9 device
    out = subprocess.run([exe, "--boot64", export, game, "400000000", "all"], capture_output=True, text=True, timeout=900, env=env)
    if out.returncode:
        sys.exit(f"{exe} failed ({out.returncode}):\n{out.stdout}{out.stderr}")
    lines = open(trace, encoding="utf-8", errors="replace").read().splitlines()
    imports = [l.split()[1] for l in lines[1:] if l and not l.startswith("STOP") and len(l.split()) >= 2]
    stop = next((re.sub(r"\s+instructions=.*", "", l) for l in lines if l.startswith("STOP")), "")
    return imports, stop


a, stop_a = run(raw)
b, stop_b = run(fast)
if a != b or stop_a != stop_b:
    first = next((i for i, (x, y) in enumerate(zip(a, b)) if x != y), min(len(a), len(b)))
    print(f"DIFFERENT after {first} imports:\n  reference: {a[first:first + 3]} {stop_a}\n  fast:      {b[first:first + 3]} {stop_b}")
    sys.exit(1)
print(f"same: {len(a)} imports, then: {stop_a}")
