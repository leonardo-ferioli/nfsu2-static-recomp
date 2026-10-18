// Null implementations of the platform interfaces: deterministic, no OS, no GPU. They let the shim and the Direct3D 9 layer be tested
// headless, and a recorded trace be replayed without a device.
#pragma once
#include "platform/d3d9_device.hpp"
#include "platform/display.hpp"
#include "platform/gpu.hpp"
#include "platform/window.hpp"
#include <array>
#include <deque>
#include <map>
#include <vector>

namespace nfsu2::platform::null {

class NullDisplay final : public Display {
public:
    explicit NullDisplay(uint32_t width = 1280, uint32_t height = 720, uint32_t refresh_hz = 60);
    std::vector<DisplayInfo> list(bool include_modes = true) override {
        auto copy = displays;
        if (!include_modes) for (auto& d : copy) d.modes.clear();
        return copy;
    }
    void set_dpi_aware() override { dpi_aware = true; }
    std::vector<DisplayInfo> displays;
    bool dpi_aware = false;
};

class NullWindow final : public Window {
public:
    Status create(std::string_view title_, uint32_t w, uint32_t h, WindowMode m, uint32_t) override { title = title_; width = w; height = h; mode = m; exists = true; return Status::ok; }
    Status adopt(NativeSurface s) override { surface = s; exists = true; return Status::ok; }
    bool adopted() override { return exists; }
    void destroy() override { exists = false; }
    NativeSurface native_surface() override { return surface; }
    void set_frame(FrameStyle f) override { frame = f; }
    void refresh_frame() override { ++refreshes; }
    void place_outer(int32_t x, int32_t y, int32_t w, int32_t h) override { outer = {x, y, x + w, y + h}; ++placements; }
    void place_client_centered(int32_t cw, int32_t ch, int32_t dw, int32_t dh, bool show) override {
        const int32_t x = (dw - cw) / 2, y = (dh - ch) / 2;
        outer = {x, y, x + cw, y + ch};
        shown = shown || show;
        ++placements;
    }
    Rect outer_rect() override { return outer; }
    Rect client_rect() override { return {0, 0, outer.right - outer.left, outer.bottom - outer.top}; }
    bool cursor_inside_client() override { return cursor_inside; }
    void show_cursor(bool show) override { cursor_visible = show; }
    void show_cursor_forced() override { cursor_visible = true; }
    void release_cursor_clip() override { ++clip_releases; }
    bool focused() override { return exists; }
    size_t poll_events(std::span<WindowEvent> out) override {
        size_t n = 0;
        while (n < out.size() && !events.empty()) { out[n++] = events.front(); events.pop_front(); }
        return n;
    }

    std::string title;
    uint32_t width = 0, height = 0;
    WindowMode mode = WindowMode::windowed;
    NativeSurface surface;
    FrameStyle frame;
    Rect outer;
    bool exists = false, shown = false, cursor_inside = true, cursor_visible = true;
    unsigned refreshes = 0, placements = 0, clip_releases = 0;
    std::deque<WindowEvent> events;
};

// A Gpu that records what it is asked to do and draws nothing.
class NullGpu final : public gpu::Gpu {
public:
    NullGpu();
    const gpu::GpuCaps& caps() override { return capabilities; }
    Result<gpu::Buffer> create_static_buffer(Bytes initial) override;
    Result<gpu::Buffer> allocate_transient(uint32_t bytes, MutableBytes& out) override;
    Result<gpu::Texture> create_texture(uint32_t, uint32_t, uint32_t, gpu::Format, bool, bool, Bytes) override { ++textures_created; return {Status::ok, gpu::Texture{++next_id}}; }
    void update_texture(gpu::Texture, uint32_t, uint32_t, const uint32_t*, Bytes data, uint32_t) override { ++texture_updates; texture_bytes += data.size(); }
    Result<gpu::Program> create_program(Bytes, Bytes) override { ++programs_created; return {Status::ok, gpu::Program{++next_id}}; }
    void begin_pass(const gpu::PassDesc&) override { ++passes; }
    void draw(const gpu::DrawState& state) override { ++draws; last_draw_program = state.program; }
    void end_pass() override {}
    Status present(uint32_t) override { ++frames; transient.clear(); return Status::ok; }
    Status resize(uint32_t, uint32_t) override { return Status::ok; }
    void read_back(gpu::Texture, uint32_t, MutableBytes out) override { for (auto& b : out) b = std::byte{0}; }
    void destroy(gpu::Buffer) override { ++destroyed; }
    void destroy(gpu::Texture) override { ++destroyed; }
    void destroy(gpu::Program) override { ++destroyed; }

