// The audio sink over NUE's audio device (third_party/nue-engine, include/nue/audio.h): the adapter the sink interface was shaped for. One callback stream
// (nue_audio_stream_create with a pull callback, interleaved float32); position, latency and statistics come from nue_audio_stream_get_*. The engine
// follows the system default device by itself, resamples and converts to the device format (NUE_AUDIO_EXACT_FORMAT is honoured when a test asks for it).
//
// NUE has to be initialised with the audio subsystem before open(): the program that opens the game's window already did (nue_init, SDL3 backend). A host
// with no window (the headless runner) passes `init_engine_if_needed` and the sink initialises the engine for audio only (references are counted, the sink
// releases its own at destruction); the first nue_init decides which subsystems exist, so a host that also wants a window must call nue_init first.
//
// Channels: NUE's channel order is the WAVEFORMATEXTENSIBLE one; the layouts 1, 2, 6 and 8 channels match the port's masks exactly. 3, 4, 5 and 7 channels
// are refused (the engine then keeps the layout it had): NUE has no standard position for them.
//
// This header names no NUE type: the programs that only choose a sink include it without the engine's headers.
#pragma once
#include <memory>

#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

std::unique_ptr<AudioSink> make_nue_sink(bool init_engine_if_needed);

// Registers this adapter as HostSink::nue (host_sink.hpp).
void register_nue_host_sink(bool init_engine_if_needed);

}  // namespace nfsu2::platform::audio
