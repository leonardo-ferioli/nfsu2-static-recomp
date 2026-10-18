// NOS trail length at high frame rates (the mod's NOSTrailFix): the trail is updated at a fixed 60 Hz rate instead of once per frame.
#include "mods_internal.hpp"

namespace nfsu2raw::mods {
namespace {
float g_custom_length = 1.0f;

void update_streaking_flares(Cpu& c) {
    static float accumulator = 0.0f;
    constexpr float kBaseInterval = 1.0f / 60.0f;
    accumulator += actual_delta_time;
    const float interval = kBaseInterval * g_custom_length;
    if (accumulator >= interval) {
        accumulator -= interval;
        set_reg(c, EAX, call_original("nos_trail", 0, 0, {argument(c, 0)}));
    }
}
}  // namespace

void install_nos_trail(const WidescreenSettings& settings) {
    g_custom_length = settings.custom_nos_trail_length;
    if (settings.fix_nos_trail) install_hook("nos_trail", update_streaking_flares);
}
}  // namespace nfsu2raw::mods
