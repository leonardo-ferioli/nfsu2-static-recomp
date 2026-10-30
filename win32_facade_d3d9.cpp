// The Direct3D 9 part of the Win32 facade, for a host without a real Windows: Direct3DCreate9 and the Direct3D 9 objects the game uses (IDirect3D9, the
// device, textures, cube textures, surfaces, vertex and index buffers, vertex declarations, shaders, state blocks, the swap chain) as COM objects in guest
// memory whose methods drive the Level A device of the layer nue::d3d9 (nue_d3d9/include/nue/d3d9_device.hpp). It is the guest-side twin of the drop-in
// d3d9.dll (nue_d3d9/dll/main.cpp, device.cpp, resources.cpp): the same mapping, with the stdcall arguments read from the guest stack.
//
// * A COM object is a 16-byte block in the guest arena whose first word points to a vtable of method tokens (GuestPlatform::add_method_token). The layer's
//   handles, the GPU and every host object stay on this side: no host pointer is ever written into guest memory.
// * Lock memory is guest memory. A vertex or index buffer has a mirror in the arena: Lock returns a pointer into it and Unlock hands the locked range to the
//   layer (one copy, at Unlock). A texture lock goes through a block of the arena that LockRect fills from the layer's staging and UnlockRect copies back.
// * Capability queries cannot ask a system runtime. They are answered from the record of a Shader Model 3 GPU captured once with tools/d3d9_caps_capture.cpp
//   (win32_facade_d3d9_caps.inc); display modes come from platform::Display, formats from the layer's format table.
// * CreateDevice and Reset set the guest's x87 control word as Direct3D 9 does: single precision, round to nearest, all exceptions masked (0x007F), or with
//   D3DCREATE_FPU_PRESERVE the caller's word with invalid / zero-divide / overflow / underflow masked (| 0x001D).
// * One device at a time, on the game thread (the worker-thread mode of the dll is not part of this facade). Methods the dll does not support answer as it does
//   (D3DERR_NOTAVAILABLE, logged once); a method nobody serves stops the run with its name.
//
// * The layer is the port's in-tree copy (nue_d3d9/) or, in builds with NUE (NFSU2_HAVE_NUE: third_party/nue-engine), NUE's (src/legacy/d3d9). With NUE the host can
//   hand the facade the device for the game's CreateDevice (Win32LayerOptions::d3d9_device: NUE's layer on the host's nue_gfx, win32_facade_d3d9_nue.hpp); the
//   game's calls then go through that device's Level A front, which follows nue_gfx's lost / suspended states. Without the hook: d3d9_gpu, or the null GPU.
//
// NFSU2_D3D9_TRACE=1 logs the first call of every method (what the game really uses).
#include "win32_facade_internal.hpp"
#include "layer/formats.hpp"
#include "nue/d3d9_layer.hpp"
#if NFSU2_HAVE_NUE
#include "nue_legacy/d3d9_gfx.hpp"
#include "win32_facade_d3d9_nue.hpp"
#endif
#include "nue/null_gpu.hpp"
#include "nue/shader/d3d9_shader.hpp"
#include "platform/display.hpp"
#include "platform/null/null_platform.hpp"
#include <array>
#include <bit>
#include <cstdlib>
#include <map>
#include <tuple>

namespace nfsu2raw {
namespace d9 = nue::d3d9;

namespace {
#include "win32_facade_d3d9_caps.inc"

// HRESULTs and constants of d3d9.h (the facade does not include Windows headers).
constexpr uint32_t kOk = 0, kInvalidCall = 0x8876086Cu, kNotAvailable = 0x8876086Au, kNotFound = 0x88760866u, kDeviceLost = 0x88760868u, kDeviceNotReset = 0x88760869u,
                   kOutOfVideoMemory = 0x8876017Cu, kMoreData = 0x88760867u, kNoInterface = 0x80004002u, kPointer = 0x80004003u;
constexpr uint32_t kFmtA8R8G8B8 = 21, kFmtX8R8G8B8 = 22, kFmtR5G6B5 = 23, kFmtX1R5G5B5 = 24, kFmtA1R5G5B5 = 25, kFmtA2R10G10B10 = 35, kFmtVertexData = 100;
constexpr uint32_t kUsageRenderTarget = 1, kUsageDepthStencil = 2, kUsageQueryVertexTexture = 0x00100000;
constexpr uint32_t kPoolSystemMem = 2, kPoolScratch = 3;
constexpr uint32_t kLockReadOnly = 0x10;
constexpr uint32_t kCreateFpuPreserve = 0x2;
constexpr uint32_t kTypeSurface = 1, kTypeTexture = 3, kTypeCubeTexture = 5, kTypeVertexBuffer = 6, kTypeIndexBuffer = 7;
constexpr uint32_t kDevTypeHal = 1;

struct Iid { uint8_t b[16]; };
constexpr Iid make_iid(uint32_t d1, uint16_t d2, uint16_t d3, std::array<uint8_t, 8> d4) {
    Iid g{};
    for (int i = 0; i < 4; ++i) g.b[i] = uint8_t(d1 >> (8 * i));
    g.b[4] = uint8_t(d2); g.b[5] = uint8_t(d2 >> 8); g.b[6] = uint8_t(d3); g.b[7] = uint8_t(d3 >> 8);
    for (int i = 0; i < 8; ++i) g.b[8 + i] = d4[size_t(i)];
    return g;
}
// From the SDK's d3d9.h.
constexpr Iid kIidUnknown = make_iid(0x00000000, 0x0000, 0x0000, {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46});
constexpr Iid kIidDirect3D9 = make_iid(0x81bdcbca, 0x64d4, 0x426d, {0xae, 0x8d, 0xad, 0x01, 0x47, 0xf4, 0x27, 0x5c});
constexpr Iid kIidDevice9 = make_iid(0xd0223b96, 0xbf7a, 0x43fd, {0x92, 0xbd, 0xa4, 0x3b, 0x0d, 0x82, 0xb9, 0xeb});
constexpr Iid kIidResource9 = make_iid(0x05eec05d, 0x8f7d, 0x4362, {0xb9, 0x99, 0xd1, 0xba, 0xf3, 0x57, 0xc7, 0x04});
constexpr Iid kIidBaseTexture9 = make_iid(0x580ca87e, 0x1d3c, 0x4d54, {0x99, 0x1d, 0xb7, 0xd3, 0xe3, 0xc2, 0x98, 0xce});
constexpr Iid kIidTexture9 = make_iid(0x85c31227, 0x3de5, 0x4f00, {0x9b, 0x3a, 0xf1, 0x1a, 0xc3, 0x8c, 0x18, 0xb5});
constexpr Iid kIidCubeTexture9 = make_iid(0xfff32f81, 0xd953, 0x473a, {0x92, 0x23, 0x93, 0xd6, 0x52, 0xab, 0xa9, 0x3f});
constexpr Iid kIidVertexBuffer9 = make_iid(0xb64bb1b5, 0xfd70, 0x4df6, {0xbf, 0x91, 0x19, 0xd0, 0xa1, 0x24, 0x55, 0xe3});
constexpr Iid kIidIndexBuffer9 = make_iid(0x7c9dd65e, 0xd3f7, 0x4529, {0xac, 0xee, 0x78, 0x58, 0x30, 0xac, 0xde, 0x35});
constexpr Iid kIidSurface9 = make_iid(0x0cfbaf3a, 0x9ff6, 0x429a, {0x99, 0xb3, 0xa2, 0x79, 0x6a, 0xf8, 0xb8, 0x9b});
constexpr Iid kIidVertexDeclaration9 = make_iid(0xdd13c59c, 0x36fa, 0x4098, {0xa8, 0xfb, 0xc7, 0xed, 0x39, 0xdc, 0x85, 0x46});
constexpr Iid kIidVertexShader9 = make_iid(0xefc5557e, 0x6265, 0x4613, {0x8a, 0x94, 0x43, 0x85, 0x78, 0x89, 0xeb, 0x36});
constexpr Iid kIidPixelShader9 = make_iid(0x6d3bdbdc, 0x5b02, 0x4415, {0xb8, 0x52, 0xce, 0x5e, 0x8b, 0xcc, 0xb2, 0x89});
constexpr Iid kIidStateBlock9 = make_iid(0xb07c4fe5, 0x310d, 0x4ba8, {0xa2, 0x3c, 0x4f, 0x0f, 0x20, 0x6f, 0x21, 0x8b});
constexpr Iid kIidSwapChain9 = make_iid(0x794950f2, 0xadfc, 0x458a, {0x90, 0x5e, 0x10, 0xa1, 0x0b, 0x0b, 0x50, 0x3b});

bool iid_is(uint32_t address, const Iid& g) { return address && std::memcmp(ptr<const void>(address), g.b, 16) == 0; }
float argf(Cpu& c, unsigned i) { return std::bit_cast<float>(arg(c, i)); }
void put(uint32_t address, uint32_t value) { if (address) *ptr<uint32_t>(address) = value; }
void put_words(uint32_t address, std::initializer_list<uint32_t> words) { uint32_t* w = ptr<uint32_t>(address); for (uint32_t v : words) *w++ = v; }
uint32_t mip(uint32_t size, uint32_t level) { return std::max(1u, size >> std::min(level, 31u)); }
uint32_t full_chain(uint32_t w, uint32_t h) { uint32_t m = std::max(w, h), n = 1; while (m > 1) { m >>= 1; ++n; } return n; }

uint32_t vertices_for(uint32_t primitive, uint32_t count) {
    switch (primitive) {
    case 1: return count;          // point list
    case 2: return count * 2;      // line list
    case 3: return count + 1;      // line strip
    case 4: return count * 3;      // triangle list
    default: return count + 2;     // strip, fan
    }
}

enum class Kind : uint8_t { d3d, device, texture, cube_texture, vertex_buffer, index_buffer, surface, declaration, vertex_shader, pixel_shader, state_block, swap_chain, count };
enum class SurfaceKind : uint8_t { back_buffer, render_target, depth_stencil, system_memory, texture_level };

// What one guest COM object stands for. The guest sees only the block at `address` (its first word is the vtable).
struct Object {
    Kind kind = Kind::d3d;
    uint32_t address = 0;
    int refs = 1;
    uint32_t device = 0;                                   // the device that made it (GetDevice)
    uint32_t width = 0, height = 0, levels = 1, usage = 0, format = 0, pool = 0, multisample = 0, fvf = 0, bytes = 0;
    d9::TextureId texture; d9::BufferId buffer; d9::SurfaceId surface; d9::DeclarationId declaration; d9::ShaderId shader; d9::StateBlockId block;
    SurfaceKind surface_kind = SurfaceKind::render_target;
    uint32_t container = 0, level = 0, face = 0;           // a texture level's surface: its texture (AddRef and Release go there)
    std::vector<uint32_t> level_surfaces;                  // a texture's surface objects, by face * levels + level (0: not made yet)
    uint32_t memory = 0, pitch = 0;                        // guest memory: a buffer's mirror, a system-memory surface's pixels
    struct BufferLock { uint32_t offset, bytes, flags; };
    std::vector<BufferLock> buffer_locks;                  // Lock calls not unlocked yet (the newest last)
    struct TextureLock { uint32_t bounce = 0, bytes = 0; std::byte* staging = nullptr; bool read_only = false; };
    std::map<uint32_t, TextureLock> texture_locks;         // by face * levels + level
    bool surface_locked = false;
    std::vector<uint8_t> blob;                             // a declaration's elements, a shader's tokens
    std::map<std::array<uint8_t, 16>, std::vector<uint8_t>> private_data;
    uint32_t priority = 0;
};

struct DeviceState {
    uint32_t address = 0, d3d = 0, window = 0;
    std::unique_ptr<nue::gpu::Gpu> gpu;                    // the GPU of a layer made here (d3d9_gpu's, or the null GPU); none with a host device
    std::unique_ptr<d9::Layer> owned_layer;                // the layer made here over `gpu`
#if NFSU2_HAVE_NUE
    std::unique_ptr<d9::GfxDevice> host_device;            // Win32LayerOptions::d3d9_device: NUE's layer on the host's nue_gfx
#endif
    d9::Device* layer = nullptr;                           // Level A, where the game's calls go: the layer made here, or the host device's front
    d9::Layer* core = nullptr;                             // the layer itself (its report, flush)
    void release_layer() {                                 // the layer before the GPU it draws with
        layer = nullptr; core = nullptr;
#if NFSU2_HAVE_NUE
        host_device.reset();
#endif
        owned_layer.reset();
        gpu.reset();
    }
    uint32_t creation[4] = {};                             // D3DDEVICE_CREATION_PARAMETERS
    uint32_t pp[14] = {};                                  // D3DPRESENT_PARAMETERS as the device runs with them
    uint32_t back_buffer = 0, auto_depth = 0;              // surface objects the device holds a reference on
    // what the Get* calls answer (the layer keeps the authoritative state)
    uint32_t render_state[256] = {}, sampler[16][14] = {}, stage[8][33] = {};
    std::map<uint32_t, std::array<float, 16>> transforms;
    std::map<uint32_t, std::pair<std::array<uint8_t, 104>, uint32_t>> lights;
    std::array<uint8_t, 68> material{};
    uint32_t viewport[6] = {};
    uint32_t textures[16] = {}, streams[16] = {}, stream_offset[16] = {}, stream_stride[16] = {}, render_targets[4] = {};
    uint32_t indices = 0, declaration = 0, vertex_shader = 0, pixel_shader = 0, depth_stencil = 0, fvf = 0;
    int32_t vs_i[16][4] = {}, ps_i[16][4] = {};
    uint32_t vs_b[16] = {}, ps_b[16] = {};
    int32_t scissor[4] = {};
    std::array<uint8_t, 1536> gamma{};
    uint32_t cursor = 1;
    bool in_scene = false, recording = false;
    d9::StateBlockId recording_id;
};

GuestPlatform* g_log_platform = nullptr;
void layer_log(const char* message) { if (g_log_platform) g_log_platform->log_line(std::string("d3d9 layer: ") + message); }

}  // namespace

struct D3D9Group {
    Win32Facade::Impl& impl;
    std::recursive_mutex m;
    std::unordered_map<uint32_t, std::unique_ptr<Object>> objects;   // by the guest address of the COM object
    uint32_t vtables[size_t(Kind::count)] = {};
    std::unique_ptr<DeviceState> dev;
    std::map<std::string, int> unsupported_seen;
    std::set<std::string> traced;
    bool trace = false;
    std::unique_ptr<plat::Display> display_owned;
    struct Mode { uint32_t width, height, refresh; };
    std::vector<Mode> modes;                               // the primary display's modes (D3DFMT_X8R8G8B8)
    Mode current_mode{1280, 720, 60};

