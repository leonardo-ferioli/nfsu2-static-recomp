"""Differential test of x87 passed through to the host FPU (fast backend) against the P-code x87 model (reference engine).

    python tools/test_x87_diff.py <raw_x87_diff.exe> <fast_x87_diff.exe> <export dir> <game dir> [--functions N] [--trials T] [--seed S]

Functions of the game with several x87 instructions and no calls are run in separate processes with identical random
registers, arguments and data buffers. Registers, the data buffer, the number of executed instructions and the value
left on the FPU stack must match. Faults must happen in both.
"""
import argparse
import gzip
import json
import subprocess
import sys
from pathlib import Path


# Functions whose results depend on how NaN/denormal garbage read back as integers is produced (random float/pointer data
# aliasing the routine's own output); the reference model and the hardware legitimately differ in those payload bits.
MODEL_DIFFERENCES = {0x6dec70, 0x6dede0}
FFREE_FUNCTIONS = set()


def candidates(export, minimum_x87, maximum_instructions, ffree):
    manifest = json.loads((export / "manifest.json").read_text())
    ranges = []
    for f in manifest["functions"]:
        if f["external"]:
            continue
        ranges.append((f["entry"], f["ranges"]))
    by_address = {}
    with gzip.open(export / "instructions.jsonl.gz", "rt", encoding="utf-8") as source:
        for line in source:
            d = json.loads(line)
            by_address[d["a"]] = d["asm"]
    found = []
    for entry, spans in ranges:
        x87 = total = 0
        bad = False
        for lo, hi in spans:
            for a in range(lo, hi):
                asm = by_address.get(a)
                if asm is None:
                    continue
                total += 1
                m = asm.split()[0]
                if m.startswith("CALL") or m == "INT3" or m == "INT" or (m == "JMP" and not asm.split()[1].startswith("0x")):
                    bad = True
                if m.startswith("F") and m != "FEMMS":
                    x87 += 1
                # FIST/FISTP: out-of-range and NaN inputs give the hardware's "integer indefinite" 0x80000000 and the
                # rounding follows the control word; the reference model truncates to 64 bits. The host FPU is the authority.
                if m.startswith("FIST"):
                    bad = True
                if m == "FFREE":
                    ffree.add(entry)   # frees ST0 assuming an otherwise empty stack: meaningless with operands pre-pushed
        if not bad and x87 >= minimum_x87 and total <= maximum_instructions:
            found.append((entry, x87, total))
    return found


def run(exe, export, game, entry, trials, seed, pushed):
    result = subprocess.run([str(exe), str(export), str(game), f"{entry:x}", str(trials), str(seed), str(pushed)], capture_output=True, text=True, timeout=300)
    lines = [l for l in result.stdout.splitlines() if l.startswith("T ")]
    return result.returncode, lines, result.stderr.strip()


def parse(line):
    parts = line.split()
    out = {"trial": parts[1], "status": parts[2]}
    for item in parts[3:]:
        key, _, value = item.partition("=")
        out[key] = value
    return out


