// Where the game keeps its settings and saves (the mod's Registry module): the registry keys the game reads and writes are
// kept in the current user's registry (the original needs the machine-wide one and administrator rights), or in a settings
// file; the user-files folder can live in the game folder; the language can be chosen in the configuration.
// The game's registry calls are native here (NativePlatform::override_import).
#include "mods_internal.hpp"
#include "guest_memory.hpp"
#include "mods_win32.hpp"
#include <filesystem>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

namespace nfsu2raw::mods {
namespace {
namespace fs = std::filesystem;
constexpr const char* kMainKey = "Software\\EA Games\\Need for Speed Underground 2";
constexpr const char* kFallbackKey = "Software\\Electronic Arts\\EA Games\\Need for Speed Underground 2";

fs::path g_custom_user_dir;
bool g_use_custom_user_dir = false;
std::string g_game_folder;   // with a trailing backslash
std::map<std::string, std::string> g_defaults;
std::set<std::string> g_path_values;

#ifdef NFSU2_GUEST_IDENTITY   // the 32-bit host: the game's Reg* and SHGetFolderPathA calls reach the real Windows through this policy
fs::path to_path(const std::string& s) { return fs::path(s); }

// ---- the settings file (RegistryWrapper) ------------------------------------------------------------------------------------------------------------
fs::path g_ini;
thread_local std::string g_section;
std::string ini_read(const std::string& section, const std::string& key, const std::string& fallback) {
    char buffer[4096];
    const DWORD n = GetPrivateProfileStringA(section.c_str(), key.c_str(), fallback.c_str(), buffer, sizeof(buffer), g_ini.string().c_str());
    return std::string(buffer, n);
}
void ini_write(const std::string& section, const std::string& key, const std::string& value) { WritePrivateProfileStringA(section.c_str(), key.c_str(), value.c_str(), g_ini.string().c_str()); }

std::string last_component(const std::string& path) {
    const auto pos = path.find_last_of('\\');
    return pos == std::string::npos ? path : path.substr(pos + 1);
}
bool intercepted(const char* sub_key) { return sub_key && std::strstr(sub_key, "Need for Speed") != nullptr; }

HKEY key_of(uint32_t value) { return host_object<HKEY>(int32_t(value)); }   // predefined keys are sign-extended handles

uint32_t file_close_key(Cpu& c) {
    const uint32_t key = argument(c, 0);
    return key == 0 ? ERROR_SUCCESS : uint32_t(RegCloseKey(key_of(key)));
}
// Opens/creates of the game's own keys never reach the registry: the file section is remembered and the handle is null.
bool intercept(Cpu& c, unsigned result_argument) {
    const char* sub_key = nfsu2::guest::ptr<const char>(argument(c, 1));
    if (!intercepted(sub_key)) return false;
    *nfsu2::guest::ptr<HKEY>(argument(c, result_argument)) = nullptr;
    g_section = last_component(sub_key);
    return true;
}
uint32_t file_open_key_a(Cpu& c) {
    if (intercept(c, 2)) return ERROR_SUCCESS;
    return uint32_t(RegOpenKeyA(key_of(argument(c, 0)), nfsu2::guest::ptr<const char>(argument(c, 1)), nfsu2::guest::ptr<HKEY>(argument(c, 2))));
}
uint32_t file_open_key_ex_a(Cpu& c) {
    if (intercept(c, 4)) return ERROR_SUCCESS;
    return uint32_t(RegOpenKeyExA(key_of(argument(c, 0)), nfsu2::guest::ptr<const char>(argument(c, 1)), argument(c, 2), argument(c, 3), nfsu2::guest::ptr<HKEY>(argument(c, 4))));
}
uint32_t file_create_key_a(Cpu& c) {
    if (argument(c, 0) == 0) {
        *nfsu2::guest::ptr<HKEY>(argument(c, 2)) = nullptr;
        return ERROR_SUCCESS;
    }
    if (intercept(c, 2)) return ERROR_SUCCESS;
    return uint32_t(RegCreateKeyA(key_of(argument(c, 0)), nfsu2::guest::ptr<const char>(argument(c, 1)), nfsu2::guest::ptr<HKEY>(argument(c, 2))));
}

std::vector<uint8_t> hex_bytes(const std::string& text) {
    std::vector<uint8_t> bytes;
    std::istringstream input(text);
    std::string token;
    while (std::getline(input, token, ','))
        if (!token.empty()) {
            try { bytes.push_back(uint8_t(std::stoul(token, nullptr, 16) & 0xFF)); } catch (...) {}
        }
    return bytes;
}

// RegQueryValueExA on the settings file: the value comes from the file (or the default); a default found missing is written back.
uint32_t file_query_value(Cpu& c) {
    HKEY key = key_of(argument(c, 0));
    const char* value_name = nfsu2::guest::ptr<const char>(argument(c, 1));
    DWORD* type = nfsu2::guest::ptr<DWORD>(argument(c, 3));
    BYTE* data = nfsu2::guest::ptr<BYTE>(argument(c, 4));
    DWORD* size = nfsu2::guest::ptr<DWORD>(argument(c, 5));
    if (key != nullptr) return uint32_t(RegQueryValueExA(key, value_name, nullptr, type, data, size));
    const std::string name = value_name ? value_name : "@";
    DWORD kind = type ? *type : REG_SZ;
    const auto found = g_defaults.find(name);
    const std::string default_value = found != g_defaults.end() ? found->second : std::string();
    const std::string value = ini_read(g_section, name, default_value);
    const bool write_default = (value.empty() || value == default_value) && g_path_values.find(name) == g_path_values.end();
    auto deliver = [&](const void* bytes, DWORD required, DWORD result_type) -> uint32_t {
        if (type) *type = result_type;
        if (!data) { if (size) *size = required; return ERROR_SUCCESS; }
        if (*size < required) { *size = required; return ERROR_MORE_DATA; }
        if (required) std::memcpy(data, bytes, required);
        *size = required;
        return ERROR_SUCCESS;
    };
    switch (kind) {
        case REG_BINARY: {
            const auto bytes = hex_bytes(value);
            const uint32_t status = deliver(bytes.data(), DWORD(bytes.size()), REG_BINARY);
            if (status == ERROR_SUCCESS && data && write_default && !default_value.empty()) ini_write(g_section, name, default_value);
            return status;
        }
        case REG_DWORD: {
            DWORD number = 0;
            try { number = !value.empty() ? DWORD(std::stoul(value)) : !default_value.empty() ? DWORD(std::stoul(default_value)) : 0; } catch (...) { number = 0; }
            if (number == UINT_MAX) {
                number = 0;
                ini_write(g_section, name, default_value.empty() ? "INSERTDWORDHERE" : default_value);
            }
            const uint32_t status = deliver(&number, sizeof(DWORD), REG_DWORD);
            if (status == ERROR_SUCCESS && data && write_default) ini_write(g_section, name, default_value.empty() ? "INSERTDWORDHERE" : default_value);
            return status;
        }
        case REG_MULTI_SZ: {
            std::string joined;
            std::istringstream input(value);
            std::string part;
            while (std::getline(input, part, ',')) { joined += part; joined.push_back('\0'); }
            joined.push_back('\0');
            const uint32_t status = deliver(joined.data(), DWORD(joined.size()), REG_MULTI_SZ);
            if (status == ERROR_SUCCESS && data && write_default && !default_value.empty()) ini_write(g_section, name, default_value);
            return status;
        }
        case REG_NONE: {
            if (data) {
                *reinterpret_cast<bool*>(data) = GetPrivateProfileIntA("MAIN", name.c_str(), 0, g_ini.string().c_str()) != 0;
                if (size) *size = sizeof(bool);
                if (type) *type = REG_NONE;
                return ERROR_SUCCESS;
            }
            if (found != g_defaults.end()) {
                if (size) *size = DWORD(found->second.size());
                if (type) *type = REG_SZ;
                return ERROR_SUCCESS;
            }
            return ERROR_FILE_NOT_FOUND;
        }
        default: {
            std::string text = value;
            text.push_back('\0');
            const uint32_t status = deliver(text.data(), DWORD(text.size()), kind == REG_EXPAND_SZ ? REG_EXPAND_SZ : REG_SZ);
            if (status == ERROR_SUCCESS && data && write_default) ini_write(g_section, name, default_value.empty() ? "INSERTSTRINGDATAHERE" : default_value);
            return status;
        }
    }
}

uint32_t file_set_value(Cpu& c) {
    HKEY key = key_of(argument(c, 0));
    const char* value_name = nfsu2::guest::ptr<const char>(argument(c, 1));
    DWORD type = argument(c, 3);
    const BYTE* data = nfsu2::guest::ptr<const BYTE>(argument(c, 4));
    const DWORD size = argument(c, 5);
    if (key != nullptr) return uint32_t(RegSetValueExA(key, value_name, 0, type, data, size));
    if (!value_name) return ERROR_INVALID_PARAMETER;
    const std::string name = value_name;
    switch (type) {
        case REG_BINARY: {
            std::string text;
            char piece[8];
            for (DWORD i = 0; data && i < size; ++i) {
                std::snprintf(piece, sizeof(piece), "%02x", data[i]);
                text += piece;
                if (i + 1 != size) text += ',';
            }
            ini_write(g_section, name, text);
            break;
        }
        case REG_DWORD:
            ini_write(g_section, name, std::to_string(size >= sizeof(DWORD) && data ? *reinterpret_cast<const DWORD*>(data) : 0));
            break;
        case REG_MULTI_SZ: {
            std::string text;
            if (data && size > 2) {
                const char* p = reinterpret_cast<const char*>(data);
                const char* end = p + size;
                while (p < end && *p) {
                    if (!text.empty()) text += ',';
                    text.append(p);
                    p += std::strlen(p) + 1;
                }
            }
            ini_write(g_section, name, text);
            break;
        }
        case REG_NONE:
            ini_write("MAIN", name, "1");
            break;
        default: {
            std::string text;
            if (data && size) {
                text.assign(reinterpret_cast<const char*>(data), size);
                if (!text.empty() && text.back() == '\0') text.pop_back();
            }
            ini_write(g_section, name, text);
        }
    }
    return ERROR_SUCCESS;
}

// ---- the current user's registry (RegistryFallback) -------------------------------------------------------------------------------------------------
HKEY user_for(HKEY key) { return key == HKEY_LOCAL_MACHINE ? HKEY_CURRENT_USER : key; }
uint32_t user_create_key(Cpu& c) {
    return uint32_t(RegCreateKeyA(user_for(key_of(argument(c, 0))), nfsu2::guest::ptr<const char>(argument(c, 1)), nfsu2::guest::ptr<HKEY>(argument(c, 2))));
}
uint32_t user_open_key(Cpu& c) {
    return uint32_t(RegOpenKeyA(user_for(key_of(argument(c, 0))), nfsu2::guest::ptr<const char>(argument(c, 1)), nfsu2::guest::ptr<HKEY>(argument(c, 2))));
}
uint32_t user_open_key_ex(Cpu& c) {
    return uint32_t(RegOpenKeyExA(user_for(key_of(argument(c, 0))), nfsu2::guest::ptr<const char>(argument(c, 1)), argument(c, 2), argument(c, 3), nfsu2::guest::ptr<HKEY>(argument(c, 4))));
}

// Creates, in the current user's registry, every setting the game expects and that is not there yet.
void ensure_defaults() {
    for (const char* path : {kMainKey, kFallbackKey}) {
        HKEY key = nullptr;
        DWORD disposition = 0;
        if (RegCreateKeyExA(HKEY_CURRENT_USER, path, 0, nullptr, REG_OPTION_NON_VOLATILE, KEY_READ | KEY_WRITE, nullptr, &key, &disposition) != ERROR_SUCCESS) continue;
        for (const auto& [name, text] : g_defaults) {
            char* end = nullptr;
            const DWORD number = std::strtoul(text.c_str(), &end, 10);
            const char* value_name = name == "@" ? nullptr : name.c_str();
            DWORD type = 0, size = 0;
            const LSTATUS query = RegQueryValueExA(key, value_name, nullptr, &type, nullptr, &size);
            if (end && *end == '\0' && !text.empty()) {
                DWORD current = 0, current_size = sizeof(current);
                if (RegQueryValueExA(key, value_name, nullptr, &type, reinterpret_cast<BYTE*>(&current), &current_size) != ERROR_SUCCESS || type != REG_DWORD || current_size != sizeof(DWORD))
                    RegSetValueExA(key, value_name, 0, REG_DWORD, reinterpret_cast<const BYTE*>(&number), sizeof(number));
            } else if (query != ERROR_SUCCESS || type != REG_SZ) {
                std::string value = text.empty() ? " " : text;
                RegSetValueExA(key, value_name, 0, REG_SZ, reinterpret_cast<const BYTE*>(value.c_str()), DWORD(value.size() + 1));
            }
        }
        RegCloseKey(key);
    }
}

void add_defaults(const std::string& language) {
    const std::pair<const char*, const char*> list[] = {
        {"@", "INSERTYOURCDKEYHERE"}, {"CD Drive", "D:\\"}, {"CacheSize", "1879040000"}, {"SwapSize", "0"}, {"StreamingInstall", "0"},
        {"g_CarEnvironmentMapEnable", "3"}, {"g_CarEnvironmentMapUpdateData", "1"}, {"g_CarShadowEnable", "2"}, {"g_CarHeadlightEnable", "1"}, {"g_CarLightingEnable", "0"},
        {"g_CarDamageEnable", "0"}, {"g_CrowdEnable", "1"}, {"g_RoadReflectionEnable", "3"}, {"g_FogEnable", "1"}, {"g_MotionBlurEnable", "1"}, {"g_LightStreaksEnable", "1"},
        {"g_LightGlowEnable", "1"}, {"g_AnimatedTextureEnable", "1"}, {"g_ParticleSystemEnable", "1"}, {"g_DepthOfFieldEnable", "1"}, {"g_WorldLodLevel", "3"},
        {"g_CarLodLevel", "1"}, {"g_OverBrightEnable", "1"}, {"g_BleachByPassEnable", "1"}, {"g_TintingEnable", "1"}, {"g_FSAALevel", "7"}, {"g_HorizonFogEnable", "1"},
        {"g_RainEnable", "1"}, {"g_TextureFiltering", "2"}, {"g_RacingResolution", "4"}, {"g_PerformanceLevel", "5"}, {"g_VSyncOn", "0"}};
    for (const auto& [name, value] : list) g_defaults.emplace(name, value);
    g_defaults["Language"] = language;
}

uint32_t folder_path(Cpu& c) {
    const int csidl = int(argument(c, 1)) & ~CSIDL_FLAG_CREATE;
    char* path = nfsu2::guest::ptr<char>(argument(c, 4));
    if (g_use_custom_user_dir && csidl == CSIDL_LOCAL_APPDATA) {
        CreateDirectoryW(g_custom_user_dir.c_str(), nullptr);
        const std::string text = g_custom_user_dir.string();
        std::memcpy(path, text.c_str(), text.size() + 1);
        return S_OK;
    }
    static HMODULE shell = LoadLibraryA("shell32.dll");
    using Fn = HRESULT(WINAPI*)(HWND, int, HANDLE, DWORD, LPSTR);
    static Fn real = reinterpret_cast<Fn>(GetProcAddress(shell, "SHGetFolderPathA"));
    return real ? uint32_t(real(host_object<HWND>(argument(c, 0)), int(argument(c, 1)), host_object<HANDLE>(argument(c, 2)), argument(c, 3), path)) : uint32_t(E_FAIL);
}
#endif
}  // namespace

#ifndef NFSU2_GUEST_IDENTITY
// A 64-bit host has no real registry: the Reg* imports are answered by the Win32 layer's registry, seeded with the game's keys and its language
// (Win32LayerOptions::registry_language), whose text the host keeps in a file between runs (Win32Facade::registry_text): the game's settings are always in a
// file there, which is what WriteSettingsToFile asks for on the 32-bit host. What remains is the custom user folder: SHGetFolderPathA(CSIDL_LOCAL_APPDATA)
// answers the folder inside the game directory; every other folder goes to the Win32 layer's own handler.
void install_registry(const WidescreenSettings& settings) {
    std::string folder = settings.custom_user_directory;
    if (folder.empty() || folder == "0") return;
    auto* platform = GuestPlatform::active();
    g_custom_user_dir = platform->game_directory() / folder;
    g_use_custom_user_dir = true;
    static GuestPlatform::NativeHook next;
    next = platform->import_override("SHGetFolderPathA");
    platform->override_import("SHGetFolderPathA", 5, [](Cpu& c) -> uint32_t {
        const int csidl = int(argument(c, 1)) & ~CSIDL_FLAG_CREATE;
        if (g_use_custom_user_dir && csidl == CSIDL_LOCAL_APPDATA) {
            std::error_code ec;
            fs::create_directories(g_custom_user_dir, ec);
            const std::string text = g_custom_user_dir.string();
            std::memcpy(nfsu2::guest::ptr<char>(argument(c, 4)), text.c_str(), text.size() + 1);
            return S_OK;
        }
        return next ? next(c) : uint32_t(E_FAIL);
    });
}
#else
void install_registry(const WidescreenSettings& settings) {
    auto* platform = NativePlatform::current();
    {
        const std::string game = platform->game_directory().string();
        g_game_folder = game + (game.empty() || game.back() == '\\' ? "" : "\\");
    }
    std::string folder = settings.custom_user_directory;
    if (folder.empty() || folder == "0") folder.clear();
    if (!folder.empty()) {
        g_custom_user_dir = platform->game_directory() / folder;
        g_use_custom_user_dir = true;
        platform->override_import("SHGetFolderPathA", 5, folder_path);
    }

    std::string language = "English US";
    {
        HKEY key = nullptr;
        if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, kMainKey, 0, KEY_READ, &key) == ERROR_SUCCESS || RegOpenKeyExA(HKEY_CURRENT_USER, kMainKey, 0, KEY_READ, &key) == ERROR_SUCCESS) {
            char text[256] = {};
            DWORD size = sizeof(text);
            if (RegQueryValueExA(key, "Language", nullptr, nullptr, reinterpret_cast<BYTE*>(text), &size) == ERROR_SUCCESS && size > 1) language = text;
            RegCloseKey(key);
        }
    }
    add_defaults(language);

    if (settings.write_settings_to_file) {
        fs::path folder_path_;
        if (g_use_custom_user_dir) {
            folder_path_ = g_custom_user_dir;
        } else {
            char documents[MAX_PATH] = {};
            SHGetFolderPathA(nullptr, CSIDL_PERSONAL | CSIDL_FLAG_CREATE, nullptr, 0, documents);
            folder_path_ = documents;
        }
        g_ini = folder_path_ / "NFS Underground 2" / "Settings.ini";
        if (!settings.dry_run) fs::create_directories(g_ini.parent_path());
        for (const char* name : {"Install Dir", "InstallDir", "Path"}) {
            g_path_values.insert(name);
            g_defaults[name] = g_game_folder;
        }
        platform->override_import("RegCloseKey", 1, file_close_key);
        platform->override_import("RegCreateKeyA", 3, file_create_key_a);
        platform->override_import("RegOpenKeyA", 3, file_open_key_a);
        platform->override_import("RegOpenKeyExA", 5, file_open_key_ex_a);
        platform->override_import("RegQueryValueExA", 6, file_query_value);
        platform->override_import("RegSetValueExA", 6, file_set_value);
    } else {
        for (const char* name : {"Install Dir", "InstallDir", "Path"}) g_defaults[name] = g_game_folder;
        if (!settings.dry_run) ensure_defaults();
        platform->override_import("RegCreateKeyA", 3, user_create_key);
        platform->override_import("RegOpenKeyA", 3, user_open_key);
        platform->override_import("RegOpenKeyExA", 5, user_open_key_ex);
    }

    if (!settings.language.empty() && !settings.dry_run) {
        if (settings.write_settings_to_file) {
            ini_write("Need for Speed Underground 2", "Language", settings.language);
        } else {
            for (const char* path : {kMainKey, kFallbackKey}) {
                HKEY key = nullptr;
                if (RegCreateKeyA(HKEY_CURRENT_USER, path, &key) == ERROR_SUCCESS) {
                    RegSetValueExA(key, "Language", 0, REG_SZ, reinterpret_cast<const BYTE*>(settings.language.c_str()), DWORD(settings.language.size() + 1));
                    RegCloseKey(key);
                }
            }
        }
    }
}
#endif
}  // namespace nfsu2raw::mods
