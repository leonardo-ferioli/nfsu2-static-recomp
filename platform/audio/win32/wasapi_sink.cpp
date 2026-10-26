#include "platform/audio/win32/wasapi_sink.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <audioclient.h>
#include <avrt.h>
#include <ks.h>
#include <ksmedia.h>
#include <mmdeviceapi.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <mutex>
#include <thread>
#include <vector>

namespace nfsu2::platform::audio {
namespace {

template <class T> void release(T*& p) {
    if (p) {
        p->Release();
        p = nullptr;
    }
}

// Shared-mode, event-driven WASAPI output.
//
// When the endpoint disappears or is invalidated (headset unplugged, default device changed, driver reset) the sink does NOT stop: it keeps the
// clock running by calling the callback at real-time pace into a scratch buffer, and tries to re-acquire the default endpoint every half
// second. A silent device with a moving clock is what DirectSound applications expect from a lost device: SPEED2.EXE tears all of its audio
// down and rebuilds it if the play cursor stands still for a second, which would loop forever against a frozen clock.
class WasapiSink final : public AudioSink {
public:
    ~WasapiSink() override { close(); }

    Status open(const SinkDesc& desc, SinkCallback callback, void* user) override {
        close();
        if (!callback || desc.spec.channels == 0 || desc.spec.channels > 8) return Status::invalid_argument;
        desc_ = desc;
        callback_ = callback;
        user_ = user;
        const HRESULT co = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
        com_initialized_ = SUCCEEDED(co);   // S_FALSE also needs the matching CoUninitialize; RPC_E_CHANGED_MODE does not
        event_ = CreateEventW(nullptr, FALSE, FALSE, nullptr);
        if (!event_) return fail(Status::io_error);
        std::lock_guard lock(endpoint_mutex_);
        const Status s = init_endpoint(false);
        if (s != Status::ok) return fail(s);
        base_frames_ = 0;
        return Status::ok;
    }

    OutputLayout actual() const override { return actual_; }

    Status start() override {
        if (!callback_) return Status::closed;
        if (running_) return Status::ok;
        stop_thread_ = false;
        running_ = true;
        {
            std::lock_guard lock(endpoint_mutex_);
            if (!client_ || FAILED(client_->Start())) mark_lost_locked();   // the thread then runs the clock without a device
        }
        thread_ = std::thread([this] { run(); });
        return Status::ok;
    }

    Status stop() override {
        if (!running_) return Status::ok;
        stop_thread_ = true;
        if (event_) SetEvent(event_);
        if (thread_.joinable()) thread_.join();
        std::lock_guard lock(endpoint_mutex_);
        if (client_) client_->Stop();
        running_ = false;
        return Status::ok;
    }

    void close() override {
        stop();
        {
            std::lock_guard lock(endpoint_mutex_);
            release_endpoint_locked();
        }
        if (event_) {
            CloseHandle(event_);
            event_ = nullptr;
        }
        if (com_initialized_) {
            CoUninitialize();
            com_initialized_ = false;
        }
        callback_ = nullptr;
    }

    bool running() const override { return running_; }

    uint64_t frames_played() const override {
        std::lock_guard lock(endpoint_mutex_);
        uint64_t frames = base_frames_;
        UINT64 position = 0;
        if (endpoint_ok_ && clock_ && clock_frequency_ && SUCCEEDED(clock_->GetPosition(&position, nullptr)))
            frames += uint64_t(double(position) / double(clock_frequency_) * double(actual_.sample_rate));
        return frames;
    }

    SinkLatency latency() const override {
        SinkLatency l;
        l.device_buffer_frames = buffer_frames_;
        l.device_latency_ns = stream_latency_ns_ + (actual_.sample_rate ? uint64_t(buffer_frames_) * 1000000000ull / actual_.sample_rate : 0);
        l.total_latency_ns = l.device_latency_ns;
        return l;
    }

    SinkStats stats() const override {
        SinkStats s;
        s.frames_played = frames_played();
        s.underruns = underruns_.load();
        s.peak_level = peak_.load();
        s.cpu_load = cpu_load_.load();
        return s;
    }

