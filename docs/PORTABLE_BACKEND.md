# Portable fast backend (stage 3)

The fast backend (`tools/generate_fast.py`) generated C++ that was correct only on an x86-32 host with the guest at its own addresses. This
stage makes the generated code host independent: any 64-bit little-endian host (x86-64, arm64; Windows, Linux, Android, macOS, iOS) with a
clang that has `preserve_none` and `musttail`. The default output (no arguments) is byte for byte the output of before the stage:
`python tools/diff_generated.py <fresh tree> generated_fast` reports `identical: 901 files`.

## What the generator takes

| Option | Meaning |
|---|---|
| `--host x86_32` (default) | Today's product: guest address = host address, `regcall`, three guest registers in host registers, x87 on the host FPU. |
| `--host x86_64` / `--host aarch64` | The register-parameter shape with all eight guest registers as arguments (`preserve_none`); passed-through x87 hands `base + guest address` in RAX (`uintptr_t(gp(ea))`); aarch64 defaults to a virtual x87; tight leaders. Every memory access of the generated code already goes through `gp(u32)` (about 620,000 sites in `generated_fast`), so the 64-bit memory model is one function in `fast.hpp`. |
| `--x87 host` | Each x87 instruction is the same instruction on the host FPU (x86 hosts only; today's default there). |
| `--x87 double` | Virtual x87: the stack lives in `Cpu::regs` (`x87v.hpp`), arithmetic in `double`, rounded to 24 bits when the precision control says so (default on aarch64). |
| `--x87 soft80` | Virtual x87 with exact 80-bit software arithmetic (`x87_soft.hpp`), all rounding and precision modes. |
| `--x87 pcode` | The SLEIGH stack model (slow; the reference). |
| `--x87-check`, `--x87-shadow` | Validation builds of the virtual x87: count the stack depth (sticky stack fault like the hardware) / run every instruction on the virtual and the host FPU in lock step and report differences. |
| `--leaders conservative` (default on x86_32) / `tight` | See "Block entries" below. |

## The x87

110,732 x87 instructions in 699 pages used to be inline assembly. The game uses 57 mnemonics in 149 encodings.

* `x87_soft.hpp`: add, subtract, multiply, divide, square root, round to integer, conversions to and from binary32/binary64/integers and
  compare on the 80-bit extended format, with the control word's rounding control and precision control (24, 53, 64 bits). Header only,
  no floating point, no 128-bit division. `x87_soft_tests.cpp` compares it bit for bit with the host FPU: 44.1 million checks, no difference.
* `x87v.hpp`: the 149 encodings as `insn<opcode, modrm>(R, operand)`. The slots are the 16-byte registers at `0x1100`, TOP is a byte at `0x10b1`
  (the status word is composed on demand), C0..C3 at `0x1090..0x1093`, the control word at `0x10a0` (0 reads as the Win32 default 0x027f).
  Transcendental functions (FSIN, FCOS, FPTAN, FPATAN, F2XM1, FYL2X, FYL2XP1, FSINCOS) are computed in double in both modes (about 60 sites in the game).
  `x87v_tests.cpp` runs every encoding (including FSAVE/FRSTOR/FLDENV/FNSTENV) against the host FPU on random stacks and operands:
  **soft80: 0 differences in 58,000+ trials; double: 0 in 58,000, and 5 in 438,000 at higher counts, all of them a rounding of an operand that has more than 24 bits
  to 24 bits twice (FIADD/FISUB with a 53-bit operand under 24-bit precision) or a NaN payload (FSCALE)**.
* Behaviour that differs from the hardware, by design: exception flags and the tag word are not modelled; `double` ignores the rounding control
  except in FRNDINT/FIST/FISTP, has the double exponent range, and cannot hold 64-bit significands (FLD m80 and FILD of 64-bit integers round);
  FPREM reduces completely instead of in 63-bit steps (C2 is always 0).
* **Control word and the platform.** With the virtual FPU the guest's x87 state exists only in `Cpu::regs`, so native code can no longer change it.
  `NativePlatform::initialize_cpu` must start a processor at the Win32 default `0x027f` (53-bit precision) - it wrote the SLEIGH reset value `0x037f`,
  which was harmless while the host FPU ran the code and made the CRT's FDIV self-test take another path here. A Direct3D 9 `CreateDevice` without
  `D3DCREATE_FPU_PRESERVE` lowers the calling thread's precision to 24 bits on Windows and the original game ran like that: a D3D9 facade must clear
  bits 8-9 of the guest control word (registers `0x10a0`) in `CreateDevice`/`Reset` unless the behaviour flags contain `FPU_PRESERVE` (0x2).
  Hooks that push floats with inline `flds` (`mods_anchor.cpp`, `mods_rendering.cpp`) must use `x87v::Fpu<x87v::Policy>::push` on `c.regs.data()`.
* Validation tools: `tools/build_x87_tool.sh` builds the console tools against a virtual build; `x87_diff_main.cpp` and `dynamic_code_tests.cpp`
  (boot prefix) run on it; `--x87-shadow` builds a binary that executes every x87 instruction on the virtual and the host FPU and compares:
  the 8,594 x87 instructions of the boot prefix are identical.

### Speed (x86-32 host, SSE2; guest function 0x6717c7, a 4x4 float matrix product: 64 x87 operations in 61 instructions; best of 15 runs, machine under load)

| x87 | ns per call | without the ~40 ns of the measuring loop | relative |
|---|---|---|---|
| `host`, conservative leaders (today) | 70-76 | ~32 | 1.0 |
| `host`, tight leaders | 64-68 | ~26 | 0.8 |
| `double` | 149-151 | ~110 | 3.4 (vs today) |
| `soft80` (check build) | ~4,800 | ~4,760 | ~150 (vs today), ~43 (vs `double`) |

`double` costs about 3x the host FPU on x87-dense code; `soft80` is a reference, not a product mode (about 75 ns per x87 operation: ~940 aarch64 instructions for six x87 instructions against ~85 for `double`). Recommendation (the user's decision):
**x86 hosts keep `--x87 host`; arm64 defaults to `--x87 double`** (bit-exact for the Win32 precision settings except in the cases above) **and
`--x87 soft80` stays available as the exact reference** and as the mode of an `--x87-shadow`-style comparison. If the arm64 profile shows x87 as the
hot path, the next step is a static TOP per block (slots as locals) rather than more rounding tricks.

## Block entries

`gen_regs.py` splits the program into superblocks at *leaders*. The conservative rule made every 32-bit constant that is a code address a leader,
which includes the address that the SLEIGH model stores in `FPUInstructionPointer` in every x87 instruction: every x87 instruction became its own block
(271,423 leaders). `--leaders tight` ignores that self-address (177,625 leaders, -35%), which lengthens the straight-line x87 code and removes
tail calls between its instructions (-8% on the matrix function even with the host FPU). It is the default for the 64-bit hosts and the virtual FPU and
**not** for `x86_32` + `host` because it changes the shipped output; it passed `reg_entries`, the boot prefix and `x87_host_fpu` there. Recommendation: make it the default
once the user has run it.

The leader set is host independent: the portable build did not expose any missing leader (`reg_entries` and `tools/discover_gap_entries.py` unchanged:
10 accepted gap candidates, 0 new seeds).

## Portable user operations

`host.hpp` holds everything that differs between x86 and arm64 (`cpuid` from a fixed 2004-era processor description, the cycle counter,
MXCSR and x87 control state). `userops_pure.hpp` implements the MMX/SSE2 operations (saturating arithmetic, `pmaddwd`, `pmulhw`, shifts, packs) with
plain C++ for both widths; the reciprocal estimates (`rcpps`, `rcpss`, `rsqrtss`) stay the instruction on x86 and are exact `1/x` elsewhere.
`fast_optests` compares the portable code with the `_mm_*` implementation in `userops.cpp`: 2458 cases, 368,700 executions, no failure on x86-32 and x86-64.

## Calling convention

`PN` in `fast_regs.hpp` is `regcall` on x86-32 and `preserve_none` on x86-64 and arm64. A block-to-block `musttail` call is a plain jump on all of them
(checked in the assembly of aarch64-linux, aarch64-macos, aarch64-pc-windows-msvc and x86_64-linux).

## Gates (run on the Windows PC; `tools/cross_gate.py <tree> <target>` compiles every file of a tree, `-O0`)

| Gate | Result |
|---|---|
| default output unchanged | `generate_fast.py` without arguments regenerated after the last change: `identical: 901 files` against `generated_fast` (`tools/diff_generated.py`) |
| 32-bit `ctest` (default build, 50 tests incl. `fast_dynamic`, `fast_dynamic_boot`, `fast_resources`, `reg_entries`, `x87_host_fpu`, `launcher_cli`) | 50 of 50 pass |
| 32-bit virtual x87, `double` and `soft80` (all pages generated and built in that mode) | `fast_platform`, `fast_dynamic`, `fast_dynamic_boot` (220,614 instructions as the interpreter), `fast_widescreen` x2, `fast_seh`, `fast_resources`, `reg_entries`, `x87_host_fpu` (60 functions, 692 trials, 0 mismatches) pass |
| `--host x86_64`, 901 files, conservative leaders | `x86_64-pc-windows-msvc` 901/901, `x86_64-linux-gnu` 901/901 |
| `--host x86_64`, 901 files, tight leaders (final generator) | `x86_64-pc-windows-msvc` 901/901 (541 MB of objects at -O0) |
| `--host aarch64` (virtual x87 `double`), 901 files, conservative leaders | `aarch64-linux-gnu` 901/901, `aarch64-pc-windows-msvc` 901/901, `aarch64-macos` 901/901 |
| `--host aarch64`, tight leaders (final generator) | `aarch64-linux-gnu` 901/901, `aarch64-pc-windows-msvc` 901/901 (`aarch64-macos` and `x86_64-linux-gnu` with tight leaders were still compiling when this was written; both pass with conservative leaders) |
| `reg_entries` on the 64-bit trees (14,987 addresses against 177,625 entries) | pass |
| the whole `--host x86_64` program executed on x86-64 | `tools/spike/x64_program_check.cpp`: the 901 files, built as x86-64, map the real image **in an arena** (`host = base + guest`, base from `VirtualAlloc`, not at the guest addresses) and run the game's resource-name hash routine for 147 random strings: results and instruction counts identical to the 32-bit product in all 147 (`tools/spike/arena_cmp.py`). This also proves that no generated code or x87 `.byte` instruction relies on a 32-bit host pointer on the paths executed. |
| JDLZ on x86-64 (`tools/spike/jdlz_bench.cpp`, page 573 of the `x86_64` tree) | output and instruction count (14,299,370) identical |
| `x87v_tests`, `x87_soft_tests`, `fast_optests` as x86-64 programs | pass |
| `fast_dynamic`, `fast_dynamic_boot` on x86-64 | not possible yet: they need `NativePlatform` (bridge, x86-32 JIT) |
| arm64 execution | not done: no device or emulator on the PC; `tools/litmus/tso_litmus.cpp` and the x87 comparisons are the first things to run there |

## Memory ordering on arm64

See `docs/MEMORY_ORDER_ARM64.md`.
