// The Direct3D 9 group of the Win32 facade on Platform64, called the way translated code calls it: Direct3DCreate9 through its import token, then every
// method through the token in the object's vtable, with stdcall words on a guest stack. The device runs on the null GPU (no window, no GPU).
//     d3d9_facade_tests <export dir> <game dir>
#include "platform64.hpp"
#include "win32_facade.hpp"
#include <bit>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace nfsu2raw;
namespace {
int failures = 0;
void check(bool ok, const std::string& what) { if (!ok) { ++failures; std::cerr << "FAIL: " << what << '\n'; } }

constexpr uint32_t kOk = 0, kInvalidCall = 0x8876086Cu, kNotAvailable = 0x8876086Au;

struct Guest {
    Platform64& platform;
    Cpu& cpu;
    uint32_t base_sp;
    uint32_t call_token(uint32_t token, std::initializer_list<uint32_t> args) {
        const uint32_t sp = base_sp;
        wr<4>(cpu, 16, sp);
        wm<4>(cpu, sp, Platform64::return_sentinel);
        unsigned i = 0;
        for (uint32_t a : args) wm<4>(cpu, sp + 4 + 4 * i++, a);
        cpu.pc = token;
        if (!platform.dispatch(cpu)) throw Fault("not a token");
        if (cpu.pc != Platform64::return_sentinel) throw Fault("did not return to the caller");
        if (uint32_t(r<4>(cpu, 16)) != sp + 4 + 4 * uint32_t(args.size())) throw Fault("the callee did not remove its arguments");
        return uint32_t(r<4>(cpu, 0));
    }
    uint32_t call(const char* name, std::initializer_list<uint32_t> args) {
        const uint32_t token = platform.import_token(name);
        if (!token) throw Fault(std::string("the game does not import ") + name);
        return call_token(token, args);
    }
    // a COM call: slot `slot` of the object's vtable, `this` first
    uint32_t com(uint32_t object, unsigned slot, std::initializer_list<uint32_t> args) {
        const uint32_t vtable = uint32_t(m<4>(cpu, object));
        std::vector<uint32_t> all{object};
        all.insert(all.end(), args.begin(), args.end());
        const uint32_t token = uint32_t(m<4>(cpu, vtable + 4 * slot));
        const uint32_t sp = base_sp;
        wr<4>(cpu, 16, sp);
        wm<4>(cpu, sp, Platform64::return_sentinel);
        for (size_t i = 0; i < all.size(); ++i) wm<4>(cpu, sp + 4 + 4 * uint32_t(i), all[i]);
        cpu.pc = token;
        if (!platform.dispatch(cpu)) throw Fault("a vtable slot that is not a token");
        if (uint32_t(r<4>(cpu, 16)) != sp + 4 + 4 * uint32_t(all.size())) throw Fault("slot " + std::to_string(slot) + ": the callee removed the wrong number of arguments");
        return uint32_t(r<4>(cpu, 0));
    }
    uint32_t alloc(uint32_t n) { return call("HeapAlloc", {call("GetProcessHeap", {}), 8, n}); }
    uint32_t text(const char* s) { const uint32_t n = uint32_t(std::strlen(s)) + 1, a = alloc(n); std::memcpy(cpu.pointer(a, n), s, n); return a; }
    uint32_t word(uint32_t a) { return uint32_t(m<4>(cpu, a)); }
};

// slots (d3d9.h order)
enum : unsigned { QueryInterface = 0, AddRef = 1, Release = 2 };
enum : unsigned { D3D_GetAdapterCount = 4, D3D_GetAdapterIdentifier = 5, D3D_GetAdapterModeCount = 6, D3D_EnumAdapterModes = 7, D3D_GetAdapterDisplayMode = 8,
                  D3D_CheckDeviceType = 9, D3D_CheckDeviceFormat = 10, D3D_CheckDepthStencilMatch = 12, D3D_GetDeviceCaps = 14, D3D_CreateDevice = 16 };
enum : unsigned { Dev_TestCooperativeLevel = 3, Dev_GetDirect3D = 6, Dev_Reset = 16, Dev_Present = 17, Dev_GetBackBuffer = 18, Dev_CreateTexture = 23, Dev_CreateVertexBuffer = 26,
                  Dev_CreateIndexBuffer = 27, Dev_GetRenderTarget = 38, Dev_GetDepthStencilSurface = 40, Dev_BeginScene = 41, Dev_EndScene = 42, Dev_Clear = 43, Dev_SetTransform = 44,
                  Dev_GetTransform = 45, Dev_SetViewport = 47, Dev_GetViewport = 48, Dev_SetRenderState = 57, Dev_GetRenderState = 58, Dev_GetTexture = 64, Dev_SetTexture = 65,
                  Dev_GetNPatchMode = 80, Dev_DrawIndexedPrimitive = 82, Dev_DrawPrimitiveUP = 83, Dev_CreateVertexDeclaration = 86, Dev_SetVertexDeclaration = 87, Dev_SetFVF = 89,
                  Dev_CreateVertexShader = 91, Dev_SetVertexShader = 92, Dev_SetVertexShaderConstantF = 94, Dev_GetVertexShaderConstantF = 95, Dev_SetStreamSource = 100,
                  Dev_SetIndices = 104, Dev_CreateQuery = 118 };
enum : unsigned { Res_GetDevice = 3, Res_GetType = 10, Tex_GetLevelCount = 13, Tex_GetLevelDesc = 17, Tex_GetSurfaceLevel = 18, Tex_LockRect = 19, Tex_UnlockRect = 20 };
enum : unsigned { Buf_Lock = 11, Buf_Unlock = 12, Buf_GetDesc = 13 };
enum : unsigned { Surf_GetContainer = 11, Surf_GetDesc = 12, Surf_LockRect = 13, Surf_UnlockRect = 14 };
enum : unsigned { Decl_GetDeclaration = 4, Shader_GetFunction = 4 };
}  // namespace

