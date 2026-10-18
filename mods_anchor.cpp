// Interface layout for screens wider than 4:3: anchored HUD scaling in races, and full-width backdrops elsewhere.
//
// The game turns interface coordinates (a virtual space as wide as the screen's aspect ratio times 480, 480 tall) into screen
// positions in exactly two routines: the one that draws an interface quad (four corners) and the one that draws a line/arc segment
// (two end points). Both are hooked at the loads of those coordinates; the handler pushes the (moved) coordinate instead.
//
// In a race, when the HUD is scaled (FEScale), the projection shrinks everything towards the screen centre; an element is moved so
// that its scaled self keeps its screen zone (corner, edge or centre):
//   translation = (pivot - centre) * (1/s - 1)     with pivot = 0, centre or the full extent for the low, middle and high zone,
// because the projection then scales by s about the centre: final = centre + s * (x' - centre) = pivot + s * (x - pivot).
// Elements that fill the screen stay filling it.
//
// Pieces that belong together must move together or the picture tears (the letters of a text, the ring and the markers of the map):
//  - every interface object is drawn as a list of quads (one batch); the whole batch gets one decision, from the box around all its
//    quads (routine 0x51a5d0 is hooked at its start and its end);
//  - objects (and segments) that touch an object seen earlier in the same frame join its group and take its decision, so a widget made
//    of several objects keeps its shape; the decision comes from the zone of the first object of the group.
//
// Everywhere else (menus, dialogs, loading screens) nothing is scaled; a backdrop that is as tall as the screen and as wide as the
// 4:3 area is stretched to the full width, so the picture has no black bars at the sides.
#include "mods_internal.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <limits>

