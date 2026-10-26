// The real Windows registry behind the Level A Registry interface (Windows hosts only). A key opened here is a table entry holding the real HKEY,
// so the guest-visible value is a 32-bit handle on any host; the predefined hives keep their Win32 values.
#pragma once
#include "legacy_win32/registry.hpp"

namespace nfsu2::legacy::win32::host {
std::unique_ptr<Registry> make_windows_registry();
}
