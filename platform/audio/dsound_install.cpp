#include "platform/audio/dsound_install.hpp"
#include "guest_memory.hpp"

#include <memory>
#include <mutex>
#include <sstream>
#include <unordered_map>

#include "platform/audio/dsound_facade.hpp"

#if defined(_WIN32) && defined(NFSU2_NATIVE32)
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include "platform/audio/win32/wasapi_sink.hpp"
#endif

namespace nfsu2::platform::audio {

#if defined(_WIN32) && defined(NFSU2_NATIVE32)
namespace {
using nfsu2raw::Cpu;
using nfsu2raw::NativePlatform;

// Guest memory on the 32-bit Windows host: process memory (guest addresses are host addresses), from a private heap.
class HeapGuestMemory final : public GuestMemory {
public:
    HeapGuestMemory() : heap_(HeapCreate(0, 0, 0)) {}
    ~HeapGuestMemory() override {
        if (heap_) HeapDestroy(heap_);
    }
    uint32_t alloc(uint32_t bytes) override {
        void* raw = HeapAlloc(heap_, HEAP_ZERO_MEMORY, size_t(bytes) + 16);
        if (!raw) return 0;
        const uintptr_t aligned = (reinterpret_cast<uintptr_t>(raw) + 15) & ~uintptr_t(15);
        std::lock_guard lock(mutex_);
        bases_[uint32_t(aligned)] = raw;
        return uint32_t(aligned);
    }
    void free(uint32_t address) override {
        std::lock_guard lock(mutex_);
        auto it = bases_.find(address);
        if (it == bases_.end()) return;
        HeapFree(heap_, 0, it->second);
        bases_.erase(it);
    }
    uint8_t* ptr(uint32_t address, uint32_t bytes) override {
        // The address came from the guest: check that it is committed, accessible memory for the whole range.
        uint32_t cursor = address;
        uint32_t remaining = bytes ? bytes : 1;
        while (remaining) {
            MEMORY_BASIC_INFORMATION info;
            if (!VirtualQuery(nfsu2::guest::ptr<void>(cursor), &info, sizeof(info))) return nullptr;
            if (info.State != MEM_COMMIT || (info.Protect & (PAGE_NOACCESS | PAGE_GUARD))) return nullptr;
            const uintptr_t end = reinterpret_cast<uintptr_t>(info.BaseAddress) + info.RegionSize;
            const uint32_t span = uint32_t(std::min<uintptr_t>(end - cursor, remaining));
            if (span == 0) return nullptr;
            cursor += span;
            remaining -= span;
        }
        return nfsu2::guest::ptr<uint8_t>(address);
    }

private:
    HANDLE heap_;
    std::mutex mutex_;
    std::unordered_map<uint32_t, void*> bases_;
};

class WindowsHost final : public HostServices {
public:
    void set_event(uint32_t handle) override { SetEvent(nfsu2::guest::host_handle<HANDLE>(handle)); }
    bool is_window(uint32_t hwnd) override { return IsWindow(nfsu2::guest::host_handle<HWND>(hwnd)) != FALSE; }
};

struct Runtime {
    HeapGuestMemory memory;
    WindowsHost host;
    std::unique_ptr<Engine> engine;
    std::unique_ptr<DsoundFacade> facade;
    LogFn log;
    std::once_flag started;
    bool start_failed = false;
};
std::unique_ptr<Runtime> g_runtime;
}  // namespace

bool install_dsound(NativePlatform& platform, const AudioSettings& settings, const LogFn& log, std::string& why) {
    if (!settings.enabled) {
        why = "audio=system";
        return false;
    }
    auto rt = std::make_unique<Runtime>();
    rt->log = log;
    EngineConfig config;
    config.sample_rate = settings.sample_rate;
    config.latency_ms = settings.latency_ms;
    config.spatial = settings.binaural_headphones ? SpatialMode::binaural : settings.spatial;
    Status status = Status::ok;
    rt->engine = Engine::create(config, settings.sink_factory ? settings.sink_factory() : make_wasapi_sink(), &status);
    if (!rt->engine) {
        why = "no audio output could be opened (status " + std::to_string(int(status)) + ")";
        return false;
    }
    rt->facade = std::make_unique<DsoundFacade>(rt->memory, rt->host, rt->engine->device());
    Runtime* r = rt.get();
    const auto& methods = DsoundFacade::methods();
    for (size_t i = 0; i < methods.size(); ++i) {
        const unsigned words = methods[i].words;
        const uint32_t token = platform.add_method_token(words, [r, i, words](Cpu& cpu) -> uint32_t {
            const uint32_t esp = uint32_t(nfsu2raw::r<4>(cpu, 16));
            uint32_t args[10] = {};
            for (unsigned k = 0; k < words && k < 10; ++k) args[k] = uint32_t(nfsu2raw::m<4>(cpu, esp + 4 + 4 * k));
            return r->facade->call(i, args);
        });
        rt->facade->set_token(i, token);
    }
    platform.override_import("#1", 3, [r](Cpu& cpu) -> uint32_t {
        const uint32_t esp = uint32_t(nfsu2raw::r<4>(cpu, 16));
        const uint32_t guid = uint32_t(nfsu2raw::m<4>(cpu, esp + 4)), out = uint32_t(nfsu2raw::m<4>(cpu, esp + 8)), outer = uint32_t(nfsu2raw::m<4>(cpu, esp + 12));
        std::call_once(r->started, [r] {
            const Status s = r->engine->start();
            r->start_failed = (s != Status::ok);
            if (r->log) {
                std::ostringstream text;
                const OutputLayout o = r->engine->sink().actual();
                text << "audio (NUE DirectSound layer): output " << o.sample_rate << " Hz, " << o.channels << " channels, renderer " << r->engine->renderer_name()
                     << ", sink latency " << r->engine->sink().latency().device_latency_ns / 1000000 << " ms" << (r->start_failed ? ", START FAILED" : "");
                r->log(text.str());
            }
        });
        if (r->start_failed) return uint32_t(ds::hr::no_driver);
        return r->facade->direct_sound_create(guid, out, outer);
    });
    g_runtime = std::move(rt);
    if (log) log("audio: the game's DirectSound is served by the NUE layer (WASAPI output); the system DirectSound is not used");
    return true;
}

void shutdown_dsound(const LogFn& log) {
    if (!g_runtime) return;
    Runtime& r = *g_runtime;
    if (log) {
        const ds::DeviceStats s = r.engine->device().stats();
        const SinkStats k = r.engine->sink().stats();
        std::ostringstream text;
        text << "audio summary: " << s.blocks_mixed << " blocks mixed, peak " << s.peak << ", clipped samples " << s.clipped_samples << ", sink frames played " << k.frames_played
             << ", sink underruns " << k.underruns << ", output reopened " << r.engine->reopen_count() << " time(s)\n" << r.facade->report();
        log(text.str());
    }
    r.engine->shutdown();
}

#else
bool install_dsound(nfsu2raw::NativePlatform&, const AudioSettings&, const LogFn&, std::string& why) {
    why = "the NUE DirectSound layer needs the 32-bit Windows host";
    return false;
}
void shutdown_dsound(const LogFn&) {}
#endif

}  // namespace nfsu2::platform::audio