    explicit D3D9Group(Win32Facade::Impl& i) : impl(i) {}
    ~D3D9Group() { if (dev) teardown_device(); }

    // ---- guest memory
    nfsu2::guest::AddressSpace& arena() {
        auto* space = nfsu2::guest::current_address_space();
        if (!space) throw Fault("the Direct3D 9 group needs the guest arena (nfsu2::guest::create_arena)");
        return *space;
    }
    uint32_t guest_alloc(uint32_t bytes) {
        const uint32_t a = arena().alloc(std::max(bytes, 16u));
        if (!a) throw Fault("Direct3D 9: the guest arena has no room for " + std::to_string(bytes) + " bytes");
        return a;
    }
    void guest_free(uint32_t a) { if (auto* space = nfsu2::guest::current_address_space(); a && space) space->free(a); }   // never throws (destructors use it)

    // ---- objects
    d9::Device* layer() { return dev ? dev->layer : nullptr; }
    Object* find(uint32_t address) { auto it = objects.find(address); return it == objects.end() ? nullptr : it->second.get(); }
    Object* find(uint32_t address, Kind k) { Object* o = find(address); return o && o->kind == k ? o : nullptr; }
    Object* texture_of(uint32_t address) { Object* o = find(address); return o && (o->kind == Kind::texture || o->kind == Kind::cube_texture) ? o : nullptr; }
    Object& make(Kind k) {
        auto o = std::make_unique<Object>();
        o->kind = k;
        o->address = guest_alloc(16);
        o->device = dev ? dev->address : 0;
        *ptr<uint32_t>(o->address) = vtables[size_t(k)];
        Object& r = *o;
        objects[o->address] = std::move(o);
        return r;
    }
    uint32_t add_ref(Object& o) {
        if (o.kind == Kind::surface && o.surface_kind == SurfaceKind::texture_level) if (Object* t = find(o.container)) return add_ref(*t);
        return uint32_t(++o.refs);
    }
    uint32_t release(Object& o) {
        if (o.kind == Kind::surface && o.surface_kind == SurfaceKind::texture_level) if (Object* t = find(o.container)) return release(*t);
        const int left = --o.refs;
        if (left <= 0) { destroy(o.address); return 0; }
        return uint32_t(left);
    }
    void add_ref(uint32_t address) { if (Object* o = find(address)) add_ref(*o); }
    void release(uint32_t address) { if (Object* o = find(address)) release(*o); }
    // A slot of the device holds a reference on what is bound to it, as Direct3D 9 does.
    void bind(uint32_t& slot, uint32_t address) {
        if (address) add_ref(address);
        const uint32_t old = slot;
        slot = address;
        if (old) release(old);
    }

    void destroy(uint32_t address) {
        auto it = objects.find(address);
        if (it == objects.end()) return;
        std::unique_ptr<Object> o = std::move(it->second);
        objects.erase(it);
        d9::Device* L = layer();
        switch (o->kind) {
        case Kind::texture: case Kind::cube_texture:
            for (uint32_t s : o->level_surfaces) {
                auto st = objects.find(s);
                if (st == objects.end()) continue;
                if (L && st->second->surface) L->destroy(st->second->surface);
                guest_free(s);
                objects.erase(st);
            }
            for (auto& [key, lock] : o->texture_locks) guest_free(lock.bounce);
            if (L) L->destroy(o->texture);
            break;
        case Kind::vertex_buffer: case Kind::index_buffer:
            if (L) L->destroy(o->buffer);
            guest_free(o->memory);
            break;
        case Kind::surface:
            if (o->surface_kind == SurfaceKind::system_memory) guest_free(o->memory);
            else if (o->surface_kind != SurfaceKind::back_buffer && L && o->surface) L->destroy(o->surface);
            break;
        case Kind::declaration: if (L) L->destroy(o->declaration); break;
        case Kind::vertex_shader: case Kind::pixel_shader: if (L) L->destroy(o->shader); break;
        case Kind::state_block: if (L) L->destroy(o->block); break;
        case Kind::swap_chain: release(o->device); break;
        case Kind::device: if (dev && dev->address == address) teardown_device(); break;
        default: break;
        }
        guest_free(address);
    }

    void teardown_device() {
        DeviceState& d = *dev;
        for (auto& t : d.textures) bind(t, 0);
        for (auto& s : d.streams) bind(s, 0);
        for (auto& r : d.render_targets) bind(r, 0);
        bind(d.indices, 0); bind(d.depth_stencil, 0); bind(d.declaration, 0); bind(d.vertex_shader, 0); bind(d.pixel_shader, 0);
        bind(d.back_buffer, 0); bind(d.auto_depth, 0);
        if (d.core) { impl.platform.log_line("d3d9: device released; what the translator could not do:\n" + d.core->report()); d.core->flush(); }
        const uint32_t d3d = d.d3d;
        std::unique_ptr<DeviceState> gone = std::move(dev);   // objects the game still holds lose their layer from here on
        gone->release_layer();
        release(d3d);
    }

    uint32_t unsupported(const std::string& what) {
        if (unsupported_seen[what]++ == 0) impl.platform.log_line("d3d9: unsupported by the translator: " + what);
        return kNotAvailable;
    }
    static uint32_t to_hresult(nue::Status s) {
        switch (s) {
        case nue::Status::ok: return kOk;
        case nue::Status::unsupported: return kNotAvailable;
        case nue::Status::out_of_memory: return kOutOfVideoMemory;
        case nue::Status::device_lost: return kDeviceLost;
#if NFSU2_HAVE_NUE
        case nue::Status::device_not_reset: return kDeviceNotReset;   // NUE's layer on nue_gfx: the device came back, the game must Reset
#endif
        default: return kInvalidCall;
        }
    }

    // ---- the device's state as Direct3D 9 has it after CreateDevice and Reset (measured on the real runtime with nue_defaults_test)
    void reset_shadows(DeviceState& d, bool depth_buffer) {
        static const uint32_t render_defaults[][2] = {
            {7, 1}, {8, 3}, {9, 2}, {14, 1}, {16, 1}, {19, 2}, {20, 1}, {22, 3}, {23, 4}, {25, 8}, {37, 0x3f800000}, {38, 0x3f800000}, {53, 1}, {54, 1}, {55, 1}, {56, 8}, {58, 0xffffffff}, {59, 0xffffffff}, {60, 0xffffffff},
            {136, 1}, {137, 1}, {141, 1}, {142, 1}, {145, 1}, {146, 2}, {154, 0x3f800000}, {155, 0x3f800000}, {158, 0x3f800000}, {161, 1}, {162, 0xffffffff}, {166, 0x43800000}, {168, 0xf}, {171, 1}, {172, 3}, {173, 1},
            {178, 0x3f800000}, {179, 0x3f800000}, {182, 0x3f800000}, {186, 1}, {187, 1}, {188, 1}, {189, 8}, {190, 0xf}, {191, 0xf}, {192, 0xf}, {193, 0xffffffff}, {207, 2}, {208, 1}, {209, 1},
        };
        std::memset(d.render_state, 0, sizeof d.render_state);
        for (const auto& v : render_defaults) d.render_state[v[0]] = v[1];
        d.render_state[7] = depth_buffer ? 1 : 0;   // D3DRS_ZENABLE
        std::memset(d.sampler, 0, sizeof d.sampler);
        for (auto& s : d.sampler) { s[1] = s[2] = s[3] = 1; s[5] = s[6] = 1; s[10] = 1; }   // address U/V/W wrap, mag/min point, max anisotropy 1
        std::memset(d.stage, 0, sizeof d.stage);
        for (uint32_t i = 0; i < 8; ++i) {
            auto& s = d.stage[i];
            s[1] = i == 0 ? 4 : 1; s[2] = 2; s[3] = 1;            // COLOROP modulate / disable, COLORARG1 texture, COLORARG2 current
            s[4] = i == 0 ? 2 : 1; s[5] = 2; s[6] = 1;            // ALPHAOP select arg1 / disable, ALPHAARG1 texture, ALPHAARG2 current
            s[11] = i; s[26] = s[27] = s[28] = 1;                // TEXCOORDINDEX, COLORARG0 / ALPHAARG0 / RESULTARG current
        }
        d.transforms.clear();
        d.lights.clear();
        d.material = {};
        for (auto& t : d.textures) bind(t, 0);
        for (auto& s : d.streams) bind(s, 0);
        std::memset(d.stream_offset, 0, sizeof d.stream_offset); std::memset(d.stream_stride, 0, sizeof d.stream_stride);
        bind(d.indices, 0); bind(d.declaration, 0); bind(d.vertex_shader, 0); bind(d.pixel_shader, 0);
        d.fvf = 0;
    }

    // The client area of the device's window (a token of the user32 group); 0 x 0 when it has none.
    void window_size(uint32_t hwnd, uint32_t& w, uint32_t& h) {
        w = h = 0;
        if (!impl.windows || !hwnd) return;
        auto r = impl.windows->get_client_rect(hwnd);
        if (!r) return;
        w = uint32_t(std::max(0, r.value.right - r.value.left));
        h = uint32_t(std::max(0, r.value.bottom - r.value.top));
    }

    // D3DPRESENT_PARAMETERS: width, height, format, count, multisample, quality, swap effect, window, windowed, auto depth, depth format, flags, refresh, interval.
    // A full-screen device is a full-screen platform window; a windowed one leaves the window to the user32 group (the game's top-level window decides its mode).
    bool fullscreen_applied = false;
    void apply_window_mode(bool windowed) {
        if (!impl.window) return;
        if (!windowed) { impl.window->set_mode(nfsu2::platform::WindowMode::fullscreen); fullscreen_applied = true; }
        else if (fullscreen_applied) {
            fullscreen_applied = false;
            if (impl.windows) impl.windows->reapply_platform_window(); else impl.window->set_mode(nfsu2::platform::WindowMode::windowed);
        }
    }
    d9::DeviceParams params_from(uint32_t* pp) {
        uint32_t w = 0, h = 0;
        window_size(pp[7] ? pp[7] : (dev ? dev->window : 0), w, h);
        if (!pp[0]) pp[0] = w ? w : 640;
        if (!pp[1]) pp[1] = h ? h : 480;
        if (!pp[2]) pp[2] = kFmtX8R8G8B8;
        if (!pp[3]) pp[3] = 1;
        d9::DeviceParams p;
        p.back_width = pp[0]; p.back_height = pp[1]; p.back_format = pp[2];
        p.depth_format = pp[9] ? pp[10] : 0;
        p.multisample = pp[4]; p.multisample_quality = pp[5]; p.buffers = pp[3]; p.windowed = pp[8] != 0;
        p.present_interval = pp[13];
        return p;
    }

    // The guest's x87 control word as Direct3D 9 sets it at CreateDevice and Reset: the register the translated code reads (its virtual x87 keeps the word
    // there) and the host FPU the reference backend mirrors it into.
    static void apply_fpu_mode(Cpu& c, uint32_t behaviour) {
        uint16_t guest = uint16_t(r<2>(c, reg_fpu_control));
        if (!guest) guest = 0x027f;   // a word never written reads as the x87's default
        uint16_t host = x87_store_control();
        if (behaviour & kCreateFpuPreserve) { guest |= 0x001D; host |= 0x001D; }
        else guest = host = 0x007F;
        wr<2>(c, reg_fpu_control, guest);
        x87_load_control(host);
    }

    // The device's back buffer and automatic depth buffer as surface objects the device holds, bound as the targets (CreateDevice, Reset).
    void make_default_targets(DeviceState& d) {
        bind(d.back_buffer, 0); bind(d.auto_depth, 0);
        for (auto& r : d.render_targets) bind(r, 0);
        bind(d.depth_stencil, 0);
        auto bb = d.layer->back_buffer(0, 0);
        if (bb) {
            Object& s = make(Kind::surface);
            s.surface_kind = SurfaceKind::back_buffer; s.surface = bb.value; s.width = d.pp[0]; s.height = d.pp[1]; s.format = d.pp[2]; s.usage = kUsageRenderTarget;
            d.back_buffer = s.address;   // the device's own reference (refs = 1)
            bind(d.render_targets[0], s.address);
        }
        const d9::SurfaceId depth = d.layer->auto_depth_stencil();
        if (depth) {
            Object& s = make(Kind::surface);
            s.surface_kind = SurfaceKind::depth_stencil; s.surface = depth; s.width = d.pp[0]; s.height = d.pp[1]; s.format = d.pp[10]; s.usage = kUsageDepthStencil;
            d.auto_depth = s.address;
            bind(d.depth_stencil, s.address);
        }
        const uint32_t vp[6] = {0, 0, d.pp[0], d.pp[1], 0, std::bit_cast<uint32_t>(1.0f)};
        std::memcpy(d.viewport, vp, sizeof vp);
    }

