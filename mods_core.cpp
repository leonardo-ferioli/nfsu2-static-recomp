#include "mods_internal.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <cstdlib>
#include <map>
#include <mutex>
#include <unordered_map>
#ifndef NFSU2_GUEST_IDENTITY
#include "guest_arena.hpp"
#endif

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

// ---- memory handed to the guest -------------------------------------------------------------------------------------------------------------------
void* guest_storage(size_t bytes) {
#ifdef NFSU2_GUEST_IDENTITY
    void* p = std::calloc(1, bytes ? bytes : 1);
    if (!p) throw std::runtime_error("out of memory for a mod's guest data");
    return p;
#else
    auto* space = nfsu2::guest::current_address_space();
    if (!space) throw std::runtime_error("a mod needs guest memory before the guest arena exists");
    const uint32_t address = space->alloc(uint32_t(bytes ? bytes : 1));
    if (!address) throw std::runtime_error("the guest arena has no room for a mod's data");
    return nfsu2::guest::ptr<void>(address);
#endif
}
uint32_t guest_constant(const void* data, size_t bytes) {
#ifdef NFSU2_GUEST_IDENTITY
    (void)bytes;
    return nfsu2::guest::to_guest(data);
#else
    static std::mutex mutex;
    static std::unordered_map<const void*, uint32_t> copies;
    std::lock_guard lock(mutex);
    if (auto found = copies.find(data); found != copies.end()) return found->second;
    void* copy = guest_storage(bytes);
    std::memcpy(copy, data, bytes);
    return copies[data] = nfsu2::guest::to_guest(copy);
#endif
}
uint32_t guest_text(const std::string& text) {
#ifdef NFSU2_GUEST_IDENTITY
    return nfsu2::guest::to_guest(text.c_str());
#else
    static std::mutex mutex;
    static std::map<std::string, uint32_t> copies;
    std::lock_guard lock(mutex);
    if (auto found = copies.find(text); found != copies.end()) return found->second;
    void* copy = guest_storage(text.size() + 1);
    std::memcpy(copy, text.c_str(), text.size() + 1);
    return copies[text] = nfsu2::guest::to_guest(copy);
#endif
}
uint32_t guest_scratch(const void* data, size_t bytes) {
#ifdef NFSU2_GUEST_IDENTITY
    (void)bytes;
    return nfsu2::guest::to_guest(data);
#else
    thread_local uint8_t* buffer = nullptr;
    thread_local size_t capacity = 0;
    if (bytes > capacity) { capacity = std::max<size_t>(bytes, 256); buffer = static_cast<uint8_t*>(guest_storage(capacity)); }   // a smaller old buffer stays allocated (a few bytes)
    std::memcpy(buffer, data, bytes);
    return nfsu2::guest::to_guest(buffer);
#endif
}

// ---- calls into translated code -------------------------------------------------------------------------------------------------------------------
uint32_t call_function(const char* name, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments) {
    auto* platform = GuestPlatform::active();
    if (!platform) throw std::runtime_error("no platform to run translated code");
    platform->mod_call_note(name);
    const uint32_t result = platform->call_guest(address_of(name), ecx, edx, arguments);
    platform->mod_call_note(nullptr);
    return result;
}
uint32_t call_original(const char* hook, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments) {
    const int index = mod_hook_index(hook);
    if (index < 0) throw std::runtime_error(std::string("the translated code has no mod hook ") + hook);
    auto* platform = GuestPlatform::active();
    if (!platform) throw std::runtime_error("no platform to run translated code");
    g_mod_bypass[index] = 1;
    platform->mod_call_note(hook);
    const uint32_t result = platform->call_guest(address_of((std::string("fn_") + hook).c_str()), ecx, edx, arguments);
    platform->mod_call_note(nullptr);
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
