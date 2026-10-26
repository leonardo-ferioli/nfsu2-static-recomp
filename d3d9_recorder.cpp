#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define CINTERFACE
#include <windows.h>
#include <d3d9.h>
#include "d3d9_recorder.hpp"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <atomic>
#include <map>
#include <mutex>
#include <thread>
#include <tuple>

namespace nfsu2raw {
using namespace nue::d3d9;

namespace {
#define SLOT(Vtbl, Name) (unsigned(offsetof(Vtbl, Name) / sizeof(void*)))
enum class Kind : uint8_t { device, d3d9, vertex_buffer, index_buffer, texture, cube_texture, surface, declaration, vertex_shader, pixel_shader, state_block };

uint32_t u32_at(uint32_t address) { uint32_t v; std::memcpy(&v, reinterpret_cast<const void*>(uintptr_t(address)), 4); return v; }
uint32_t bits(float f) { uint32_t b; std::memcpy(&b, &f, 4); return b; }

bool compressed(uint32_t format) { return format >= 0x31545844 && format <= 0x35545844; }   // 'DXT1'..'DXT5'
uint32_t vertex_count(uint32_t primitive, uint32_t count) {
    switch (primitive) { case 1: return count; case 2: return count * 2; case 3: return count + 1; case 4: return count * 3; default: return count + 2; }
}
uint32_t shader_size(uint32_t address) {   // bytes of a Direct3D 9 shader: version token to the END token, comment blocks skipped
    uint32_t n = 1;
    for (; n < 65536; ++n) {
        const uint32_t token = u32_at(address + n * 4);
        if ((token & 0xFFFF) == 0xFFFE) { n += (token >> 16) & 0x7FFF; continue; }
        if (token == 0x0000FFFF) return (n + 1) * 4;
    }
    return 0;
}
uint32_t declaration_size(uint32_t address) {   // D3DVERTEXELEMENT9 array up to and including D3DDECL_END (Stream 0xFF)
    for (uint32_t n = 0; n < 128; ++n) { uint16_t stream; std::memcpy(&stream, reinterpret_cast<const void*>(uintptr_t(address + n * 8)), 2); if (stream == 0xFF) return (n + 1) * 8; }
    return 0;
}
}  // namespace

namespace {
std::atomic<D3d9Recorder*> g_console_recorder{nullptr};
BOOL WINAPI console_event(DWORD type) {   // Ctrl+C, Ctrl+Break, the console being closed, logoff, shutdown: leave a complete trace, then let Windows do its default
    if (D3d9Recorder* r = g_console_recorder.load()) r->finish();
    (void)type;
    return FALSE;
}
}  // namespace

struct D3d9Recorder::Impl {
    RecorderOptions options;
    TraceWriter writer;
    IDirect3DDevice9* device = nullptr;
    uint32_t d3d9_object = 0;
    std::unordered_map<uint32_t, Kind> objects;
    struct TextureInfo { uint32_t width, height, levels, format; };
    std::unordered_map<uint32_t, TextureInfo> textures;
    std::unordered_map<uint32_t, uint32_t> buffer_sizes;
    struct BufferLock { uint32_t data, offset, bytes; };
    std::unordered_map<uint32_t, BufferLock> buffer_locks;
    struct TextureLock { uint32_t bits, pitch, bytes; };
    std::map<std::tuple<uint32_t, uint32_t, uint32_t>, TextureLock> texture_locks;
    uint64_t frame = 0, instructions = 0, window_index = 0, window_start = 0;
    bool active = false, in_state_block = false;
    std::atomic<bool> window_on{false};
    uint64_t window_draws = 0, window_images = 0;
    uint32_t window_viewport_w = 0, window_viewport_h = 0;
    std::string window_image_names;
    unsigned image_failures = 0;
    unsigned window_frames_left = 0;
    uint64_t calls = 0, unknown_calls = 0;
    std::FILE* log = nullptr;
    ULONGLONG started = 0, last_beat = 0;
    std::atomic<bool> open_pending{false}, stop_poller{false};
    std::recursive_mutex io_mutex;   // the writer is used by the game thread and, at the end, by console-event and exit paths
    bool finished = false;
    std::thread poller;
    std::mutex log_mutex;
    HWND game_window = nullptr;
    char original_title[256] = {};
    void note(const char* text) { std::lock_guard<std::mutex> lock(log_mutex); if (!log) return; std::fprintf(log, "[%6.1f s] %s\n", double(GetTickCount64() - started) / 1000.0, text); std::fflush(log); }
    std::map<unsigned, uint64_t> unknown_slots;

