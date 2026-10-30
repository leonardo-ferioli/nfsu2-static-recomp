// Which output the 64-bit host gives the game's DirectSound. The host decides (a window-less run keeps the paced null sink; the program that opens the NUE
// window picks NUE's audio device); install_dsound() takes the factory through AudioSettings::sink_factory.
//
//   null    a silent output with a real-time clock (paced_null_sink.hpp): headless boot, tests, machines without a sound card
//   wasapi  the port's own WASAPI sink (Windows)
//   nue     NUE's audio device (include/nue/audio.h) through the adapter in platform/audio/nue/nue_sink.hpp; it registers itself with register_host_sink()
//   auto    nue when registered, else wasapi on Windows, else null
//
// A real output that cannot be opened (no sound card, endpoint busy) does not stop the game: the sink falls back to the paced null sink when open() fails,
// and says so through `log`.
//
// The NUE adapter lives in its own library (nfsu2_audio_nue) so that the programs and tests that do not link the engine do not pull it in.
#pragma once
#include <functional>
#include <memory>
#include <string>
#include <string_view>

#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

enum class HostSink { null, wasapi, nue, automatic };

using SinkFactory = std::function<std::unique_ptr<AudioSink>()>;

const char* host_sink_name(HostSink kind);
bool parse_host_sink(std::string_view text, HostSink& kind);   // "null" | "wasapi" | "nue" | "auto" (case sensitive)

// A host library supplies the factory of a kind that is not in nfsu2_audio (today: nue).
void register_host_sink(HostSink kind, SinkFactory factory);
bool host_sink_available(HostSink kind);

// The factory for `kind`. Never null: an unavailable kind falls back (nue/wasapi -> next in the chain above) and says so in `note`; null is always there.
// `chosen` receives the kind that will actually be built.
SinkFactory make_host_sink_factory(HostSink kind, HostSink& chosen, std::string& note, std::function<void(const std::string&)> log = {});

}  // namespace nfsu2::platform::audio