    gpu::GpuCaps capabilities;
    uint32_t next_id = 0;
    uint64_t draws = 0, frames = 0, passes = 0, textures_created = 0, programs_created = 0, texture_updates = 0, texture_bytes = 0, destroyed = 0, buffers_created = 0, transient_bytes = 0;
    gpu::Program last_draw_program;
    std::deque<std::vector<std::byte>> transient;
};

// A Direct3D 9 device that validates handle use, counts every call and keeps lock staging memory. It is the base of the recorder tests.
class NullDevice final : public d3d9::Device {
public:
    Status reset(const d3d9::DeviceParams& p) override { count(d3d9::Method::reset); params = p; return Status::ok; }
    Status test_cooperative_level() override { count(d3d9::Method::test_cooperative_level); return lost ? Status::device_lost : Status::ok; }
    Status present() override { count(d3d9::Method::present); ++frames; return Status::ok; }
    Result<d3d9::TextureId> create_texture(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::create_texture); return make<d3d9::TextureId>(textures); }
    Result<d3d9::TextureId> create_cube_texture(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::create_cube_texture); return make<d3d9::TextureId>(textures); }
    Result<d3d9::BufferId> create_vertex_buffer(uint32_t bytes, uint32_t, uint32_t, uint32_t) override;
    Result<d3d9::BufferId> create_index_buffer(uint32_t bytes, uint32_t, uint32_t, uint32_t) override;
    Result<d3d9::SurfaceId> create_render_target(uint32_t, uint32_t, uint32_t, uint32_t, bool) override { count(d3d9::Method::create_render_target); return make<d3d9::SurfaceId>(surfaces); }
    Result<d3d9::SurfaceId> create_depth_stencil(uint32_t, uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::create_depth_stencil); return make<d3d9::SurfaceId>(surfaces); }
    Result<d3d9::DeclarationId> create_vertex_declaration(std::span<const uint8_t>) override { count(d3d9::Method::create_vertex_declaration); return make<d3d9::DeclarationId>(declarations); }
    Result<d3d9::ShaderId> create_vertex_shader(std::span<const uint32_t>) override { count(d3d9::Method::create_vertex_shader); return make<d3d9::ShaderId>(shaders); }
    Result<d3d9::ShaderId> create_pixel_shader(std::span<const uint32_t>) override { count(d3d9::Method::create_pixel_shader); return make<d3d9::ShaderId>(shaders); }
    void destroy(d3d9::TextureId id) override { count(d3d9::Method::destroy_texture); textures.erase(id.value); }
    void destroy(d3d9::BufferId id) override { count(d3d9::Method::destroy_buffer); buffers.erase(id.value); }
    void destroy(d3d9::SurfaceId id) override { count(d3d9::Method::destroy_surface); surfaces.erase(id.value); }
    void destroy(d3d9::DeclarationId id) override { count(d3d9::Method::destroy_declaration); declarations.erase(id.value); }
    void destroy(d3d9::ShaderId id) override { count(d3d9::Method::destroy_shader); shaders.erase(id.value); }
    void destroy(d3d9::StateBlockId id) override { count(d3d9::Method::destroy_state_block); state_blocks.erase(id.value); }
    Result<d3d9::LockedRegion> lock_buffer(d3d9::BufferId, uint32_t offset, uint32_t bytes, uint32_t flags) override;
    Status unlock_buffer(d3d9::BufferId id) override { count(d3d9::Method::unlock_buffer); return buffers.count(id.value) ? Status::ok : Status::invalid_argument; }
    Result<d3d9::LockedRegion> lock_texture(d3d9::TextureId, uint32_t, uint32_t, const int32_t*, uint32_t) override;
    Status unlock_texture(d3d9::TextureId id, uint32_t, uint32_t) override { count(d3d9::Method::unlock_texture); return textures.count(id.value) ? Status::ok : Status::invalid_argument; }
    Result<d3d9::SurfaceId> texture_surface(d3d9::TextureId, uint32_t, uint32_t) override { count(d3d9::Method::texture_surface); return make<d3d9::SurfaceId>(surfaces); }
    Result<d3d9::SurfaceId> back_buffer(uint32_t, uint32_t) override { count(d3d9::Method::get_back_buffer); return make<d3d9::SurfaceId>(surfaces); }
    Status stretch_rect(d3d9::SurfaceId, const int32_t*, d3d9::SurfaceId, const int32_t*, uint32_t) override { count(d3d9::Method::stretch_rect); return Status::ok; }
    void set_render_state(uint32_t, uint32_t) override { count(d3d9::Method::set_render_state); }
    void set_sampler_state(uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::set_sampler_state); }
    void set_texture_stage_state(uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::set_texture_stage_state); }
    void set_transform(uint32_t, const float*) override { count(d3d9::Method::set_transform); }
    void light_enable(uint32_t, bool) override { count(d3d9::Method::light_enable); }
    void set_viewport(const uint32_t*, float, float) override { count(d3d9::Method::set_viewport); }
    void set_texture(uint32_t, d3d9::TextureId) override { count(d3d9::Method::set_texture); }
    void set_render_target(uint32_t, d3d9::SurfaceId) override { count(d3d9::Method::set_render_target); }
    void set_depth_stencil(d3d9::SurfaceId) override { count(d3d9::Method::set_depth_stencil); }
    void set_vertex_declaration(d3d9::DeclarationId) override { count(d3d9::Method::set_vertex_declaration); }
    void set_fvf(uint32_t) override { count(d3d9::Method::set_fvf); }
    void set_vertex_shader(d3d9::ShaderId) override { count(d3d9::Method::set_vertex_shader); }
    void set_pixel_shader(d3d9::ShaderId) override { count(d3d9::Method::set_pixel_shader); }
    void set_vertex_shader_constants_f(uint32_t, std::span<const d3d9::Float4>) override { count(d3d9::Method::set_vertex_shader_constants_f); }
    void set_pixel_shader_constants_f(uint32_t, std::span<const d3d9::Float4>) override { count(d3d9::Method::set_pixel_shader_constants_f); }
    void set_stream_source(uint32_t, d3d9::BufferId, uint32_t, uint32_t) override { count(d3d9::Method::set_stream_source); }
    void set_indices(d3d9::BufferId) override { count(d3d9::Method::set_indices); }
    d3d9::StateBlockId begin_state_block() override { count(d3d9::Method::begin_state_block); return make<d3d9::StateBlockId>(state_blocks).value; }
    void end_state_block(d3d9::StateBlockId) override { count(d3d9::Method::end_state_block); }
    void apply(d3d9::StateBlockId) override { count(d3d9::Method::apply_state_block); }
    void begin_scene() override { count(d3d9::Method::begin_scene); }
    void end_scene() override { count(d3d9::Method::end_scene); }
    void clear(std::span<const int32_t>, uint32_t, uint32_t, float, uint32_t) override { count(d3d9::Method::clear); }
    void draw_indexed(uint32_t, int32_t, uint32_t, uint32_t, uint32_t, uint32_t) override { count(d3d9::Method::draw_indexed); ++draws; }
    void draw_up(uint32_t, uint32_t, Bytes, uint32_t) override { count(d3d9::Method::draw_up); ++draws; }

    uint64_t calls[static_cast<size_t>(d3d9::Method::count)] = {};
    uint64_t draws = 0, frames = 0;
    bool lost = false;
    d3d9::DeviceParams params;
    size_t live_resources() const { return textures.size() + buffers.size() + surfaces.size() + declarations.size() + shaders.size() + state_blocks.size(); }

private:
    void count(d3d9::Method m) { ++calls[static_cast<size_t>(m)]; }
    template <class IdType> Result<IdType> make(std::map<uint32_t, bool>& table) { const uint32_t id = ++next_id; table[id] = true; return {Status::ok, IdType{id}}; }
    std::map<uint32_t, bool> textures, surfaces, declarations, shaders, state_blocks;
    std::map<uint32_t, std::vector<std::byte>> buffers;
    std::vector<std::byte> staging;
    uint32_t next_id = 0;
};

}  // namespace nfsu2::platform::null