    // ---- trigger: a thread of the recorder polls the keyboard (several keys: F9, F10, F8, Insert, Pause, Scroll Lock, Home, End, the extra mouse buttons) and the START file
    void poll_loop() {
        static const int keys[] = {VK_F9, VK_F10, VK_F8, VK_INSERT, VK_PAUSE, VK_SCROLL, VK_HOME, VK_END, VK_XBUTTON1, VK_XBUTTON2};
        bool was_down = false;
        for (int k : keys) if (GetAsyncKeyState(k) & 0x8000) was_down = true;   // keys already held when the game starts do not count
        const ULONGLONG quiet_until = GetTickCount64() + options.quiet_ms;                 // nor does anything in the first seconds
        ULONGLONG last_file_check = 0;
        const std::string start_file = (options.directory / "START").string();
        while (!stop_poller.load()) {
            Sleep(15);
            bool down = false;
            for (int k : keys) if (options.hotkey && (GetAsyncKeyState(k) & 0x8000)) down = true;
            bool trigger = down && !was_down;
            was_down = down;
            const ULONGLONG now = GetTickCount64();
            if (now - last_file_check >= 200) {
                last_file_check = now;
                if (GetFileAttributesA(start_file.c_str()) != INVALID_FILE_ATTRIBUTES) { DeleteFileA(start_file.c_str()); trigger = true; }
            }
            if (now < quiet_until) trigger = false;
            if (trigger && !window_on.load() && !open_pending.load()) {
                open_pending.store(true);
                note("trigger seen (key or START file): the recording window opens at the next frame");
                Beep(900, 60);
            }
        }
    }
    // ---- visible confirmation: the title of the game's window and a coloured square in the corner of the frame (drawn after the reference image of that frame was taken)
    void set_title(const char* tag) {
        if (!game_window) return;
        char title[320];
        std::snprintf(title, sizeof title, "%s%s", tag, original_title);
        SetWindowTextA(game_window, title);
    }
    void draw_indicator(uint32_t colour) {
        if (!device) return;
        IDirect3DSurface9* back = nullptr;
        if (SUCCEEDED(device->lpVtbl->GetBackBuffer(device, 0, 0, D3DBACKBUFFER_TYPE_MONO, &back)) && back) {
            RECT square = {8, 8, 72, 72};
            device->lpVtbl->ColorFill(device, back, &square, colour);
            back->lpVtbl->Release(back);
        }
    }
    // ---- helpers
    bool resource_op_always(uint8_t op) const {
        switch (op) {
        case uint8_t(Method::create_texture): case uint8_t(Method::create_cube_texture): case uint8_t(Method::create_vertex_buffer): case uint8_t(Method::create_index_buffer):
        case uint8_t(Method::create_render_target): case uint8_t(Method::create_depth_stencil): case uint8_t(Method::create_vertex_declaration):
        case uint8_t(Method::create_vertex_shader): case uint8_t(Method::create_pixel_shader): case uint8_t(Method::destroy_texture): case uint8_t(Method::destroy_buffer):
        case uint8_t(Method::destroy_surface): case uint8_t(Method::destroy_declaration): case uint8_t(Method::destroy_shader): case uint8_t(Method::destroy_state_block):
        case uint8_t(Method::lock_buffer): case uint8_t(Method::unlock_buffer): case uint8_t(Method::lock_texture): case uint8_t(Method::unlock_texture):
        case uint8_t(Method::texture_surface): case uint8_t(Method::reset): case uint8_t(Method::end_state_block): case op_get_back_buffer: case op_device_created: return true;
        default: return false;
        }
    }
    void count_window(uint8_t op, const std::vector<uint32_t>& words) {
        if (!active) return;
        if (op == uint8_t(Method::draw_indexed) || op == uint8_t(Method::draw_up)) ++window_draws;
        if (op == uint8_t(Method::set_viewport) && words.size() >= 4) { window_viewport_w = words[2]; window_viewport_h = words[3]; }
    }
    void emit(uint8_t op, const std::vector<uint32_t>& words) {
        count_window(op, words);
        if (active || in_state_block || resource_op_always(op)) writer.record(op, words);
    }
    static std::vector<uint32_t> blob_words(const Blob& b) { return {uint32_t(b.offset), uint32_t(b.offset >> 32), b.size}; }
    void emit_with_blob(uint8_t op, std::vector<uint32_t> head, const void* data, uint32_t size) {
        count_window(op, head);
        if (!(active || in_state_block || resource_op_always(op))) return;
        const auto b = blob_words(writer.blob(data, size));
        head.insert(head.end(), b.begin(), b.end());
        writer.record(op, head);
    }
    Kind kind_of(uint32_t object, bool& known) const {
        if (device && object == uint32_t(uintptr_t(device))) { known = true; return Kind::device; }
        if (object == d3d9_object) { known = true; return Kind::d3d9; }
        auto it = objects.find(object);
        known = it != objects.end();
        return known ? it->second : Kind::device;
    }
    static int slot_of(uint32_t object, uint32_t target, unsigned limit) {
        const uint32_t vtable = u32_at(object);
        for (unsigned i = 0; i < limit; ++i) if (u32_at(vtable + i * 4) == target) return int(i);
        return -1;
    }
    void add(uint32_t object, Kind kind) { if (object) objects[object] = kind; }

    // ---- window of full recording
    void open_window() {
        if (active) return;
        open_pending.store(false);
        window_on.store(true);
        set_title("[RECORDING] ");
        active = true;
        window_frames_left = options.window_frames;
        window_start = frame;
        window_draws = window_images = 0;
        window_viewport_w = window_viewport_h = 0;
        window_image_names.clear();
        writer.record(op_window_begin, {uint32_t(window_index), uint32_t(frame)});
        snapshot_state();
        char text[160]; std::snprintf(text, sizeof text, "WINDOW %llu OPENED at frame %llu (%u frames will be recorded)", (unsigned long long)window_index, (unsigned long long)frame, window_frames_left);
        note(text);
        writer.flush();
        Beep(1200, 120);
    }
    void close_window() {
        if (!active) return;
        writer.record(op_window_end, {uint32_t(window_index), uint32_t(frame), uint32_t(window_draws), uint32_t(window_images)});
        writer.record(op_checkpoint, {uint32_t(frame), uint32_t(window_index + 1)});
        char text[600];
        const uint64_t frames_in_window = frame > window_start ? frame - window_start : 1;
        std::snprintf(text, sizeof text, "WINDOW %llu CLOSED at frame %llu: frames %llu..%llu, %llu draws (%.0f per frame), last viewport %ux%u, %llu reference images [%s]", (unsigned long long)window_index, (unsigned long long)frame,
                      (unsigned long long)window_start, (unsigned long long)frame, (unsigned long long)window_draws, double(window_draws) / double(frames_in_window), window_viewport_w, window_viewport_h, (unsigned long long)window_images, window_image_names.c_str());
        note(text);
        writer.flush();
        Beep(600, 120);
        window_on.store(false);
        set_title("");
        ++window_index;
        active = false;
    }