int main(int argc, char** argv) {
    try {
        if (argc < 3) throw Fault("d3d9_facade_tests <export dir> <game dir>");
        const char* error = nullptr;
        auto arena = nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(), &error);
        if (!arena) throw Fault(std::string("arena: ") + (error ? error : "?"));
        Cpu c;
        Platform64 p(c, argv[1], argv[2]);
        std::string bad;
        auto options = parse_win32_layer("all", bad);
        check(options.d3d9, "\"all\" includes the d3d9 group on this host");
        Win32Facade facade(p, options);
        Guest g{p, c, uint32_t(r<4>(c, 16))};
        auto in_arena = [](uint32_t a) { return a && nfsu2::guest::is_guest(nfsu2::guest::ptr<void>(a)); };

        // ---- IDirect3D9
        const uint32_t d3d = g.call("Direct3DCreate9", {32});
        check(in_arena(d3d) && in_arena(g.word(d3d)), "Direct3DCreate9 returns an object in guest memory with a vtable there");
        check(g.com(d3d, D3D_GetAdapterCount, {}) == 1, "one adapter");
        const uint32_t identifier = g.alloc(1104);
        check(g.com(d3d, D3D_GetAdapterIdentifier, {0, 0, identifier}) == kOk && g.word(identifier + 1064) != 0 && std::string(reinterpret_cast<const char*>(c.pointer(identifier, 8))) == "nue_d3d9", "adapter identifier");
        const uint32_t modes = g.com(d3d, D3D_GetAdapterModeCount, {0, 22});
        check(modes >= 1 && g.com(d3d, D3D_GetAdapterModeCount, {0, 23}) == 0, "display modes for X8R8G8B8 only");
        const uint32_t mode = g.alloc(16);
        check(g.com(d3d, D3D_EnumAdapterModes, {0, 22, 0, mode}) == kOk && g.word(mode) > 0 && g.word(mode + 12) == 22, "EnumAdapterModes");
        check(g.com(d3d, D3D_EnumAdapterModes, {0, 22, modes, mode}) == kInvalidCall, "EnumAdapterModes past the end");
        check(g.com(d3d, D3D_GetAdapterDisplayMode, {0, mode}) == kOk && g.word(mode) == 1280 && g.word(mode + 4) == 720, "the display mode of the headless fixture");
        check(g.com(d3d, D3D_CheckDeviceType, {0, 1, 22, 21, 1}) == kOk && g.com(d3d, D3D_CheckDeviceType, {0, 2, 22, 21, 1}) == kNotAvailable, "CheckDeviceType: HAL only");
        const uint32_t dxt1 = 0x31545844, d24s8 = 75;
        check(g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 0, 3, dxt1}) == kOk, "DXT1 textures");
        check(g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 1, 3, 21}) == kOk && g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 1, 3, dxt1}) == kNotAvailable, "render targets: A8R8G8B8 yes, DXT1 no");
        check(g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 2, 1, d24s8}) == kOk && g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 2, 1, 21}) == kNotAvailable, "depth formats");
        check(g.com(d3d, D3D_CheckDeviceFormat, {0, 1, 22, 0x00100000, 3, 116}) == kNotAvailable, "no vertex texture fetch");
        check(g.com(d3d, D3D_CheckDepthStencilMatch, {0, 1, 22, 22, d24s8}) == kOk, "CheckDepthStencilMatch");
        const uint32_t caps = g.alloc(304);
        check(g.com(d3d, D3D_GetDeviceCaps, {0, 1, caps}) == kOk && g.word(caps) == 1 && (g.word(caps + 196) & 0xFFFF) == 0x0300 && (g.word(caps + 204) & 0xFFFF) == 0x0300, "caps: HAL, vertex and pixel shader 3.0");

        // ---- a window of the user32 group for the device
        const uint32_t cls = g.alloc(48);
        wm<4>(c, cls, 48); wm<4>(c, cls + 8, 0x005bfe59 /* mov eax, 1 ; ret 16 */); wm<4>(c, cls + 40, g.text("NueD3D9Test"));
        check(g.call("RegisterClassExA", {cls}) != 0, "RegisterClassExA");
        const uint32_t window = g.call("CreateWindowExA", {0, g.text("NueD3D9Test"), g.text("d3d9"), 0x10CF0000, 0, 0, 800, 600, 0, 0, 0x400000, 0});
        check(window != 0, "CreateWindowExA");

        // ---- CreateDevice: sizes filled in from the client area, the x87 control word as Direct3D 9 leaves it
        const uint32_t pp = g.alloc(56), out = g.alloc(4);
        auto fill_pp = [&](uint32_t w, uint32_t h) {
            const uint32_t words[14] = {w, h, 22, 1, 0, 0, 1 /* discard */, window, 1 /* windowed */, 1 /* auto depth */, d24s8, 0, 0, 0x80000000u /* immediate */};
            for (int i = 0; i < 14; ++i) wm<4>(c, pp + 4 * uint32_t(i), words[i]);
        };
        fill_pp(0, 0);
        wr<2>(c, reg_fpu_control, 0x027f);
        check(g.com(d3d, D3D_CreateDevice, {0, 1, window, 0x40 /* hardware vertex processing */, pp, out}) == kOk, "CreateDevice");
        const uint32_t device = g.word(out);
        check(in_arena(device), "the device is a guest object");
        check(uint16_t(r<2>(c, reg_fpu_control)) == 0x007F, "CreateDevice sets the guest x87 control word to single precision, everything masked");
        x87_load_control(0x027f);
        const uint32_t back_w = g.word(pp), back_h = g.word(pp + 4);
        check(back_w > 0 && back_w <= 800 && back_h > 0 && back_h <= 600, "the back buffer takes the client area's size");
        check(g.com(d3d, D3D_CreateDevice, {0, 1, window, 0x40, pp, out}) != kOk && g.word(out) == 0, "a second device is refused");
        check(g.com(device, Dev_TestCooperativeLevel, {}) == kOk, "TestCooperativeLevel");
        check(g.com(device, Dev_GetDirect3D, {out}) == kOk && g.word(out) == d3d && g.com(d3d, Release, {}) >= 1, "GetDirect3D");

        // default state and targets
        const uint32_t value = g.alloc(4);
        check(g.com(device, Dev_GetRenderState, {7, value}) == kOk && g.word(value) == 1, "ZENABLE is on with an automatic depth buffer");
        check(g.com(device, Dev_SetRenderState, {27, 1}) == kOk && g.com(device, Dev_GetRenderState, {27, value}) == kOk && g.word(value) == 1, "SetRenderState / GetRenderState");
        const uint32_t viewport = g.alloc(24);
        check(g.com(device, Dev_GetViewport, {viewport}) == kOk && g.word(viewport + 8) == back_w && g.word(viewport + 12) == back_h, "the viewport covers the back buffer");
        check(g.com(device, Dev_GetBackBuffer, {0, 0, 0, out}) == kOk, "GetBackBuffer");
        const uint32_t back = g.word(out), desc = g.alloc(32);
        check(g.com(back, Surf_GetDesc, {desc}) == kOk && g.word(desc) == 22 && g.word(desc + 24) == back_w && g.word(desc + 28) == back_h && g.word(desc + 8) == 1, "the back buffer's description");
        check(g.com(device, Dev_GetRenderTarget, {0, out}) == kOk && g.word(out) == back, "render target 0 is the back buffer");
        check(g.com(back, Release, {}) >= 1 && g.com(back, Release, {}) >= 1, "the device keeps its back buffer");
        check(g.com(device, Dev_GetDepthStencilSurface, {out}) == kOk && g.word(out) != 0 && g.com(g.word(out), Release, {}) >= 1, "the automatic depth buffer");

        // ---- a texture: levels, a lock through guest memory, the level's surface
        check(g.com(device, Dev_CreateTexture, {64, 64, 0, 0, 21, 1 /* managed */, out, 0}) == kOk, "CreateTexture");
        const uint32_t texture = g.word(out);
        check(g.com(texture, Tex_GetLevelCount, {}) == 7 && g.com(texture, Res_GetType, {}) == 3, "a full mip chain; resource type texture");
        check(g.com(texture, Tex_GetLevelDesc, {2, desc}) == kOk && g.word(desc + 24) == 16 && g.word(desc + 28) == 16 && g.word(desc + 12) == 1, "GetLevelDesc");
        const uint32_t locked = g.alloc(8);
        check(g.com(texture, Tex_LockRect, {0, locked, 0, 0}) == kOk && g.word(locked) == 256 && in_arena(g.word(locked + 4)), "LockRect gives guest memory and the pitch");
        for (uint32_t y = 0; y < 64; ++y) for (uint32_t x = 0; x < 64; ++x) wm<4>(c, g.word(locked + 4) + y * 256 + x * 4, 0xFF000000u | (y << 8) | x);
        check(g.com(texture, Tex_LockRect, {0, locked, 0, 0}) == kInvalidCall, "a level is locked once");
        check(g.com(texture, Tex_UnlockRect, {0}) == kOk, "UnlockRect");
        check(g.com(texture, Tex_LockRect, {0, locked, 0, 0x10 /* read only */}) == kOk && g.word(g.word(locked + 4) + 5 * 256 + 7 * 4) == 0xFF000507u, "a second lock shows what was written");
        check(g.com(texture, Tex_UnlockRect, {0}) == kOk, "UnlockRect (read only)");
        const uint32_t rect = g.alloc(16);
        wm<4>(c, rect, 8); wm<4>(c, rect + 4, 4); wm<4>(c, rect + 8, 16); wm<4>(c, rect + 12, 12);
        check(g.com(texture, Tex_LockRect, {0, locked, rect, 0}) == kOk && g.word(g.word(locked + 4)) == 0xFF000408u, "a rectangle lock starts at its corner");
        wm<4>(c, g.word(locked + 4), 0xDEADBEEFu);
        check(g.com(texture, Tex_UnlockRect, {0}) == kOk, "UnlockRect of the rectangle");
        check(g.com(texture, Tex_GetSurfaceLevel, {1, out}) == kOk, "GetSurfaceLevel");
        const uint32_t level1 = g.word(out);
        check(g.com(level1, Surf_GetDesc, {desc}) == kOk && g.word(desc + 24) == 32, "the level's surface is 32 wide");
        const uint8_t iid_texture[16] = {0x27, 0x12, 0xc3, 0x85, 0xe5, 0x3d, 0x00, 0x4f, 0x9b, 0x3a, 0xf1, 0x1a, 0xc3, 0x8c, 0x18, 0xb5};   // IID_IDirect3DTexture9
        const uint32_t riid = g.alloc(16);
        std::memcpy(c.pointer(riid, 16), iid_texture, 16);
        check(g.com(level1, Surf_GetContainer, {riid, out}) == kOk && g.word(out) == texture, "GetContainer finds the texture");
        g.com(texture, Release, {});
        check(g.com(level1, Surf_LockRect, {locked, 0, 0}) == kOk && g.word(locked) == 128 && g.com(level1, Surf_UnlockRect, {}) == kOk, "the level's surface locks its level");
        check(g.com(level1, Release, {}) == 1, "a level's surface counts with its texture");
        check(g.com(device, Dev_SetTexture, {0, texture}) == kOk && g.com(texture, AddRef, {}) == 3 && g.com(texture, Release, {}) == 2, "SetTexture holds a reference");
        check(g.com(device, Dev_GetTexture, {0, out}) == kOk && g.word(out) == texture && g.com(texture, Release, {}) == 2, "GetTexture");

        // ---- buffers: the mirror in guest memory, handed to the layer at Unlock
        check(g.com(device, Dev_CreateVertexBuffer, {4096, 0x208 /* dynamic | write only */, 0x142 /* xyz | diffuse | tex1 */, 0, out, 0}) == kOk, "CreateVertexBuffer");
        const uint32_t vb = g.word(out);
        check(g.com(vb, Buf_Lock, {0, 0, out, 0x2000 /* discard */}) == kOk && in_arena(g.word(out)), "Lock gives guest memory");
        const uint32_t vertices = g.word(out);
        const float tri[3][6] = {{0, 0, 0, std::bit_cast<float>(0xFFFFFFFFu), 0, 0}, {1, 0, 0, std::bit_cast<float>(0xFFFFFFFFu), 1, 0}, {0, 1, 0, std::bit_cast<float>(0xFFFFFFFFu), 0, 1}};
        std::memcpy(c.pointer(vertices, sizeof tri), tri, sizeof tri);
        check(g.com(vb, Buf_Unlock, {}) == kOk && g.com(vb, Buf_Unlock, {}) == kInvalidCall, "Unlock once per Lock");
        check(g.com(vb, Buf_Lock, {4096, 4, out, 0}) == kInvalidCall, "a lock past the end");
        check(g.com(vb, Buf_GetDesc, {desc}) == kOk && g.word(desc + 16) == 4096 && g.word(desc + 20) == 0x142, "GetDesc of the vertex buffer");
        check(g.com(device, Dev_CreateIndexBuffer, {6, 8, 101 /* index16 */, 1, out, 0}) == kOk, "CreateIndexBuffer");
        const uint32_t ib = g.word(out);
        check(g.com(ib, Buf_Lock, {0, 6, out, 0}) == kOk, "lock the index buffer");
        wm<2>(c, g.word(out), 0); wm<2>(c, g.word(out) + 2, 1); wm<2>(c, g.word(out) + 4, 2);
        check(g.com(ib, Buf_Unlock, {}) == kOk, "unlock the index buffer");

        // ---- declarations and shaders
        const uint32_t elements = g.alloc(32);
        const uint8_t decl[] = {0, 0, 0, 0, 2 /* float3 */, 0, 0 /* position */, 0, 0, 0, 12, 0, 4 /* d3dcolor */, 0, 10 /* color */, 0, 0xFF, 0, 0, 0, 17, 0, 0, 0};
        std::memcpy(c.pointer(elements, sizeof decl), decl, sizeof decl);
        check(g.com(device, Dev_CreateVertexDeclaration, {elements, out}) == kOk, "CreateVertexDeclaration");
        const uint32_t declaration = g.word(out);
        check(g.com(declaration, Decl_GetDeclaration, {0, out}) == kOk && g.word(out) == 3, "GetDeclaration counts the end marker");
        const uint32_t vs_tokens[] = {0xFFFE0200, 0x0200001F, 0x80000000, 0x900F0000, 0x02000001, 0xC00F0000, 0x90E40000, 0x0000FFFF};   // vs_2_0: dcl_position v0; mov oPos, v0
        const uint32_t code = g.alloc(sizeof vs_tokens);
        std::memcpy(c.pointer(code, sizeof vs_tokens), vs_tokens, sizeof vs_tokens);
        check(g.com(device, Dev_CreateVertexShader, {code, out}) == kOk, "CreateVertexShader");
        const uint32_t vs = g.word(out);
        check(g.com(vs, Shader_GetFunction, {0, out}) == kOk && g.word(out) == sizeof vs_tokens, "GetFunction");
        const uint32_t constants = g.alloc(32);
        const float two[8] = {1, 2, 3, 4, 5, 6, 7, 8};
        std::memcpy(c.pointer(constants, 32), two, 32);
        check(g.com(device, Dev_SetVertexShaderConstantF, {10, constants, 2}) == kOk, "SetVertexShaderConstantF");
        std::memset(c.pointer(constants, 32), 0, 32);
        const uint32_t get_f = g.com(device, Dev_GetVertexShaderConstantF, {10, constants, 2});
        check(get_f == kInvalidCall || (get_f == kOk && std::bit_cast<float>(g.word(constants + 20)) == 6.0f), "GetVertexShaderConstantF");

        // ---- a frame
        check(g.com(device, Dev_BeginScene, {}) == kOk, "BeginScene");
        check(g.com(device, Dev_Clear, {0, 0, 7, 0xFF203040u, std::bit_cast<uint32_t>(1.0f), 0}) == kOk, "Clear");
        check(g.com(device, Dev_SetVertexDeclaration, {declaration}) == kOk && g.com(device, Dev_SetVertexShader, {vs}) == kOk, "declaration and shader");
        check(g.com(device, Dev_SetStreamSource, {0, vb, 0, 24}) == kOk && g.com(device, Dev_SetIndices, {ib}) == kOk, "streams and indices");
        check(g.com(device, Dev_DrawIndexedPrimitive, {4, 0, 0, 3, 0, 1}) == kOk, "DrawIndexedPrimitive");
        check(g.com(device, Dev_SetVertexShader, {0}) == kOk && g.com(device, Dev_SetFVF, {0x142}) == kOk, "fixed function");
        check(g.com(device, Dev_DrawPrimitiveUP, {4, 1, vertices, 24}) == kOk, "DrawPrimitiveUP from guest memory");
        check(g.com(device, Dev_EndScene, {}) == kOk && g.com(device, Dev_Present, {0, 0, 0, 0}) == kOk, "EndScene and Present");
        check(g.com(device, Dev_CreateQuery, {8, out}) == kNotAvailable && g.word(out) == 0, "queries are not offered (the dll does the same)");
        bool fault = false;
        try { g.com(device, Dev_GetNPatchMode, {}); } catch (const Fault& e) { fault = std::string(e.what()).find("GetNPatchMode") != std::string::npos; }
        check(fault, "a method nobody serves stops with its name");

        // ---- Reset to another size: new back buffer, state back to its defaults
        g.com(device, Dev_SetVertexDeclaration, {0}); g.com(device, Dev_SetStreamSource, {0, 0, 0, 0}); g.com(device, Dev_SetIndices, {0}); g.com(device, Dev_SetTexture, {0, 0});
        fill_pp(1024, 768);
        wr<2>(c, reg_fpu_control, 0x027f);
        check(g.com(device, Dev_Reset, {pp}) == kOk, "Reset");
        check(uint16_t(r<2>(c, reg_fpu_control)) == 0x007F, "Reset sets the x87 control word again");
        x87_load_control(0x027f);
        check(g.com(device, Dev_GetRenderState, {27, value}) == kOk && g.word(value) == 0, "Reset restores the default states");
        check(g.com(device, Dev_GetBackBuffer, {0, 0, 0, out}) == kOk && g.com(g.word(out), Surf_GetDesc, {desc}) == kOk && g.word(desc + 24) == 1024 && g.word(desc + 28) == 768, "the new back buffer");
        g.com(g.word(out), Release, {});

        // ---- releases: resources, then the device, then IDirect3D9
        check(g.com(texture, Release, {}) == 0, "the texture goes when its last reference does");
        check(g.com(vb, Release, {}) == 0 && g.com(ib, Release, {}) == 0 && g.com(declaration, Release, {}) == 0 && g.com(vs, Release, {}) == 0, "buffers, declaration and shader released");
        check(g.com(device, Release, {}) == 0, "the device goes");
        check(g.com(d3d, Release, {}) == 0, "IDirect3D9 goes after its device");
        const uint32_t again = g.call("Direct3DCreate9", {32});
        check(g.com(again, D3D_CreateDevice, {0, 1, window, 0x40, pp, out}) == kOk && g.com(g.word(out), Release, {}) == 0 && g.com(again, Release, {}) == 0, "a new device after the first one is gone");

        if (failures) { std::cerr << failures << " check(s) failed\n"; return 1; }
        std::cout << "PASS the Direct3D 9 group (guest COM objects over nue_d3d9 on the null GPU)\n";
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "FAIL: " << e.what() << '\n';
        return 1;
    }
}
