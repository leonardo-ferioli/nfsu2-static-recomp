// Anchored interface scaling. FEScale shrinks the whole interface towards the centre of the screen, so elements that belong to a
// corner drift inwards and the interface looks like a box in the middle. Here each interface element is moved so that its scaled
// self stays where its zone says it belongs: elements in an outer zone keep their distance to that edge (scaled), elements in the
// middle stay centred, and elements that fill the screen keep filling it.
//
// The game turns interface coordinates (a virtual space as wide as the screen's aspect ratio times 480, 480 tall) into screen
// positions in exactly two routines: the one that draws an interface quad (four corners) and the one that draws a line/arc segment
// (two end points). Both are hooked at the loads of those coordinates; the handler pushes the (moved) coordinate instead.
//
// The move is a translation per element (so its shape and the cluster it belongs to are not distorted), by
//   (pivot - centre) * (1/s - 1)      with pivot = 0, centre, or the full extent for the low, middle and high zone,
// because the projection then scales it by s about the centre: final = centre + s * (x' - centre) = pivot + s * (x - pivot).
#include "mods_internal.hpp"
#include <algorithm>
#include <cmath>
#include <limits>

namespace nfsu2raw::mods {
float current_fe_scale();      // mods_frontend.cpp: the scale the interface is drawn with now
bool fe_movie_active();        // mods_frontend.cpp: a video is playing (its own scale applies)

namespace {
float g_zone = 0.30f;

void push_float(float value) { asm volatile("flds %0" ::"m"(value)); }

struct Screen { float width, height; };
// The virtual size of the interface space, from the factors the game itself multiplies positions with.
bool screen_size(Screen& screen) {
    const float sx = f32_at(address_of("hud_scale_x")), sy = f32_at(address_of("fe_scale_y"));
    if (!(sx > 0.0f) || !(sy > 0.0f)) return false;
    screen = {2.0f / sx, 2.0f / sy};
    return true;
}

// Where `value` (a coordinate of an element that spans [low, high] on this axis, in a space `total` long) goes.
float anchored(float value, float low, float high, float total, bool may_fill) {
    const float s = current_fe_scale();
    if (std::fabs(s - 1.0f) < 0.001f || !(s > 0.05f) || fe_movie_active()) return value;
    const float center = total * 0.5f, k = 1.0f / s - 1.0f;
    if (may_fill && high - low >= 0.85f * total) return center + (value - center) / s;   // fills the screen: stays full
    const float middle = 0.5f * (low + high), zone = std::clamp(g_zone, 0.05f, 0.5f);
    float pivot = center;
    if (middle < zone * total) pivot = 0.0f;
    else if (middle > (1.0f - zone) * total) pivot = total;
    return value + (pivot - center) * k;
}

// One coordinate of a quad corner: the quad is the structure at ESI (x,y of four corners, 16 bytes apart).
template <int Corner, bool Y>
void quad_load(Cpu& c) {
    const uint32_t quad = reg(c, ESI);
    float value = f32_at(quad + 0x10 * Corner + (Y ? 4 : 0));
    Screen screen;
    if (screen_size(screen)) {
        float low = std::numeric_limits<float>::max(), high = -std::numeric_limits<float>::max();
        for (int corner = 0; corner < 4; ++corner) {
            const float v = f32_at(quad + 0x10 * corner + (Y ? 4 : 0));
            low = std::min(low, v);
            high = std::max(high, v);
        }
        value = anchored(value, low, high, Y ? screen.height : screen.width, true);
    }
    push_float(value);
}

// One coordinate of an end point of a line/arc segment: the points are at EBX and EBP.
template <bool B, bool Y>
void line_load(Cpu& c) {
    const uint32_t a = reg(c, EBX), b = reg(c, EBP), offset = Y ? 4 : 0;
    float value = f32_at((B ? b : a) + offset);
    Screen screen;
    if (screen_size(screen)) {
        const float va = f32_at(a + offset), vb = f32_at(b + offset);
        value = anchored(value, std::min(va, vb), std::max(va, vb), Y ? screen.height : screen.width, false);
    }
    push_float(value);
}
}  // namespace

void install_interface_anchoring(const WidescreenSettings& settings) {
    g_zone = settings.fe_anchor_zone;
    if (!settings.fe_anchor) return;
    if (settings.fe_scale == 1.0f && !settings.auto_fit_fe) return;   // the interface is not scaled: nothing to anchor
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
