# Roadmap

Ordered by dependency, not by date. "Decision" marks things that are deliberately still open.

## 0. Make the CPU side portable (feasibility first)

The fast backend only works on an x86-32 host with the guest image mapped at the same addresses. A general port needs:

- **Portable guest memory**: generated code accesses `base + guest_address` (on ARM64 and x86-64 this is one addressing mode with
  a zero-extended 32-bit index and a reserved 4 GiB range), instead of dereferencing the guest address directly.
- **x87 off the host FPU**: today x87 passes through to the host FPU. On ARM it needs either `double` arithmetic (fast, slightly
  different precision) or software 80-bit (exact, slower). *Decision* after measuring on the game's hot code.
- **Run-time audio modules**: the P-code interpreter has an x86-32 JIT mode; portable targets use the interpreter modes, or a JIT
  per architecture. No JIT is possible on iOS.

## 1. Inventory and the platform API

Group everything the game uses from the OS by subsystem (about 230 imports plus the Direct3D 9 / DirectInput / DirectSound
interfaces) using real data (imports, profiler call counts), define small interfaces without Windows types, and move the current
Windows implementation behind them with no behavior change. The existing tests verify the move.

Phase 0 (inventory and the proposed interfaces) is written: [`PLATFORM_API.md`](PLATFORM_API.md); the inventory is reproducible with
`tools/platform_inventory.py`.

## 2. Graphics backends behind a Direct3D 9-level interface

- Keep the real Direct3D 9 backend (Windows) as the reference.
- Record and replay Direct3D 9 call traces against two backends and compare the images; this makes every backend verifiable
  without playing.
- **Chosen first backend: bgfx** (Vulkan, OpenGL ES 3, Metal, D3D11/12; BSD-2-Clause) under our own Direct3D 9-semantics layer
  and a small GPU interface of our own. Requirements it answers: an Android player can switch between Vulkan and OpenGL ES in the
  game, iPhone runs on Metal. To be validated with a measured spike (many draws, Android on Vulkan and GLES, an iPhone). See
  [`GRAPHICS_BACKEND.md`](GRAPHICS_BACKEND.md). Own Vulkan/Metal backends can replace bgfx where profiling demands; a native renderer
  reading the game's data is the long-term end state.
- Mobile specifics: render thread with a command queue, pipeline cache, texture format conversion (DXT is not universally
  supported), dynamic internal resolution.

## 3. Other subsystems

Window, input (gamepad, touch), audio, files and settings storage: bgfx only renders, so these come from SDL3 (candidate) or code per
platform. The game keeps its own
main loop, so the portable window/render layer runs on the application thread and talks to the game thread through queues
(also needed for Android's pause/resume and lost-surface handling).

## 4. Native-feeling settings

Settings defined once as data and shown as rows in the game's own options screen (not an overlay). The resolution row already
is. More rows need the front-end package to be extended in memory: the game fixes the number of row elements per screen.
Touch controls, safe areas and a UI scale belong here.

## 5. Targets

- Linux desktop first (same Vulkan path as Android, easy to debug and to run in CI).
- Android: process budget **2 GB** (see below), touch/gyro input, scoped storage for the user's game data.
- Apple platforms: bgfx's Metal backend (iOS 16+, macOS 13+). Consoles are out of scope for now.

## Memory budget

Target: the game process (including GPU memory on mobile) stays within **2 GB**. The profiler reports process memory and the
largest private regions every 5 seconds (`NFSU2_PROFILE=1`); levers are texture memory (one copy, lower mip, compressed formats),
the game's pool sizes, render-target size and audio decoding on demand. No hard cap that makes allocations fail: the original game is
not written for that.
