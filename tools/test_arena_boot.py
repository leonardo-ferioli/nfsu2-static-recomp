"""The reference engine gives the same results with the guest's memory in vectors and in the 64-bit arena (docs/MEMORY_MODEL_64.md).

    python tools/test_arena_boot.py <speed_raw> <export dir> <game dir>

Runs the boot (to the first import the reference platform cannot answer) and the name-hash routine twice, with and without
NFSU2_GUEST_ARENA, and requires the same instruction count, exits, pc hash and result (the register hash holds process ids and tick counts, so it is not compared)."""
import os
import re
import subprocess
import sys

exe, export, game = sys.argv[1:4]

def run(arguments, arena):
    env = dict(os.environ)
    env.pop("NFSU2_GUEST_ARENA", None)
    if arena:
        env["NFSU2_GUEST_ARENA"] = "1"
    out = subprocess.run([exe, *arguments], env=env, capture_output=True, text=True, timeout=600)
    if out.returncode:
        sys.exit(f"{exe} {arguments} (arena={arena}) failed:\n{out.stdout}{out.stderr}")
    lines = [re.sub(r" reg_hash=\w+| EAX=\d+", "", l) for l in out.stdout.splitlines() if l.startswith("DIFFTRACE") or "statically translated" in l]   # the registers hold process ids and tick counts
    if not lines:
        sys.exit(f"no result line (arena={arena}):\n{out.stdout}")
    return lines

failed = False
for arguments in (["--boot", export, game, "3000000"], ["--hash", "frontend/lobby"], ["--hash", "x" * 120]):
    plain, arena = run(arguments, False), run(arguments, True)
    if plain != arena:
        failed = True
        print(f"DIFFERENT {arguments[0]}:\n  vectors: {plain}\n  arena:   {arena}")
    else:
        print(f"same {arguments[0]}: {plain[0][:100]}")
sys.exit(1 if failed else 0)
