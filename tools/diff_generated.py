"""Compare two generated_fast trees byte for byte, ignoring line-ending conversion done by git.

    python tools/diff_generated.py <tree A> <tree B>

Used to prove that a generator change leaves the default output unchanged (exit 0 = identical)."""
import sys
from pathlib import Path

a, b = Path(sys.argv[1]), Path(sys.argv[2])
names_a = {p.name for p in a.iterdir() if p.is_file()}
names_b = {p.name for p in b.iterdir() if p.is_file()}
bad = [f"only in A: {n}" for n in sorted(names_a - names_b)] + [f"only in B: {n}" for n in sorted(names_b - names_a)]
for n in sorted(names_a & names_b):
    if (a / n).read_bytes().replace(b"\r\n", b"\n") != (b / n).read_bytes().replace(b"\r\n", b"\n"):
        bad.append(f"differs: {n}")
print("\n".join(bad[:20]) or f"identical: {len(names_a)} files")
sys.exit(1 if bad else 0)
