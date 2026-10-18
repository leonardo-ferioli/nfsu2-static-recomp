# Windows boundary of the static recompilation

## Input and native code

The guest is the local PE32 `binaries/SPEED2.EXE`, SHA-256 `f9dd86c054878ce6276beb07c1fd61874f7a1e4bf1f241b084c65b73e24168a7`. `platform_metadata.py` checks that hash and derives its entry point (`0x0075bcc7`), 252 import slots and section/data file identities.

The x86 host uses Clang `_BitInt(128)` to hold SLEIGH values up to sixteen bytes. This was compiled and exercised on the installed toolchain; it is not an assumption about MSVC `__int128` support.

The generated C++ is the only implementation executed for PCs in the original image. There is no runtime x86 decoder. Windows system DLLs and their COM objects execute as ordinary native platform dependencies. A target inside the original guest image always returns to the static dispatcher; an unidentified guest instruction faults.

## Image and pointers

The executable's `.raw_guest` section reserves `0x00401000..0x00931fff` before Windows can place other mappings there. It contains uninitialized zeros. At startup the original image headers and exported blocks are loaded as **data**, with `PAGE_READWRITE` protection. No guest code page receives execution permission. Translated native code starts after that reserved range.

The original headers replace the host's in-memory headers so resource APIs can inspect the original resource directory. The loader's native module reservation still contains the compiled host code. This arrangement is verified by the native boundary tests; it is a compatibility constraint to retain in future linker changes.

Both guest and host pointers have 32-bit layout. Native APIs can read/write guest structures, buffers, handles and COM vtables directly. The original PE is not large-address aware (`Characteristics=0x010f`), so the native variant also disables large-address awareness. A previous experimental large-address-aware build produced pointers above 2 GiB and is not the selected configuration.

`Cpu::pointer` preserves bounds for its owned guest regions and checks additional native mappings with `VirtualQuery`. A small per-thread cache is invalidated across native calls and guest mapping lifetime changes. CPU tests exercise aliasing, unaligned loads, bounds, and actual translated resource algorithms.

## Call/return ABI

`invoke_native32` saves the host stack, enters the guest argument stack, calls a verified Windows code address, and observes the resulting ESP. This supports native stdcall cleanup and cdecl caller cleanup without inventing an argument count. The guest return PC is kept separately, restored in memory and sent back to the static dispatcher. EAX/EDX/ECX are copied from the native call result.

Native calls temporarily switch the real x86 TEB's stack bounds and exception-chain boundary. The observed DeallocationStack field at FS:`0xe0c` is checked against the public `GetCurrentThreadStackLimits` API before use; an incompatible host layout stops. The original TEB fields are restored before returning to C++. The guest has a separate synthetic TEB and SEH chain; original handlers are never called as native machine code.

LastError is stored in each guest TEB at `+0x34`, isolated from C++ logging and adapter activity. Native calls transfer it into/out of Windows. The integration test intentionally changes native LastError between guest SetLastError/GetLastError calls and checks isolation.

## Callbacks and ownership

- Window class registration installs a native WNDPROC trampoline that enters the compiled guest dispatcher with the four original message arguments. Multiple independently registered guest WNDPROCs and subclass chains still need explicit handling if reached.
- CreateThread wraps the original guest entry in a native thread whose CPU registers, temporaries, stack and synthetic TEB are independent. Original globals and resource memory remain shared. Duplicate native handles retain shutdown ownership. ExitThread returns through a guest-thread exception caught by the adapter.
- Function timers keep preallocated CPU contexts. Re-armed one-shot chains share a serialized CPU/stack and retire completed contexts. Function callbacks use synchronous native cancellation to keep the context alive through teardown. Cancellation from inside a timer callback is an explicit unsupported case, not a fabricated success.
- DirectInput objects are registered from successful native creation and enumeration results. Vtable offsets and callback signatures come from the installed Windows SDK `dinput.h`, not guessed addresses. Device/object/effect enumeration and the five-argument EnumDevicesBySemantics callback enter translated guest code. ConfigureDevices remains an explicit unsupported callback contract.
- Native address eligibility requires executable `MEM_IMAGE` code in a Windows-directory module. Game-local DLL loading stops for separate analysis. The original image is never eligible.

Native heap calls, events, file I/O, COM methods and other ordinary system functions use their actual Windows implementations. This differs from the separate x64 experimental adapter, which marshals a partial set of functions and is not the selected gameplay target.

## Platform policy: scheduling and desktop safety

