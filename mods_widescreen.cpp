#include "mods_widescreen.hpp"
#include "mods_internal.hpp"
#include "mods_win32.hpp"
#include <cstdio>
#include <sstream>

namespace nfsu2raw {
namespace mods {
unsigned resolved_fps_limit(const WidescreenSettings& settings);
std::pair<int, int> desktop_resolution();
size_t resolution_count();
}

unsigned widescreen_effective_fps_limit(const WidescreenSettings& settings) { return mods::resolved_fps_limit(settings); }

std::string install_widescreen(const WidescreenSettings& settings) {
    if (!settings.enabled) return "widescreen fix: off";
    // Order matters only where one module reads what another wrote: events first, resolution before the things that follow it.
    mods::install_core(settings);
    mods::install_system(settings);
    mods::install_registry(settings);
    mods::install_resolution(settings);
    mods::install_rendering(settings);
    mods::install_frontend_scale(settings);
    mods::install_interface_anchoring(settings);
    mods::install_input(settings);
    mods::install_nos_trail(settings);
    mods::install_gamma(settings);
    const auto [desktop_w, desktop_h] = mods::desktop_resolution();
    char hud_scale[16];
    std::snprintf(hud_scale, sizeof hud_scale, "%.2f", settings.fe_scale);
    std::ostringstream text;
    text << "widescreen fix: on, " << mods::resolution_count() << " resolutions (desktop " << desktop_w << "x" << desktop_h << "), hud " << (settings.fix_hud ? "on" : "off") << " (scale " << hud_scale << ")"
         << ", fov " << (settings.fix_fov ? "on" : "off") << ", fmv mode " << settings.fmv_mode << ", skip intro " << (settings.skip_intro ? "on" : "off")
         << ", windowed mode " << settings.windowed_mode << ", game frame rate " << mods::resolved_fps_limit(settings) << ", camera " << (settings.camera ? "on" : "off")
         << ", gamepad " << settings.improve_gamepad << ", console gamma " << (settings.console_gamma ? "on" : "off")
         << ", settings in " << (settings.write_settings_to_file ? "file" : "registry (current user)");
    return text.str();
}
}  // namespace nfsu2raw
