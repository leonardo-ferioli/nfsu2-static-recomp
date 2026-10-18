# Guest registers in host registers (the code shape of the fast backend)

This is the code shape `tools/generate_fast.py` produces by default (`--reg-params x86:3`). The older shape, one function per 4 KiB
page, stays available as `--reg-params off` (the differential trace build and a few diagnostic options use it); the numbers below
compare the two.

## Why

Profiling a race (17-23 fps at 2496x1664) showed ~65% of main-thread time in translated code. In the default shape every guest
instruction loads and stores its registers through `Cpu::regs`, every branch block updates `c.instructions` and every back edge
`c.chain` in memory, and the flag bytes are stored after each flag-setting instruction because the 4 KiB-page function has
~1000 entry points (one per instruction) that defeat register allocation and scalar promotion.

## Shape

`tools/gen_regs.py` cuts the program into guest superblocks, one C++ function each, instead of one function per page:

* A function starts at a *leader* (static branch/call target, call return site, function entry, jump-table destination, any
  32-bit word of the image that points into the code, the first instruction after an unconditional transfer, a gap or a page
  boundary) and runs to the next leader. Conditional branches leave by tail call; the fall-through continues inline.
* The *K hottest* general registers travel as arguments (`x86:K`: ESP EAX ECX ESI EDI EDX EBX EBP in that order, clang `regcall`;
  `x64`: all eight, clang `preserve_none`) and are handed on by `[[clang::musttail]]` calls. Registers that are not arguments stay
  in `Cpu::regs`, but `Cpu&` is `__restrict`, so inside a function (and a self loop) the compiler keeps them in host registers.
* Flags are function locals, stored to `Cpu::regs` only where whole-program liveness (`flaglive.py`) says a successor reads them.
* The executed-instruction count is a down-counter in a register (`bud`), checked on backward edges and dynamic transfers; it
  replaces `c.chain`. `c.instructions` is exact at every runtime service, hook and exit (instruction counts equal the default
  shape in `fast_dynamic_boot` and the JDLZ/hash benchmarks).
* Dynamic transfers (RETURN, CALLIND, BRANCHIND) store `c.pc` and enter `ent_dispatch` (switch on page, then on address).
  Runtime services (user ops, mod hooks, faults) are bracketed by `SPILL_OUT`/`SPILL_IN` that write/reload registers and flags.

**Known limit:** a dynamic transfer to an address that is not a leader reports `no statically translated instruction at 0x...`
(the default shape has an entry for every instruction). The leader set is deliberately generous (see above) and the boot prefix,
the x87/SEH/widescreen/resource tests run clean, but a path the tests do not reach could still hit it. If it ever does, the
address in that message is all that is needed to add it as a leader.

## Numbers (console only, one Ryzen laptop, best of several runs; instruction counts identical in all)

| Benchmark | default shape, x86-32 | `--reg-params x86:3`, x86-32 | ratio |
|---|---|---|---|
| JDLZ decompress `GLOBAL/InGameCommon.lzc` (`fast_resource_tests`) | 1215-1245 M instr/s | 2140-2250 M instr/s | 1.8x |
| game hash routine, calls + loops + tables (`speed_fast --bench-hash`) | 1230-1300 M instr/s | 4190-4770 M instr/s | 3.4-3.7x |

JDLZ only (page 573, `tools/spike/jdlz_bench.cpp`, `tools/spike/build_bench.sh`), to see what each ingredient is worth:

| Build | M instr/s |
|---|---|
| x86-32, default shape | 1092-1240 |
| x64, default shape | 1308 |
| x86-32 / x64, default shape with a per-page local register copy (`--local-regs`) | 351 / 510 |
| x86-32 `--reg-params x86:0` (no register arguments, superblock functions + `__restrict` + register budget) | 2281 |
| x86-32 `x86:1` / `x86:2` / `x86:3` / `x86:4` / `x86:5` | 2401 / 2403 / 2409 / 2289 / 2167 |
| x64 `--reg-params x64` (all eight in host registers) | 2543-2571 |

Reading: most of the gain comes from the superblock structure (counters, flags and `__restrict` registers) rather than from the
number of argument registers; on x86-32 more than ~3 argument registers hurts (regcall has five argument registers, `c` and
`bud` take two). A 64-bit host adds only ~7% on the tight loop over the 32-bit one, so this does not by itself require the x64 port.

Code size: launcher `.text` 44.8 MB vs 43.5 MB (+3%); generated sources 374 MB vs 212 MB (boilerplate per function); full build ~5.5-8 min
with 16 jobs.

Not measured: frame rate in the game (graphical runs are the user's). Expected: translated code was ~65% of the main thread; if it
becomes 2-3x faster on average the frame time drops accordingly, but D3D/driver time (~10%) and the bridge stay.

## Use

```powershell
.\build.ps1 -Package      # generated_fast/ (this shape), build32/, ctest, dist\NFSU2-static
```
or by hand: `python tools/generate_fast.py`, then
`cmake -S . -B build32 -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release "-DCMAKE_CXX_FLAGS=-m32 -msse2"`
and `cmake --build build32`. All `ctest` differential tests that apply (`fast_dynamic`, `fast_dynamic_boot`, `fast_resources`,
`fast_platform`, `fast_seh`, `fast_widescreen*`, `x87_host_fpu`, `launcher_cli`, `reg_entries`) pass on this build.

Not covered: `nfsu2_fast_trace` (difftrace) is not implemented for this shape (generate with `--reg-params off` for it); `--reg-params x64` generates code but the platform
layer (`native32.cpp`) is 32-bit only, so only the benchmark harness in `tools/spike/` runs it.