    template <class T> void release(T* p) { if (p) p->lpVtbl->Release(p); }
    // A surface the trace has not met (the implicit back buffer and automatic depth buffer exist from device creation): described to the trace.
    void ensure_surface(IDirect3DSurface9* surface) {
        const uint32_t object = uint32_t(uintptr_t(surface));
        if (!surface || objects.count(object)) return;
        D3DSURFACE_DESC desc;
        if (FAILED(surface->lpVtbl->GetDesc(surface, &desc))) return;
        objects[object] = Kind::surface;
        if (desc.Usage & D3DUSAGE_DEPTHSTENCIL) writer.record(uint8_t(Method::create_depth_stencil), {object, desc.Width, desc.Height, uint32_t(desc.Format), uint32_t(desc.MultiSampleType)});
        else writer.record(op_get_back_buffer, {object, 0, 0});
    }
    void snapshot_state() {
        if (!device) return;
        auto* d = device;
        for (uint32_t s = 0; s < 210; ++s) { DWORD v; if (SUCCEEDED(d->lpVtbl->GetRenderState(d, D3DRENDERSTATETYPE(s), &v))) writer.record(uint8_t(Method::set_render_state), {s, v}); }
        for (uint32_t s = 0; s < 16; ++s) for (uint32_t t = 1; t < 14; ++t) { DWORD v; if (SUCCEEDED(d->lpVtbl->GetSamplerState(d, s, D3DSAMPLERSTATETYPE(t), &v))) writer.record(uint8_t(Method::set_sampler_state), {s, t, v}); }
        for (uint32_t s = 0; s < 8; ++s) for (uint32_t t = 1; t < 33; ++t) { DWORD v; if (SUCCEEDED(d->lpVtbl->GetTextureStageState(d, s, D3DTEXTURESTAGESTATETYPE(t), &v))) writer.record(uint8_t(Method::set_texture_stage_state), {s, t, v}); }
        const uint32_t transforms[] = {2, 3, 16, 17, 18, 19, 20, 21, 22, 23, 256};
        for (uint32_t t : transforms) { D3DMATRIX m; if (SUCCEEDED(d->lpVtbl->GetTransform(d, D3DTRANSFORMSTATETYPE(t), &m))) { std::vector<uint32_t> w{t}; for (int i = 0; i < 16; ++i) w.push_back(bits(reinterpret_cast<const float*>(&m)[i])); writer.record(uint8_t(Method::set_transform), w); } }
        D3DVIEWPORT9 vp;
        if (SUCCEEDED(d->lpVtbl->GetViewport(d, &vp))) writer.record(uint8_t(Method::set_viewport), {vp.X, vp.Y, vp.Width, vp.Height, bits(vp.MinZ), bits(vp.MaxZ)});
        for (uint32_t s = 0; s < 16; ++s) { IDirect3DBaseTexture9* t = nullptr; if (SUCCEEDED(d->lpVtbl->GetTexture(d, s, &t))) { writer.record(uint8_t(Method::set_texture), {s, uint32_t(uintptr_t(t))}); release(t); } }
        for (uint32_t s = 0; s < 4; ++s) { IDirect3DVertexBuffer9* vb = nullptr; UINT offset = 0, stride = 0; if (SUCCEEDED(d->lpVtbl->GetStreamSource(d, s, &vb, &offset, &stride)) && vb) { writer.record(uint8_t(Method::set_stream_source), {s, uint32_t(uintptr_t(vb)), offset, stride}); release(vb); } }
        { IDirect3DIndexBuffer9* ib = nullptr; if (SUCCEEDED(d->lpVtbl->GetIndices(d, &ib)) && ib) { writer.record(uint8_t(Method::set_indices), {uint32_t(uintptr_t(ib))}); release(ib); } }
        { IDirect3DVertexDeclaration9* v = nullptr; if (SUCCEEDED(d->lpVtbl->GetVertexDeclaration(d, &v)) && v) { writer.record(uint8_t(Method::set_vertex_declaration), {uint32_t(uintptr_t(v))}); release(v); } }
        { DWORD fvf = 0; if (SUCCEEDED(d->lpVtbl->GetFVF(d, &fvf)) && fvf) writer.record(uint8_t(Method::set_fvf), {fvf}); }
        { IDirect3DVertexShader9* v = nullptr; if (SUCCEEDED(d->lpVtbl->GetVertexShader(d, &v)) && v) { writer.record(uint8_t(Method::set_vertex_shader), {uint32_t(uintptr_t(v))}); release(v); } }
        { IDirect3DPixelShader9* v = nullptr; if (SUCCEEDED(d->lpVtbl->GetPixelShader(d, &v)) && v) { writer.record(uint8_t(Method::set_pixel_shader), {uint32_t(uintptr_t(v))}); release(v); } }
        { static float c[256 * 4]; if (SUCCEEDED(d->lpVtbl->GetVertexShaderConstantF(d, 0, c, 256))) { std::vector<uint32_t> w{0, 256}; for (int i = 0; i < 1024; ++i) w.push_back(bits(c[i])); writer.record(uint8_t(Method::set_vertex_shader_constants_f), w); } }
        { static float c[224 * 4]; if (SUCCEEDED(d->lpVtbl->GetPixelShaderConstantF(d, 0, c, 224))) { std::vector<uint32_t> w{0, 224}; for (int i = 0; i < 896; ++i) w.push_back(bits(c[i])); writer.record(uint8_t(Method::set_pixel_shader_constants_f), w); } }
        for (uint32_t i = 0; i < 4; ++i) { IDirect3DSurface9* s = nullptr; if (SUCCEEDED(d->lpVtbl->GetRenderTarget(d, i, &s)) && s) { ensure_surface(s); writer.record(uint8_t(Method::set_render_target), {i, uint32_t(uintptr_t(s))}); release(s); } }
        { IDirect3DSurface9* s = nullptr; if (SUCCEEDED(d->lpVtbl->GetDepthStencilSurface(d, &s)) && s) { ensure_surface(s); writer.record(uint8_t(Method::set_depth_stencil), {uint32_t(uintptr_t(s))}); release(s); } }
    }

