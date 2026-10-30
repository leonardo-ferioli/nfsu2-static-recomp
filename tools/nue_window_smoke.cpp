// The port's 64-bit build over NUE (third_party/nue-engine, plan H4/H5): a NUE window (SDL3 backend), nue_gfx in MANAGED mode on it and NUE's Direct3D 9
// layer on that context, drawing what a Direct3D 9 game draws (clear, a pre-transformed coloured triangle, present). No game: it proves the chain the
// 64-bit host will use for the game's own device.
//
//   nue_window_smoke [--frames N] [--hidden]     default: a visible window for 300 frames; closes early on the window's close button
#include "nue_legacy/d3d9_gfx.hpp"
#include "nue/d3d9_layer.hpp"
#include "nue/nue.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace nue::d3d9;
using nue::Status;

int main(int argc, char** argv) {
    int frames = 300;
    bool hidden = false;
    for (int i = 1; i < argc; ++i) {
        if (!std::strcmp(argv[i], "--frames") && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (!std::strcmp(argv[i], "--hidden")) hidden = true;
    }
    nue_init_desc init;
    NUE_STRUCT_INIT(&init);
    init.api_version = NUE_API_VERSION;
    init.app_name = "nue_window_smoke"; init.app_id = "nfsu2-nue-window-smoke"; init.org_name = "NUE";
    init.flags = NUE_INIT_NO_CRASH_HANDLER | NUE_INIT_NO_LOG_FILE;
    init.log_level = NUE_LOG_WARN;
    if (!NUE_SUCCEEDED(nue_init(&init))) { std::printf("FAIL: nue_init: %s\n", nue_get_last_error_message()); return 1; }

    int failures = 0;
    auto check = [&](bool ok, const char* what) { if (!ok) { ++failures; std::printf("FAIL: %s (%s)\n", what, nue_get_last_error_message()); } return ok; };
    nue_window window = nullptr;
    nue_window_desc wd;
    NUE_STRUCT_INIT(&wd);
    wd.title = "NFSU2 port: NUE window (Direct3D 9 layer on bgfx)";
    wd.x = NUE_WINDOW_POS_CENTERED; wd.y = NUE_WINDOW_POS_CENTERED;
    wd.width = 1280; wd.height = 720;
    wd.flags = NUE_WINDOW_RESIZABLE | (hidden ? NUE_WINDOW_HIDDEN : 0);
    if (check(nue_window_create(&wd, &window) == NUE_OK && window, "nue_window_create")) {
        nue_gfx_desc gd;
        NUE_STRUCT_INIT(&gd);
        gd.window = window;
        gd.renderer = NUE_RENDERER_AUTO;
        gd.max_texture_handles = 16384; gd.max_buffer_handles = 16384; gd.max_framebuffer_handles = 1024;   // what the Direct3D 9 layer needs (a race of this game)
        gd.transient_vertex_mb = 64; gd.transient_index_mb = 16;
        gd.shader_cache_dir = "cache:shaders/d3d9";
        nue_gfx gfx = nullptr;
        if (check(nue_gfx_create(&gd, &gfx) == NUE_OK && gfx, "nue_gfx_create")) {
            nue_gfx_native native;
            NUE_STRUCT_INIT(&native);
            nue_gfx_get_native(gfx, &native);
            std::string error;
            auto dev = create_gfx_device(gfx, LayerOptions{}, error);
            if (check(dev != nullptr, ("create_gfx_device: " + error).c_str())) {
                Device& d = dev->device();
                DeviceParams params;
                params.back_width = 640; params.back_height = 480; params.back_format = 22 /* X8R8G8B8 */; params.depth_format = 75 /* D24S8 */;
                check(d.reset(params) == Status::ok, "reset (the game's CreateDevice)");
                int drawn = 0;
                bool open = true;
                for (int f = 0; open && f < frames; ++f) {
                    nue_pump_events();
                    nue_event e;
                    while (nue_poll_event(&e)) if (e.type == NUE_EVENT_QUIT || e.type == NUE_EVENT_WINDOW_CLOSE_REQUESTED) open = false;
                    d.begin_scene();
                    const int32_t none[1] = {0};
                    const float t = float(f) / 60.0f;
                    d.clear({none, 0}, 1 /* target */, 0xFF102040u, 1.0f, 0);
                    d.set_fvf(0x044 /* XYZRHW | DIFFUSE */);
                    d.set_texture(0, TextureId{});
                    const float cx = 320 + 120 * float(__builtin_cosf(t)), cy = 240 + 80 * float(__builtin_sinf(t));
                    struct V { float x, y, z, rhw; uint32_t color; } v[3] = {{cx, cy - 150, 0, 1, 0xFFFF3030u}, {cx + 150, cy + 110, 0, 1, 0xFF30FF30u}, {cx - 150, cy + 110, 0, 1, 0xFF3030FFu}};
                    d.draw_up(4 /* triangle list */, 1, {reinterpret_cast<const std::byte*>(v), sizeof v}, sizeof(V));
                    d.end_scene();
                    if (d.present() == Status::ok) ++drawn;
                }
                std::printf("nue_window_smoke: renderer %d, %d frames presented, %llu draws by the Direct3D 9 layer\n", int(native.renderer), drawn,
                            static_cast<unsigned long long>(dev->layer().stats().draws));
                check(drawn > 0 && dev->layer().stats().draws >= uint64_t(drawn), "frames drawn through the Direct3D 9 layer");
                dev.reset();
            }
            nue_gfx_destroy(gfx);
        }
        nue_window_destroy(window);
    }
    nue_shutdown();
    if (!failures) std::printf("PASS nue_window_smoke\n");
    return failures ? 1 : 0;
}
