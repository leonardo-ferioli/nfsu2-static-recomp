# nue_d3d9: a Direct3D 9 to bgfx translator

`nue_d3d9/` is a standalone C++20 library: it answers Direct3D 9 calls (as plain handle-based C++ calls, no COM, no Windows types, no guest pointers) and
draws through [bgfx](https://github.com/bkaradzic/bgfx) (Direct3D 11/12, Vulkan, OpenGL (ES), Metal). It knows nothing about any game: the 32-bit
guest/COM glue that turns a game's `IDirect3DDevice9` calls into library calls stays outside it (the *facade*, `platform/` and `native32.cpp` today).
It was written for Need for Speed: Underground 2 and is meant for other Direct3D 9 games of the same engine family (Most Wanted next).

Status: **a real frame is rendered** (see "Measurements"). Not everything of Direct3D 9 is implemented: the coverage table says what is and is not.

## Using it in the game: the drop-in `d3d9.dll`

`nue_d3d9/dll/` implements the COM objects of Direct3D 9 (`IDirect3D9`, `IDirect3DDevice9`, textures, surfaces, buffers, declarations, shaders, state
blocks, swap chain) on top of the layer and the bgfx adapter, and exports `Direct3DCreate9` and the `D3DPERF_*` stubs, so it works the way DXVK does: **put
`d3d9.dll` in the folder of the program that uses Direct3D 9**. Capability questions (adapter name, display modes, `CheckDeviceFormat`, multisample support,
`GetDeviceCaps`) are answered by the system's real Direct3D 9, which is loaded from the Windows folder and never asked to create a device, so the game takes the
decisions it takes with the real driver; the device and everything it draws are ours.

```
# 32-bit (the game is x86): static C runtime, no redistributable needed; the result is build_nue32\d3d9.dll (about 5 MB)
cmake -S nue_d3d9 -B build_nue32 -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang -DCMAKE_BUILD_TYPE=Release "-DCMAKE_CXX_FLAGS=-m32 -msse4.2" "-DCMAKE_C_FLAGS=-m32 -msse4.2" -DNUE_STATIC_CRT=ON
cmake --build build_nue32 --target nue_d3d9_dll
# 64-bit (tests only): cmake --build build_nue_rel --target nue_d3d9_dll
```

* **The recompiled launcher** (`nfsu2_launcher.exe`): copy `d3d9.dll` next to it. `native32.cpp` loads it instead of the system's for the guest's `d3d9.dll`
  imports (and trusts its code like a system library in the "native target" check); without the file nothing changes, and `NFSU2_SYSTEM_D3D9=1` ignores it.
  The guest's own calls are untouched: they go through the same bridge into our COM objects.
* **The original game** (`SPEED2.EXE`): copy `d3d9.dll` next to the executable (Windows looks in the application folder first).
* **F12** saves the frame just presented (the game's back buffer, before scaling to the window) as `nue_screenshot_N.bmp` next to the dll, to compare images.
* Optional `nue_d3d9.ini` next to the dll (see `nue_d3d9/dll/nue_d3d9.ini.sample`): `renderer=d3d11|vulkan`, `vsync`, `render_thread`, `log`, `shader_cache`.
  Log: `nue_d3d9.log` next to the dll (device creation, resets, and at exit what the game asked for that the translator cannot do). To go back to the
  system's Direct3D 9 delete the file.
* **Verified without the game**: the replay tool drives the dll through real COM calls with the recorded traces (`NUE_D3D9_DLL=<path> nue_replay <trace> --native
  --frames N`): the same images as the direct path (menu mean error 1.06, loading 0.92), 0 unsupported records, in the 64-bit build and in the 32-bit build run
  from a 32-bit process. **Not verified**: the game itself (nobody ran it with this dll yet): expect to look at `nue_d3d9.log` first.
* **Floating point state**: the real runtime forces the x87 control word to `0x007F` (single precision, every exception masked) in `CreateDevice`/`Reset` unless
  `D3DCREATE_FPU_PRESERVE` is given (then it only masks invalid-operation, zero-divide, overflow and underflow), and leaves it that way. The dll does the same
  (`apply_d3d9_fpu_mode`): the recompiled game unmasks exceptions itself and crashed with `0xc0000090` (`fdivrs` in translated code) one second after
  `CreateDevice` when the dll left them unmasked.
* Not offered through COM (the game does not use them in any capture): volume textures, queries, `UpdateSurface/UpdateTexture`, `ColorFill`, `DrawPrimitive`
  (non-UP), `DrawIndexedPrimitiveUP`, patches, additional swap chains, multiple devices, `GetRenderTargetData` of anything but the back buffer. Fixed-function
  lighting is not implemented (see the coverage table). Display-mode changes for fullscreen are not done: the frame is scaled to the game's window.

## Layers

```
 game (Direct3D 9 calls)  ->  facade (COM objects, refcounts, guest memory; NOT in the library)
        |  d3d9::Device  (Level A: Direct3D 9 semantics, handles, spans)          nue/d3d9_device.hpp
 +------+--------------------------------------------------------------------------+
 | nue::d3d9::Layer: state shadow, state blocks, resources and locks, formats,     |   src/layer/
 | vertex declarations, shader translation + fixed function as generated shaders,  |
 | passes (render targets), clears, buffer policy                                   |
 +------+--------------------------------------------------------------------------+
        |  gpu::Gpu  (Level B: what a modern API does)                              nue/gpu.hpp
   bgfx adapter (bgfx/)                 null Gpu (tests, deterministic hash)        nue/null_gpu.hpp
```

Other parts: `src/shader/` (Direct3D 9 shader bytecode decoder, SPIR-V writer, SPIRV-Cross wrapper), `src/d3d9_trace.cpp` (trace reader and headless
replay of recorded Direct3D 9 call traces), `tools/replay*.cpp` (the replay tool, native Direct3D 9 ground truth, image comparison).

## Public API

```cpp
#include "nue/d3d9_layer.hpp"
#include "nue/bgfx_gpu.hpp"

gpu::BgfxOptions o; o.window = hwnd; o.window_width = 1280; o.window_height = 720; o.renderer = gpu::Renderer::d3d11;
std::string error;
auto gpu   = gpu::create_bgfx_gpu(o, error);        // or nue::NullGpu for tests
auto layer = d3d9::create_layer(*gpu);               // implements d3d9::Device
layer->reset({1280, 720, /*D3DFMT_X8R8G8B8*/ 22, /*D3DFMT_D24S8*/ 75, 0, 1, true, 0});
auto vb = layer->create_vertex_buffer(bytes, usage, fvf, pool);          // D3DUSAGE_* / D3DPOOL_* as the published numbers
auto lr = layer->lock_buffer(vb.value, 0, 0, flags);  std::memcpy(lr.value.data, vertices, n);  layer->unlock_buffer(vb.value);
layer->set_vertex_shader(...); layer->draw_indexed(...); layer->present();
```

`d3d9::Device` (about 50 methods) takes Direct3D 9's own numbers (`D3DRS_*`, `D3DFMT_*`, `D3DPT_*`, ...) as integers. `Layer::stats()` counts what
happened, `Layer::report()` lists unsupported features that were met (each is logged once), `Layer::flush()` closes the open pass.

Threading: one game thread calls the Layer; the adapter hides bgfx's render thread (`BgfxOptions::single_threaded` calls `bgfx::renderFrame()` first
so there is none, which the tools use). Handles are `Id<Tag>` (`uint32_t`, 0 = none), never pointers.

## Coverage (honest)

Tested = replayed from real captures of the game (`captures/menu`, `captures/loading`: race scenes) and compared with the reference images.

| Area | State |
|---|---|
| Resources: textures 2D/cube, vertex/index buffers, render targets, depth surfaces, declarations, shaders | implemented, exercised |
| Lock / Unlock of buffers and textures (staging, `DISCARD`/`NOOVERWRITE` accepted) | implemented, exercised |
| Texture formats: A8R8G8B8, X8R8G8B8, DXT1/3/5 (BCn native, decoded to RGBA8 when the GPU lacks it), A8, L8, A8L8, R5G6B5, A4R4G4B4, A1R5G5B5, R16F/G16R16F/A16B16G16R16F, R32F/A32B32G32R32F, others converted to RGBA8 | table written; A8R8G8B8, DXT1, DXT5 exercised; the rest untested |
| Render states: Z, blend (incl. separate alpha), alpha test, cull, fill, colour mask, stencil (one side), scissor flag, depth bias, fog, texture factor | implemented; two-sided stencil, clip planes, point sprites, multisample masks: not |
| Sampler states: filters, addressing, anisotropy | implemented; LOD bias, `MAXMIPLEVEL`, border colour: **not applied** (bgfx has no per-sampler control) |
| State blocks (Begin/End/Apply, recorded not applied) | implemented, exercised |
| Programmable pipeline: vertex and pixel shaders 1.x, 2.0, 2.x, 3.0 (control flow `if`/`else`/`rep`/`loop`/`break`, relative addressing, `sincos`, `pow`, `nrm`, `lit`, `texldl`/`texldb`/`texldp`, `dsx`/`dsy`, `texkill`, integer/boolean constants, `vPos`, `vFace`) | implemented; shader model 1.x exercised by the game (45 shaders); models 2/3 validated against the real Direct3D 9 with 33 HLSL cases (`spike/shader_spike/sm_cases`, 126 renders, 0 failures). **Not tested**: `call`/`callnz`/`ret` subroutines, predication (`setp` + `(p0)`), depth output (`oDepth`), multiple render targets, vertex texture fetch |
| Relative addressing of constants (`c[a0.x]`) in vertex shaders | implemented, exercised |
| Fixed function: transform, vertex colours, texture coordinates with transform matrices, texture-stage combiners (all `D3DTOP_*` but bump/premodulate), specular add, vertex fog | implemented; exercised only by two simple draws per frame. **Lighting and materials, texture-coordinate generation, vertex blending, point sprites: not implemented** |
| Fog: vertex fog with programmable and fixed pipelines | implemented; table (pixel) fog with a vertex shader: **not** |
| Render targets: textures, surfaces, cube faces, mip levels, depth | implemented; multiple render targets: attachments supported, untested |
| `StretchRect`, `Clear` (full, rectangles, viewport), depth/stencil clear | implemented (copy, or a draw when sizes differ) |
| Queries, `GetRenderTargetData`, `UpdateSurface`, `ColorFill`, volume textures, `DrawPrimitive` (non-UP), `DrawIndexedPrimitiveUP`, `SetScissorRect`, `SetLight/SetMaterial`, clip planes | not in `d3d9::Device` yet (the game does not use them) |
| Lost device / `Reset` | `reset` resizes; the lost-device protocol is not implemented |
| Backends: bgfx Direct3D 11 and Vulkan | both working with the same fidelity (loading capture, mean MAE 0.99 on both) and speed (Vulkan 6.6 ms per frame with the render thread); the Vulkan path hands our SPIR-V to bgfx as is, with the vertex input locations renumbered to the position in the container's attribute list (bgfx binds by position, not by attribute number) and a depth-format fallback (24-bit depth is missing on some Vulkan drivers). Direct3D 12, OpenGL(ES), Metal: not written (the shader path emits GLSL/MSL, the container for them is not written) |

## Shader path

The game's shaders are Direct3D 9 **bytecode** (game data: never in the repository). At run time:
`bytecode -> decoder (src/shader/d3d9_shader.cpp, disassembly identical to Microsoft's on the 45 shaders) -> SPIR-V (our lowering, d3d9_to_spirv.cpp)
-> per renderer: Vulkan takes the SPIR-V; Direct3D 11/12: SPIRV-Cross -> HLSL -> D3DCompile (d3dcompiler_47.dll, Windows only); OpenGL(ES)/Metal: SPIRV-Cross
-> GLSL/MSL` and is wrapped in the bgfx shader container (`bgfx/shader_container.cpp`, written from `bgfx/tools/shaderc`'s format) so **no shaderc is
needed at run time**. The fixed-function pipeline is generated as decoded shader programs (`src/layer/fixed_function.cpp`) and goes through the same
path, so there is one translator, not two. Programs are cached per (vertex shader, pixel shader, key); a key covers what changes the code: sampler
types, projective coordinates, alpha-test function, fog mode, `D3DCOLOR`/integer vertex attributes.

Decision (build time vs first run): **first run, in memory**, because the bytecode is the user's data. Measured on this PC (Direct3D 11, 25 programs):
SPIR-V -> HLSL about 0.5 s and D3DCompile about 1.0 s in total for the 3 first frames (about 60 ms per program, all at first use). A persistent cache keyed
by (bytecode hash, backend, translator version) and a warm-up step are **not written yet**; mobile needs them (Vulkan needs no compile at all; GLES/Metal compile
in the driver).

## Buffer policy (the real game locks the same buffers ~90 times per frame)

Every buffer keeps a CPU copy; `Lock` always answers from it, so **a lock never waits for the GPU**. A buffer that is *never rewritten after it was drawn
from* becomes an immutable bgfx buffer (a new generation when it changes). A buffer that is rewritten after being drawn from (score from the unlock history), or has
`D3DUSAGE_DYNAMIC`, is served through **transient copies of the range each draw reads** (de-duplicated per frame); indices are rewritten to be relative to the first
vertex read when needed, triangle fans become lists, `DrawPrimitiveUP` data goes straight into transient buffers. The captured race scenes: 2 MB of static buffers
uploaded, 0.3 MB of transient data per 3 frames (the bulk of the draws read static geometry). bgfx applies resource updates before a frame's draws, which is why in-place
updates between draws are never used.

## Memory policy

Textures are uploaded at `Unlock` and the staging memory is freed (`keep_texture_copies` keeps it). DXT stays compressed on GPUs with BCn (the Windows ones);
on GPUs without it the layer decodes to RGBA8 (4x the memory). Transcoding to ASTC/ETC2 for phones, a texture-memory budget (2 GB process on Android) and
mip dropping are **not implemented**. Buffer CPU copies are kept for every buffer (the captures hold ~100 MB of resources).

## How it differs from DXVK / Wine d3d9

Same job (Direct3D 9 on a modern API) with different choices: DXVK targets Vulkan only and is written against its own Vulkan layer; Wine's wined3d targets OpenGL
(and Vulkan/Direct3D 12 backends) and is LGPL. This library goes through bgfx, so it reaches Direct3D 11/12, Metal and OpenGL ES with one front end; the API
is handle-based so it works on a 64-bit host without COM; and it was built to be driven by *recorded call traces* (replay, per-draw comparison against the
real Direct3D 9 runtime), not only by a live game. Code from DXVK (zlib licence) and Wine may be reused where it saves time; where code is copied the
file says so. So far nothing was copied: the design of the fixed-function generator and the half-pixel/position-fixup rules were checked against DXVK's behaviour only.

## Tools and how to verify

```
cmake -S nue_d3d9 -B build_nue -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang -DCMAKE_BUILD_TYPE=RelWithDebInfo && cmake --build build_nue   # always measure an optimised build
build_nue/nue_replay.exe <trace> --null --twice            # headless: statistics + deterministic call hash (run twice: identical)
build_nue/nue_replay.exe <trace> --bgfx d3d11 --frames 3 --out dir   # renders, saves ours_*.bmp / diff_*.bmp, prints MAE and p99.9 outside edges
build_nue/nue_replay.exe <trace> --bench --bgfx d3d11 --mt --loops 3 --window 0 --shader-cache cache_dir   # frame time, layer/adapter/GPU profile
build_nue/nue_replay.exe <trace> --native --frames 3 --out dir       # the same trace on the real Direct3D 9 (ground truth, tool only)
build_nue/nue_replay.exe <trace> --bgfx d3d11 --frames 1 --draws 0-1108 ...   # only draws 0..1108: bisect a difference against --native
# debugging aids (environment variables of the replay tool): NUE_RECENT_DRAWS=<frame> NUE_RECENT_COUNT=<n> (the last draws with their gpu ids), NUE_SKIP_DRAWS=a-b,
# NUE_MEAN_TEX=<gpu texture>:<first>-<last> (+ NUE_SAVE_TEX=<prefix> to save it), NUE_DUMP_GLSL=<dir> (translated shaders as GLSL), NUE_LOG_PASSES, NUE_FRAME_DRAWS
python tools/bmp_compare_crop.py ref.bmp ours.bmp out.png x y w h   # reference | ours | amplified difference
python tools/bmp_diff_grid.py ref.bmp ours.bmp                        # where the images disagree
python tools/d3d9_trace_census.py <trace>                             # what a trace asks of a translator
```

Metrics: mean absolute error over RGB (0-255) and the 99.9th percentile of the per-pixel maximum channel difference outside a one-pixel edge mask (pixels
within one pixel of a gradient above 32 in the reference). Thresholds are **not fixed yet**: the first results are in "Measurements".

## Measurements

Machine: AMD Radeon (integrated), Windows 11, Direct3D 11 through bgfx, offscreen backbuffer 1280x720, optimised build (RelWithDebInfo). Scenes: the
recorded in-race windows of `captures/menu` and `captures/loading`, replayed from memory (`--bench`, trace decoding included: the real game would add
none of it). A "frame" is one game frame: 1500-1700 draws and ~50k recorded calls.

| Scene / mode | mean | p99 | notes |
|---|---|---|---|
| menu window 0, null GPU (layer only) | 5.2 ms | 6.1 ms | layer ~1.3 us per draw |
| menu window 0, D3D11, one thread | 11.2 ms | 13.3 ms | bgfx::frame() runs the backend inline (4.5 ms) |
| menu window 0, D3D11, render thread (`--mt`) | 6.4 ms | 7.9 ms | CPU 4.5 ms, GPU 6.4 ms per frame |
| menu window 3 (975 draws), D3D11 one thread | 4.8 ms | 10 ms | |
| menu window 0, Vulkan, render thread | 6.6 ms | 8.0 ms | GPU 4.6 ms |
| loading window 0, D3D11 `--mt` | 6.5 ms | 7.7 ms | one run had a stretch of ~16 ms frames (GPU clock of the integrated part; not reproduced) |

So the translator itself fits a 60 fps budget (16.6 ms) with room to spare on this machine; the game's own CPU work is not included. Shader translation
cold cost: 25 programs = ~1 s of the Direct3D compiler (about 20 ms per program), which is a stall the first time a program is used; the disk cache
(`BgfxOptions::shader_cache_dir`) removes it from the second run. Process memory of the benchmark: ~870 MB, most of it the cached trace window.

Image fidelity (mean absolute error 0-255 against the recorded reference images, Direct3D 11): all 24 reference frames of `captures/menu` have a mean of
**1.06** (typical frame 0.6-0.8, the first frame of each recording window 2.6-3.4 because the game state before the window was not recorded); the 15 frames
of `captures/loading` (three windows) have a mean of **0.99** (typical 0.4-0.9, first frame of a window up to 3.0, one 2.2). The native Direct3D 9 replay of
the same traces sits at 0.6-0.9, which is the floor of the method (the reference images come from a multisampled back buffer, ours is not multisampled).
Bug history that mattered: setting render target 0 must reset the viewport to the whole target (Direct3D 9 behaviour); without it the post-processing
chain of the game rendered 4x too large and the bloom washed the image out (loading frame 1829 went from MAE 32 to 0.94, the menu from 4.3 to 0.7).

## Multisampling

The game asks for a multisampled back buffer (`D3DMULTISAMPLE_NONMASKABLE` with a quality level, as the recorder's reference images say). Without it cars and
every silhouette were jagged and shimmered. The layer now maps the request to a sample count (`samples_for`): type 2..16 = that count; NONMASKABLE: quality
0-1 = 2 samples, 2-3 = 4, 4 and above = 8, and an unknown quality (the recorded traces do not keep it) = 8; the real AMD runtime here offers 8 quality levels.
The adapter makes the back buffer, the automatic depth surface and any render target or depth surface with the same multisample type multisampled
(`BGFX_TEXTURE_RT_MSAA_Xn`; they must all agree or bgfx cannot make the framebuffer), and bgfx resolves when the texture is sampled or copied
(`StretchRect` of the back buffer = the resolve). `nue_d3d9.log` says "multisample: requested type T quality Q -> N samples"; `msaa=` in `nue_d3d9.ini`
forces 1 (off), 2, 4 or 8. Measured on the car frame of `captures/loading` (frame 1829, crop of the car): error on the edge band 3.68 (no MSAA), 2.75 (2x),
2.36 (4x), **2.28 (8x)**; whole-image mean error of the three loading windows 0.99 -> **0.75**, of the four menu windows 1.06 -> **0.81**; the real system
Direct3D 9 without multisampling scores 0.95 on the same trace. Cost: 8x on an integrated Radeon at 1280x720 is about 12.7 ms of GPU time against 7.0 ms
without (still 78 fps); `msaa=4` halves the extra cost.

Texture filtering was checked at the same time and is right: the game uses anisotropic filtering (min/mag = 3, 16 samples) with linear mips, wrap/clamp
addressing, LOD bias 0, no sRGB and no auto-generated mips in any capture; turning anisotropy off doubles the error (1.7 vs 0.9), so it is applied.

## Window size, resource limits and the audit in `nue_d3d9.log`

* **Output size.** The back buffer is never stretched to the window: the adapter draws it fitted into the part of the window that is visible on its monitor, keeping the aspect ratio
  (`nue/window_fit.hpp`, `fit_aspect`: equal aspect fills, otherwise letterbox / pillarbox, centred). The facade passes the visible part of the client area (`ClientToScreen` clipped to the monitor)
  to `Gpu::set_visible_area`. The game's own HWND is respected; the launcher's scaled-window mode (a "virtual" resolution the monitor does not list, such as windowed 1280x720) uses the same function
  for the window it creates, so it fits the desktop instead of being sized from the desktop height only.
* **bgfx handle limits** are compile-time: the defaults (4096 textures, vertex buffers and index buffers; 128 frame buffers; 64 vertex layouts) are raised in `CMakeLists.txt` (16384 / 16384 / 16384 / 1024 / 1024).
  Every bgfx creation is checked with `bgfx::isValid`; a failure is counted and logged (`bgfx could not create: ...`, with the handle usage), and the draws that need the object are skipped (counted in `draws skipped`).
* **Periodic audit** (first after 120 presents, then every 600): `audit: textures: N alive (...), created, failed; sampled-before-upload; never uploaded; partly uploaded; locked now; buffer failures; uploads`, the eight
  most common (format, size, levels) groups with how many are complete / partial / empty, and `audit: bgfx handles in use / limit` (textures, buffers, frame buffers, layouts, programs, shaders, uniforms, memory).
  A texture sampled by a draw before any data reached its top level is logged once (`sampled by a draw before any data was uploaded to it`).
* **Profile line** (every 3 s): `profile: inside the Direct3D 9 dll X ms per frame (Y% of wall time), N calls per frame; most expensive: ...` shows how much of the frame the dll itself takes; the rest of the frame is the game.

## Finding missing textures in the live game

* **F11** writes `nue_textures_N.txt` next to the dll (and a screenshot of that same frame): one line per texture the next frame's draws sample, with id, size, format, levels, pool and usage, the mip levels that
  have data, a hash of level 0 (equal hashes = same picture; a changed hash = the game updated it), uploads (and how many came after the texture was first used), `NO-DATA`, `ALL-ZERO`, `MIPS-MISSING`,
  `SYSTEM-MEMORY-ONLY`, `SAMPLED-BEFORE-RENDERED-THIS-FRAME` / `SAMPLED-BUT-NEVER-RENDERED` for render-target textures, and the first draw (number inside the frame, stage, pixel shader id) that used it.
* **F10** (or `mark_missing_textures=1`) draws every sampled texture that has no data as a magenta / black checker; the audit counts those draws.
* **F12** screenshot of the game's back buffer.
* A level that is locked again returns what it held (a copy kept in system memory, up to `texture_copy_mb`), like the managed pool of the real runtime; before, a lock without `DISCARD` returned zeros, so a game that
  changed part of a level wrote the rest back as black. `UpdateTexture` (system memory -> default pool) is implemented.
* `nue_window_test <d3d9.dll>` checks the window behaviour with windows that are never shown: the dll creates no window, leaves the game's style and position alone, follows resizes and moves, and keeps the game's
  back buffer size through `Reset`.

## Ground-truth tests against the system runtime

`nue_format_test <d3d9.dll>` and `nue_state_test <d3d9.dll> [filter]` run the same Direct3D 9 calls on a window that is never shown through the dll and through the system `d3d9.dll`, and compare the pixels.

* **Formats** (8x8, two mip levels, Lock/Unlock, point sampling, colour and alpha): A8R8G8B8, X8R8G8B8, R5G6B5, X1R5G5B5, A1R5G5B5, A4R4G4B4, A8, L8, A8L8, V8U8, Q8W8V8U8, A2R10G10B10, G16R16, DXT1/3/5 all match.
  Found and fixed by it: R5G6B5 came out with red and blue swapped (now decoded on the CPU), V8U8 / Q8W8V8U8 were read as unsigned (now signed RGBA8: V8U8 reads as (u, v, 1, 1)), G16R16 had blue 0 instead of 1.
* **States** (110 cases): alpha test (8 functions), 13 blend factor / operation pairs, depth bias and slope-scaled depth bias, cull modes and windings, colour write masks, every texture-stage operation as stage 0 and as stage 1 after a modulate,
  alpha operations, texture-factor and complement / alpha-replicate arguments, the temporary register, texture transforms, texture coordinate generation (camera-space normal, position, reflection vector with a cube map; sphere map) and
  fixed-function lighting (directional, point with attenuation and range, spot cones, specular with local / infinite viewer, several lights, colour material sources) all match.
  Found and fixed by it: texture transforms and coordinate generation do not apply to pre-transformed (XYZRHW) vertices in the real runtime; coordinate generation and lighting did not exist; when the vertex has no colour the material colour is the source
  (not white); the spot factor is not capped at 1 inside the inner cone.
* Not covered by the tests: vertex blending, point sprites, bump-map operations, projected texture coordinates (`D3DTTFF_PROJECTED`), user clip planes, the indexed user-pointer draw, volume textures.

## Known differences

* The first frame of every recording window differs more (2-3) because the state accumulated before the window was not recorded.

Note for measurements: a `d3d9.dll` placed next to `nue_replay.exe` is loaded by `--native` instead of the system's (that is the whole point of the dll). For the real Direct3D 9 as ground truth, run a copy of the tool from a folder that does not have the dll.
