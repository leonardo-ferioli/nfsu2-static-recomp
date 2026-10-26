// Platform API: the services of the running process. Code that needs a window or a display asks here instead of calling the OS.
// On Windows the defaults are the Win32 implementations; tests install the null ones.
#pragma once
#include "platform/display.hpp"
#include "platform/window.hpp"

namespace nfsu2::platform {

struct Services {
    Display* display = nullptr;
    Window* window = nullptr;
};

// The current services (created on first use; Win32 on Windows).
Services& services();
// Replaces the services (tests); the objects must outlive their use. Passing {} restores the defaults.
void set_services(Services replacement);

// Helpers over the primary display, shared by the game's resolution and frame-rate logic.
const DisplayInfo* primary_display(const std::vector<DisplayInfo>& all);

}  // namespace nfsu2::platform