    uint32_t endpoint_losses() const { return losses_.load(); }
    void drop_endpoint() {
        std::lock_guard lock(endpoint_mutex_);
        if (endpoint_ok_) mark_lost_locked();
        if (event_) SetEvent(event_);
    }

private:
    static void fill_format(WAVEFORMATEXTENSIBLE& f, uint32_t rate, uint32_t channels, uint32_t mask) {
        f.Format.wFormatTag = WAVE_FORMAT_EXTENSIBLE;
        f.Format.nChannels = WORD(channels);
        f.Format.nSamplesPerSec = rate;
        f.Format.wBitsPerSample = 32;
        f.Format.nBlockAlign = WORD(channels * 4);
        f.Format.nAvgBytesPerSec = rate * f.Format.nBlockAlign;
        f.Format.cbSize = sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX);
        f.Samples.wValidBitsPerSample = 32;
        f.dwChannelMask = mask ? mask : speaker::default_mask(channels);
        f.SubFormat = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
    }

    Status fail(Status s) {
        close();
        return s;
    }

    void release_endpoint_locked() {
        endpoint_ok_ = false;
        release(render_);
        release(clock_);
        release(client_);
        release(device_);
    }

    // Opens the default render endpoint. First time: the layout asked for (never more channels than the endpoint has: the system's own
    // down-mix of a stream it cannot place is unspecified, while the renderer above us down-mixes by known ITU rules); if the system refuses,
    // the endpoint's own mix format, reported through actual(). When re-acquiring after a loss the same layout as before is required, because
    // the layers above were configured for it. Caller holds endpoint_mutex_.
    Status init_endpoint(bool reacquire) {
        release_endpoint_locked();
        IMMDeviceEnumerator* enumerator = nullptr;
        if (FAILED(CoCreateInstance(__uuidof(MMDeviceEnumerator), nullptr, CLSCTX_ALL, __uuidof(IMMDeviceEnumerator), reinterpret_cast<void**>(&enumerator)))) return Status::device_lost;
        HRESULT hr = enumerator->GetDefaultAudioEndpoint(eRender, eConsole, &device_);
        release(enumerator);
        if (FAILED(hr)) return Status::device_lost;
        if (FAILED(device_->Activate(__uuidof(IAudioClient), CLSCTX_ALL, nullptr, reinterpret_cast<void**>(&client_)))) return Status::device_lost;

        const REFERENCE_TIME duration = REFERENCE_TIME(std::max<uint32_t>(desc_.low_latency ? 10 : desc_.latency_ms, 10)) * 10000;
        OutputLayout request = reacquire ? actual_ : desc_.spec;
        if (!reacquire && !desc_.exact_format) {
            WAVEFORMATEX* mix = nullptr;
            if (SUCCEEDED(client_->GetMixFormat(&mix)) && mix) {
                const uint32_t device_channels = std::min<uint32_t>(mix->nChannels, 8);
                if (request.channels > device_channels) {
                    request.channels = device_channels;
                    request.channel_mask = speaker::default_mask(device_channels);
                    if (mix->wFormatTag == WAVE_FORMAT_EXTENSIBLE && mix->cbSize >= 22 && mix->nChannels == device_channels)
                        request.channel_mask = reinterpret_cast<WAVEFORMATEXTENSIBLE*>(mix)->dwChannelMask;
                }
                CoTaskMemFree(mix);
            }
        }
        WAVEFORMATEXTENSIBLE want{};
        fill_format(want, request.sample_rate, request.channels, request.channel_mask);
        const DWORD converting = AUDCLNT_STREAMFLAGS_EVENTCALLBACK | AUDCLNT_STREAMFLAGS_AUTOCONVERTPCM | AUDCLNT_STREAMFLAGS_SRC_DEFAULT_QUALITY;
        hr = client_->Initialize(AUDCLNT_SHAREMODE_SHARED, converting, duration, 0, &want.Format, nullptr);
        if (FAILED(hr)) {
            if (desc_.exact_format || reacquire) return Status::unsupported;
            release(client_);
            if (FAILED(device_->Activate(__uuidof(IAudioClient), CLSCTX_ALL, nullptr, reinterpret_cast<void**>(&client_)))) return Status::device_lost;
            WAVEFORMATEX* mix = nullptr;
            if (FAILED(client_->GetMixFormat(&mix)) || !mix) return Status::unsupported;
            const uint32_t rate = mix->nSamplesPerSec, channels = std::min<uint32_t>(mix->nChannels, 8);
            CoTaskMemFree(mix);
            WAVEFORMATEXTENSIBLE alt{};
            fill_format(alt, rate, channels, 0);
            hr = client_->Initialize(AUDCLNT_SHAREMODE_SHARED, converting, duration, 0, &alt.Format, nullptr);
            if (FAILED(hr)) return Status::unsupported;
            request = {rate, channels, speaker::default_mask(channels)};
        }
        actual_ = request;
        if (FAILED(client_->SetEventHandle(event_))) return Status::io_error;
        if (FAILED(client_->GetBufferSize(&buffer_frames_))) return Status::io_error;
        if (FAILED(client_->GetService(__uuidof(IAudioRenderClient), reinterpret_cast<void**>(&render_)))) return Status::io_error;
        client_->GetService(__uuidof(IAudioClock), reinterpret_cast<void**>(&clock_));
        clock_frequency_ = 0;
        if (clock_) clock_->GetFrequency(&clock_frequency_);
        REFERENCE_TIME stream_latency = 0;
        client_->GetStreamLatency(&stream_latency);
        stream_latency_ns_ = uint64_t(stream_latency) * 100;
        // Prime the device with silence so the first period is not an underrun.
        BYTE* data = nullptr;
        if (SUCCEEDED(render_->GetBuffer(buffer_frames_, &data))) render_->ReleaseBuffer(buffer_frames_, AUDCLNT_BUFFERFLAGS_SILENT);
        endpoint_ok_ = true;
        return Status::ok;
    }

