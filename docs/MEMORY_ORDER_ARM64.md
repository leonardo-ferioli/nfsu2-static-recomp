# Memory ordering of translated code on arm64

The guest is an x86 program, so it assumes x86-TSO: the only reordering the hardware may show is a load overtaking an earlier **store to a
different address**. Loads stay in order with loads, stores with stores, loads before later stores, and all processors agree on the order of
stores. arm64 gives none of that by itself (load/load, load/store, store/store may all reorder, and a store may become visible to
different processors at different times unless the architecture's multi-copy atomicity holds, which it does on current ARMv8.x cores).

## What the translated game actually contains (measured on the export)

* **No LOCK-prefixed instruction and no `CMPXCHG`/`XADD` anywhere in `SPEED2.EXE`.** One `XCHG [ESP],EAX` (0x75bf7b, a private stack slot) is the
  only implicitly locked form. The game synchronises through Windows: `EnterCriticalSection`, events, `Interlocked*` imports, `Sleep`, `WaitFor*`.
  So the cost of the LOCK/XCHG emission is nil; what matters is what the *platform* does for those imports (below).
* Everything else is plain loads and stores: ~620,000 sites in the generated pages, all of them through `gp(u32)` (`fast.hpp`).
* Runtime-generated audio modules (interpreted, not translated) may contain locked forms; the interpreter's `LOCK`/`UNLOCK` are a recursive
  mutex today (`userops.cpp`), which is correct on any host.

## Emission policy (cheapest correct)

1. **Locked read-modify-write** (the translator has no site today; when one appears, e.g. in the audio modules): one sequentially consistent C++
   atomic of the operand's size, `__atomic_fetch_add/sub/and/or/xor`, `__atomic_exchange_n`, `__atomic_compare_exchange_n` with `__ATOMIC_SEQ_CST`.
   arm64 with LSE (ARMv8.1: every Apple core, Cortex-A76 and newer) compiles them to a single `ldaddal` / `swpal` / `casal`; without LSE to an
   `ldaxr/stlxr` loop (both are full barriers like x86 locked operations). Checked in the assembly of `aarch64-linux-gnu`.
2. **Platform synchronisation is the fence.** Every import that publishes or consumes data across threads (critical sections, events, semaphores,
   `Interlocked*`, `Sleep`, `WaitFor*`, `CreateThread` and thread entry, timer callbacks) must be implemented with C++ synchronisation
   (mutex, `std::atomic` seq_cst, or `std::atomic_thread_fence(seq_cst)` around the call). Data protected by them is then ordered on any host without
   any fence in the generated code. This covers the game's own protocol.
3. **Plain accesses stay plain** (`ldr`/`str` with the 32-bit guest address as a zero-extended index: `ldr w0, [x0, w1, uxtw]`, one instruction,
   same cost as the identity model). They are wrong only for a program that publishes data with an unsynchronised flag (message passing without
   any Windows call). The game has two worker threads (audio, streaming); the platform's own hand-offs are the OS calls above. If a fault ever
   shows up as a stale read of a flag, enable the exact mode below for that build to confirm it.
4. **Exact mode (to be added to the generator behind `--memory-order tso` when the litmus test on a device says it is needed)**: every load an
   acquire, every store a release. arm64: `ldapr` (FEAT_LRCPC, ARMv8.3: Apple M-series, Cortex-A78 and newer) / `stlr`; on cores without RCpc `ldar`.
   x86-TSO is then exact, including store buffering (the one allowed reordering needs no barrier). Cost: one extra `add` for the address
   (the acquire/release instructions have no register-index form) and a more expensive load; **to be measured on a device** (no arm64 machine was
   available for this stage). Unaligned guest accesses (the guest does not require alignment) cannot use `ldapr/stlr` (alignment fault) unless FEAT_LSE2
   is present (Apple M1 and newer, Cortex-X2 and newer): the exact mode emits the plain access plus a `dmb ish` for an address that is not provably aligned.

## Assembly shapes (aarch64, `-mcpu=generic+lse+rcpc`, from `zig c++`)

| Guest access | Emission | arm64 instructions |
|---|---|---|
| plain 32-bit load / store | `memcpy`-style access of `base + a` | `ldr w0,[x0,w1,uxtw]` / `str w2,[x0,w1,uxtw]` |
| acquire load / release store (exact mode) | `__atomic_load_n(.., ACQUIRE)` / `__atomic_store_n(.., RELEASE)` | `add x8,x0,w1,uxtw; ldapr w0,[x8]` / `add x8,x0,w1,uxtw; stlr w2,[x8]` |
| `LOCK XADD` / `XCHG` / `LOCK CMPXCHG` | seq_cst atomics | `ldaddal` / `swpal` / `casal` |
| `MFENCE` | `atomic_thread_fence(seq_cst)` | `dmb ish` |

## The litmus test

`tools/litmus/tso_litmus.cpp` (C++20, threads, no dependencies). It runs store buffering (SB), message passing (MP), load buffering (LB),
IRIW and SB-with-locked-exchange under four emissions (`plain`, `relacq`, `fenced`, `lockrmw`) and counts the outcomes x86-TSO forbids.
Build and run on the device:

```
clang++ -O2 -std=c++20 tools/litmus/tso_litmus.cpp -o tso_litmus && ./tso_litmus 5000000      # Android (Termux), Linux arm64, macOS
```

Expected: `plain` shows forbidden MP and LB outcomes on arm64 (and IRIW only on cores that are not multi-copy atomic), `relacq` shows none, `fenced`
shows none but is not TSO-exact for loads, `lockrmw` forbids SB. On this PC (x86-64, 16 threads, 200,000 iterations) every policy shows no forbidden
outcome and the allowed SB (0,0) appears under `plain` and `relacq` (546 and 1021 times), which validates the harness. Cross-built for
`aarch64-linux-gnu` and `aarch64-macos` with zig; **not executed on arm64**.

## Decision for the user

Whether plain accesses are enough is an empirical question that needs a device: run the litmus test (one minute), then a 20-minute race with
the worker threads under `--memory-order tso` and plain and compare. Recommendation: ship plain accesses with the platform-side fences (policy 1
and 2); keep the exact mode as the switch to isolate any intermittent threading bug.
