// Shader spike S1, equivalence test (console, no game): renders the same quad with a Direct3D 9 shader on the real Direct3D 9 device (the
// ground truth) and with the translated shader on Direct3D 11 (WARP software rasteriser, our SPIR-V -> SPIRV-Cross -> HLSL -> D3DCompile path), and
// compares the images. Pixel shaders are tested behind a hand-assembled pass-through vertex shader, vertex shaders in front of a pass-through
// pixel shader that writes a colour or a texture coordinate. Shader blobs are game data and come from a folder outside the repository.
//
//   shader_equiv <blob folder> [--seeds N] [--dump <folder for images>]
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <d3d9.h>
#include <d3d11.h>
#include <d3dcompiler.h>
#include "nue/shader/cross_compile.hpp"
#include "nue/shader/d3d9_shader.hpp"
#include "nue/shader/d3d9_to_spirv.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

using namespace nue::shader;
namespace fs = std::filesystem;

namespace {
constexpr int W = 32, H = 32;

template <class T> struct Com {
    T* p = nullptr;
    Com() = default;
    Com(const Com&) = delete;
    ~Com() { if (p) p->Release(); }
    T** operator&() { return &p; }
    T* operator->() const { return p; }
    operator T*() const { return p; }
};

struct Rng {
    uint32_t s;
    explicit Rng(uint32_t seed) : s(seed * 2654435761u + 12345u) {}
    uint32_t next() { s = s * 1664525u + 1013904223u; return s >> 8; }
    float unit() { return float(next() & 0xFFFF) / 65535.0f; }
    float range(float lo, float hi) { return lo + (hi - lo) * unit(); }
};

// ---- hand-assembled pass-through shaders (tokens)
constexpr uint32_t dst_token(unsigned type, unsigned index, unsigned mask = 0xF) { return 0x80000000u | ((type & 7) << 28) | ((type & 0x18) << 8) | (mask << 16) | index; }
constexpr uint32_t src_token(unsigned type, unsigned index, unsigned swizzle = 0xE4) { return 0x80000000u | ((type & 7) << 28) | ((type & 0x18) << 8) | (swizzle << 16) | index; }
enum { T_TEMP = 0, T_INPUT = 1, T_CONST = 2, T_TEX = 3, T_RAST = 4, T_ATTR = 5, T_TCOUT = 6, T_COLOROUT = 8 };

std::vector<uint32_t> passthrough_vs() {   // vs_1_1: position, two colours, four texture coordinates in v0..v6
    std::vector<uint32_t> t = {0xFFFE0101};
    const unsigned usages[7] = {0, 10, 10, 5, 5, 5, 5}, indices[7] = {0, 0, 1, 0, 1, 2, 3};
    for (unsigned i = 0; i < 7; ++i) { t.push_back(0x0000001F); t.push_back(0x80000000u | usages[i] | (indices[i] << 16)); t.push_back(dst_token(T_INPUT, i)); }
    auto mov = [&](uint32_t d, uint32_t s) { t.push_back(0x00000001); t.push_back(d); t.push_back(s); };
    mov(dst_token(T_RAST, 0), src_token(T_INPUT, 0));
    mov(dst_token(T_ATTR, 0), src_token(T_INPUT, 1));
    mov(dst_token(T_ATTR, 1), src_token(T_INPUT, 2));
    for (unsigned i = 0; i < 4; ++i) mov(dst_token(T_TCOUT, i), src_token(T_INPUT, 3 + i));
    t.push_back(0x0000FFFF);
    return t;
}

std::vector<uint32_t> passthrough_ps(int what) {   // ps_1_1: r0 = v0 (what 0), or the coordinates t0 / t1 as a colour (clamped by the texcoord instruction)
    std::vector<uint32_t> t = {0xFFFF0101};
    if (what == 0) { t.push_back(0x01); t.push_back(dst_token(T_TEMP, 0)); t.push_back(src_token(T_INPUT, 0)); }
    else {
        t.push_back(0x40); t.push_back(dst_token(T_TEX, what - 1));
        t.push_back(0x01); t.push_back(dst_token(T_TEMP, 0)); t.push_back(src_token(T_TEX, what - 1));
    }
    t.push_back(0x0000FFFF);
    return t;
}

// ---- shader model 2/3 pass-throughs and HLSL test cases (compiled with the Direct3D 9 profiles of d3dcompiler_47)
const char* kPassVs3 = R"(
struct VIn { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; float4 t2 : TEXCOORD2; float4 t3 : TEXCOORD3; };
struct VOut { float4 p : POSITION; float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; float4 t2 : TEXCOORD2; float4 t3 : TEXCOORD3; };
VOut main(VIn i) { VOut o; o.p = i.p; o.c0 = i.c0; o.c1 = i.c1; o.t0 = i.t0; o.t1 = i.t1; o.t2 = i.t2; o.t3 = i.t3; return o; }
)";
const char* kPassPs3[3] = {   // the colour, texture coordinate 0 and texture coordinate 1 written as the colour
    "struct PIn { float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };\nfloat4 main(PIn i) : COLOR { return i.c0 + i.c1 * 0.0 + i.t0 * 0.0 + i.t1 * 0.0; }\n",
    "struct PIn { float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };\nfloat4 main(PIn i) : COLOR { return i.t0 + i.c0 * 0.0 + i.c1 * 0.0 + i.t1 * 0.0; }\n",
    "struct PIn { float4 c0 : COLOR0; float4 c1 : COLOR1; float4 t0 : TEXCOORD0; float4 t1 : TEXCOORD1; };\nfloat4 main(PIn i) : COLOR { return i.t1 + i.c0 * 0.0 + i.c1 * 0.0 + i.t0 * 0.0; }\n",
};

