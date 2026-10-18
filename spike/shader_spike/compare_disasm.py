#!/usr/bin/env python3
"""Compares shader_spike's disassembly with Microsoft's (d3dcompiler_47) for every blob of a folder: the decoder's reference test.

    python spike/shader_spike/compare_disasm.py <shader_spike.exe> <blob folder>

Both outputs are reduced to instruction lines (comments, blank lines, the "approximately N slots" trailer dropped), lower-cased and
stripped of spaces; numbers are compared as floats. Exit code 1 on any difference.
"""
import os, re, subprocess, sys

NUL = chr(0)


def lines(text):
    out = []
    for raw in text.splitlines():
        line = raw.replace(NUL, "").strip()
        if not line or line.startswith("//") or line.startswith("hr="):
            continue
        out.append(line.lower().replace(" ", ""))
    return out


NUM = re.compile(r"-?\d+\.?\d*(?:e[-+]?\d+)?")


def same(a, b):
    if a == b:
        return True
    if NUM.sub("#", a) != NUM.sub("#", b):
        return False
    xs, ys = NUM.findall(a), NUM.findall(b)
    return len(xs) == len(ys) and all(abs(float(x) - float(y)) <= 1e-6 * max(1.0, abs(float(y))) for x, y in zip(xs, ys))


def main():
    exe, folder = os.path.abspath(sys.argv[1]), sys.argv[2]
    bad = total = 0
    for name in sorted(os.listdir(folder)):
        path = os.path.join(folder, name)
        ours = lines(subprocess.run([exe, "dis", path], capture_output=True, text=True).stdout)
        ref = lines(subprocess.run([exe, "ref", path], capture_output=True, text=True).stdout)
        total += 1
        ref = [l for l in ref if not l.startswith("approximately")]
        if len(ours) != len(ref) or not all(same(a, b) for a, b in zip(ours, ref)):
            bad += 1
            print(f"DIFF {name}")
            for i in range(max(len(ours), len(ref))):
                a = ours[i] if i < len(ours) else "<none>"
                b = ref[i] if i < len(ref) else "<none>"
                if not (i < len(ours) and i < len(ref) and same(a, b)):
                    print(f"   ours: {a}\n   ref : {b}")
                    break
    print(f"{total - bad}/{total} identical")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
