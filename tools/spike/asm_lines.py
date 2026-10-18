"""Print the assembly that belongs to a range of source lines of a clang -S -gline-tables-only listing (COFF .cv_loc).
usage: asm_lines.py listing.s first_line last_line"""
import re
import sys

path, lo, hi = sys.argv[1], int(sys.argv[2]), int(sys.argv[3])
cur = None
for line in open(path, encoding="utf-8", errors="replace").read().split("\n"):
    m = re.match(r"\s*\.cv_loc\s+\d+\s+\d+\s+(\d+)", line)
    if m:
        cur = int(m.group(1))
        continue
    if cur is not None and lo <= cur <= hi and line.strip() and not line.strip().startswith("."):
        print(cur, line)
