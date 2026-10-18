// NFSU2 static launcher: runs the statically translated SPEED2.EXE against the user's own game directory.
//
// The program contains compiled C++ translated from the supported SPEED2.EXE build (SHA-256 below) and the image of
// that build (its sections) as data, so SPEED2.EXE is not read at run time. At start it checks every block of that
// image against its SHA-256 and maps it into the guest address range. It never executes the original machine code.
// The game's own data (cars, tracks, sound...) is read from the game directory the user points it to.
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
#include <stdlib.h>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include "native32.hpp"
#include "mods_widescreen.hpp"
#include "platform/services.hpp"

// The guest image blocks held in the program (image_data.cpp, made by tools/embed_image.py): SPEED2.EXE is not read.
extern const nfsu2raw::EmbeddedImageBlock embedded_image_blocks[];
extern const unsigned embedded_image_block_count;

namespace fs = std::filesystem;
using namespace nfsu2raw;

// Read by the NVIDIA and AMD drivers: on a laptop with two graphics processors the game runs on the fast one, not the power-saving one.
extern "C" {
__declspec(dllexport) DWORD NvOptimusEnablement = 1;
__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

namespace {
// Windows 11 may move a process it considers unimportant to the efficiency cores and ignore its timer-resolution requests (the frame limiter
// depends on them). The game opts out of both and runs a little above normal priority.
void apply_performance_hints() {
    PROCESS_POWER_THROTTLING_STATE process_state{};
    process_state.Version = PROCESS_POWER_THROTTLING_CURRENT_VERSION;
    process_state.ControlMask = PROCESS_POWER_THROTTLING_EXECUTION_SPEED | PROCESS_POWER_THROTTLING_IGNORE_TIMER_RESOLUTION;
    process_state.StateMask = 0;
    SetProcessInformation(GetCurrentProcess(), ProcessPowerThrottling, &process_state, sizeof(process_state));
    THREAD_POWER_THROTTLING_STATE thread_state{};
    thread_state.Version = THREAD_POWER_THROTTLING_CURRENT_VERSION;
    thread_state.ControlMask = THREAD_POWER_THROTTLING_EXECUTION_SPEED;
    thread_state.StateMask = 0;
    SetThreadInformation(GetCurrentThread(), ThreadPowerThrottling, &thread_state, sizeof(thread_state));
    SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS);
}
constexpr const char* version_text = "NFSU2 static launcher 0.1 (fast backend)";
// third_party/sleigh_spec/x86.sla (see PROVENANCE.txt there).
constexpr const char* sleigh_spec_sha256 = "52bb7d8371a164f6726702cdd1b5bc46a6341912798d59e1a935f405c51d8b46";
// Exit codes: 0 normal, 2 usage or configuration, 3 game directory or executable, 4 verification, 5 run stopped, 124 watchdog.
enum Exit { ok = 0, usage = 2, game_files = 3, verification = 4, stopped = 5, watchdog = 124 };

struct Config {
    fs::path game_dir, log_dir, config_file, sleigh_spec;
    unsigned log_max_kb = 1024, log_keep = 3, watchdog_seconds = 0;
    uint64_t max_instructions = 0;  // 0: unlimited
    WidescreenSettings widescreen;
    bool dialogs = true, verify_only = false, info = false, help = false, version = false, trace = true, state_cache = true, vsync = false, profile = false;
};

std::string trim(std::string s) {
    const char* space = " \t\r\n";
    s.erase(0, s.find_first_not_of(space));
    s.erase(s.find_last_not_of(space) + 1);
    return s;
}

std::string lower(std::string s) {
    for (auto& ch : s) ch = char(std::tolower(static_cast<unsigned char>(ch)));
    return s;
}

fs::path exe_directory() {
    wchar_t buffer[MAX_PATH * 4];
    const DWORD n = GetModuleFileNameW(nullptr, buffer, DWORD(std::size(buffer)));
    return n ? fs::path(buffer, buffer + n).parent_path() : fs::current_path();
}

// ---- sha-256 of a file --------------------------------------------------------------------------------------------
std::string sha256_file(const fs::path& path) {
    std::ifstream stream(path, std::ios::binary);
    if (!stream) throw std::runtime_error("cannot open " + path.string());
    BCRYPT_ALG_HANDLE algorithm = nullptr;
    BCRYPT_HASH_HANDLE hash = nullptr;
    if (BCryptOpenAlgorithmProvider(&algorithm, BCRYPT_SHA256_ALGORITHM, nullptr, 0) < 0) throw std::runtime_error("SHA-256 provider unavailable");
    struct Closer {
        BCRYPT_ALG_HANDLE a;
        BCRYPT_HASH_HANDLE& h;
        ~Closer() {
            if (h) BCryptDestroyHash(h);
            BCryptCloseAlgorithmProvider(a, 0);
        }
    } closer{algorithm, hash};
    if (BCryptCreateHash(algorithm, &hash, nullptr, 0, nullptr, 0, 0) < 0) throw std::runtime_error("cannot create SHA-256 hash");
    std::vector<char> chunk(1 << 20);
    while (stream) {
        stream.read(chunk.data(), std::streamsize(chunk.size()));
        const auto got = stream.gcount();
        if (got > 0 && BCryptHashData(hash, reinterpret_cast<PUCHAR>(chunk.data()), ULONG(got), 0) < 0) throw std::runtime_error("SHA-256 failed");
    }
    uint8_t digest[32];
    if (BCryptFinishHash(hash, digest, 32, 0) < 0) throw std::runtime_error("SHA-256 failed");
    std::ostringstream text;
    for (uint8_t b : digest) text << std::hex << std::setw(2) << std::setfill('0') << unsigned(b);
    return text.str();
}

// ---- rotating log -------------------------------------------------------------------------------------------------
class Log {
public:
    void open(const fs::path& directory, const std::string& name, unsigned max_kb, unsigned keep) {
        std::error_code ignore;
        fs::create_directories(directory, ignore);
        path_ = directory / name;
        rotate(max_kb, keep);
        file_.open(path_, std::ios::app);
    }
    void line(const std::string& level, const std::string& text) {
        std::lock_guard lock(mutex_);
        std::ostringstream stamp;
        const auto now = std::chrono::system_clock::now();
        const std::time_t t = std::chrono::system_clock::to_time_t(now);
        std::tm tm{};
        localtime_s(&tm, &t);
        stamp << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << ' ' << level << ' ' << text;
        if (file_) file_ << stamp.str() << '\n' << std::flush;
        if (echo_) std::cerr << level << ' ' << text << std::endl;
    }
    void info(const std::string& text) { line("INFO ", text); }
    void warn(const std::string& text) { line("WARN ", text); }
    void error(const std::string& text) { line("ERROR", text); }
    void echo(bool on) { echo_ = on; }
    const fs::path& path() const { return path_; }

private:
    void rotate(unsigned max_kb, unsigned keep) {
        std::error_code ec;
        if (!fs::exists(path_, ec) || fs::file_size(path_, ec) <= uintmax_t(max_kb) * 1024) return;
        if (keep == 0) {
            fs::remove(path_, ec);
            return;
        }
        for (unsigned i = keep; i > 1; --i) {
            const fs::path from = path_.string() + "." + std::to_string(i - 1), to = path_.string() + "." + std::to_string(i);
            if (fs::exists(from, ec)) {
                fs::remove(to, ec);
                fs::rename(from, to, ec);
            }
        }
        fs::remove(path_.string() + ".1", ec);
        fs::rename(path_, path_.string() + ".1", ec);
    }
    fs::path path_;
    std::ofstream file_;
    std::mutex mutex_;
    bool echo_ = false;
};

Log logger;

// ---- configuration ------------------------------------------------------------------------------------------------
bool parse_bool(const std::string& value, bool fallback) {
    const std::string v = lower(value);
    if (v == "1" || v == "true" || v == "yes" || v == "on") return true;
    if (v == "0" || v == "false" || v == "no" || v == "off") return false;
    return fallback;
}

// The widescreen fix keeps the section and key names of the mod's own configuration file ([MAIN], [MISC], [CAMERA], [GRAPHICS],
// [NOSTrail], [LANGUAGE]); [widescreen] holds the switches of this program. Names are compared without case.
void apply_widescreen_setting(Config& config, const std::string& section, const std::string& key, const std::string& value, const std::string& origin) {
    WidescreenSettings& w = config.widescreen;
    auto integer = [&](long long low, long long high) {
        try {
            size_t used = 0;
            const long long v = std::stoll(value, &used);
            if (used != value.size() || v < low || v > high) throw std::out_of_range("range");
            return v;
        } catch (const std::exception&) {
            throw std::runtime_error(origin + ": invalid number for " + key);
        }
    };
    auto real = [&] {
        try {
            size_t used = 0;
            const float v = std::stof(value, &used);
            if (used != value.size()) throw std::out_of_range("range");
            return v;
        } catch (const std::exception&) {
            throw std::runtime_error(origin + ": invalid number for " + key);
        }
    };
    auto flag = [&] { return parse_bool(value, false); };
    if (section == "widescreen") {
        if (key == "enabled") w.enabled = flag();
        else if (key == "width") w.width = int(integer(0, 16384));
        else if (key == "height") w.height = int(integer(0, 16384));
        else if (key == "extra_resolutions") w.extra_resolutions = flag();
        else if (key == "force_resolution") w.force_resolution = flag();
        else if (key == "scaled_resolutions") w.scale_all_resolutions = flag();
        else if (key == "windowed") w.windowed_mode = int(integer(0, 5));
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "main") {
        if (key == "fixhud") w.fix_hud = flag();
        else if (key == "fixfov") w.fix_fov = flag();
        else if (key == "scaling") w.fov_scaling = flag();
        else if (key == "hudaspectratioconstraint") w.hud_aspect_constraint = value;
        else if (key == "fmvwidescreenmode") w.fmv_mode = int(integer(0, 2));
        else if (key == "fescale") w.fe_scale = real();
        else if (key == "fmvscale") w.fmv_scale = real();
        else if (key == "autofitfe") w.auto_fit_fe = flag();
        else if (key == "autofitfmv") w.auto_fit_fmv = flag();
        else if (key == "fescaleanchor") w.fe_anchor = flag();
        else if (key == "fescaleanchorzone") w.fe_anchor_zone = real();
        else if (key == "festretchbackdrops") w.fe_stretch_backdrops = flag();
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "misc") {
        if (key == "skipintro") w.skip_intro = flag();
        else if (key == "windowedmode") w.windowed_mode = int(integer(0, 5));
        else if (key == "disablecutsceneborders") w.cutscene_borders = !flag();
        else if (key == "customuserfilesdirectoryingamedir") w.custom_user_directory = value;
        else if (key == "writesettingstofile") w.write_settings_to_file = flag();
        else if (key == "improvegamepadsupport") w.improve_gamepad = int(integer(0, 4));
        else if (key == "leftstickdeadzone") w.left_stick_deadzone = real();
        else if (key == "rightstickdeadzone") w.right_stick_deadzone = real();
        else if (key == "fpslimit") w.fps_limit = int(integer(-2, 1000));
        else if (key == "highfpscutscenes") w.high_fps_cutscenes = flag();
        else if (key == "singlecoreaffinity") w.single_core_affinity = flag();
        else if (key == "noopticaldrivefix") w.no_optical_drive_fix = flag();
        else if (key == "raindropletsscale") w.rain_droplets_scale = real();
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "camera") {
        if (key == "enable") w.camera = flag();
        else if (key == "camerareturntimeout") w.camera_return_timeout = real();
        else if (key == "camerareturnspeed") w.camera_return_speed = real();
        else if (key == "sticklooksensitivity") w.stick_look_sensitivity = real();
        else if (key == "mouselooksensitivity") w.mouse_look_sensitivity = real();
        else if (key == "invertlook") w.invert_look = flag();
        else if (key == "onlyallowhorizontalstickmovement") w.only_horizontal_stick = flag();
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "graphics") {
        if (key == "consolegamma") w.console_gamma = flag();
        else if (key == "hideaabug") w.hide_aa_bug = int(integer(0, 2));
        else if (key == "radarmaskscale") w.radar_mask_scale = real();
        else if (key == "radarmasklimit") w.radar_mask_limit = real();
        else if (key == "smaa" && !flag()) {}
        else if (key == "smaa") throw std::runtime_error(origin + ": SMAA is not part of this port");
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "nostrail") {
        if (key == "fixnostraillength") w.fix_nos_trail = flag();
        else if (key == "customnostraillength") w.custom_nos_trail_length = real();
        else throw std::runtime_error(origin + ": unknown key " + key);
    } else if (section == "language") {
        if (key == "language") w.language = value;
        else throw std::runtime_error(origin + ": unknown key " + key);
    }
}

bool is_widescreen_section(const std::string& section) {
    return section == "widescreen" || section == "main" || section == "misc" || section == "camera" || section == "graphics" || section == "nostrail" || section == "language";
}

void apply_setting(Config& config, const std::string& key, const std::string& value, const fs::path& base, const std::string& origin) {
    auto number_value = [&](unsigned long long limit) {
        try {
            const unsigned long long v = std::stoull(value);
            if (v > limit) throw std::out_of_range("range");
            return v;
        } catch (const std::exception&) {
            throw std::runtime_error(origin + ": invalid number for " + key);
        }
    };
    auto path_value = [&] { fs::path p(value); return fs::absolute(p.is_relative() ? base / p : p); };
    if (key == "game_dir") config.game_dir = path_value();
    else if (key == "log_dir") config.log_dir = path_value();
    else if (key == "sleigh_spec") config.sleigh_spec = path_value();
    else if (key == "log_max_kb") config.log_max_kb = unsigned(number_value(1u << 20));
    else if (key == "log_keep") config.log_keep = unsigned(number_value(20));
    else if (key == "max_instructions") config.max_instructions = number_value(~0ull);
    else if (key == "watchdog_seconds") config.watchdog_seconds = unsigned(number_value(86400));
    else if (key == "fps_limit") {
        try { config.widescreen.fps_limit = std::stoi(value); } catch (const std::exception&) { throw std::runtime_error(origin + ": invalid number for " + key); }
        if (config.widescreen.fps_limit < -2 || config.widescreen.fps_limit > 1000) throw std::runtime_error(origin + ": invalid number for " + key);
    }
    else if (key == "state_cache") config.state_cache = parse_bool(value, true);
    else if (key == "vsync") config.vsync = parse_bool(value, false);
    else if (key == "profile") config.profile = parse_bool(value, false);
    else if (key == "trace") config.trace = parse_bool(value, true);
    else throw std::runtime_error(origin + ": unknown key " + key);
}

void load_ini(const fs::path& file, Config& config, bool explicit_file) {
    std::ifstream stream(file);
    if (!stream) {
        if (explicit_file) throw std::runtime_error("cannot read the configuration file " + file.string());
        return;
    }
    config.config_file = file;
    const fs::path base = file.parent_path();
    std::string section, line;
    unsigned number = 0;
    while (std::getline(stream, line)) {
        ++number;
        line = trim(line);
        if (line.empty() || line[0] == ';' || line[0] == '#') continue;
        if (line.front() == '[' && line.back() == ']') {
            section = lower(trim(line.substr(1, line.size() - 2)));
            continue;
        }
        const auto equals = line.find('=');
        if (equals == std::string::npos) throw std::runtime_error(file.string() + ":" + std::to_string(number) + ": expected key=value");
        const std::string key = lower(trim(line.substr(0, equals)));
        std::string value = trim(line.substr(equals + 1));
        if (is_widescreen_section(section)) {
            value = trim(value.substr(0, value.find(';')));   // the mod's file puts a ; comment after the value
            apply_widescreen_setting(config, section, key, value, file.string() + ":" + std::to_string(number));
            continue;
        }
        if (!section.empty() && section != "launcher") continue;  // other sections belong to future components
        apply_setting(config, key, value, base, file.string() + ":" + std::to_string(number));
    }
}

const char* usage_text =
    "Uso: nfsu2_launcher [opciones]\n"
    "  --game-dir DIR       carpeta del juego (contiene SPEED2.EXE y los datos)\n"
    "  --config FILE        archivo de configuracion (por defecto launcher.ini junto al programa)\n"
    "  --log-dir DIR        carpeta de registros\n"
    "  --verify-only        comprueba SPEED2.EXE y la imagen en memoria, sin ejecutar el juego\n"
    "  --info               muestra identidad de la traduccion y termina\n"
    "  --max-instructions N detiene la ejecucion tras N salidas de pagina traducidas (diagnostico)\n"
    "  --watchdog SECONDS   termina el proceso tras SECONDS segundos (diagnostico)\n"
    "  --fps-limit N        limita los fotogramas por segundo (0 = sin limite; -1 = tasa del monitor; -2 = el doble; por defecto 60)\n"
    "  --no-state-cache     no omite las llamadas de estado de Direct3D que repiten el valor actual\n"
    "  --vsync              fuerza la sincronizacion vertical (evita el desgarro de imagen)\n"
    "  --profile            cada 5 s anota en logs/native_trace.log fps, tiempo dentro de Direct3D y otros datos de rendimiento\n"
    "  --no-widescreen      desactiva el parche de pantalla ancha (resolucion original 640x480)\n"
    "  --width N --height N resolucion de pantalla ancha; con estas opciones se usa siempre, aunque haya otra guardada\n"
    "  --windowed           abre el juego en una ventana con borde (1280x720 salvo que se indique otra con --width/--height): para capturas\n"
    "  --no-trace           no escribe native_trace.log\n"
    "  --no-dialog          no muestra cuadros de dialogo; solo consola y registro\n"
    "  --version, --help\n"
    "Codigos de salida: 0 normal, 2 uso o configuracion, 3 carpeta o ejecutable, 4 verificacion, 5 ejecucion detenida, 124 watchdog.\n";

Config parse_arguments(int argc, char** argv) {
    Config config;
    fs::path ini_override;
    std::map<std::string, std::string> overrides;
    std::vector<std::pair<std::string, std::string>> widescreen_overrides;   // key, value in [widescreen]
    bool windowed_requested = false, given_size = false;
    for (int i = 1; i < argc; ++i) {
        const std::string arg = argv[i];
        auto value = [&]() -> std::string {
            if (i + 1 >= argc) throw std::runtime_error("falta el valor de " + arg);
            return argv[++i];
        };
        if (arg == "--help" || arg == "-h" || arg == "/?") config.help = true;
        else if (arg == "--version") config.version = true;
        else if (arg == "--verify-only") config.verify_only = true;
        else if (arg == "--info") config.info = true;
        else if (arg == "--no-dialog") config.dialogs = false;
        else if (arg == "--no-trace") overrides["trace"] = "off";
        else if (arg == "--config") ini_override = value();
        else if (arg == "--game-dir") overrides["game_dir"] = value();
        else if (arg == "--log-dir") overrides["log_dir"] = value();
        else if (arg == "--max-instructions") overrides["max_instructions"] = value();
        else if (arg == "--watchdog") overrides["watchdog_seconds"] = value();
        else if (arg == "--fps-limit") overrides["fps_limit"] = value();
        else if (arg == "--no-state-cache") overrides["state_cache"] = "off";
        else if (arg == "--vsync") overrides["vsync"] = "on";
        else if (arg == "--profile") overrides["profile"] = "on";
        else if (arg == "--no-widescreen") widescreen_overrides.emplace_back("enabled", "off");
        else if (arg == "--width") { widescreen_overrides.emplace_back("width", value()); widescreen_overrides.emplace_back("force_resolution", "on"); given_size = true; }
        else if (arg == "--height") { widescreen_overrides.emplace_back("height", value()); widescreen_overrides.emplace_back("force_resolution", "on"); given_size = true; }
        else if (arg == "--windowed") windowed_requested = true;
        else throw std::runtime_error("opcion desconocida: " + arg);
    }
    if (windowed_requested) {
        widescreen_overrides.emplace_back("windowed", "2");
        if (!given_size) {
            widescreen_overrides.emplace_back("width", "1280");
            widescreen_overrides.emplace_back("height", "720");
            widescreen_overrides.emplace_back("force_resolution", "on");
        }
    }
    if (!ini_override.empty()) load_ini(ini_override, config, true);
    else load_ini(exe_directory() / "launcher.ini", config, false);
    // Command-line values win over the file; relative paths there are relative to the working directory.
    for (const auto& [key, value] : overrides) apply_setting(config, key, value, fs::current_path(), "command line");
    for (const auto& [key, value] : widescreen_overrides) apply_widescreen_setting(config, "widescreen", key, value, "command line");
    return config;
}

// ---- console and dialogs ------------------------------------------------------------------------------------------
void attach_console() {
    HANDLE out = GetStdHandle(STD_ERROR_HANDLE);
    if (!out || out == INVALID_HANDLE_VALUE || GetFileType(out) == FILE_TYPE_UNKNOWN) {
        if (AttachConsole(ATTACH_PARENT_PROCESS)) {
            FILE* stream;
            freopen_s(&stream, "CONOUT$", "w", stdout);
            freopen_s(&stream, "CONOUT$", "w", stderr);
        }
    }
}

void report_failure(const Config& config, const std::string& text) {
    logger.error(text);
    std::cerr << text << std::endl;
    if (config.dialogs) MessageBoxA(nullptr, text.c_str(), "NFSU2 static launcher", MB_OK | MB_ICONERROR);
}

// ---- game directory -----------------------------------------------------------------------------------------------
fs::path resolve_game_dir(const Config& config, std::vector<std::string>& tried) {
    std::vector<fs::path> candidates;
    if (!config.game_dir.empty()) candidates.push_back(config.game_dir);
    else {
        candidates.push_back(exe_directory());
        candidates.push_back(fs::current_path());
    }
    for (const auto& c : candidates) {
        tried.push_back(c.string());
        std::error_code ec;
        if (fs::is_directory(c / "GLOBAL", ec)) return fs::absolute(c);   // the game folder is recognised by its data folders
    }
    return {};
}
}  // namespace

