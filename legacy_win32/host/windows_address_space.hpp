// The address space of a 32-bit Windows process as a Level A AddressSpace: a guest address is a host address (identity mapping), so VirtualAlloc and
// friends are the real ones and `host()` is a cast. This is what the Windows launcher uses (the translated game's image already lives in this space).
#pragma once
#include "legacy_win32/memory.hpp"

namespace nfsu2::legacy::win32::host {
std::unique_ptr<AddressSpace> make_identity_address_space();
}