    uint32_t present() {
        d9::Device* L = layer();
        if (!L) return kDeviceLost;
        if (dev->in_scene) { L->end_scene(); dev->in_scene = false; }
        return to_hresult(L->present());
    }
    uint32_t traced_present(Cpu& c) {   // NFSU2_FRAME_TRACE (frame_trace.hpp): Present marks the game's frames
        uint32_t result;
        {
            frame_trace::Scope timed(frame_trace::present);
            result = present();
        }
        frame_trace::end_frame(c.instructions);
        return result;
    }

    // ---- locks
    uint32_t lock_texture(Object& t, uint32_t level, uint32_t face, uint32_t locked_out, uint32_t rect_address, uint32_t flags) {
        d9::Device* L = layer();
        const uint32_t faces = t.kind == Kind::cube_texture ? 6 : 1;
        if (!L || !locked_out || level >= t.levels || face >= faces) return kInvalidCall;
        const uint32_t key = face * t.levels + level;
        if (t.texture_locks.count(key)) return kInvalidCall;
        int32_t rect[4] = {};
        if (rect_address) std::memcpy(rect, ptr<const void>(rect_address), 16);
        auto lock = L->lock_texture(t.texture, level, face, rect_address ? rect : nullptr, flags);
        if (!lock) return lock.status == nue::Status::unsupported ? kInvalidCall : to_hresult(lock.status);
        // the size of the layer's staging (layer_resources.cpp, lock_texture): the rectangle clipped to the level, in whole blocks
        const d9::FormatInfo& info = d9::format_info(t.format);
        const uint32_t lw = mip(t.width, level), lh = mip(t.height, level);
        uint32_t x = 0, y = 0, w = lw, h = lh;
        if (rect_address) {
            x = uint32_t(std::max(0, rect[0])); y = uint32_t(std::max(0, rect[1]));
            w = uint32_t(std::max(0, rect[2] - rect[0])); h = uint32_t(std::max(0, rect[3] - rect[1]));
            if (x + w > lw) w = lw - std::min(x, lw);
            if (y + h > lh) h = lh - std::min(y, lh);
        }
        const uint32_t bytes = d9::level_bytes(info, w, h);
        Object::TextureLock record;
        record.bounce = guest_alloc(bytes);
        record.bytes = bytes;
        record.staging = lock.value.data;
        record.read_only = (flags & kLockReadOnly) != 0;
        if (bytes) std::memcpy(ptr<void>(record.bounce), lock.value.data, bytes);   // what the texture holds (or zeros)
        t.texture_locks[key] = record;
        put_words(locked_out, {lock.value.pitch, record.bounce});
        return kOk;
    }
    uint32_t unlock_texture(Object& t, uint32_t level, uint32_t face) {
        d9::Device* L = layer();
        const uint32_t key = face * t.levels + level;
        auto it = t.texture_locks.find(key);
        if (!L || it == t.texture_locks.end()) return kInvalidCall;
        const Object::TextureLock record = it->second;
        t.texture_locks.erase(it);
        if (!record.read_only && record.bytes) std::memcpy(record.staging, ptr<const void>(record.bounce), record.bytes);
        guest_free(record.bounce);
        return to_hresult(L->unlock_texture(t.texture, level, face));
    }
    uint32_t lock_buffer(Object& b, uint32_t offset, uint32_t bytes, uint32_t out, uint32_t flags) {
        if (!layer() || !out) return kInvalidCall;
        if (offset > b.bytes) return kInvalidCall;
        if (!bytes) bytes = b.bytes - offset;
        if (uint64_t(offset) + bytes > b.bytes) return kInvalidCall;
        b.buffer_locks.push_back({offset, bytes, flags});
        put(out, b.memory + offset);
        return kOk;
    }
    uint32_t unlock_buffer(Object& b) {
        d9::Device* L = layer();
        if (!L || b.buffer_locks.empty()) return kInvalidCall;
        const Object::BufferLock lock = b.buffer_locks.back();
        b.buffer_locks.pop_back();
        if (lock.flags & kLockReadOnly) return kOk;
        auto region = L->lock_buffer(b.buffer, lock.offset, lock.bytes, lock.flags);   // the layer sees the lock now, with the bytes the guest wrote
        if (!region) return to_hresult(region.status);
        if (lock.bytes) std::memcpy(region.value.data, ptr<const void>(b.memory + lock.offset), lock.bytes);
        return to_hresult(L->unlock_buffer(b.buffer));
    }

    // ---- descriptions
    void surface_desc(uint32_t at, uint32_t format, uint32_t type, uint32_t usage, uint32_t pool, uint32_t ms, uint32_t w, uint32_t h) { put_words(at, {format, type, usage, pool, ms, 0, w, h}); }
    void surface_desc(uint32_t at, const Object& s) {
        uint32_t usage = 0, pool = 0;
        switch (s.surface_kind) {
        case SurfaceKind::back_buffer: case SurfaceKind::render_target: usage = kUsageRenderTarget; break;
        case SurfaceKind::depth_stencil: usage = kUsageDepthStencil; break;
        case SurfaceKind::system_memory: pool = s.pool; break;
        case SurfaceKind::texture_level: usage = s.usage; pool = s.pool; break;
        }
        surface_desc(at, s.format, kTypeSurface, usage, pool, s.multisample, s.width, s.height);
    }

    uint32_t query_interface(Object& o, uint32_t riid, uint32_t out) {
        if (!out) return kPointer;
        put(out, 0);
        bool ok = iid_is(riid, kIidUnknown);
        switch (o.kind) {
        case Kind::d3d: ok = ok || iid_is(riid, kIidDirect3D9); break;
        case Kind::device: ok = ok || iid_is(riid, kIidDevice9); break;
        case Kind::texture: ok = ok || iid_is(riid, kIidResource9) || iid_is(riid, kIidBaseTexture9) || iid_is(riid, kIidTexture9); break;
        case Kind::cube_texture: ok = ok || iid_is(riid, kIidResource9) || iid_is(riid, kIidBaseTexture9) || iid_is(riid, kIidCubeTexture9); break;
        case Kind::vertex_buffer: ok = ok || iid_is(riid, kIidResource9) || iid_is(riid, kIidVertexBuffer9); break;
        case Kind::index_buffer: ok = ok || iid_is(riid, kIidResource9) || iid_is(riid, kIidIndexBuffer9); break;
        case Kind::surface: ok = ok || iid_is(riid, kIidResource9) || iid_is(riid, kIidSurface9); break;
        case Kind::declaration: ok = ok || iid_is(riid, kIidVertexDeclaration9); break;
        case Kind::vertex_shader: ok = ok || iid_is(riid, kIidVertexShader9); break;
        case Kind::pixel_shader: ok = ok || iid_is(riid, kIidPixelShader9); break;
        case Kind::state_block: ok = ok || iid_is(riid, kIidStateBlock9); break;
        case Kind::swap_chain: ok = ok || iid_is(riid, kIidSwapChain9); break;
        default: break;
        }
        if (!ok) return kNoInterface;
        add_ref(o);
        put(out, o.address);
        return kOk;
    }

    void load_modes() {
        plat::Display* display = impl.display;
        if (!display) { display_owned = std::make_unique<plat::null::NullDisplay>(); display = display_owned.get(); }
        for (const auto& info : display->list(true)) {
            if (!info.primary) continue;
            auto hz = [](uint32_t millihertz) { return millihertz ? (millihertz + 500) / 1000 : 60u; };
            current_mode = {info.current.width, info.current.height, hz(info.current.refresh_millihertz)};
            for (const auto& m : info.modes) modes.push_back({m.width, m.height, hz(m.refresh_millihertz)});
        }
        if (modes.empty()) modes.push_back(current_mode);
        std::sort(modes.begin(), modes.end(), [](const Mode& a, const Mode& b) { return std::tie(a.width, a.height, a.refresh) < std::tie(b.width, b.height, b.refresh); });
        modes.erase(std::unique(modes.begin(), modes.end(), [](const Mode& a, const Mode& b) { return a.width == b.width && a.height == b.height && a.refresh == b.refresh; }), modes.end());
    }
    static bool display_format(uint32_t f) { return f == kFmtX8R8G8B8; }
    static bool back_buffer_format(uint32_t f) { return f == kFmtX8R8G8B8 || f == kFmtA8R8G8B8 || f == kFmtR5G6B5 || f == kFmtX1R5G5B5 || f == kFmtA1R5G5B5 || f == kFmtA2R10G10B10; }

