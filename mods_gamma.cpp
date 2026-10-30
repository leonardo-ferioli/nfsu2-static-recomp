// Console gamma and the anti-aliasing border fix (the mod's PostFX and MSAA modules).
// Gamma: just before the game ends its scene, the picture is copied to a texture and drawn back through a pixel shader that applies
// the Xbox 360 gamma curve. The shader is the mod's (X360GammaApprox), compiled here with the system's HLSL compiler (d3dcompiler_47).
// Unlike the mod, no D3DX library is needed.
// On a 64-bit host the device is the guest's Direct3D 9 object (the Win32 layer's, win32_facade_d3d9.cpp): the same passes are made through its vtable with
// every argument in guest memory, and the shader is its precompiled ps_2_0 bytecode (mods_gamma_ps20.inc), since such a host has no HLSL compiler.
#include "mods_internal.hpp"
#include "guest_memory.hpp"
#include "mods_gamma_shader.hpp"
#ifdef NFSU2_GUEST_IDENTITY
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <d3d9.h>
#endif

namespace nfsu2raw::mods {
namespace {
// Direct3D 9 numbers the passes use (checked against d3d9.h on the 32-bit host).
enum : uint32_t {
    kRsZEnable = 7, kRsFillMode = 8, kRsZWriteEnable = 14, kRsAlphaTestEnable = 15, kRsCullMode = 22, kRsAlphaBlendEnable = 27, kRsFogEnable = 28,
    kRsStencilEnable = 52, kRsMultisampleAntialias = 161, kRsColorWriteEnable = 168, kRsScissorTestEnable = 174, kRsSrgbWriteEnable = 194,
    kSampAddressU = 1, kSampAddressV = 2, kSampMagFilter = 5, kSampMinFilter = 6, kSampMipFilter = 7, kTaddressClamp = 3,
    kTexfNone = 0, kTexfPoint = 1, kTexfLinear = 2, kCullNone = 1, kFillSolid = 3, kClearTarget = 1, kSbtAll = 1,
    kFvfXyzrhw = 0x004, kFvfTex1 = 0x100, kPtTriangleStrip = 5, kUsageRenderTarget = 1, kPoolDefault = 0, kBackBufferMono = 0, kMultisampleNone = 0,
};
#ifdef NFSU2_GUEST_IDENTITY
static_assert(kRsZEnable == D3DRS_ZENABLE && kRsFillMode == D3DRS_FILLMODE && kRsZWriteEnable == D3DRS_ZWRITEENABLE && kRsAlphaTestEnable == D3DRS_ALPHATESTENABLE);
static_assert(kRsCullMode == D3DRS_CULLMODE && kRsAlphaBlendEnable == D3DRS_ALPHABLENDENABLE && kRsFogEnable == D3DRS_FOGENABLE && kRsStencilEnable == D3DRS_STENCILENABLE);
static_assert(kRsMultisampleAntialias == D3DRS_MULTISAMPLEANTIALIAS && kRsColorWriteEnable == D3DRS_COLORWRITEENABLE && kRsScissorTestEnable == D3DRS_SCISSORTESTENABLE);
static_assert(kRsSrgbWriteEnable == D3DRS_SRGBWRITEENABLE && kSampAddressU == D3DSAMP_ADDRESSU && kSampAddressV == D3DSAMP_ADDRESSV && kSampMagFilter == D3DSAMP_MAGFILTER);
static_assert(kSampMinFilter == D3DSAMP_MINFILTER && kSampMipFilter == D3DSAMP_MIPFILTER && kTaddressClamp == D3DTADDRESS_CLAMP && kTexfLinear == D3DTEXF_LINEAR);
static_assert(kTexfPoint == D3DTEXF_POINT && kCullNone == D3DCULL_NONE && kFillSolid == D3DFILL_SOLID && kClearTarget == D3DCLEAR_TARGET && kSbtAll == D3DSBT_ALL);
static_assert(kFvfXyzrhw == D3DFVF_XYZRHW && kFvfTex1 == D3DFVF_TEX1 && kPtTriangleStrip == D3DPT_TRIANGLESTRIP && kUsageRenderTarget == D3DUSAGE_RENDERTARGET);
// The part of ID3DBlob that is used (d3dcompiler.h is not needed).
struct Blob : IUnknown {
    virtual void* STDMETHODCALLTYPE GetBufferPointer() = 0;
    virtual SIZE_T STDMETHODCALLTYPE GetBufferSize() = 0;
};

// kGammaShader: the HLSL source (mods_gamma_shader.hpp); a 64-bit host uses its compiled form (mods_gamma_ps20.inc, made by tools/compile_gamma_shader.cpp).

template <class T> void release(T*& p) { if (p) { p->Release(); p = nullptr; } }

IDirect3DPixelShader9* g_shader = nullptr;
IDirect3DDevice9* g_shader_device = nullptr;
IDirect3DTexture9* g_scene_texture = nullptr;
IDirect3DSurface9* g_scene_surface = nullptr;
IDirect3DSurface9* g_resolve_surface = nullptr;
D3DSURFACE_DESC g_back_buffer{};
bool g_failed = false;

bool compile_shader(IDirect3DDevice9* device) {
    if (g_shader && g_shader_device == device) return true;
    release(g_shader);
    HMODULE compiler = LoadLibraryA("d3dcompiler_47.dll");
    if (!compiler) return false;
    using CompileFn = HRESULT(WINAPI*)(LPCVOID, SIZE_T, LPCSTR, const void*, void*, LPCSTR, LPCSTR, UINT, UINT, Blob**, Blob**);
    auto compile = reinterpret_cast<CompileFn>(GetProcAddress(compiler, "D3DCompile"));
    if (!compile) return false;
    Blob* code = nullptr;
    Blob* errors = nullptr;
    const HRESULT hr = compile(kGammaShader, sizeof(kGammaShader) - 1, "console_gamma", nullptr, nullptr, "main", "ps_2_0", 0, 0, &code, &errors);
    if (errors) errors->Release();
    if (FAILED(hr) || !code) return false;
    const HRESULT created = device->CreatePixelShader(static_cast<const DWORD*>(code->GetBufferPointer()), &g_shader);
    code->Release();
    g_shader_device = device;
    return SUCCEEDED(created);
}

void release_targets() {
    release(g_scene_surface);
    release(g_scene_texture);
    release(g_resolve_surface);
    g_back_buffer = {};
}

bool create_targets(IDirect3DDevice9* device) {
    if (g_scene_texture) return true;
    IDirect3DSurface9* back = nullptr;
    if (FAILED(device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &back)) || !back) return false;
    const HRESULT described = back->GetDesc(&g_back_buffer);
    back->Release();
    if (FAILED(described)) return false;
    if (FAILED(device->CreateTexture(g_back_buffer.Width, g_back_buffer.Height, 1, D3DUSAGE_RENDERTARGET, g_back_buffer.Format, D3DPOOL_DEFAULT, &g_scene_texture, nullptr))) { release_targets(); return false; }
    if (FAILED(g_scene_texture->GetSurfaceLevel(0, &g_scene_surface))) { release_targets(); return false; }
    if (g_back_buffer.MultiSampleType != D3DMULTISAMPLE_NONE &&
        FAILED(device->CreateRenderTarget(g_back_buffer.Width, g_back_buffer.Height, g_back_buffer.Format, D3DMULTISAMPLE_NONE, 0, FALSE, &g_resolve_surface, nullptr))) { release_targets(); return false; }
    return true;
}

void render_gamma() {
    if (g_failed) return;
    auto* device = host_object<IDirect3DDevice9*>(u32_at(address_of("d3d_device")));
    if (!device) return;
    if (!compile_shader(device) || !create_targets(device)) { g_failed = true; return; }

    IDirect3DSurface9* current = nullptr;
    if (FAILED(device->GetRenderTarget(0, &current)) || !current) return;
    IDirect3DSurface9* back = nullptr;
    device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &back);
    IDirect3DSurface9* source = current;
    bool ok = true;
    if (g_back_buffer.MultiSampleType != D3DMULTISAMPLE_NONE) {
        ok = SUCCEEDED(device->StretchRect(current, nullptr, g_resolve_surface, nullptr, D3DTEXF_LINEAR));
        source = g_resolve_surface;
    }
    ok = ok && SUCCEEDED(device->StretchRect(source, nullptr, g_scene_surface, nullptr, D3DTEXF_POINT));
    IDirect3DStateBlock9* saved = nullptr;
    if (ok && back && SUCCEEDED(device->CreateStateBlock(D3DSBT_ALL, &saved)) && saved) {
        saved->Capture();
        if (back != current) device->SetRenderTarget(0, back);
        device->SetVertexShader(nullptr);
        device->SetStreamSource(0, nullptr, 0, 0);
        device->SetVertexDeclaration(nullptr);
        device->SetFVF(D3DFVF_XYZRHW | D3DFVF_TEX1);
        device->SetPixelShader(g_shader);
        device->SetTexture(0, g_scene_texture);
        device->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
        device->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
        device->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
        device->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
        device->SetSamplerState(0, D3DSAMP_MIPFILTER, D3DTEXF_NONE);
        device->SetRenderState(D3DRS_ZENABLE, FALSE);
        device->SetRenderState(D3DRS_ZWRITEENABLE, FALSE);
        device->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
        device->SetRenderState(D3DRS_ALPHATESTENABLE, FALSE);
        device->SetRenderState(D3DRS_STENCILENABLE, FALSE);
        device->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
        device->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
        device->SetRenderState(D3DRS_COLORWRITEENABLE, 0xF);
        device->SetRenderState(D3DRS_SRGBWRITEENABLE, FALSE);
        device->SetRenderState(D3DRS_FILLMODE, D3DFILL_SOLID);
        device->SetRenderState(D3DRS_FOGENABLE, FALSE);
        const float w = float(g_back_buffer.Width) - 0.5f, h = float(g_back_buffer.Height) - 0.5f;
        const float quad[4][6] = {{-0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f}, {-0.5f, h, 0.0f, 1.0f, 0.0f, 1.0f}, {w, -0.5f, 0.0f, 1.0f, 1.0f, 0.0f}, {w, h, 0.0f, 1.0f, 1.0f, 1.0f}};
        device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, quad, sizeof(quad[0]));
        if (back != current) device->SetRenderTarget(0, current);
        saved->Apply();
        saved->Release();
    }
    release(back);
    current->Release();
}

