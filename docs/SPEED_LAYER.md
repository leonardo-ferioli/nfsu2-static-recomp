# Speed layer

Shortcuts in the translated program and its Windows bridge that never change what the game computes. They exist because the
game thread in a race is CPU-bound in translated code (live run 2026-10-20 with our d3d9.dll in worker mode: 41 ms of a 42 ms
frame outside the dll). Everything is in `speed.hpp` / `speed.cpp`, `native32.cpp` (bridge), `tools/gen_regs.py` and
`tools/generate_fast.py` (generator).

## Switches

| Switch | `launcher.ini` `[speed]` | Environment (wins) | What it does |
|---|---|---|---|
| native calls | `native_calls=on` | `NFSU2_SPEED_NATIVE_CALLS=0/1` | Translated code makes a Windows / Direct3D / COM call itself (`ent_native` -> `g_native_hook`) instead of returning to the dispatch loop, and the bridge takes a *plain path* for targets without special treatment |
| predicted returns | `predict=on` | `NFSU2_SPEED_PREDICT=0/1` | A `RET` first compares its target with the return sites of the callers of its function (up to 4, from the static call graph) and tail-calls the block directly; otherwise the dispatch switch as before |
| cached lookups | `lookups=on` | `NFSU2_SPEED_LOOKUPS=0/1` | The widescreen fix's name lookups (patch addresses, variables, hooks: several per HUD quad) remember their last match, still confirmed by comparing the name |
| all | `enabled=off`, `--no-speed` | `NFSU2_SPEED=0` | Everything above off |

The launcher logs the state at start: `speed layer: native calls on, predicted returns on, cached lookups on`.

Not switchable at run time (code shape, verified by the differential tests; compare with a launcher built before it):

* **x87 operands** (`generate_fast.py --x87-operands precise`, the default): each passed-through x87 instruction names the guest
  memory it reads or writes (an asm `m` / `=m` operand of that size) instead of clobbering all memory, and register forms clobber
  nothing, so guest registers cached in host registers are not stored and reloaded around every FPU instruction. 80-bit stores,
  FLDENV/FNSTENV/FRSTOR/FNSAVE and BCD forms keep the full barrier. `--x87-operands clobber` gives the old code.
* **Bridge cleanups** (always on, same behaviour): the common path of `NativePlatform::dispatch` no longer compares strings, reads
  guarded statics or takes a 64-bit locked add on every call (`invalidate_native_memory` is a plain 32-bit bump; the device state
  cache counters are main-thread plain increments; the first-call trace bitmap check is inline); results are read with two 32-bit
  loads (a merged 64-bit load could not be store-forwarded).

## Why each one is safe

* Predicted returns compare the full 32-bit target and jump to the very block the dispatch switch would select; a missing or
  wrong prediction only costs the comparison.
* The plain path is decided per route (target) and decided again whenever a target the bridge treats specially becomes known
  (`plain_generation`: Direct3DCreate9, the device, Present, state blocks); it excludes named imports with special handling, the
  device state targets, Present, Reset, CreateDevice, state blocks, the recorder, the profiler, and any call whose first argument
  may be a DirectInput object. It performs the same steps in the same order as the general path for such a call.
* `ent_native` stores the argument registers, keeps `Cpu::instructions` exact around the call and, when the bridge declines
  (unknown address, the stop address of an `execute`, a stopping platform), returns to the loop exactly like `XIT`.
* The x87 operands describe the instruction's real memory access; the order of FPU instructions is kept by `asm volatile`.

## Measurements (console benchmarks on the development machine, no game run)

| Benchmark | Before | After |
|---|---|---|
| guest -> native call, COM-style direct address (`fast_native_bench`) | 150 ns | 57 ns |
| guest -> native call through an IAT token | 167 ns | 69-76 ns |
| translated wrapper -> EnterCriticalSection/LeaveCriticalSection, entered from the loop | ~235 ns (layer off) | 150 ns |
| game hash routine (`speed_fast --bench-hash`), JDLZ (`fast_resource_tests`) | 2080-2115 / 1256 M instr/s | same |

A race makes ~28,000 native calls per frame (the Oct 17 profile: 16,000 of them texture AddRef/Release from the D3DX effect code),
so the bridge alone is ~2.5 ms per frame less on this machine.

Trap: a real (non-tail) call inside a translated block makes clang's `regcall` save XMM4-7 in the prologue of every such block
(10 % slower translated code). The in-code native call is therefore a tail call into one shared helper (`ent_native`).

## Tools

* `tools/profile_resolve.py --map <nfsu2_launcher.map> --log logs/native_trace.log [--windows a-b]`: the `--profile` report's
  launcher RVAs as guest functions (`blk_XXXXXX` -> guest address -> function of the export), dispatch and bridge.
* `bench_sampler.hpp`: instruction-pointer sampler for console benchmarks (`NFSU2_BENCH_SAMPLE=1`, `_FINE=1` for 16-byte
  buckets), resolved with the executable's linker map.
* `tools/guest_disasm.py <addr>...`: the export's disassembly of the functions holding those addresses.
