#pragma once
// Optional detail settings ([detail] in launcher.ini; tools/mods/detail.py finds the places): how far away the game keeps the
// detailed models of the scenery, how small an object may get before it is no longer drawn, and whether cars and tyres always use
// their detailed model. The default (original) leaves the game exactly as it is.
#include <string>

namespace nfsu2raw {
struct DetailSettings {
    // Scenery: 0 original (detailed model from pixels/size >= 4, nothing under 17 px), 1 high (2x farther, 8 px), 2 max (the detailed
    // model whenever it is loaded, 4 px). The detailed model still has to be loaded by the game's streamer.
    int world = 0;
    bool cars = false;   // cars and tyres always use their detailed model (the engine's own LOD override)
    // Track streamer look-ahead in seconds (0 = off, the game as it is). The streamer loads the sections listed for the drivable section
    // the player is in; with a look-ahead it also loads those of the point this many seconds ahead at the car's current velocity, through
    // the streamer's second position (the one a second player would use), so the map ahead is loading before the car gets there.
    // Needs the main-loop hook of the widescreen fix (install_widescreen with the fix on).
    float streamer_lookahead = 0.0f;
};
// Applies the settings (before the translated entry point runs); returns a description for the log.
std::string install_detail(const DetailSettings& settings);
}