    void image_note(const char* what, HRESULT hr) {
        if (++image_failures > 12) return;
        char text[200]; std::snprintf(text, sizeof text, "reference image FAILED at frame %llu: %s (hr=0x%08x)", (unsigned long long)frame, what, unsigned(hr));
        note(text);
    }
    void capture_reference_image() {
        if (!device) return;
        IDirect3DSurface9* back = nullptr; IDirect3DSurface9* sys = nullptr; IDirect3DSurface9* resolved = nullptr;
        HRESULT hr = device->lpVtbl->GetBackBuffer(device, 0, 0, D3DBACKBUFFER_TYPE_MONO, &back);
        if (FAILED(hr) || !back) { image_note("GetBackBuffer", hr); return; }
        D3DSURFACE_DESC desc;
        back->lpVtbl->GetDesc(back, &desc);
        if (desc.Format != D3DFMT_X8R8G8B8 && desc.Format != D3DFMT_A8R8G8B8) {
            char what[80]; std::snprintf(what, sizeof what, "back buffer format %u is not a 32-bit RGB format", unsigned(desc.Format));
            image_note(what, 0); release(back); return;
        }
        hr = device->lpVtbl->CreateOffscreenPlainSurface(device, desc.Width, desc.Height, desc.Format, D3DPOOL_SYSTEMMEM, &sys, nullptr);
        if (FAILED(hr) || !sys) { image_note("CreateOffscreenPlainSurface", hr); release(back); return; }
        IDirect3DSurface9* source = back;
        if (desc.MultiSampleType != D3DMULTISAMPLE_NONE) {   // a multisampled back buffer cannot be read directly: resolve it into a plain render target first
            hr = device->lpVtbl->CreateRenderTarget(device, desc.Width, desc.Height, desc.Format, D3DMULTISAMPLE_NONE, 0, FALSE, &resolved, nullptr);
            if (SUCCEEDED(hr) && resolved) hr = device->lpVtbl->StretchRect(device, back, nullptr, resolved, nullptr, D3DTEXF_NONE);
            if (FAILED(hr) || !resolved) { image_note("resolve of the multisampled back buffer (StretchRect)", hr); release(resolved); release(sys); release(back); return; }
            source = resolved;
        }
        hr = device->lpVtbl->GetRenderTargetData(device, source, sys);
        if (FAILED(hr)) { image_note("GetRenderTargetData", hr); }
        else {
            D3DLOCKED_RECT lr;
            hr = sys->lpVtbl->LockRect(sys, &lr, nullptr, D3DLOCK_READONLY);
            if (FAILED(hr)) image_note("LockRect of the copy", hr);
            else {
                std::vector<uint8_t> pixels(size_t(desc.Width) * desc.Height * 4);
                for (UINT y = 0; y < desc.Height; ++y) std::memcpy(&pixels[size_t(y) * desc.Width * 4], static_cast<uint8_t*>(lr.pBits) + size_t(y) * lr.Pitch, size_t(desc.Width) * 4);
                sys->lpVtbl->UnlockRect(sys);
                for (size_t i = 3; i < pixels.size(); i += 4) pixels[i] = 255;   // X8R8G8B8 leaves the alpha byte undefined
                emit(op_reference_image, {uint32_t(frame), desc.Width, desc.Height, uint32_t(desc.Format), 0, 0, 0});
                char name[64]; std::snprintf(name, sizeof name, "frame_%06u.bmp", unsigned(frame));
                std::ofstream f(options.directory / name, std::ios::binary);
                const uint32_t file_size = 54 + uint32_t(pixels.size());
                uint8_t header[54] = {'B', 'M'};
                std::memcpy(header + 2, &file_size, 4); header[10] = 54; header[14] = 40;
                const int32_t w = int32_t(desc.Width), h = -int32_t(desc.Height);
                std::memcpy(header + 18, &w, 4); std::memcpy(header + 22, &h, 4); header[26] = 1; header[28] = 32;
                f.write(reinterpret_cast<const char*>(header), 54);
                f.write(reinterpret_cast<const char*>(pixels.data()), std::streamsize(pixels.size()));
                f.close();
                ++window_images;
                if (!window_image_names.empty()) window_image_names += ", ";
                window_image_names += name;
                char text[160]; std::snprintf(text, sizeof text, "reference image saved: %s (%ux%u, format %u%s)", name, desc.Width, desc.Height, unsigned(desc.Format), resolved ? ", multisampled back buffer resolved" : "");
                note(text);
            }
        }
        release(resolved);
        release(sys);
        release(back);
    }
};

D3d9Recorder::D3d9Recorder(const RecorderOptions& options) : impl_(new Impl) {
    impl_->options = options;
    ok_ = impl_->writer.open(options.directory, options.max_blob_mb * 1048576ull, error_);
    if (ok_) DeleteFileA((options.directory / "START").string().c_str());   // a START file left from an earlier run must not trigger this one
    if (ok_) { g_console_recorder.store(this); SetConsoleCtrlHandler(console_event, TRUE); }
    if (ok_) impl_->poller = std::thread([this] { impl_->poll_loop(); });
    if (ok_) {
        impl_->log = std::fopen((options.directory / "recorder.log").string().c_str(), "w");
        impl_->started = impl_->last_beat = GetTickCount64();
        impl_->note("recorder started; press F9 (or create a file named START in this folder) to record a window");
    }
}

D3d9Recorder::~D3d9Recorder() { g_console_recorder.store(nullptr); finish(); if (impl_ && impl_->poller.joinable()) { impl_->stop_poller.store(true); impl_->poller.join(); } }


void D3d9Recorder::created_d3d9(uint32_t object) { std::lock_guard<std::recursive_mutex> lock(impl_->io_mutex); impl_->d3d9_object = object; }

void D3d9Recorder::checkpoint() {
    if (!impl_) return;
    std::lock_guard<std::recursive_mutex> lock(impl_->io_mutex);
    if (!impl_->writer.is_open()) return;
    if (impl_->active) impl_->note("checkpoint (the game is closing or a console event arrived): the window in progress is incomplete");
    impl_->writer.flush();
}

void D3d9Recorder::before(uint32_t target, uint32_t sp) {
    Impl& r = *impl_;
    std::lock_guard<std::recursive_mutex> lock(r.io_mutex);
    if (!ok_ || !r.writer.is_open()) return;
    const uint32_t* a = reinterpret_cast<const uint32_t*>(uintptr_t(sp + 4));
    bool known;
    const Kind kind = r.kind_of(a[0], known);
    if (!known) return;
    switch (kind) {
    case Kind::device:
        if (uint32_t(r.slot_of(a[0], target, 119)) == SLOT(IDirect3DDevice9Vtbl, Present) && r.active && r.options.capture_every && (r.frame - r.window_start) % r.options.capture_every == 0)
            r.capture_reference_image();
        if (uint32_t(r.slot_of(a[0], target, 119)) == SLOT(IDirect3DDevice9Vtbl, Present)) {
            if (r.active) r.draw_indicator(0xFFFF0000);            // red square: recording
            else if (r.open_pending.load()) r.draw_indicator(0xFFFFFF00);   // yellow: the window opens next frame
        }
        break;
    case Kind::vertex_buffer: case Kind::index_buffer: {
        const unsigned unlock = SLOT(IDirect3DVertexBuffer9Vtbl, Unlock);
        if (uint32_t(r.slot_of(a[0], target, 14)) == unlock) {
            auto it = r.buffer_locks.find(a[0]);
            if (it != r.buffer_locks.end()) { r.emit_with_blob(uint8_t(Method::unlock_buffer), {a[0]}, reinterpret_cast<const void*>(uintptr_t(it->second.data)), it->second.bytes); r.buffer_locks.erase(it); }
        }
        break;
    }
    case Kind::texture: case Kind::cube_texture: {
        const bool cube = kind == Kind::cube_texture;
        if (uint32_t(r.slot_of(a[0], target, 22)) == SLOT(IDirect3DTexture9Vtbl, UnlockRect)) {
            const uint32_t face = cube ? a[1] : 0, level = cube ? a[2] : a[1];
            auto it = r.texture_locks.find({a[0], level, face});
            if (it != r.texture_locks.end()) {
                r.emit_with_blob(uint8_t(Method::unlock_texture), {a[0], level, face, it->second.pitch}, reinterpret_cast<const void*>(uintptr_t(it->second.bits)), it->second.bytes);
                r.texture_locks.erase(it);
            }
        }
        break;
    }
    default: break;
    }
}

void D3d9Recorder::after(uint32_t target, uint32_t sp, uint32_t eax, uint64_t instructions) {
    Impl& r = *impl_;
    std::lock_guard<std::recursive_mutex> lock(r.io_mutex);
    if (!ok_ || !r.writer.is_open()) return;
    const uint32_t* a = reinterpret_cast<const uint32_t*>(uintptr_t(sp + 4));
    r.instructions = instructions;
    ++r.calls;
    if ((r.calls & 2047) == 0) {   // a few times per frame: the hotkey, the START file and the heartbeat of the log
        const ULONGLONG now = GetTickCount64();
        if (now - r.last_beat >= 5000) {
            r.last_beat = now;
            char text[200];
            std::snprintf(text, sizeof text, "alive: presents=%llu calls=%llu windows=%llu active=%d records=%llu blobs=%.0f MB", (unsigned long long)r.frame, (unsigned long long)r.calls, (unsigned long long)r.window_index, r.active ? 1 : 0, (unsigned long long)r.writer.records(), double(r.writer.blob_bytes()) / 1048576.0);
            r.note(text);
            r.writer.flush();
        }
    }
    // CreateDevice of the IDirect3D9 object: slot 16, the device is returned through argument 6.
    if (a[0] == r.d3d9_object && r.d3d9_object && !r.device) {
        if (uint32_t(Impl::slot_of(a[0], target, 17)) == SLOT(IDirect3D9Vtbl, CreateDevice) && eax == 0) {
            const uint32_t device = u32_at(a[6]);
            r.device = reinterpret_cast<IDirect3DDevice9*>(uintptr_t(device));
            r.game_window = u32_at(a[5] + 28) ? reinterpret_cast<HWND>(uintptr_t(u32_at(a[5] + 28))) : reinterpret_cast<HWND>(uintptr_t(a[3]));
            if (r.game_window) GetWindowTextA(r.game_window, r.original_title, sizeof r.original_title);
            const uint32_t params = a[5];
            r.writer.record(op_device_created, {a[1], a[4], u32_at(params), u32_at(params + 4), u32_at(params + 8), u32_at(params + 40), u32_at(params + 16), u32_at(params + 12), u32_at(params + 32), u32_at(params + 52)});
        }
        return;
    }
    bool known;
    const Kind kind = r.kind_of(a[0], known);
    if (!known) return;
    const bool ok_result = eax == 0;
    auto created = [&](uint32_t out_pointer_arg, Kind k, uint8_t op, std::vector<uint32_t> tail) {
        if (!ok_result) return uint32_t(0);
        const uint32_t object = u32_at(out_pointer_arg);
        r.add(object, k);
        std::vector<uint32_t> w{object};
        w.insert(w.end(), tail.begin(), tail.end());
        r.emit(op, w);
        return object;
    };
    switch (kind) {
    case Kind::device: {
        const int slot = Impl::slot_of(a[0], target, 119);
        const unsigned s = unsigned(slot);
        using V = IDirect3DDevice9Vtbl;
        if (slot < 0) return;
        if (s == SLOT(V, Release) || s == SLOT(V, AddRef)) return;
        if (s == SLOT(V, Reset)) { const uint32_t p = a[1]; r.emit(uint8_t(Method::reset), {u32_at(p), u32_at(p + 4), u32_at(p + 8), u32_at(p + 40), u32_at(p + 16), u32_at(p + 12), u32_at(p + 32), u32_at(p + 52)}); }
        else if (s == SLOT(V, Present)) {
            r.emit(uint8_t(Method::present), {});
            r.emit(op_frame_marker, {uint32_t(r.frame), uint32_t(instructions), uint32_t(instructions >> 32)});
            ++r.frame;
            if (r.active && --r.window_frames_left == 0) r.close_window();
            if (!r.active) {
                const bool open = (r.options.start_frame && r.frame == r.options.start_frame) || r.open_pending.load();
                if (open) r.open_window();
            }
        }
        else if (s == SLOT(V, GetBackBuffer)) { if (ok_result) { const uint32_t object = u32_at(a[4]); r.add(object, Kind::surface); r.emit(op_get_back_buffer, {object, a[1], a[2]}); } }
        else if (s == SLOT(V, CreateTexture)) { const uint32_t o = created(a[7], Kind::texture, uint8_t(Method::create_texture), {a[1], a[2], a[3], a[4], a[5], a[6]}); if (o) r.textures[o] = {a[1], a[2], a[3], a[5]}; }
        else if (s == SLOT(V, CreateCubeTexture)) { const uint32_t o = created(a[6], Kind::cube_texture, uint8_t(Method::create_cube_texture), {a[1], a[2], a[3], a[4], a[5]}); if (o) r.textures[o] = {a[1], a[1], a[2], a[4]}; }
        else if (s == SLOT(V, CreateVertexBuffer)) { const uint32_t o = created(a[5], Kind::vertex_buffer, uint8_t(Method::create_vertex_buffer), {a[1], a[2], a[3], a[4]}); if (o) r.buffer_sizes[o] = a[1]; }
        else if (s == SLOT(V, CreateIndexBuffer)) { const uint32_t o = created(a[5], Kind::index_buffer, uint8_t(Method::create_index_buffer), {a[1], a[2], a[3], a[4]}); if (o) r.buffer_sizes[o] = a[1]; }
        else if (s == SLOT(V, CreateRenderTarget)) created(a[7], Kind::surface, uint8_t(Method::create_render_target), {a[1], a[2], a[3], a[4], a[6]});
        else if (s == SLOT(V, CreateDepthStencilSurface)) created(a[7], Kind::surface, uint8_t(Method::create_depth_stencil), {a[1], a[2], a[3], a[4]});
        else if (s == SLOT(V, CreateVertexDeclaration)) {
            if (ok_result) { const uint32_t o = u32_at(a[2]); r.add(o, Kind::declaration); r.emit_with_blob(uint8_t(Method::create_vertex_declaration), {o}, reinterpret_cast<const void*>(uintptr_t(a[1])), declaration_size(a[1])); }
        }
        else if (s == SLOT(V, CreateVertexShader) || s == SLOT(V, CreatePixelShader)) {
            if (ok_result) {
                const bool vs = s == SLOT(V, CreateVertexShader);
                const uint32_t o = u32_at(a[2]);
                r.add(o, vs ? Kind::vertex_shader : Kind::pixel_shader);
                r.emit_with_blob(uint8_t(vs ? Method::create_vertex_shader : Method::create_pixel_shader), {o}, reinterpret_cast<const void*>(uintptr_t(a[1])), shader_size(a[1]));
            }
        }
        else if (s == SLOT(V, StretchRect)) {
            auto rect = [&](uint32_t p) { std::vector<uint32_t> w{p ? 1u : 0u}; for (int i = 0; i < 4; ++i) w.push_back(p ? u32_at(p + i * 4) : 0); return w; };
            std::vector<uint32_t> w{a[1]}; const auto sr = rect(a[2]); w.insert(w.end(), sr.begin(), sr.end()); w.push_back(a[3]); const auto dr = rect(a[4]); w.insert(w.end(), dr.begin(), dr.end()); w.push_back(a[5]);
            r.emit(uint8_t(Method::stretch_rect), w);
        }
        else if (s == SLOT(V, SetRenderTarget)) r.emit(uint8_t(Method::set_render_target), {a[1], a[2]});
        else if (s == SLOT(V, SetDepthStencilSurface)) r.emit(uint8_t(Method::set_depth_stencil), {a[1]});
        else if (s == SLOT(V, BeginScene)) r.emit(uint8_t(Method::begin_scene), {});
        else if (s == SLOT(V, EndScene)) r.emit(uint8_t(Method::end_scene), {});
        else if (s == SLOT(V, Clear)) { std::vector<uint32_t> w{a[1], a[3], a[4], a[5], a[6]}; for (uint32_t i = 0; i < a[1] && a[2]; ++i) for (int k = 0; k < 4; ++k) w.push_back(u32_at(a[2] + i * 16 + k * 4)); r.emit(uint8_t(Method::clear), w); }
        else if (s == SLOT(V, LightEnable)) r.emit(uint8_t(Method::light_enable), {a[1], a[2]});
        else if (s == SLOT(V, SetTransform)) { std::vector<uint32_t> w{a[1]}; for (int i = 0; i < 16; ++i) w.push_back(u32_at(a[2] + i * 4)); r.emit(uint8_t(Method::set_transform), w); }
        else if (s == SLOT(V, SetViewport)) { const uint32_t p = a[1]; r.emit(uint8_t(Method::set_viewport), {u32_at(p), u32_at(p + 4), u32_at(p + 8), u32_at(p + 12), u32_at(p + 16), u32_at(p + 20)}); }
        else if (s == SLOT(V, SetRenderState)) r.emit(uint8_t(Method::set_render_state), {a[1], a[2]});
        else if (s == SLOT(V, BeginStateBlock)) { r.in_state_block = true; r.emit(uint8_t(Method::begin_state_block), {}); }   // in_state_block first: a begin outside a window must be recorded too
        else if (s == SLOT(V, EndStateBlock)) { r.in_state_block = false; if (ok_result) { const uint32_t o = u32_at(a[1]); r.add(o, Kind::state_block); r.emit(uint8_t(Method::end_state_block), {o}); } }
        else if (s == SLOT(V, SetTexture)) r.emit(uint8_t(Method::set_texture), {a[1], a[2]});
        else if (s == SLOT(V, SetTextureStageState)) r.emit(uint8_t(Method::set_texture_stage_state), {a[1], a[2], a[3]});
        else if (s == SLOT(V, SetSamplerState)) r.emit(uint8_t(Method::set_sampler_state), {a[1], a[2], a[3]});
        else if (s == SLOT(V, DrawIndexedPrimitive)) r.emit(uint8_t(Method::draw_indexed), {a[1], a[2], a[3], a[4], a[5], a[6]});
        else if (s == SLOT(V, DrawPrimitiveUP)) r.emit_with_blob(uint8_t(Method::draw_up), {a[1], a[2], a[4]}, reinterpret_cast<const void*>(uintptr_t(a[3])), vertex_count(a[1], a[2]) * a[4]);
        else if (s == SLOT(V, SetVertexDeclaration)) r.emit(uint8_t(Method::set_vertex_declaration), {a[1]});
        else if (s == SLOT(V, SetFVF)) r.emit(uint8_t(Method::set_fvf), {a[1]});
        else if (s == SLOT(V, SetVertexShader)) r.emit(uint8_t(Method::set_vertex_shader), {a[1]});
        else if (s == SLOT(V, SetPixelShader)) r.emit(uint8_t(Method::set_pixel_shader), {a[1]});
        else if (s == SLOT(V, SetVertexShaderConstantF) || s == SLOT(V, SetPixelShaderConstantF)) {
            if (r.active || r.in_state_block) {
                std::vector<uint32_t> w{a[1], a[3]};
                for (uint32_t i = 0; i < a[3] * 4; ++i) w.push_back(u32_at(a[2] + i * 4));
                r.writer.record(uint8_t(s == SLOT(V, SetVertexShaderConstantF) ? Method::set_vertex_shader_constants_f : Method::set_pixel_shader_constants_f), w);
            }
        }
        else if (s == SLOT(V, SetStreamSource)) r.emit(uint8_t(Method::set_stream_source), {a[1], a[2], a[3], a[4]});
        else if (s == SLOT(V, SetIndices)) r.emit(uint8_t(Method::set_indices), {a[1]});
        else if (s == SLOT(V, TestCooperativeLevel) || s == SLOT(V, GetDeviceCaps) || s == SLOT(V, GetDisplayMode) || s == SLOT(V, GetAvailableTextureMem) ||
                 s == SLOT(V, EvictManagedResources) || s == SLOT(V, ValidateDevice) || s == SLOT(V, ShowCursor) || s == SLOT(V, GetDepthStencilSurface)) { /* no effect on rendering */ }
        else {   // anything else the game uses (lights, materials, scissor, DrawIndexedPrimitiveUP...): kept as an unknown call so a replay says what it lacks
            ++r.unknown_calls; ++r.unknown_slots[s];
            if (r.active || r.in_state_block) { std::vector<uint32_t> w{s}; for (int i = 1; i <= 8; ++i) w.push_back(u32_at(sp + 4 + 4 * i)); r.writer.record(op_unknown_call, w); }
        }
        break;
    }
    case Kind::vertex_buffer: case Kind::index_buffer: {
        const int slot = Impl::slot_of(a[0], target, 14);
        if (slot < 0) return;
        if (unsigned(slot) == SLOT(IDirect3DVertexBuffer9Vtbl, Release) && eax == 0) { r.emit(uint8_t(Method::destroy_buffer), {a[0]}); r.objects.erase(a[0]); r.buffer_sizes.erase(a[0]); }
        else if (unsigned(slot) == SLOT(IDirect3DVertexBuffer9Vtbl, Lock) && ok_result) {
            const uint32_t bytes = a[2] ? a[2] : (r.buffer_sizes.count(a[0]) ? r.buffer_sizes[a[0]] - a[1] : 0);
            r.buffer_locks[a[0]] = {u32_at(a[3]), a[1], bytes};
            r.emit(uint8_t(Method::lock_buffer), {a[0], a[1], a[2], a[4]});
        }
        break;
    }
    case Kind::texture: case Kind::cube_texture: {
        const bool cube = kind == Kind::cube_texture;
        const int slot = Impl::slot_of(a[0], target, 22);
        if (slot < 0) return;
        using T = IDirect3DTexture9Vtbl;
        if (unsigned(slot) == SLOT(T, Release) && eax == 0) { r.emit(uint8_t(Method::destroy_texture), {a[0]}); r.objects.erase(a[0]); r.textures.erase(a[0]); }
        else if (unsigned(slot) == SLOT(T, GetSurfaceLevel) && ok_result) {
            const uint32_t level = cube ? a[2] : a[1], face = cube ? a[1] : 0, out = cube ? a[3] : a[2];
            const uint32_t surface = u32_at(out);
            r.add(surface, Kind::surface);
            r.emit(uint8_t(Method::texture_surface), {surface, a[0], level, face});
        }
        else if (unsigned(slot) == SLOT(T, LockRect) && ok_result) {
            const uint32_t face = cube ? a[1] : 0, level = cube ? a[2] : a[1], locked = cube ? a[3] : a[2], rect = cube ? a[4] : a[3], flags = cube ? a[5] : a[4];
            const uint32_t bits_ptr = u32_at(locked + 4), pitch = u32_at(locked);
            const auto info = r.textures.count(a[0]) ? r.textures[a[0]] : Impl::TextureInfo{0, 0, 0, 0};
            const uint32_t lw = std::max<uint32_t>(1, info.width >> level), lh = std::max<uint32_t>(1, info.height >> level);
            uint32_t rows = rect ? u32_at(rect + 12) - u32_at(rect + 4) : lh;
            if (compressed(info.format)) rows = (rows + 3) / 4;
            (void)lw;
            r.texture_locks[{a[0], level, face}] = {bits_ptr, pitch, pitch * rows};
            std::vector<uint32_t> w{a[0], level, face, flags, rect ? 1u : 0u};
            for (int i = 0; i < 4; ++i) w.push_back(rect ? u32_at(rect + i * 4) : 0);
            r.emit(uint8_t(Method::lock_texture), w);
        }
        break;
    }
    case Kind::state_block: {
        const int slot = Impl::slot_of(a[0], target, 7);
        if (slot < 0) return;
        if (unsigned(slot) == SLOT(IDirect3DStateBlock9Vtbl, Apply)) r.emit(uint8_t(Method::apply_state_block), {a[0]});
        else if (unsigned(slot) == SLOT(IDirect3DStateBlock9Vtbl, Release) && eax == 0) { r.emit(uint8_t(Method::destroy_state_block), {a[0]}); r.objects.erase(a[0]); }
        break;
    }
    case Kind::surface: case Kind::declaration: case Kind::vertex_shader: case Kind::pixel_shader: {
        const int slot = Impl::slot_of(a[0], target, 20);
        if (slot == 2 && eax == 0) {   // Release to zero
            const uint8_t op = kind == Kind::surface ? uint8_t(Method::destroy_surface) : kind == Kind::declaration ? uint8_t(Method::destroy_declaration) : uint8_t(Method::destroy_shader);
            r.emit(op, {a[0]});
            r.objects.erase(a[0]);
        }
        break;
    }
    default: break;
    }
}

void D3d9Recorder::finish() {
    if (!impl_) return;
    std::lock_guard<std::recursive_mutex> lock(impl_->io_mutex);
    if (!impl_->writer.is_open() || impl_->finished) return;
    Impl& r = *impl_;
    r.finished = true;
    r.stop_poller.store(true);
    if (r.poller.joinable() && r.poller.get_id() != std::this_thread::get_id()) r.poller.join();
    r.close_window();
    r.writer.record(op_end, {uint32_t(r.frame)});
    std::ofstream log(r.options.directory / "recorder_summary.log");
    log << "frames=" << r.frame << " windows=" << r.window_index << " records=" << r.writer.records() << " blob_bytes=" << r.writer.blob_bytes()
        << " truncated=" << (r.writer.truncated() ? 1 : 0) << " calls_seen=" << r.calls << " unknown_calls=" << r.unknown_calls << "\n";
    for (auto [slot, n] : r.unknown_slots) log << "unknown device slot " << slot << ": " << n << " calls\n";
    r.note("finished: trace closed");
    r.writer.close();
    if (r.log) { std::fclose(r.log); r.log = nullptr; }
}

}  // namespace nfsu2raw
