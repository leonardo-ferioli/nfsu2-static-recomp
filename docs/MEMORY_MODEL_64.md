# 64-bit guest memory model

Status: design and stage 1 (2026-10-27). Starts from the tag `checkpoint-pre-64bit`. Everything below the line "Stages" is a plan; what exists is marked.

## Goal and invariants

Run the translated game on a 64-bit host (Windows x64 first, then Linux and Android arm64/x64) without changing what the game computes.

1. The guest is a 32-bit program: its registers hold 32-bit addresses, its image is at `0x00400000`, its stack, heap, TEB and every object it can point to live below 4 GiB.
2. On a 64-bit host the guest lives in an **arena**: a reserved 4 GiB range at a 4 GiB-aligned `base`. Guest address `a` is host address `base + a`.
3. The 32-bit Windows build stays as it is and stays bit-identical in behaviour: there `base == 0`, the conversion compiles to nothing (`NFSU2_GUEST_IDENTITY`).
4. **No host pointer ever reaches the guest.** A host object the guest can name (a COM object, a window, a handle, a callback) is given a guest-side stand-in: a handle in a biased range, a method token (`0xf1000000+`, `NativePlatform::add_method_token`) or an import token (`0xf0000000+`). The facades already built this way (Win32, DirectInput, DirectSound) are the model.
5. Libraries (`legacy_win32`, `legacy_dsound`, the DirectInput model, the Direct3D 9 layer) never assume a guest address is a host address. They get guest memory through `guest::Memory` (`guest_memory.hpp`).

## Where the identity assumption lives today (inventory)

| Place | What it assumes | Counts (2026-10-27) |
|---|---|---|
| `fast.hpp` `gp(u32)` | every load and store of the generated code is `*(T*)(uintptr_t)a`. One function, used by all 899 generated pages | 1 definition |
| generated x87 asm (`generate_fast.py`) | the effective address is passed in EAX (`.byte 0xd9,0x00`): a 32-bit register. On x64 it must be the 64-bit host address in RAX | one emitter |
| `runtime.cpp` `Cpu::pointer`, `runtime.hpp` | the reference (raw) backend keeps guest memory as `Region`s: already virtual, works on 64 bits (the `raw_*` tests pass at 64 bits) | -- |
| `native32.cpp` (the bridge, 1602 lines) | imports are called with the guest's stack words as arguments; pointers among them are valid host pointers; results (HeapAlloc, GetProcAddress, COM objects) are host pointers handed to the guest as 32-bit values | ~42 casts, ~66 `uintptr_t` |
| `native32_reservation.cpp`, `/BASE:0x400000`, `native32_sections.txt` | the guest image VA is reserved by the linker in the 32-bit loader image | 1 section |
| `mods_*.cpp` | `reinterpret_cast<T*>(uintptr_t(address))` to patch the guest's globals, and the reverse for the guest's strings | ~70 casts in `mods_registry`, `mods_system`, `mods_input`, `mods_gamma`, `mods_resolution` |
| `dynamic_code.cpp` (SLEIGH interpreter) | reads and writes guest memory through host pointers | 12 casts |
| `d3d9_recorder.cpp`, `win32_facade*.cpp`, `platform/audio/dsound_install.cpp` | the vtable/COM objects are `{vtable, id}` in guest memory; they read guest strings and structures | 14 + 3 + 6 casts |
| D3D9 layer (`nue_d3d9`) `Lock` memory | `LockedRegion` is a host `std::vector`; fine while the dll shares the guest's process, needs the arena on 64 bits | library |
| Threads | `CreateThread` makes a host thread that runs a guest CPU context; `timeSetEvent` callbacks, SEH (`RtlUnwind`) | bridge |

## The model

