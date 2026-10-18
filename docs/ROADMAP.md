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

## 2. Graphics: Direct3D 9 semantics layer -> small GPU interface -> bgfx (bgfx only)

**Decision: bgfx is the only renderer.** There is no native Direct3D 9 option in the end state and no second backend to maintain
(Windows: bgfx's Direct3D 11 / 12 / Vulkan; Android: Vulkan / OpenGL ES; Apple: Metal). The native Direct3D 9 pass-through in
`native32.cpp` is a **temporary bridge**: it keeps the game playable and it is the ground truth (reference call traces and reference
images are recorded from it), then it is **deleted in an explicit step** once the bgfx path reaches parity.

Order of work (details and the shader decision in [`PLATFORM_API.md`](PLATFORM_API.md), sections 3.4-3.5 and 6):

1. Window/display and graphics interfaces (Level A `d3d9::Device`, Level B `gpu::Gpu`), null implementations, call-token facade registry.
2. Recorder on the bridge: Direct3D 9 call traces plus reference images of the menu, a loading screen and a race.
3. **Shaders first**: the game uses Direct3D 9 shader bytecode (1.x-3.0) and the fixed-function pipeline, bgfx wants per-backend binaries
   and `shaderc` is offline-only. Path: our IR -> SPIR-V -> SPIRV-Cross -> GLSL ES / MSL / HLSL (+ `D3DCompile` on Windows) -> bgfx
   container, cached from the user's own data; proven by a console spike before anything depends on it.
4. D3D9 layer on the null GPU, headless replay, then the bgfx adapter, replay on bgfx and image comparison against the references.
5. In-game facade, parity gate, **removal of the native bridge** (last commit with it tagged).

bgfx was chosen to answer: an Android player can switch between Vulkan and OpenGL ES in the game, iPhone runs on Metal; to be validated with
a measured spike (many draws, Android on Vulkan and GLES, an iPhone). See [`GRAPHICS_BACKEND.md`](GRAPHICS_BACKEND.md). Own Vulkan/Metal
backends can replace bgfx later where profiling demands, behind the same GPU interface; a native renderer reading the game's data is the
long-term end state.

Mobile specifics: pipeline cache, shader warm-up step, texture format conversion (DXT is not universally supported), dynamic internal
resolution.

## 3. Other subsystems

Window, input (gamepad, touch), audio, files and settings storage (**future work, after the graphics move**; input/touch/active-device detection
are explicitly not part of the current scope): bgfx only renders, so these come from SDL3 (candidate) or code per
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
