"""Compare the runtime SLEIGH decoder with Ghidra's export: lengths, operation counts, opcodes and every varnode.

    python tools/test_dynamic_decode.py <dynamic_decode_dump.exe> [stride]

A sample of the exported instructions (every `stride`-th, default 7) is decoded from the exported .text bytes at its
original address; any difference in length, opcode sequence or operands is reported.
"""
import gzip
import json
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
tool = Path(sys.argv[1]).resolve()
stride = int(sys.argv[2]) if len(sys.argv) > 2 else 7

numbers = {}
for name, value in re.findall(r"CPUI_([A-Z0-9_]+)\s*=\s*(\d+)", (ROOT / "third_party/sleigh/opcodes.hh").read_text()):
    numbers[name] = int(value)
for java, cpp in {"INT2FLOAT": "FLOAT_INT2FLOAT", "FLOAT2FLOAT": "FLOAT_FLOAT2FLOAT", "TRUNC": "FLOAT_TRUNC",
                  "ROUND": "FLOAT_ROUND", "CEIL": "FLOAT_CEIL", "FLOOR": "FLOAT_FLOOR"}.items():
    numbers[java] = numbers[cpp]

sample = []
with gzip.open(ROOT / "export/instructions.jsonl.gz", "rt") as stream:
    for index, line in enumerate(stream):
        if index % stride == 0:
            sample.append(json.loads(line))


def vn(node):
    return None if node is None else (node[0], int(node[1], 16) & 0xFFFFFFFFFFFFFFFF, node[2])


with tempfile.TemporaryDirectory() as directory:
    listing = Path(directory) / "addresses.txt"
    listing.write_text("\n".join(f"{ins['a']:x}" for ins in sample))
    result = subprocess.run([str(tool), str(ROOT / "third_party/sleigh_spec/x86.sla"), str(ROOT / "export/memory_401000.bin"), str(listing)],
                            capture_output=True, text=True, timeout=1800)
if result.returncode:
    raise SystemExit(result.stderr)

lines = result.stdout.splitlines()
position = 0
mismatches = []
for ins in sample:
    header = lines[position].split()
    position += 1
    address, length, count = int(header[0][1:], 16), int(header[1]), int(header[2])
    ops = lines[position:position + count]
    position += count
    problems = []
    if address != ins["a"]:
        problems.append("address order")
    if length != ins["n"]:
        problems.append(f"length {length} != {ins['n']}")
    if count != len(ins["p"]):
        problems.append(f"operation count {count} != {len(ins['p'])}")
    else:
        for got, want in zip(ops, ins["p"]):
            fields = got.split()
            opcode = int(fields[0])
            output = None
            rest = fields[1:]
            if rest and rest[0].startswith(">"):
                space, offset, size = rest[0][1:].split(":")
                output = (space, int(offset, 16), int(size))
                rest = rest[1:]
            inputs = []
            for item in rest:
                space, offset, size = item.split(":")
                inputs.append((space, int(offset, 16), int(size)))
            expected = [numbers[want[0]], vn(want[1]), [vn(x) for x in want[2:]]]
            if want[0] in ("LOAD", "STORE"):
                # The address-space operand is a const whose value is an engine-internal handle (a pointer here, 0x1a1 in
                # Java); only its kind and size are meaningful and the interpreter never reads it.
                expected[2][0] = (expected[2][0][0], inputs[0][1] if inputs else 0, expected[2][0][2])
            if opcode != expected[0] or output != expected[1] or inputs != expected[2]:
                problems.append(f"op {want[0]}: decoded {got!r}")
                break
    if problems:
        mismatches.append((hex(ins["a"]), ins["asm"], problems))
print(f"{len(sample)} instructions compared, {len(mismatches)} mismatches")
for item in mismatches[:15]:
    print(item)
sys.exit(1 if mismatches else 0)
