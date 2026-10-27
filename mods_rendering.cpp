// HUD placement, field of view, rain droplets, video quad, cutscene bars, radar masks, rear-view mirror (the mod's Rendering and
// Frontend modules, minus the front-end/video scaling in mods_frontend.cpp).
#include "mods_internal.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <algorithm>
#include <cmath>
#include <optional>
#include <vector>

namespace nfsu2raw::mods {
namespace {
WidescreenSettings g_settings;
float g_widescreen_hud_offset = 120.0f;
std::optional<float> g_hud_constraint;
uint32_t g_screenshot_width = 640;        // width of the 4:3 area used for screenshots
float g_fov_values[3] = {1.0f, 1.0f, 1.0f};

struct HudEntry { float x, y, offset_x, offset_y; };
const HudEntry g_hud_table[] = {
#include "mods_hud_table.inc"
};

float calculate_widescreen_offset(float width, float height, float to_width = 640.0f, float to_height = 480.0f) {
    return (to_width / 2.0f) - ((to_height / 2.0f) * (width / height));
}
float clamp_hud_aspect_ratio(float value, float screen_aspect, float min_aspect = 4.0f / 3.0f, float max_aspect = 32.0f / 9.0f) {
    if (value < min_aspect) value = min_aspect;
    else if (value > max_aspect) value = max_aspect;
    if (value > screen_aspect) value = screen_aspect;
    return value;
}
// "auto" (nothing), a number (a pixel offset or an aspect ratio), "1280x720" (a width), "16:9" or "21/9" (an aspect ratio).
std::optional<float> parse_hud_constraint(std::string text) {
    text.erase(0, text.find_first_not_of(" \t\r\n"));
    text.erase(text.find_last_not_of(" \t\r\n") + 1);
    std::string lower = text;
    std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char ch) { return char(std::tolower(ch)); });
    if (lower.empty() || lower == "auto") return std::nullopt;
    char* end = nullptr;
    const float number = std::strtof(text.c_str(), &end);
    if (end != text.c_str() && *end == '\0') return number;
    int w = 0, h = 0;
    if (sscanf_s(text.c_str(), "%dx%d", &w, &h) == 2 && w > 0) return float(w);
    float a = 0, b = 0;
    if (sscanf_s(text.c_str(), "%f:%f", &a, &b) == 2 && a > 0 && b > 0) return a / b;
    if (sscanf_s(text.c_str(), "%f/%f", &a, &b) == 2 && a > 0 && b > 0) return a / b;
    return std::nullopt;
}

// A HUD element listed in the table moves by the widescreen offset; others stay.
void widescreen_hud(uint32_t& x_bits, uint32_t& y_bits) {
    float x = as_float(x_bits), y = as_float(y_bits);
    const int key_x = int(std::floor(x)), key_y = int(std::floor(y));
    for (const auto& entry : g_hud_table) {
        if (key_x != int(entry.x) || key_y != int(entry.y)) continue;
        constexpr float base_offset = (480.0f * (16.0f / 9.0f) - 640.0f) / 2.0f;
        if (entry.offset_x >= 0.0f) x += g_widescreen_hud_offset + (entry.offset_x - base_offset);
        else x -= g_widescreen_hud_offset - (entry.offset_x + base_offset);
        y += entry.offset_y;
        break;
    }
    x_bits = bits(x);
    y_bits = bits(y);
}

