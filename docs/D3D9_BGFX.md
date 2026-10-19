# nue_d3d9: a Direct3D 9 to bgfx translator

`nue_d3d9/` is a standalone C++20 library: it answers Direct3D 9 calls (as plain handle-based C++ calls, no COM, no Windows types, no guest pointers) and
draws through [bgfx](https://github.com/bkaradzic/bgfx) (Direct3D 11/12, Vulkan, OpenGL (ES), Metal). It knows nothing about any game: the 32-bit
guest/COM glue that turns a game's `IDirect3DDevice9` calls into library calls stays outside it (the *facade*, `platform/` and `native32.cpp` today).
It was written for Need for Speed: Underground 2 and is meant for other Direct3D 9 games of the same engine family (Most Wanted next).

Status: **a real frame is rendered** (see "Measurements"). Not everything of Direct3D 9 is implemented: the coverage table says what is and is not.

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
| Backends: bgfx Direct3D 11 | working (all measurements below); Vulkan: **runs and draws but the picture is wrong** (first visible divergence at the first scene draw of `captures/menu`; cause not found: the SPIR-V is handed to bgfx as is and no validation layer was available); Direct3D 12, OpenGL(ES), Metal: not written (the shader path emits GLSL/MSL, the container for them is not written) |

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

## Known differences

* The first frame of every recording window differs more (2-3) because the state accumulated before the window was not recorded.
* Multisampling of the game's back buffer is not reproduced (edges differ by one pixel; the comparison masks edges).
* Vulkan: see the coverage table.
