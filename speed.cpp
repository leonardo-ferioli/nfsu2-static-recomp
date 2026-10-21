#include "speed.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <cstring>

namespace nfsu2raw {
bool (*g_native_hook)(Cpu&) = nullptr;
uint8_t g_speed_predict = 1;
uint8_t g_speed_lookups = 1;
uint8_t g_speed_bridge = 1;

namespace {
// NFSU2_SPEED_<NAME>=0|1 overrides a setting; NFSU2_SPEED=0 turns the whole layer off.
bool env_flag(const char* name, bool fallback) {
    char value[16];
    const DWORD n = GetEnvironmentVariableA(name, value, sizeof(value));
    if (!n || n >= sizeof(value)) return fallback;
    return !(value[0] == '0' || !_stricmp(value, "off") || !_stricmp(value, "false") || !_stricmp(value, "no"));
}
}

SpeedSettings& speed_settings() {
    static SpeedSettings settings;
    return settings;
}

void apply_speed_settings() {
    SpeedSettings& s = speed_settings();
    const bool all = env_flag("NFSU2_SPEED", true);
    s.native_calls = all && env_flag("NFSU2_SPEED_NATIVE_CALLS", s.native_calls);
    s.predict = all && env_flag("NFSU2_SPEED_PREDICT", s.predict);
    s.lookups = all && env_flag("NFSU2_SPEED_LOOKUPS", s.lookups);
    g_speed_predict = s.predict ? 1 : 0;
    g_speed_lookups = s.lookups ? 1 : 0;
    g_speed_bridge = s.native_calls ? 1 : 0;
}
}
