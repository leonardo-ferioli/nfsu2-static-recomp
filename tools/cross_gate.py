"""Stage-3 gate: every generated page compiles (syntax and code generation) for another processor, cross-compiled on this PC.

    python tools/cross_gate.py <generated_fast dir> <target> [--jobs N] [--opt O1] [--limit N] [--out DIR]

target is a clang/zig target triple: aarch64-linux-gnu, aarch64-macos, x86_64-linux-gnu (compiled with `zig c++`, which carries its
own libc++ and sysroots) or aarch64-pc-windows-msvc / x86_64-pc-windows-msvc (compiled with clang++). The dispatch and mods files are
compiled too. Prints the failing files with the first error lines and the object size; exit status 0 only if everything compiled."""
import argparse
import concurrent.futures
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def compile_one(source, target, opt, out):
    obj = out / (source.stem + ".o")
    if "windows" in target:
        command = ["clang++", f"--target={target}", f"-O{opt}", "-std=c++20", "-c", f"-I{ROOT}", "-DNFSU2_FAST_BACKEND=1", "-Wno-unused-label", str(source), "-o", str(obj)]
    else:
        command = ["zig", "c++", "-target", target, f"-O{opt}", "-std=c++20", "-c", f"-I{ROOT}", "-DNFSU2_FAST_BACKEND=1", "-Wno-unused-label", str(source), "-o", str(obj)]
    started = time.time()
    result = subprocess.run(command, capture_output=True, text=True)
    errors = [l for l in (result.stderr or "").splitlines() if "error" in l]
    return source.name, result.returncode, errors[:5], obj.stat().st_size if obj.exists() else 0, time.time() - started


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("directory")
    parser.add_argument("target")
    parser.add_argument("--jobs", type=int, default=12)
    parser.add_argument("--opt", default="1")
    parser.add_argument("--limit", type=int, default=0)
    parser.add_argument("--out", default=None)
    args = parser.parse_args()
    sources = sorted(Path(args.directory).glob("*.cpp"))
    if args.limit:
        sources = sources[:args.limit]
    out = Path(args.out) if args.out else Path(args.directory).parent / ("objs_" + args.target.replace("-", "_"))
    out.mkdir(parents=True, exist_ok=True)
    failed, total_size, started = [], 0, time.time()
    with concurrent.futures.ThreadPoolExecutor(args.jobs) as pool:
        for name, code, errors, size, seconds in pool.map(lambda s: compile_one(s, args.target, args.opt, out), sources):
            total_size += size
            if code:
                failed.append(name)
                print(f"FAIL {name}", *errors, sep="\n  ")
    print(f"{len(sources) - len(failed)}/{len(sources)} files compiled for {args.target} at -O{args.opt}, {total_size / 1e6:.1f} MB of objects, {time.time() - started:.0f} s")
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
