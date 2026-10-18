"""Find referenced code addresses that Ghidra left undecoded, with a deliberately strict code test.

A candidate is an address inside .text that is not covered by any exported instruction and that is
referenced as a 32-bit value by (a) initialized .rdata/.data, (b) dwords embedded in .text itself, or
(c) a 32-bit immediate in decoded code. It becomes a seed only if a linear decode from it
  * never meets an invalid or privileged instruction,
  * keeps every relative CALL/JMP/Jcc target inside .text,
  * ends in RET/JMP/UD2 (or runs into already-decoded code) within the same undecoded gap,
  * is not the start of a pointer table (a run of dwords that themselves point into the image).
The test is validated against the exported functions (must accept them) and against the known
in-text jump tables (must reject them); the numbers are written to logs/gap_discovery.json.
Seeds are HYPOTHESIS entries: Ghidra decodes them in memory without clearing existing code or data.
"""
from pathlib import Path
import collections
import gzip
import hashlib
import json
import struct

import capstone
from capstone import x86_const

ROOT = Path(__file__).resolve().parents[1]
text = (ROOT / "export/memory_401000.bin").read_bytes()
LO = 0x401000
HI = LO + len(text)
IMAGE_LO, IMAGE_HI = 0x400000, 0x931000
manifest = json.loads((ROOT / "export/manifest.json").read_text())
identity = manifest["input_sha256"]
assert hashlib.sha256((ROOT.parent / "binaries/SPEED2.EXE").read_bytes()).hexdigest() == identity

covered = bytearray(len(text))
starts = set()
immediates = collections.defaultdict(list)
data_uses = collections.defaultdict(list)   # values only ever used as memory-operand displacements
with gzip.open(ROOT / "export/instructions.jsonl.gz", "rt", encoding="utf-8") as stream:
    for line in stream:
        ins = json.loads(line)
        a = ins["a"]
        if LO <= a < HI:
            covered[a - LO:a - LO + ins["n"]] = b"\1" * ins["n"]
            starts.add(a)
        for op in ins["p"]:
            for node in op[2:]:
                if node and node[0] == "const" and node[2] == 4:
                    value = int(node[1], 16)
                    if LO <= value < HI:
                        # A value used inside a memory operand is a data address (table base), not a code pointer.
                        literal = "0x%x" % value
                        asm = ins["asm"]
                        inside = any(literal in part.split("]")[0] for part in asm.split("[")[1:])
                        if not inside:
                            immediates[value].append(a)
                        else:
                            data_uses[value].append(a)

references = collections.defaultdict(list)
for section in manifest["memory"]:
    if section["name"] not in (".rdata", ".data"):
        continue
    blob = (ROOT / "export" / section["file"]).read_bytes()
    for i in range(0, len(blob) - 3, 4):
        value = struct.unpack_from("<I", blob, i)[0]
        if LO <= value < HI:
            references[value].append(section["start"] + i)
for i in range(len(text) - 3):
    if not covered[i] and not covered[i + 3]:
        value = struct.unpack_from("<I", text, i)[0]
        if LO <= value < HI:
            references[value].append(LO + i)

md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
md.detail = True
FORBIDDEN = {x86_const.X86_INS_IN, x86_const.X86_INS_OUT, x86_const.X86_INS_INSB, x86_const.X86_INS_INSD,
             x86_const.X86_INS_OUTSB, x86_const.X86_INS_OUTSD, x86_const.X86_INS_HLT, x86_const.X86_INS_CLI,
             x86_const.X86_INS_STI, x86_const.X86_INS_LGDT, x86_const.X86_INS_LIDT, x86_const.X86_INS_SYSENTER,
             x86_const.X86_INS_SYSEXIT, x86_const.X86_INS_IRET, x86_const.X86_INS_INT1, x86_const.X86_INS_INTO,
             x86_const.X86_INS_ARPL, x86_const.X86_INS_BOUND, x86_const.X86_INS_LCALL, x86_const.X86_INS_LJMP,
             x86_const.X86_INS_SAHF if False else x86_const.X86_INS_HLT}
ENDS = {x86_const.X86_INS_RET, x86_const.X86_INS_JMP, x86_const.X86_INS_UD2}


def gap_limit(address):
    """End of the undecoded run that contains `address`."""
    i = address - LO
    while i < len(text) and not covered[i]:
        i += 1
    return LO + i


