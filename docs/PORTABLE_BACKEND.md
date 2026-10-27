# Portable fast backend (stage 3)

The fast backend (`tools/generate_fast.py`) generates C++ that was, until stage 3, correct only on an x86-32 host with the guest at its
own addresses. This stage makes the generated code host independent: any 64-bit little-endian host (x86-64, arm64; Windows, Linux,
Android, macOS, iOS) with a clang that has `preserve_none` and `musttail`. The default output (no arguments) is byte for byte the
output of before the stage: `python tools/diff_generated.py <fresh tree> generated_fast` reports `identical: 901 files`.

## What the generator takes

| Option | Meaning |
|---|---|
| `--host x86_32` (default) | Today's product: guest address = host address, `regcall`, three guest registers in host registers, x87 on the host FPU. |
| `--host x86_64` / `--host aarch64` | The register-parameter shape with all eight guest registers as arguments (`preserve_none`); passed-through x87 hands `base + guest address` in RAX (`uintptr_t(gp(ea))`); aarch64 defaults to a virtual x87. Every memory access of the generated code already goes through `gp(u32)` (about 620,000 sites in `generated_fast`), so the 64-bit memory model is one function in `fast.hpp`. |
| `--x87 host` | Each x87 instruction is the same instruction on the host FPU (x86 hosts only; today). |
| `--x87 double` | Virtual x87: the stack lives in `Cpu::regs` (`x87v.hpp`), arithmetic in `double`, rounded to 24 bits when the precision control says so. |
| `--x87 soft80` | Virtual x87 with exact 80-bit software arithmetic (`x87_soft.hpp`), all rounding and precision modes. |
| `--x87 pcode` | The SLEIGH stack model (slow; the reference). |
| `--x87-check`, `--x87-shadow` | Validation builds of the virtual x87: count the stack depth (sticky stack fault like the hardware) / run every instruction on the virtual and the host FPU in lock step and report differences. |

## The x87

110,732 x87 instructions in 699 pages used to be inline assembly. The game uses 57 mnemonics in 149 encodings.

* `x87_soft.hpp`: add, subtract, multiply, divide, square root, round to integer, conversions to and from binary32/binary64/integers and
  compare on the 80-bit extended format, with the control word's rounding control and precision control (24, 53, 64 bits). Header only,
  no floating point, no 128-bit division. `x87_soft_tests.cpp` compares it bit for bit with the host FPU: 44.1 million checks, no difference.
* `x87v.hpp`: the 149 encodings as `insn<opcode, modrm>(R, operand)`. The slots are the 16-byte registers at `0x1100`, TOP is in the status
  word at `0x10a2`, C0..C3 at `0x1090..0x1093`, the control word at `0x10a0` (0 reads as the Win32 default 0x027f). Transcendental functions
  (FSIN, FCOS, FPTAN, FPATAN, F2XM1, FYL2X, FYL2XP1, FSINCOS) are computed in double in both modes (about 60 sites in the game).
  `x87v_tests.cpp` runs every encoding against the host FPU on random stacks and operands.
* The tool `tools/build_x87_tool.sh` builds the console tools against a virtual build.

Behaviour that differs from the hardware, by design: exception flags and the tag word are not modelled; `double` ignores the rounding control
except in FRNDINT/FIST/FISTP, has the double exponent range, and cannot hold 64-bit significands (FLD m80 and FILD of 64-bit integers round);
FPREM reduces completely instead of in 63-bit steps (C2 is always 0).

## Portable user operations

`host.hpp` holds everything that differs between x86 and arm64 (`cpuid` from a fixed 2004-era processor description, the cycle counter,
MXCSR and x87 control state). `userops_pure.hpp` implements the MMX/SSE2 operations (saturating arithmetic, `pmaddwd`, `pmulhw`, shifts, packs) with
plain C++ for both widths; the reciprocal estimates (`rcpps`, `rcpss`, `rsqrtss`) stay the instruction on x86 and are exact `1/x` elsewhere.
`fast_optests` compares the portable code with the `_mm_*` implementation in `userops.cpp`.

## Calling convention

`PN` in `fast_regs.hpp` is `regcall` on x86-32 and `preserve_none` on x86-64 and arm64. A block-to-block `musttail` call is a plain jump on all of them
(checked in the assembly of aarch64-linux, aarch64-macos, aarch64-pc-windows-msvc and x86_64-linux).

## Memory ordering on arm64

See `docs/MEMORY_ORDER_ARM64.md`.
