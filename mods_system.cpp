// Frame-time constants, intro skipping, cutscene frame rate, CPU affinity, drive check, sound step and the windowed modes
// (the mod's Misc and Windowed modules). The windowed modes act on the game's window calls, which this program implements
// natively (NativePlatform::override_import) instead of patching an import table.
#include "mods_internal.hpp"
#include "platform/services.hpp"
namespace platform = nfsu2::platform;
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <algorithm>
#include <cmath>
#include <tuple>

namespace nfsu2raw::mods {
namespace {
// ---- display ----------------------------------------------------------------------------------------------------------------------------------------
std::tuple<int, int> monitor_size() {
    const auto displays = platform::services().display->list(false);
    const platform::DisplayInfo* primary = platform::primary_display(displays);
    return primary ? std::tuple<int, int>{int(primary->current.width), int(primary->current.height)} : std::tuple<int, int>{0, 0};
}

platform::Window& game_window() { return *platform::services().window; }
// The game's window as the Windows API wants it (for the pass-through of the guest's own window calls).
HWND game_hwnd() { return static_cast<HWND>(game_window().native_surface().a); }
void remember_game_window(HWND window) { game_window().adopt({platform::NativeSurface::Kind::win32_hwnd, window, nullptr}); }

// ---- windowed modes (WindowedModeWrapper) --------------------------------------------------------------------------------------------------
bool g_borderless = true, g_resizable = false, g_scale_window = false, g_stretch_window = false, g_cursor_on_frame = false;
int g_desired_width = 0, g_desired_height = 0;
// A windowed mode is in effect when the configuration asks for one, or while a resolution the monitor does not offer is selected
// in the game's options (the game then draws at that size into a borderless window scaled to the screen, aspect ratio kept).
int g_configured_mode = 0;
bool g_virtual = false;
bool windowed_active() { return g_configured_mode != 0 || g_virtual; }
void apply_mode_flags() {
    g_borderless = true;
    g_resizable = g_scale_window = g_stretch_window = false;
    if (g_configured_mode) {
        switch (g_configured_mode) {
            case 5: g_stretch_window = true; break;
            case 4: g_scale_window = true; break;
            case 3: g_resizable = true; [[fallthrough]];
            case 2: g_borderless = false; break;
            default: break;
        }
    } else if (g_virtual) {
        g_scale_window = true;
    }
}

std::tuple<int, int, int, int> before_create_window(int width, int height) {
    const auto [desktop_w, desktop_h] = monitor_size();
    int new_w = width, new_h = height;
    if (g_scale_window) {
        const float aspect = float(width) / float(height);
        new_h = desktop_h;
        new_w = int(new_h * aspect);
    }
    if (g_stretch_window) {
        new_h = desktop_h;
        new_w = desktop_w;
    }
    if (g_borderless || g_desired_width <= 0 || g_desired_height <= 0) {
        g_desired_width = new_w;
        g_desired_height = new_h;
    }
    const int x = int((float(desktop_w) / 2.0f) - (float(new_w) / 2.0f));
    const int y = int((float(desktop_h) / 2.0f) - (float(new_h) / 2.0f));
    platform::services().display->set_dpi_aware();
    return {x, y, new_w, new_h};
}

void after_create_window() {
    game_window().set_frame({g_borderless, g_resizable});
    if (!g_borderless && g_desired_width > 0 && g_desired_height > 0) {
        const auto [desktop_w, desktop_h] = monitor_size();
        game_window().place_client_centered(g_desired_width, g_desired_height, desktop_w, desktop_h, false);
    } else {
        game_window().refresh_frame();
    }
}

void center_window_position(int width, int height) {
    const auto [desktop_w, desktop_h] = monitor_size();
    int new_w = width, new_h = height;
    if (g_scale_window) {
        const float aspect = float(width) / float(height);
        new_h = desktop_h;
        new_w = int(new_h * aspect);
    }
    if (g_stretch_window) {
        new_h = desktop_h;
        new_w = desktop_w;
    }
    game_window().place_outer(int((float(desktop_w) / 2.0f) - (float(new_w) / 2.0f)), int((float(desktop_h) / 2.0f) - (float(new_h) / 2.0f)), new_w, new_h);
}

uint32_t create_window_ex_a(Cpu& c) {
    const DWORD ex_style = argument(c, 0);
    const char* class_name = reinterpret_cast<const char*>(uintptr_t(argument(c, 1)));
    const char* window_name = reinterpret_cast<const char*>(uintptr_t(argument(c, 2)));
    const DWORD style = argument(c, 3);
    int x = int(argument(c, 4)), y = int(argument(c, 5)), width = int(argument(c, 6)), height = int(argument(c, 7));
    HWND parent = reinterpret_cast<HWND>(uintptr_t(argument(c, 8)));
    HMENU menu = reinterpret_cast<HMENU>(uintptr_t(argument(c, 9)));
    HINSTANCE instance = reinterpret_cast<HINSTANCE>(uintptr_t(argument(c, 10)));
    void* parameter = reinterpret_cast<void*>(uintptr_t(argument(c, 11)));
    if (parent && parent != GetDesktopWindow())
        return uint32_t(uintptr_t(CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter)));
    if (!windowed_active()) {   // not in a windowed mode (yet): the game's own window, remembered for later
        HWND created = CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter);
        remember_game_window(created);
        return uint32_t(uintptr_t(created));
    }
    std::tie(x, y, width, height) = before_create_window(width, height);
    HWND created = CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter);
    remember_game_window(created);
    after_create_window();
    return uint32_t(uintptr_t(created));
}