def pointer_run(address, count=4):
    """True when `count` consecutive dwords from `address` all point into the image (a table)."""
    for k in range(count):
        chunk = text[address - LO + 4 * k:address - LO + 4 * k + 4]
        if len(chunk) < 4 or not IMAGE_LO <= struct.unpack("<I", chunk)[0] < IMAGE_HI:
            return False
    return True


def looks_like_code(address, require_gap_end=True):
    if pointer_run(address):
        return False
    limit = gap_limit(address) if require_gap_end else HI
    code = text[address - LO:limit - LO + 15]
    count = 0
    expected = address
    for ins in md.disasm(code, address):
        if ins.address != expected or ins.address >= limit and require_gap_end:
            break
        if ins.id in FORBIDDEN or (ins.id == x86_const.X86_INS_INT and ins.operands[0].imm != 3):
            return False
        group_branch = any(g in (x86_const.X86_GRP_JUMP, x86_const.X86_GRP_CALL) for g in ins.groups)
        if group_branch and ins.operands and ins.operands[0].type == x86_const.X86_OP_IMM:
            if not LO <= ins.operands[0].imm < HI:
                return False
        count += 1
        expected = ins.address + ins.size
        if ins.id in ENDS and not (ins.id == x86_const.X86_INS_JMP and ins.operands and ins.operands[0].type == x86_const.X86_OP_IMM and ins.operands[0].imm > expected + 0x4000):
            return count >= 2 or ins.id == x86_const.X86_INS_RET
        if expected >= limit:
            # Ran into decoded code: acceptable only if the gap ended exactly on an instruction boundary.
            return expected == limit and count >= 2
        if count > 4000:
            return False
    return False


# ---- validation of the test itself --------------------------------------------------------------
function_entries = [f["entry"] for f in manifest["functions"] if not f["external"] and LO <= f["entry"] < HI]
sample = function_entries[:: max(1, len(function_entries) // 800)]
accepted_known = 0
for entry in sample:
    # Known functions are decoded, so test them on the raw bytes without the gap restriction.
    accepted_known += looks_like_code(entry, require_gap_end=False)
tables = json.loads((ROOT / "tools/static_jump_tables.json").read_text())
table_starts = [int(t["base"], 16) for t in tables if LO <= int(t["base"], 16) < HI]
rejected_tables = sum(not looks_like_code(t, require_gap_end=False) for t in table_starts)

# ---- candidates ---------------------------------------------------------------------------------
# An address that some instruction dereferences as a table is data unless a pointer or code-address immediate also names it.
uncovered = sorted(v for v in set(references) | set(immediates)
                   if v not in starts and not covered[v - LO] and not (v in data_uses and v not in immediates and v not in references))
accepted = [v for v in uncovered if looks_like_code(v)]
seeds_path = ROOT / "tools/disassembly_seeds.json"
seeds = {int(s["address"], 16): s for s in json.loads(seeds_path.read_text())}
added = 0
for address in accepted:
    if address in seeds:
        continue
    origin = references.get(address)
    evidence = (f"Original 32-bit value at 0x{origin[0]:08x} refers to an undecoded .text address" if origin else
                f"Original instruction at 0x{immediates[address][0]:08x} carries this undecoded .text address as an immediate")
    seeds[address] = dict(address=hex(address), input_sha256=identity, required=False,
                          classification="HYPOTHESIS_GAP_CODE",
                          evidence=evidence + "; a linear decode is valid, branch targets stay in .text, and it ends in RET/JMP/UD2 within the undecoded gap. Decode only if Ghidra accepts it without clearing existing code/data.")
    added += 1
seeds_path.write_text(json.dumps([seeds[a] for a in sorted(seeds)], indent=2) + "\n")
report = dict(
    text_bytes=len(text), decoded_bytes=sum(covered), referenced_undecoded=len(uncovered), accepted=len(accepted),
    data_use_only_rejected=len([v for v in data_uses if v not in immediates and v not in references]),
    seeds_added=added, total_seeds=len(seeds),
    validation=dict(known_functions_tested=len(sample), known_functions_accepted=accepted_known,
                    known_jump_tables_tested=len(table_starts), known_jump_tables_rejected=rejected_tables),
    accepted_addresses=[hex(a) for a in accepted])
(ROOT / "logs/gap_discovery.json").write_text(json.dumps(report, indent=2))
print(json.dumps({k: v for k, v in report.items() if k != "accepted_addresses"}, indent=2))
