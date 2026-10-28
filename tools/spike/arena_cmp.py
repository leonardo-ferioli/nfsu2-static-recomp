import random, subprocess, sys
arena_exe, export, product = sys.argv[1], sys.argv[2], sys.argv[3]
random.seed(5)
chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_./\\- "
words = ["".join(random.choice(chars) for _ in range(random.randint(1, 90))) for _ in range(150)]
words = [w for w in words if w.strip() and not w.startswith("-")]
arena = subprocess.run([arena_exe, export] + words, capture_output=True, text=True).stdout.strip().split("\n")
bad = 0
for w, a in zip(words, arena):
    ref = subprocess.run([product, "--hash", w], capture_output=True, text=True).stdout.strip()
    if a.strip() != ref:
        bad += 1
        print("DIFF", repr(w), a, ref)
print(len(words), "strings,", len(arena), "arena lines,", bad, "differences between the 64-bit arena run and the 32-bit product")