uint32_t set_window_long_a(Cpu& c) {
    HWND window = reinterpret_cast<HWND>(uintptr_t(argument(c, 0)));
    const int index = int(argument(c, 1));
    LONG value = LONG(argument(c, 2));
    if (index != GWL_STYLE || !windowed_active()) return uint32_t(SetWindowLongA(window, index, value));
    if (g_borderless) {
        after_create_window();
        RECT rect;
        GetClientRect(window, &rect);
        center_window_position(rect.right, rect.bottom);
        return uint32_t(value);
    }
    value |= (WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU);
    if (g_resizable) value |= (WS_MAXIMIZEBOX | WS_THICKFRAME);
    return uint32_t(SetWindowLongA(window, GWL_STYLE, value));
}

uint32_t adjust_window_rect(Cpu& c) {
    RECT* rect = reinterpret_cast<RECT*>(uintptr_t(argument(c, 0)));
    const BOOL menu = BOOL(argument(c, 2));
    if (!windowed_active()) return uint32_t(AdjustWindowRect(rect, DWORD(argument(c, 1)), menu));
    if (!g_borderless) {
        g_desired_width = rect->right - rect->left;
        g_desired_height = rect->bottom - rect->top;
        return uint32_t(AdjustWindowRect(rect, WS_CAPTION, menu));
    }
    after_create_window();
    return uint32_t(AdjustWindowRect(rect, GetWindowLongA(game_hwnd(), GWL_STYLE), menu));
}

// ---- frame time and friends -------------------------------------------------------------------------------------------------------------------------
unsigned refresh_rate() {
    const auto displays = platform::services().display->list(false);
    const platform::DisplayInfo* primary = platform::primary_display(displays);
    const unsigned hertz = primary ? primary->current.refresh_millihertz / 1000u : 0u;
    return hertz > 1 ? hertz : 60;
}

// The audio step is never shorter than a 60 Hz frame: at higher frame rates it would be too small to keep the audio engine in step.
void sound_update(Cpu& c) {
    const float step = std::max(as_float(argument(c, 0)), 1.0f / 60.0f);
    call_original("sound_update", reg(c, ECX), reg(c, EDX), {bits(step)});
}
}  // namespace

std::pair<int, int> desktop_resolution() {
    const auto displays = platform::services().display->list(false);
    const platform::DisplayInfo* primary = platform::primary_display(displays);
    return primary ? std::pair<int, int>{int(primary->desktop_width), int(primary->desktop_height)} : std::pair<int, int>{0, 0};
}

// The cursor stays visible over the window frame of the windowed modes (called where the game hides it).
void windowed_cursor_hook(bool show) {
    if (!windowed_active()) return;   // the game hides the cursor itself
    platform::Window& window = game_window();
    if (!g_borderless && window.adopted() && !show) {
        if (!window.cursor_inside_client()) {
            if (!g_cursor_on_frame) {
                g_cursor_on_frame = true;
                window.show_cursor_forced();
            }
            return;
        }
        g_cursor_on_frame = false;
    }
    window.show_cursor(show);
}