    void install();
};

void Win32Facade::Impl::install_d3d9() {
    d3d9_group = std::make_shared<D3D9Group>(*this);
    d3d9_group->install();
}

void D3D9Group::install() {
    D3D9Group* g = this;
    g_log_platform = &impl.platform;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    trace = std::getenv("NFSU2_D3D9_TRACE") != nullptr;
#pragma clang diagnostic pop
    load_modes();

    // One token per vtable slot. Every handler runs under the group's lock; `name` is what the trace and a fault report.
    auto method = [g](std::vector<uint32_t>& table, const char* name, unsigned argc, std::function<uint32_t(Cpu&)> fn) {
        table.push_back(g->impl.platform.add_method_token(argc, [g, name, fn = std::move(fn)](Cpu& c) -> uint32_t {
            frame_trace::NamedScope timed(name);   // NFSU2_FRAME_TRACE: the method by name (its time is already in the dispatch's native time)
            std::lock_guard lock(g->m);
            if (g->trace && g->traced.insert(name).second) g->impl.platform.log_line(std::string("d3d9: first call of ") + name);
            return fn(c);
        }));
    };
    auto not_served = [](const char* name) { return [name](Cpu&) -> uint32_t { throw Fault(std::string("Direct3D 9: ") + name + " is not served"); }; };
    auto finish = [g](Kind k, const std::vector<uint32_t>& table) {
        const uint32_t vt = g->guest_alloc(uint32_t(table.size() * 4));
        for (size_t i = 0; i < table.size(); ++i) ptr<uint32_t>(vt)[i] = table[i];
        g->vtables[size_t(k)] = vt;
    };
    // IUnknown and the methods every child of the device has
    auto unknown = [g, method](std::vector<uint32_t>& t, Kind k) {
        method(t, "QueryInterface", 3, [g, k](Cpu& c) -> uint32_t { Object* o = g->find(arg(c, 0), k); return o ? g->query_interface(*o, arg(c, 1), arg(c, 2)) : kInvalidCall; });
        method(t, "AddRef", 1, [g](Cpu& c) -> uint32_t { Object* o = g->find(arg(c, 0)); return o ? g->add_ref(*o) : 0u; });
        method(t, "Release", 1, [g](Cpu& c) -> uint32_t { Object* o = g->find(arg(c, 0)); return o ? g->release(*o) : 0u; });
    };
    auto get_device = [g](Cpu& c) -> uint32_t {
        Object* o = g->find(arg(c, 0));
        if (!o || !arg(c, 1)) return kInvalidCall;
        Object* d = g->find(o->device, Kind::device);
        if (!d) return kInvalidCall;
        g->add_ref(*d);
        put(arg(c, 1), d->address);
        return kOk;
    };
    // IDirect3DResource9 (after IUnknown): GetDevice, SetPrivateData, GetPrivateData, FreePrivateData, SetPriority, GetPriority, PreLoad, GetType
    auto resource = [g, method, get_device](std::vector<uint32_t>& t, uint32_t type) {
        method(t, "Resource::GetDevice", 2, get_device);
        method(t, "Resource::SetPrivateData", 5, [g](Cpu& c) -> uint32_t {   // (this, guid, data, size, flags): D3DSPD_IUNKNOWN (1) keeps a pointer, stored as given
            Object* o = g->find(arg(c, 0));
            if (!o || !arg(c, 1) || (!arg(c, 2) && arg(c, 3))) return kInvalidCall;
            std::array<uint8_t, 16> key; std::memcpy(key.data(), ptr<const void>(arg(c, 1)), 16);
            const uint8_t* data = arg(c, 2) ? ptr<const uint8_t>(arg(c, 2)) : nullptr;
            o->private_data[key] = std::vector<uint8_t>(data, data ? data + arg(c, 3) : data);
            return kOk;
        });
        method(t, "Resource::GetPrivateData", 4, [g](Cpu& c) -> uint32_t {   // (this, guid, data, &size)
            Object* o = g->find(arg(c, 0));
            if (!o || !arg(c, 1) || !arg(c, 3)) return kInvalidCall;
            std::array<uint8_t, 16> key; std::memcpy(key.data(), ptr<const void>(arg(c, 1)), 16);
            auto it = o->private_data.find(key);
            if (it == o->private_data.end()) return kNotFound;
            const uint32_t size = uint32_t(it->second.size()), room = *ptr<uint32_t>(arg(c, 3));
            put(arg(c, 3), size);
            if (!arg(c, 2)) return kOk;
            if (room < size) return kMoreData;
            if (size) std::memcpy(ptr<void>(arg(c, 2)), it->second.data(), size);
            return kOk;
        });
        method(t, "Resource::FreePrivateData", 2, [g](Cpu& c) -> uint32_t {
            Object* o = g->find(arg(c, 0));
            if (!o || !arg(c, 1)) return kInvalidCall;
            std::array<uint8_t, 16> key; std::memcpy(key.data(), ptr<const void>(arg(c, 1)), 16);
            return o->private_data.erase(key) ? kOk : kNotFound;
        });
        method(t, "Resource::SetPriority", 2, [g](Cpu& c) -> uint32_t { Object* o = g->find(arg(c, 0)); if (!o) return 0u; const uint32_t old = o->priority; o->priority = arg(c, 1); return old; });
        method(t, "Resource::GetPriority", 1, [g](Cpu& c) -> uint32_t { Object* o = g->find(arg(c, 0)); return o ? o->priority : 0u; });
        method(t, "Resource::PreLoad", 1, [](Cpu&) -> uint32_t { return 0; });
        method(t, "Resource::GetType", 1, [type](Cpu&) -> uint32_t { return type; });
    };
    // IDirect3DBaseTexture9 (after the resource): SetLOD, GetLOD, GetLevelCount, SetAutoGenFilterType, GetAutoGenFilterType, GenerateMipSubLevels
    auto base_texture = [g, method](std::vector<uint32_t>& t) {
        method(t, "BaseTexture::SetLOD", 2, [](Cpu&) -> uint32_t { return 0; });
        method(t, "BaseTexture::GetLOD", 1, [](Cpu&) -> uint32_t { return 0; });
        method(t, "BaseTexture::GetLevelCount", 1, [g](Cpu& c) -> uint32_t { Object* o = g->texture_of(arg(c, 0)); return o ? o->levels : 0u; });
        method(t, "BaseTexture::SetAutoGenFilterType", 2, [](Cpu&) -> uint32_t { return kOk; });
        method(t, "BaseTexture::GetAutoGenFilterType", 1, [](Cpu&) -> uint32_t { return 2; });   // D3DTEXF_LINEAR
        method(t, "BaseTexture::GenerateMipSubLevels", 1, [](Cpu&) -> uint32_t { return 0; });
    };
    // a texture's surface of (face, level), made once and kept by the texture
    auto level_surface = [g](Object& t, uint32_t face, uint32_t level, uint32_t out) -> uint32_t {
        d9::Device* L = g->layer();
        const uint32_t faces = t.kind == Kind::cube_texture ? 6 : 1;
        if (!L || !out || level >= t.levels || face >= faces) return kInvalidCall;
        uint32_t& slot = t.level_surfaces[size_t(face) * t.levels + level];
        if (!slot) {
            auto r = L->texture_surface(t.texture, level, face);
            if (!r) return to_hresult(r.status);
            Object& s = g->make(Kind::surface);
            s.surface_kind = SurfaceKind::texture_level; s.surface = r.value; s.container = t.address; s.level = level; s.face = face;
            s.width = mip(t.width, level); s.height = mip(t.height, level); s.format = t.format; s.usage = t.usage; s.pool = t.pool; s.device = t.device;
            s.refs = 0;   // its references are the texture's
            slot = s.address;
        }
        g->add_ref(t);
        put(out, slot);
        return kOk;
    };

    // ---- IDirect3D9
    std::vector<uint32_t> d3d;
    unknown(d3d, Kind::d3d);
    method(d3d, "IDirect3D9::RegisterSoftwareDevice", 2, [g](Cpu&) -> uint32_t { return g->unsupported("RegisterSoftwareDevice"); });
    method(d3d, "IDirect3D9::GetAdapterCount", 1, [](Cpu&) -> uint32_t { return 1; });
    method(d3d, "IDirect3D9::GetAdapterIdentifier", 4, [](Cpu& c) -> uint32_t {   // (this, adapter, flags, D3DADAPTER_IDENTIFIER9*)
        const uint32_t out = arg(c, 3);
        if (!out || arg(c, 1) != 0) return kInvalidCall;
        uint8_t* id = ptr<uint8_t>(out);
        std::memset(id, 0, 1100);
        auto text = [id](unsigned offset, const char* s) { std::memcpy(id + offset, s, std::strlen(s) + 1); };
        text(0, "nue_d3d9");
        text(512, "nue_d3d9 (Direct3D 9 on the NUE graphics layer)");
        text(1024, "\\\\.\\DISPLAY1");
        std::memcpy(id + 1056, &kAdapterProfile[1], 4); std::memcpy(id + 1060, &kAdapterProfile[0], 4);   // DriverVersion (low, high)
        std::memcpy(id + 1064, &kAdapterProfile[2], 16);                                                    // VendorId, DeviceId, SubSysId, Revision
        const uint8_t identifier[16] = {'n', 'u', 'e', '_', 'd', '3', 'd', '9', 0x4e, 0x55, 0x45, 0x00, 0x00, 0x00, 0x00, 0x01};
        std::memcpy(id + 1080, identifier, 16);
        std::memcpy(id + 1096, &kAdapterProfile[6], 4);
        return kOk;
    });
    method(d3d, "IDirect3D9::GetAdapterModeCount", 3, [g](Cpu& c) -> uint32_t { return arg(c, 1) == 0 && display_format(arg(c, 2)) ? uint32_t(g->modes.size()) : 0u; });
    method(d3d, "IDirect3D9::EnumAdapterModes", 5, [g](Cpu& c) -> uint32_t {   // (this, adapter, format, mode, D3DDISPLAYMODE*)
        if (arg(c, 1) != 0 || !arg(c, 4) || !display_format(arg(c, 2)) || arg(c, 3) >= g->modes.size()) return kInvalidCall;
        const Mode& m = g->modes[arg(c, 3)];
        put_words(arg(c, 4), {m.width, m.height, m.refresh, arg(c, 2)});
        return kOk;
    });
    method(d3d, "IDirect3D9::GetAdapterDisplayMode", 3, [g](Cpu& c) -> uint32_t {
        if (arg(c, 1) != 0 || !arg(c, 2)) return kInvalidCall;
        put_words(arg(c, 2), {g->current_mode.width, g->current_mode.height, g->current_mode.refresh, kFmtX8R8G8B8});
        return kOk;
    });
    method(d3d, "IDirect3D9::CheckDeviceType", 6, [](Cpu& c) -> uint32_t {   // (this, adapter, type, display format, back buffer format, windowed)
        if (arg(c, 1) != 0 || arg(c, 2) != kDevTypeHal) return kNotAvailable;
        if (!display_format(arg(c, 3)) && !(arg(c, 5) && arg(c, 3) == 0)) return kNotAvailable;
        return arg(c, 4) == 0 || back_buffer_format(arg(c, 4)) ? kOk : kNotAvailable;
    });
    method(d3d, "IDirect3D9::CheckDeviceFormat", 7, [](Cpu& c) -> uint32_t {   // (this, adapter, type, adapter format, usage, resource type, format)
        if (arg(c, 1) != 0 || arg(c, 2) != kDevTypeHal) return kNotAvailable;
        const uint32_t usage = arg(c, 4);
        const d9::FormatInfo& f = d9::format_info(arg(c, 6));
        if (!f.valid) return kNotAvailable;
        if (usage & kUsageQueryVertexTexture) return kNotAvailable;   // the layer has no vertex texture fetch
        if (usage & kUsageDepthStencil) return f.depth ? kOk : kNotAvailable;
        if (usage & kUsageRenderTarget) return !f.depth && !f.compressed && f.native != nue::gpu::Format::count ? kOk : kNotAvailable;
        return kOk;
    });
    method(d3d, "IDirect3D9::CheckDeviceMultiSampleType", 7, [](Cpu& c) -> uint32_t {   // (this, adapter, type, format, windowed, multisample, &quality levels)
        const uint32_t ms = arg(c, 5);
        if (arg(c, 1) != 0 || arg(c, 2) != kDevTypeHal) return kNotAvailable;
        const bool ok = ms == 0 || ms == 1 || ms == 2 || ms == 4 || ms == 8;
        if (arg(c, 6)) put(arg(c, 6), ok ? 1u : 0u);
        return ok ? kOk : kNotAvailable;
    });
    method(d3d, "IDirect3D9::CheckDepthStencilMatch", 6, [](Cpu& c) -> uint32_t {   // (this, adapter, type, adapter format, render target format, depth format)
        const d9::FormatInfo& f = d9::format_info(arg(c, 5));
        return arg(c, 1) == 0 && f.valid && f.depth ? kOk : kNotAvailable;
    });
    method(d3d, "IDirect3D9::CheckDeviceFormatConversion", 5, [](Cpu& c) -> uint32_t {
        const d9::FormatInfo& a = d9::format_info(arg(c, 3));
        const d9::FormatInfo& b = d9::format_info(arg(c, 4));
        return arg(c, 1) == 0 && a.valid && b.valid && !a.depth && !b.depth ? kOk : kNotAvailable;
    });
    method(d3d, "IDirect3D9::GetDeviceCaps", 4, [](Cpu& c) -> uint32_t {   // (this, adapter, type, D3DCAPS9*)
        if (!arg(c, 3) || arg(c, 1) != 0) return kInvalidCall;
        if (arg(c, 2) != kDevTypeHal) return kNotAvailable;
        std::memcpy(ptr<void>(arg(c, 3)), kCapsProfile, sizeof kCapsProfile);
        return kOk;
    });
    method(d3d, "IDirect3D9::GetAdapterMonitor", 2, [](Cpu& c) -> uint32_t { return arg(c, 1) == 0 ? 0x00010001u : 0u; });   // an HMONITOR the guest only compares
    method(d3d, "IDirect3D9::CreateDevice", 7, [g](Cpu& c) -> uint32_t {   // (this, adapter, type, focus window, behaviour, D3DPRESENT_PARAMETERS*, IDirect3DDevice9**)
        Object* d3d_object = g->find(arg(c, 0), Kind::d3d);
        const uint32_t pp_address = arg(c, 5), out = arg(c, 6);
        if (!d3d_object || !pp_address || !out) return kInvalidCall;
        put(out, 0);
        if (arg(c, 1) != 0) return kInvalidCall;
        if (g->dev) { g->impl.platform.log_line("d3d9: CreateDevice refused: a device already exists"); return kNotAvailable; }
        uint32_t pp[14];
        std::memcpy(pp, ptr<const void>(pp_address), sizeof pp);
        const uint32_t window = pp[7] ? pp[7] : arg(c, 3);
        if (!window) return kInvalidCall;
        auto state = std::make_unique<DeviceState>();
        state->d3d = d3d_object->address;
        state->window = window;
        uint32_t ww = 0, wh = 0;
        g->window_size(window, ww, wh);
        std::string error;
        d9::LayerOptions options;
        options.log = layer_log;
#if NFSU2_HAVE_NUE
        if (g->impl.options.d3d9_device) {   // the host's device: NUE's layer on its nue_gfx (the game draws into the NUE window)
            state->host_device = g->impl.options.d3d9_device(window, ww ? ww : 640, wh ? wh : 480, options, error);
            if (!state->host_device) { g->impl.platform.log_line("d3d9: CreateDevice failed: the host gave no device (" + error + ")"); return kNotAvailable; }
            state->layer = &state->host_device->device();
            state->core = &state->host_device->layer();
        } else
#endif
        {
            if (g->impl.options.d3d9_gpu) state->gpu = g->impl.options.d3d9_gpu(window, ww ? ww : 640, wh ? wh : 480, error);
            else state->gpu = std::make_unique<nue::NullGpu>();
            if (!state->gpu) { g->impl.platform.log_line("d3d9: CreateDevice failed: no GPU (" + error + ")"); return kNotAvailable; }
            state->owned_layer = d9::create_layer(*state->gpu, options);
            if (!state->owned_layer) { g->impl.platform.log_line("d3d9: CreateDevice failed: no layer"); return kNotAvailable; }
            state->layer = state->core = state->owned_layer.get();
        }
        g->dev = std::move(state);
        DeviceState& d = *g->dev;
        const d9::DeviceParams params = g->params_from(pp);
        if (d.layer->reset(params) != nue::Status::ok) {
            g->impl.platform.log_line("d3d9: CreateDevice failed: the layer refused the back buffer parameters");
            g->dev.reset();
            return kNotAvailable;
        }
        std::memcpy(d.pp, pp, sizeof pp);
        g->apply_window_mode(pp[8] != 0);
        const uint32_t creation[4] = {arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4)};
        std::memcpy(d.creation, creation, sizeof creation);
        Object& device = g->make(Kind::device);
        d.address = device.address;
        device.device = device.address;
        g->add_ref(*d3d_object);   // the device keeps its IDirect3D9
        g->reset_shadows(d, pp[9] != 0);
        g->make_default_targets(d);
        apply_fpu_mode(c, arg(c, 4));
        std::memcpy(ptr<void>(pp_address), pp, sizeof pp);   // what the runtime filled in (sizes, format, count)
        put(out, device.address);
        g->impl.platform.log_line("d3d9: CreateDevice: behaviour 0x" + [](uint32_t v) { char b[16]; std::snprintf(b, sizeof b, "%x", v); return std::string(b); }(arg(c, 4)) +
                                  ", " + std::to_string(pp[0]) + "x" + std::to_string(pp[1]) + ", format " + std::to_string(pp[2]) + ", depth " + std::to_string(pp[9] ? pp[10] : 0) +
                                  (pp[8] ? ", windowed" : ", full screen") + ", interval " + std::to_string(pp[13]) + ", window " + std::to_string(ww) + "x" + std::to_string(wh));
        return kOk;
    });
    finish(Kind::d3d, d3d);