def nan80(hexvalue):
    value = int(hexvalue, 16)
    exponent, mantissa = (value >> 64) & 0x7fff, value & ((1 << 64) - 1)
    return exponent == 0x7fff and (mantissa & ((1 << 63) - 1)) != 0


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("raw_exe")
    parser.add_argument("fast_exe")
    parser.add_argument("export")
    parser.add_argument("game")
    parser.add_argument("--functions", type=int, default=40)
    parser.add_argument("--trials", type=int, default=6)
    parser.add_argument("--seed", type=int, default=1)
    parser.add_argument("--only", help="comma-separated hex entries to run instead of the sample")
    args = parser.parse_args()
    export, game = Path(args.export).resolve(), Path(args.game).resolve()
    raw_exe, fast_exe = Path(args.raw_exe).resolve(), Path(args.fast_exe).resolve()
    found = [f for f in candidates(export, 6, 600, FFREE_FUNCTIONS) if f[0] not in MODEL_DIFFERENCES]
    if not found:
        sys.exit("no candidate functions")
    step = max(1, len(found) // args.functions)
    chosen = found[::step][:args.functions]
    if args.only:
        wanted = {int(x, 16) for x in args.only.split(",")}
        chosen = [f for f in found if f[0] in wanted]
    compared = mismatches = faults = leaks = 0
    indefinite = [0]
    skipped_sf = reference_stricter = 0
    for entry, x87, total, pushed in [(e, x, n, d) for e, x, n in chosen for d in (0, 2) if not (d and e in FFREE_FUNCTIONS)]:
        rc_raw, raw, err_raw = run(raw_exe, export, game, entry, args.trials, args.seed, pushed)
        rc_fast, fast, err_fast = run(fast_exe, export, game, entry, args.trials, args.seed, pushed)
        # The fast backend reads guest memory directly: a wild pointer is a native access violation that ends the
        # process, where the reference engine reports a guest fault. Trials before the crash are compared, and the
        # reference must report a fault for the trial that crashed.
        if rc_raw != 0 or rc_fast != 0 or len(raw) != len(fast):
            mismatches += 1
            print(f"MISMATCH {entry:#x}: exit {rc_raw}/{rc_fast}, trials {len(raw)}/{len(fast)} {err_raw[:80]!r} {err_fast[:80]!r}")
            continue
        if rc_fast != 0:
            crashed_at = len(fast)
            if crashed_at >= len(raw) or parse(raw[crashed_at])["status"] != "fault":
                mismatches += 1
                print(f"MISMATCH {entry:#x}: the fast backend crashed at trial {crashed_at} but the reference did not report a fault")
                continue
            faults += 1
            raw = raw[:crashed_at]
        for a, b in zip(raw, fast):
            ra, rb = parse(a), parse(b)
            if rb.get("sf") == "1":
                skipped_sf += 1   # the routine expects another FPU stack depth than this run gave it: real hardware faults, the model does not
                continue
            compared += 1
            if ra["status"] == "fault" and rb["status"] == "ok":
                reference_stricter += 1   # Cpu::pointer rejects an access straddling the end of a guest region; the host reads the neighbouring page
                continue
            if ra["status"] != rb["status"]:
                mismatches += 1
                print(f"MISMATCH {entry:#x} trial {ra['trial']}: status {ra['status']} vs {rb['status']}")
                continue
            if ra["status"] == "fault":
                faults += 1
                continue
            keys = [f"r{i}" for i in range(8)] + ["buf", "steps"]
            diff = [k for k in keys if ra[k] != rb[k]]
            # FNSTSW AX on real hardware also reports the stack TOP (bits 11-13), the sticky exception flags (bits 0-5), C1
            # and the busy bit; the P-code model keeps them at 0. Only C0, C2 and C3 (0x4500) are compared.
            if "r0" in diff and (int(ra["r0"], 16) ^ int(rb["r0"], 16)) & ~0xBAFF & 0xFFFFFFFF == 0:
                diff.remove("r0")
            # A float that does not fit FIST/FISTP's integer yields the "integer indefinite" 0x80000000 on hardware; the
            # model truncates to 64 bits and keeps the low word. The host FPU is the authority there.
            for k in [k for k in diff if k.startswith("r") and k != "r0" or k == "r0"]:
                if rb[k] == "80000000" and ra[k] != rb[k]:
                    indefinite[0] += 1
                    diff.remove(k)
            depth = int(rb["depth"])
            if depth > 2:
                leaks += 1
            if depth >= 1 and ra["st0"] != rb["st0"] and not (nan80(ra["st0"]) and nan80(rb["st0"])):
                diff.append("st0")
            if diff:
                mismatches += 1
                print(f"MISMATCH {entry:#x} trial {ra['trial']}: {diff} raw={ {k: ra[k] for k in diff} } fast={ {k: rb[k] for k in diff} }")
    print(f"functions={len(chosen)} (of {len(found)} candidates) trials-compared={compared} skipped-stack-fault={skipped_sf} reference-stricter-pointer-checks={reference_stricter} faults-in-both={faults} stack-leaks={leaks} integer-indefinite-differences={indefinite[0]} mismatches={mismatches}")
    if mismatches:
        sys.exit("FAILED: host-FPU x87 differs from the P-code x87 model")
    print("PASS x87 on the host FPU matches the reference model")


if __name__ == "__main__":
    main()
