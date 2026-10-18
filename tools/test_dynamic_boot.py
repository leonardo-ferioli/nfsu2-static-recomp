"""Whole-program differential test of the runtime P-code interpreter.

    python tools/test_dynamic_boot.py <fast_dynamic_tests.exe> <export dir> <game dir> <x86.sla> [--keep DIR]

The game's startup code (original .text) up to its first CreateThread is run twice statically translated and twice
interpreted from the same bytes (a TEST-ONLY use of the interpreter on the original image; the product interprets
only run-time generated code). Each run dumps its register file and all guest memory. Words that differ between the
two runs of the SAME engine are nondeterminism of the host (heap and module addresses) and are ignored; every other
word must be identical between the engines, as must the stop point and the instruction count.
"""
import os
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path


def run(exe, export, game, spec, mode, dump, interp_mode=None):
    env = dict(os.environ)
    if interp_mode is not None:
        env["NFSU2_INTERP_MODE"] = str(interp_mode)
    result = subprocess.run([exe, export, game, spec, mode, str(dump)], capture_output=True, text=True, timeout=600, env=env)
    if result.returncode != 0:
        sys.exit(f"{mode} failed ({result.returncode}): {result.stdout}{result.stderr}")
    line = next((l for l in result.stdout.splitlines() if l.startswith("DIGEST")), None)
    if not line:
        sys.exit(f"{mode} produced no digest: {result.stdout}{result.stderr}")
    return line


def load(path):
    data = path.read_bytes()
    count, register_bytes = struct.unpack_from("<II", data, 0)
    offset = 8
    pieces = [("registers", 0, data[offset:offset + register_bytes])]
    offset += register_bytes
    for _ in range(count):
        base, size = struct.unpack_from("<II", data, offset)
        offset += 8
        pieces.append((f"region@{base:#x}", base, data[offset:offset + size]))
        offset += size
    return pieces


def words(blob):
    usable = len(blob) // 4 * 4
    return struct.unpack(f"<{usable // 4}I", blob[:usable])


def main():
    args = [a for a in sys.argv[1:] if a != "--keep"]
    if len(args) < 4:
        sys.exit(__doc__)
    exe, export, game, spec = (str(Path(a).resolve()) for a in args[:4])
    keep = Path(sys.argv[sys.argv.index("--keep") + 1]) if "--keep" in sys.argv else None
    with tempfile.TemporaryDirectory() as scratch:
        folder = keep or Path(scratch)
        folder.mkdir(parents=True, exist_ok=True)
        digests, dumps = {}, {}
        # t1..t6: six translated runs, which expose the words that vary by themselves (host heap and module addresses, timing).
        # i1/i2: default interpreter (native code per block); g0: generic 128-bit path only; g1: native-integer fast path;
        # g2: fast path with dead-flag elimination. All must agree, flags included, with each other; with the translated run
        # everything except the (deliberately dead) flag bytes.
        for name, mode, interp in (("t1", "boot-translated", None), ("t2", "boot-translated", None), ("t3", "boot-translated", None),
                                   ("t4", "boot-translated", None), ("t5", "boot-translated", None), ("t6", "boot-translated", None), ("i1", "boot-interpreted", None),
                                   ("i2", "boot-interpreted", None), ("g0", "boot-interpreted", 0), ("g1", "boot-interpreted", 1), ("g2", "boot-interpreted", 2)):
            dumps[name] = folder / f"{name}.bin"
            digests[name] = run(exe, export, game, spec, mode, dumps[name], interp)
            print(name, digests[name][:160])
        stops = {re.search(r'stop="([^"]*)" pc=(0x[0-9a-f]+)', d).groups() for d in digests.values()}
        counts = {int(re.search(r"instructions=(\d+)", d).group(1)) for d in digests.values()}
        if len(stops) != 1:
            sys.exit(f"FAILED: runs stopped at different points: {stops}")
        stop_text, stop_pc = next(iter(stops))
        if len(counts) != 1:
            sys.exit(f"FAILED: instruction counts differ across runs: {sorted(counts)}")
        loaded = {k: load(v) for k, v in dumps.items()}
        layouts = {tuple((n, s_len(b)) for n, _, b in v) for v in loaded.values()}
        if len(layouts) != 1:
            sys.exit("FAILED: memory layouts differ between runs")
        total = noise = compared = bad = ignored = 0
        report = []
        esp = struct.unpack_from("<I", loaded["t1"][0][2], 16)[0]
        for index, (name, base, _) in enumerate(loaded["t1"]):
            w = {k: words(loaded[k][index][2]) for k in loaded}
            for i in range(len(w["t1"])):
                total += 1
                # Not guest-visible: the shadow EIP (the engines refresh it at different granularity) and the dead stack
                # below ESP, where native Win32 frames leave the host's own register contents.
                if (index == 0 and 644 <= i * 4 < 648) or (index > 0 and base <= esp < base + len(loaded["t1"][index][2]) and base + i * 4 < esp):
                    ignored += 1
                    continue
                if any(w[k][i] != w["t1"][i] for k in ("t2", "t3", "t4", "t5", "t6")) or w["i1"][i] != w["i2"][i]:
                    noise += 1
                    continue
                compared += 1
                flag_word = index == 0 and 0x200 <= i * 4 < 0x220
                if not flag_word and w["t1"][i] != w["i1"][i]:
                    bad += 1
                    if len(report) < 20:
                        report.append(f"  {name} +{i * 4:#x}: translated {w['t1'][i]:#010x} interpreted {w['i1'][i]:#010x}")
                for other in ("g0", "g1", "g2"):
                    if w[other][i] != w["i1"][i]:
                        bad += 1
                        if len(report) < 20:
                            report.append(f"  {name} +{i * 4:#x}: default {w['i1'][i]:#010x} {other} {w[other][i]:#010x}")
        print(f"PASS-CRITERIA stop={stop_text!r} pc={stop_pc} instructions={counts.pop()} words={total} nondeterministic={noise} not-guest-visible={ignored} compared={compared} mismatches={bad}")
        if bad:
            print("\n".join(report))
            sys.exit("FAILED: interpreted memory/registers differ from the translated run")
        if noise > (total - ignored) * 0.01:
            sys.exit("FAILED: too many words differ between runs of the same engine for the comparison to mean anything")
        print("PASS interpreted startup is identical to the translated startup, and all interpreter modes agree (flags included)")


def s_len(blob):
    return len(blob)


if __name__ == "__main__":
    main()
