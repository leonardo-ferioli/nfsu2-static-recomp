#pragma once
// The widescreen fix, native to this build: custom and selectable resolutions, HUD placement, FOV, rain droplets, video
// scaling, windowed modes, frame-rate constants, look-around camera, gamepad texts and dead zones, NOS trail, console gamma,
// settings in a file instead of the registry. It is a port of the open-source NFSU2 Widescreen Fix of ThirteenAG's
// WidescreenFixesPack (MIT license, see PLATFORM.md "Mods" and third_party/widescreen/): the places the mod patches in the
// running game were resolved once in the original code (tools/mods/widescreen.py) and compiled into the translated program as
// variables and hooks (mods.hpp); the files here give them their values and handlers. No plug-in is loaded and no game code is
// patched at run time.
#include <string>

namespace nfsu2raw {
struct WidescreenSettings {
    bool enabled = true;
    bool dry_run = false;                    // install without side effects outside the process (no registry or file writes)
    int width = 0, height = 0;               // initial resolution when none is saved (0: the desktop's)
    bool scale_all_resolutions = true;       // every listed resolution is drawn at its size in a borderless window scaled to the screen (none is a monitor mode)
    bool force_resolution = false;           // use width x height even when another resolution was saved (the command line asked for it)
    bool extra_resolutions = true;           // the options menu also lists common resolutions the monitor lacks (shown scaled, in a borderless window)
    // [MAIN]
    bool fix_hud = true;
    bool fix_fov = true;
    bool fov_scaling = false;                // "Scaling"
    std::string hud_aspect_constraint = "auto";
    int fmv_mode = 1;                        // FMVWidescreenMode: 0 untouched, 1 cropped to 16:9, 2 stretched
    float fe_scale = 1.0f, fmv_scale = 1.0f;
    bool auto_fit_fe = false, auto_fit_fmv = true;
    bool fe_anchor = true;                   // FEScaleAnchor: elements keep their screen zone (corner/edge/centre) when the interface is scaled
    bool fe_stretch_backdrops = true;        // FEStretchBackdrops: full-height 4:3 backdrops (title, loading) are widened to the whole screen
    float fe_anchor_zone = 0.30f;            // FEScaleAnchorZone: share of the screen, from each edge, that counts as an edge zone
    // [MISC]
    bool skip_intro = true;
    int windowed_mode = 0;                   // 0 off, 1 borderless, 2 border, 3 resizable border, 4 borderless fullscreen, 5 borderless stretched
    bool cutscene_borders = false;           // DisableCutsceneBorders = 0
    std::string custom_user_directory;       // CustomUserFilesDirectoryInGameDir ("" or "0": off)
    bool write_settings_to_file = false;
    int improve_gamepad = 1;                 // 0 off, 1 Xbox texts, 2 PlayStation texts, 3 PC texts, 4 none (only the front-end buttons)
    float left_stick_deadzone = 10.0f, right_stick_deadzone = 10.0f;
    int fps_limit = 60;                      // frames per second; 0 none; -1 monitor refresh rate; -2 twice that
    bool high_fps_cutscenes = true;
    bool single_core_affinity = false;
    bool no_optical_drive_fix = true;
    float rain_droplets_scale = 0.5f;
    // [CAMERA]
    bool camera = true;
    float camera_return_timeout = 3.0f, camera_return_speed = 2.0f;
    float stick_look_sensitivity = 1.0f, mouse_look_sensitivity = 1.0f;
    bool invert_look = false, only_horizontal_stick = false;
    // [GRAPHICS]
    bool console_gamma = false;              // the mod defaults to on; off here until it has been seen working
    int hide_aa_bug = 1;
    // [NOSTrail]
    bool fix_nos_trail = true;
    float custom_nos_trail_length = 1.0f;
    // [LANGUAGE]
    std::string language;
};

// Resolves the settings (desktop size, refresh rate), writes the mod's variables and installs its hooks and import overrides.
// Needs a NativePlatform (NativePlatform::current()) whose image is mapped. Call once before the game runs.
// Returns a multi-line description for the log.
std::string install_widescreen(const WidescreenSettings& settings);

// Frame rate the game's own frame-time constants were set for (0: unlimited), for the platform's limiter.
unsigned widescreen_effective_fps_limit(const WidescreenSettings& settings);
}
