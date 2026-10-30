// The game on the 64-bit host in a NUE window (plan H5): NUE's window (SDL3), input and audio device, nue_gfx (bgfx) with NUE's Direct3D 9 layer on it, and
// Platform64 + the Win32 layer ("all" groups) running the translated game in the guest arena. Everything the game asks of Windows is answered by the Win32
// layer; nothing here creates a window of the operating system or calls its graphics or audio API.
//
//   nfsu2_play64 <export dir> <game dir> [--budget N]
//
// Threads: NUE, the window and the nue_gfx context are created on this thread, which then runs the guest's main thread: the game's message loop pumps NUE's
// events (PeekMessage -> the Win32 layer -> the platform window) and every Direct3D 9 call reaches the layer here. The game's settings (its registry) are
// kept in <game dir>/UserFiles/registry64.txt between runs; the log is <export dir>/../logs/play64_trace.log.
#include "platform64.hpp"
#include "guest_arena.hpp"
#include "win32_facade.hpp"
#include "win32_facade_d3d9_nue.hpp"
#include "mods_widescreen.hpp"
#include "mods_detail.hpp"
#include "platform/nue/nue_platform.hpp"
#include "platform/services.hpp"
#include "platform/audio/dsound_install.hpp"
#include "platform/audio/host_sink.hpp"
#include "platform/audio/nue/nue_sink.hpp"
#include "nue/nue.h"
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace nfsu2raw;
namespace fs = std::filesystem;
namespace pa = nfsu2::platform::audio;

namespace {
void say(const std::string& text) { std::cout << text << std::endl; }
std::string read_file(const fs::path& p) { std::ifstream f(p, std::ios::binary); std::ostringstream s; s << f.rdbuf(); return s.str(); }
}  // namespace

int main(int argc, char** argv) {
    if (argc < 3) { std::cerr << "usage: nfsu2_play64 <export dir> <game dir> [--budget N]\n"; return 2; }
    const fs::path exports = fs::absolute(argv[1]), game = fs::absolute(argv[2]);
    uint64_t budget = ~0ull;
    for (int i = 3; i + 1 < argc; ++i) if (!std::strcmp(argv[i], "--budget")) budget = std::stoull(argv[++i]);

    nue_init_desc init;
    NUE_STRUCT_INIT(&init);
    init.api_version = NUE_API_VERSION;
    init.app_name = "Need for Speed Underground 2"; init.app_id = "nfsu2-port"; init.org_name = "NUE";
    init.log_level = NUE_LOG_INFO;
    if (!NUE_SUCCEEDED(nue_init(&init))) { std::cerr << "nue_init: " << nue_get_last_error_message() << "\n"; return 1; }

    int status = 0;
    {
        // The window, its displays and input: NUE's, through the platform API the Win32 layer and the mods listen to.
        auto services = nfsu2::platform::nue_backend::make_services();
        if (services.window->create("Need for Speed Underground 2", 1280, 720, nfsu2::platform::WindowMode::windowed, 0) != nfsu2::platform::Status::ok) {
            std::cerr << "the NUE window could not be created: " << nue_get_last_error_message() << "\n";
            nue_shutdown();
            return 1;
        }
        nfsu2::platform::set_services({services.display.get(), services.window.get()});
        // nue_gfx on that window: bgfx on the platform's renderer, with the handle counts the Direct3D 9 layer needs for a race of this game.
        nue_gfx_desc gd;
        NUE_STRUCT_INIT(&gd);
        gd.window = nfsu2::platform::nue_backend::nue_window_of(*services.window);
        gd.renderer = NUE_RENDERER_AUTO;
        gd.max_texture_handles = 16384; gd.max_buffer_handles = 16384; gd.max_framebuffer_handles = 1024;
        gd.transient_vertex_mb = 64; gd.transient_index_mb = 16;
        gd.shader_cache_dir = "cache:shaders/d3d9";
        nue_gfx gfx = nullptr;
        if (nue_gfx_create(&gd, &gfx) != NUE_OK || !gfx) {
            std::cerr << "nue_gfx_create: " << nue_get_last_error_message() << "\n";
            nfsu2::platform::set_services({});
            services = {};
            nue_shutdown();
            return 1;
        }
        nue_gfx_native native;
        NUE_STRUCT_INIT(&native);
        nue_gfx_get_native(gfx, &native);
        say("NUE window and nue_gfx ready (renderer " + std::to_string(int(native.renderer)) + ")");

        const char* error_text = nullptr;
        auto arena = nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(), &error_text);
        if (!arena) { std::cerr << "guest arena: " << (error_text ? error_text : "?") << "\n"; status = 1; }
        else try {
            Cpu c;
            Platform64 p(c, exports, game);
            std::string error;
            auto options = parse_win32_layer("all", error);
            options.window = services.window.get();
            options.display = services.display.get();
            options.d3d9_device = d3d9_device_on_nue_gfx(gfx);
            const fs::path settings_dir = game / "UserFiles", registry_file = settings_dir / "registry64.txt";
            if (fs::exists(registry_file)) options.registry_text = read_file(registry_file);
            Win32Facade facade(p, options, services.input.get());

            // DirectSound on NUE's audio device (NUE is already running: the sink does not start it again); no device -> a silent real-time output.
            pa::register_nue_host_sink(false);
            pa::HostSink chosen = pa::HostSink::null;
            std::string note;
            pa::AudioSettings audio;
            audio.enabled = true;
            audio.sink_factory = pa::make_host_sink_factory(pa::HostSink::nue, chosen, note, say);
            say(std::string("audio output: ") + pa::host_sink_name(chosen) + (note.empty() ? "" : " (" + note + ")"));
            const pa::GuestHandles handles{[&](uint32_t h) { facade.set_event(h); }, [&](uint32_t h) { return facade.is_window(h); }};
            std::string why;
            if (!pa::install_dsound(p, audio, say, why, &handles)) say("DirectSound not installed: " + why);

            // The mods with the product's defaults (the launcher's [MAIN] / [MISC] defaults).
            WidescreenSettings widescreen;
            widescreen.custom_user_directory = "UserFiles";   // the game's saves and settings: this host has no shell folders (SHGetFolderPathA)
            say(install_widescreen(widescreen));
            say(install_detail(DetailSettings{}));

            const fs::path log = exports.parent_path() / "logs" / "play64_trace.log";
            fs::create_directories(log.parent_path());
            say("Platform64: " + facade.installed_report() + "\ntrace: " + log.string());
            try {
                p.run(budget, log);
            } catch (const std::exception& e) {
                say(std::string("STOP ") + e.what() + "\ninstructions=" + std::to_string(c.instructions));
            }
            std::error_code ec;
            fs::create_directories(settings_dir, ec);
            std::ofstream(registry_file, std::ios::binary) << facade.registry_text();
            pa::shutdown_dsound(say);
        } catch (const std::exception& e) {
            std::cerr << "the 64-bit host stopped: " << e.what() << "\n";
            status = 1;
        }
        arena.reset();
        nfsu2::platform::set_services({});
        nue_gfx_destroy(gfx);
        services = {};
    }
    nue_shutdown();
    return status;
}