bool compile_hlsl(const std::string& source, const char* profile, unsigned flags, std::vector<uint32_t>& tokens, std::string& error) {
    Com<ID3DBlob> code, errors;
    if (FAILED(D3DCompile(source.data(), source.size(), "case", nullptr, nullptr, "main", profile, flags, 0, &code, &errors))) {
        error = errors.p ? std::string(static_cast<const char*>(errors->GetBufferPointer())) : "D3DCompile failed";
        return false;
    }
    tokens.resize(code->GetBufferSize() / 4);
    std::memcpy(tokens.data(), code->GetBufferPointer(), tokens.size() * 4);
    return true;
}

// ---- test data
struct Scene {
    float vertices[4][64];       // sixteen float4 vertex registers (v0 = position; the pass-through VS uses v0..v6), as a triangle strip
    float vs_constants[96 * 4];
    float ps_constants[32 * 4];
    uint32_t textures[4][8 * 8]; // A8R8G8B8
};

void make_scene(Scene& s, uint32_t seed) {
    Rng rng(seed);
    const char* q = std::getenv("EQUIV_QUAD"); const float qs = q ? float(std::atof(q)) : 1.25f;
    const float corners[4][2] = {{-qs, qs}, {qs, qs}, {-qs, -qs}, {qs, -qs}};
    for (int v = 0; v < 4; ++v) {
        float* f = s.vertices[v];
        f[0] = corners[v][0]; f[1] = corners[v][1]; f[2] = 0.5f; f[3] = 1.0f;
        for (int k = 4; k < 64; ++k) f[k] = rng.range(0.0f, 1.0f);
    }
    for (int i = 0; i < 96 * 4; ++i) s.vs_constants[i] = rng.range(-1.0f, 1.0f);
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) s.vs_constants[i * 4 + j] = i == j ? 1.0f : 0.0f;   // c0..c3 = identity (the usual world-view-projection)
    for (int i = 0; i < 32 * 4; ++i) s.ps_constants[i] = rng.range(-1.5f, 1.5f);
    for (auto& tex : s.textures) for (auto& texel : tex) texel = rng.next() | (rng.next() << 24);
    if (std::getenv("EQUIV_CONST")) { for (int v = 0; v < 4; ++v) { s.vertices[v][12] = 0.25f; s.vertices[v][13] = 0.75f; s.vertices[v][14] = 0.0f; s.vertices[v][15] = 1.0f; } }
    if (std::getenv("EQUIV_SIMPLE")) {   // controlled data: texcoord0 = (0..1, 0..1) across the quad, texel (x, y) = (x*32, y*32, 0, 255)
        for (int v = 0; v < 4; ++v) { s.vertices[v][12] = corners[v][0] > 0 ? 1.0f : 0.0f; s.vertices[v][13] = corners[v][1] > 0 ? 0.0f : 1.0f; s.vertices[v][14] = 0; s.vertices[v][15] = 1; for (int k = 0; k < 4; ++k) s.vertices[v][4 + k] = s.vertices[v][12 + k]; }
        for (auto& tex : s.textures) for (int y = 0; y < 8; ++y) for (int x = 0; x < 8; ++x) tex[y * 8 + x] = 0xFF000000u | (uint32_t(x * 32) << 16) | (uint32_t(y * 32) << 8);
    }
}

struct Image { std::vector<uint8_t> bgra = std::vector<uint8_t>(W * H * 4); };