    // The endpoint failed: remember how many frames it had consumed, drop it, and let the thread run the clock itself.
    void mark_lost_locked() {
        UINT64 position = 0;
        if (endpoint_ok_ && clock_ && clock_frequency_ && SUCCEEDED(clock_->GetPosition(&position, nullptr)))
            base_frames_ += uint64_t(double(position) / double(clock_frequency_) * double(actual_.sample_rate));
        if (client_) client_->Stop();
        release_endpoint_locked();
        ++losses_;
        next_retry_ = std::chrono::steady_clock::now() + std::chrono::milliseconds(500);
        next_tick_ = std::chrono::steady_clock::now();
    }

    void run() {
        DWORD task = 0;
        HANDLE mm = AvSetMmThreadCharacteristicsW(L"Pro Audio", &task);
        const uint32_t channels = actual_.channels;
        const double rate = double(actual_.sample_rate);
        std::vector<float> scratch(size_t(actual_.sample_rate / 50 + 1) * channels, 0.0f);   // fallback blocks of up to 20 ms
        while (!stop_thread_) {
            bool have_endpoint;
            {
                std::lock_guard lock(endpoint_mutex_);
                have_endpoint = endpoint_ok_;
            }
            if (!have_endpoint) {
                // No device: keep time. One 10 ms block per tick, rendered and discarded, so the callback's clock moves at real-time pace.
                std::this_thread::sleep_until(next_tick_ += std::chrono::milliseconds(10));
                if (stop_thread_) break;
                const uint32_t frames = std::min<uint32_t>(uint32_t(rate / 100.0), uint32_t(scratch.size() / channels));
                std::fill(scratch.begin(), scratch.begin() + size_t(frames) * channels, 0.0f);
                callback_(user_, scratch.data(), frames);
                std::lock_guard lock(endpoint_mutex_);
                base_frames_ += frames;
                if (std::chrono::steady_clock::now() >= next_retry_) {
                    next_retry_ = std::chrono::steady_clock::now() + std::chrono::milliseconds(500);
                    const uint64_t kept = base_frames_;
                    if (init_endpoint(true) == Status::ok && client_ && SUCCEEDED(client_->Start())) base_frames_ = kept;
                    else release_endpoint_locked();
                }
                if (std::chrono::steady_clock::now() - next_tick_ > std::chrono::milliseconds(250)) next_tick_ = std::chrono::steady_clock::now();   // we were suspended: do not burst
                continue;
            }
            if (WaitForSingleObject(event_, 200) != WAIT_OBJECT_0) {
                if (stop_thread_) break;
                std::lock_guard lock(endpoint_mutex_);   // no period for 200 ms: is the endpoint still alive?
                UINT32 padding = 0;
                if (client_ && FAILED(client_->GetCurrentPadding(&padding))) mark_lost_locked();
                continue;
            }
            if (stop_thread_) break;
            std::lock_guard lock(endpoint_mutex_);
            if (!endpoint_ok_) continue;
            UINT32 padding = 0;
            if (FAILED(client_->GetCurrentPadding(&padding))) {
                mark_lost_locked();
                continue;
            }
            const UINT32 frames = buffer_frames_ > padding ? buffer_frames_ - padding : 0;
            if (!frames) continue;
            if (padding == 0) ++underruns_;   // the device had drained everything before we got here
            BYTE* data = nullptr;
            if (FAILED(render_->GetBuffer(frames, &data)) || !data) {
                mark_lost_locked();
                continue;
            }
            const auto t0 = std::chrono::steady_clock::now();
            float* out = reinterpret_cast<float*>(data);
            std::fill(out, out + size_t(frames) * channels, 0.0f);
            callback_(user_, out, frames);
            float peak = 0;
            for (size_t i = 0, n = size_t(frames) * channels; i < n; ++i) {
                if (!(out[i] == out[i])) out[i] = 0.0f;                  // NaN never reaches the device
                out[i] = std::clamp(out[i], -1.0f, 1.0f);
                peak = std::max(peak, std::fabs(out[i]));
            }
            render_->ReleaseBuffer(frames, 0);
            peak_ = peak;
            const double spent = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
            cpu_load_ = float(spent / (double(frames) / rate));
        }
        if (mm) AvRevertMmThreadCharacteristics(mm);
    }

