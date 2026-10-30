// A silent output that keeps real time: a NullSink whose clock a thread advances 10 ms every 10 ms. The game's audio start-up waits for the play cursor
// to move, so a sink with a frozen clock (the test NullSink) keeps it waiting for ever; no sound card is opened. This is the headless host's sink.
#pragma once
#include <memory>

#include "platform/audio/sink.hpp"

namespace nfsu2::platform::audio {

std::unique_ptr<AudioSink> make_paced_null_sink();

}  // namespace nfsu2::platform::audio
