// Installs the DirectSound layer into the NFSU2 launcher: the guest's DirectSoundCreate (dsound.dll ordinal 1) and the COM methods of the
// objects it returns are answered by the facade over the audio engine instead of by the system DirectSound. 32-bit Windows host only (guest
// addresses are host addresses); elsewhere install_dsound() reports that it is not available and the system DirectSound stays in use.
#pragma once
#include <functional>
#include <memory>
#include <string>

#include "platform/audio/audio_engine.hpp"

namespace nfsu2raw { class NativePlatform; }   // native32.hpp

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

// Returns false (with a reason in `why`) when the layer could not be installed; the game then keeps the system DirectSound.
bool install_dsound(nfsu2raw::NativePlatform& platform, const AudioSettings& settings, const LogFn& log, std::string& why);
// Logs the call counts and mixer statistics, stops the output. Safe to call when nothing was installed, and more than once.
void shutdown_dsound(const LogFn& log);

}  // namespace nfsu2::platform::audio
