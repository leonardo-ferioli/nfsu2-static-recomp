// Builds with NUE only (NFSU2_HAVE_NUE, the 64-bit host with third_party/nue-engine): the host hook that gives the Direct3D 9 group of the Win32 facade
// (win32_facade_d3d9.cpp) NUE's Direct3D 9 layer on the host's nue_gfx context, so the game draws into the NUE window on a real GPU.
//
//     nue_window_create(...); nue_gfx_create(window, MANAGED, ...)       on the host thread that will run the guest's main thread
//     Win32LayerOptions options = parse_win32_layer("all", error);
//     options.d3d9_device = d3d9_device_on_nue_gfx(gfx);                 every CreateDevice of the game: nue::d3d9::create_gfx_device(gfx, ...)
//     Win32Facade facade(platform, options, input);
//
// The context must outlive the facade's device (the game's Release of the device, or the facade's destruction).
#pragma once
#include "win32_facade.hpp"
#include "nue/gfx.h"

namespace nfsu2raw {

decltype(Win32LayerOptions::d3d9_device) d3d9_device_on_nue_gfx(nue_gfx gfx);

}  // namespace nfsu2raw