    SinkDesc desc_;
    IMMDevice* device_ = nullptr;
    IAudioClient* client_ = nullptr;
    IAudioRenderClient* render_ = nullptr;
    IAudioClock* clock_ = nullptr;
    HANDLE event_ = nullptr;
    UINT64 clock_frequency_ = 0;
    UINT32 buffer_frames_ = 0;
    uint64_t stream_latency_ns_ = 0;
    OutputLayout actual_;
    SinkCallback callback_ = nullptr;
    void* user_ = nullptr;
    std::thread thread_;
    mutable std::mutex endpoint_mutex_;   // guards the endpoint objects, endpoint_ok_ and base_frames_
    std::atomic<bool> stop_thread_{false};
    bool running_ = false, com_initialized_ = false, endpoint_ok_ = false;
    uint64_t base_frames_ = 0;
    std::chrono::steady_clock::time_point next_retry_, next_tick_;
    std::atomic<uint64_t> underruns_{0};
    std::atomic<uint32_t> losses_{0};
    std::atomic<float> peak_{0}, cpu_load_{0};
};

}  // namespace

std::unique_ptr<AudioSink> make_wasapi_sink() { return std::make_unique<WasapiSink>(); }

bool wasapi_drop_endpoint(AudioSink& sink) {
    auto* w = dynamic_cast<WasapiSink*>(&sink);
    if (!w) return false;
    w->drop_endpoint();
    return true;
}

uint32_t wasapi_endpoint_losses(AudioSink& sink) {
    auto* w = dynamic_cast<WasapiSink*>(&sink);
    return w ? w->endpoint_losses() : 0;
}

}  // namespace nfsu2::platform::audio