int ib_int[16][4] = {{3, 0, 1, 0}, {2, 0, 1, 0}, {4, 1, 2, 0}};
float ib_bool[16] = {1, 0, 1, 0};

// ---- Direct3D 9 (ground truth)
struct D9 {
    HWND hwnd = nullptr;
    Com<IDirect3D9> d3d;
    Com<IDirect3DDevice9> dev;
    Com<IDirect3DSurface9> rt, sys;
    bool init() {
        hwnd = CreateWindowExA(0, "STATIC", "equiv", WS_POPUP, 0, 0, 64, 64, nullptr, nullptr, GetModuleHandleA(nullptr), nullptr);
        d3d.p = Direct3DCreate9(D3D_SDK_VERSION);
        if (!d3d.p) return false;
        D3DPRESENT_PARAMETERS pp{};
        pp.Windowed = TRUE; pp.SwapEffect = D3DSWAPEFFECT_DISCARD; pp.BackBufferFormat = D3DFMT_UNKNOWN; pp.hDeviceWindow = hwnd;
        pp.BackBufferWidth = 64; pp.BackBufferHeight = 64;
        HRESULT hr = d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &pp, &dev);
        if (FAILED(hr)) hr = d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &pp, &dev);
        if (FAILED(hr)) return false;
        if (FAILED(dev->CreateRenderTarget(W, H, D3DFMT_A8R8G8B8, D3DMULTISAMPLE_NONE, 0, FALSE, &rt, nullptr))) return false;
        if (FAILED(dev->CreateOffscreenPlainSurface(W, H, D3DFMT_A8R8G8B8, D3DPOOL_SYSTEMMEM, &sys, nullptr))) return false;
        return true;
    }
    bool render(const std::vector<uint32_t>& vs, const std::vector<uint32_t>& ps, const std::vector<std::pair<unsigned, unsigned>>& vs_inputs /*register, usage*index packed*/,
                const Scene& scene, unsigned vs_consts, unsigned ps_consts, Image& out, std::string& error) {
        Com<IDirect3DVertexShader9> vshader; Com<IDirect3DPixelShader9> pshader; Com<IDirect3DVertexDeclaration9> decl;
        if (FAILED(dev->CreateVertexShader(reinterpret_cast<const DWORD*>(vs.data()), &vshader))) { error = "D3D9 CreateVertexShader failed"; return false; }
        { const HRESULT hr = dev->CreatePixelShader(reinterpret_cast<const DWORD*>(ps.data()), &pshader); if (FAILED(hr)) { D3DCAPS9 caps{}; dev->GetDeviceCaps(&caps); char text[160]; std::snprintf(text, sizeof text, "D3D9 CreatePixelShader failed hr=%08x (device ps %04x vs %04x)", unsigned(hr), unsigned(caps.PixelShaderVersion & 0xFFFF), unsigned(caps.VertexShaderVersion & 0xFFFF)); error = text; return false; } }
        // declaration: one float4 element per shader input, at the offset of the scene's vertex layout (position 0, colour 1, 2, texcoord 3..6)
        std::vector<D3DVERTEXELEMENT9> elements;
        for (auto [reg, packed] : vs_inputs) {
            D3DVERTEXELEMENT9 e{};
            e.Stream = 0; e.Offset = WORD(reg * 16); e.Type = D3DDECLTYPE_FLOAT4; e.Method = D3DDECLMETHOD_DEFAULT;
            e.Usage = BYTE(packed & 0xFF); e.UsageIndex = BYTE(packed >> 8);
            elements.push_back(e);
        }
        elements.push_back(D3DDECL_END());
        if (FAILED(dev->CreateVertexDeclaration(elements.data(), &decl))) { error = "D3D9 CreateVertexDeclaration failed"; return false; }
        dev->SetRenderTarget(0, rt);
        dev->SetDepthStencilSurface(nullptr);
        dev->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
        dev->SetRenderState(D3DRS_ZENABLE, FALSE);
        dev->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
        dev->SetRenderState(D3DRS_ALPHATESTENABLE, FALSE);
        dev->SetRenderState(D3DRS_LIGHTING, FALSE);
        D3DVIEWPORT9 vp{0, 0, W, H, 0.0f, 1.0f};
        dev->SetViewport(&vp);
        Com<IDirect3DTexture9> textures[4];
        for (int i = 0; i < 4; ++i) {
            if (FAILED(dev->CreateTexture(8, 8, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &textures[i], nullptr))) { error = "CreateTexture"; return false; }
            D3DLOCKED_RECT lr; textures[i]->LockRect(0, &lr, nullptr, 0);
            for (int y = 0; y < 8; ++y) std::memcpy(static_cast<uint8_t*>(lr.pBits) + y * lr.Pitch, &scene.textures[i][y * 8], 32);
            textures[i]->UnlockRect(0);
            dev->SetTexture(i, textures[i]);
            dev->SetSamplerState(i, D3DSAMP_ADDRESSU, D3DTADDRESS_WRAP); dev->SetSamplerState(i, D3DSAMP_ADDRESSV, D3DTADDRESS_WRAP);
            dev->SetSamplerState(i, D3DSAMP_MINFILTER, D3DTEXF_POINT); dev->SetSamplerState(i, D3DSAMP_MAGFILTER, D3DTEXF_POINT); dev->SetSamplerState(i, D3DSAMP_MIPFILTER, D3DTEXF_NONE);
            dev->SetTextureStageState(i, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_DISABLE);
        }
        dev->SetVertexShaderConstantF(0, scene.vs_constants, vs_consts);
        dev->SetPixelShaderConstantF(0, scene.ps_constants, ps_consts);
        { BOOL bools[16]; for (int i = 0; i < 16; ++i) bools[i] = ib_bool[i] != 0.0f ? TRUE : FALSE;
          dev->SetVertexShaderConstantI(0, &ib_int[0][0], 16); dev->SetPixelShaderConstantI(0, &ib_int[0][0], 16);
          dev->SetVertexShaderConstantB(0, bools, 16); dev->SetPixelShaderConstantB(0, bools, 16); }
        dev->Clear(0, nullptr, D3DCLEAR_TARGET, 0x00000000, 1.0f, 0);
        dev->BeginScene();
        dev->SetVertexDeclaration(decl);
        dev->SetVertexShader(vshader);
        dev->SetPixelShader(pshader);
        dev->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, scene.vertices, sizeof(scene.vertices[0]));
        dev->EndScene();
        if (FAILED(dev->GetRenderTargetData(rt, sys))) { error = "GetRenderTargetData failed"; return false; }
        D3DLOCKED_RECT lr;
        if (FAILED(sys->LockRect(&lr, nullptr, D3DLOCK_READONLY))) { error = "LockRect failed"; return false; }
        for (int y = 0; y < H; ++y) std::memcpy(&out.bgra[y * W * 4], static_cast<uint8_t*>(lr.pBits) + y * lr.Pitch, W * 4);
        sys->UnlockRect();
        dev->SetTexture(0, nullptr); dev->SetTexture(1, nullptr); dev->SetTexture(2, nullptr); dev->SetTexture(3, nullptr);
        return true;
    }
};