// With multisampling the first row and column of the picture can show a stray line: they are cleared to black.
int g_hide_aa = 1;
bool g_msaa_checked = false, g_msaa = false;

bool detect_msaa(IDirect3DDevice9* device) {
    IDirect3DSurface9* target = nullptr;
    if (SUCCEEDED(device->GetRenderTarget(0, &target)) && target) {
        D3DSURFACE_DESC desc{};
        const bool ok = SUCCEEDED(target->GetDesc(&desc));
        target->Release();
        if (ok && desc.MultiSampleType != D3DMULTISAMPLE_NONE) return true;
    }
    IDirect3DSwapChain9* chain = nullptr;
    if (SUCCEEDED(device->GetSwapChain(0, &chain)) && chain) {
        D3DPRESENT_PARAMETERS parameters{};
        const bool ok = SUCCEEDED(chain->GetPresentParameters(&parameters));
        chain->Release();
        if (ok && parameters.MultiSampleType != D3DMULTISAMPLE_NONE) return true;
    }
    DWORD enabled = 0;
    return SUCCEEDED(device->GetRenderState(D3DRS_MULTISAMPLEANTIALIAS, &enabled)) && enabled != 0;
}

void hide_aa_border() {
    auto* device = host_object<IDirect3DDevice9*>(u32_at(address_of("d3d_device")));
    if (!device) return;
    if (!g_msaa_checked) { g_msaa = detect_msaa(device); g_msaa_checked = true; }
    if (!g_msaa) return;
    IDirect3DSurface9* back = nullptr;
    if (FAILED(device->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &back)) || !back) return;
    D3DSURFACE_DESC desc{};
    const bool ok = SUCCEEDED(back->GetDesc(&desc));
    back->Release();
    if (!ok || !desc.Width || !desc.Height) return;
    const D3DCOLOR black = D3DCOLOR_ARGB(255, 0, 0, 0);
    D3DRECT top = {0, -5, LONG(desc.Width), 1}, left = {-5, 0, 1, LONG(desc.Height)};
    device->Clear(1, &top, D3DCLEAR_TARGET, black, 1.0f, 0);
    device->Clear(1, &left, D3DCLEAR_TARGET, black, 1.0f, 0);
    if (g_hide_aa > 1) {
        D3DRECT bottom = {0, LONG(desc.Height) - 1, LONG(desc.Width), LONG(desc.Height) + 5}, right = {LONG(desc.Width) - 1, 0, LONG(desc.Width) + 5, LONG(desc.Height) + 5};
        device->Clear(1, &bottom, D3DCLEAR_TARGET, black, 1.0f, 0);
        device->Clear(1, &right, D3DCLEAR_TARGET, black, 1.0f, 0);
    }
}
#else
// ---- a 64-bit host: the guest's device, called through its vtable -----------------------------------------------------------------------------
const unsigned char kGammaPs20[] = {
#include "mods_gamma_ps20.inc"
};
enum : unsigned {   // vtable slots (d3d9.h order)
    kRelease = 2, kGetSwapChain = 14, kGetBackBuffer = 18, kCreateTexture = 23, kCreateRenderTarget = 28, kStretchRect = 34, kSetRenderTarget = 37, kGetRenderTarget = 38,
    kClear = 43, kSetRenderState = 57, kGetRenderState = 58, kCreateStateBlock = 59, kSetTexture = 65, kSetSamplerState = 69, kDrawPrimitiveUP = 83,
    kSetVertexDeclaration = 87, kSetFVF = 89, kSetVertexShader = 92, kSetStreamSource = 100, kCreatePixelShader = 106, kSetPixelShader = 107,
    kSurfaceGetDesc = 12, kTextureGetSurfaceLevel = 18, kStateBlockCapture = 4, kStateBlockApply = 5, kSwapChainGetPresentParameters = 9,
};
// One COM call on a guest object: `this` first, then the arguments, through the method token in its vtable.
uint32_t com(uint32_t self, unsigned slot, std::initializer_list<uint32_t> arguments) {
    uint32_t words[16];
    size_t count = 0;
    words[count++] = self;
    for (uint32_t a : arguments) words[count++] = a;
    return GuestPlatform::active()->call_guest_words(u32_at(u32_at(self) + 4 * slot), 0, 0, words, count);
}
bool succeeded(uint32_t hr) { return int32_t(hr) >= 0; }
// Out-parameters and data the guest reads: one block of guest memory for the whole module.
struct Cells { uint32_t out; uint32_t desc[8]; uint32_t present[14]; uint32_t value; float quad[24]; int32_t rect[4]; };
Cells* g_cells = nullptr;
uint32_t at(const void* p) { return nfsu2::guest::to_guest(p); }
uint32_t out_cell() { g_cells->out = 0; return at(&g_cells->out); }

