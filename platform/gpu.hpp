// Platform API, graphics level B: the small GPU interface ("what a modern API does"), implemented by the bgfx adapter.
//
// The Direct3D 9 layer builds one DrawState per draw from its state shadow. There is no in-place buffer update on purpose: bgfx applies
// resource updates before the frame's draws, so data that changes between draws goes through `allocate_transient` or a new static buffer
// (docs/PLATFORM_API.md, 3.5).
#pragma once
#include "platform/types.hpp"

namespace nfsu2::platform::gpu {

using Buffer = Id<struct BufferTag>;
using Texture = Id<struct TextureTag>;
using Program = Id<struct ProgramTag>;

enum class Format : uint8_t {
    rgba8, bgra8, r5g6b5, a4r4g4b4, a1r5g5b5, r8, a8, rg8, rgba16f, rgba32f, d16, d24s8, d32f, bc1, bc2, bc3, astc4x4, etc2_rgba8, count
};
enum class Topology : uint8_t { points, lines, line_strip, triangles, triangle_strip };   // fans are converted to lists by the layer

struct VertexAttribute { uint8_t stream = 0, offset = 0, type = 0, semantic = 0, index = 0; };

struct SamplerDesc {
    uint8_t min = 1, mag = 1, mip = 1;                 // 0 none/point, 1 linear, 2 anisotropic
    uint8_t address_u = 0, address_v = 0, address_w = 0;   // 0 wrap, 1 mirror, 2 clamp, 3 border
    uint8_t max_aniso = 1;
    float lod_bias = 0.0f;
    uint32_t border_argb = 0;
};

struct DrawState {
    Program program;
    Buffer vertex_buffer[4];
    uint32_t vertex_offset[4] = {}, vertex_stride[4] = {};
    Buffer index_buffer;
    bool index32 = false;
    std::span<const VertexAttribute> layout;
    Texture textures[16];
    SamplerDesc samplers[16];
    Bytes vertex_constants, pixel_constants;             // packed float4 arrays: only the registers the program reads
    uint32_t blend = 0, depth_stencil = 0, raster = 0;   // packed descriptors built by the layer
    Topology topology = Topology::triangles;
    int32_t base_vertex = 0;
    uint32_t first_index = 0, index_count = 0, vertex_count = 0;
    int32_t viewport[4] = {};
    float depth_range[2] = {0.0f, 1.0f};
    int32_t scissor[4] = {};
    bool scissor_enabled = false;
};

struct PassDesc {
    Texture colors[4];
    Texture depth_stencil;
    bool clear_color = false, clear_depth = false, clear_stencil = false;
    uint32_t clear_argb = 0;
    float clear_z = 1.0f;
    uint8_t clear_stencil_value = 0;
};

struct GpuCaps {
    bool texture_format[static_cast<size_t>(Format::count)] = {};
    uint32_t max_texture_size = 0, max_anisotropy = 1;
    bool instancing = false, mrt = false;
};

class Gpu {   // game thread; the backend's render thread hides behind it
public:
    virtual ~Gpu() = default;
    virtual const GpuCaps& caps() = 0;
    virtual Result<Buffer>  create_static_buffer(Bytes initial) = 0;                      // immutable after creation
    // Memory valid for this frame only (dynamic data, user-pointer draws). `out` receives the span to fill.
    virtual Result<Buffer>  allocate_transient(uint32_t bytes, MutableBytes& out) = 0;
    virtual Result<Texture> create_texture(uint32_t width, uint32_t height, uint32_t levels, Format, bool render_target, bool cube, Bytes initial) = 0;
    virtual void            update_texture(Texture, uint32_t level, uint32_t face, const uint32_t* rect4, Bytes data, uint32_t row_pitch) = 0;
    virtual Result<Program> create_program(Bytes vertex_binary, Bytes pixel_binary) = 0;   // the bgfx shader container produced by the shader path
    virtual void begin_pass(const PassDesc&) = 0;
    virtual void draw(const DrawState&) = 0;
    virtual void end_pass() = 0;
    virtual Status present(uint32_t swap_interval) = 0;
    virtual Status resize(uint32_t width, uint32_t height) = 0;
    virtual void   read_back(Texture, uint32_t level, MutableBytes out) = 0;
    virtual void   destroy(Buffer) = 0;
    virtual void   destroy(Texture) = 0;
    virtual void   destroy(Program) = 0;
};

}  // namespace nfsu2::platform::gpu
