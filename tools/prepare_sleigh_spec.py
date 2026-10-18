"""Prepare the x86 SLEIGH specification read by the runtime P-code interpreter.

Ghidra ships x86.sla as: 4-byte header ('sla' + format version) followed by a zlib stream. The runtime library built
without zlib (third_party/zlib_shim) reads the same file with the payload already inflated, so this script writes
header + inflated payload to third_party/sleigh_spec/x86.sla and records provenance. The specification is Ghidra data
(Apache License 2.0, see third_party/sleigh/LICENSE-Apache-2.0.txt).
"""
from pathlib import Path
import argparse
import hashlib
import re
import zlib

ROOT = Path(__file__).resolve().parents[1]


def ghidra_home():
    args = (ROOT.parent / "nfsu2_java.args").read_text()
    return Path(re.search(r"-Dghidra\.home=(\S+)", args).group(1).strip('"'))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--source", type=Path, default=None)
    parser.add_argument("--out", type=Path, default=ROOT / "third_party/sleigh_spec")
    args = parser.parse_args()
    source = args.source or ghidra_home() / "Ghidra/Processors/x86/data/languages/x86.sla"
    data = source.read_bytes()
    if data[:3] != b"sla":
        raise SystemExit("not an SLA file")
    header, payload = data[:4], zlib.decompress(data[4:])
    args.out.mkdir(parents=True, exist_ok=True)
    target = args.out / "x86.sla"
    target.write_bytes(header + payload)
    (args.out / "PROVENANCE.txt").write_text(
        f"x86.sla derived from Ghidra's {source.name}\n"
        f"source SHA-256:  {hashlib.sha256(data).hexdigest()}\n"
        f"output SHA-256:  {hashlib.sha256(header + payload).hexdigest()}\n"
        f"format: 4-byte header '{header[:3].decode()}' + version {header[3]}, payload inflated (zlib stream removed)\n"
        "license: Apache License 2.0 (Ghidra)\n", encoding="utf-8")
    print(f"{target} ({target.stat().st_size} bytes) from {source}")


if __name__ == "__main__":
    main()
