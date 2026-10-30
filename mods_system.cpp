// Frame-time constants, intro skipping, cutscene frame rate, CPU affinity, drive check, sound step and the windowed modes
// (the mod's Misc and Windowed modules). The windowed modes act on the game's window calls, which this program implements
// natively (NativePlatform::override_import) instead of patching an import table.
#include "nue/window_fit.hpp"
#include "guest_memory.hpp"
#include "mods_internal.hpp"
#include "platform/services.hpp"
namespace platform = nfsu2::platform;
#include "mods_win32.hpp"
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
#ifdef NFSU2_GUEST_IDENTITY
// The game's window as the Windows API wants it (for the pass-through of the guest's own window calls).
HWND game_hwnd() { return static_cast<HWND>(game_window().native_surface().a); }
void remember_game_window(HWND window) { game_window().adopt({platform::NativeSurface::Kind::win32_hwnd, window, nullptr}); }
#endif

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
        const nue::FitRect fit = nue::fit_aspect(uint32_t(width), uint32_t(height), 0, 0, uint32_t(desktop_w), uint32_t(desktop_h));   // as large as fits the monitor, aspect kept
        new_w = int(fit.width);
        new_h = int(fit.height);
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
        const nue::FitRect fit = nue::fit_aspect(uint32_t(width), uint32_t(height), 0, 0, uint32_t(desktop_w), uint32_t(desktop_h));   // as large as fits the monitor, aspect kept
        new_w = int(fit.width);
        new_h = int(fit.height);
    }
    if (g_stretch_window) {
        new_h = desktop_h;
        new_w = desktop_w;
    }
    game_window().place_outer(int((float(desktop_w) / 2.0f) - (float(new_w) / 2.0f)), int((float(desktop_h) / 2.0f) - (float(new_h) / 2.0f)), new_w, new_h);
}

#ifdef NFSU2_GUEST_IDENTITY
// ---- the windowed modes on the 32-bit host: the game's window calls go to the real Windows -------------------------------------------------------
uint32_t create_window_ex_a(Cpu& c) {
    const DWORD ex_style = argument(c, 0);
    const char* class_name = nfsu2::guest::ptr<const char>(argument(c, 1));
    const char* window_name = nfsu2::guest::ptr<const char>(argument(c, 2));
    const DWORD style = argument(c, 3);
    int x = int(argument(c, 4)), y = int(argument(c, 5)), width = int(argument(c, 6)), height = int(argument(c, 7));
    HWND parent = host_object<HWND>(argument(c, 8));
    HMENU menu = host_object<HMENU>(argument(c, 9));
    HINSTANCE instance = host_object<HINSTANCE>(argument(c, 10));
    void* parameter = host_object<void*>(argument(c, 11));   // lpParam: an opaque value the guest gets back in WM_CREATE
    if (parent && parent != GetDesktopWindow())
        return guest_object(CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter));
    if (!windowed_active()) {   // not in a windowed mode (yet): the game's own window, remembered for later
        HWND created = CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter);
        remember_game_window(created);
        return guest_object(created);
    }
    std::tie(x, y, width, height) = before_create_window(width, height);
    HWND created = CreateWindowExA(ex_style, class_name, window_name, style, x, y, width, height, parent, menu, instance, parameter);
    remember_game_window(created);
    after_create_window();
    return guest_object(created);
}