uint32_t g_shader = 0, g_shader_device = 0, g_scene_texture = 0, g_scene_surface = 0, g_resolve_surface = 0;
uint32_t g_back_buffer[8] = {};   // D3DSURFACE_DESC: format, type, usage, pool, multisample type, quality, width, height
bool g_failed = false;
void release(uint32_t& object) { if (object) { com(object, kRelease, {}); object = 0; } }

bool compile_shader(uint32_t device) {
    if (g_shader && g_shader_device == device) return true;
    release(g_shader);
    const uint32_t code = guest_constant(kGammaPs20, sizeof(kGammaPs20));
    if (!succeeded(com(device, kCreatePixelShader, {code, out_cell()})) || !g_cells->out) return false;
    g_shader = g_cells->out;
    g_shader_device = device;
    return true;
}
void release_targets() {
    release(g_scene_surface);
    release(g_scene_texture);
    release(g_resolve_surface);
    std::memset(g_back_buffer, 0, sizeof(g_back_buffer));
}
bool create_targets(uint32_t device) {
    if (g_scene_texture) return true;
    if (!succeeded(com(device, kGetBackBuffer, {0, 0, kBackBufferMono, out_cell()})) || !g_cells->out) return false;
    uint32_t back = g_cells->out;
    const bool described = succeeded(com(back, kSurfaceGetDesc, {at(g_cells->desc)}));
    release(back);
    if (!described) return false;
    std::memcpy(g_back_buffer, g_cells->desc, sizeof(g_back_buffer));
    const uint32_t format = g_back_buffer[0], multisample = g_back_buffer[4], width = g_back_buffer[6], height = g_back_buffer[7];
    if (!succeeded(com(device, kCreateTexture, {width, height, 1, kUsageRenderTarget, format, kPoolDefault, out_cell(), 0})) || !g_cells->out) { release_targets(); return false; }
    g_scene_texture = g_cells->out;
    if (!succeeded(com(g_scene_texture, kTextureGetSurfaceLevel, {0, out_cell()})) || !g_cells->out) { release_targets(); return false; }
    g_scene_surface = g_cells->out;
    if (multisample != kMultisampleNone) {
        if (!succeeded(com(device, kCreateRenderTarget, {width, height, format, kMultisampleNone, 0, 0, out_cell(), 0})) || !g_cells->out) { release_targets(); return false; }
        g_resolve_surface = g_cells->out;
    }
    return true;
}

