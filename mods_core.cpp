#include "mods_internal.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <mutex>

namespace nfsu2raw::mods {
float actual_delta_time = 0.0f;
int cached_width = 640, cached_height = 480;

// ---- patch points ---------------------------------------------------------------------------------------------------------------------------------
uint32_t address_of(const char* name) {
    const uint32_t address = mod_data_address(name);
    if (!address) throw std::runtime_error(std::string("the translated code has no patch address ") + name);
    return address;
}
void set_var(const char* name, uint32_t value) {
    const int index = mod_var_index(name);
    if (index < 0) throw std::runtime_error(std::string("the translated code has no mod variable ") + name);
    g_mod_vars[index] = value;
}
uint32_t get_var(const char* name) {
    const int index = mod_var_index(name);
    if (index < 0) throw std::runtime_error(std::string("the translated code has no mod variable ") + name);
    return g_mod_vars[index];
}
void install_hook(const char* name, void (*handler)(Cpu&)) {
    const int index = mod_hook_index(name);
    if (index < 0) throw std::runtime_error(std::string("the translated code has no mod hook ") + name);
    mod_hook_table[index] = handler;
}

// ---- calls into translated code -------------------------------------------------------------------------------------------------------------------
uint32_t call_function(const char* name, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments) {
    auto* platform = NativePlatform::current();
    if (!platform) throw std::runtime_error("no platform to run translated code");
    return platform->call_guest(address_of(name), ecx, edx, arguments);
}
uint32_t call_original(const char* hook, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments) {
    const int index = mod_hook_index(hook);
    if (index < 0) throw std::runtime_error(std::string("the translated code has no mod hook ") + hook);
    auto* platform = NativePlatform::current();
    if (!platform) throw std::runtime_error("no platform to run translated code");
    g_mod_bypass[index] = 1;
    const uint32_t result = platform->call_guest(address_of((std::string("fn_") + hook).c_str()), ecx, edx, arguments);
    g_mod_bypass[index] = 0;
    return result;
}

// ---- events ---------------------------------------------------------------------------------------------------------------------------------------
Events& events() {
    static Events instance;
    return instance;
}
float aspect_ratio() { return cached_height > 0 ? float(cached_width) / float(cached_height) : 4.0f / 3.0f; }
void notify_resolution(int width, int height) {
    // The game asks for the size often; what depends on it is recomputed only when it changes.
    static int last_width = 0, last_height = 0;
    cached_width = width;
    cached_height = height;
    if (width == last_width && height == last_height) return;
    last_width = width;
    last_height = height;
    for (auto& handler : events().resolution_changed) handler(width, height);
}
bool game_paused() {
    if (const uint32_t coordinator = u32_at(address_of("race_coordinator")); coordinator && u32_at(coordinator) == 6) return true;
    return u8_at(address_of("exit_fe_options")) != 0;
}

namespace {
bool g_game_initialized = false;
bool g_old_menu_state = false;

void main_loop(Cpu&) {
    // Once per frame, on the game's main thread, just before the game reads its frame time.
    if (!g_game_initialized) {
        g_game_initialized = true;
        g_old_menu_state = game_paused();
    }
    for (auto& handler : events().process) handler();
    g_old_menu_state = game_paused();
}
void delta_time(Cpu& c) { actual_delta_time = f32_at(reg(c, ESP)); }
void before_reset(Cpu&) { for (auto& handler : events().before_reset) handler(); }
void before_end_scene(Cpu&) { for (auto& handler : events().end_scene) handler(); }
}  // namespace

void install_core(const WidescreenSettings&) {
    install_hook("main_loop", main_loop);
    install_hook("delta_time", delta_time);
    install_hook("before_reset", before_reset);
    install_hook("before_end_scene", before_end_scene);
}
}  // namespace nfsu2raw::mods