uint32_t set_window_long_a(Cpu& c) {
    HWND window = host_object<HWND>(argument(c, 0));
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
    RECT* rect = nfsu2::guest::ptr<RECT>(argument(c, 0));
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
#else
// ---- the windowed modes on a 64-bit host ---------------------------------------------------------------------------------------------------------
// The game's window calls are the Win32 layer's (win32_facade_window.cpp, its window is the platform window that game_window() is): the same policy as
// above changes their arguments, calls the layer's own handler ("chaining") and acts on the platform window afterwards.
GuestPlatform::NativeHook g_next_create_window, g_next_set_window_long, g_next_adjust_window_rect;
uint32_t g_desktop_window = 0;
uint32_t call_import(const char* name, std::initializer_list<uint32_t> arguments) {
    auto* platform = GuestPlatform::active();
    return platform->call_guest(platform->token_for(name), 0, 0, arguments);
}
void set_argument(Cpu& c, unsigned index, uint32_t value) { u32_at(reg(c, ESP) + 4 + 4 * index) = value; }

uint32_t create_window_chained(Cpu& c) {
    const uint32_t parent = argument(c, 8);
    if (!g_desktop_window) g_desktop_window = call_import("GetDesktopWindow", {});
    if ((parent && parent != g_desktop_window) || !windowed_active()) return g_next_create_window(c);   // a child window, or no windowed mode (yet)
    const auto [x, y, width, height] = before_create_window(int(argument(c, 6)), int(argument(c, 7)));
    set_argument(c, 4, uint32_t(x)); set_argument(c, 5, uint32_t(y)); set_argument(c, 6, uint32_t(width)); set_argument(c, 7, uint32_t(height));
    const uint32_t window = g_next_create_window(c);
    after_create_window();
    return window;
}
uint32_t set_window_long_chained(Cpu& c) {
    if (int(argument(c, 1)) != GWL_STYLE || !windowed_active()) return g_next_set_window_long(c);
    if (g_borderless) {
        after_create_window();
        static int32_t* client = guest_array<int32_t>(4);   // RECT
        call_import("GetClientRect", {argument(c, 0), nfsu2::guest::to_guest(client)});
        center_window_position(client[2], client[3]);
        return argument(c, 2);
    }
    uint32_t value = argument(c, 2) | uint32_t(WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU);
    if (g_resizable) value |= uint32_t(WS_MAXIMIZEBOX | WS_THICKFRAME);
    set_argument(c, 2, value);
    return g_next_set_window_long(c);
}
uint32_t adjust_window_rect_chained(Cpu& c) {
    if (!windowed_active()) return g_next_adjust_window_rect(c);
    const int32_t* rect = nfsu2::guest::ptr<const int32_t>(argument(c, 0));
    if (!g_borderless) {
        g_desired_width = rect[2] - rect[0];
        g_desired_height = rect[3] - rect[1];
        set_argument(c, 1, uint32_t(WS_CAPTION));
        return g_next_adjust_window_rect(c);
    }
    after_create_window();
    set_argument(c, 1, uint32_t(WS_POPUP));   // a borderless window has no frame to add
    return g_next_adjust_window_rect(c);
}
#endif

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
    if (settings.skip_intro) {
        static const char skip_this[] = "SkipThis";
        for (int i = 0; i < 4; ++i) set_var(("skip_intro_string_" + std::to_string(i)).c_str(), guest_constant(skip_this, sizeof(skip_this)));
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
#if defined(_WIN32)
        DWORD_PTR process_mask, system_mask;
        if (GetProcessAffinityMask(GetCurrentProcess(), &process_mask, &system_mask)) {
            const DWORD_PTR other_cores = (process_mask - 1) & process_mask;
            if (other_cores != 0) {   // more than one core available
                const DWORD_PTR mask = process_mask & ~other_cores;
                SetThreadAffinityMask(GetCurrentThread(), mask);
#ifdef NFSU2_GUEST_IDENTITY
                NativePlatform::current()->set_game_thread_affinity(mask);
#endif
            }
        }
#else
        GuestPlatform::active()->log_line("widescreen fix: single-core affinity is not applied on this host (no equivalent written yet)");
#endif
    }
    if (settings.no_optical_drive_fix) set_var("no_optical_drive", 1u);
    install_hook("sound_update", sound_update);

    // The window calls are always native; they act on the game's window only in a windowed mode (configured, or chosen in the options).
    g_configured_mode = settings.windowed_mode;
    apply_mode_flags();
    if (g_configured_mode) u32_at(address_of("windowed_mode")) = 1;
#ifdef NFSU2_GUEST_IDENTITY
    auto* platform = NativePlatform::current();
    platform->override_import("CreateWindowExA", 12, create_window_ex_a);
    platform->override_import("SetWindowLongA", 3, set_window_long_a);
    platform->override_import("AdjustWindowRect", 3, adjust_window_rect);
#else
    // A 64-bit host: the Win32 layer serves the window calls; the windowed modes wrap its handlers.
    auto* platform = GuestPlatform::active();
    g_next_create_window = platform->import_override("CreateWindowExA");
    g_next_set_window_long = platform->import_override("SetWindowLongA");
    g_next_adjust_window_rect = platform->import_override("AdjustWindowRect");
    if (g_next_create_window) platform->override_import("CreateWindowExA", 12, create_window_chained);
    if (g_next_set_window_long) platform->override_import("SetWindowLongA", 3, set_window_long_chained);
    if (g_next_adjust_window_rect) platform->override_import("AdjustWindowRect", 3, adjust_window_rect_chained);
#endif
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
#ifdef NFSU2_GUEST_IDENTITY
    HWND window = host_object<HWND>(u32_at(address_of("hwnd")));
    if (!window) return;
    remember_game_window(window);
#endif   // a 64-bit host: the game's window already is the platform window
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
    int32_t* rect = nfsu2::guest::ptr<int32_t>(address_of("window_rect"));   // a RECT: the game keeps its own copy of the window rectangle
    rect[0] = outer.left; rect[1] = outer.top; rect[2] = outer.right; rect[3] = outer.bottom;
}
}  // namespace nfsu2raw::mods