void render_gamma() {
    if (g_failed) return;
    const uint32_t device = u32_at(address_of("d3d_device"));
    if (!device) return;
    if (!compile_shader(device) || !create_targets(device)) { g_failed = true; return; }
    if (!succeeded(com(device, kGetRenderTarget, {0, out_cell()})) || !g_cells->out) return;
    uint32_t current = g_cells->out;
    uint32_t back = 0;
    if (succeeded(com(device, kGetBackBuffer, {0, 0, kBackBufferMono, out_cell()}))) back = g_cells->out;
    uint32_t source = current;
    bool ok = true;
    if (g_back_buffer[4] != kMultisampleNone) {
        ok = succeeded(com(device, kStretchRect, {current, 0, g_resolve_surface, 0, kTexfLinear}));
        source = g_resolve_surface;
    }
    ok = ok && succeeded(com(device, kStretchRect, {source, 0, g_scene_surface, 0, kTexfPoint}));
    if (ok && back && succeeded(com(device, kCreateStateBlock, {kSbtAll, out_cell()})) && g_cells->out) {
        uint32_t saved = g_cells->out;
        com(saved, kStateBlockCapture, {});
        if (back != current) com(device, kSetRenderTarget, {0, back});
        com(device, kSetVertexShader, {0});
        com(device, kSetStreamSource, {0, 0, 0, 0});
        com(device, kSetVertexDeclaration, {0});
        com(device, kSetFVF, {kFvfXyzrhw | kFvfTex1});
        com(device, kSetPixelShader, {g_shader});
        com(device, kSetTexture, {0, g_scene_texture});
        com(device, kSetSamplerState, {0, kSampAddressU, kTaddressClamp});
        com(device, kSetSamplerState, {0, kSampAddressV, kTaddressClamp});
        com(device, kSetSamplerState, {0, kSampMinFilter, kTexfLinear});
        com(device, kSetSamplerState, {0, kSampMagFilter, kTexfLinear});
        com(device, kSetSamplerState, {0, kSampMipFilter, kTexfNone});
        for (const auto [state, value] : {std::pair{kRsZEnable, 0u}, {kRsZWriteEnable, 0u}, {kRsAlphaBlendEnable, 0u}, {kRsAlphaTestEnable, 0u}, {kRsStencilEnable, 0u},
                                          {kRsCullMode, uint32_t(kCullNone)}, {kRsScissorTestEnable, 0u}, {kRsColorWriteEnable, 0xFu}, {kRsSrgbWriteEnable, 0u},
                                          {kRsFillMode, uint32_t(kFillSolid)}, {kRsFogEnable, 0u}})
            com(device, kSetRenderState, {state, value});
        const float w = float(g_back_buffer[6]) - 0.5f, h = float(g_back_buffer[7]) - 0.5f;
        const float quad[24] = {-0.5f, -0.5f, 0.0f, 1.0f, 0.0f, 0.0f, -0.5f, h, 0.0f, 1.0f, 0.0f, 1.0f, w, -0.5f, 0.0f, 1.0f, 1.0f, 0.0f, w, h, 0.0f, 1.0f, 1.0f, 1.0f};
        std::memcpy(g_cells->quad, quad, sizeof(quad));
        com(device, kDrawPrimitiveUP, {kPtTriangleStrip, 2, at(g_cells->quad), 6 * sizeof(float)});
        if (back != current) com(device, kSetRenderTarget, {0, current});
        com(saved, kStateBlockApply, {});
        release(saved);
    }
    release(back);
    release(current);
}