`SetThreadPriority` is routed through the adapter and capped at `THREAD_PRIORITY_ABOVE_NORMAL`; the original's `TIME_CRITICAL` (0xf) request is recorded as `PRIORITY CAP` in the trace. This is a documented platform deviation, not a game patch (the original requests it for translated workers, see `logs/2026-10-16-responsiveness-incident.md`). The cursor clip is released on destruction and before a fault exit.

`tools/boot_guard.py` runs diagnostic children inside a Job Object: `KILL_ON_JOB_CLOSE` (also ends descendants), hard CPU cap (default 50 % of all logical processors), and blocked display-mode, desktop, system-parameter and exit-windows changes (`allow_display_changes=True` opts out). It calls `ClipCursor(NULL)` when a run ends. These limits are verified with small console children only; no graphical run has validated them.

## Fast backend memory model

Generated fast pages read and write guest memory at the identical host address and do not call `Cpu::pointer`, so there is no bounds or mapping check per access. This is valid only for the selected 32-bit host, where the guest image, stack and heaps are real mappings at their guest addresses. An invalid access raises a native access violation, reported by the vectored handler with the last page-entry guest PC (a precise PC requires regenerating with per-instruction PC stores). The guest register file is `Cpu::regs` itself, reached through a `noalias` pointer inside each page function; runtime services that read or write it (userops) are bracketed by a compiler barrier, and a page always leaves every register stored in `Cpu::regs` when it returns. Native calls, callbacks and the platform therefore see the registers exactly as with the reference backend. In deterministic-test mode (`NFSU2_DETERMINISTIC_TIME`) the adapter fixes time, the process list and the environment block.

## Phase 3 additions

Guest SEH (`RaiseException`, `RtlUnwind`, `UnhandledExceptionFilter`) is a state machine driven by the main dispatch loop; handler returns land on tokens `0xf0ffff00..0xf0ffff2f` and per-`Cpu` states are discarded once the guest stack has moved past them. The x87 control word and MXCSR are mirrored to the host FPU on write and refreshed from it on read. Window procedures use up to eight native trampolines selected by guest address. Callback processors are pooled per thread. See README for the evidence and the limits (no real `__try/__except` or window has been run).

## Run-time generated code (declared dependency)

The game's audio engine loads relocatable x86 modules from data files into heap memory and makes them executable with `VirtualProtect`. `NativePlatform` intercepts `VirtualProtect`/`VirtualAlloc`: when the call succeeds, requests an execute protection and the range lies outside the translated image, the range is registered with `DynamicCode` (`dynamic_code.hpp`). `dispatch()` hands control that reaches such a range to the interpreter, which decodes each instruction at run time with Ghidra's SLEIGH engine (`third_party/sleigh`, Apache-2.0) and `x86.sla` (`third_party/sleigh_spec`, verified by SHA-256 by the launcher), and executes its P-code with the same semantics as the translated code (same `float_op`/`user_op`). It never decodes or interprets `SPEED2.EXE`'s `.text`; calls from interpreted code to the image or to Windows imports return to the translated program through the usual dispatcher. The interpreter is a declared third-party dependency shipped in the package under `sleigh/` with its provenance and license. Verification and limits (≈125 M instr/s with block caching, in-block dead-flag elimination and per-block native x86-32 code generation; real audio modules not yet executed) are in README, section "Intérprete de P-code para código generado en ejecución".

## Mods: the widescreen fix, native

The NFSU2 Widescreen Fix (ThirteenAG, MIT; `third_party/widescreen/PROVENANCE.txt`) is part of the program, not a plug-in. The places the mod patches in the running game are found once, in the original `.text`, by its byte patterns (`tools/mods/pattern.py`, `tools/mods/widescreen.py` -> `mods/widescreen_spec.json`) and become *patch points* of the generated code (`tools/generate_fast.py`): an immediate or an absolute operand read from a run-time variable (`g_mod_vars`), an instruction skipped by a flag, a jump retargeted or forced by a flag, and hooks (`mod_hook_table`): "before" an instruction, "replace" a range, or "function" (the handler does the work of a whole function and generated code performs its `ret`). A handler that sets `c.pc` redirects execution; a function handler calls the original body with `call_original` (a per-thread bypass flag, then the function runs on a pooled processor through `NativePlatform::call_guest`, which also sets ECX/EDX for this-calls). Game globals and function addresses are resolved the same way (`mod_data_addresses`). Hooks start empty and every variable starts with the original value: with no mod installed (`--no-widescreen`) the generated code behaves as before (the differential tests run that way).

