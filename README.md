# NFSU2 Static Recompilation

A static recompilation of **Need for Speed: Underground 2** (PC, v1.2) that is being built as the foundation of a
**multi-platform port** — Windows today; Linux, Android and Apple platforms by design.

> **Status: experimental.** On the author's Windows laptop the translated game reaches the menus and runs races.
> Race frame rate is still below 60 fps there (see [Performance](#performance)). Nothing beyond Windows/x86-32 exists yet.
> Claims in this repository are tied to a test or a measurement; what has *not* been verified is said so.

## What this is (and is not)

- It **is** a static recompilation: the game's x86 machine code is lifted to P-code with Ghidra's SLEIGH, translated
  ahead of time to C++, and compiled into a native program. There is no emulator, no interpreter and no embedded copy of
  the original code on the main path.
- It is **not** a decompilation or a source reconstruction, and it does not try to be one. There are no hand-recovered
  function bodies; correctness comes from a mechanical translation that is checked against a slow reference translation.
- It **is not** a patch of the running game. Fixes and enhancements (for example the widescreen fix) are compiled in
  as variables and hooks at known places of the translated code.
- The one place that needs run-time code generation is the game's audio engine, which loads relocatable x86 modules from
  data files into the heap. Those (and only those) are interpreted at run time with the same SLEIGH engine and
  specification; the game's own `.text` never is.

## Why the architecture looks the way it does

The goal is not "make it run on my PC" but a **portable core with explicit boundaries**:

```
 translated game code (generated C++, platform-independent in intent)
        |  calls
 +------+-------------------------------------------------------------+
 |  Platform API (ours)                                               |
 |  graphics @ Direct3D 9 semantics | input | audio | files | window  |
 |  time/threads | settings storage                                   |
 +------+-------------------------------------------------------------+
        |  implemented by interchangeable backends
   Windows: native D3D9 (today)     bgfx (Vulkan | OpenGL ES | Metal | D3D11/12)     own backends where profiling demands
```

- The graphics boundary is kept at Direct3D 9 level so any backend can implement it without the game noticing.
- **bgfx** (BSD-2-Clause) is the chosen first cross-platform renderer: it offers Vulkan, OpenGL ES 3 and Metal behind one API, so an
  Android player can pick Vulkan or OpenGL ES in the game and iPhone runs on Metal. Nothing is integrated yet; the choice is to be
  validated with a measured spike. Rationale and alternatives (The Forge, SDL_gpu, DXVK/MoltenVK, own backends) are in
  [`docs/GRAPHICS_BACKEND.md`](docs/GRAPHICS_BACKEND.md). This work lives on the `bgfx` branch.
- Everything added on top of the original (settings, widescreen, HUD scaling, resolution list) is plain C++ meant to
  survive the port: it lives behind small interfaces instead of calling the platform directly.

See [`PLATFORM.md`](PLATFORM.md) for the Windows boundary and the mod mechanism, and
[`docs/ROADMAP.md`](docs/ROADMAP.md) for what is planned and what is undecided.

## Pipeline

```
SPEED2.EXE (yours) --Ghidra P-code export--> instructions.jsonl.gz
        --> tools/generate.py       -> generated/        reference backend (the oracle; slow, simple)
        --> tools/generate_fast.py  -> generated_fast/   fast backend (one function per 4 KiB page)
        --> clang (32-bit) + CMake  -> nfsu2_launcher.exe
```

Fast backend, in short: guest registers in a `noalias` register file, guest memory accessed through the identical 32-bit host
address, native integer types, whole-program dead-flag elimination, per-block instruction counting, page-to-page `musttail`
calls, x87 passed through to the host FPU. The reference backend (`runtime.hpp`) models every P-code operation explicitly and
is the oracle for differential tests.

## Verification

`ctest` runs (all passing at the last commit):

| Test | What it checks |
|---|---|
| `raw_semantics`, `raw_userops` | P-code semantics and the explicit user operations |
| `raw_resources` / `fast_resources` | The game's LZ decompressor, identical output on both backends |
| `fast_platform`, `fast_seh` | Windows boundary, guest exception handling, window-procedure trampolines |
| `x87_host_fpu` | x87 pass-through vs the reference model over thousands of trials |
| `fast_dynamic`, `fast_dynamic_boot` | Run-time P-code interpreter vs the export, and boot-to-first-thread state equality |
| `fast_widescreen` | Every patch point exists, written values, hook handlers, a function hook inside translated code |
| `launcher_cli` | Launcher: SHA-256 check, configuration, deterministic bounded run equal to the diagnostic runner |

The launcher refuses to start unless the user's `SPEED2.EXE` matches the supported SHA-256
(`f9dd86c054878ce6276beb07c1fd61874f7a1e4bf1f241b084c65b73e24168a7`). Graphical results (menus, races) are observations by
the author, not automated tests.

## The widescreen fix is native

[`mods_*.cpp`](.) port the open-source **NFSU2 Widescreen Fix** (ThirteenAG and contributors, MIT) into the recompilation:
selectable resolutions in the game's own options menu (plus common sizes the monitor lacks, scaled), HUD and FOV for any
aspect ratio, rain, video and front-end scaling, windowed modes, frame-time constants, look-around camera, gamepad texts and
dead zones, NOS trail fix, registry/settings handling. No plug-in is loaded: [`tools/mods/widescreen.py`](tools/mods/widescreen.py)
finds the same places in the original code once and the generator compiles them in. See
[`third_party/widescreen/PROVENANCE.txt`](third_party/widescreen/PROVENANCE.txt). Not ported: SMAA.

## Performance

Measured on one laptop (Surface Laptop 4, Ryzen 7): the translated code runs hundreds of millions of guest instructions per
second; the main thread is the bottleneck (translated code plus roughly 58,000 Direct3D 9 calls per frame). A frame cap and a
Direct3D state cache exist. Races ran at 27–43 fps in the last user measurements; 60 fps is not reached. A memory report was
added to the profiler (`NFSU2_PROFILE=1`) because the long-term target is a **2 GB process budget**.

## Repository layout

| Path | Contents |
|---|---|
| `tools/` | Exporter (Ghidra scripts), both generators, packaging, test drivers; `tools/mods/` resolves mod patch points |
| `runtime.*`, `fast.hpp`, `userops*.hpp` | Reference runtime and fast-backend helpers |
| `native32.*`, `launcher.cpp`, `dynamic_code.*` | Windows boundary, product launcher, run-time P-code interpreter |
| `mods*.{hpp,cpp,inc}` | The native widescreen fix and its patch-point runtime |
| `third_party/` | SLEIGH engine and `x86.sla` (Apache-2.0), widescreen fix notices |
| `generated/`, `generated_fast/`, `export/` | Translation output, the instruction export and section dumps — **derived from / copies of parts of the proprietary executable** (see below) |
| `docs/` | Roadmap and the (Spanish) development log |

## Building and running

You need your own copy of the game; nothing from it is distributed. Requirements: a 32-bit capable clang, CMake, Ninja,
Python 3, and a Ghidra installation to export your own `SPEED2.EXE`. The export step currently depends on the author's local
Ghidra setup (`tools/export.ps1`); making it self-contained is on the roadmap. After export: `python tools/generate_fast.py`,
then build with CMake (`build.ps1` shows the exact configuration), then run
`nfsu2_launcher.exe --game-dir <folder with SPEED2.EXE>`. `launcher.ini` documents every option, including `--no-widescreen`.

## Legal

This project is not affiliated with or endorsed by Electronic Arts. It contains no game assets and no game executable.
The generated C++ and the instruction export in this repository are **mechanical translations derived from the proprietary
`SPEED2.EXE`**, and `export/memory_*.bin` are **verbatim dumps of its sections**; this repository is a private working backup,
and those files and directories must be removed (they can be regenerated from your own copy) before any public release. A license for the original code in this repository has not been chosen yet.

## Credits

Ghidra SLEIGH (NSA, Apache-2.0) · NFSU2 Widescreen Fix by ThirteenAG and contributors (MIT) · bgfx (BSD-2-Clause) is the planned
renderer; DXVK, Direct3D 9-on-12, d9mt and DXMT are studied as references for Direct3D 9 semantics and Metal.
