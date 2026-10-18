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
// Elements that fill the screen stay filling it. Pieces that belong together (the letters of a text, the parts of a gauge) are
// drawn one after the other and touch each other: they are grouped, and the group moves as one, by the zone of its first piece.
//
// Everywhere else (menus, dialogs, loading screens) nothing is scaled; a backdrop that is as tall as the screen and as wide as the
// 4:3 area is stretched to the full width, so the picture has no black bars at the sides.
#include "mods_internal.hpp"
#include <algorithm>
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

// What happens to the element being drawn (decided at its first coordinate, used for the others).
struct Decision {
    float dx = 0.0f, dy = 0.0f;                 // translation
    bool unscale_x = false, unscale_y = false;  // keeps filling the screen: undoes the scale about the centre
    float stretch_x = 1.0f;                     // backdrop: widened about the centre
    float scale = 1.0f;
};
struct Extent { float min_x, max_x, min_y, max_y; };

// The group of touching pieces that is moving together.
struct Chain {
    bool valid = false;
    uint32_t frame = 0;
    Extent extent{};
    Decision decision;
} g_chain;

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
        g_chain.valid = false;
        return d;
    }
    // Touching the group that is being built? Then move as part of it.
    const float margin_x = 0.06f * screen.width, margin_y = 0.10f * screen.height;
    if (g_chain.valid && g_chain.frame == g_frame) {
        Extent& e = g_chain.extent;
        const bool touches = box.min_x <= e.max_x + margin_x && box.max_x >= e.min_x - margin_x && box.min_y <= e.max_y + margin_y && box.max_y >= e.min_y - margin_y;
        const float union_w = std::max(e.max_x, box.max_x) - std::min(e.min_x, box.min_x), union_h = std::max(e.max_y, box.max_y) - std::min(e.min_y, box.min_y);
        if (touches && union_w <= 0.40f * screen.width && union_h <= 0.45f * screen.height) {
            e = {std::min(e.min_x, box.min_x), std::max(e.max_x, box.max_x), std::min(e.min_y, box.min_y), std::max(e.max_y, box.max_y)};
            return g_chain.decision;
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
    g_chain = {true, g_frame, box, d};
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

Decision g_quad, g_line;

// One coordinate of a quad corner: the quad is the structure at ESI (x,y of four corners, 16 bytes apart). The first coordinate read
// (x of corner 0) decides for the whole quad.
template <int Corner, bool Y>
void quad_load(Cpu& c) {
    const uint32_t quad = reg(c, ESI);
    if (Corner == 0 && !Y) {
        Extent box{std::numeric_limits<float>::max(), -std::numeric_limits<float>::max(), std::numeric_limits<float>::max(), -std::numeric_limits<float>::max()};
        for (int corner = 0; corner < 4; ++corner) {
            const float x = f32_at(quad + 0x10 * corner), y = f32_at(quad + 0x10 * corner + 4);
            box = {std::min(box.min_x, x), std::max(box.max_x, x), std::min(box.min_y, y), std::max(box.max_y, y)};
        }
        g_quad = decide(box, true);
    }
    push_float(apply(g_quad, f32_at(quad + 0x10 * Corner + (Y ? 4 : 0)), Y));
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
