#include "platform/null/null_platform.hpp"
#include <algorithm>

namespace nfsu2::platform::d3d9 {
const char* method_name(Method m) {
    static const char* const names[] = {
        "reset", "test_cooperative_level", "present",
        "create_texture", "create_cube_texture", "create_vertex_buffer", "create_index_buffer", "create_render_target", "create_depth_stencil",
        "create_vertex_declaration", "create_vertex_shader", "create_pixel_shader",
        "destroy_texture", "destroy_buffer", "destroy_surface", "destroy_declaration", "destroy_shader", "destroy_state_block",
        "lock_buffer", "unlock_buffer", "lock_texture", "unlock_texture", "texture_surface", "get_back_buffer", "stretch_rect",
        "set_render_state", "set_sampler_state", "set_texture_stage_state", "set_transform", "set_viewport", "set_texture", "set_render_target", "set_depth_stencil",
        "set_vertex_declaration", "set_fvf", "set_vertex_shader", "set_pixel_shader", "set_vertex_shader_constants_f", "set_pixel_shader_constants_f",
        "set_stream_source", "set_indices", "begin_state_block", "end_state_block", "apply_state_block",
        "begin_scene", "end_scene", "clear", "draw_indexed", "draw_up"};
    static_assert(sizeof(names) / sizeof(names[0]) == static_cast<size_t>(Method::count), "method_name table out of step with Method");
    return static_cast<size_t>(m) < static_cast<size_t>(Method::count) ? names[static_cast<size_t>(m)] : "?";
}
}  // namespace nfsu2::platform::d3d9

namespace nfsu2::platform::null {

NullDisplay::NullDisplay(uint32_t width, uint32_t height, uint32_t refresh_hz) {
    DisplayInfo info;
    info.id = 0;
    info.name = "null0";
    info.primary = true;
    info.current = {width, height, refresh_hz * 1000u};
    info.desktop_width = width;
    info.desktop_height = height;
    info.modes = {{width, height, refresh_hz * 1000u}, {width / 2, height / 2, refresh_hz * 1000u}};
    displays.push_back(std::move(info));
}

NullGpu::NullGpu() {
    for (auto& supported : capabilities.texture_format) supported = true;
    capabilities.max_texture_size = 4096;
    capabilities.max_anisotropy = 16;
    capabilities.mrt = true;
}

Result<gpu::Buffer> NullGpu::create_static_buffer(Bytes) { ++buffers_created; return {Status::ok, gpu::Buffer{++next_id}}; }

Result<gpu::Buffer> NullGpu::allocate_transient(uint32_t bytes, MutableBytes& out) {
    transient.emplace_back(bytes);
    out = MutableBytes(transient.back().data(), transient.back().size());
    transient_bytes += bytes;
    return {Status::ok, gpu::Buffer{++next_id}};
}

Result<d3d9::BufferId> NullDevice::create_vertex_buffer(uint32_t bytes, uint32_t, uint32_t, uint32_t) {
    count(d3d9::Method::create_vertex_buffer);
    const uint32_t id = ++next_id;
    buffers[id].assign(bytes, std::byte{0});
    return {Status::ok, d3d9::BufferId{id}};
}

Result<d3d9::BufferId> NullDevice::create_index_buffer(uint32_t bytes, uint32_t, uint32_t, uint32_t) {
    count(d3d9::Method::create_index_buffer);
    const uint32_t id = ++next_id;
    buffers[id].assign(bytes, std::byte{0});
    return {Status::ok, d3d9::BufferId{id}};
}

Result<d3d9::LockedRegion> NullDevice::lock_buffer(d3d9::BufferId id, uint32_t offset, uint32_t bytes, uint32_t) {
    count(d3d9::Method::lock_buffer);
    auto found = buffers.find(id.value);
    if (found == buffers.end()) return {Status::invalid_argument, {}};
    auto& data = found->second;
    if (bytes == 0) bytes = uint32_t(data.size()) - std::min<uint32_t>(offset, uint32_t(data.size()));
    if (uint64_t(offset) + bytes > data.size()) return {Status::invalid_argument, {}};
    return {Status::ok, d3d9::LockedRegion{data.data() + offset, bytes, 0}};
}

Result<d3d9::LockedRegion> NullDevice::lock_texture(d3d9::TextureId id, uint32_t, uint32_t, const int32_t*, uint32_t) {
    count(d3d9::Method::lock_texture);
    if (!textures.count(id.value)) return {Status::invalid_argument, {}};
    staging.assign(64 * 64 * 4, std::byte{0});
    return {Status::ok, d3d9::LockedRegion{staging.data(), 64 * 4, 0}};
}

}  // namespace nfsu2::platform::null
