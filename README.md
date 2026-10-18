<p align="center">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="assets/nue-logo-dark.png">
    <img alt="NUE" src="assets/nue-logo-light.png" width="420">
  </picture>
</p>

<p align="center">
  <b>A native port of <i>Need for Speed: Underground 2</i> (2004): a static recompilation, not an emulator.<br>
  Windows today. Linux, Android, iPhone, iPad and Mac by design.</b>
</p>

<p align="center">
  <a href="#quick-start">Quick start</a>
  &nbsp;·&nbsp;
  <a href="#highlights">Highlights</a>
  &nbsp;·&nbsp;
  <a href="#settings">Settings</a>
  &nbsp;·&nbsp;
  <a href="#whats-next">What's next</a>
  &nbsp;·&nbsp;
  <a href="#for-developers">For developers</a>
</p>

**Contents:** [What is NUE?](#what-is-nue) · [Highlights](#highlights) · [Platforms](#platforms) ·
[Quick start](#quick-start) · [Settings](#settings) · [What's next](#whats-next) ·
[For developers](#for-developers) · [Credits](#credits)

## What is NUE?

NUE is a native port of *Need for Speed: Underground 2*: a static recompilation, not an emulator.
It runs as an ordinary application on your device.

It is built to be portable from the start: one translated game, one platform API, one graphics path.

## Highlights

- **Any screen, drawn the way it should be.** The picture uses your display's resolution instead of
  640x480, and the options menu lists every resolution your display offers, plus common sizes
  rendered at that size and scaled to the screen.
- **Widescreen done natively.** Field of view and the HUD follow the aspect ratio. The HUD keeps its
  corners and edges instead of collapsing into a square in the middle, and menu backdrops fill the
  whole width. Videos, rain, the front end and cutscenes are scaled too.
- **Built in, not bolted on.** The popular NFSU2 Widescreen Fix is part of the program itself: skipped
  intros, windowed and borderless modes, a look-around camera, gamepad texts and dead zones, the NOS
  trail fix, console gamma and language settings. There is no plug-in to load and nothing patches
  the running game.
- **Windowed mode** with one switch (`--windowed`), handy for screenshots and capture.
- **Frame pacing.** A frame-rate cap (60 by default, the monitor's rate, or any value), optional
  vsync, and a limiter that never delays a frame that is already late.
- **A leaner Direct3D path.** Repeated device state is filtered before it reaches the driver:
  render, sampler and texture-stage states, textures, shaders, vertex declarations, streams, indices
  and shader constants.
- **A performance report in one flag.** `--profile` logs the frame rate, the time spent in every
  Direct3D call, where the CPU is and what is calling, every five seconds.
- **One program.** A single executable and one `launcher.ini` that documents every option. Rotating
  logs and a crash report with the registers and the call stack of the game.
- **Verified, not guessed.** The translated code is checked against a slow reference translation by
  differential tests, including run-time state equality up to the first thread of the game's start-up.

## Platforms

| Platform | State |
|---|---|
| **Windows** (x86, runs on 64-bit Windows) | Available |
| **Linux** | Planned |
| **Android** (Vulkan or OpenGL ES) | Planned |
| **iPhone, iPad and Mac** (Metal) | Planned |

The graphics path is moving to [bgfx](https://github.com/bkaradzic/bgfx), which gives Vulkan, OpenGL ES,
Metal and Direct3D 11/12 behind one interface. See [What's next](#whats-next).

## Quick start

1. Build the launcher (see [Building](#building)) or take `nfsu2_launcher.exe` from your build.
2. Run it and point it at your game folder:

```powershell
nfsu2_launcher.exe --game-dir "C:\path\to\game"
```

3. Optional: copy `launcher.ini` next to the executable and set `game_dir=` so you can start it without arguments.

Useful variations:

```powershell
nfsu2_launcher.exe --game-dir "C:\path\to\game" --windowed              # 1280x720 window
nfsu2_launcher.exe --game-dir "C:\path\to\game" --width 2560 --height 1440
nfsu2_launcher.exe --game-dir "C:\path\to\game" --fps-limit 30 --vsync
nfsu2_launcher.exe --game-dir "C:\path\to\game" --profile               # performance report in logs\
nfsu2_launcher.exe --verify-only --game-dir "C:\path\to\game"           # check, don't start
```

Logs are written to the `logs` folder next to the executable.

## Settings

Everything lives in `launcher.ini` (every line optional) and can be overridden on the command line.
The widescreen options keep the section and key names of the original fix: `[MAIN]`, `[MISC]`,
`[CAMERA]`, `[GRAPHICS]`, `[NOSTrail]` and `[LANGUAGE]`.

| Option | What it does |
|---|---|
| `--game-dir DIR` | The game folder |
| `--config FILE` | A configuration file (default: `launcher.ini` next to the program) |
| `--windowed` | A bordered window, 1280x720 unless `--width/--height` say otherwise |
| `--width N --height N` | Force a resolution |
| `--fps-limit N` | Frame-rate cap: `0` none, `-1` the monitor's rate, `-2` double, default `60` |
| `--vsync` | Present with the display's vertical sync |
| `--no-state-cache` | Send every Direct3D state call, even repeated ones |
| `--no-widescreen` | Turn the widescreen fix off (original 640x480) |
| `--profile` | Write the performance report to `logs\native_trace.log` |
| `--verify-only` | Check the installation and exit |
| `--log-dir DIR`, `--no-trace`, `--no-dialog`, `--watchdog S` | Logging and diagnostics |

HUD size is `FEScale` in `[MAIN]`; `FEScaleAnchor` keeps corner elements in their corners, and
`FEStretchBackdrops` makes backdrops fill the whole width. `RadarMaskScale` and `RadarMaskLimit`
in `[GRAPHICS]` control the mini-map on very large screens.

## What's next

- **Graphics on bgfx.** Our own Direct3D 9-level layer over a small GPU interface over bgfx, with a
  shader translation path that works on desktop and on phones, and call-trace record and replay to
  compare images between versions without playing.
- **Platform API.** Window, display, files, time, threads and settings behind small interfaces,
  so the same game runs on every target.
- **Linux, then Android, iPhone, iPad and Mac.** Touch controls drawn in the game's own style,
  and a HUD that follows the device in use (touch, controller or keyboard).
- **Interface quality.** The 3D scene scaled to what the GPU can hold, the HUD and menus drawn at the
  display's native resolution.
- **More speed from the translated code.** The code already keeps the hottest guest registers in host registers;
  the next profile decides what is left to gain.

See [`docs/ROADMAP.md`](docs/ROADMAP.md).

## For developers

### How it works

```
game executable --Ghidra P-code export--> instructions.jsonl.gz
        --> tools/generate.py       -> generated/        reference backend (the oracle; slow, simple)
        --> tools/generate_fast.py  -> generated_fast/   fast backend (one function per 4 KiB page)
        --> clang (32-bit) + CMake  -> nfsu2_launcher.exe
```

- The game's x86 code is lifted to P-code with Ghidra's SLEIGH, translated ahead of time to C++ and
  compiled into a native program. No emulator, no interpreter on the main path.
- Fixes and enhancements are compiled in as variables and hooks at known places of the translated code.
- The audio engine loads relocatable x86 modules at run time; only those are interpreted, with the
  SLEIGH engine.

### Architecture

```
 translated game code (generated C++)
        |  calls
 +------+-------------------------------------------------------------+
 |  Platform API                                                      |
 |  graphics (Direct3D 9 semantics) | input | audio | files | window  |
 |  time and threads | settings                                       |
 +------+-------------------------------------------------------------+
        |
   bgfx  (Vulkan | OpenGL ES | Metal | Direct3D 11/12)
```

See [`PLATFORM.md`](PLATFORM.md) and [`docs/GRAPHICS_BACKEND.md`](docs/GRAPHICS_BACKEND.md).

### Fast backend

One function per guest superblock, with the three hottest guest registers passed as function arguments and
flags kept as locals (1.8x to 3.5x faster than one function per page in console benchmarks, see
[`docs/REGISTER_PARAMS.md`](docs/REGISTER_PARAMS.md)). Guest memory at the identical 32-bit host address,
native integer types, whole-program dead-flag elimination, a register instruction budget, `musttail` calls
between blocks and x87 passed through to the host FPU. The reference backend (`runtime.hpp`) models
every P-code operation explicitly and is the oracle for the differential tests.

### Verification

`ctest` covers:

| Test | What it checks |
|---|---|
| `raw_semantics`, `raw_userops` | P-code semantics and the explicit user operations |
| `raw_resources`, `fast_resources` | The game's LZ decompressor, identical output on both backends |
| `fast_platform`, `fast_seh` | The Windows boundary, guest exception handling, window-procedure trampolines |
| `x87_host_fpu` | x87 pass-through against the reference model over thousands of trials |
| `fast_dynamic`, `fast_dynamic_boot` | The run-time interpreter against the export, and state equality up to the first thread of start-up |
| `fast_widescreen` | Every patch point, written values, hook handlers, a function hook inside translated code |
| `d3d_shadow` | The Direct3D state filter |
| `launcher_cli` | Configuration, verification and a deterministic bounded run equal to the diagnostic runner |

### Repository layout

| Path | Contents |
|---|---|
| `tools/` | Exporter, both generators, packaging and test drivers; `tools/mods/` resolves the patch points |
| `runtime.*`, `fast.hpp`, `userops*.hpp` | Reference runtime and fast-backend helpers |
| `native32.*`, `launcher.cpp`, `dynamic_code.*` | The Windows boundary, the launcher, the run-time interpreter |
| `mods*.{hpp,cpp,inc}` | The native widescreen fix and its patch-point runtime |
| `third_party/` | SLEIGH engine and specification, widescreen fix notices |
| `docs/` | Roadmap and design notes |

### Building

Requirements: a 32-bit capable clang, CMake, Ninja, Python 3 and a Ghidra installation for the export.
After the export run `python tools/generate_fast.py`, then build with CMake (`build.ps1` shows the exact
configuration). `python tools/package_launcher.py` assembles the distributable folder.

## Credits

[Ghidra](https://github.com/NationalSecurityAgency/ghidra) SLEIGH (Apache-2.0) ·
NFSU2 Widescreen Fix by ThirteenAG and contributors (MIT) ·
[bgfx](https://github.com/bkaradzic/bgfx) (BSD-2-Clause).
