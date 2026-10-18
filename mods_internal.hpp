#pragma once
// Shared helpers of the widescreen fix modules (mods_*.cpp): guest registers and memory, patch-point lookup, calls into translated
// code, and the small event bus the main-loop and device hooks feed.
#include "mods.hpp"
#include "mods_widescreen.hpp"
#include "native32.hpp"
#include <cstring>
#include <functional>
#include <initializer_list>
#include <stdexcept>
#include <string>
#include <vector>

namespace nfsu2raw::mods {
// Offsets of the general registers in Cpu::regs.
enum Reg : unsigned { EAX = 0, ECX = 4, EDX = 8, EBX = 12, ESP = 16, EBP = 20, ESI = 24, EDI = 28 };

inline uint32_t reg(Cpu& c, Reg r) { return uint32_t(nfsu2raw::r<4>(c, r)); }
inline void set_reg(Cpu& c, Reg r, uint32_t value) { wr<4>(c, r, value); }
inline uint32_t& u32_at(uint32_t address) { return *reinterpret_cast<uint32_t*>(uintptr_t(address)); }
inline int32_t& i32_at(uint32_t address) { return *reinterpret_cast<int32_t*>(uintptr_t(address)); }
inline float& f32_at(uint32_t address) { return *reinterpret_cast<float*>(uintptr_t(address)); }
inline uint8_t& u8_at(uint32_t address) { return *reinterpret_cast<uint8_t*>(uintptr_t(address)); }
inline uint32_t bits(float value) { uint32_t b; std::memcpy(&b, &value, 4); return b; }
inline float as_float(uint32_t value) { float f; std::memcpy(&f, &value, 4); return f; }
// The n-th stack argument of a function hook (the hook runs at the function's entry: [esp] is the return address).
inline uint32_t argument(Cpu& c, unsigned n) { return u32_at(reg(c, ESP) + 4 + 4 * n); }

// ---- patch points -------------------------------------------------------------------------------------------------------------------------
uint32_t address_of(const char* name);                         // a game global or function resolved by tools/mods/widescreen.py
void set_var(const char* name, uint32_t value);
inline void set_var(const char* name, float value) { set_var(name, bits(value)); }
uint32_t get_var(const char* name);
void install_hook(const char* name, void (*handler)(Cpu&));

// ---- calls into translated code -------------------------------------------------------------------------------------------------------------
// Runs the function at the address named `fn_<name>`-style (any address_of name) with the given registers and stack words.
uint32_t call_function(const char* name, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments);
// Runs the original body of the function a function hook replaced, then returns its EAX.
uint32_t call_original(const char* hook, uint32_t ecx, uint32_t edx, std::initializer_list<uint32_t> arguments);

// ---- events -------------------------------------------------------------------------------------------------------------------------------------
struct Events {
    std::vector<std::function<void()>> process;                // once per frame, from the main loop
    std::vector<std::function<void()>> before_reset;           // before IDirect3DDevice9::Reset
    std::vector<std::function<void()>> end_scene;              // before IDirect3DDevice9::EndScene
    std::vector<std::function<void(int, int)>> resolution_changed;
};
Events& events();
bool game_paused();                                              // race paused or an options menu being left
extern float actual_delta_time;                                  // seconds the game measured for the last frame
extern int cached_width, cached_height;                          // current output size
float aspect_ratio();

// ---- modules (each installs its hooks/overrides when its option is on) ---------------------------------------------------------------------------
void install_core(const WidescreenSettings&);        // main loop, delta time, device events
void install_resolution(const WidescreenSettings&);  // resolution list, options entry, label, saved value, window placement
void install_rendering(const WidescreenSettings&);   // HUD, FOV, rain, video quad, cutscene bars, radar, mirrors
void install_frontend_scale(const WidescreenSettings&);
void install_interface_anchoring(const WidescreenSettings&);   // keeps corner elements in their corners when the interface is scaled
void install_system(const WidescreenSettings&);      // frame-time constants, skip intro, affinity, drive check, sound step, windowed modes
void install_input(const WidescreenSettings&);       // camera, gamepad, mouse/keyboard state
void install_nos_trail(const WidescreenSettings&);
void install_registry(const WidescreenSettings&);    // registry fallback / settings file, user directory, language
void install_gamma(const WidescreenSettings&);       // console gamma and the anti-aliasing border fix
unsigned resolved_fps_limit(const WidescreenSettings&);   // frames per second the game's frame-time constants are set for (0: unchanged)
std::pair<int, int> desktop_resolution();
size_t resolution_count();
void windowed_cursor_hook(bool show);
void set_virtual_mode(bool on);        // a resolution the monitor does not offer is selected: borderless window scaled to the screen
bool virtual_mode_active();
void place_game_window(int width, int height);
bool resolution_is_virtual(size_t index);
std::pair<int, int> resolution_size(size_t index);

// Called by the resolution module whenever the output size is known or changes.
void notify_resolution(int width, int height);
}