// With multisampling the first row and column of the picture can show a stray line: they are cleared to black.
int g_hide_aa = 1;
bool g_msaa_checked = false, g_msaa = false;

bool detect_msaa(uint32_t device) {
    if (succeeded(com(device, kGetRenderTarget, {0, out_cell()})) && g_cells->out) {
        uint32_t target = g_cells->out;
        const bool ok = succeeded(com(target, kSurfaceGetDesc, {at(g_cells->desc)}));
        release(target);
        if (ok && g_cells->desc[4] != kMultisampleNone) return true;
    }
    if (succeeded(com(device, kGetSwapChain, {0, out_cell()})) && g_cells->out) {
        uint32_t chain = g_cells->out;
        const bool ok = succeeded(com(chain, kSwapChainGetPresentParameters, {at(g_cells->present)}));
        release(chain);
        if (ok && g_cells->present[4] != kMultisampleNone) return true;   // D3DPRESENT_PARAMETERS::MultiSampleType
    }
    g_cells->value = 0;
    return succeeded(com(device, kGetRenderState, {kRsMultisampleAntialias, at(&g_cells->value)})) && g_cells->value != 0;
}

void hide_aa_border() {
    const uint32_t device = u32_at(address_of("d3d_device"));
    if (!device) return;
    if (!g_msaa_checked) { g_msaa = detect_msaa(device); g_msaa_checked = true; }
    if (!g_msaa) return;
    if (!succeeded(com(device, kGetBackBuffer, {0, 0, kBackBufferMono, out_cell()})) || !g_cells->out) return;
    uint32_t back = g_cells->out;
    const bool ok = succeeded(com(back, kSurfaceGetDesc, {at(g_cells->desc)}));
    release(back);
    const int32_t width = int32_t(g_cells->desc[6]), height = int32_t(g_cells->desc[7]);
    if (!ok || !width || !height) return;
    const uint32_t black = 0xFF000000u;
    auto clear = [&](int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
        g_cells->rect[0] = x1; g_cells->rect[1] = y1; g_cells->rect[2] = x2; g_cells->rect[3] = y2;
        com(device, kClear, {1, at(g_cells->rect), kClearTarget, black, bits(1.0f), 0});
    };
    clear(0, -5, width, 1);
    clear(-5, 0, 1, height);
    if (g_hide_aa > 1) {
        clear(0, height - 1, width, height + 5);
        clear(width - 1, 0, width + 5, height + 5);
    }
}
#endif
}  // namespace

void install_gamma(const WidescreenSettings& settings) {
#ifndef NFSU2_GUEST_IDENTITY
    if (!g_cells) g_cells = guest_array<Cells>(1);
#endif
    g_hide_aa = settings.hide_aa_bug < 0 ? 0 : settings.hide_aa_bug > 2 ? 2 : settings.hide_aa_bug;
    events().before_reset.push_back([] {
        release_targets();
        g_msaa_checked = false;
    });
    if (settings.console_gamma) events().end_scene.push_back(render_gamma);
    if (g_hide_aa) events().end_scene.push_back(hide_aa_border);
}
}  // namespace nfsu2raw::mods