// Everything that depends on the output size.
void resolution_changed(int width, int height) {
    if (width <= 0 || height <= 0) return;
    if (g_settings.fix_hud) {
        const float hud_scale_x = (1.0f / float(width) * (float(height) / 480.0f)) * 2.0f;
        const float hud_pos_x = 640.0f / (640.0f * hud_scale_x);
        f32_at(address_of("hud_scale_x")) = hud_scale_x;
        set_var("hud_pos_x", hud_pos_x);
        f32_at(address_of("hud_pos_x_global")) = hud_pos_x;
        f32_at(address_of("hud_pos_x2_global")) = hud_pos_x * 2.0f;
        const float mirror_left = (hud_pos_x - 320.0f) + 200.0f, mirror_right = (hud_pos_x - 320.0f) + 440.0f;
        set_var("mirror_left_x1", mirror_left);
        set_var("mirror_left_x2", mirror_left);
        set_var("mirror_right_x1", mirror_right);
        set_var("mirror_right_x2", mirror_right);
        const float borders = g_settings.cutscene_borders ? float(width) : 0.0f;
        for (const char* name : {"cutscene_border_1", "cutscene_border_2", "cutscene_border_3", "cutscene_border_4"}) set_var(name, borders);
        // The map's mask: the original mod uses twice the screen size; very large screens get a smaller multiple (see RadarMaskLimit).
        const float radar_w = std::min(float(width) * g_settings.radar_mask_scale, g_settings.radar_mask_limit);
        const float radar_h = std::min(float(height) * g_settings.radar_mask_scale, g_settings.radar_mask_limit);
        set_var("radar_width_1", radar_w);
        set_var("radar_width_2", radar_w);
        set_var("radar_height_1", radar_h);
        set_var("radar_height_2", radar_h);
        const float hud_offset = ((480.0f * (float(width) / float(height))) - 640.0f) / 2.0f;
        const uint32_t dyno = address_of("dyno_offset");
        f32_at(dyno) = 79.0f + hud_offset;
        f32_at(dyno + 4) = 60.0f;
        g_screenshot_width = uint32_t(float(height) * (4.0f / 3.0f));
        g_widescreen_hud_offset = -calculate_widescreen_offset(float(width), float(height), 640.0f, 480.0f);
        if (g_hud_constraint) {
            const float value = *g_hud_constraint;
            if (value < 0.0f || value > 32.0f / 9.0f) g_widescreen_hud_offset = value;
            else g_widescreen_hud_offset = -calculate_widescreen_offset(float(height) * clamp_hud_aspect_ratio(value, float(width) / float(height)), float(height), 640.0f, 480.0f);
        }
    }
}

// ---- hooks (each runs instead of the instructions named in tools/mods/widescreen.py and does what they did, modified) ----------------
void push_float(float value) { asm volatile("flds %0" ::"m"(value)); }

// MOV EAX,[EBP+58h]; FILD dword [EAX+18h]  ->  EAX = [EBP+58h]; push a scale factor instead of the integer.
void fov_hook(Cpu& c) {
    set_reg(c, EAX, u32_at(reg(c, EBP) + 0x58));
    float hor_3d_scale = 1.0f / (aspect_ratio() / (4.0f / 3.0f));
    const float ver_3d_scale = 1.0f, mirror_scale = 0.45f, f122 = 1.22f, f043511 = 0.43511f, f1 = 1.0f;
    if (g_settings.fov_scaling) hor_3d_scale /= 1.090909123f;
    const uint32_t mode = reg(c, ECX);
    if (mode == 1 || mode == 4) {   // headlights, reflections
        g_fov_values[0] = hor_3d_scale;
        g_fov_values[1] = f043511;
        g_fov_values[2] = f122;
    } else if (mode > 10) {
        g_fov_values[0] = f1;
        g_fov_values[1] = 0.5f;
        g_fov_values[2] = 1.0f;
        push_float(f1);
        return;
    } else {
        g_fov_values[0] = 1.0f;
        g_fov_values[1] = 0.5f;
        g_fov_values[2] = 1.0f;
    }
    push_float(mode == 3 ? mirror_scale : ver_3d_scale);   // 3: rear-view mirror
}

