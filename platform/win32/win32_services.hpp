// Win32 implementation of Display and Window (the only backend today). Include only from Windows-specific code.
#pragma once
#include "platform/services.hpp"

namespace nfsu2::platform::win32 {
// Process-wide Win32 display and window objects.
Display& display();
Window& window();
}  // namespace nfsu2::platform::win32