The mod's Windows-side actions are native too: `NativePlatform::override_import` replaces an imported function (`CreateWindowExA`, `SetWindowLongA`, `AdjustWindowRect` for the windowed modes; `RegCreateKeyA`/`RegOpenKeyA`/`RegOpenKeyExA`/`RegQueryValueExA`/`RegSetValueExA`/`RegCloseKey` for the registry in the current user or a settings file; `SHGetFolderPathA` for the user-files folder) and `set_game_thread_affinity` pins threads. Modules: `mods_core` (events: frame, delta time, device reset, end of scene), `mods_resolution`, `mods_rendering`, `mods_frontend`, `mods_system`, `mods_input`, `mods_nos`, `mods_registry`, `mods_gamma`; `mods_widescreen.cpp` installs them. The HUD table is compiled in (`mods_hud_table.inc`, generated by `tools/mods/embed_hud_table.py`).

Differences from the mod, on purpose: `ConsoleGamma` and `SingleCoreAffinity` default to off; `FPSLimit` is the launcher's frame cap (default 60; the mod's default is the monitor's refresh rate); the menu-text hook keeps the original `MOV ECX,[global]` (the mod loads the address of the global); `SetWindowLong` is intercepted only for `GWL_STYLE`; resolution-dependent values are recomputed when the size changes, not at every query. Not ported: SMAA (not in the mod's `.ini`), the compatibility code for the separate NFSU_XtendedInput plug-in.

## Explicit limits

Guest SEH delivery/unwinding is not complete. RaiseException/RtlUnwind stop explicitly. Unimplemented SLEIGH userops stop with operation and guest PC. The x87 model still inherits SLEIGH's limits, including incomplete exception/status/rounding-state fidelity; passing isolated float tests does not establish complete physics parity.

The optimized real-entry run passed CRT initialization, native D3D/window setup, shader setup, DirectInput callbacks and resource decoding. After recovering missing static code at `0x006f6c46` and `0x005048f0`, the next completed run reached 575,621,646 main-thread translated instructions, stopping at an omitted callback `0x0047f7f0`. The observed game window was still black. A playable menu, race, all cars and audible sound remain unvalidated.

Subsequent callback/switch recovery reached the original title screen with "Press Enter Key". Enter did not advance to a menu during the test. The user stopped the run because of severe slowdown and reported an invisible desktop pointer afterwards; a graphics reset shortcut did not resolve it. The process is confirmed closed. Graphical tests are suspended, and no pointer recovery or game-speed fix has been verified. Incident evidence and offline diagnostic safeguards are recorded in `logs/2026-10-16-responsiveness-incident.md`. The original audio thread requests native time-critical scheduling; the watchdog's below-normal initial process priority is not a CPU-use cap and does not by itself resolve that interaction.

`tools/disassembly_seeds.json` distinguishes runtime-observed destinations from static candidates in initialized `.rdata`/`.data` pointer tables. Ghidra decodes candidates in memory without clearing existing code/data; rejected candidates are recorded. New instruction paths of `SPEED2.EXE` remain generated C++, with no runtime machine-code fallback (the only run-time interpretation is of code the game itself generates outside its image, see above). This discovery extends static coverage; it is not execution evidence for every candidate.

SSE2 packing, saturation and multiply-add cases are tested with nonzero upper lanes, including signed multiply-add wraparound. Five previously incomplete 128-bit variants were fixed after an independent expected-value test reproduced loss of the upper half. Original MMX 64-bit behavior remains separately tested.

## Primary references

- [Microsoft PE format](https://learn.microsoft.com/en-gb/windows/win32/debug/pe-format): image layout, import slots and characteristics.
- [Microsoft GetCurrentThreadStackLimits](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-getcurrentthreadstacklimits): stack boundary contract; host-specific layout additionally checked at runtime.
- [Microsoft timeSetEvent](https://learn.microsoft.com/en-us/previous-versions/ms713423%28v%3Dvs.85%29): function/event callback distinction and synchronous cancellation.
- [Microsoft CPUID intrinsics](https://learn.microsoft.com/en-us/cpp/intrinsics/cpuid-cpuidex?view=msvc-170): EAX/EBX/ECX/EDX native result order, rearranged to SLEIGH's observed memory order.
- Installed Ghidra `ia.sinc`: actual low-P-code input/output contracts. Installed Windows SDK 10.0.26100.0 `dinput.h`: actual 32-bit COM interfaces.
