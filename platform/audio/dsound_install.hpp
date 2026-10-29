// Installs the DirectSound layer into the NFSU2 launcher: the guest's DirectSoundCreate (dsound.dll ordinal 1) and the COM methods of the
// objects it returns are answered by the facade over the audio engine instead of by the system DirectSound. Windows hosts: the 32-bit one (guest
// addresses are host addresses, kernel and window handles are the system's) and the 64-bit one (the guest in the arena, handles are tokens of the Win32
// layer, given by the caller as `GuestHandles`); elsewhere install_dsound() reports that it is not available and the system DirectSound stays in use.
#pragma once
#include <functional>
#include <memory>
#include <string>

#include "platform/audio/audio_engine.hpp"

namespace nfsu2raw { class GuestPlatform; }   // guest_platform.hpp

namespace nfsu2::platform::audio {

struct AudioSettings {
    bool enabled = false;                 // audio=nue
    uint32_t latency_ms = 40;
    uint32_t sample_rate = 48000;
    SpatialMode spatial = SpatialMode::automatic;
    bool binaural_headphones = false;     // audio_spatial=binaural
    // Tests inject a deterministic sink here; empty = the WASAPI sink.
    std::function<std::unique_ptr<AudioSink>()> sink_factory;
};

using LogFn = std::function<void(const std::string&)>;

// What the guest's handles mean on a 64-bit host (the 32-bit host uses the system's handles directly and ignores this): signal an event the guest created
// (SetEvent) and tell whether a window handle is one (IsWindow). Both are answered by the Win32 layer's handle table and window system.
struct GuestHandles {
    std::function<void(uint32_t)> set_event;
    std::function<bool(uint32_t)> is_window;
};

// Returns false (with a reason in `why`) when the layer could not be installed; the game then keeps the system DirectSound.
bool install_dsound(nfsu2raw::GuestPlatform& platform, const AudioSettings& settings, const LogFn& log, std::string& why, const GuestHandles* handles = nullptr);
// Logs the call counts and mixer statistics, stops the output. Safe to call when nothing was installed, and more than once.
void shutdown_dsound(const LogFn& log);

}  // namespace nfsu2::platform::audio
