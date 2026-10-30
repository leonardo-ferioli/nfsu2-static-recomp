#include "platform/audio/paced_null_sink.hpp"

#include <atomic>
#include <chrono>
#include <mutex>
#include <thread>

#include "platform/audio/null_sink.hpp"

namespace nfsu2::platform::audio {
namespace {

class PacedNullSink final : public AudioSink {
public:
    ~PacedNullSink() override { close(); }
    Status open(const SinkDesc& d, SinkCallback cb, void* user) override { return sink_.open(d, cb, user); }
    OutputLayout actual() const override { return sink_.actual(); }
    Status start() override {
        const Status s = sink_.start();
        if (s == Status::ok && !thread_.joinable()) {
            stop_ = false;
            thread_ = std::thread([this] {
                // Pace against the wall clock, not against the sleep: a sleep of 10 ms can take 15, and the cursor the game sees must not run slow.
                const uint32_t rate = sink_.actual().sample_rate;
                const auto begin = std::chrono::steady_clock::now();
                uint64_t produced = 0;
                while (!stop_) {
                    std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    const double seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - begin).count();
                    const uint64_t due = uint64_t(seconds * rate);
                    if (due <= produced) continue;
                    std::lock_guard lock(mutex_);
                    sink_.advance(uint32_t(due - produced));
                    produced = due;
                }
            });
        }
        return s;
    }
    Status stop() override { return sink_.stop(); }
    void close() override {
        stop_ = true;
        if (thread_.joinable()) thread_.join();
        sink_.close();
    }
    bool running() const override { return sink_.running(); }
    uint64_t frames_played() const override { return sink_.frames_played(); }
    SinkLatency latency() const override { return sink_.latency(); }
    SinkStats stats() const override { return sink_.stats(); }

private:
    NullSink sink_{480, 480};
    std::thread thread_;
    std::mutex mutex_;
    std::atomic<bool> stop_{false};
};

}  // namespace

std::unique_ptr<AudioSink> make_paced_null_sink() { return std::make_unique<PacedNullSink>(); }

}  // namespace nfsu2::platform::audio