// FLD [ESP+0Ch]; FADD [ESP+10h]  ->  the horizontal droplet size follows the aspect ratio.
void rain_x_hook(Cpu& c) {
    const float scale_x = ((0.75f / aspect_ratio()) * (4.0f / 3.0f));
    const uint32_t esp = reg(c, ESP);
    const float a = f32_at(esp + 0x0c), b = f32_at(esp + 0x10), droplets = g_settings.rain_droplets_scale;
    asm volatile("flds %0; fmuls %1; fmuls %2; fadds %3" ::"m"(a), "m"(scale_x), "m"(droplets), "m"(b));
}
// MOV [ESP+38h],EAX; FADD [ESP+8]
void rain_y_hook(Cpu& c) {
    const uint32_t esp = reg(c, ESP);
    const float a = f32_at(esp + 0x08), droplets = g_settings.rain_droplets_scale;
    asm volatile("fmuls %0; fadds %1" ::"m"(droplets), "m"(a));
    u32_at(esp + 0x38) = reg(c, EAX);
}
// MOV [ESP+60h],ECX; MOV [ESP+64h],EDX  (HUD element position)
void hud_hook(Cpu& c) {
    uint32_t x = reg(c, ECX), y = reg(c, EDX);
    widescreen_hud(x, y);
    const uint32_t esp = reg(c, ESP);
    u32_at(esp + 0x60) = x;
    u32_at(esp + 0x64) = y;
}
// MOV [EDX],ECX; MOV EAX,[EBX+20h]  (blip positions)
void blips_hook(Cpu& c) {
    const uint32_t ebx = reg(c, EBX);
    uint32_t x = u32_at(ebx + 0x1c), y = u32_at(ebx + 0x20);
    widescreen_hud(x, y);
    u32_at(ebx + 0x1c) = x;
    u32_at(ebx + 0x20) = y;
    u32_at(reg(c, EDX)) = u32_at(ebx + 0x1c);
    set_reg(c, EAX, u32_at(ebx + 0x20));
}
// FST [ESI+48h]; MOV ECX,[ESI+1Ch]
void hud2_hook(Cpu& c) {
    const uint32_t esi = reg(c, ESI);
    float st0 = 0.0f;
    asm volatile("fsts %0" : "=m"(st0));
    f32_at(esi + 0x48) = st0;
    uint32_t x = u32_at(esi + 0x1c), y = u32_at(esi + 0x20);
    set_reg(c, EDX, y);
    widescreen_hud(x, y);
    set_reg(c, ECX, x);
}
// FADD [EDX]; FSTP [ESI]; FLD [ECX+4]  (stop sign)
void stop_sign_hook(Cpu& c) {
    const uint32_t ecx = reg(c, ECX), edx = reg(c, EDX), esi = reg(c, ESI);
    const float ecx4 = f32_at(ecx + 4);
    uint32_t x = u32_at(edx), y = u32_at(edx + 4);
    widescreen_hud(x, y);
    const float x_float = as_float(x);
    float out = 0.0f;
    asm volatile("fadds %1; fstps %0" : "=m"(out) : "m"(x_float));
    f32_at(esi) = out;
    asm volatile("flds %0" ::"m"(ecx4));
}
}  // namespace

void install_rendering(const WidescreenSettings& settings) {
    g_settings = settings;
    g_hud_constraint = parse_hud_constraint(settings.hud_aspect_constraint);
    events().resolution_changed.push_back(resolution_changed);

    if (settings.fix_fov) {
        // The three redirected operands start as copies of the constants they replace.
        g_fov_values[0] = f32_at(get_var("fov_ptr1"));
        g_fov_values[1] = f32_at(get_var("fov_ptr2"));
        g_fov_values[2] = f32_at(get_var("fov_ptr3"));
        set_var("fov_ptr1", nfsu2::guest::to_guest(&g_fov_values[0]));
        set_var("fov_ptr2", nfsu2::guest::to_guest(&g_fov_values[1]));
        set_var("fov_ptr3", nfsu2::guest::to_guest(&g_fov_values[2]));
        set_var("fov_fix", 1u);
        install_hook("fov", fov_hook);
    }
    install_hook("rain_x", rain_x_hook);
    install_hook("rain_y", rain_y_hook);
    if (settings.fix_hud) {
        set_var("screenshot_width_ptr", nfsu2::guest::to_guest(&g_screenshot_width));
        install_hook("hud", hud_hook);
        install_hook("blips", blips_hook);
        install_hook("hud2", hud2_hook);
        install_hook("stop_sign", stop_sign_hook);
    }
    if (settings.fmv_mode) {
        const float wide = 0.5f / ((4.0f / 3.0f) / (16.0f / 9.0f));
        const float tall = settings.fmv_mode > 1 ? 0.5f / ((4.0f / 3.0f) / (4.0f / 3.0f)) : wide;
        set_var("fmv_bottom", tall);
        set_var("fmv_right", wide);
        set_var("fmv_top", -tall);
        set_var("fmv_left", -wide);
    }
}
}  // namespace nfsu2raw::mods