namespace nfsu2raw::mods {
float current_fe_scale();      // mods_frontend.cpp: the scale the interface is drawn with now (1 outside races)
bool fe_in_race();
bool fe_movie_active();        // a video is playing (its own scale applies)

namespace {
WidescreenSettings g_settings;
uint32_t g_frame = 0;

void push_float(float value) { asm volatile("flds %0" ::"m"(value)); }

struct Screen { float width, height; };
// The virtual size of the interface space, from the factors the game itself multiplies positions with.
bool screen_size(Screen& screen) {
    const float sx = f32_at(address_of("hud_scale_x")), sy = f32_at(address_of("fe_scale_y"));
    if (!(sx > 0.0f) || !(sy > 0.0f)) return false;
    screen = {2.0f / sx, 2.0f / sy};
    return true;
}

// What happens to the element being drawn.
struct Decision {
    float dx = 0.0f, dy = 0.0f;                 // translation
    bool unscale_x = false, unscale_y = false;  // keeps filling the screen: undoes the scale about the centre
    float stretch_x = 1.0f;                     // backdrop: widened about the centre
    float scale = 1.0f;
};
struct Extent { float min_x, max_x, min_y, max_y; };

struct Group {
    Extent extent;
    Decision decision;
};
constexpr size_t kMaxGroups = 32;
std::array<Group, kMaxGroups> g_groups;
size_t g_group_count = 0;
uint32_t g_group_frame = 0;

Decision decide(const Extent& box, bool allow_fill) {
    Decision d;
    Screen screen;
    if (!screen_size(screen) || fe_movie_active()) return d;
    const float width = box.max_x - box.min_x, height = box.max_y - box.min_y;

    if (!fe_in_race()) {
        // A backdrop as tall as the screen and about as wide as the 4:3 area becomes as wide as the screen.
        if (g_settings.fe_stretch_backdrops && allow_fill && screen.width > 640.0f * 1.02f && height >= 0.90f * screen.height && width >= 0.90f * 640.0f && width <= 1.12f * 640.0f)
            d.stretch_x = screen.width / 640.0f;
        return d;
    }

    const float s = current_fe_scale();
    if (std::fabs(s - 1.0f) < 0.001f || !(s > 0.05f)) return d;
    d.scale = s;
    if (g_settings.fe_anchor == false) return d;
    if (allow_fill && (width >= 0.85f * screen.width || height >= 0.85f * screen.height)) {   // fills the screen: stays full
        d.unscale_x = width >= 0.85f * screen.width;
        d.unscale_y = height >= 0.85f * screen.height;
        return d;
    }
    // Touching a group seen in this frame? Then move as part of it.
    if (g_group_frame != g_frame) { g_group_frame = g_frame; g_group_count = 0; }
    const float margin_x = 0.08f * screen.width, margin_y = 0.12f * screen.height;
    for (size_t i = 0; i < g_group_count; ++i) {
        Extent& e = g_groups[i].extent;
        const bool touches = box.min_x <= e.max_x + margin_x && box.max_x >= e.min_x - margin_x && box.min_y <= e.max_y + margin_y && box.max_y >= e.min_y - margin_y;
        const float union_w = std::max(e.max_x, box.max_x) - std::min(e.min_x, box.min_x), union_h = std::max(e.max_y, box.max_y) - std::min(e.min_y, box.min_y);
        if (touches && union_w <= 0.60f * screen.width && union_h <= 0.60f * screen.height) {
            e = {std::min(e.min_x, box.min_x), std::max(e.max_x, box.max_x), std::min(e.min_y, box.min_y), std::max(e.max_y, box.max_y)};
            return g_groups[i].decision;
        }
    }
    const float k = 1.0f / s - 1.0f, zone = std::clamp(g_settings.fe_anchor_zone, 0.05f, 0.5f);
    const float mid_x = 0.5f * (box.min_x + box.max_x), mid_y = 0.5f * (box.min_y + box.max_y);
    float pivot_x = 0.5f * screen.width, pivot_y = 0.5f * screen.height;
    if (mid_x < zone * screen.width) pivot_x = 0.0f;
    else if (mid_x > (1.0f - zone) * screen.width) pivot_x = screen.width;
    if (mid_y < zone * screen.height) pivot_y = 0.0f;
    else if (mid_y > (1.0f - zone) * screen.height) pivot_y = screen.height;
    d.dx = (pivot_x - 0.5f * screen.width) * k;
    d.dy = (pivot_y - 0.5f * screen.height) * k;
    if (g_group_count < kMaxGroups) g_groups[g_group_count++] = {box, d};
    return d;
}

float apply(const Decision& d, float value, bool y) {
    Screen screen;
    if (!screen_size(screen)) return value;
    const float center = (y ? screen.height : screen.width) * 0.5f;
    if (!y && d.stretch_x != 1.0f) return center + (value - center) * d.stretch_x;
    if (d.scale != 1.0f && (y ? d.unscale_y : d.unscale_x)) return center + (value - center) / d.scale;
    return value + (y ? d.dy : d.dx);
}

Decision g_quad, g_line, g_batch;
bool g_batch_active = false;

// An interface object is about to draw its list of quads: one decision for all of them, from the box around the whole list.
void batch_begin(Cpu& c) {
    const uint32_t batch = reg(c, ECX), head = batch + 0x18;
    Extent box{std::numeric_limits<float>::max(), -std::numeric_limits<float>::max(), std::numeric_limits<float>::max(), -std::numeric_limits<float>::max()};
    int quads = 0;
    for (uint32_t node = u32_at(head); node && node != head && quads < 512; node = u32_at(node), ++quads) {
        for (int corner = 0; corner < 4; ++corner) {
            const float x = f32_at(node + 0x10 + 0x10 * corner), y = f32_at(node + 0x10 + 0x10 * corner + 4);
            box = {std::min(box.min_x, x), std::max(box.max_x, x), std::min(box.min_y, y), std::max(box.max_y, y)};
        }
    }
    g_batch_active = false;
    if (quads == 0) return;
    g_batch = decide(box, true);
    g_batch_active = true;
}
void batch_end(Cpu&) { g_batch_active = false; }

// One coordinate of a quad corner: the quad is the structure at ESI (x,y of four corners, 16 bytes apart). Inside an object's list the
// object's decision applies; otherwise the first coordinate read (x of corner 0) decides for the quad.
template <int Corner, bool Y>
void quad_load(Cpu& c) {
    const uint32_t quad = reg(c, ESI);
    const float value = f32_at(quad + 0x10 * Corner + (Y ? 4 : 0));
    if (g_batch_active) { push_float(apply(g_batch, value, Y)); return; }
    if (Corner == 0 && !Y) {
        Extent box{std::numeric_limits<float>::max(), -std::numeric_limits<float>::max(), std::numeric_limits<float>::max(), -std::numeric_limits<float>::max()};
        for (int corner = 0; corner < 4; ++corner) {
            const float x = f32_at(quad + 0x10 * corner), y = f32_at(quad + 0x10 * corner + 4);
            box = {std::min(box.min_x, x), std::max(box.max_x, x), std::min(box.min_y, y), std::max(box.max_y, y)};
        }
        g_quad = decide(box, true);
    }
    push_float(apply(g_quad, value, Y));
}

// One coordinate of an end point of a line/arc segment: the points are at EBX and EBP; the first coordinate read (x of the first point)
// decides for the whole segment.
template <bool B, bool Y>
void line_load(Cpu& c) {
    const uint32_t a = reg(c, EBX), b = reg(c, EBP);
    if (!B && !Y) {
        const float ax = f32_at(a), ay = f32_at(a + 4), bx = f32_at(b), by = f32_at(b + 4);
        g_line = decide({std::min(ax, bx), std::max(ax, bx), std::min(ay, by), std::max(ay, by)}, false);
    }
    push_float(apply(g_line, f32_at((B ? b : a) + (Y ? 4 : 0)), Y));
}
}  // namespace

void install_interface_anchoring(const WidescreenSettings& settings) {
    g_settings = settings;
    const bool scaled = settings.fe_scale != 1.0f || settings.auto_fit_fe;
    if (!(settings.fe_anchor && scaled) && !settings.fe_stretch_backdrops) return;
    events().process.push_back([] { ++g_frame; });
    install_hook("fe_batch_begin", batch_begin);
    install_hook("fe_batch_end", batch_end);
    install_hook("fe_quad_x0", quad_load<0, false>);
    install_hook("fe_quad_y0", quad_load<0, true>);
    install_hook("fe_quad_x1", quad_load<1, false>);
    install_hook("fe_quad_y1", quad_load<1, true>);
    install_hook("fe_quad_x2", quad_load<2, false>);
    install_hook("fe_quad_y2", quad_load<2, true>);
    install_hook("fe_quad_x3", quad_load<3, false>);
    install_hook("fe_quad_y3", quad_load<3, true>);
    install_hook("fe_line_ax", line_load<false, false>);
    install_hook("fe_line_ay", line_load<false, true>);
    install_hook("fe_line_bx", line_load<true, false>);
    install_hook("fe_line_by", line_load<true, true>);
}
}  // namespace nfsu2raw::mods
