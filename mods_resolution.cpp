// Resolution list, options-menu entry, label, saved value and window placement (the mod's Resolution module).
#include "mods_internal.hpp"
#include "guest_memory.hpp"
#include "platform/services.hpp"
namespace platform = nfsu2::platform;
#include "mods_win32.hpp"
#include <algorithm>
#include <string>
#include <tuple>
#include <vector>

namespace nfsu2raw::mods {
void windowed_cursor_hook(bool show);   // mods_system.cpp
std::pair<int, int> desktop_resolution();

namespace {
struct Resolution { int width, height, refresh; bool is_virtual = false; };   // virtual: the monitor has no such mode
std::vector<Resolution> g_list;
std::vector<std::string> g_text;
int* g_supported = nullptr;          // one flag per entry of g_list; guest memory: the game reads the table
WidescreenSettings g_settings;
std::string g_label;

// Every distinct resolution of the display devices, highest refresh rate kept, sorted by width then height; a built-in list
// stands in when the system reports none.
std::vector<Resolution> resolutions_list() {
    std::vector<std::tuple<int, int, int>> list;
    const auto displays = platform::services().display->list();
    if (const platform::DisplayInfo* primary = platform::primary_display(displays))
        for (const auto& mode : primary->modes) list.emplace_back(int(mode.width), int(mode.height), int(mode.refresh_millihertz / 1000u));
    if (list.empty()) {
        static const int builtin[][2] = {{160, 120}, {240, 160}, {320, 240}, {400, 240}, {480, 320}, {640, 360}, {640, 480}, {768, 480}, {800, 600}, {854, 480}, {960, 540}, {960, 640}, {1024, 576}, {1024, 768},
                                         {1152, 864}, {1280, 720}, {1280, 800}, {1280, 1024}, {1280, 1080}, {1360, 768}, {1366, 768}, {1400, 1050}, {1440, 900}, {1600, 900}, {1600, 1200}, {1680, 1050},
                                         {1920, 1080}, {1920, 1200}, {2048, 1080}, {2048, 1152}, {2048, 1536}, {2560, 1080}, {2560, 1440}, {2560, 1600}, {2560, 2048}, {3200, 1800}, {3200, 2048},
                                         {3200, 2400}, {3440, 1440}, {3840, 1080}, {3840, 1600}, {3840, 2160}, {3840, 2400}, {4096, 2160}, {4096, 3072}, {5120, 2160}, {5120, 2880}, {5120, 3200},
                                         {5120, 4096}, {6400, 4096}, {6400, 4800}, {7680, 4320}, {7680, 4800}};
        for (const auto& r : builtin) list.emplace_back(r[0], r[1], 60);
    }
    // Highest refresh rate first among equal sizes, then one entry per size, then by size.
    std::sort(list.begin(), list.end(), [](const auto& a, const auto& b) {
        if (std::get<0>(a) != std::get<0>(b)) return std::get<0>(a) < std::get<0>(b);
        if (std::get<1>(a) != std::get<1>(b)) return std::get<1>(a) < std::get<1>(b);
        return std::get<2>(a) > std::get<2>(b);
    });
    list.erase(std::unique(list.begin(), list.end(), [](const auto& a, const auto& b) { return std::get<0>(a) == std::get<0>(b) && std::get<1>(a) == std::get<1>(b); }), list.end());
    std::vector<Resolution> out;
    for (const auto& [w, h, r] : list) out.push_back({w, h, r});
    return out;
}

// Common sizes the monitor does not list (and that fit on it) are added, marked virtual: choosing one draws the game at that size in a
// borderless window scaled to the screen, keeping the aspect ratio. The widescreen fix adapts to it like to any other size.
void add_common_resolutions(std::vector<Resolution>& list) {
    static const int common[][2] = {{640, 480}, {800, 600}, {960, 540}, {1024, 576}, {1024, 768}, {1280, 720}, {1280, 800}, {1280, 960}, {1366, 768}, {1400, 1050}, {1440, 900}, {1600, 900}, {1600, 1200},
                                    {1680, 1050}, {1920, 1080}, {1920, 1200}, {2560, 1440}, {2560, 1600}, {3840, 2160}};
    const auto [desktop_w, desktop_h] = desktop_resolution();
    for (const auto& size : common) {
        if (size[0] > desktop_w || size[1] > desktop_h) continue;
        bool known = false;
        for (const auto& r : list) known = known || (r.width == size[0] && r.height == size[1]);
        if (!known) list.push_back({size[0], size[1], 60, true});
    }
    std::sort(list.begin(), list.end(), [](const Resolution& a, const Resolution& b) { return a.width != b.width ? a.width < b.width : a.height < b.height; });
}

int& selected() { return i32_at(address_of("racing_resolution")); }

// Windowed scaling is in effect exactly while a resolution the monitor lacks is selected.
void apply_display_mode() {
    const int index = selected();
    set_virtual_mode(index >= 0 && index < int(g_list.size()) && g_list[size_t(index)].is_virtual);
}

void get_resolution(int* width, int* height) {
    if (!width || !height) return;
    const int index = selected();
    if (index < 0 || index >= int(g_list.size())) {
        const auto [w, h] = desktop_resolution();
        *width = w;
        *height = h;
    } else {
        *width = g_list[index].width;
        *height = g_list[index].height;
    }
}

// The game asks for the output size: answer from the list and tell everything that depends on it.
void get_racing_resolution_values(int* width, int* height) {
    apply_display_mode();
    get_resolution(width, height);
    notify_resolution(*width, *height);
}

void get_racing_resolution(Cpu& c) {
    get_racing_resolution_values(nfsu2::guest::ptr<int>(argument(c, 0)), nfsu2::guest::ptr<int>(argument(c, 1)));
    set_reg(c, EAX, 0);
}

// Options menu: left/right changes the resolution; entries the display cannot do are skipped.
void inc_screen_res(Cpu& c) {
    const uint32_t self = reg(c, ECX);
    const uint32_t action = argument(c, 1);
    const int max_index = int(g_list.size()) - 1;
    const int old_index = selected();
    int new_index = old_index;
    if (action == 0xB5971BF1) {
        if (old_index < max_index) {
            new_index = old_index + 1;
            while (new_index < max_index && !g_supported[new_index]) ++new_index;
        }
    } else if (action == 0x9120409E && old_index > 0) {
        new_index = old_index - 1;
        while (new_index > 0 && !g_supported[new_index]) --new_index;
    }
    selected() = new_index;
    const uint32_t update = u32_at(u32_at(self) + 12);   // vtable[3]
    if (new_index >= 0 && new_index < int(g_list.size()) && g_supported[new_index]) {
        if (new_index != old_index) u8_at(address_of("options_changed")) = 1;
    } else {
        selected() = old_index;
    }
    apply_display_mode();
    GuestPlatform::active()->call_guest(update, self, 0, {});
    set_reg(c, EAX, 0);
}

// The label of the resolution entry of the options menu.
void label_hook(Cpu& c) {
    const uint32_t self = reg(c, ECX);
    const auto* object = nfsu2::guest::ptr<const uint32_t>(self);
    call_function("fn_set_language_hash", 0, 0, {object[11], 0xA9A76BBAu});
    const int index = selected();
    g_label = (index < 0 || index >= int(g_text.size())) ? "undefined" : g_text[index];
    call_function("fn_set_string", object[12], reg(c, EDX), {guest_text(g_label)});
    set_reg(c, EAX, 0);
}

// What the game saves for the resolution: the size, not the index, so it survives a change of the display's modes.
void saved_value_hook(Cpu& c) {
    static uint32_t* packed = guest_array<uint32_t>(1);
    const int index = selected();
    if (index >= 0 && index < int(g_list.size())) {
        *packed = (uint32_t(g_list[index].width) << 16) | (uint32_t(g_list[index].height) & 0xFFFFu) | 0x80000000u;
        u32_at(reg(c, ESP)) = nfsu2::guest::to_guest(packed);
    }
}

// What the game loaded: a saved size becomes its index; anything else becomes the configured or desktop size.
void loaded_value_hook(Cpu&) {
    const uint32_t value = u32_at(address_of("racing_resolution"));
    int index = -1;
    const bool forced = g_settings.force_resolution && g_settings.width > 0 && g_settings.height > 0;
    if (!forced && (value & 0x80000000u)) {
        const int width = int((value & 0x7FFF0000u) >> 16), height = int(value & 0xFFFFu);
        for (size_t i = 0; i < g_list.size(); ++i)
            if (g_list[i].width == width && g_list[i].height == height) { index = int(i); break; }
    }
    if (index == -1) {
        int want_w, want_h;
        if (g_settings.width > 0 && g_settings.height > 0) { want_w = g_settings.width; want_h = g_settings.height; }
        else std::tie(want_w, want_h) = desktop_resolution();
        for (size_t i = 0; i < g_list.size(); ++i)
            if (g_list[i].width == want_w && g_list[i].height == want_h) { index = int(i); break; }
        if (index == -1) index = 0;
    }
    selected() = index;
    apply_display_mode();
}

// After the game placed its window: windowed modes size and centre it for the chosen resolution.
void window_placement(Cpu& c) {
    const uint32_t result = call_original("window_placement", 0, 0, {});
    set_reg(c, EAX, result);
    int width, height;
    get_racing_resolution_values(&width, &height);
    place_game_window(width, height);   // only in a windowed mode (configured, or a resolution the monitor lacks)
}

void window_procedure(Cpu& c) {
    const uint32_t message = argument(c, 1), wparam = argument(c, 2), lparam = argument(c, 3);
    const bool windowed = u32_at(address_of("windowed_mode")) != 0;
    if (message == WM_SYSKEYDOWN && windowed && wparam == VK_MENU) { set_reg(c, EAX, 0); return; }
#ifdef NFSU2_GUEST_IDENTITY
    if (message == WM_SETCURSOR && windowed && LOWORD(lparam) != HTCLIENT) {
        HWND window = host_object<HWND>(argument(c, 0));
        set_reg(c, EAX, uint32_t(DefWindowProcA(window, message, wparam, LPARAM(int32_t(lparam)))));
        return;
    }
#endif
    if (message == WM_SIZE) notify_resolution(LOWORD(lparam), HIWORD(lparam));
    set_reg(c, EAX, call_original("wndproc", 0, 0, {argument(c, 0), argument(c, 1), argument(c, 2), argument(c, 3)}));
}

void show_cursor_hook(Cpu&) { windowed_cursor_hook(false); }
}  // namespace

void install_resolution(const WidescreenSettings& settings) {
    g_settings = settings;
    g_list = resolutions_list();
    if (settings.extra_resolutions) add_common_resolutions(g_list);
    // A size asked for explicitly (command line, configuration) is always offered, even if neither the monitor nor the presets have it.
    if (settings.width > 0 && settings.height > 0) {
        bool known = false;
        for (const auto& r : g_list) known = known || (r.width == settings.width && r.height == settings.height);
        if (!known) {
            g_list.push_back({settings.width, settings.height, 60, true});
            std::sort(g_list.begin(), g_list.end(), [](const Resolution& a, const Resolution& b) { return a.width != b.width ? a.width < b.width : a.height < b.height; });
        }
    }
    // Every size is rendered at its own size and scaled to the screen (the monitor's own modes included), so all behave the same.
    if (settings.scale_all_resolutions)
        for (auto& r : g_list) r.is_virtual = true;
    g_text.clear();
    g_supported = guest_array<int>(g_list.size() ? g_list.size() : 1);
    for (size_t i = 0; i < g_list.size(); ++i) g_supported[i] = 1;
    for (const auto& r : g_list) g_text.push_back(std::to_string(r.width) + "x" + std::to_string(r.height) + (r.is_virtual ? " (scaled)" : ""));
    set_var("supported_res_1", nfsu2::guest::to_guest(g_supported));
    set_var("supported_res_2", nfsu2::guest::to_guest(g_supported));
    set_var("res_store_nop", 1u);
    install_hook("get_racing_resolution", get_racing_resolution);
    install_hook("inc_screen_res", inc_screen_res);
    install_hook("locg_racing_resolution", label_hook);
    install_hook("res_set", saved_value_hook);
    install_hook("res_get", loaded_value_hook);
    install_hook("window_placement", window_placement);
    install_hook("wndproc", window_procedure);
    install_hook("show_cursor", show_cursor_hook);   // acts only in a windowed mode
    events().resolution_changed.push_back([](int, int) {
        if (const uint32_t instance = u32_at(address_of("feng_instance")))
            call_function("fn_feng_make_dirty", instance, 0, {});
    });
}

size_t resolution_count() { return g_list.size(); }
bool resolution_is_virtual(size_t index) { return index < g_list.size() && g_list[index].is_virtual; }
std::pair<int, int> resolution_size(size_t index) { return index < g_list.size() ? std::pair<int, int>{g_list[index].width, g_list[index].height} : std::pair<int, int>{0, 0}; }
}  // namespace nfsu2raw::mods