static int launcher_main(int argc, char** argv) {
    Config config;
    try {
        config = parse_arguments(argc, argv);
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n" << usage_text;
        return Exit::usage;
    }
    if (config.help) {
        std::cout << version_text << "\n" << usage_text;
        return Exit::ok;
    }
    if (config.version) {
        std::cout << version_text << "\n";
        return Exit::ok;
    }
    if (config.info) {
        std::cout << version_text << "\nSupported SPEED2.EXE SHA-256: " << input_sha256 << "\nTranslated x86 instructions: " << instruction_count
                  << "\nIdentified functions: " << function_count << "\nOriginal x86 execution fallback: none\n";
        return Exit::ok;
    }
    if (config.log_dir.empty()) config.log_dir = exe_directory() / "logs";
    logger.open(config.log_dir, "nfsu2_launcher.log", config.log_max_kb, config.log_keep);

    logger.info(std::string(version_text) + " starting");
    if (!config.config_file.empty()) logger.info("configuration: " + config.config_file.string());

    std::vector<std::string> tried;
    const fs::path game = resolve_game_dir(config, tried);
    if (game.empty()) {
        std::string text = "No se encuentra la carpeta del juego (la que contiene GLOBAL, CARS, TRACKS...). Carpetas probadas:";
        for (const auto& t : tried) text += "\n  " + t;
        text += "\nIndique la carpeta del juego con --game-dir o game_dir= en launcher.ini.";
        report_failure(config, text);
        return Exit::game_files;
    }
    logger.info("game directory: " + game.string());
    logger.info("guest image: held in the launcher (SPEED2.EXE is not read)");
    std::vector<std::string> missing;
    for (const char* directory : {"GLOBAL", "FRONTEND", "CARS", "TRACKS", "SOUND", "LANGUAGES"}) {
        std::error_code ec;
        if (!fs::is_directory(game / directory, ec)) missing.push_back(directory);
    }
    if (!missing.empty()) {
        std::string text = "Faltan carpetas de datos del juego en " + game.string() + ":";
        for (const auto& m : missing) text += "\n  " + m;
        report_failure(config, text);
        return Exit::game_files;
    }

    // Declared dependency (dynamic_code.hpp): the SLEIGH specification used to interpret code that the game generates at
    // run time. It never touches SPEED2.EXE's own code, so a missing file only matters once the game loads such code.
    const fs::path sleigh_spec = config.sleigh_spec.empty() ? exe_directory() / "sleigh" / "x86.sla" : config.sleigh_spec;
    {
        std::error_code ec;
        if (fs::is_regular_file(sleigh_spec, ec)) {
            const std::string actual = sha256_file(sleigh_spec);
            if (actual != sleigh_spec_sha256) {
                report_failure(config, "La especificacion SLEIGH no es la esperada: " + sleigh_spec.string() + "\n  encontrado: " + actual + "\n  esperado:   " + sleigh_spec_sha256);
                return Exit::verification;
            }
            logger.info("SLEIGH specification verified for run-time generated code: " + sleigh_spec.string());
        } else {
            logger.warn("SLEIGH specification not found (" + sleigh_spec.string() + "): code the game generates at run time cannot be interpreted and will stop the program");
            if (config.verify_only) std::cout << "AVISO: falta " << sleigh_spec.string() << " (necesaria para el codigo que el juego genera en ejecucion).\n";
        }
    }

    if (config.profile) SetEnvironmentVariableA("NFSU2_PROFILE", "1");
    apply_performance_hints();
    Cpu cpu;
    try {
        NativePlatform platform(cpu, game, NativePlatform::FromEmbedded{embedded_image_blocks, embedded_image_block_count});
        platform.set_dynamic_code_specification(sleigh_spec);
        const unsigned fps_cap = widescreen_effective_fps_limit(config.widescreen);
        platform.set_frame_limit(fps_cap);
        platform.set_state_cache(config.state_cache);
        platform.set_vsync(config.vsync);
        logger.info(config.vsync ? "vertical sync: forced on" : "vertical sync: as the game asks");
        logger.info(config.state_cache ? "Direct3D state cache: on" : "Direct3D state cache: off");
        logger.info(fps_cap ? "frame-rate cap: " + std::to_string(fps_cap) + " fps" : std::string("frame-rate cap: off"));
        logger.info("guest image mapped and every block verified");
        try {
            config.widescreen.dry_run = config.verify_only;
            logger.info(install_widescreen(config.widescreen));
        } catch (const std::exception& error) {
            report_failure(config, std::string("No se pudo aplicar el parche de pantalla ancha: ") + error.what());
            return Exit::verification;
        }
        if (config.verify_only) {
            std::cout << "OK: SPEED2.EXE verificado y la imagen traducida coincide bloque a bloque.\n";
            return Exit::ok;
        }
        std::atomic<bool> finished = false;
        std::thread guard;
        if (config.watchdog_seconds) {
            guard = std::thread([&] {
                for (unsigned i = 0; i < config.watchdog_seconds * 10 && !finished; ++i) std::this_thread::sleep_for(std::chrono::milliseconds(100));
                if (!finished) {
                    logger.error("watchdog expired after " + std::to_string(config.watchdog_seconds) + " seconds; terminating");
                    ClipCursor(nullptr);
                    ExitProcess(Exit::watchdog);
                }
            });
        }
        struct Join { std::atomic<bool>& f; std::thread& t; ~Join() { f = true; if (t.joinable()) t.join(); } } join{finished, guard};
        const fs::path trace = config.trace ? config.log_dir / "native_trace.log" : fs::path("NUL");
        logger.info("starting the translated entry point");
        const uint64_t budget = config.max_instructions ? config.max_instructions : ~0ull;
        try {
            platform.run(budget, trace);
            logger.info("the translated program returned normally");
            return Exit::ok;
        } catch (const std::exception& e) {
            std::ostringstream text;
            text << "Ejecucion detenida: " << e.what() << " (PC=0x" << std::hex << cpu.pc << std::dec << ", instrucciones=" << cpu.instructions << ")";
            report_failure(config, text.str());
            return Exit::stopped;
        }
    } catch (const std::exception& e) {
        report_failure(config, std::string("No se puede preparar la imagen del juego: ") + e.what());
        return Exit::verification;
    }
}

int main(int argc, char** argv) {
    // Without this, Windows scales the game's window on high-DPI displays and the 1024x768 picture fills only part of it.
    nfsu2::platform::services().display->set_dpi_aware();
    attach_console();
    return launcher_main(argc, argv);
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) { return main(__argc, __argv); }
