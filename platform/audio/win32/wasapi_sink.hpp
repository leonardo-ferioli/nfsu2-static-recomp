// Windows audio sink over WASAPI (shared mode, event driven). This is the only Windows audio API the new path touches: the system DirectSound is
// never called. NUE replaces this file by an adapter over nue_audio_stream (its Windows layer is WASAPI too).
#pragma once
#include <memory>

#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

// Returns a new sink bound to the default render endpoint (it follows nothing: the endpoint is chosen at open()).
std::unique_ptr<AudioSink> make_wasapi_sink();

// Test hooks (they do nothing to a sink that is not a WASAPI sink): drop the endpoint as if the device had been unplugged, and count the losses.
bool wasapi_drop_endpoint(AudioSink& sink);
uint32_t wasapi_endpoint_losses(AudioSink& sink);

}  // namespace nfsu2::platform::audio
