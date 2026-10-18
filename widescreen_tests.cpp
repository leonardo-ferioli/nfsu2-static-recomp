// Console tests for the widescreen fix: every patch point the modules name exists in the translated code, the values written for it,
// each hook handler against independently computed numbers, and a function hook running in translated code (entry, handler, return,
// and the call of the original function from the handler). No window, device or sound object is used; the settings file stands in
// for the registry in a temporary folder.
#include "native32.hpp"
#include "mods.hpp"
#include "mods_internal.hpp"
#include "mods_widescreen.hpp"
#include <cmath>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <string>
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
using namespace nfsu2raw;
using namespace nfsu2raw::mods;

static void check(bool ok, const std::string& why) { if (!ok) throw Fault("FAILED: " + why); }
static void close_to(double actual, double expected, const std::string& what, double tolerance = 1e-4) {
    if (!(std::fabs(actual - expected) <= tolerance * std::max(1.0, std::fabs(expected)))) throw Fault("FAILED: " + what + ": got " + std::to_string(actual) + ", expected " + std::to_string(expected));
}
static float var_float(const char* name) { return as_float(get_var(name)); }
static float pop_x87() { float f; asm volatile("fstps %0" : "=m"(f)); return f; }
static void call_hook(Cpu& c, const char* name) {
    const int index = mod_hook_index(name);
    check(index >= 0, std::string("hook exists: ") + name);
    check(mod_hook_table[index] != nullptr, std::string("hook installed: ") + name);
    mod_hook_table[index](c);
}

static bool g_original_ran = false;
static void original_caller(Cpu& c) {   // a function-hook handler that runs the original function body
    g_original_ran = true;
    set_reg(c, EAX, call_original("get_racing_resolution", 0, 0, {argument(c, 0), argument(c, 1)}));
}

