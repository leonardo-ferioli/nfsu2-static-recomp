#pragma once
// Speed layer: optional fast paths of the translated program that never change what it computes. Each one is a switch read at
// run time, so a build can be compared with and without it (launcher.ini [SPEED] or NFSU2_SPEED_* in the environment):
//
//   native_calls     a call from translated code to Windows / Direct3D / COM / the run-time interpreter is made by the generated
//                    code itself (g_native_hook) instead of returning to the dispatch loop first, and the bridge takes a lean
//                    path for targets that need no special treatment;
//   predict          dynamic transfers try the likely targets the generator found (return sites of the callers of a function,
//                    the instruction after an indirect call that went to Windows) with an exact comparison and a direct tail
//                    call before the dispatch switch (g_speed_predict);
//   lookups          the mods' name lookups (patch addresses, variables, hooks) remember their last match (g_speed_lookups).
//
// The generated code reads these globals (fast_regs.hpp); speed.cpp owns them, NativePlatform sets the hook.
#include <cstdint>

namespace nfsu2raw {
struct Cpu;
// Called by translated code for a dynamic transfer outside the image (with the registers stored in Cpu::regs and c.pc the
// target). Returns true when the call was made (c.pc is then the guest return address and the registers are updated), false to
// leave it to the dispatch loop.
extern bool (*g_native_hook)(Cpu&);
extern uint8_t g_speed_predict;
extern uint8_t g_speed_lookups;
extern uint8_t g_speed_bridge;    // native_calls: the bridge's plain path (native32.cpp)

struct SpeedSettings {
    bool native_calls = true;
    bool predict = true;
    bool lookups = true;
};
// The settings in effect (environment overrides the values given by the launcher); applied to the globals above, except the hook,
// which the platform installs when native_calls is on.
SpeedSettings& speed_settings();
void apply_speed_settings();
}
