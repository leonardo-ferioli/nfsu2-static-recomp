# Platform API

Status: **proposal, revised after Phase 0.** Nothing here is implemented yet except `tools/platform_inventory.py`. What is *measured*, *inferred* and
*proposed* is marked. Related: [`GRAPHICS_BACKEND.md`](GRAPHICS_BACKEND.md) (bgfx decision), [`ROADMAP.md`](ROADMAP.md), [`../PLATFORM.md`](../PLATFORM.md)
(the Windows boundary as it is today).

## 0. Decisions that frame this document

1. **bgfx only.** The end state is: translated game → *Direct3D 9-semantics layer* (ours) → *small GPU interface* (ours) → **bgfx**
   (Windows: bgfx's Direct3D 11 / 12 / Vulkan, chosen by default or by the player; Android: Vulkan / OpenGL ES; Apple: Metal). There is **no
   native Direct3D 9 option** at run time and no second renderer to maintain. The native Direct3D 9 pass-through that exists in
   `native32.cpp` is a **temporary bridge** with two jobs: it keeps the game playable while the layer is built, and it is the **ground truth**
   (reference call traces and reference images are recorded from it). When the bgfx path reaches the parity gate (section 6) the bridge is
   **deleted in an explicit step** (the last commit that contains it is tagged so the history stays usable).
2. **Scope now = graphics.** Phase 0 inventory (graphics in detail, the rest as short lists), Phase 1 limited to what graphics needs
   (window/display and the graphics interfaces; DirectInput, DirectSound and file access stay behind their current Windows code), Phase 2
   complete (layer → GPU interface → bgfx, shader path, record/replay, reference captures, parity, removal of the bridge).
   **Input, touch and active-device detection are future work** (section 3.6 keeps only the interface shape so that they can be added without
   redesign). Storage, audio, threads, memory and settings are likewise future work, designed here only as short placeholders; the
   Storage design (3.6) is confirmed and kept as written.

## 1. Two layers, one rule

```
 translated game (generated C++; 32-bit guest address space; stdcall / COM / Win32 ABI)
        |  calls Windows functions and COM methods through call tokens
 +------+----------------------------------------------------------------------------------+
 | GUEST ABI SHIM  ("win32 personality", portable C++, today inside native32.cpp)            |
 |   knows guest pointers, stdcall stacks, COM vtable layout, struct layouts, HANDLE values, |
 |   Direct3D 9 / DirectInput / DirectSound semantics and constants; owns COM refcounts,     |
 |   lock staging, HRESULT / GetLastError                                                    |
 +------+----------------------------------------------------------------------------------+
        |  plain C++ calls; handles, spans and POD descriptors only
 +------+----------------------------------------------------------------------------------+
 | PLATFORM API (namespace nfsu2::platform)                                                  |
 |   now: Window, Display, d3d9::Device (Level A), gpu::Gpu (Level B)                        |
 |   later: Storage, Input, Audio, Clock/Threads/Sync, Memory, Settings                      |
 +------+----------------------------------------------------------------------------------+
        |
   win32 window | sdl3 window (later)        bgfx adapter  ->  D3D11 | D3D12 | Vulkan | OpenGL ES | Metal        null (tests)
```

**The rule:** no Windows type, no guest pointer, no 32-bit assumption and no COM object crosses the line between the two layers.
Every platform-owned object is an `Id<Tag>` handle; data crosses as `std::span` valid for the duration of the call; the shim hands the
guest *staging memory from the guest arena* wherever the guest must write (Direct3D `Lock`) and calls the platform at `Unlock`; errors are
`Status` codes; every interface says which thread may call it; optional features are queried through `caps()`; every interface has a
`null` implementation so the shim and the layer are testable without a window, GPU or game data.

## 2. Inventory (measured, graphics in detail)

Sources: `export/platform_imports.json` (252 import slots), `dist/NFSU2-static/logs/native_trace.log` (the user's last run: menus and several
races; 38 five-second windows, FPS 17.6–60, median 20.2; 748 first-call records), the SDK headers for the COM method tables, and the game's
`.text` only to decode the vtable slot of each recorded COM call site. Regenerate with
`python tools/platform_inventory.py --trace <native_trace.log>` (read-only, prints Markdown, no game bytes).

**What the trace can and cannot say.** It records the *first* call of each (native target, guest call site) pair and the 14 most frequent calls of
each window, so "seen" means "exercised in that one session". The COM interface of a call is *inferred*: the instruction before the recorded
return address is `call [reg+disp]`, `disp/4` is the vtable slot, the stack pop gives the argument count, targets cluster by DLL, and the
candidates are the interface methods whose slot and argument count agree (every cluster matched its DLL family for 100 % of its targets:
Direct3D 9 89/89, DirectInput 13/13, DirectSound 11/11). Where several interfaces fit, the table says so.

### 2.1 Direct3D 9 as the game uses it (89 targets, 419 call sites)

| Group | Methods |
|---|---|
| **IDirect3D9** (unambiguous) | GetAdapterModeCount(6), EnumAdapterModes(7), CheckDeviceMultiSampleType(11), GetDeviceCaps(14), CreateDevice(16); ambiguous: GetAdapterCount(4), GetAdapterIdentifier(5), GetAdapterDisplayMode(8) |
| **Device**, unambiguous (39) | TestCooperativeLevel(3), Present(17), GetBackBuffer(18), CreateTexture(23), CreateCubeTexture(25), CreateVertexBuffer(26), CreateIndexBuffer(27), CreateRenderTarget(28), CreateDepthStencilSurface(29), StretchRect(34), SetRenderTarget(37), SetDepthStencilSurface(39), GetDepthStencilSurface(40), BeginScene(41), EndScene(42), Clear(43), SetTransform(44), SetViewport(47), LightEnable(53), SetRenderState(57), BeginStateBlock(60), EndStateBlock(61), SetTexture(65), SetTextureStageState(67), SetSamplerState(69), ValidateDevice(70), DrawIndexedPrimitive(82), DrawPrimitiveUP(83), CreateVertexDeclaration(86), SetVertexDeclaration(87), SetFVF(89), CreateVertexShader(91), SetVertexShader(92), SetVertexShaderConstantF(94), SetStreamSource(100), SetIndices(104), CreatePixelShader(106), SetPixelShader(107), SetPixelShaderConstantF(109) |
| **Ambiguous slots** (likely reading in brackets) | 5/1 arg [StateBlock::Apply, 13 sites], 7/2 [Device::GetDeviceCaps], 12/2 [Surface::GetDesc or Device::ShowCursor], 11/5 and 12/1 [vertex/index buffer Lock, Unlock], 17/3 and 18/3 [texture GetLevelDesc, GetSurfaceLevel], 19/5 and 20/2 [texture LockRect, UnlockRect], AddRef(1) and Release(2) on every resource |
| **Not seen** | DrawPrimitive (non-UP), queries, clip planes, materials, palettes, N-patches, every `Get*` call |

Consequences:
- The first contract of the layer is these **~40 device methods**; everything else answers `unsupported` and is logged once with its name. Caveat:
  one session; **shader and fixed-function usage** (`SetTransform`, `LightEnable`, texture-stage states are called, so a fixed-function path
  exists next to the shader path) must be confirmed by the recorder.
- `CreateVertexShader` and `CreatePixelShader` each have one call site in the trace (a loader loop creating many programs). The number of
  *distinct* programs and their shader-model versions are **not known yet** and are the first thing the recorder reports (section 6, step 2a).
- Draw paths: `DrawIndexedPrimitive` (indexed, vertex buffers) and `DrawPrimitiveUP` (113 per frame: dynamic geometry, the 2D/HUD path).

### 2.2 Per-frame budget (means over the 38 windows)

| Call | per frame | min–max |
|---|---:|---|
| IDirect3DTexture9 AddRef / Release | 5,287 each | 86 – 9,458 |
| QueryPerformanceCounter | 4,064 | 130 – 41,209 (start-up spin) |
| SetVertexShaderConstantF | 719 | 68 – 1,107 |
| SetRenderState | 706 | 56 – 990 |
| SetStreamSource / SetIndices | 517 each | 42 – 789 |
| SetTexture | 460 | 7 – 741 |
| SetSamplerState | 399 | 46 – 553 |
| SetTextureStageState | 305 | 102 – 389 |
| unidentified d3d9 pair (adjacent addresses, called together) | 271 each | 25 – 378 |
| SetPixelShaderConstantF | 142 | 58 – 295 |
| DrawPrimitiveUP | 113 | 44 – 204 |
| VertexBuffer Unlock | 77 | one window |
| SetVertexDeclaration | 63 | 5 – 82 |
| SetDepthStencilSurface / SetRenderTarget | 61 / 50 | few windows |

Time inside Direct3D per frame (windows in which the call was among the most expensive): `Present` 1.6 ms (max 7.0), `VertexBuffer::Lock` 1.6 ms
(max 4.0; the user's heavy 2496×1664 scenes: 6–18 ms), texture `AddRef`+`Release` 0.9 ms, `SetVertexShaderConstantF` 0.36 ms.
User-reported: ~440 draws and ~900 constant uploads per frame.

Consequences: (a) over 10,000 guest→host calls per frame, more than half of them texture refcounts: refcounts live in the shim's facade object
and never reach the layer; (b) about half of all calls are redundant state sets: the layer keeps a shadow and builds one `DrawState` per draw;
(c) the interface between shim and layer is called ~10,000 times per frame: plain virtual calls, no allocation, no locking.

### 2.3 Host-side code of ours that touches Direct3D or the window

| File | Use |
|---|---|
| `native32.cpp` | the pass-through itself; `d3d_shadow.hpp` state cache; vsync rewrite of the present interval; profile/light-profile D3D bookkeeping; `ClipCursor`; frame limiter |
| `mods_gamma.cpp` | **calls Direct3D 9 directly** (pixel shader, render targets, state blocks) for the optional console-gamma pass (off by default): ported onto the layer or dropped before the bridge is removed |
| `mods_system.cpp`, `mods_resolution.cpp` | `MonitorFromWindow`/`GetMonitorInfoA`/`EnumDisplaySettingsA`/`EnumDisplayDevicesA`, `SetWindowPos`, `ShowCursor`, `SetProcessDPIAware`, overrides of `CreateWindowExA`/`SetWindowLongA`/`AdjustWindowRect` → Window/Display interfaces (Phase 1) |
| `mods_*` hooks | read the device through guest state, e.g. render-target size for HUD scaling, `before_reset`, `before_end_scene` events → stay as shim events |

### 2.4 The other subsystems, short (not in scope now)

252 imports, **124 called** in the traced session. By subsystem: files 39 (24 called), window/cursor 38 (26), threads/sync 34 (21), process/runtime
30 (20), text/locale 18 (7), memory 16 (7), time 12 (11), GDI text 12 (1: only `DeleteObject`), settings/registry 7 (4), **network 42 (0 called:
sockets, serial, TAPI, NetBIOS — dormant; stub, never crash)**, plus the three COM entry points `Direct3DCreate9`, `DirectInput8Create`,
`DirectSoundCreate` (dsound ordinal 1) and the legacy `DirectDrawCreate` (never called).

- **DirectInput 8** (13 targets): CreateDevice, EnumDevices, Acquire/Unacquire, GetDeviceState, GetDeviceData, SetDataFormat, SetCooperativeLevel,
  Poll, **BuildActionMap/SetActionMap** (action mapping, not only raw state); `EnumDevicesBySemantics` is handled in `native32.cpp` too.
- **DirectSound** (11 targets): one streaming ring: CreateSoundBuffer, SetFormat, Lock/Unlock, GetCurrentPosition, Play, GetCaps,
  SetCooperativeLevel; no per-sound buffers, no 3D (the game mixes in software through the run-time generated x86 modules).
- GDI text: unexercised; to be checked before it is called "not needed".

## 3. The interfaces (proposal)

C++20, namespace `nfsu2::platform`, headers under `platform/` with no `<windows.h>`.

### 3.1 Common types

```cpp
template <class Tag> struct Id { uint32_t value = 0; constexpr explicit operator bool() const { return value != 0; }
                                 friend constexpr bool operator==(Id, Id) = default; };
enum class Status : int32_t { ok, invalid_argument, not_found, already_exists, unsupported, out_of_memory,
                              io_error, would_block, timed_out, device_lost, closed };
template <class T> struct Result { Status status = Status::ok; T value{}; explicit operator bool() const { return status == Status::ok; } };
using Bytes = std::span<const std::byte>;  using MutableBytes = std::span<std::byte>;
```

### 3.2 Window and Display (Phase 1)

The guest still creates its window through `CreateWindowExA` on the Windows host (the mods override it for the windowed modes). So on Windows
`Window` **adopts** the guest's window; the bgfx adapter receives the native handle through it. On other hosts `create` makes the window.

```cpp
struct DisplayMode { uint32_t width, height, refresh_millihertz; };
struct DisplayInfo { uint32_t id; std::string name; DisplayMode current; std::vector<DisplayMode> modes; float content_scale;
                     struct { int32_t left, top, right, bottom; } safe_area_px; bool primary; };
class Display { public: virtual std::vector<DisplayInfo> list() = 0; virtual ~Display() = default; };   // EnumDisplay*, monitor info, refresh

enum class WindowMode { windowed, borderless, fullscreen };
struct NativeSurface { enum class Kind { win32_hwnd, xlib_window, wayland_surface, android_native_window, cametal_layer } kind; void* a; void* b; };
enum class EventKind { close, focus_gained, focus_lost, resized, display_changed, suspended, resumed, surface_lost, surface_ready, terminating };
struct WindowEvent { EventKind kind; uint32_t width, height; };

class Window {                               // see thread note below
public:
    virtual Status create(std::string_view title, uint32_t width, uint32_t height, WindowMode, uint32_t display_id) = 0;
    virtual Status adopt(NativeSurface existing) = 0;             // Windows: the HWND the guest created
    virtual void   destroy() = 0;
    virtual Status set_mode(WindowMode, uint32_t width, uint32_t height) = 0;
    virtual void   set_position(int32_t x, int32_t y) = 0;
    virtual uint32_t width() = 0; virtual uint32_t height() = 0;   // client area in framebuffer pixels
    virtual float  content_scale() = 0;
    virtual void   show_cursor(bool) = 0;  virtual void capture_cursor(bool relative) = 0;  virtual bool focused() = 0;
    virtual NativeSurface native_surface() = 0;                    // for the graphics backend only
    virtual size_t poll_events(std::span<WindowEvent>) = 0;
    virtual ~Window() = default;
};
```

Thread note: where the OS requires the event loop on the application's main thread (macOS, iOS, Android) the application thread pumps and
the game thread polls; the shim turns events into `WM_*` messages and `suspended`/`surface_lost` into `D3DERR_DEVICELOST` /
`TestCooperativeLevel` (the game already recreates its default-pool resources on `Reset`).

### 3.3 Graphics: two levels

```
 shim: IDirect3D9 / IDirect3DDevice9 / resource facade objects (COM, refcounts, lock staging)
   |  LEVEL A  d3d9::Device   "what the game says": Direct3D 9 semantics, handle-based, ~40 methods. The record/replay point.
 D3D9 LAYER (written once): state shadow, state blocks, FVF + fixed-function emulation, shader translation (3.4),
   |                        lock rings and resource versioning, format conversion, reset / lost device, bgfx view management (3.5)
   |  LEVEL B  gpu::Gpu       "what a modern API does": explicit buffers, textures, passes, one DrawState per draw
 bgfx adapter -> D3D11 | D3D12 | Vulkan | OpenGL ES | Metal        (later, only if profiling demands: own Vulkan / Metal)
```

Level A has implementations: the **layer** (production), a **recorder** (wraps any Level A device and serialises the calls) and the **null**
device. There is no native-D3D9 implementation of Level A. The reference data comes from the *bridge* (section 5), which records at the
dispatcher where the real COM objects are, in the same trace format.

#### Level A: `d3d9::Device` (sketch; numbers are Direct3D 9's published constants as plain integers)

```cpp
namespace nfsu2::platform::d3d9 {
using TextureId = Id<struct TexTag>; using BufferId = Id<struct BufTag>; using SurfaceId = Id<struct SurfTag>;
using DeclarationId = Id<struct DeclTag>; using ShaderId = Id<struct ShaderTag>; using StateBlockId = Id<struct SbTag>;
struct Float4 { float x, y, z, w; };
struct LockedRegion { std::byte* data; uint32_t pitch, slice_pitch; };   // data lies in the guest arena (section 4)
struct DeviceParams { uint32_t back_width, back_height, back_format, depth_format, multisample, buffers; bool windowed; uint32_t present_interval; };

class Device {                                  // game thread only
public:
    virtual Status reset(const DeviceParams&) = 0;  virtual Status test_cooperative_level() = 0;  virtual Status present() = 0;
    virtual Result<TextureId> create_texture(uint32_t w, uint32_t h, uint32_t levels, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<TextureId> create_cube_texture(uint32_t edge, uint32_t levels, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<BufferId>  create_vertex_buffer(uint32_t bytes, uint32_t usage, uint32_t fvf, uint32_t pool) = 0;
    virtual Result<BufferId>  create_index_buffer(uint32_t bytes, uint32_t usage, uint32_t format, uint32_t pool) = 0;
    virtual Result<SurfaceId> create_render_target(uint32_t w, uint32_t h, uint32_t format, uint32_t multisample, bool lockable) = 0;
    virtual Result<SurfaceId> create_depth_stencil(uint32_t w, uint32_t h, uint32_t format, uint32_t multisample) = 0;
    virtual Result<DeclarationId> create_vertex_declaration(std::span<const uint8_t> elements) = 0;
    virtual Result<ShaderId>  create_vertex_shader(std::span<const uint32_t> bytecode) = 0;
    virtual Result<ShaderId>  create_pixel_shader(std::span<const uint32_t> bytecode) = 0;
    virtual void destroy(TextureId) = 0; virtual void destroy(BufferId) = 0; virtual void destroy(SurfaceId) = 0;
    virtual void destroy(DeclarationId) = 0; virtual void destroy(ShaderId) = 0; virtual void destroy(StateBlockId) = 0;
    enum LockFlags : uint32_t { read_only = 0x10, discard = 0x2000, no_overwrite = 0x1000, no_dirty_update = 0x8000 };
    virtual Result<LockedRegion> lock_buffer(BufferId, uint32_t offset, uint32_t bytes, uint32_t flags) = 0;   // always CPU staging
    virtual Status unlock_buffer(BufferId) = 0;
    virtual Result<LockedRegion> lock_texture(TextureId, uint32_t level, uint32_t face, const int32_t* rect4, uint32_t flags) = 0;
    virtual Status unlock_texture(TextureId, uint32_t level, uint32_t face) = 0;
    virtual Result<SurfaceId> texture_surface(TextureId, uint32_t level, uint32_t face) = 0;
    virtual Status stretch_rect(SurfaceId from, const int32_t* from_rect, SurfaceId to, const int32_t* to_rect, uint32_t filter) = 0;
    virtual void set_render_state(uint32_t state, uint32_t value) = 0;
    virtual void set_sampler_state(uint32_t sampler, uint32_t type, uint32_t value) = 0;
    virtual void set_texture_stage_state(uint32_t stage, uint32_t type, uint32_t value) = 0;
    virtual void set_transform(uint32_t type, const float* matrix16) = 0;
    virtual void set_viewport(const uint32_t* x_y_w_h, float min_z, float max_z) = 0;
    virtual void set_texture(uint32_t sampler, TextureId) = 0;
    virtual void set_render_target(uint32_t index, SurfaceId) = 0;  virtual void set_depth_stencil(SurfaceId) = 0;
    virtual void set_vertex_declaration(DeclarationId) = 0;  virtual void set_fvf(uint32_t) = 0;
    virtual void set_vertex_shader(ShaderId) = 0;  virtual void set_pixel_shader(ShaderId) = 0;
    virtual void set_vertex_shader_constants_f(uint32_t start, std::span<const Float4>) = 0;
    virtual void set_pixel_shader_constants_f(uint32_t start, std::span<const Float4>) = 0;
    virtual void set_stream_source(uint32_t stream, BufferId, uint32_t offset, uint32_t stride) = 0;
    virtual void set_indices(BufferId) = 0;
    virtual StateBlockId begin_state_block() = 0;  virtual void end_state_block(StateBlockId) = 0;  virtual void apply(StateBlockId) = 0;
    virtual void begin_scene() = 0;  virtual void end_scene() = 0;
    virtual void clear(std::span<const int32_t> rects4, uint32_t flags, uint32_t argb, float z, uint32_t stencil) = 0;
    virtual void draw_indexed(uint32_t primitive, int32_t base_vertex, uint32_t min_vertex, uint32_t vertex_count, uint32_t start_index, uint32_t primitive_count) = 0;
    virtual void draw_up(uint32_t primitive, uint32_t primitive_count, Bytes vertices, uint32_t stride) = 0;
    virtual ~Device() = default;
};
}
```

#### Level B: `gpu::Gpu` (sketch)

```cpp
namespace nfsu2::platform::gpu {
using Buffer = Id<struct B>; using Texture = Id<struct T>; using Program = Id<struct P>;
enum class Format : uint8_t { rgba8, bgra8, r5g6b5, a4r4g4b4, a1r5g5b5, r8, a8, rg8, rgba16f, rgba32f, d16, d24s8, d32f, bc1, bc2, bc3, astc4x4, etc2_rgba8 };
enum class Topology : uint8_t { points, lines, line_strip, triangles, triangle_strip };      // fans are converted to lists by the layer
struct VertexAttribute { uint8_t stream, offset, type, semantic, index; };                   // hashed by the backend into a layout cache
struct SamplerDesc { uint8_t min, mag, mip, address_u, address_v, address_w; float lod_bias; uint8_t max_aniso; uint32_t border_argb; };
struct DrawState {                                       // everything one draw needs; built by the layer from its shadow
    Program program;
    Buffer vertex_buffer[4]; uint32_t vertex_offset[4], vertex_stride[4]; Buffer index_buffer; bool index32;
    std::span<const VertexAttribute> layout;
    Texture textures[16]; SamplerDesc samplers[16];
    Bytes vertex_constants, pixel_constants;             // packed float4 arrays, only the registers the program uses
    uint32_t blend, depth_stencil, raster;               // packed descriptors (blend, depth, stencil, cull, colour mask, depth bias)
    Topology topology; int32_t base_vertex; uint32_t first_index, index_count, vertex_count;
    int32_t viewport[4]; float depth_range[2]; int32_t scissor[4]; bool scissor_enabled;
};
struct PassDesc { Texture colors[4]; Texture depth_stencil; bool clear_color, clear_depth, clear_stencil; uint32_t clear_argb; float clear_z; uint8_t clear_stencil_value; };
struct GpuCaps { bool texture_format[32]; uint32_t max_texture_size, max_anisotropy; bool instancing, mrt; };

class Gpu {                                              // game thread; the bgfx render thread hides behind it
public:
    virtual const GpuCaps& caps() = 0;
    virtual Result<Buffer>  create_static_buffer(Bytes initial) = 0;                        // immutable after creation
    virtual Buffer          allocate_transient(uint32_t bytes, MutableBytes& out) = 0;      // valid for this frame only (dynamic data, UP draws)
    virtual Result<Texture> create_texture(uint32_t w, uint32_t h, uint32_t levels, Format, bool render_target, bool cube, Bytes initial) = 0;
    virtual void            update_texture(Texture, uint32_t level, uint32_t face, const uint32_t* rect4, Bytes, uint32_t row_pitch) = 0;
    virtual Result<Program> create_program(Bytes vertex_binary, Bytes pixel_binary) = 0;    // binary: the bgfx container produced by 3.4
    virtual void begin_pass(const PassDesc&) = 0;  virtual void draw(const DrawState&) = 0;  virtual void end_pass() = 0;
    virtual Status present(uint32_t swap_interval) = 0;                                      // = bgfx::frame()
    virtual Status resize(uint32_t w, uint32_t h) = 0;
    virtual void   read_back(Texture, uint32_t level, MutableBytes) = 0;                      // GetRenderTargetData (rare; stalls)
    virtual void   destroy(Buffer) = 0; virtual void destroy(Texture) = 0; virtual void destroy(Program) = 0;
    virtual ~Gpu() = default;
};
}
```

Level B is deliberately what bgfx, SDL_gpu and Metal agree on, so replacing bgfx later by an own Vulkan/Metal backend changes one class. There is
no `update_buffer` on purpose: see 3.5 (bgfx updates are not ordered with draws).

### 3.4 Shaders: the decision (the first risk of the project)

**The problem.** The game feeds the device **Direct3D 9 shader bytecode** (vertex and pixel shader models 1.x–3.0; `CreateVertexShader` and
`CreatePixelShader` are called) and also uses the **fixed-function pipeline** (texture-stage states, `SetTransform`, `LightEnable`, FVF). Neither
exists in D3D11-class APIs. bgfx consumes **precompiled binaries, one format per renderer**; its compiler `shaderc` is an offline tool and is
not available on Android or iOS. The shader bytecode is **game data**: it exists only in the user's files, cannot be committed and cannot be
compiled when *we* build.

**What bgfx's binary really is** (checked in `third_party/bgfx.cmake/bgfx/src/renderer_gl.cpp`, `renderer_mtl.cpp`, `renderer_vk.cpp`,
`renderer_d3d11.cpp`, `ShaderXX::create`): a small container (magic `VSH`/`FSH` + version, input/output hashes, a table of uniforms with name,
type, register, count, then the code). The code part is **GLSL source for OpenGL/ES**, **MSL source or a metallib for Metal**
(`newLibraryWithSource` when it does not start with `MTLB`), **SPIR-V for Vulkan**, **DXBC for Direct3D 11/12**. So nothing forces the use of `shaderc`:
we can write the container ourselves at run time.

**Decision (proposal, to be proven by spike S1):**

```
 D3D9 bytecode (vs/ps 1.x-3.0) ----\                                       +--> SPIR-V ------------------------------> Vulkan
                                    >--> shader IR --> SPIR-V writer --> SPIRV-Cross --> GLSL ES 300 / GLSL 330 -----> OpenGL (ES)
 fixed-function state key ---------/    (ours)         (ours, small)      (Apache-2.0)  MSL source ------------------> Metal
                                                                                        HLSL SM5 -> D3DCompile ------> D3D11 / D3D12 (Windows only)
                                              all wrapped in the bgfx shader container by our code, cached on disk
```

1. One **shader IR** (D3D9-flavoured: registers, source/destination modifiers, predication, loops, texture ops) with two front-ends: a bytecode
   decoder for SM1.x–3.0 and a **fixed-function generator** that builds IR from the state key (texture-stage combiners, fog, lighting, texgen,
   alpha test, vertex format). One back-end path serves both.
2. A small **SPIR-V writer** of our own (only the Khronos SPIR-V headers are needed). **SPIRV-Cross** (Apache-2.0, a library without external
   tools; verified: GLSL, ESSL, MSL and HLSL output) cross-compiles to every other target, with its options for clip-space depth fix-up and
   Y flip. HLSL output is compiled to DXBC with `D3DCompile` (`d3dcompiler_47.dll`, part of Windows 10/11) **only on Windows for the D3D11/D3D12
   renderers**; Vulkan (also on Windows) needs no compiler at all.
3. **Where binaries are produced.**
   - *Our own shaders* (clear quad, blit, optional post-processing): written once, compiled with `shaderc` **at our build time** for every
     backend and shipped — the only place `shaderc` is used.
   - *Fixed-function permutations*: generated at run time from the state key by the same path (keys are our data, not game data); the keys seen
     in recorded traces can be listed in the repository to **warm** the cache.
   - *The game's own shader bytecode*: translated **at first run** from the user's data and stored in `Area::cache`, keyed by
     `(SHA-256 of the bytecode, backend, translator version)`. A **warm-up step** runs once after the game folder is chosen (progress shown,
     all programs found through a scan of the recorded or discovered list) so that no hitch happens in a race; later runs only read the cache.
4. **Mobile.** Needs nothing that is unavailable: SPIRV-Cross and our writer are portable C++ libraries. Vulkan consumes SPIR-V directly; GLES
   consumes GLSL ES and the driver compiles it (tens of ms per program on phones: hence the warm-up and the driver's own program cache); Metal
   consumes MSL source (`newLibraryWithSource`, and a binary archive as cache). No `shaderc`, no DXC, no `D3DCompile` on those targets.

**Alternatives rejected.** (A) Run `shaderc` or DXC on the device: neither is available or small enough for mobile. (B) One emitter per target
(GLSL, MSL, HLSL, SPIR-V): four back-ends instead of one plus a library; every FF/bytecode feature is then implemented four times. (C) Ship
precompiled game shaders: they are game data. (D) Translate to GLSL only and use ANGLE-like layers for the rest: no Metal/Vulkan story.

**References and licences (nothing copied without a decision).** DXVK's `d3d9` front-end (*dxso*, the D3D9 bytecode → SPIR-V compiler): licence
**zlib** (checked: the `LICENSE` file is the zlib/libpng licence), so adaptation is permitted with notices; it is nonetheless a **reference**:
our IR also serves the fixed-function generator, so we write our own. Wine's `d3d9`/`wined3d`: **LGPL-2.1** (not checked in detail): read-only
reference, nothing copied (an LGPL component inside a statically linked game binary would impose relinking obligations). Mesa's Gallium Nine:
MIT (not checked): reference. SPIRV-Cross: Apache-2.0 (checked). SPIRV-Headers/Tools licences: to be checked when they enter `third_party/`.

**Spike S1 (first work item of Phase 2, runs without a GPU).**
1. From the first recorded trace: how many distinct vertex/pixel programs, which shader models, instruction mix, constant registers actually used,
   samplers, and how many distinct fixed-function state keys. This decides the scope (e.g. ps 1.x first).
2. IR + bytecode decoder + SPIR-V writer for that subset; unit tests with hand-assembled bytecode (no game bytes in the repository).
3. Validate the SPIR-V (Khronos validator, development-time only), cross-compile to GLSL ES/GLSL/MSL/HLSL, compile the HLSL with `D3DCompile`
   on this PC (console), record translation time per shader.
4. Build the bgfx container and prove each renderer accepts it in the out-of-game bgfx spike (3.7, step 2d); then images (step 2e).
Acceptance: every program of the first trace translates and validates; translation time per shader is measured; the cache hit path costs
less than 1 ms per program. Not verified until it runs on a GPU: image equality and mobile compile times.

### 3.5 Mapping Direct3D 9's immediate state machine onto bgfx

Direct3D 9 is an immediate state machine whose calls take effect **in order**; bgfx is a deferred submission model whose resource updates
are applied **before** the frame's draws. The layer bridges that. Decisions (each one verified against the vendored bgfx where it says so):

- **Views = ordered passes.** Each change of render target or depth surface, and each `Clear` after draws, opens a new bgfx view (ids grow with
  submission order); `setViewMode(Sequential)` keeps draws in submission order inside a view (D3D9 draws are order-dependent: blending, UI).
  `BGFX_CONFIG_MAX_VIEWS` is 4096 in the vendored `config.h`; the trace shows 50–61 render-target changes per frame. `Present` = `bgfx::frame()`.
- **Viewport and scissor.** The viewport is applied in the vertex shader (scale/bias of clip xy by constants) plus a per-draw scissor equal to
  the viewport intersected with the D3D9 scissor, so viewport changes never open a view; fallback: one view per viewport.
- **Clear.** A clear before any draw of a view becomes that view's clear; a full clear after draws opens a new view with the clear flags; a
  partial rectangle or masked clear becomes a full-screen draw with the right depth/colour masks.
- **Resource updates are not ordered with draws in bgfx** (verified: `getCommandBuffer` puts every create/update command in `m_cmdPre`, executed
  by `Context::renderFrame` before `m_renderCtx->submit`). The game locks the same vertex buffer ~90 times per frame between draws, so
  `bgfx::update` on a shared buffer would show every draw the *last* contents. The layer therefore never maps D3D9 locks onto in-place updates:
  - **static** buffers (no `D3DUSAGE_DYNAMIC`): an immutable bgfx buffer is created at the first `Unlock`; a later `Unlock` creates a new
    *generation* (the old one is retired when the frame is done);
  - **dynamic** buffers: at draw time the *range this draw reads* (known from `MinVertexIndex`, `NumVertices`, `StartIndex`, `PrimCount`) is copied
    into a transient bgfx buffer, de-duplicated by (buffer, generation, range) inside the frame; this is where `DISCARD` (new generation, old one
    lives until retired) and `NO_OVERWRITE` (append, earlier draws keep their copies) become cheap;
  - `DrawPrimitiveUP` data goes straight into a transient buffer; triangle fans are converted to lists on the way;
  - **textures**: written once at `Unlock` for static content; a texture rewritten after it was used by a draw of the same frame gets a new
    generation (copy on write); render targets are bgfx frame buffers; `StretchRect` render-target copies use `bgfx::blit`, which is view-ordered;
    `GetRenderTargetData` is a read-back that waits for the frame (rare).
  - Because `Lock` always hands out CPU staging memory, **a lock can never wait for the GPU**: this is the structural answer to the 6–18 ms
    `Lock` stalls of the heavy scenes (a design property, not yet measured on a backend).
- **State shadow and `DrawState`.** `Set*State`, `SetTexture`, `SetStreamSource`, constants and the like are stores into the shadow with a dirty
  mask; nothing reaches bgfx until a draw. At a draw the layer selects a program (3.4 key = shader pair or FF state key), a vertex layout (hash),
  packs `bgfx` state flags, samplers (`BGFX_SAMPLER_*`; LOD bias and border colours that bgfx lacks go through shader constants/permutations),
  and uploads constants as one block **limited to the registers the program reads** (known from the translator), instead of 256 float4 per draw.
- **State blocks** (`BeginStateBlock`/`EndStateBlock`/`Apply`) are recorded and replayed in the shadow; bgfx never sees them.
- **Fixed-function and D3D9-only states that D3D11-class APIs lack**, each emulated in the generated shaders and included in the program key:
  alpha test (function in the key, reference in a constant), table/vertex fog, texture-stage combiners and texgen/`TEXTURETRANSFORMFLAGS`, vertex
  lighting, `D3DRS_WRAP*` wrapping of texture coordinates, point sprites, flat shading, `XYZRHW` pre-transformed vertices and the half-pixel
  texel-centre offset of Direct3D 9, `D3DCOLOR` BGRA vertex order and `UBYTE4`/`SHORT` declaration types, user clip planes if ever used.
- **Depth range and Y flip.** The shaders are produced in Direct3D clip-space convention and SPIRV-Cross's clip-space and Y-flip options adapt
  them per renderer; `bgfx::getCaps()->homogeneousDepth` and `originBottomLeft` select the options. Verified by images in step 2e, not before.
- **Reset and lost device.** `Reset` → `bgfx::reset(width, height, flags)`; bgfx keeps its resources, the layer drops what the game expects
  to recreate (default-pool surfaces and render targets); `suspended`/`surface_lost` surface as `D3DERR_DEVICELOST`.
- **Threads.** The game thread is the only caller of `d3d9::Device` and of bgfx submission; bgfx's render thread is internal, and the frame
  latency (`frame()` blocks when the renderer is a frame behind) takes the place of `Present` blocking.

### 3.6 Placeholders for the rest (future; interface shapes only)

**Storage — design confirmed, to be implemented later.** The game opens files by Windows path and assumes **case-insensitive** names and `\`
separators; Android's scoped storage may give the game data as a document-tree URI; game data is read-only and a separate writable layer
holds saves and settings. So paths are `Area` + UTF-8 relative path with `/`; the platform resolves them; the shim keeps Windows `HANDLE`s,
`C:\` paths and drive queries, and a **handle table** mapping guest handles to `FileId`s.

```cpp
enum class Area { game_data /*read-only, the user's files*/, user_data /*writable layer: saves, settings*/, cache, temp, logs };
enum class OpenMode : uint8_t { read = 1, write = 2, create = 4, truncate = 8, append = 16 };
struct FileInfo { bool exists, is_directory; uint64_t size; int64_t modified_unix_ns; };
using FileId = Id<struct FileTag>;
class Storage {                      // any thread; one FileId used by one thread at a time
public:
    virtual Result<FileId>   open(Area, std::string_view path, OpenMode) = 0;       // case-insensitive lookup through a directory index
    virtual Result<uint64_t> read(FileId, uint64_t offset, MutableBytes) = 0;       // short read = end of file
    virtual Result<uint64_t> write(FileId, uint64_t offset, Bytes) = 0;
    virtual Result<uint64_t> size(FileId) = 0;  virtual Status resize(FileId, uint64_t) = 0;  virtual Status flush(FileId) = 0;  virtual void close(FileId) = 0;
    virtual void   prefetch(FileId, uint64_t offset, uint64_t length) = 0;
    virtual Result<FileInfo> stat(Area, std::string_view path) = 0;
    virtual Status list(Area, std::string_view directory, void (*each)(void*, std::string_view, const FileInfo&), void* user) = 0;
    virtual Status make_directory(Area, std::string_view) = 0;  virtual Status remove(Area, std::string_view) = 0;  virtual Status rename(Area, std::string_view, std::string_view) = 0;
    virtual Result<MutableBytes> map(FileId, uint64_t offset, uint64_t length, bool writable) = 0;  virtual void unmap(MutableBytes) = 0;   // optional
    virtual ~Storage() = default;
};
```

(`Area::cache` is also where the shader cache of 3.4 lives; until Storage exists the Windows backend uses a folder next to the launcher's logs.)

**Input — placeholder.** Two views of one thing, added later without touching the rest: a per-frame **state snapshot** (keyboard keys by physical
code, mouse deltas and buttons, up to four gamepads with a style tag, touch points, motion) and an **event queue**, plus an `active_device()`
(last device above its noise threshold) so the HUD can later pick a glyph set. The shim's DirectInput facade (which must support the game's action
mapping) would sit on this. *No implementation, no touch layout and no glyph switching now; DirectInput stays pass-through.*

**Audio — placeholder.** A PCM **ring** with play/write cursors matching DirectSound's streaming buffer (`open_ring`, `ring_write` at `Unlock`,
`ring_cursors`, `play`/`stop`), plus an optional pull stream for low-latency back-ends. **Clock/Threads/Sync/Timers**: `now_ns()` as an inline free
function (4,064 clock reads per frame), thread start with a class/priority hint and the priority cap, events/mutexes, address-keyed wait/wake
for guest critical sections, a synchronous-cancel timer for `timeSetEvent`. **Memory**: one reserved 4 GiB guest arena, commit/protect,
`can_execute_generated_code()` (false on iOS), memory stats and a pressure callback for the 2 GB Android budget. **Settings**: typed key/value
store replacing the registry. All of these stay behind today's Windows code.

### 3.7 Null platform and test strategy

The `null` implementations (display list, window events, Level A device that counts and validates, Gpu that records `DrawState`s) let the shim and the
layer be tested without window, GPU or game data, and let a recorded trace be **replayed headless**.

## 4. How the game gets its Direct3D objects without Windows' d3d9

Today the guest holds **real** COM pointers and `NativePlatform::dispatch` calls the real d3d9.dll code with the guest stack as arguments
(`invoke_native32`). The facade replaces the real objects by guest-visible ones, **without a new dispatch mechanism**: `dispatch` already
recognises call tokens (`0xf0000000 + 16*i`, used by `override_import`).

- `Direct3DCreate9` (handled by the shim) returns a **facade object** in the guest arena `{ vtable, refcount, handle, kind }` whose vtable holds
  **method tokens** in a new reserved range (e.g. `0xf1000000 + (interface << 12 | slot << 2)`). A guest `call [eax+0x38]` sets `pc` to the token,
  the translated code returns to the dispatcher, which routes to the handler for that `(interface, slot)`: it reads the stdcall arguments from the
  guest stack, converts them, calls `d3d9::Device`, and returns through `returned()`. Cheaper than today's ~60 ns bridge (no stack switch, no real call).
- `AddRef`/`Release` (>10,000 per frame) touch only the facade's refcount; `Release` to zero calls `Device::destroy`.
- **Lock staging:** `Lock` returns an address in the guest arena; `Unlock` hands the layer the written range. The layer never sees a guest
  pointer; a 64-bit host never has to give the guest an address above 4 GiB.
- **Structures the guest reads** (`D3DCAPS9`, `D3DSURFACE_DESC`, `D3DADAPTER_IDENTIFIER9`, `D3DDISPLAYMODE`, `D3DLOCKED_RECT`) are written by the shim from
  layer/platform data; layouts come from the installed SDK headers and are tested against them.
- Window/timer/thread callbacks into the guest already go through `call_guest`; they stay in the shim.

## 5. Backends and the fate of the native bridge

| Subsystem | Windows | Android | Apple | Linux | Tests |
|---|---|---|---|---|---|
| Graphics | **bgfx**: D3D11 (default), D3D12, Vulkan | bgfx: Vulkan or OpenGL ES (player's choice) | bgfx: Metal | bgfx: Vulkan / OpenGL | null Gpu |
| Window, Display | Win32 (adopts the guest's window) | SDL3 or native activity (undecided) | SDL3 or native | SDL3 | null |
| Input, audio, files, … | **unchanged: DirectInput / DirectSound / Win32** (out of scope now) | future | future | future | — |

**The native bridge is temporary.** Its present uses (all in `native32.cpp` unless noted): pass-through of every Direct3D COM call; the state
cache and `d3d_shadow.hpp`; the vsync rewrite of the present interval; the light profile's D3D bookkeeping; `mods_gamma.cpp`. It serves as

1. the **reference recorder** (section 6, step 2a): call traces in Level A format and reference images from the real device;
2. a development fallback while bgfx is not at parity (the shim chooses per run with a *temporary* `--graphics=native|bgfx` switch that
   exists only until the removal step);
3. then it is **removed** (step 2g): the Direct3D call routing, `d3d_shadow.*` and its test, the vsync/profile D3D bits, the switch, and
   `mods_gamma.cpp` (ported onto the layer or dropped); the last commit with the bridge is tagged `last-native-d3d9`, and the recorded reference
   traces/images stay on the user's disk (they contain game data, so never in the repository).

## 6. Plan

**Phase 1 — limited to graphics. Done** (`platform/`, tests `platform_api` and `fast_facade`; all 18 ctest tests pass; the game's translated code is untouched, so instruction counts are unchanged). Written as planned, with these notes: `Display::list(include_modes)` was added so that callers needing only the current size skip the mode enumeration; the guest's own `CreateWindowExA`/`SetWindowLongA`/`AdjustWindowRect` pass-through handlers stay in `mods_system.cpp` (they are guest-ABI code), while the placement, frame, cursor and display-query policy behind them uses `Display`/`Window`; `ClipCursor` inside the crash handler stays a direct call. Tests need `-DGAME_DIR=<game data folder>` in a git worktree and an existing `logs/` folder.
- `platform/`: common types, `Display`, `Window`, Level A `d3d9::Device` and Level B `gpu::Gpu` headers, plus `null` implementations and tests.
- `platform/win32/`: `Display` and `Window` (adopting the guest's HWND) implemented with today's Windows calls; the mods' display enumeration,
  window placement, cursor and DPI code, and the launcher's equivalents, go through them with no behaviour change.
- A **call-token facade registry** in `NativePlatform::dispatch` (method tokens → handlers), tested with a fake COM object; nothing in the game uses it yet.
- Verification: the existing ctest suite stays green, `launcher_cli` instruction counts identical, new unit tests against `null`.
- Not touched: DirectInput, DirectSound, file access, threads, timers (their current Windows code stays).

**Phase 2 — complete.**
- **2a Recorder and reference captures** (needs the bridge, so it comes first). In the dispatcher, decode each Direct3D 9 call by vtable slot into
  Level A records; capture the data it needs (vertex/index/texture contents at `Unlock`, shader bytecode and declarations at creation, `UP` vertices,
  constants), de-duplicated by content hash into a blob store; at chosen frames read the back buffer through the real device
  (`GetBackBuffer` + `GetRenderTargetData` into a system-memory surface) and write a lossless image next to the trace. A trace analyser prints
  the shader census (S1.1). Flags (provisional names, **not implemented yet**; the user will be told when the build exists):

  ```
  & "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\raw_recomp\dist\NFSU2-static\nfsu2_launcher.exe" --game-dir "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\data game (pc)" --record-d3d9 "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\captures\menu" --record-frames 240 --capture-every 30
  ```

  one run per scene: front-end menu, a loading screen, and a race (about 120 recorded frames each after the scene is stable, one reference image
  every 30 frames). Traces contain game data and stay out of git.
- **2b** the D3D9 layer on the null Gpu, and the **replay tool** (headless; deterministic Gpu call sequence for a given trace).
- **2c Spike S1** (3.4): shader IR/decoder/SPIR-V/cross-compile, validated on the console (parallel to 2b; starts with the census).
- **2d bgfx adapter + out-of-game spike** (textured quad, tens of thousands of draws, DXT upload and conversion, static/transient buffer policy of 3.5)
  on Windows with D3D11 and Vulkan; later Android Vulkan/GLES and an iPhone, as `GRAPHICS_BACKEND.md` requires.
- **2e Replay on bgfx and image comparison** against the reference images of 2a: a compare tool with per-scene metrics (proposed: mean absolute error
  below 0.5/255 and 99.9th percentile below 8/255 outside a one-pixel edge mask; thresholds calibrated on the first results, not assumed).
- **2f In-game facade** (section 4): the shim serves `Direct3DCreate9` and the device from the layer; the user runs `--graphics=bgfx` and sends logs/screenshots.
- **2g Parity gate and removal**: parity = the three scenes pass 2e and the user confirms play; then the native bridge is removed (section 5), the
  switch goes away, README/ROADMAP/this document are updated.
- Frame pacing (limiter and vsync become `Gpu::present` policy) and the memory budget (texture formats: BC→ASTC/ETC2/RGBA8, texture-memory profile)
  belong to 2d/2f.

**Phase 4 — report** on all of the above (what is done, decided, open, with measurements).

## 7. Open questions and risks (in order of danger)

1. **Shaders** (3.4). Unknown: the number and shader models of the game's programs, the fixed-function key space, SPIRV-Cross output quality for SM1.x
   idioms (predication, `texm3x3`-style instructions, `loop`/`rep`), translation and driver-compile time on a low-end phone, whether the cache can be
   warmed during an install step. Spike S1 answers the first three on a PC; the phone numbers need a device.
2. **State and ordering semantics** (3.5): per-draw copy volume of dynamic buffers, generation churn, number of views per frame, correctness of the
   viewport-in-shader and half-pixel rules. Image comparison (2e) is the only real test.
3. **Texture memory under 2 GB on Android**: BC1 is 0.5 byte per pixel, RGBA8 is 4; there is no texture-memory profile yet.
4. **What one session did not exercise**: any Direct3D method not in 2.1, fixed-function paths, photo mode, rarely used options screens. Mitigation:
   record more scenes and keep `unsupported` loud.
5. **GDI text** (12 imports, 1 called): the font path is unexercised.
6. **Render thread and lost device**: `Reset`/`Present`/`surface_lost` with bgfx's render thread need an explicit protocol (2f).
7. **64-bit CPU backend** is outside this document but constrains it: no host pointer may be assumed to fit in 32 bits (hence arena-relative
   staging and handle tables).
8. **Nothing graphical has been verified** by the author of this document: it is derived from code, vendored bgfx sources, SDK headers and one trace.

## Appendix: the numbers

```
python tools/platform_inventory.py --trace "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\raw_recomp\dist\NFSU2-static\logs\native_trace.log"
```

prints the import, COM and per-frame tables for any trace. To widen the inventory before the recorder exists, the user can run a longer session with the
profile on and send `logs\native_trace.log`:

```
$env:NFSU2_PROFILE = "1"; & "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\raw_recomp\dist\NFSU2-static\nfsu2_launcher.exe" --game-dir "C:\Users\Leonardo\Projects\NFSU2 REINGENIER\data game (pc)"
```