int main(int argc, char** argv) {
    try {
        if (argc != 3 && argc != 4) throw Fault("requires the export directory, the game directory and optionally scaled (use ctest)");
        const bool scaled_mode = argc == 4 && std::string(argv[3]) == "scaled";
        Cpu c;
        NativePlatform p(c, argv[1], argv[2]);

        // Before installation: every variable has the game's original value and no hook is installed.
        for (unsigned i = 0; i < mod_hook_count; ++i) check(mod_hook_table[i] == nullptr, "hooks start empty");
        check(get_var("hud_pos_x") == bits(320.0f), "original HUD origin kept until a mod installs");

        // Install with the defaults (settings file in a temporary folder instead of the registry).
        const std::filesystem::path temp = std::filesystem::temp_directory_path() / "nfsu2_widescreen_test";
        std::filesystem::remove_all(temp);
        WidescreenSettings s;
        s.write_settings_to_file = true;
        s.custom_user_directory = "";
        s.improve_gamepad = 1;
        s.fmv_mode = 1;
        s.language = "";
        s.console_gamma = true;
        s.scale_all_resolutions = scaled_mode;   // the default run keeps monitor modes next to scaled ones; the scaled run makes every size scaled
        s.width = 1280;      // a size asked for on the command line wins over the saved one
        s.height = 720;
        s.force_resolution = true;
        s.fe_scale = 0.8f;   // the interface is drawn at 80%: elements keep their zones (anchoring)
        // The settings folder is documents\NFS Underground 2; only the file's presence matters, so use a custom folder.
        s.custom_user_directory = "nfsu2_widescreen_test_files";
        const std::string description = install_widescreen(s);
        std::cout << description << "\n";
        if (scaled_mode) {
            // Every resolution is drawn at its size in the scaled window, the monitor's own sizes included.
            check(resolution_count() > 4, "the list is not empty");
            for (size_t i = 0; i < resolution_count(); ++i) check(resolution_is_virtual(i), "every listed resolution is scaled: entry " + std::to_string(i));
            i32_at(address_of("racing_resolution")) = 0;
            int w = 0, h = 0;
            p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&w)), uint32_t(uintptr_t(&h))});
            check(virtual_mode_active() && u32_at(address_of("windowed_mode")) == 1, "the first entry already uses the scaled window");
            std::cout << "widescreen scaled-list test passed\n";
            return 0;
        }

        for (const char* name : {"main_loop", "delta_time", "before_reset", "before_end_scene", "get_racing_resolution", "inc_screen_res", "locg_racing_resolution", "res_set", "res_get", "window_placement",
                                 "wndproc", "fov", "rain_x", "rain_y", "hud", "blips", "hud2", "stop_sign", "movie_start", "set_transform", "movie_crash_fix", "joy_state", "mouse_state",
                                 "keyboard_state", "cursor_function", "catch_pad", "fe_remap", "buttons", "menu_text", "camera_data", "camera_look_at", "nos_trail", "sound_update"})
            check(mod_hook_table[mod_hook_index(name)] != nullptr, std::string("hook installed: ") + name);
        check(mod_hook_table[mod_hook_index("show_cursor")] != nullptr, "show cursor hook installed (it acts only in a windowed mode)");

        // Output size: the dependent values.
        notify_resolution(1920, 1080);
        const double hud_scale = (1.0 / 1920.0 * (1080.0 / 480.0)) * 2.0;
        close_to(f32_at(address_of("hud_scale_x")), hud_scale, "HUD scale written to the game");
        close_to(var_float("hud_pos_x"), 1.0 / hud_scale, "HUD x position");
        close_to(f32_at(address_of("hud_pos_x2_global")), 2.0 / hud_scale, "HUD x position (double)");
        close_to(var_float("mirror_left_x1"), 1.0 / hud_scale - 120.0, "left mirror");
        close_to(var_float("mirror_right_x2"), 1.0 / hud_scale + 120.0, "right mirror");
        close_to(var_float("radar_width_1"), 3840.0, "radar mask width");
        close_to(var_float("radar_height_2"), 2160.0, "radar mask height");
        close_to(var_float("cutscene_border_3"), 0.0, "cutscene borders removed");
        close_to(f32_at(address_of("dyno_offset")), 79.0 + (480.0 * 1920.0 / 1080.0 - 640.0) / 2.0, "dyno result offset");
        close_to(var_float("fmv_right"), 0.5 / ((4.0 / 3.0) / (16.0 / 9.0)), "FMV width");
        check(std::strcmp(reinterpret_cast<const char*>(uintptr_t(get_var("skip_intro_string_0"))), "SkipThis") == 0, "intro skipping string");
        check(u32_at(get_var("screenshot_width_ptr")) == 1440, "4:3 screenshot width");
        check(get_var("fov_fix") == 1 && get_var("res_store_nop") == 1 && get_var("no_optical_drive") == 1 && get_var("steering_fix") == 1, "flags");
        close_to(f32_at(address_of("frame_time_a")), 1.0 / 60.0, "game frame time");
        close_to(var_float("frame_time_imm"), 1.0 / 60.0, "game frame time (immediate)");
        close_to(var_float("cutscene_fps_imm"), 60.0, "cutscene frame rate");

        // FOV hook: EBP+58h holds a pointer that must end up in EAX, ECX selects the case, ST(0) receives the vertical scale.
        alignas(16) uint8_t frame[0x100] = {};
        const uint32_t frame_address = uint32_t(uintptr_t(frame));
        *reinterpret_cast<uint32_t*>(frame + 0x58) = 0x12345678;
        asm volatile("fninit");
        wr<4>(c, 20, frame_address);
        wr<4>(c, 4, 1);
        call_hook(c, "fov");
        check(reg(c, EAX) == 0x12345678, "FOV hook sets EAX");
        close_to(pop_x87(), 1.0, "vertical scale pushed");
        close_to(f32_at(get_var("fov_ptr1")), 0.75, "horizontal FOV scale 1/(aspect/(4/3))");
        close_to(f32_at(get_var("fov_ptr2")), 0.43511, "FOV constant 2 (headlights)");
        close_to(f32_at(get_var("fov_ptr3")), 1.22, "FOV constant 3 (headlights)");
        wr<4>(c, 4, 3);
        call_hook(c, "fov");
        close_to(pop_x87(), 0.45, "rear-view mirror scale");
        close_to(f32_at(get_var("fov_ptr1")), 1.0, "FOV scale back to 1 outside the special cases");
        wr<4>(c, 4, 11);
        call_hook(c, "fov");
        close_to(pop_x87(), 1.0, "vehicle reflection scale");

        // Rain droplets.
        std::memset(frame, 0, sizeof frame);
        *reinterpret_cast<float*>(frame + 0x0c) = 2.0f;
        *reinterpret_cast<float*>(frame + 0x10) = 3.0f;
        *reinterpret_cast<float*>(frame + 0x08) = 5.0f;
        wr<4>(c, 16, frame_address);
        asm volatile("fninit");
        call_hook(c, "rain_x");
        close_to(pop_x87(), 2.0 * ((0.75 / (1920.0 / 1080.0)) * (4.0 / 3.0)) * 0.5 + 3.0, "rain droplet width");
        asm volatile("fninit; flds %0" ::"m"(*reinterpret_cast<float*>(frame + 0x0c)));
        wr<4>(c, 0, 0xabcdef01);
        call_hook(c, "rain_y");
        close_to(pop_x87(), 2.0 * 0.5 + 5.0, "rain droplet height");
        check(*reinterpret_cast<uint32_t*>(frame + 0x38) == 0xabcdef01, "rain hook stores EAX");

        // HUD hook: "EA_Trax_Pos_1" (-173,-177, offset -109,0) moves; an unlisted position stays.
        const float x = -173.0f, y = -177.0f;
        wr<4>(c, 4, bits(x));
        wr<4>(c, 8, bits(y));
        std::memset(frame, 0, sizeof frame);
        wr<4>(c, 16, frame_address);
        call_hook(c, "hud");
        close_to(*reinterpret_cast<float*>(frame + 0x60), -173.0 - 109.0, "listed HUD element moves");
        close_to(*reinterpret_cast<float*>(frame + 0x64), -177.0, "listed HUD element keeps y");
        wr<4>(c, 4, bits(1234.0f));
        wr<4>(c, 8, bits(55.0f));
        call_hook(c, "hud");
        close_to(*reinterpret_cast<float*>(frame + 0x60), 1234.0, "unlisted HUD element stays");

        // Interface layout at FEScale 0.8 in a race: a rigid move per element by (pivot - centre) * (1/s - 1) according to its zone; elements
        // that fill the screen keep filling it; touching pieces move as a group. The space is hud-width x height virtual units.
        {
            const double width = 2.0 / f32_at(address_of("hud_scale_x")), height = 2.0 / f32_at(address_of("fe_scale_y"));
            const double k = 1.0 / 0.8 - 1.0, cx = width / 2.0, cy = height / 2.0;
            alignas(16) float quad[16];
            // Loads one coordinate the way the game does: the first coordinate (x of corner 0) always comes first and decides.
            auto load = [&](const char* hook, float x_lo, float x_hi, float y_lo, float y_hi) {
                const float xs[4] = {x_lo, x_hi, x_lo, x_hi}, ys[4] = {y_lo, y_lo, y_hi, y_hi};
                for (int i = 0; i < 4; ++i) { quad[4 * i] = xs[i]; quad[4 * i + 1] = ys[i]; }
                wr<4>(c, 24, uint32_t(uintptr_t(quad)));
                asm volatile("fninit");
                call_hook(c, "fe_quad_x0");
                double first = pop_x87();
                if (std::strcmp(hook, "fe_quad_x0") == 0) return first;
                call_hook(c, hook);
                return double(pop_x87());
            };
            i32_at(address_of("game_state")) = 3;   // in a race
            close_to(load("fe_quad_x0", 700, 760, 400, 450), 700 + (width - cx) * k, "right-zone element moves outwards (x, corner 0)");
            close_to(load("fe_quad_x1", 700, 760, 400, 450), 760 + (width - cx) * k, "right-zone element moves rigidly (x, corner 1)");
            close_to(load("fe_quad_y0", 700, 760, 400, 450), 400 + (height - cy) * k, "bottom-zone element moves outwards (y)");
            close_to(load("fe_quad_x0", 20, 80, 20, 60), 20 + (0 - cx) * k, "left-zone element moves outwards");
            close_to(load("fe_quad_y0", 20, 80, 20, 60), 20 + (0 - cy) * k, "top-zone element moves outwards");
            close_to(load("fe_quad_x0", 380, 470, 200, 280), 380, "centre element stays");
            close_to(load("fe_quad_x0", 0, float(width), 0, 100), cx + (0 - cx) / 0.8, "full-width element keeps filling the screen");
            // two touching pieces (the letters of a text) move together, by the zone of the first one
            close_to(load("fe_quad_x0", 190, 238, 20, 40), 190 + (0 - cx) * k, "first piece of a group");
            close_to(load("fe_quad_x0", 240, 290, 20, 40), 240 + (0 - cx) * k, "a touching piece moves with its group although its own zone is the middle");
            close_to(load("fe_quad_x0", 600, 650, 20, 40), 600 + (width - cx) * k, "a piece that does not touch starts its own group");
            // line segments: end points at EBX / EBP, translation only
            float a[2] = {700, 400}, b[2] = {760, 450};
            wr<4>(c, 12, uint32_t(uintptr_t(a)));
            wr<4>(c, 20, uint32_t(uintptr_t(b)));
            asm volatile("fninit");
            call_hook(c, "fe_line_ax");
            pop_x87();
            asm volatile("fninit");
            call_hook(c, "fe_line_bx");
            close_to(pop_x87(), 760 + (width - cx) * k, "line end point moves with its zone");
            // outside a race nothing is scaled; a full-height 4:3 backdrop is widened to the whole screen
            i32_at(address_of("game_state")) = 0;
            close_to(load("fe_quad_x0", float(cx - 320), float(cx + 320), 0, float(height)), cx + (-320) * (width / 640.0), "backdrop is widened to the full width");
            close_to(load("fe_quad_x0", 700, 760, 400, 450), 700, "menu elements are not moved");
        }

        // The resolution loaded with the settings: a saved size is replaced by the forced one.
        u32_at(address_of("racing_resolution")) = (1024u << 16) | 768u | 0x80000000u;
        call_hook(c, "res_get");
        {
            const auto forced = resolution_size(size_t(i32_at(address_of("racing_resolution"))));
            check(forced.first == 1280 && forced.second == 720, "a forced resolution replaces the saved one: " + std::to_string(forced.first) + "x" + std::to_string(forced.second));
        }

        // Menu texts follow the last input device: with a gamepad ("Xbox" texts) a known string is replaced, an unknown one is not.
        static const char continue_text[] = "Continue";
        wr<4>(c, 0, uint32_t(uintptr_t(continue_text)));
        call_hook(c, "menu_text");
        check(std::strcmp(reinterpret_cast<const char*>(uintptr_t(reg(c, EAX))), "Continue") == 0, "keyboard keeps the original text");

        // A function hook in translated code: GetRacingResolution(int* width, int* height) answers from the resolution list.
        // Index -1 selects the desktop size.
        i32_at(address_of("racing_resolution")) = -1;
        int width = 0, height = 0;
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        const auto [desktop_w, desktop_h] = desktop_resolution();
        check(width == desktop_w && height == desktop_h, "function hook answers with the desktop size: " + std::to_string(width) + "x" + std::to_string(height));
        // Resolutions the monitor lacks are listed too; choosing one switches to the scaled borderless window, a monitor mode back.
        size_t virtual_index = size_t(-1), real_index = size_t(-1);
        for (size_t i = 0; i < resolution_count(); ++i) {
            if (resolution_is_virtual(i)) { if (virtual_index == size_t(-1)) virtual_index = i; }
            else if (real_index == size_t(-1)) real_index = i;
        }
        check(virtual_index != size_t(-1) && real_index != size_t(-1), "the list has monitor modes and extra resolutions");
        i32_at(address_of("racing_resolution")) = int(virtual_index);
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        check(std::make_pair(width, height) == resolution_size(virtual_index), "the extra resolution is answered as is");
        check(virtual_mode_active() && u32_at(address_of("windowed_mode")) == 1, "an extra resolution turns the scaled window on");
        i32_at(address_of("racing_resolution")) = int(real_index);
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        check(std::make_pair(width, height) == resolution_size(real_index), "a monitor mode is answered as is");
        check(!virtual_mode_active() && u32_at(address_of("windowed_mode")) == 0, "a monitor mode turns it off again");
        // The size the widescreen fix computes from follows the selection (the HUD scale uses the height).
        i32_at(address_of("racing_resolution")) = int(virtual_index);
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        close_to(f32_at(address_of("hud_scale_x")), (1.0 / double(width) * (double(height) / 480.0)) * 2.0, "HUD scale follows the selected extra resolution");
        i32_at(address_of("racing_resolution")) = int(real_index);
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        // The same function with a handler that runs the original: entry 0 of the game's own table is 640x480.
        install_hook("get_racing_resolution", original_caller);
        i32_at(address_of("racing_resolution")) = 0;
        width = height = 0;
        p.call_guest(0x5bf610, 0, 0, {uint32_t(uintptr_t(&width)), uint32_t(uintptr_t(&height))});
        check(g_original_ran, "the handler ran");
        check(width == 640 && height == 480, "the original function body ran from the handler: " + std::to_string(width) + "x" + std::to_string(height));

        std::filesystem::remove_all(temp);
        std::filesystem::remove_all(std::filesystem::path(argv[2]) / "nfsu2_widescreen_test_files");
        std::cout << "widescreen tests passed\n";
        return 0;
    } catch (const std::exception& error) {
        std::cerr << error.what() << "\n";
        return 1;
    }
}
