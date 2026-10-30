# 64-bit guest memory model

Status: design and stage 1 (2026-10-27). Starts from the tag `checkpoint-pre-64bit`. Everything below the line "Stages" is a plan; what exists is marked.

## Goal and invariants

Run the translated game on **any** 64-bit little-endian host with a clang toolchain, without changing what the game computes: x86-64 and arm64, on Windows, Linux, Android, macOS and iOS (Android is one target among them, not the shape of the design). Nothing in the model may name an operating system or an instruction set; what differs per host is chosen by a small, explicit host description (see "Portability"). Windows x64 is the first target only because it is where the tests run.

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
* Generated code: `gp(a) = base + a`. With the base in a register (`Cpu`-adjacent global, `__restrict`) this is one `lea`; the cost is to be measured (stage 3). The x87 asm passes `base + a` in RAX. Each translated function reads the base once into a local (`fast_arena.hpp`, `NFSU2_ARENA_LOCAL`): through the global it was loaded again after every guest store (a byte store may alias the global), 364 -> 139 loads of the base in page 0x575. Measured on the hash bench and the boot: no difference beyond noise.
* The bridge does not forward guest pointers to Windows on 64 bits. Every import is answered by a Level A module (reached: 130 of 249 imports, see `docs/NUE_HANDOVER_WIN32_DINPUT.md`) or by a logged failure. The imports with host effects (window, input, files, time) go through `platform::services()`.

## Portability: what a host has to provide

Measured on the tree at `checkpoint-pre-64bit` (a generated page compiled for `x86_64-pc-windows-msvc` passes; for `aarch64-pc-windows-msvc` it stops on the x86 intrinsics headers):

