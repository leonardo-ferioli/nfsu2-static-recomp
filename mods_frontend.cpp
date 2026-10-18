// Front-end and video scaling (the mod's FEScale / FMVScale / AutoFitFE / AutoFitFMV): the projection the front-end draws with is
// scaled around the screen centre, and videos get their own scale so a 16:9 video fits any aspect ratio.
#include "mods_internal.hpp"
#include <cstring>

namespace nfsu2raw::mods {
namespace {
float g_fe_scale = 1.0f, g_calc_fe_scale = 1.0f, g_fmv_scale = 1.0f, g_calc_fmv_scale = 1.0f;
bool g_auto_fit_fe = false, g_auto_fit_fmv = true, g_movie = false;

void update_scales() {
    g_calc_fe_scale = g_fe_scale;
    g_calc_fmv_scale = g_fmv_scale;
    const float aspect = aspect_ratio();
    if (g_auto_fit_fe) g_calc_fe_scale *= aspect / (4.0f / 3.0f);
    if (g_auto_fit_fmv) g_calc_fmv_scale *= aspect / (16.0f / 9.0f);
    if (g_calc_fe_scale > g_fe_scale) g_calc_fe_scale = g_fe_scale;
    if (g_calc_fmv_scale > g_fmv_scale) g_calc_fmv_scale = g_fmv_scale;
}

// Draw something with the front-end projection so the new transform takes effect (as the mod does).
void refresh_projection() { call_function("fn_set_render_target", 0, 0, {0}); }

void movie_start(Cpu&) { g_movie = true; refresh_projection(); }
void movie_end(Cpu&) { g_movie = false; refresh_projection(); }

// The call that sets the front-end projection: CALL fn(matrix, view). Runs instead of that call; the arguments are on the stack.
void set_transform(Cpu& c) {
    const uint32_t esp = reg(c, ESP);
    float matrix[16];
    std::memcpy(matrix, reinterpret_cast<const void*>(uintptr_t(u32_at(esp))), sizeof(matrix));
    if (g_movie) {
        matrix[0] = g_calc_fmv_scale;    // _11
        matrix[5] = g_calc_fmv_scale;    // _22
    } else {
        matrix[0] *= g_calc_fe_scale;
        matrix[5] *= g_calc_fe_scale;
    }
    set_reg(c, EAX, call_function("fn_set_transform", 0, 0, {uint32_t(uintptr_t(matrix)), u32_at(esp + 4)}));
}

// A video that starts without its object would crash the game: continue after the start code instead.
void movie_crash_fix(Cpu& c) {
    if (!reg(c, EAX)) c.pc = address_of("movie_crash_resume");
}
}  // namespace

void install_frontend_scale(const WidescreenSettings& settings) {
    g_fe_scale = g_calc_fe_scale = settings.fe_scale;
    g_fmv_scale = g_calc_fmv_scale = settings.fmv_scale;
    g_auto_fit_fe = settings.auto_fit_fe;
    g_auto_fit_fmv = settings.auto_fit_fmv;
    if (g_fe_scale == 1.0f && g_fmv_scale == 1.0f && !g_auto_fit_fe && !g_auto_fit_fmv) return;
    install_hook("movie_start", movie_start);
    install_hook("movie_end_1", movie_end);
    install_hook("movie_end_2", movie_end);
    install_hook("set_transform", set_transform);
    install_hook("movie_crash_fix", movie_crash_fix);
    events().process.push_back(update_scales);
}
}  // namespace nfsu2raw::mods
