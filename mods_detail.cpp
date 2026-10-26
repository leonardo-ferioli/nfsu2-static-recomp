#include "mods_detail.hpp"
#include "mods_internal.hpp"
#include <string>

namespace nfsu2raw {
std::string install_detail(const DetailSettings& settings) {
    using namespace mods;
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
    return std::string("detail: scenery ") + levels[level].name + ", cars " + (settings.cars ? "always detailed" : "original");
}
}
