// Recorder test (console, 32-bit): drives a real Direct3D 9 device on a hidden window, tells the recorder about each call the way the bridge's
// dispatcher does (native target + a stdcall stack frame), then replays the trace into the null device and checks what came out.
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define CINTERFACE
#include <windows.h>
#include <d3d9.h>
#include "d3d9_recorder.hpp"
#include "platform/d3d9_trace.hpp"
#include "platform/null/null_platform.hpp"
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace nfsu2raw;
namespace d9 = nfsu2::platform::d3d9;

#define CHECK(cond) do { if (!(cond)) throw std::runtime_error(std::string(__FILE__) + ":" + std::to_string(__LINE__) + " " #cond); } while (0)
#define SLOT(Vtbl, Name) (unsigned(offsetof(Vtbl, Name) / sizeof(void*)))

namespace {
uint32_t u32(const void* p) { return uint32_t(uintptr_t(p)); }
uint32_t vtable_entry(const void* object, unsigned slot) { return reinterpret_cast<const uint32_t*>(*reinterpret_cast<const uint32_t*>(object))[slot]; }

struct Frame {   // a guest stack frame: return address, then the arguments
    uint32_t words[16] = {};
    explicit Frame(std::initializer_list<uint32_t> args) { unsigned i = 1; for (uint32_t a : args) words[i++] = a; }
    uint32_t sp() const { return u32(words); }
};
}  // namespace

