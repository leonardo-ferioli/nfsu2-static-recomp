// Console gamma and the anti-aliasing border fix (the mod's PostFX and MSAA modules).
// Gamma: just before the game ends its scene, the picture is copied to a texture and drawn back through a pixel shader that applies
// the Xbox 360 gamma curve. The shader is the mod's (X360GammaApprox), compiled here with the system's HLSL compiler (d3dcompiler_47).
// Unlike the mod, no D3DX library is needed.
#include "mods_internal.hpp"
#include "guest_memory.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <d3d9.h>

namespace nfsu2raw::mods {
namespace {
// The part of ID3DBlob that is used (d3dcompiler.h is not needed).
struct Blob : IUnknown {
    virtual void* STDMETHODCALLTYPE GetBufferPointer() = 0;
    virtual SIZE_T STDMETHODCALLTYPE GetBufferSize() = 0;
};

const char kGammaShader[] =
    "sampler2D InputTex : register(s0);\n"
    "float X360GammaApprox(float x)\n"
    "{\n"
    "    float A = 0.541901f; float B = 1.13465f; float C = 13.53054f; float D = 6.56649f; float E = 0.311465f;\n"
    "    x = max(0.0f, x);\n"
    "    float f1 = A * x;\n"
    "    float f2 = pow(x, B) * (1.0f - exp2(-C * x));\n"
    "    float f3 = saturate(x * D + E);\n"
    "    return lerp(f1, f2, f3);\n"
    "}\n"
    "float4 main(in float2 uv : TEXCOORD0) : COLOR0\n"
    "{\n"
    "    float3 color = tex2D(InputTex, uv).rgb;\n"
    "    return float4(X360GammaApprox(color.x), X360GammaApprox(color.y), X360GammaApprox(color.z), 1.0f);\n"
    "}\n";

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
    auto* device = nfsu2::guest::host_handle<IDirect3DDevice9*>(u32_at(address_of("d3d_device")));
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
    auto* device = nfsu2::guest::host_handle<IDirect3DDevice9*>(u32_at(address_of("d3d_device")));
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
}  // namespace

void install_gamma(const WidescreenSettings& settings) {
    g_hide_aa = settings.hide_aa_bug < 0 ? 0 : settings.hide_aa_bug > 2 ? 2 : settings.hide_aa_bug;
    events().before_reset.push_back([] {
        release_targets();
        g_msaa_checked = false;
    });
    if (settings.console_gamma) events().end_scene.push_back(render_gamma);
    if (g_hide_aa) events().end_scene.push_back(hide_aa_border);
}
}  // namespace nfsu2raw::mods