// ---- Direct3D 11 (translated shaders)
struct D11 {
    Com<ID3D11Device> dev; Com<ID3D11DeviceContext> ctx; Com<ID3D11Texture2D> rt, staging; Com<ID3D11RenderTargetView> rtv;
    bool init() {
        D3D_FEATURE_LEVEL level;
        const D3D_FEATURE_LEVEL wanted[] = {D3D_FEATURE_LEVEL_11_0};
        if (FAILED(D3D11CreateDevice(nullptr, std::getenv("EQUIV_HW") ? D3D_DRIVER_TYPE_HARDWARE : D3D_DRIVER_TYPE_WARP, nullptr, 0, wanted, 1, D3D11_SDK_VERSION, &dev, &level, &ctx))) return false;
        D3D11_TEXTURE2D_DESC d{};
        d.Width = W; d.Height = H; d.MipLevels = 1; d.ArraySize = 1; d.Format = DXGI_FORMAT_B8G8R8A8_UNORM; d.SampleDesc.Count = 1;
        d.Usage = D3D11_USAGE_DEFAULT; d.BindFlags = D3D11_BIND_RENDER_TARGET;
        if (FAILED(dev->CreateTexture2D(&d, nullptr, &rt))) return false;
        d.Usage = D3D11_USAGE_STAGING; d.BindFlags = 0; d.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        if (FAILED(dev->CreateTexture2D(&d, nullptr, &staging))) return false;
        return SUCCEEDED(dev->CreateRenderTargetView(rt, nullptr, &rtv));
    }

    static bool compile(const TranslateResult& translated, Stage stage, std::string& hlsl, Com<ID3DBlob>& code, std::string& error) {
        if (!cross_compile(translated.spirv, stage, Target::hlsl50, {}, hlsl, error)) return false;
        Com<ID3DBlob> errors;
        if (FAILED(D3DCompile(hlsl.data(), hlsl.size(), "equiv", nullptr, nullptr, "main", stage == Stage::vertex ? "vs_5_0" : "ps_5_0", 0, 0, &code, &errors))) {
            error = errors.p ? std::string(static_cast<const char*>(errors->GetBufferPointer())) : "D3DCompile failed";
            return false;
        }
        return true;
    }

