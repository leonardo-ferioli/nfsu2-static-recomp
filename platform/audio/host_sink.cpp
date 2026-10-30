#include "platform/audio/host_sink.hpp"

#include <mutex>
#include <string>

#include "platform/audio/paced_null_sink.hpp"
#ifdef _WIN32
#include "platform/audio/win32/wasapi_sink.hpp"
#endif

namespace nfsu2::platform::audio {
namespace {
std::mutex g_mutex;
SinkFactory g_nue;   // registered by nfsu2_audio_nue
}  // namespace

const char* host_sink_name(HostSink kind) {
    switch (kind) {
        case HostSink::null: return "null";
        case HostSink::wasapi: return "wasapi";
        case HostSink::nue: return "nue";
        case HostSink::automatic: return "auto";
    }
    return "?";
}

bool parse_host_sink(std::string_view text, HostSink& kind) {
    for (HostSink k : {HostSink::null, HostSink::wasapi, HostSink::nue, HostSink::automatic}) {
        if (text == host_sink_name(k)) {
            kind = k;
            return true;
        }
    }
    return false;
}

void register_host_sink(HostSink kind, SinkFactory factory) {
    std::lock_guard lock(g_mutex);
    if (kind == HostSink::nue) g_nue = std::move(factory);
}

bool host_sink_available(HostSink kind) {
    std::lock_guard lock(g_mutex);
    switch (kind) {
        case HostSink::null: return true;
        case HostSink::wasapi:
#ifdef _WIN32
            return true;
#else
            return false;
#endif
        case HostSink::nue: return static_cast<bool>(g_nue);
        case HostSink::automatic: return true;
    }
    return false;
}

namespace {

// A real output with a safety net: when it cannot be opened the game keeps running on the paced null sink (silent, real-time clock).
class FallbackSink final : public AudioSink {
public:
    FallbackSink(std::unique_ptr<AudioSink> primary, std::string name, std::function<void(const std::string&)> log)
        : active_(std::move(primary)), name_(std::move(name)), log_(std::move(log)) {}
    ~FallbackSink() override { close(); }
    Status open(const SinkDesc& desc, SinkCallback callback, void* user) override {
        Status s = active_->open(desc, callback, user);
        // Only the first open falls back: once the real output has worked, a refused layout is the engine's to handle (it reopens the layout that worked).
        if (s == Status::ok || opened_) {
            opened_ = opened_ || s == Status::ok;
            return s;
        }
        if (log_) log_("audio: the '" + name_ + "' output could not be opened (status " + std::to_string(int(s)) + "); silent output with a real-time clock instead");
        active_->close();
        active_ = make_paced_null_sink();
        opened_ = true;
        return active_->open(desc, callback, user);
    }
    OutputLayout actual() const override { return active_->actual(); }
    Status start() override { return active_->start(); }
    Status stop() override { return active_->stop(); }
    void close() override { active_->close(); }
    bool running() const override { return active_->running(); }
    uint64_t frames_played() const override { return active_->frames_played(); }
    SinkLatency latency() const override { return active_->latency(); }
    SinkStats stats() const override { return active_->stats(); }

private:
    std::unique_ptr<AudioSink> active_;
    std::string name_;
    std::function<void(const std::string&)> log_;
    bool opened_ = false;
};

}  // namespace

SinkFactory make_host_sink_factory(HostSink kind, HostSink& chosen, std::string& note, std::function<void(const std::string&)> log) {
    note.clear();
    if (kind == HostSink::automatic) {
        kind = host_sink_available(HostSink::nue) ? HostSink::nue : host_sink_available(HostSink::wasapi) ? HostSink::wasapi : HostSink::null;
    } else if (!host_sink_available(kind)) {
        const HostSink wanted = kind;
        kind = (wanted == HostSink::nue && host_sink_available(HostSink::wasapi)) ? HostSink::wasapi : HostSink::null;
        note = std::string("audio sink '") + host_sink_name(wanted) + "' is not available in this build; using '" + host_sink_name(kind) + "'";
    }
    chosen = kind;
    switch (kind) {
        case HostSink::nue: {
            SinkFactory nue;
            {
                std::lock_guard lock(g_mutex);
                nue = g_nue;
            }
            return [nue, log] { return std::unique_ptr<AudioSink>(std::make_unique<FallbackSink>(nue(), "nue", log)); };
        }
#ifdef _WIN32
        case HostSink::wasapi: return [log] { return std::unique_ptr<AudioSink>(std::make_unique<FallbackSink>(make_wasapi_sink(), "wasapi", log)); };
#endif
        default: return [] { return make_paced_null_sink(); };
    }
}

}  // namespace nfsu2::platform::audio