| Dependence on x86 | Size today | General answer |
|---|---|---|
| x87 instructions passed to the host FPU as inline asm (`.byte` encodings, address in EAX) | 110,732 sites in 699 of 899 generated pages (D9 52,524, D8 34,386, DE 8,009, DD 6,101, DF 5,732 ...) | `generate_fast.py --x87 host\|double\|soft80`. `host` only where the ISA is x86 (today's mode). `soft80`: exact 80-bit software arithmetic (reference quality, also the oracle for the other modes). `double`: fast, differs in the last bits; to be chosen per game hot path after measuring. The P-code stack model that `--no-x87-passthrough` already lowers through is the starting point. |
| SSE/MMX integer user operations as `_mm_*` intrinsics (`userops.cpp`, `userops_pure.hpp`, `runtime.hpp`) | ~7 files include the x86 headers | portable C++ (generic vector extensions) or a header-only translation layer; one implementation, tested against the reference `eval<>` |
| `cpuid`, `rdtsc`, `__cpuidex`, `_mm_pause` | `userops.cpp` | answered from a table (the guest sees a fixed CPU) and the platform clock |
| Calling convention of the page functions (`PN`) | `regcall` on x86-32, `preserve_none` on x86-64 and arm64 | already one macro (`fast_regs.hpp`); arm64 uses `preserve_none` |
| Inline asm in hooks (`push_float` = `flds`, `fstps` in mods and tests) | ~14 sites | the hook ABI moves the value through the register file / a guest FPU stack model, not the host FPU |
| Memory ordering | the guest is x86 (TSO); arm64 is weaker | locked instructions use seq_cst atomics; plain guest accesses stay plain except on shared structures. Decide with a litmus test on arm64 before the first multi-thread run (the game has an audio thread and a loading thread). |
| Page size | the guest sees 4 KiB pages; Apple silicon and many Android devices use 16 KiB | guest page protections (VirtualProtect, guard pages, no-access) are kept in a software table checked by the Level A memory module, never by the host MMU |
| Address space | the arena needs 4 GiB of reserved, uncommitted address space | all 64-bit hosts allow it (`PROT_NONE` reservation); the 2 GiB memory budget is about committed memory. A host that cannot reserve 4 GiB uses a smaller arena with a mask (guest addresses above the arena are unmapped) |
| 32-bit non-x86 hosts (armv7) | -- | out of scope (identity model needs the image at 0x400000) |
| Endianness | little | only little-endian hosts |

The host description is one header (`host.hpp`: ISA, OS, `NFSU2_GUEST_IDENTITY`, x87 mode, arena size) plus the arguments of `generate_fast.py`; the generated code is the same C++ for every host except the points above.

## Stages

1. **Abstraction, identity only (done).** `guest_memory.hpp`; `fast.hpp` `gp`, `mods_internal.hpp` accessors, and the guest-pointer casts in `mods_*.cpp`, `runtime.cpp`, `dynamic_code.cpp`, `d3d9_recorder.cpp`, `win32_facade*.cpp` and `platform/audio/dsound_install.cpp` go through `guest::ptr` / `guest::to_guest`; host objects the guest holds as a 32-bit value (HWND, HANDLE, HKEY, COM pointers) go through `guest::host_handle` / `guest::guest_handle`, which are declared but not defined on an arena host: a 64-bit build links only when nothing depends on host-handle identity, so the remaining sites are found by the linker. `native32.cpp` is **left unchanged on purpose**: it is the bridge of the 32-bit host (module handles, `ReadProcessMemory`, `VirtualQuery` diagnostics, real Windows calls with guest pointers) and `NativePlatform64` replaces it rather than converts it. 32-bit result identical: same tests, same generated code (the pages are not regenerated).
2. **Arena on the 32-bit host as a switch off, 64-bit raw backend.** Build the reference backend with the arena allocator and run its tests at 64 bits (already green without it); `guest::Memory` implementation `ArenaMemory`.
3. **Portable fast backend (done, merged in fdd5d9b; details in docs/PORTABLE_BACKEND.md).** `generate_fast.py --host x86_64|aarch64` with the base in `gp`, `--x87 host|double|soft80`, portable user operations, `preserve_none` page functions, `gen_regs.set_target('x64')` (all 8 guest registers in host registers). Gate: all 899 pages compile for `x86_64` and `aarch64` (cross-compiled on the Windows PC), and the `fast_*` tests that do not need the bridge (`fast_dynamic`, `fast_resources`, `reg_entries`, `x87_host_fpu`) pass on x86_64; arm64 is run on a device or under emulation when one is available.
4. **`NativePlatform64`.** Image mapping in the arena, TEB/stack/heap in guest memory, guest threads, SEH, timer callbacks, the SLEIGH interpreter over the arena; imports from the Level A modules only. The three layers below move to their final shape here.
   *Progress:* the 64-bit host runs the game headless to its main loop. `Platform64` (platform64.*, platform64_seh.cpp) holds the guest in the arena and serves every import through handlers: the Win32 facade over legacy_win32 (all groups, no pass-through to a real system), the Direct3D 9 guest facade over the layer nue_d3d9 (win32_facade_d3d9.cpp, built by the D3D9 owner), the DirectSound layer over the arena allocator, structured exceptions, guest threads and multimedia timers on pooled guest processors, and code generated at run time (the audio engine's modules) interpreted by SLEIGH over the arena (JIT off). Both engines run on it: the reference engine and the fast backend (`generated_fast64`, 899 pages generated with `--host x86_64 --no-mods`, target `speed_fast64`); `fast64_boot` checks that they call the same imports in the same order up to DirectSoundCreate. `speed_fast64 --boot64 <export> <game> <budget> all` boots in about a second to the registry and device creation and runs the main loop (audio mixed through a silent real-time output, the Direct3D 9 layer on its null GPU, "nothing unsupported was met"). Not done: the mods (FEScale, widescreen, ...) on the 64-bit pages (they use NativePlatform::current/call_guest/override_import), a real window and GPU on Windows x64 (the layer attaches to a platform window; the headless boot has none), real input, a 64-bit launcher and package, DirectInput over the real input backend, and every non-Windows host (CI only).
5. **Run on Windows x64** (menu first), then Linux, then Android.
6. **Zero run-time code** (needed for iOS): the audio modules translated ahead of time or replaced natively, and the coverage of the main image proven (see "No interpreter and no JIT on iOS").

Rule for every stage: the 32-bit build keeps passing its tests; nothing is pushed; a stage ends in a commit with the test results.

## No interpreter and no JIT on iOS (decision of 2026-10-27)

iOS gives an app no executable memory it can write, so the SLEIGH interpreter (`dynamic_code.cpp`) and any JIT are **not** options there. Two things in the port use run-time code today; neither may remain on iOS.

1. **The audio engine's modules.** The game loads relocatable x86 modules from its data files into the heap, relocates them and makes them executable; the interpreter runs them (observed: five regions, 177 distinct instructions in a first menu session; routines such as 0x71feef / 0x720767 / 0x72023c). Alternatives, in the order to try:
   * **A. Translate them ahead of time like `SPEED2.EXE`.** The modules are bytes in the data files of the supported release (checked by hash, as the image is). Extract them with a tool, disassemble the whole module offline (not only the executed addresses), generate pages for them, and compile those into the app. At run time the loader still copies and relocates the module; the translated pages are used when the relocated bytes hash-equal the expected module **at the expected address**. In the arena model the guest heap is ours, so the load address can be made deterministic (a fixed address for module allocations); the pages are generated for that address. Fallback for any other bytes: stop with a clear error (never an interpreter on iOS).
   * **B. Native reimplementation of what the modules do** (the audio codecs and DSP, `nue-audio`), hooked at the module's entry points like the mods hook the game. Cleanest long term, needs fidelity checks against the translated modules (A gives the reference: run both on the same input and compare samples).
   * **C. Convert at import time** (sound banks to PCM/Opus on a desktop tool) -- only valid together with B, because the engine that reads the banks must then be replaced.
   * Rejected: a JIT (not allowed on iOS), shipping an interpreter "only for rare paths" (it is the same thing).
2. **Dynamic transfers inside `SPEED2.EXE`.** A jump to an address that is not a block leader ends in `ent_missing` ("no statically translated instruction at 0x..."). On iOS this must never happen: the leader set (static targets, return sites, function entries, jump tables, code-pointing words, immediates) is checked by `tools/test_reg_entries.py` and `tools/discover_gap_entries.py`; the coverage of every scene must be proven from traces before an iOS build, and any miss is a bug in the leader discovery, fixed by adding the entry, not by interpreting.

Stage 4 (`NativePlatform64`) therefore keeps the interpreter as a desktop-only fallback behind a build switch (`NFSU2_DYNAMIC_INTERPRETER`, off for iOS), and stage 6 is added: **zero run-time code** (modules by A or B, coverage proof for the main image).

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

## Note: x87 state on a virtual-FPU build (from the D3D9 layer, docs/D3D9_BGFX.md "Floating point state")

`IDirect3D9::CreateDevice` and `Reset` without `D3DCREATE_FPU_PRESERVE` write the **whole** guest control word as 0x007F (24-bit precision, round to nearest, all exceptions masked); with `FPU_PRESERVE` they keep precision and rounding but OR in 0x001D. On a virtual-FPU build that is a write to guest register 0x10a0, not the host FPU. The mod hooks that use inline `flds/fstps` (mods_anchor.cpp:36,148,157,169; mods_rendering.cpp:107,124,131,139,145,170,185,187) go through `x87_hooks.hpp` (`Cpu&`-based) when compiled with `-DNFSU2_X87_VIRTUAL`. Neither is wired yet: the 32-bit product uses the host FPU.

## Arena size

The arena is a reservation of address space, not memory: nothing is committed until the guest touches it. The size is configurable: `ArenaConfig::arena_size` (16 MiB to 4 GiB), or the environment variable `NFSU2_ARENA_MIB` for the tools and tests (`guest::arena_config_from_environment()`). **Default: 2 GiB** (the user's decision of 2026-10-30). SPEED2.EXE is not large-address-aware (PE characteristics 0x010f), so the guest never needs more than 2 GiB; the 64-bit tests run with the default and again with 4096 (`raw_platform_arena_4g`, `platform64_4g`), and `platform64` runs from 1 GiB up (the Win32 layer's address window ends at 1 GiB). A smaller arena also bounds `guest::is_guest` (a host pointer beyond the reservation is not the guest's). Whether a phone accepts the reservation has not been measured on a device.