    bool render(const Program& vs_program, const Program& ps_program, const Scene& scene, Image& out, std::string& error) {
        TranslateOptions vs_options, ps_options;
        TranslateResult vs, ps;
        if (!translate_to_spirv(vs_program, vs_options, vs)) { error = "vs lowering: " + vs.error; return false; }
        if (!translate_to_spirv(ps_program, ps_options, ps)) { error = "ps lowering: " + ps.error; return false; }
        std::string vs_hlsl, ps_hlsl;
        Com<ID3DBlob> vs_code, ps_code;
        if (!compile(vs, Stage::vertex, vs_hlsl, vs_code, error)) { error = "vs: " + error; return false; }
        if (!compile(ps, Stage::pixel, ps_hlsl, ps_code, error)) { error = "ps: " + error; return false; }
        if (std::getenv("EQUIV_HLSL")) { std::printf("---- VS\n%s\n---- PS\n%s\n", vs_hlsl.c_str(), ps_hlsl.c_str()); }
        Com<ID3D11VertexShader> vsh; Com<ID3D11PixelShader> psh;
        if (FAILED(dev->CreateVertexShader(vs_code->GetBufferPointer(), vs_code->GetBufferSize(), nullptr, &vsh))) { error = "CreateVertexShader"; return false; }
        if (FAILED(dev->CreatePixelShader(ps_code->GetBufferPointer(), ps_code->GetBufferSize(), nullptr, &psh))) { error = "CreatePixelShader"; return false; }
        std::vector<D3D11_INPUT_ELEMENT_DESC> layout;
        for (const VertexInput& in : vs.inputs) {
            D3D11_INPUT_ELEMENT_DESC e{};
            {   // the semantic names the cross-compiler gives to bgfx attribute numbers (nue::shader::cross_compile)
                static const char* const names[] = {"POSITION", "NORMAL", "TANGENT", "BITANGENT", "COLOR", "COLOR", "COLOR", "COLOR", "BLENDINDICES", "BLENDWEIGHT"};
                static const unsigned indices[] = {0, 0, 0, 0, 0, 1, 2, 3, 0, 0};
                if (in.attribute < 10) { e.SemanticName = names[in.attribute]; e.SemanticIndex = indices[in.attribute]; } else { e.SemanticName = "TEXCOORD"; e.SemanticIndex = in.attribute - 10; }
            } e.Format = DXGI_FORMAT_R32G32B32A32_FLOAT; e.AlignedByteOffset = in.reg * 16;
            e.InputSlotClass = D3D11_INPUT_PER_VERTEX_DATA;
            layout.push_back(e);
            if (std::getenv("EQUIV_HLSL")) std::printf("input reg %u attribute %u offset %u\n", unsigned(in.reg), unsigned(in.attribute), unsigned(e.AlignedByteOffset));
        }
        Com<ID3D11InputLayout> il;
        if (FAILED(dev->CreateInputLayout(layout.data(), UINT(layout.size()), vs_code->GetBufferPointer(), vs_code->GetBufferSize(), &il))) { error = "CreateInputLayout"; return false; }
        // constant buffers: { float4 u_fix0; float4 u_fix1; float4 c[N]; [float4 ib[32]: integer then boolean registers] }
        auto make_buffer = [&](const float* constants, uint32_t count, const float fix[8], uint32_t ib_registers, Com<ID3D11Buffer>& buffer) {
            std::vector<float> data((2 + count + ib_registers) * 4);
            std::memcpy(data.data(), fix, 32);
            std::memcpy(data.data() + 8, constants, size_t(count) * 16);
            if (ib_registers) { for (uint32_t i = 0; i < 16; ++i) for (int k = 0; k < 4; ++k) data[(2 + count + i) * 4 + k] = ib_int[i][k]; for (uint32_t i = 0; i < 16; ++i) data[(2 + count + 16 + i) * 4] = ib_bool[i]; }
            D3D11_BUFFER_DESC bd{}; bd.ByteWidth = UINT(data.size() * 4); bd.BindFlags = D3D11_BIND_CONSTANT_BUFFER; bd.Usage = D3D11_USAGE_IMMUTABLE;
            D3D11_SUBRESOURCE_DATA init{data.data(), 0, 0};
            return SUCCEEDED(dev->CreateBuffer(&bd, &init, &buffer));
        };
        const char* fx = std::getenv("EQUIV_FIX"); const float fs = fx ? float(std::atof(fx)) : -1.0f;
        const float fix[8] = {1.0f, 1.0f, -fs / W, fs / H, 1.0f, 0.0f, 0.0f, 0.0f}, zero[8] = {};
        Com<ID3D11Buffer> vs_cb, ps_cb;
        if (!make_buffer(scene.vs_constants, vs.constant_registers, fix, vs.int_bool_registers, vs_cb) || !make_buffer(scene.ps_constants, ps.constant_registers, zero, ps.int_bool_registers, ps_cb)) { error = "CreateBuffer"; return false; }
        D3D11_BUFFER_DESC vbd{}; vbd.ByteWidth = sizeof(scene.vertices); vbd.BindFlags = D3D11_BIND_VERTEX_BUFFER; vbd.Usage = D3D11_USAGE_IMMUTABLE;
        D3D11_SUBRESOURCE_DATA vinit{scene.vertices, 0, 0};
        Com<ID3D11Buffer> vb;
        if (FAILED(dev->CreateBuffer(&vbd, &vinit, &vb))) { error = "CreateBuffer vb"; return false; }
        Com<ID3D11ShaderResourceView> srvs[4]; Com<ID3D11Texture2D> textures[4]; Com<ID3D11SamplerState> samplers[4];
        for (int i = 0; i < 4; ++i) {
            D3D11_TEXTURE2D_DESC td{}; td.Width = 8; td.Height = 8; td.MipLevels = 1; td.ArraySize = 1; td.Format = DXGI_FORMAT_B8G8R8A8_UNORM; td.SampleDesc.Count = 1;
            td.Usage = D3D11_USAGE_IMMUTABLE; td.BindFlags = D3D11_BIND_SHADER_RESOURCE;
            D3D11_SUBRESOURCE_DATA tinit{scene.textures[i], 32, 0};
            if (FAILED(dev->CreateTexture2D(&td, &tinit, &textures[i])) || FAILED(dev->CreateShaderResourceView(textures[i], nullptr, &srvs[i]))) { error = "texture"; return false; }
            D3D11_SAMPLER_DESC sd{}; sd.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT; sd.AddressU = sd.AddressV = sd.AddressW = D3D11_TEXTURE_ADDRESS_WRAP; sd.MaxLOD = D3D11_FLOAT32_MAX;
            sd.ComparisonFunc = D3D11_COMPARISON_NEVER;
            if (FAILED(dev->CreateSamplerState(&sd, &samplers[i]))) { error = "sampler"; return false; }
        }
        D3D11_RASTERIZER_DESC rd{}; rd.FillMode = D3D11_FILL_SOLID; rd.CullMode = D3D11_CULL_NONE; rd.DepthClipEnable = TRUE;
        Com<ID3D11RasterizerState> rs; dev->CreateRasterizerState(&rd, &rs);
        D3D11_BLEND_DESC bd{}; bd.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
        Com<ID3D11BlendState> bs; dev->CreateBlendState(&bd, &bs);
        D3D11_DEPTH_STENCIL_DESC dd{}; dd.DepthEnable = FALSE;
        Com<ID3D11DepthStencilState> ds; dev->CreateDepthStencilState(&dd, &ds);

        const float clear[4] = {0, 0, 0, 0};
        ctx->ClearRenderTargetView(rtv, clear);
        ID3D11RenderTargetView* targets[1] = {rtv};
        ctx->OMSetRenderTargets(1, targets, nullptr);
        ctx->OMSetBlendState(bs, nullptr, 0xFFFFFFFF);
        ctx->OMSetDepthStencilState(ds, 0);
        ctx->RSSetState(rs);
        D3D11_VIEWPORT vp{0, 0, float(W), float(H), 0.0f, 1.0f};
        ctx->RSSetViewports(1, &vp);
        ctx->IASetInputLayout(il);
        ctx->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP);
        UINT stride = sizeof(scene.vertices[0]), offset = 0;
        ID3D11Buffer* vbs[1] = {vb};
        ctx->IASetVertexBuffers(0, 1, vbs, &stride, &offset);
        ctx->VSSetShader(vsh, nullptr, 0); ctx->PSSetShader(psh, nullptr, 0);
        ID3D11Buffer* cbs_v[1] = {vs_cb}; ID3D11Buffer* cbs_p[1] = {ps_cb};
        ctx->VSSetConstantBuffers(0, 1, cbs_v); ctx->PSSetConstantBuffers(0, 1, cbs_p);
        for (int i = 0; i < 4; ++i) { ID3D11ShaderResourceView* v = srvs[i]; ID3D11SamplerState* s = samplers[i]; ctx->PSSetShaderResources(i, 1, &v); ctx->PSSetSamplers(i, 1, &s); }
        ctx->Draw(4, 0);
        ctx->CopyResource(staging, rt);
        D3D11_MAPPED_SUBRESOURCE mapped;
        if (FAILED(ctx->Map(staging, 0, D3D11_MAP_READ, 0, &mapped))) { error = "Map"; return false; }
        for (int y = 0; y < H; ++y) std::memcpy(&out.bgra[y * W * 4], static_cast<uint8_t*>(mapped.pData) + y * mapped.RowPitch, W * 4);
        ctx->Unmap(staging, 0);
        ctx->ClearState();
        return true;
    }
};