int main() try {
    const auto dir = std::filesystem::temp_directory_path() / "nfsu2_recorder_test";
    std::filesystem::remove_all(dir);
    RecorderOptions options;
    options.directory = dir; options.window_frames = 2; options.capture_every = 1; options.start_frame = 0; options.hotkey = false;   // the window is opened by the START file, polled by the recorder's own thread
    D3d9Recorder rec(options);
    CHECK(rec.ok());

    HWND hwnd = CreateWindowExA(0, "STATIC", "recorder", WS_POPUP, 0, 0, 64, 64, nullptr, nullptr, GetModuleHandleA(nullptr), nullptr);
    IDirect3D9* d3d = Direct3DCreate9(D3D_SDK_VERSION);
    if (!d3d || !hwnd) { std::cout << "SKIP no Direct3D 9 / desktop\n"; return 0; }
    rec.created_d3d9(u32(d3d));

    D3DPRESENT_PARAMETERS pp{};
    pp.Windowed = TRUE; pp.SwapEffect = D3DSWAPEFFECT_DISCARD; pp.BackBufferFormat = D3DFMT_X8R8G8B8; pp.BackBufferWidth = 64; pp.BackBufferHeight = 64; pp.hDeviceWindow = hwnd;
    pp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
    IDirect3DDevice9* dev = nullptr;
    CHECK(SUCCEEDED(d3d->lpVtbl->CreateDevice(d3d, 0, D3DDEVTYPE_HAL, hwnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &pp, &dev)));
    { Frame f{u32(d3d), 0, D3DDEVTYPE_HAL, u32(hwnd), D3DCREATE_HARDWARE_VERTEXPROCESSING, u32(&pp), u32(&dev)}; rec.after(vtable_entry(d3d, SLOT(IDirect3D9Vtbl, CreateDevice)), f.sp(), 0, 100); }

    { std::ofstream(dir / "START") << "go"; Sleep(600); CHECK(!std::filesystem::exists(dir / "START")); }   // seen and consumed by the poller thread
    using DV = IDirect3DDevice9Vtbl;
    // texture with data
    IDirect3DTexture9* tex = nullptr;
    CHECK(SUCCEEDED(dev->lpVtbl->CreateTexture(dev, 16, 16, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &tex, nullptr)));
    { Frame f{u32(dev), 16, 16, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, u32(&tex), 0}; rec.after(vtable_entry(dev, SLOT(DV, CreateTexture)), f.sp(), 0, 200); }
    D3DLOCKED_RECT locked;
    CHECK(SUCCEEDED(tex->lpVtbl->LockRect(tex, 0, &locked, nullptr, 0)));
    { Frame f{u32(tex), 0, u32(&locked), 0, 0}; rec.after(vtable_entry(tex, SLOT(IDirect3DTexture9Vtbl, LockRect)), f.sp(), 0, 210); }
    std::memset(locked.pBits, 0x5A, size_t(locked.Pitch) * 16);
    { Frame f{u32(tex), 0}; rec.before(vtable_entry(tex, SLOT(IDirect3DTexture9Vtbl, UnlockRect)), f.sp()); }
    tex->lpVtbl->UnlockRect(tex, 0);
    { Frame f{u32(tex), 0}; rec.after(vtable_entry(tex, SLOT(IDirect3DTexture9Vtbl, UnlockRect)), f.sp(), 0, 220); }
    // vertex buffer with data
    IDirect3DVertexBuffer9* vb = nullptr;
    CHECK(SUCCEEDED(dev->lpVtbl->CreateVertexBuffer(dev, 192, 0, 0, D3DPOOL_MANAGED, &vb, nullptr)));
    { Frame f{u32(dev), 192, 0, 0, D3DPOOL_MANAGED, u32(&vb), 0}; rec.after(vtable_entry(dev, SLOT(DV, CreateVertexBuffer)), f.sp(), 0, 230); }
    void* data = nullptr;
    CHECK(SUCCEEDED(vb->lpVtbl->Lock(vb, 0, 0, &data, 0)));
    { Frame f{u32(vb), 0, 0, u32(&data), 0}; rec.after(vtable_entry(vb, SLOT(IDirect3DVertexBuffer9Vtbl, Lock)), f.sp(), 0, 240); }
    std::memset(data, 0x33, 192);
    { Frame f{u32(vb)}; rec.before(vtable_entry(vb, SLOT(IDirect3DVertexBuffer9Vtbl, Unlock)), f.sp()); }
    vb->lpVtbl->Unlock(vb);
    { Frame f{u32(vb)}; rec.after(vtable_entry(vb, SLOT(IDirect3DVertexBuffer9Vtbl, Unlock)), f.sp(), 0, 250); }
    // a pixel shader: ps_1_1  mov r0, v0
    const DWORD ps_code[] = {0xFFFF0101, 0x00000001, 0x800F0000, 0x90E40000, 0x0000FFFF};
    IDirect3DPixelShader9* ps = nullptr;
    CHECK(SUCCEEDED(dev->lpVtbl->CreatePixelShader(dev, ps_code, &ps)));
    { Frame f{u32(dev), u32(ps_code), u32(&ps)}; rec.after(vtable_entry(dev, SLOT(DV, CreatePixelShader)), f.sp(), 0, 260); }

    auto present = [&](uint64_t at) {
        Frame f{u32(dev), 0, 0, 0, 0};
        const uint32_t target = vtable_entry(dev, SLOT(DV, Present));
        rec.before(target, f.sp());
        CHECK(SUCCEEDED(dev->lpVtbl->Present(dev, nullptr, nullptr, nullptr, nullptr)));
        rec.after(target, f.sp(), 0, at);
    };
    present(300);   // frame 0 ends: the window opens (start_frame = 1) and the state is snapshotted
    // inside the window: states, shader, a draw with user-pointer vertices, present with a reference image
    for (int frame = 0; frame < 2; ++frame) {
        { Frame f{u32(dev), D3DRS_ZENABLE, 0}; dev->lpVtbl->SetRenderState(dev, D3DRS_ZENABLE, 0); rec.after(vtable_entry(dev, SLOT(DV, SetRenderState)), f.sp(), 0, 310); }
        { Frame f{u32(dev), u32(ps)}; dev->lpVtbl->SetPixelShader(dev, ps); rec.after(vtable_entry(dev, SLOT(DV, SetPixelShader)), f.sp(), 0, 320); }
        { Frame f{u32(dev), u32(tex)}; Frame g{u32(dev), 0, u32(tex)}; dev->lpVtbl->SetTexture(dev, 0, reinterpret_cast<IDirect3DBaseTexture9*>(tex)); rec.after(vtable_entry(dev, SLOT(DV, SetTexture)), g.sp(), 0, 330); (void)f; }
        const float verts[3][4] = {{0, 0, 0.5f, 1}, {16, 0, 0.5f, 1}, {0, 16, 0.5f, 1}};
        dev->lpVtbl->SetFVF(dev, D3DFVF_XYZRHW);
        { Frame f{u32(dev), D3DFVF_XYZRHW}; rec.after(vtable_entry(dev, SLOT(DV, SetFVF)), f.sp(), 0, 335); }
        dev->lpVtbl->BeginScene(dev);
        { Frame f{u32(dev)}; rec.after(vtable_entry(dev, SLOT(DV, BeginScene)), f.sp(), 0, 340); }
        dev->lpVtbl->DrawPrimitiveUP(dev, D3DPT_TRIANGLELIST, 1, verts, 16);
        { Frame f{u32(dev), D3DPT_TRIANGLELIST, 1, u32(verts), 16}; rec.after(vtable_entry(dev, SLOT(DV, DrawPrimitiveUP)), f.sp(), 0, 350); }
        dev->lpVtbl->EndScene(dev);
        { Frame f{u32(dev)}; rec.after(vtable_entry(dev, SLOT(DV, EndScene)), f.sp(), 0, 360); }
        present(400 + uint64_t(frame));
    }
    present(500);   // outside the window again: not recorded
    rec.finish();

    // ---- read the trace back
    std::string error;
    d9::TraceReader reader;
    CHECK(reader.open(dir, error));
    nfsu2::platform::null::NullDevice device;
    d9::ReplayStats stats;
    CHECK(d9::replay(reader, device, stats, error));
    std::printf("  records %llu, frames %llu, unsupported %llu, bad objects %llu\n", (unsigned long long)stats.records, (unsigned long long)stats.frames, (unsigned long long)stats.unsupported, (unsigned long long)stats.bad_objects);
    CHECK(stats.bad_objects == 0);
    CHECK(device.calls[size_t(d9::Method::create_texture)] == 1 && device.calls[size_t(d9::Method::create_vertex_buffer)] == 1 && device.calls[size_t(d9::Method::create_pixel_shader)] == 1);
    CHECK(device.calls[size_t(d9::Method::lock_texture)] == 1 && device.calls[size_t(d9::Method::unlock_texture)] == 1);
    CHECK(device.calls[size_t(d9::Method::lock_buffer)] == 1 && device.calls[size_t(d9::Method::unlock_buffer)] == 1);
    CHECK(device.draws == 2);                                        // the two draws of the window
    CHECK(stats.by_op[d9::op_window_begin] == 1 && stats.by_op[d9::op_window_end] == 1);
    CHECK(stats.by_op[d9::op_reference_image] >= 2);                 // a reference image per frame of the window
    CHECK(stats.by_op[uint8_t(d9::Method::set_render_state)] > 100); // the state snapshot at the start of the window
    CHECK(std::filesystem::exists(dir / "recorder.log"));
    int bmps = 0;
    for (auto& e : std::filesystem::directory_iterator(dir)) if (e.path().extension() == ".bmp") ++bmps;
    CHECK(bmps >= 2);
    // the data of the locks reached the blob store
    d9::TraceReader again;
    CHECK(again.open(dir, error));
    d9::Record record;
    bool saw_texture_data = false, saw_buffer_data = false;
    while (again.next(record)) {
        if (record.op == uint8_t(d9::Method::unlock_texture) && record.words.size() >= 7) { const auto blob = again.read_blob(uint64_t(record.words[4]) | (uint64_t(record.words[5]) << 32), record.words[6]); saw_texture_data = blob.size() == size_t(locked.Pitch) * 16 && blob[0] == 0x5A; }
        if (record.op == uint8_t(d9::Method::unlock_buffer) && record.words.size() >= 4) { const auto blob = again.read_blob(uint64_t(record.words[1]) | (uint64_t(record.words[2]) << 32), record.words[3]); saw_buffer_data = blob.size() == 192 && blob[0] == 0x33; }
    }
    CHECK(saw_texture_data && saw_buffer_data);
    reader.close(); again.close();
    ps->lpVtbl->Release(ps); vb->lpVtbl->Release(vb); tex->lpVtbl->Release(tex); dev->lpVtbl->Release(dev); d3d->lpVtbl->Release(d3d);
    std::filesystem::remove_all(dir);
    std::cout << "PASS Direct3D 9 recorder: resources, data of locks, state snapshot, draws, reference images, replay on the null device\n";
    return 0;
} catch (const std::exception& e) {
    std::cerr << "FAIL " << e.what() << '\n';
    return 1;
}
