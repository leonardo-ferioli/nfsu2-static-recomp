"""Seed static analysis from original initialized function-pointer tables.

Candidates are explicitly distinguished from entry points observed in a trace.
No input bytes or saved analysis are changed. Ghidra remains the decoder.
"""
from pathlib import Path
import gzip
import hashlib
import json
import struct
import re
import pefile

ROOT = Path(__file__).resolve().parents[1]
binary = ROOT.parent / "binaries/SPEED2.EXE"
identity = hashlib.sha256(binary.read_bytes()).hexdigest()
manifest = json.loads((ROOT / "export/manifest.json").read_text())
assert identity == manifest["input_sha256"]
pe = pefile.PE(str(binary), fast_load=True)
base = pe.OPTIONAL_HEADER.ImageBase
text = next(s for s in pe.sections if s.Name.startswith(b".text"))
lo, hi = base + text.VirtualAddress, base + text.VirtualAddress + text.Misc_VirtualSize
covered = bytearray(hi - lo)
starts = set()
immediate_references = {}
jump_tables = {}
def plausible_entry(address):
    if not lo <= address < hi:
        return False
    prefix = pe.get_data(address-base, 2)
    if address % 16 and prefix != b"\x8b\xff":
        return False
    return prefix[0] in (0x55, 0x8b, 0x8a, 0x83, 0x81, 0x51, 0x53, 0x56, 0x57,
                         0x8d, 0x89, 0xa1, 0xa0, 0xc7, 0xc3, 0x33, 0x0f, *range(0xb8, 0xc0))
with gzip.open(ROOT / "export/instructions.jsonl.gz", "rt") as stream:
    for line in stream:
        ins = json.loads(line)
        if ins["asm"].startswith("JMP dword ptr ["):
            indexed = re.search(r"\*0x4 \+ (0x[0-9a-fA-F]+)", ins["asm"])
            if indexed:
                jump_tables.setdefault(int(indexed[1], 16), ins["a"])
        if lo <= ins["a"] < hi:
            starts.add(ins["a"])
            covered[ins["a"]-lo:ins["a"]-lo+ins["n"]] = b"\1" * ins["n"]
            if ins["asm"].split()[0] in ("PUSH", "MOV", "LEA"):
                for op in ins["p"]:
                    for node in op[2:]:
                        if node and node[0] == "const" and node[2] == 4:
                            value = int(node[1], 16)
                            if plausible_entry(value):
                                immediate_references.setdefault(value, ins["a"])
path = ROOT / "tools/disassembly_seeds.json"
entries = {}
previous = manifest.get("additional_disassembly_seeds", []) + json.loads(path.read_text())
for seed in previous:
    address = int(seed["address"], 16)
    if seed.get("required", True) or seed.get("origin_kind") == "indexed_jump_table" or plausible_entry(address):
        entries[address] = seed
added = 0
for section in pe.sections:
    if section.Name.rstrip(b"\0") not in (b".rdata", b".data"):
        continue
    data = section.get_data()
    words = [v[0] for v in struct.iter_unpack("<I", data[:len(data)//4*4])]
    for index, address in enumerate(words):
        if not lo <= address < hi or covered[address-lo] or address in entries:
            continue
        if not plausible_entry(address):
            continue
        reference = base + section.VirtualAddress + index * 4
        section_name = section.Name.rstrip(b"\0").decode("ascii")
        entries[address] = dict(address=hex(address), input_sha256=identity,
            required=False, classification="HYPOTHESIS",
            evidence=f"Original {section_name} pointer at 0x{reference:08x}, with a compiler entry prefix and 16-byte alignment or MSVC hotpatch prefix. Decode only if Ghidra accepts it without clearing existing data/code.")
        added += 1
for address, reference in sorted(immediate_references.items()):
    if covered[address-lo] or address in entries:
        continue
    entries[address] = dict(address=hex(address), input_sha256=identity, required=False,
        classification="HYPOTHESIS",
        evidence=f"Original PUSH/MOV/LEA at 0x{reference:08x} contains this aligned/hotpatch code-address literal. Decode only if Ghidra accepts it without clearing existing data/code.")
    added += 1
tables = []
for table, instruction in sorted(jump_tables.items()):
    if not base <= table < base + pe.OPTIONAL_HEADER.SizeOfImage:
        continue
    # VA 700150 checks mode <= 7 before JMP [ECX*4+700499] at 70020c.
    # Other indexed tables are conservative candidates until their bounds are reviewed.
    reviewed_count = 8 if table == 0x700499 else None
    destinations = []
    for index in range(reviewed_count or 512):
        data = pe.get_data(table-base+index*4, 4)
        if len(data) != 4:
            break
        address = struct.unpack("<I", data)[0]
        if not lo <= address < hi:
            break
        destinations.append(hex(address))
        if covered[address-lo] or address in entries:
            continue
        entries[address] = dict(address=hex(address), input_sha256=identity, required=False,
            classification="CONFIRMED_TABLE_DESTINATION" if reviewed_count else "HYPOTHESIS",
            origin_kind="indexed_jump_table", table=hex(table), table_index=index,
            evidence=f"Original indexed JMP at 0x{instruction:08x} reads this absolute destination from 0x{table+index*4:08x}. Bound is {'reviewed (8 entries)' if reviewed_count else 'unreviewed; contiguous in-text destinations, capped at 512'}. Existing code/data is never cleared.")
        added += 1
    tables.append(dict(base=hex(table), instruction=hex(instruction), reviewed_count=reviewed_count,
                       destinations=destinations))
(ROOT / "tools/static_jump_tables.json").write_text(json.dumps(tables, indent=2) + "\n")
path.write_text(json.dumps([entries[a] for a in sorted(entries)], indent=2) + "\n")
print(f"Added {added} static candidates; {len(entries)} total seeds; inspected {len(tables)} indexed jump tables")