    // ---- IDirect3DDevice9 (d3d9.h order)
    auto D = [g]() -> DeviceState* { return g->dev.get(); };
    auto L = [g]() -> d9::Device* { return g->layer(); };
    std::vector<uint32_t> dv;
    unknown(dv, Kind::device);
    method(dv, "Device::TestCooperativeLevel", 1, [L](Cpu&) -> uint32_t { auto* l = L(); return l ? to_hresult(l->test_cooperative_level()) : kDeviceLost; });
    method(dv, "Device::GetAvailableTextureMem", 1, [](Cpu&) -> uint32_t { return 1024u * 1024u * 1024u; });
    method(dv, "Device::EvictManagedResources", 1, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::GetDirect3D", 2, [g, D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; g->add_ref(D()->d3d); put(arg(c, 1), D()->d3d); return kOk; });
    method(dv, "Device::GetDeviceCaps", 2, [](Cpu& c) -> uint32_t { if (!arg(c, 1)) return kInvalidCall; std::memcpy(ptr<void>(arg(c, 1)), kCapsProfile, sizeof kCapsProfile); return kOk; });
    method(dv, "Device::GetDisplayMode", 3, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 2)) return kInvalidCall; put_words(arg(c, 2), {D()->pp[0], D()->pp[1], 60, kFmtX8R8G8B8}); return kOk; });
    method(dv, "Device::GetCreationParameters", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; std::memcpy(ptr<void>(arg(c, 1)), D()->creation, 16); return kOk; });
    method(dv, "Device::SetCursorProperties", 4, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::SetCursorPosition", 4, [](Cpu&) -> uint32_t { return 0; });
    method(dv, "Device::ShowCursor", 2, [D](Cpu& c) -> uint32_t { if (!D()) return 0u; const uint32_t old = D()->cursor; D()->cursor = arg(c, 1) ? 1 : 0; return old; });
    method(dv, "Device::CreateAdditionalSwapChain", 3, [g](Cpu&) -> uint32_t { return g->unsupported("CreateAdditionalSwapChain"); });
    method(dv, "Device::GetSwapChain", 3, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) != 0) return kInvalidCall;
        Object& s = g->make(Kind::swap_chain);
        g->add_ref(D()->address);   // a swap chain keeps its device
        put(arg(c, 2), s.address);
        return kOk;
    });
    method(dv, "Device::GetNumberOfSwapChains", 1, [](Cpu&) -> uint32_t { return 1; });
    method(dv, "Device::Reset", 2, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        if (!d || !arg(c, 1)) return kInvalidCall;
        if (d->in_scene) { d->layer->end_scene(); d->in_scene = false; }
        uint32_t pp[14];
        std::memcpy(pp, ptr<const void>(arg(c, 1)), sizeof pp);
        const d9::DeviceParams params = g->params_from(pp);
        const nue::Status status = d->layer->reset(params);
        if (status != nue::Status::ok) return to_hresult(status);
        std::memcpy(d->pp, pp, sizeof pp);
        g->apply_window_mode(pp[8] != 0);
        if (pp[7]) d->window = pp[7];
        g->reset_shadows(*d, pp[9] != 0);
        g->make_default_targets(*d);
        apply_fpu_mode(c, d->creation[3]);
        std::memcpy(ptr<void>(arg(c, 1)), pp, sizeof pp);
        g->impl.platform.log_line("d3d9: Reset: " + std::to_string(pp[0]) + "x" + std::to_string(pp[1]) + " format " + std::to_string(pp[2]) + " depth " + std::to_string(pp[9] ? pp[10] : 0));
        return kOk;
    });
    method(dv, "Device::Present", 5, [g](Cpu& c) -> uint32_t { return g->traced_present(c); });
    method(dv, "Device::GetBackBuffer", 5, [g, D](Cpu& c) -> uint32_t {   // (this, swap chain, index, type, IDirect3DSurface9**)
        if (!D() || !arg(c, 4) || arg(c, 1) != 0 || arg(c, 2) != 0 || !D()->back_buffer) return kInvalidCall;
        g->add_ref(D()->back_buffer);
        put(arg(c, 4), D()->back_buffer);
        return kOk;
    });
    method(dv, "Device::GetRasterStatus", 3, [](Cpu& c) -> uint32_t { if (!arg(c, 2)) return kInvalidCall; put_words(arg(c, 2), {0, 0}); return kOk; });
    method(dv, "Device::SetDialogBoxMode", 2, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::SetGammaRamp", 4, [D](Cpu& c) -> uint32_t { if (D() && arg(c, 3)) std::memcpy(D()->gamma.data(), ptr<const void>(arg(c, 3)), 1536); return 0; });
    method(dv, "Device::GetGammaRamp", 3, [D](Cpu& c) -> uint32_t { if (D() && arg(c, 2)) std::memcpy(ptr<void>(arg(c, 2)), D()->gamma.data(), 1536); return 0; });
    method(dv, "Device::CreateTexture", 9, [g, L](Cpu& c) -> uint32_t {   // (this, width, height, levels, usage, format, pool, IDirect3DTexture9**, shared)
        auto* l = L();
        if (!l || !arg(c, 7)) return kInvalidCall;
        put(arg(c, 7), 0);
        auto r = l->create_texture(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), arg(c, 5), arg(c, 6));
        if (!r) return to_hresult(r.status);
        Object& t = g->make(Kind::texture);
        t.texture = r.value; t.width = arg(c, 1); t.height = arg(c, 2); t.levels = arg(c, 3) ? arg(c, 3) : full_chain(arg(c, 1), arg(c, 2));
        t.usage = arg(c, 4); t.format = arg(c, 5); t.pool = arg(c, 6);
        t.level_surfaces.assign(t.levels, 0);
        put(arg(c, 7), t.address);
        return kOk;
    });
    method(dv, "Device::CreateVolumeTexture", 10, [g](Cpu&) -> uint32_t { return g->unsupported("CreateVolumeTexture"); });
    method(dv, "Device::CreateCubeTexture", 8, [g, L](Cpu& c) -> uint32_t {   // (this, edge, levels, usage, format, pool, IDirect3DCubeTexture9**, shared)
        auto* l = L();
        if (!l || !arg(c, 6)) return kInvalidCall;
        put(arg(c, 6), 0);
        auto r = l->create_cube_texture(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), arg(c, 5));
        if (!r) return to_hresult(r.status);
        Object& t = g->make(Kind::cube_texture);
        t.texture = r.value; t.width = t.height = arg(c, 1); t.levels = arg(c, 2) ? arg(c, 2) : full_chain(arg(c, 1), arg(c, 1));
        t.usage = arg(c, 3); t.format = arg(c, 4); t.pool = arg(c, 5);
        t.level_surfaces.assign(size_t(t.levels) * 6, 0);
        put(arg(c, 6), t.address);
        return kOk;
    });
    auto create_buffer = [g, L](Cpu& c, bool index) -> uint32_t {   // (this, length, usage, fvf or format, pool, out, shared)
        auto* l = L();
        if (!l || !arg(c, 5)) return kInvalidCall;
        put(arg(c, 5), 0);
        auto r = index ? l->create_index_buffer(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4)) : l->create_vertex_buffer(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4));
        if (!r) return to_hresult(r.status);
        Object& b = g->make(index ? Kind::index_buffer : Kind::vertex_buffer);
        b.buffer = r.value; b.bytes = arg(c, 1); b.usage = arg(c, 2); b.fvf = index ? 0 : arg(c, 3); b.format = index ? arg(c, 3) : kFmtVertexData; b.pool = arg(c, 4);
        b.memory = g->guest_alloc(b.bytes);   // the mirror Lock hands out
        put(arg(c, 5), b.address);
        return kOk;
    };
    method(dv, "Device::CreateVertexBuffer", 7, [create_buffer](Cpu& c) { return create_buffer(c, false); });
    method(dv, "Device::CreateIndexBuffer", 7, [create_buffer](Cpu& c) { return create_buffer(c, true); });
    method(dv, "Device::CreateRenderTarget", 9, [g, L](Cpu& c) -> uint32_t {   // (this, width, height, format, multisample, quality, lockable, out, shared)
        auto* l = L();
        if (!l || !arg(c, 7)) return kInvalidCall;
        put(arg(c, 7), 0);
        auto r = l->create_render_target(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4), arg(c, 6) != 0);
        if (!r) return to_hresult(r.status);
        Object& s = g->make(Kind::surface);
        s.surface_kind = SurfaceKind::render_target; s.surface = r.value; s.width = arg(c, 1); s.height = arg(c, 2); s.format = arg(c, 3); s.multisample = arg(c, 4);
        put(arg(c, 7), s.address);
        return kOk;
    });
    method(dv, "Device::CreateDepthStencilSurface", 9, [g, L](Cpu& c) -> uint32_t {   // (this, width, height, format, multisample, quality, discard, out, shared)
        auto* l = L();
        if (!l || !arg(c, 7)) return kInvalidCall;
        put(arg(c, 7), 0);
        auto r = l->create_depth_stencil(arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4));
        if (!r) return to_hresult(r.status);
        Object& s = g->make(Kind::surface);
        s.surface_kind = SurfaceKind::depth_stencil; s.surface = r.value; s.width = arg(c, 1); s.height = arg(c, 2); s.format = arg(c, 3); s.multisample = arg(c, 4);
        put(arg(c, 7), s.address);
        return kOk;
    });
    method(dv, "Device::UpdateSurface", 5, [g](Cpu&) -> uint32_t { return g->unsupported("UpdateSurface"); });
    method(dv, "Device::UpdateTexture", 3, [g, L](Cpu& c) -> uint32_t {
        Object* from = g->texture_of(arg(c, 1));
        Object* to = g->texture_of(arg(c, 2));
        if (!L() || !from || !to) return kInvalidCall;
        const nue::Status s = L()->update_texture(from->texture, to->texture);
        if (s == nue::Status::unsupported) return g->unsupported("UpdateTexture");
        return s == nue::Status::ok ? kOk : kInvalidCall;
    });
    method(dv, "Device::GetRenderTargetData", 3, [g, D](Cpu& c) -> uint32_t {   // (this, render target, system-memory surface)
        Object* from = g->find(arg(c, 1), Kind::surface);
        Object* to = g->find(arg(c, 2), Kind::surface);
        if (!D() || !from || !to) return kInvalidCall;
        if (from->surface_kind != SurfaceKind::back_buffer) return g->unsupported("GetRenderTargetData of a surface other than the back buffer");
        if (to->surface_kind != SurfaceKind::system_memory) return kInvalidCall;
        if (!D()->gpu) return g->unsupported("GetRenderTargetData on the host's nue_gfx device (no read-back through it yet)");
        uint32_t w = 0, h = 0;
        std::vector<std::byte> bgra;
        D()->core->flush();
        if (D()->gpu->read_back(nue::gpu::backbuffer, w, h, bgra) != nue::Status::ok) return kNotAvailable;
        const uint32_t copy_w = std::min(w, to->width), copy_h = std::min(h, to->height);
        for (uint32_t y = 0; y < copy_h; ++y) std::memcpy(ptr<uint8_t>(to->memory) + size_t(y) * to->pitch, bgra.data() + size_t(y) * w * 4, size_t(copy_w) * 4);
        return kOk;
    });
    method(dv, "Device::GetFrontBufferData", 3, [g](Cpu&) -> uint32_t { return g->unsupported("GetFrontBufferData"); });
    method(dv, "Device::StretchRect", 6, [g, L](Cpu& c) -> uint32_t {   // (this, source, source rect, destination, destination rect, filter)
        Object* from = g->find(arg(c, 1), Kind::surface);
        Object* to = g->find(arg(c, 3), Kind::surface);
        if (!L() || !from || !to) return kInvalidCall;
        int32_t a[4] = {}, b[4] = {};
        if (arg(c, 2)) std::memcpy(a, ptr<const void>(arg(c, 2)), 16);
        if (arg(c, 4)) std::memcpy(b, ptr<const void>(arg(c, 4)), 16);
        return to_hresult(L()->stretch_rect(from->surface, arg(c, 2) ? a : nullptr, to->surface, arg(c, 4) ? b : nullptr, arg(c, 5)));
    });
    method(dv, "Device::ColorFill", 4, [g](Cpu&) -> uint32_t { return g->unsupported("ColorFill"); });
    method(dv, "Device::CreateOffscreenPlainSurface", 7, [g](Cpu& c) -> uint32_t {   // (this, width, height, format, pool, out, shared)
        if (!arg(c, 5)) return kInvalidCall;
        put(arg(c, 5), 0);
        if (arg(c, 4) != kPoolSystemMem && arg(c, 4) != kPoolScratch) return g->unsupported("CreateOffscreenPlainSurface in the default pool");
        const d9::FormatInfo& f = d9::format_info(arg(c, 3));
        if (!f.valid || f.depth) return kInvalidCall;
        Object& s = g->make(Kind::surface);
        s.surface_kind = SurfaceKind::system_memory; s.width = arg(c, 1); s.height = arg(c, 2); s.format = arg(c, 3); s.pool = arg(c, 4);
        s.pitch = d9::level_pitch(f, s.width);
        s.memory = g->guest_alloc(d9::level_bytes(f, s.width, s.height));
        put(arg(c, 5), s.address);
        return kOk;
    });
    method(dv, "Device::SetRenderTarget", 3, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        const uint32_t index = arg(c, 1);
        Object* s = arg(c, 2) ? g->find(arg(c, 2), Kind::surface) : nullptr;
        if (!d || index >= 4 || (index == 0 && !s) || (arg(c, 2) && !s)) return kInvalidCall;
        d->layer->set_render_target(index, s ? s->surface : d9::SurfaceId{});
        g->bind(d->render_targets[index], s ? s->address : 0);
        if (index == 0) { const uint32_t vp[6] = {0, 0, s->width, s->height, 0, std::bit_cast<uint32_t>(1.0f)}; std::memcpy(d->viewport, vp, sizeof vp); }   // Direct3D 9 resets the viewport
        return kOk;
    });
    method(dv, "Device::GetRenderTarget", 3, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) >= 4 || !D()->render_targets[arg(c, 1)]) { put(arg(c, 2), 0); return kNotFound; }
        g->add_ref(D()->render_targets[arg(c, 1)]);
        put(arg(c, 2), D()->render_targets[arg(c, 1)]);
        return kOk;
    });
    method(dv, "Device::SetDepthStencilSurface", 2, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        Object* s = arg(c, 1) ? g->find(arg(c, 1), Kind::surface) : nullptr;
        if (!d || (arg(c, 1) && !s)) return kInvalidCall;
        d->layer->set_depth_stencil(s ? s->surface : d9::SurfaceId{});
        g->bind(d->depth_stencil, s ? s->address : 0);
        return kOk;
    });
    method(dv, "Device::GetDepthStencilSurface", 2, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 1)) return kInvalidCall;
        put(arg(c, 1), D()->depth_stencil);
        if (!D()->depth_stencil) return kNotFound;
        g->add_ref(D()->depth_stencil);
        return kOk;
    });
    method(dv, "Device::BeginScene", 1, [D](Cpu&) -> uint32_t { if (!D()) return kInvalidCall; D()->layer->begin_scene(); D()->in_scene = true; return kOk; });
    method(dv, "Device::EndScene", 1, [D](Cpu&) -> uint32_t { if (!D()) return kInvalidCall; D()->layer->end_scene(); D()->in_scene = false; return kOk; });
    method(dv, "Device::Clear", 7, [L](Cpu& c) -> uint32_t {   // (this, count, D3DRECT*, flags, colour, z, stencil)
        if (!L()) return kInvalidCall;
        const uint32_t count = arg(c, 1), rects = arg(c, 2);
        L()->clear(rects && count ? std::span<const int32_t>(ptr<const int32_t>(rects), size_t(count) * 4) : std::span<const int32_t>(), arg(c, 3), arg(c, 4), argf(c, 5), arg(c, 6));
        return kOk;
    });
    method(dv, "Device::SetTransform", 3, [D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2)) return kInvalidCall;
        std::array<float, 16> m;
        std::memcpy(m.data(), ptr<const void>(arg(c, 2)), 64);
        if (!D()->recording) D()->transforms[arg(c, 1)] = m;
        D()->layer->set_transform(arg(c, 1), m.data());
        return kOk;
    });
    auto get_transform = [D](uint32_t type, float* out) {
        auto it = D()->transforms.find(type);
        if (it != D()->transforms.end()) { std::memcpy(out, it->second.data(), 64); return; }
        std::memset(out, 0, 64);
        out[0] = out[5] = out[10] = out[15] = 1.0f;
    };
    method(dv, "Device::GetTransform", 3, [D, get_transform](Cpu& c) -> uint32_t { if (!D() || !arg(c, 2)) return kInvalidCall; get_transform(arg(c, 1), ptr<float>(arg(c, 2))); return kOk; });
    method(dv, "Device::MultiplyTransform", 3, [D, get_transform](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2)) return kInvalidCall;
        float current[16], m[16];
        std::array<float, 16> result{};
        get_transform(arg(c, 1), current);
        std::memcpy(m, ptr<const void>(arg(c, 2)), 64);
        for (int r = 0; r < 4; ++r) for (int k = 0; k < 4; ++k) { float sum = 0; for (int j = 0; j < 4; ++j) sum += current[r * 4 + j] * m[j * 4 + k]; result[size_t(r * 4 + k)] = sum; }
        if (!D()->recording) D()->transforms[arg(c, 1)] = result;
        D()->layer->set_transform(arg(c, 1), result.data());
        return kOk;
    });
    method(dv, "Device::SetViewport", 2, [D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 1)) return kInvalidCall;
        std::memcpy(D()->viewport, ptr<const void>(arg(c, 1)), 24);
        const uint32_t* v = D()->viewport;
        D()->layer->set_viewport(v, std::bit_cast<float>(v[4]), std::bit_cast<float>(v[5]));
        return kOk;
    });
    method(dv, "Device::GetViewport", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; std::memcpy(ptr<void>(arg(c, 1)), D()->viewport, 24); return kOk; });
    method(dv, "Device::SetMaterial", 2, [D](Cpu& c) -> uint32_t {   // D3DMATERIAL9: diffuse, ambient, specular, emissive (4 floats each), power
        if (!D() || !arg(c, 1)) return kInvalidCall;
        std::memcpy(D()->material.data(), ptr<const void>(arg(c, 1)), 68);
        const float* f = ptr<const float>(arg(c, 1));
        d9::MaterialDesc m;
        std::memcpy(m.diffuse, f, 16); std::memcpy(m.ambient, f + 4, 16); std::memcpy(m.specular, f + 8, 16); std::memcpy(m.emissive, f + 12, 16); m.power = f[16];
        D()->layer->set_material(m);
        return kOk;
    });
    method(dv, "Device::GetMaterial", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; std::memcpy(ptr<void>(arg(c, 1)), D()->material.data(), 68); return kOk; });
    method(dv, "Device::SetLight", 3, [D](Cpu& c) -> uint32_t {   // D3DLIGHT9 (104 bytes)
        if (!D() || !arg(c, 2)) return kInvalidCall;
        auto& entry = D()->lights[arg(c, 1)];
        std::memcpy(entry.first.data(), ptr<const void>(arg(c, 2)), 104);
        const uint8_t* b = entry.first.data();
        auto f = [b](unsigned offset) { float v; std::memcpy(&v, b + offset, 4); return v; };
        d9::LightDesc l;
        std::memcpy(&l.type, b, 4);
        for (int k = 0; k < 4; ++k) { l.diffuse[k] = f(4 + 4 * k); l.specular[k] = f(20 + 4 * k); l.ambient[k] = f(36 + 4 * k); }
        for (int k = 0; k < 3; ++k) { l.position[k] = f(52 + 4 * k); l.direction[k] = f(64 + 4 * k); l.attenuation[k] = f(84 + 4 * k); }
        l.range = f(76); l.falloff = f(80); l.theta = f(96); l.phi = f(100);
        D()->layer->set_light(arg(c, 1), l);
        return kOk;
    });
    method(dv, "Device::GetLight", 3, [D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2)) return kInvalidCall;
        auto it = D()->lights.find(arg(c, 1));
        if (it == D()->lights.end()) return kInvalidCall;
        std::memcpy(ptr<void>(arg(c, 2)), it->second.first.data(), 104);
        return kOk;
    });
    method(dv, "Device::LightEnable", 3, [D](Cpu& c) -> uint32_t { if (!D()) return kInvalidCall; D()->lights[arg(c, 1)].second = arg(c, 2) ? 1 : 0; D()->layer->light_enable(arg(c, 1), arg(c, 2) != 0); return kOk; });
    method(dv, "Device::GetLightEnable", 3, [D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2)) return kInvalidCall;
        auto it = D()->lights.find(arg(c, 1));
        if (it == D()->lights.end()) return kInvalidCall;
        put(arg(c, 2), it->second.second);
        return kOk;
    });
    method(dv, "Device::SetClipPlane", 3, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::GetClipPlane", 3, [](Cpu& c) -> uint32_t { if (arg(c, 2)) put_words(arg(c, 2), {0, 0, 0, 0}); return kOk; });
    method(dv, "Device::SetRenderState", 3, [D](Cpu& c) -> uint32_t {
        if (!D()) return kInvalidCall;
        if (!D()->recording && arg(c, 1) < 256) D()->render_state[arg(c, 1)] = arg(c, 2);
        D()->layer->set_render_state(arg(c, 1), arg(c, 2));
        return kOk;
    });
    method(dv, "Device::GetRenderState", 3, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 2) || arg(c, 1) >= 256) return kInvalidCall; put(arg(c, 2), D()->render_state[arg(c, 1)]); return kOk; });
    method(dv, "Device::CreateStateBlock", 3, [g, D](Cpu& c) -> uint32_t {   // captures the current state (all three types capture the same set; the game uses Begin/End)
        DeviceState* d = D();
        if (!d || !arg(c, 2) || d->recording) return kInvalidCall;
        d9::Device& l = *d->layer;
        const d9::StateBlockId id = l.begin_state_block();
        for (uint32_t i = 0; i < 256; ++i) if (d->render_state[i] || i == 7) l.set_render_state(i, d->render_state[i]);
        for (uint32_t s = 0; s < 16; ++s) for (uint32_t t = 1; t < 14; ++t) l.set_sampler_state(s, t, d->sampler[s][t]);
        for (uint32_t s = 0; s < 8; ++s) for (uint32_t t = 1; t < 33; ++t) l.set_texture_stage_state(s, t, d->stage[s][t]);
        l.end_state_block(id);
        Object& b = g->make(Kind::state_block);
        b.block = id;
        put(arg(c, 2), b.address);
        return kOk;
    });
    method(dv, "Device::BeginStateBlock", 1, [D](Cpu&) -> uint32_t {
        if (!D() || D()->recording) return kInvalidCall;
        D()->recording_id = D()->layer->begin_state_block();
        D()->recording = true;
        return kOk;
    });
    method(dv, "Device::EndStateBlock", 2, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 1) || !D()->recording) return kInvalidCall;
        D()->layer->end_state_block(D()->recording_id);
        D()->recording = false;
        Object& b = g->make(Kind::state_block);
        b.block = D()->recording_id;
        put(arg(c, 1), b.address);
        return kOk;
    });
    method(dv, "Device::SetClipStatus", 2, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::GetClipStatus", 2, [](Cpu& c) -> uint32_t { if (arg(c, 1)) put_words(arg(c, 1), {0, 0}); return kOk; });
    method(dv, "Device::GetTexture", 3, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) >= 16) return kInvalidCall;
        const uint32_t t = D()->textures[arg(c, 1)];
        if (t) g->add_ref(t);
        put(arg(c, 2), t);
        return kOk;
    });
    method(dv, "Device::SetTexture", 3, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        if (!d) return kInvalidCall;
        if (arg(c, 1) >= 16) return kOk;   // displacement-map and vertex-texture samplers
        Object* t = arg(c, 2) ? g->texture_of(arg(c, 2)) : nullptr;
        if (arg(c, 2) && !t) return kInvalidCall;
        d->layer->set_texture(arg(c, 1), t ? t->texture : d9::TextureId{});
        if (!d->recording) g->bind(d->textures[arg(c, 1)], t ? t->address : 0);
        return kOk;
    });
    method(dv, "Device::GetTextureStageState", 4, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 3) || arg(c, 1) >= 8 || arg(c, 2) >= 33) return kInvalidCall; put(arg(c, 3), D()->stage[arg(c, 1)][arg(c, 2)]); return kOk; });
    method(dv, "Device::SetTextureStageState", 4, [D](Cpu& c) -> uint32_t {
        if (!D()) return kInvalidCall;
        if (arg(c, 1) >= 8 || arg(c, 2) >= 33) return kOk;
        if (!D()->recording) D()->stage[arg(c, 1)][arg(c, 2)] = arg(c, 3);
        D()->layer->set_texture_stage_state(arg(c, 1), arg(c, 2), arg(c, 3));
        return kOk;
    });
    method(dv, "Device::GetSamplerState", 4, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 3) || arg(c, 1) >= 16 || arg(c, 2) >= 14) return kInvalidCall; put(arg(c, 3), D()->sampler[arg(c, 1)][arg(c, 2)]); return kOk; });
    method(dv, "Device::SetSamplerState", 4, [D](Cpu& c) -> uint32_t {
        if (!D()) return kInvalidCall;
        if (arg(c, 1) >= 16 || arg(c, 2) >= 14) return kOk;
        if (!D()->recording) D()->sampler[arg(c, 1)][arg(c, 2)] = arg(c, 3);
        D()->layer->set_sampler_state(arg(c, 1), arg(c, 2), arg(c, 3));
        return kOk;
    });
    method(dv, "Device::ValidateDevice", 2, [](Cpu& c) -> uint32_t { put(arg(c, 1), 1); return kOk; });
    method(dv, "Device::SetPaletteEntries", 3, [](Cpu&) -> uint32_t { return kInvalidCall; });
    method(dv, "Device::GetPaletteEntries", 3, [](Cpu&) -> uint32_t { return kInvalidCall; });
    method(dv, "Device::SetCurrentTexturePalette", 2, [](Cpu&) -> uint32_t { return kInvalidCall; });
    method(dv, "Device::GetCurrentTexturePalette", 2, [](Cpu&) -> uint32_t { return kInvalidCall; });
    method(dv, "Device::SetScissorRect", 2, [D](Cpu& c) -> uint32_t { if (D() && arg(c, 1)) std::memcpy(D()->scissor, ptr<const void>(arg(c, 1)), 16); return kOk; });
    method(dv, "Device::GetScissorRect", 2, [D](Cpu& c) -> uint32_t { if (D() && arg(c, 1)) std::memcpy(ptr<void>(arg(c, 1)), D()->scissor, 16); return kOk; });
    method(dv, "Device::SetSoftwareVertexProcessing", 2, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::GetSoftwareVertexProcessing", 1, [](Cpu&) -> uint32_t { return 0; });
    method(dv, "Device::SetNPatchMode", 2, [](Cpu&) -> uint32_t { return kOk; });
    method(dv, "Device::GetNPatchMode", 1, not_served("IDirect3DDevice9::GetNPatchMode (returns a float on the x87 stack)"));
    method(dv, "Device::DrawPrimitive", 4, [g](Cpu&) -> uint32_t { return g->unsupported("DrawPrimitive"); });
    method(dv, "Device::DrawIndexedPrimitive", 7, [L](Cpu& c) -> uint32_t {   // (this, type, base vertex, min vertex, vertex count, start index, primitive count)
        if (!L()) return kInvalidCall;
        L()->draw_indexed(arg(c, 1), int32_t(arg(c, 2)), arg(c, 3), arg(c, 4), arg(c, 5), arg(c, 6));
        return kOk;
    });
    method(dv, "Device::DrawPrimitiveUP", 5, [L](Cpu& c) -> uint32_t {   // (this, type, primitive count, vertices, stride)
        if (!L() || !arg(c, 3) || !arg(c, 4)) return kInvalidCall;
        const size_t bytes = size_t(vertices_for(arg(c, 1), arg(c, 2))) * arg(c, 4);
        L()->draw_up(arg(c, 1), arg(c, 2), nue::Bytes(ptr<const std::byte>(arg(c, 3)), bytes), arg(c, 4));
        return kOk;
    });
    method(dv, "Device::DrawIndexedPrimitiveUP", 9, [g](Cpu&) -> uint32_t { return g->unsupported("DrawIndexedPrimitiveUP"); });
    method(dv, "Device::ProcessVertices", 7, [g](Cpu&) -> uint32_t { return g->unsupported("ProcessVertices"); });
    method(dv, "Device::CreateVertexDeclaration", 3, [g, L](Cpu& c) -> uint32_t {   // (this, D3DVERTEXELEMENT9*, out): 8-byte elements up to the one with stream 0xFF
        if (!L() || !arg(c, 1) || !arg(c, 2)) return kInvalidCall;
        put(arg(c, 2), 0);
        const uint8_t* e = ptr<const uint8_t>(arg(c, 1));
        size_t count = 0;
        while (count < 64 && !(e[count * 8] == 0xFF && e[count * 8 + 1] == 0)) ++count;
        if (count >= 64) return kInvalidCall;
        std::vector<uint8_t> copy(e, e + (count + 1) * 8);   // with the end marker
        auto r = L()->create_vertex_declaration(std::span<const uint8_t>(copy.data(), copy.size()));
        if (!r) return to_hresult(r.status);
        Object& d = g->make(Kind::declaration);
        d.declaration = r.value;
        d.blob = std::move(copy);
        put(arg(c, 2), d.address);
        return kOk;
    });
    method(dv, "Device::SetVertexDeclaration", 2, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        Object* decl = arg(c, 1) ? g->find(arg(c, 1), Kind::declaration) : nullptr;
        if (!d || (arg(c, 1) && !decl)) return kInvalidCall;
        d->layer->set_vertex_declaration(decl ? decl->declaration : d9::DeclarationId{});
        if (!d->recording) { g->bind(d->declaration, decl ? decl->address : 0); d->fvf = 0; }
        return kOk;
    });
    method(dv, "Device::GetVertexDeclaration", 2, [g, D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; if (D()->declaration) g->add_ref(D()->declaration); put(arg(c, 1), D()->declaration); return kOk; });
    method(dv, "Device::SetFVF", 2, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        if (!d) return kInvalidCall;
        d->layer->set_fvf(arg(c, 1));
        if (!d->recording) { d->fvf = arg(c, 1); g->bind(d->declaration, 0); }
        return kOk;
    });
    method(dv, "Device::GetFVF", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; put(arg(c, 1), D()->fvf); return kOk; });
    auto create_shader = [g, L](Cpu& c, bool pixel) -> uint32_t {   // (this, tokens, out)
        if (!L() || !arg(c, 1) || !arg(c, 2)) return kInvalidCall;
        put(arg(c, 2), 0);
        const uint32_t* tokens = ptr<const uint32_t>(arg(c, 1));
        const size_t n = nue::shader::token_count(tokens);
        if (!n) return kInvalidCall;
        std::vector<uint8_t> copy(reinterpret_cast<const uint8_t*>(tokens), reinterpret_cast<const uint8_t*>(tokens + n));
        const std::span<const uint32_t> code(tokens, n);
        auto r = pixel ? L()->create_pixel_shader(code) : L()->create_vertex_shader(code);
        if (!r) return to_hresult(r.status);
        Object& s = g->make(pixel ? Kind::pixel_shader : Kind::vertex_shader);
        s.shader = r.value;
        s.blob = std::move(copy);
        put(arg(c, 2), s.address);
        return kOk;
    };
    auto set_shader = [g, D](Cpu& c, bool pixel) -> uint32_t {
        DeviceState* d = D();
        Object* s = arg(c, 1) ? g->find(arg(c, 1), pixel ? Kind::pixel_shader : Kind::vertex_shader) : nullptr;
        if (!d || (arg(c, 1) && !s)) return kInvalidCall;
        if (pixel) d->layer->set_pixel_shader(s ? s->shader : d9::ShaderId{}); else d->layer->set_vertex_shader(s ? s->shader : d9::ShaderId{});
        if (!d->recording) g->bind(pixel ? d->pixel_shader : d->vertex_shader, s ? s->address : 0);
        return kOk;
    };
    auto get_shader = [g, D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 1)) return kInvalidCall;
        const uint32_t s = pixel ? D()->pixel_shader : D()->vertex_shader;
        if (s) g->add_ref(s);
        put(arg(c, 1), s);
        return kOk;
    };
    // (this, start, data, count)
    auto set_f = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > (pixel ? 224u : 256u)) return kInvalidCall;
        const std::span<const d9::Float4> v(ptr<const d9::Float4>(arg(c, 2)), arg(c, 3));
        if (pixel) D()->layer->set_pixel_shader_constants_f(arg(c, 1), v); else D()->layer->set_vertex_shader_constants_f(arg(c, 1), v);
        return kOk;
    };
    auto get_f = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > (pixel ? 224u : 256u)) return kInvalidCall;
        return D()->layer->get_shader_constants_f(pixel, arg(c, 1), ptr<d9::Float4>(arg(c, 2)), arg(c, 3)) ? kOk : kInvalidCall;
    };
    auto set_i = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > 16) return kInvalidCall;
        if (!D()->recording) std::memcpy(pixel ? D()->ps_i[arg(c, 1)] : D()->vs_i[arg(c, 1)], ptr<const void>(arg(c, 2)), size_t(arg(c, 3)) * 16);
        const std::span<const d9::Int4> v(ptr<const d9::Int4>(arg(c, 2)), arg(c, 3));
        if (pixel) D()->layer->set_pixel_shader_constants_i(arg(c, 1), v); else D()->layer->set_vertex_shader_constants_i(arg(c, 1), v);
        return kOk;
    };
    auto get_i = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > 16) return kInvalidCall;
        std::memcpy(ptr<void>(arg(c, 2)), pixel ? D()->ps_i[arg(c, 1)] : D()->vs_i[arg(c, 1)], size_t(arg(c, 3)) * 16);
        return kOk;
    };
    auto set_b = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > 16) return kInvalidCall;
        uint32_t values[16];
        const uint32_t* in = ptr<const uint32_t>(arg(c, 2));
        for (uint32_t i = 0; i < arg(c, 3); ++i) { values[i] = in[i] ? 1u : 0u; if (!D()->recording) (pixel ? D()->ps_b : D()->vs_b)[arg(c, 1) + i] = in[i]; }
        const std::span<const uint32_t> v(values, arg(c, 3));
        if (pixel) D()->layer->set_pixel_shader_constants_b(arg(c, 1), v); else D()->layer->set_vertex_shader_constants_b(arg(c, 1), v);
        return kOk;
    };
    auto get_b = [D](Cpu& c, bool pixel) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) + arg(c, 3) > 16) return kInvalidCall;
        std::memcpy(ptr<void>(arg(c, 2)), &(pixel ? D()->ps_b : D()->vs_b)[arg(c, 1)], size_t(arg(c, 3)) * 4);
        return kOk;
    };
    method(dv, "Device::CreateVertexShader", 3, [create_shader](Cpu& c) { return create_shader(c, false); });
    method(dv, "Device::SetVertexShader", 2, [set_shader](Cpu& c) { return set_shader(c, false); });
    method(dv, "Device::GetVertexShader", 2, [get_shader](Cpu& c) { return get_shader(c, false); });
    method(dv, "Device::SetVertexShaderConstantF", 4, [set_f](Cpu& c) { return set_f(c, false); });
    method(dv, "Device::GetVertexShaderConstantF", 4, [get_f](Cpu& c) { return get_f(c, false); });
    method(dv, "Device::SetVertexShaderConstantI", 4, [set_i](Cpu& c) { return set_i(c, false); });
    method(dv, "Device::GetVertexShaderConstantI", 4, [get_i](Cpu& c) { return get_i(c, false); });
    method(dv, "Device::SetVertexShaderConstantB", 4, [set_b](Cpu& c) { return set_b(c, false); });
    method(dv, "Device::GetVertexShaderConstantB", 4, [get_b](Cpu& c) { return get_b(c, false); });
    method(dv, "Device::SetStreamSource", 5, [g, D](Cpu& c) -> uint32_t {   // (this, stream, buffer, offset, stride)
        DeviceState* d = D();
        Object* b = arg(c, 2) ? g->find(arg(c, 2), Kind::vertex_buffer) : nullptr;
        if (!d || arg(c, 1) >= 16 || (arg(c, 2) && !b)) return kInvalidCall;
        d->layer->set_stream_source(arg(c, 1), b ? b->buffer : d9::BufferId{}, arg(c, 3), arg(c, 4));
        if (!d->recording) { g->bind(d->streams[arg(c, 1)], b ? b->address : 0); d->stream_offset[arg(c, 1)] = arg(c, 3); d->stream_stride[arg(c, 1)] = arg(c, 4); }
        return kOk;
    });
    method(dv, "Device::GetStreamSource", 5, [g, D](Cpu& c) -> uint32_t {
        if (!D() || !arg(c, 2) || arg(c, 1) >= 16) return kInvalidCall;
        const uint32_t b = D()->streams[arg(c, 1)];
        if (b) g->add_ref(b);
        put(arg(c, 2), b);
        put(arg(c, 3), D()->stream_offset[arg(c, 1)]);
        put(arg(c, 4), D()->stream_stride[arg(c, 1)]);
        return kOk;
    });
    method(dv, "Device::SetStreamSourceFreq", 3, [g](Cpu& c) -> uint32_t { return arg(c, 2) <= 1 ? kOk : g->unsupported("SetStreamSourceFreq (instancing)"); });
    method(dv, "Device::GetStreamSourceFreq", 3, [](Cpu& c) -> uint32_t { put(arg(c, 2), 1); return kOk; });
    method(dv, "Device::SetIndices", 2, [g, D](Cpu& c) -> uint32_t {
        DeviceState* d = D();
        Object* b = arg(c, 1) ? g->find(arg(c, 1), Kind::index_buffer) : nullptr;
        if (!d || (arg(c, 1) && !b)) return kInvalidCall;
        d->layer->set_indices(b ? b->buffer : d9::BufferId{});
        if (!d->recording) g->bind(d->indices, b ? b->address : 0);
        return kOk;
    });
    method(dv, "Device::GetIndices", 2, [g, D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; if (D()->indices) g->add_ref(D()->indices); put(arg(c, 1), D()->indices); return kOk; });
    method(dv, "Device::CreatePixelShader", 3, [create_shader](Cpu& c) { return create_shader(c, true); });
    method(dv, "Device::SetPixelShader", 2, [set_shader](Cpu& c) { return set_shader(c, true); });
    method(dv, "Device::GetPixelShader", 2, [get_shader](Cpu& c) { return get_shader(c, true); });
    method(dv, "Device::SetPixelShaderConstantF", 4, [set_f](Cpu& c) { return set_f(c, true); });
    method(dv, "Device::GetPixelShaderConstantF", 4, [get_f](Cpu& c) { return get_f(c, true); });
    method(dv, "Device::SetPixelShaderConstantI", 4, [set_i](Cpu& c) { return set_i(c, true); });
    method(dv, "Device::GetPixelShaderConstantI", 4, [get_i](Cpu& c) { return get_i(c, true); });
    method(dv, "Device::SetPixelShaderConstantB", 4, [set_b](Cpu& c) { return set_b(c, true); });
    method(dv, "Device::GetPixelShaderConstantB", 4, [get_b](Cpu& c) { return get_b(c, true); });
    method(dv, "Device::DrawRectPatch", 4, [g](Cpu&) -> uint32_t { return g->unsupported("DrawRectPatch"); });
    method(dv, "Device::DrawTriPatch", 4, [g](Cpu&) -> uint32_t { return g->unsupported("DrawTriPatch"); });
    method(dv, "Device::DeletePatch", 2, [g](Cpu&) -> uint32_t { return g->unsupported("DeletePatch"); });
    method(dv, "Device::CreateQuery", 3, [g](Cpu& c) -> uint32_t { put(arg(c, 2), 0); return g->unsupported("CreateQuery"); });   // the game falls back when queries are not offered
    if (dv.size() != 119) throw Fault("the IDirect3DDevice9 vtable has " + std::to_string(dv.size()) + " slots instead of 119");
    finish(Kind::device, dv);

    // ---- IDirect3DTexture9 and IDirect3DCubeTexture9
    std::vector<uint32_t> tx;
    unknown(tx, Kind::texture);
    resource(tx, kTypeTexture);
    base_texture(tx);
    method(tx, "Texture::GetLevelDesc", 3, [g](Cpu& c) -> uint32_t {
        Object* t = g->find(arg(c, 0), Kind::texture);
        if (!t || !arg(c, 2) || arg(c, 1) >= t->levels) return kInvalidCall;
        g->surface_desc(arg(c, 2), t->format, kTypeSurface, t->usage, t->pool, 0, mip(t->width, arg(c, 1)), mip(t->height, arg(c, 1)));
        return kOk;
    });
    method(tx, "Texture::GetSurfaceLevel", 3, [g, level_surface](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::texture); return t ? level_surface(*t, 0, arg(c, 1), arg(c, 2)) : kInvalidCall; });
    method(tx, "Texture::LockRect", 5, [g](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::texture); return t ? g->lock_texture(*t, arg(c, 1), 0, arg(c, 2), arg(c, 3), arg(c, 4)) : kInvalidCall; });
    method(tx, "Texture::UnlockRect", 2, [g](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::texture); return t ? g->unlock_texture(*t, arg(c, 1), 0) : kInvalidCall; });
    method(tx, "Texture::AddDirtyRect", 2, [](Cpu&) -> uint32_t { return kOk; });
    finish(Kind::texture, tx);

    std::vector<uint32_t> cb;
    unknown(cb, Kind::cube_texture);
    resource(cb, kTypeCubeTexture);
    base_texture(cb);
    method(cb, "CubeTexture::GetLevelDesc", 3, [g](Cpu& c) -> uint32_t {
        Object* t = g->find(arg(c, 0), Kind::cube_texture);
        if (!t || !arg(c, 2) || arg(c, 1) >= t->levels) return kInvalidCall;
        g->surface_desc(arg(c, 2), t->format, kTypeSurface, t->usage, t->pool, 0, mip(t->width, arg(c, 1)), mip(t->width, arg(c, 1)));
        return kOk;
    });
    method(cb, "CubeTexture::GetCubeMapSurface", 4, [g, level_surface](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::cube_texture); return t ? level_surface(*t, arg(c, 1), arg(c, 2), arg(c, 3)) : kInvalidCall; });
    method(cb, "CubeTexture::LockRect", 6, [g](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::cube_texture); return t ? g->lock_texture(*t, arg(c, 2), arg(c, 1), arg(c, 3), arg(c, 4), arg(c, 5)) : kInvalidCall; });
    method(cb, "CubeTexture::UnlockRect", 3, [g](Cpu& c) -> uint32_t { Object* t = g->find(arg(c, 0), Kind::cube_texture); return t ? g->unlock_texture(*t, arg(c, 2), arg(c, 1)) : kInvalidCall; });
    method(cb, "CubeTexture::AddDirtyRect", 3, [](Cpu&) -> uint32_t { return kOk; });
    finish(Kind::cube_texture, cb);

    // ---- IDirect3DVertexBuffer9 and IDirect3DIndexBuffer9: Lock, Unlock, GetDesc
    for (const bool index : {false, true}) {
        const Kind k = index ? Kind::index_buffer : Kind::vertex_buffer;
        std::vector<uint32_t> bt;
        unknown(bt, k);
        resource(bt, index ? kTypeIndexBuffer : kTypeVertexBuffer);
        method(bt, index ? "IndexBuffer::Lock" : "VertexBuffer::Lock", 5, [g, k](Cpu& c) -> uint32_t { Object* b = g->find(arg(c, 0), k); return b ? g->lock_buffer(*b, arg(c, 1), arg(c, 2), arg(c, 3), arg(c, 4)) : kInvalidCall; });
        method(bt, index ? "IndexBuffer::Unlock" : "VertexBuffer::Unlock", 1, [g, k](Cpu& c) -> uint32_t { Object* b = g->find(arg(c, 0), k); return b ? g->unlock_buffer(*b) : kInvalidCall; });
        method(bt, index ? "IndexBuffer::GetDesc" : "VertexBuffer::GetDesc", 2, [g, k, index](Cpu& c) -> uint32_t {
            Object* b = g->find(arg(c, 0), k);
            if (!b || !arg(c, 1)) return kInvalidCall;
            if (index) put_words(arg(c, 1), {b->format, kTypeIndexBuffer, b->usage, b->pool, b->bytes});
            else put_words(arg(c, 1), {kFmtVertexData, kTypeVertexBuffer, b->usage, b->pool, b->bytes, b->fvf});
            return kOk;
        });
        finish(k, bt);
    }

    // ---- IDirect3DSurface9: GetContainer, GetDesc, LockRect, UnlockRect, GetDC, ReleaseDC
    std::vector<uint32_t> sf;
    unknown(sf, Kind::surface);
    resource(sf, kTypeSurface);
    method(sf, "Surface::GetContainer", 3, [g](Cpu& c) -> uint32_t {   // (this, riid, out)
        Object* s = g->find(arg(c, 0), Kind::surface);
        if (!s || !arg(c, 2)) return kInvalidCall;
        if (Object* t = g->find(s->container)) return g->query_interface(*t, arg(c, 1), arg(c, 2));
        if (Object* d = g->find(s->device, Kind::device)) return g->query_interface(*d, arg(c, 1), arg(c, 2));
        put(arg(c, 2), 0);
        return kNoInterface;
    });
    method(sf, "Surface::GetDesc", 2, [g](Cpu& c) -> uint32_t { Object* s = g->find(arg(c, 0), Kind::surface); if (!s || !arg(c, 1)) return kInvalidCall; g->surface_desc(arg(c, 1), *s); return kOk; });
    method(sf, "Surface::LockRect", 4, [g](Cpu& c) -> uint32_t {   // (this, D3DLOCKED_RECT*, rect, flags)
        Object* s = g->find(arg(c, 0), Kind::surface);
        if (!s || !arg(c, 1)) return kInvalidCall;
        if (s->surface_kind == SurfaceKind::texture_level) {
            Object* t = g->find(s->container);
            if (!t) return kInvalidCall;
            const uint32_t r = g->lock_texture(*t, s->level, s->face, arg(c, 1), arg(c, 2), arg(c, 3));
            if (r == kOk) s->surface_locked = true;
            return r;
        }
        if (s->surface_kind != SurfaceKind::system_memory) return kInvalidCall;   // render targets cannot be locked
        const d9::FormatInfo& f = d9::format_info(s->format);
        int32_t rect[4] = {};
        if (arg(c, 2)) std::memcpy(rect, ptr<const void>(arg(c, 2)), 16);
        const uint32_t x = uint32_t(std::max(0, rect[0])), y = uint32_t(std::max(0, rect[1]));
        if (x >= s->width || y >= s->height) return kInvalidCall;
        put_words(arg(c, 1), {s->pitch, s->memory + (y / f.block_h) * s->pitch + (x / f.block_w) * f.block_bytes});
        s->surface_locked = true;
        return kOk;
    });
    method(sf, "Surface::UnlockRect", 1, [g](Cpu& c) -> uint32_t {
        Object* s = g->find(arg(c, 0), Kind::surface);
        if (!s || !s->surface_locked) return kInvalidCall;
        s->surface_locked = false;
        if (s->surface_kind != SurfaceKind::texture_level) return kOk;
        Object* t = g->find(s->container);
        return t ? g->unlock_texture(*t, s->level, s->face) : kInvalidCall;
    });
    method(sf, "Surface::GetDC", 2, [g](Cpu&) -> uint32_t { return g->unsupported("IDirect3DSurface9::GetDC"); });
    method(sf, "Surface::ReleaseDC", 2, [](Cpu&) -> uint32_t { return kInvalidCall; });
    finish(Kind::surface, sf);

    // ---- IDirect3DVertexDeclaration9, the shaders, IDirect3DStateBlock9
    std::vector<uint32_t> dc;
    unknown(dc, Kind::declaration);
    method(dc, "VertexDeclaration::GetDevice", 2, get_device);
    method(dc, "VertexDeclaration::GetDeclaration", 3, [g](Cpu& c) -> uint32_t {   // (this, elements, &count)
        Object* d = g->find(arg(c, 0), Kind::declaration);
        if (!d || !arg(c, 2)) return kInvalidCall;
        if (arg(c, 1)) std::memcpy(ptr<void>(arg(c, 1)), d->blob.data(), d->blob.size());
        put(arg(c, 2), uint32_t(d->blob.size() / 8));
        return kOk;
    });
    finish(Kind::declaration, dc);
    for (const bool pixel : {false, true}) {
        const Kind k = pixel ? Kind::pixel_shader : Kind::vertex_shader;
        std::vector<uint32_t> sh;
        unknown(sh, k);
        method(sh, pixel ? "PixelShader::GetDevice" : "VertexShader::GetDevice", 2, get_device);
        method(sh, pixel ? "PixelShader::GetFunction" : "VertexShader::GetFunction", 3, [g, k](Cpu& c) -> uint32_t {   // (this, data, &size)
            Object* s = g->find(arg(c, 0), k);
            if (!s || !arg(c, 2)) return kInvalidCall;
            if (arg(c, 1)) std::memcpy(ptr<void>(arg(c, 1)), s->blob.data(), s->blob.size());
            put(arg(c, 2), uint32_t(s->blob.size()));
            return kOk;
        });
        finish(k, sh);
    }
    std::vector<uint32_t> sb;
    unknown(sb, Kind::state_block);
    method(sb, "StateBlock::GetDevice", 2, get_device);
    method(sb, "StateBlock::Capture", 1, [](Cpu&) -> uint32_t { return kOk; });   // as the dll: the block keeps what was recorded when it was made
    method(sb, "StateBlock::Apply", 1, [g](Cpu& c) -> uint32_t { Object* b = g->find(arg(c, 0), Kind::state_block); if (!b || !g->layer()) return kInvalidCall; g->layer()->apply(b->block); return kOk; });
    finish(Kind::state_block, sb);

    // ---- IDirect3DSwapChain9: Present, GetFrontBufferData, GetBackBuffer, GetRasterStatus, GetDisplayMode, GetDevice, GetPresentParameters
    std::vector<uint32_t> sc;
    unknown(sc, Kind::swap_chain);
    method(sc, "SwapChain::Present", 6, [g](Cpu& c) -> uint32_t { return g->traced_present(c); });
    method(sc, "SwapChain::GetFrontBufferData", 2, [g](Cpu&) -> uint32_t { return g->unsupported("IDirect3DSwapChain9::GetFrontBufferData"); });
    method(sc, "SwapChain::GetBackBuffer", 4, [g, D](Cpu& c) -> uint32_t {   // (this, index, type, out)
        if (!D() || !arg(c, 3) || arg(c, 1) != 0 || !D()->back_buffer) return kInvalidCall;
        g->add_ref(D()->back_buffer);
        put(arg(c, 3), D()->back_buffer);
        return kOk;
    });
    method(sc, "SwapChain::GetRasterStatus", 2, [](Cpu& c) -> uint32_t { if (!arg(c, 1)) return kInvalidCall; put_words(arg(c, 1), {0, 0}); return kOk; });
    method(sc, "SwapChain::GetDisplayMode", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; put_words(arg(c, 1), {D()->pp[0], D()->pp[1], 60, kFmtX8R8G8B8}); return kOk; });
    method(sc, "SwapChain::GetDevice", 2, get_device);
    method(sc, "SwapChain::GetPresentParameters", 2, [D](Cpu& c) -> uint32_t { if (!D() || !arg(c, 1)) return kInvalidCall; std::memcpy(ptr<void>(arg(c, 1)), D()->pp, 56); return kOk; });
    finish(Kind::swap_chain, sc);

    // Direct3DCreate9(SDK version): the entry point
    impl.on("Direct3DCreate9", 1, [g](Cpu&) -> uint32_t {
        std::lock_guard lock(g->m);
        Object& o = g->make(Kind::d3d);
        g->impl.platform.log_line("d3d9: Direct3DCreate9: capabilities from the built-in Shader Model 3 profile; display modes: " + std::to_string(g->modes.size()));
        return o.address;
    });
}

#if NFSU2_HAVE_NUE
decltype(Win32LayerOptions::d3d9_device) d3d9_device_on_nue_gfx(nue_gfx gfx) {
    return [gfx](uint32_t, uint32_t, uint32_t, const d9::LayerOptions& options, std::string& error) -> std::unique_ptr<d9::GfxDevice> {
        if (!gfx) { error = "no nue_gfx context"; return nullptr; }
        return d9::create_gfx_device(gfx, options, error);   // MANAGED context made on this thread; the back buffer size comes with the game's Reset
    };
}
#endif

}  // namespace nfsu2raw
