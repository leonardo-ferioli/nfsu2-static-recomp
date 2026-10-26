// Forwarding header: the Direct3D 9 translator library (nue_d3d9) owns these types; the platform API uses them under its own namespace.
#pragma once
#include "nue/types.hpp"

namespace nfsu2::platform {
using nue::Id;
using nue::Status;
using nue::Result;
using nue::Bytes;
using nue::MutableBytes;
}
