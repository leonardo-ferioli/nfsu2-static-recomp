// The registry and trap groups of the Win32 facade.
//
//   registry  RegOpenKeyA / RegOpenKeyExA / RegCreateKeyA / RegCloseKey / RegQueryValueExA / RegSetValueExA over legacy_win32's Registry, which keeps its tree in an
//             in-memory Config store (what NUE persists as "registry.*" keys). The game's own keys are seeded with the values it expects, as the mods' registry
//             policy does on Windows (mods_registry.cpp: add_defaults / ensure_defaults), so a host without a Windows registry starts the game with the same settings.
//   traps     the imports the game never calls in any traced session (network, serial ports, TAPI, GDI drawing): each answers with a failure the caller can
//             handle, and the first calls are written to the trace log. Nothing here reaches a host; on a host that never had these services a silent success
//             would make a game believe it is connected.
#include "win32_facade_internal.hpp"
#include <sstream>

namespace nfsu2raw {
namespace {

constexpr const char* kMainKey = "Software\\EA Games\\Need for Speed Underground 2";
constexpr const char* kFallbackKey = "Software\\Electronic Arts\\EA Games\\Need for Speed Underground 2";

// The values the game expects to find under its key (the table of mods_registry.cpp add_defaults; numeric text is a DWORD, anything else a string).
std::vector<std::pair<std::string, std::string>> registry_defaults(const std::string& game_folder, const std::string& language) {
    std::vector<std::pair<std::string, std::string>> v = {
        {"@", "INSERTYOURCDKEYHERE"}, {"CD Drive", "D:\\"}, {"CacheSize", "1879040000"}, {"SwapSize", "0"}, {"StreamingInstall", "0"},
        {"g_CarEnvironmentMapEnable", "3"}, {"g_CarEnvironmentMapUpdateData", "1"}, {"g_CarShadowEnable", "2"}, {"g_CarHeadlightEnable", "1"}, {"g_CarLightingEnable", "0"},
        {"g_CarDamageEnable", "0"}, {"g_CrowdEnable", "1"}, {"g_RoadReflectionEnable", "3"}, {"g_FogEnable", "1"}, {"g_MotionBlurEnable", "1"}, {"g_LightStreaksEnable", "1"},
        {"g_LightGlowEnable", "1"}, {"g_AnimatedTextureEnable", "1"}, {"g_ParticleSystemEnable", "1"}, {"g_DepthOfFieldEnable", "1"}, {"g_WorldLodLevel", "3"},
        {"g_CarLodLevel", "1"}, {"g_OverBrightEnable", "1"}, {"g_BleachByPassEnable", "1"}, {"g_TintingEnable", "1"}, {"g_FSAALevel", "7"}, {"g_HorizonFogEnable", "1"},
        {"g_RainEnable", "1"}, {"g_TextureFiltering", "2"}, {"g_RacingResolution", "4"}, {"g_PerformanceLevel", "5"}, {"g_VSyncOn", "0"}};
    v.push_back({"Language", language});
    for (const char* name : {"Install Dir", "InstallDir", "Path"}) v.push_back({name, game_folder});
    return v;
}

bool all_digits(const std::string& s) { return !s.empty() && s.find_first_not_of("0123456789") == std::string::npos && s.size() <= 10; }

struct Trap { const char* name; unsigned argc; uint32_t result; bool winsock; };
// result: the value returned; winsock: the failure also sets the Winsock error that WSAGetLastError reports (WSAENETDOWN); otherwise the Win32 last error is
// ERROR_CALL_NOT_IMPLEMENTED. Argument counts are the stdcall signatures (the callee removes them).
constexpr uint32_t kSocketError = 0xFFFFFFFFu, kClrInvalid = 0xFFFFFFFFu, kLineErrOperationUnavail = 0x80000048u, kNrcSystem = 0x40;
constexpr Trap kTraps[] = {
    // GDI drawing
    {"BitBlt", 9, 0, false}, {"CreateBitmap", 5, 0, false}, {"CreateCompatibleDC", 1, 0, false}, {"CreateFontA", 14, 0, false}, {"DeleteDC", 1, 0, false},
    {"ExtTextOutA", 8, 0, false}, {"GetPixel", 3, kClrInvalid, false}, {"SelectObject", 2, 0, false}, {"SetBkColor", 2, kClrInvalid, false}, {"SetBkMode", 2, 0, false},
    {"SetTextColor", 2, kClrInvalid, false},
    // serial ports
    {"GetCommConfig", 3, 0, false}, {"GetCommState", 2, 0, false}, {"PurgeComm", 2, 0, false}, {"SetCommConfig", 3, 0, false}, {"SetCommMask", 2, 0, false},
    {"SetCommState", 2, 0, false}, {"SetCommTimeouts", 2, 0, false}, {"SetupComm", 3, 0, false}, {"WaitCommEvent", 3, 0, false},
    // NetBIOS and TAPI
    {"Netbios", 1, kNrcSystem, false},
    {"lineAnswer", 3, kLineErrOperationUnavail, false}, {"lineClose", 1, kLineErrOperationUnavail, false}, {"lineGetDevCaps", 5, kLineErrOperationUnavail, false},
    {"lineGetID", 6, kLineErrOperationUnavail, false}, {"lineInitialize", 5, kLineErrOperationUnavail, false}, {"lineMakeCall", 5, kLineErrOperationUnavail, false},
    {"lineNegotiateAPIVersion", 6, kLineErrOperationUnavail, false}, {"lineOpen", 10, kLineErrOperationUnavail, false}, {"lineShutdown", 1, kLineErrOperationUnavail, false},
    // Winsock: WSAStartup returns its error directly (WSASYSNOTREADY); the rest fail with SOCKET_ERROR / INVALID_SOCKET / NULL
    {"WSAStartup", 2, 10091, true}, {"WSACleanup", 0, kSocketError, true}, {"WSAIoctl", 9, kSocketError, true}, {"accept", 3, kSocketError, true}, {"bind", 3, kSocketError, true},
    {"closesocket", 1, kSocketError, true}, {"connect", 3, kSocketError, true}, {"gethostbyname", 1, 0, true}, {"gethostname", 2, kSocketError, true},
    {"getpeername", 3, kSocketError, true}, {"getsockname", 3, kSocketError, true}, {"ioctlsocket", 3, kSocketError, true}, {"listen", 2, kSocketError, true},
    {"recv", 4, kSocketError, true}, {"recvfrom", 6, kSocketError, true}, {"select", 5, kSocketError, true}, {"send", 4, kSocketError, true}, {"sendto", 6, kSocketError, true},
    {"setsockopt", 5, kSocketError, true}, {"shutdown", 2, kSocketError, true}, {"socket", 3, kSocketError, true},
};
constexpr uint32_t kWsaENetDown = 10050;
}  // namespace

// ------------------------------------------------------------------------------------------------------------------------------ registry
void Win32Facade::Impl::install_registry() {
    config = plat::stdlib::make_config(storage.get());
    if (!options.registry_text.empty()) config->load_text(options.registry_text);          // what an earlier run left
    registry = lw::make_config_registry(*config);
    const std::string game = platform.game_directory().string();
    const std::string folder = game + (game.empty() || game.back() == '\\' ? "" : "\\");
    for (const char* path : {kMainKey, kFallbackKey}) {
        lw::Handle key = 0;
        uint32_t disposition = 0;
        if (registry->create_key(lw::hkey::local_machine, path, key, &disposition) != 0) continue;
        for (const auto& [name, text] : registry_defaults(folder, options.registry_language)) {
            uint32_t type = 0, size = 0;
            const std::string value_name = name == "@" ? std::string() : name;
            if (registry->query_value(key, value_name, &type, nullptr, &size) == 0) continue;     // a value the player (or an earlier run) set is kept
            if (all_digits(text)) {
                const uint32_t number = uint32_t(std::stoull(text));
                registry->set_value(key, value_name, lw::reg::dword, reinterpret_cast<const uint8_t*>(&number), 4);
            } else {
                const std::string value = text.empty() ? " " : text;
                registry->set_value(key, value_name, lw::reg::sz, reinterpret_cast<const uint8_t*>(value.c_str()), uint32_t(value.size() + 1));
            }
        }
        registry->close_key(key);
    }
    auto open_result = [](Cpu& c, unsigned slot, uint32_t error, lw::Handle key) {
        if (error == 0 && arg(c, slot)) *ptr<uint32_t>(arg(c, slot)) = key;
        return error;
    };
    on("RegOpenKeyA", 3, [this, open_result](Cpu& c) { lw::Handle key = 0; const uint32_t e = registry->open_key(arg(c, 0), cstr(arg(c, 1)), key); return open_result(c, 2, e, key); });
    on("RegOpenKeyExA", 5, [this, open_result](Cpu& c) { lw::Handle key = 0; const uint32_t e = registry->open_key(arg(c, 0), cstr(arg(c, 1)), key); return open_result(c, 4, e, key); });
    on("RegCreateKeyA", 3, [this, open_result](Cpu& c) { lw::Handle key = 0; const uint32_t e = registry->create_key(arg(c, 0), cstr(arg(c, 1)), key, nullptr); return open_result(c, 2, e, key); });
    on("RegCloseKey", 1, [this](Cpu& c) { return registry->close_key(arg(c, 0)); });
    on("RegQueryValueExA", 6, [this](Cpu& c) {
        uint32_t type = 0;
        uint32_t* size = arg(c, 5) ? ptr<uint32_t>(arg(c, 5)) : nullptr;
        uint8_t* data = arg(c, 4) ? ptr<uint8_t>(arg(c, 4)) : nullptr;
        const uint32_t e = registry->query_value(arg(c, 0), cstr(arg(c, 1)), &type, data, size);
        if (arg(c, 3)) *ptr<uint32_t>(arg(c, 3)) = type;
        return e;
    });
    on("RegSetValueExA", 6, [this](Cpu& c) {
        const uint32_t size = arg(c, 5);
        return registry->set_value(arg(c, 0), cstr(arg(c, 1)), arg(c, 3), arg(c, 4) ? ptr<const uint8_t>(arg(c, 4)) : nullptr, size);
    });
}

// ------------------------------------------------------------------------------------------------------------------------------ traps
void Win32Facade::Impl::install_traps() {
    auto counts = std::make_shared<std::unordered_map<std::string, int>>();
    auto counts_mutex = std::make_shared<std::mutex>();
    for (const Trap& t : kTraps) {
        on(t.name, t.argc, [this, t, counts, counts_mutex](Cpu& c) -> uint32_t {
            int n;
            { std::lock_guard lock(*counts_mutex); n = ++(*counts)[t.name]; }
            if (n <= 3) platform.log_line(std::string("UNSUPPORTED import ") + t.name + " (call " + std::to_string(n) + "): answered with a failure, nothing is done");
            if (t.winsock) wsa_error = kWsaENetDown; else set_error(c, 120 /* ERROR_CALL_NOT_IMPLEMENTED */);
            return t.result;
        });
    }
    on("WSAGetLastError", 0, [this](Cpu&) -> uint32_t { return wsa_error.load(); });
    on("DeleteObject", 1, [](Cpu&) -> uint32_t { return 1; });       // nothing was ever created: deleting it succeeds
}

std::string Win32Facade::registry_text() const { return impl_->config ? impl_->config->save_text() : std::string(); }

}  // namespace nfsu2raw