unsigned resolved_fps_limit(const WidescreenSettings& settings) {
    int limit = settings.fps_limit;
    if (limit < 0) limit = limit == -1 ? int(refresh_rate()) : limit == -2 ? int(refresh_rate()) * 2 : 60;
    return unsigned(std::max(limit, 0));
}

void install_system(const WidescreenSettings& settings) {
    platform::services().display->set_dpi_aware();   // real pixel sizes for the desktop and the window, as the windowed modes need
    auto* platform = NativePlatform::current();

    if (settings.skip_intro) {
        static const char skip_this[] = "SkipThis";
        for (int i = 0; i < 4; ++i) set_var(("skip_intro_string_" + std::to_string(i)).c_str(), uint32_t(uintptr_t(skip_this)));
    }

    const unsigned fps = resolved_fps_limit(settings);
    if (fps) {
        const float frame_time = 1.0f / float(fps);
        f32_at(address_of("frame_time_a")) = frame_time;
        f32_at(address_of("frame_time_b")) = frame_time;
        f32_at(address_of("frame_time_c")) = frame_time;
        f32_at(address_of("frame_time_d")) = frame_time;
        set_var("frame_time_imm", frame_time);
        set_var("steering_fix", 1u);   // the player's steering does not auto-centre when frames are shorter: no sticky input
    }
    if (settings.high_fps_cutscenes) {
        int cutscene_fps = 60;
        if (fps > 0) cutscene_fps = int(fps);
        if (cutscene_fps % 30) cutscene_fps -= cutscene_fps % 30;
        cutscene_fps = std::clamp(cutscene_fps, 30, 60);   // the car physics are buggy above 60 fps
        set_var("cutscene_fps_imm", float(cutscene_fps));
        f32_at(address_of("cutscene_fps")) = float(cutscene_fps);
    }
    if (settings.single_core_affinity) {
        DWORD_PTR process_mask, system_mask;
        if (GetProcessAffinityMask(GetCurrentProcess(), &process_mask, &system_mask)) {
            const DWORD_PTR other_cores = (process_mask - 1) & process_mask;
            if (other_cores != 0) {   // more than one core available
                const DWORD_PTR mask = process_mask & ~other_cores;
                SetThreadAffinityMask(GetCurrentThread(), mask);
                platform->set_game_thread_affinity(mask);
            }
        }
    }
    if (settings.no_optical_drive_fix) set_var("no_optical_drive", 1u);
    install_hook("sound_update", sound_update);

    // The window calls are always native; they act on the game's window only in a windowed mode (configured, or chosen in the options).
    g_configured_mode = settings.windowed_mode;
    apply_mode_flags();
    if (g_configured_mode) u32_at(address_of("windowed_mode")) = 1;
    platform->override_import("CreateWindowExA", 12, create_window_ex_a);
    platform->override_import("SetWindowLongA", 3, set_window_long_a);
    platform->override_import("AdjustWindowRect", 3, adjust_window_rect);
}

// A resolution the monitor does not offer is selected (or not): the game then runs in a borderless window scaled to the screen.
void set_virtual_mode(bool on) {
    if (on == g_virtual) return;
    g_virtual = on;
    apply_mode_flags();
    if (!g_configured_mode) u32_at(address_of("windowed_mode")) = on ? 1 : 0;
}
bool virtual_mode_active() { return g_virtual; }

// Places the game's window for an output of width x height after the game placed it (windowed modes only).
void place_game_window(int width, int height) {
    if (!windowed_active()) return;
    HWND window = reinterpret_cast<HWND>(uintptr_t(u32_at(address_of("hwnd"))));
    if (!window) return;
    remember_game_window(window);
    if (g_borderless) {
        g_desired_width = width;
        g_desired_height = height;
        after_create_window();
        center_window_position(width, height);
    } else {
        const auto [desktop_w, desktop_h] = monitor_size();
        game_window().place_client_centered(width, height, desktop_w, desktop_h, true);   // centred by the client area, shown, not topmost
    }
    const platform::Rect outer = game_window().outer_rect();
    RECT* rect = reinterpret_cast<RECT*>(uintptr_t(address_of("window_rect")));
    *rect = RECT{outer.left, outer.top, outer.right, outer.bottom};   // the game keeps its own copy of the window rectangle
}
}  // namespace nfsu2raw::mods
