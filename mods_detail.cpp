#include "mods_detail.hpp"
#include "mods_internal.hpp"
#include <cmath>
#include <cstdio>
#include <initializer_list>
#include <string>

namespace nfsu2raw {
namespace {
using namespace mods;

// ---- track streamer look-ahead ------------------------------------------------------------------------------------------------------------
// The game's track streamer (SPEED2.EXE v1.2, the object at 0x88eb00) keeps two streaming positions, one per player, of 0x5c bytes from +0xb0:
//   +0x00 car index (-1: use the position below), +0x04/+0x08 position x/y, +0x0c/+0x10 velocity x/y, +0x14 active.
// Every frame the race code (0x44efe0, after the streamer has run) clears both and sets one per player present (0x5d6020 / 0x5d6040).
// The streamer (0x5e5300) takes the drivable section under each active position and loads the union of the sections listed for them
// (0x5e5110), keeping 2400/2500/2600 and the track's own list. It predicts ahead only inside STREAMER_PREDICTION triggers of the map
// (0x5e4f20: 1.5 s at the car's speed, at most 100 m, and only into the sections the trigger names), so on most roads it starts loading
// the next sections when the car enters them. In a one-player race the second position is free: the look-ahead puts the point
// `seconds` ahead of the player's car there before the streamer runs (the main-loop hook, earlier in the same frame).
constexpr uint32_t kStreamer = 0x88eb00, kSlot0 = kStreamer + 0xb0, kSlotSize = 0x5c, kCarList = 0x890080;
float g_lookahead = 0.0f;

bool code_matches(uint32_t address, std::initializer_list<uint8_t> bytes) {
    for (const uint8_t b : bytes) if (u8_at(address++) != b) return false;
    return true;
}
// The places the layout above was read from, as the image holds them: the slot setter with velocity and the car read of the prediction.
bool streamer_layout_matches() {
    return code_matches(0x5d6040, {0x8b, 0x44, 0x24, 0x04, 0x6b, 0xc0, 0x5c, 0x8d, 0x84, 0x08, 0xb0, 0x00, 0x00, 0x00}) &&
           code_matches(0x5e4f31, {0x8b, 0x15, 0x80, 0x00, 0x89, 0x00, 0x8b, 0x4c, 0x8a, 0x1c, 0xd9, 0x41, 0x64, 0x8b, 0x51, 0x60}) &&
           code_matches(0x5e4f47, {0xd9, 0x41, 0x74, 0x8b, 0x49, 0x70});
}

void lookahead_frame() {
    const uint32_t first = kSlot0, second = kSlot0 + kSlotSize;
    if (!u8_at(first + 0x14)) return;                                // no player position (front end, loading screens)
    if (u8_at(second + 0x14) && i32_at(second) >= 0) return;         // a second player's car holds the slot
    float x, y, vx, vy;
    const int32_t car_index = i32_at(first);
    if (car_index >= 0) {
        if (car_index >= 64) return;
        const uint32_t list = u32_at(kCarList);
        if (!list) return;
        const uint32_t car = u32_at(list + 0x1c + 4u * uint32_t(car_index));
        if (!car) return;
        x = f32_at(car + 0x60); y = f32_at(car + 0x64); vx = f32_at(car + 0x70); vy = f32_at(car + 0x74);
    } else {
        x = f32_at(first + 0x04); y = f32_at(first + 0x08); vx = f32_at(first + 0x0c); vy = f32_at(first + 0x10);
    }
    if (!std::isfinite(x) || !std::isfinite(y) || !std::isfinite(vx) || !std::isfinite(vy)) return;
    i32_at(second) = -1;
    f32_at(second + 0x04) = x + vx * g_lookahead;
    f32_at(second + 0x08) = y + vy * g_lookahead;
    f32_at(second + 0x0c) = vx;
    f32_at(second + 0x10) = vy;
    u8_at(second + 0x14) = 1;
}
}  // namespace

std::string install_detail(const DetailSettings& settings) {
    // Scenery (ScenerySection_AddInstance, main views): the pixel limit is a patch point of the translated code, the LOD A ratio a
    // float of .rdata that only this test reads. The same test scores a detailed model that is not loaded (or absent) as 0, which
    // must stay below the ratio so that the coarse model is drawn then: "max" uses a ratio just above 0, never 0.
    static const struct { uint32_t min_pixels; float ratio; const char* name; } levels[] = {
        {17, 4.0f, "original"}, {8, 2.0f, "high (detailed models twice as far, objects down to 8 px)"},
        {4, 0.01f, "max (detailed models whenever loaded, objects down to 4 px)"}};
    const int level = settings.world < 0 ? 0 : settings.world > 2 ? 2 : settings.world;
    set_var("world_min_pixels", levels[level].min_pixels);
    f32_at(address_of("lod_a_ratio")) = levels[level].ratio;
    // Cars and tyres: the engine's overrides, -1 = automatic, 0 = LOD A.
    i32_at(address_of("force_car_lod")) = settings.cars ? 0 : -1;
    i32_at(address_of("force_tire_lod")) = settings.cars ? 0 : -1;
    std::string report = std::string("detail: scenery ") + levels[level].name + ", cars " + (settings.cars ? "always detailed" : "original");
    if (settings.streamer_lookahead > 0.0f) {
        if (!streamer_layout_matches()) {
            report += ", streamer look-ahead not installed (the streamer code is not the one it was written for)";
        } else {
            static bool registered = false;
            g_lookahead = std::fmin(settings.streamer_lookahead, 10.0f);
            if (!registered) { events().process.push_back(lookahead_frame); registered = true; }
            char text[96];
            std::snprintf(text, sizeof text, ", streamer look-ahead %.1f s", double(g_lookahead));
            report += text;
        }
    }
    return report;
}
}