* `guest_memory.hpp` (stage 1, exists): `guest::to_host(u32)`, `guest::to_guest(const void*)`, `guest::ptr<T>(u32)`, `guest::set_arena_base`, and the abstract `guest::Memory` (alloc / free / host / address_of) that the libraries use. `dsound_facade.hpp` already has an equivalent `GuestMemory`; it becomes an alias.
* Arena on Windows x64: `VirtualAlloc(base, 4 GiB, MEM_RESERVE)` with `base` chosen once (try a fixed high address, fall back to any 4 GiB-aligned range), pages committed on demand. On Linux/Android: `mmap(PROT_NONE)`. The image is mapped at `base + 0x400000`.
* Guest allocation: an arena allocator behind `guest::Memory` (heap, stack, TLS, TEB, the PEB-like structures the CRT reads). The Win32 module `memory` (`AddressSpace` with the Win32 region rules, `ArenaAddressSpace`) already models `VirtualAlloc` / heaps over such an arena.
* Generated code: `gp(a) = base + a`. With the base in a register (`Cpu`-adjacent global, `__restrict`) this is one `lea`; the cost is to be measured (stage 3). The x87 asm passes `base + a` in RAX.
* The bridge does not forward guest pointers to Windows on 64 bits. Every import is answered by a Level A module (reached: 130 of 249 imports, see `docs/NUE_HANDOVER_WIN32_DINPUT.md`) or by a logged failure. The imports with host effects (window, input, files, time) go through `platform::services()`.

## Stages

1. **Abstraction, identity only (this commit).** `guest_memory.hpp`; `fast.hpp` `gp` and the casts in `native32.cpp`, `mods_*.cpp`, `dynamic_code.cpp`, the facades go through it. 32-bit result identical: same tests (50 of 50), same generated code (the pages are not regenerated).
2. **Arena on the 32-bit host as a switch off, 64-bit raw backend.** Build the reference backend with the arena allocator and run its tests at 64 bits (already green without it); `guest::Memory` implementation `ArenaMemory`.
3. **x64 fast backend.** `generate_fast.py --host x64`: `gp` with the base, x87 asm address in RAX, `gen_regs.set_target('x64')` (all 8 guest registers in host registers), `ent_native` / predicted returns adapted, tail calls. Compile all pages for x64 and run `fast_*` tests that do not need the bridge (`fast_dynamic`, `fast_resources`, `reg_entries`, `x87_host_fpu`).
4. **`NativePlatform64`.** Image mapping in the arena, TEB/stack/heap in guest memory, guest threads, SEH, timer callbacks, the SLEIGH interpreter over the arena; imports from the Level A modules only. The three layers below move to their final shape here.
5. **Run on Windows x64** (menu first), then Linux, then Android.

Rule for every stage: the 32-bit build keeps passing its tests; nothing is pushed; a stage ends in a commit with the test results.

## Who does what

| Piece | Owner (session) | Delivers |
|---|---|---|
| Memory model, `guest_memory.hpp`, runtime / bridge / mods conversion, stages 1, 2 and 4 | this port session (`integrate-port`) | the arena, `NativePlatform64`, the conversion of the casts |
| Generator for x64 (stage 3) | `translated-code-guest-re` | `tools/generate_fast.py` / `gen_regs.py` `--host x64`, owns `generated_fast*` |
| Win32 subset | `platform-api` (author of `legacy_win32`) | every module on `guest::Memory`; the bridge-only parts (threads, timers, SEH, module, exit, VirtualAlloc/Protect, dynamic code regions) as Level A with a guest-CPU interface; registry facade wired; unreached imports answered with a logged failure; the move to `nue-engine` (`src/legacy/win32`) |
| DirectInput | `platform-api` with `nue-windows` / `nue-core` | the model on `guest::Memory`; controller action maps (needs the `NFSU2_TRACE_INPUT=1` log from a player); non-Windows input backends |
| DirectSound | `nue-dsound` (library in `nue-engine`), `port-dsound` (the port) | `legacy_dsound` synchronised with the port's facade (`GuestMemory`, `HostServices`), no host-address assumption; sinks per platform through `nue-audio` / the platform backends |
| ABI and guest memory in `nue-engine` | `nue-core` | the ptr32 / ptr64 references in `nue_engine/docs/ABI.md` reconciled with `guest::Memory` |

Integration works both ways: the port consumes the NUE libraries once they build against `guest::Memory`; a failure found in the port is fixed in the port and in the NUE copy in the same round, and each side commits.