std::vector<uint8_t> read_file(const fs::path& p) { std::ifstream f(p, std::ios::binary); return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), {}); }

struct Diff { int max = 0; double mean = 0; int over = 0; };
Diff compare(const Image& a, const Image& b, int tolerance) {
    Diff d; long long total = 0;
    for (int i = 0; i < W * H * 4; ++i) {
        const int v = std::abs(int(a.bgra[i]) - int(b.bgra[i]));
        d.max = std::max(d.max, v); total += v;
        if (v > tolerance) ++d.over;
    }
    d.mean = double(total) / (W * H * 4);
    return d;
}

void write_bmp(const fs::path& path, const Image& a) {
    std::ofstream f(path, std::ios::binary);
    uint32_t size = 54 + W * H * 4;
    uint8_t header[54] = {'B', 'M'};
    std::memcpy(header + 2, &size, 4); header[10] = 54; header[14] = 40;
    int32_t w = W, h = -H; std::memcpy(header + 18, &w, 4); std::memcpy(header + 22, &h, 4); header[26] = 1; header[28] = 32;
    f.write(reinterpret_cast<char*>(header), 54);
    f.write(reinterpret_cast<const char*>(a.bgra.data()), std::streamsize(a.bgra.size()));
}
}  // namespace

int main(int argc, char** argv) {
    if (argc < 2) { std::fprintf(stderr, "usage: shader_equiv <blob folder> [--seeds N] [--dump <folder>]\n"); return 2; }
    int seeds = 3; std::string dump;
    for (int i = 2; i + 1 < argc; ++i) { if (!std::strcmp(argv[i], "--seeds")) seeds = std::atoi(argv[i + 1]); if (!std::strcmp(argv[i], "--dump")) dump = argv[i + 1]; }
    D9 d9; D11 d11;
    if (!d9.init()) { std::printf("cannot create the Direct3D 9 device\n"); return 3; }
    if (!d11.init()) { std::printf("cannot create the Direct3D 11 WARP device\n"); return 3; }
    if (!dump.empty()) fs::create_directories(dump);

    std::vector<fs::path> files;
    for (auto& e : fs::directory_iterator(argv[1])) if (e.is_regular_file()) files.push_back(e.path());
    const char* only = std::getenv("EQUIV_ONLY");   // substring filter on the file name
    std::sort(files.begin(), files.end());

    const auto vs_pass = passthrough_vs();
    Program vs_pass_program; std::string error;
    decode(vs_pass, vs_pass_program, error);
    std::vector<uint32_t> vs3_pass, ps3_pass[3];
    Program vs3_pass_program;
    if (!compile_hlsl(kPassVs3, "vs_3_0", 0, vs3_pass, error) || !decode(vs3_pass, vs3_pass_program, error)) { std::printf("vs_3_0 pass-through: %s\n", error.c_str()); return 4; }
    for (int k = 0; k < 3; ++k) if (!compile_hlsl(kPassPs3[k], "ps_3_0", 0, ps3_pass[k], error)) { std::printf("ps_3_0 pass-through: %s\n", error.c_str()); return 4; }
    auto vertex_inputs = [](const Program& program) {   // the registers the vertex shader declares, read from the scene's vertex data by register number
        std::vector<std::pair<unsigned, unsigned>> inputs;
        for (const Instruction& in : program.code) if (in.opcode == op_dcl && in.dst.type == RegType::input) inputs.push_back({in.dst.index, in.dcl_usage | (in.dcl_index << 8)});
        return inputs;
    };

    int tests = 0, failed = 0;
    for (auto& file : files) {
        if (only && file.filename().string().find(only) == std::string::npos) continue;
        std::vector<uint32_t> tokens;
        if (file.extension() == ".hlsl") {   // name.<profile>.hlsl; a first line "// flags: prefer_flow | avoid_flow" selects the compiler's flow-control mode
            const auto bytes = read_file(file);
            const std::string source(bytes.begin(), bytes.end());
            const std::string profile = fs::path(file.stem()).extension().string().substr(1);
            unsigned flags = 0;
            if (source.rfind("// flags: prefer_flow", 0) == 0) flags = D3DCOMPILE_PREFER_FLOW_CONTROL;
            if (source.rfind("// flags: avoid_flow", 0) == 0) flags = D3DCOMPILE_AVOID_FLOW_CONTROL;
            std::string ce;
            if (!compile_hlsl(source, profile.c_str(), flags, tokens, ce)) { std::printf("%-34s HLSL compile failed: %s\n", file.filename().string().c_str(), ce.c_str()); ++failed; continue; }
        } else {
            const auto bytes = read_file(file);
            tokens.resize(bytes.size() / 4);
            std::memcpy(tokens.data(), bytes.data(), tokens.size() * 4);
        }
        Program program;
        if (!decode(tokens, program, error)) { std::printf("%-34s decode failed: %s\n", file.filename().string().c_str(), error.c_str()); ++failed; continue; }
        const bool is_ps = program.stage == Stage::pixel;
        if (std::getenv("EQUIV_DIS")) std::printf("---- %s\n%s\n", file.filename().string().c_str(), disassemble(program).c_str());
        // variants: pixel shader behind the pass-through VS; vertex shader in front of a pass-through PS writing v0, t0 and t1
        const int variants = is_ps ? 1 : 3;
        for (int variant = 0; variant < variants; ++variant) {
            for (int seed = 1; seed <= seeds; ++seed) {
                Scene scene;
                make_scene(scene, uint32_t(seed * 7919 + variant));
                Image truth, translated;
                std::string e9, e11;
                const bool model3 = program.major >= 3;   // shader model 3 pairs only with shader model 3
                const std::vector<uint32_t>& vs = is_ps ? (model3 ? vs3_pass : vs_pass) : tokens;
                const std::vector<uint32_t> ps_pass = is_ps ? std::vector<uint32_t>() : (model3 ? ps3_pass[variant] : passthrough_ps(variant));
                const std::vector<uint32_t>& ps = is_ps ? tokens : ps_pass;
                const Program& vs_decoded = is_ps ? (model3 ? vs3_pass_program : vs_pass_program) : program;
                const std::vector<std::pair<unsigned, unsigned>> inputs = vertex_inputs(vs_decoded);   // the shader's own declarations decide which registers exist
                ++tests;
                Program ps_program;
                if (!decode(ps, ps_program, e11)) { std::printf("internal: ps decode %s\n", e11.c_str()); return 4; }
                const bool ok9 = d9.render(vs, ps, inputs, scene, 96, is_ps ? (program.major >= 2 ? 32 : 8) : 8, truth, e9);
                // The scene's vertex data is laid out with the pass-through VS's register numbers (position 0, colours 1-2, texcoords 3-6); game vertex
                // shaders use their own, so their inputs are read from the same offsets by register number (float4 each).
                const bool ok11 = d11.render(vs_decoded, is_ps ? program : ps_program, scene, translated, e11);
                const std::string label = file.stem().string() + (is_ps ? "" : (variant == 0 ? " [v0]" : variant == 1 ? " [t0]" : " [t1]")) + " seed " + std::to_string(seed);
                if (!ok9 || !ok11) { std::printf("%-44s SETUP %s%s%s\n", label.c_str(), ok9 ? "" : ("D3D9: " + e9).c_str(), ok9 ? "" : " ", ok11 ? "" : ("D3D11: " + e11).c_str()); ++failed; continue; }
                const Diff d = compare(truth, translated, 2);
                const bool pass = d.max <= 3 || double(d.over) / (W * H * 4) < 0.02;
                if (!pass) ++failed;
                if (!pass || !dump.empty()) {
                    std::printf("%-44s max %3d mean %.3f over2 %4d %s\n", label.c_str(), d.max, d.mean, d.over, pass ? "ok" : "MISMATCH");
                    if (!dump.empty()) { write_bmp(fs::path(dump) / (label + ".d3d9.bmp"), truth); write_bmp(fs::path(dump) / (label + ".d3d11.bmp"), translated); }
                }
            }
        }
    }
    std::printf("%d renders, %d failed (tolerance: max <= 3/255, or under 2%% of channels off by more than 2)\n", tests, failed);
    return failed ? 1 : 0;
}
