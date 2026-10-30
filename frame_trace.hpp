#pragma once
// NFSU2_FRAME_TRACE=1: where a slow frame of the game went, on a host where the Win32 layer serves the game (the 64-bit host). Present marks the frames; between
// two of them the game's main thread (the one that presents) adds what it spent in file reads, waits, sleeps and in Present itself, and the guest instructions it
// ran. A frame that takes more than twice the median of the recent ones (and at least 25 ms) gets a line on stderr; every 10 s a summary line follows. Reads by
// other guest threads are counted apart (a streaming thread does not stall the frame). Nothing is measured when the variable is not set.
#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <thread>

namespace nfsu2raw::frame_trace {

enum Kind : unsigned { read, wait, sleep, present, native, kinds };   // native: every import and Direct3D method the game calls (includes the others)

inline bool enabled() {
    static const bool on = std::getenv("NFSU2_FRAME_TRACE") != nullptr;
    return on;
}
inline uint64_t now_ns() { return uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()); }

struct State {
    std::atomic<std::thread::id> main_thread{};
    std::array<std::atomic<uint64_t>, kinds> ns{}, calls{};
    std::atomic<uint64_t> read_bytes{0}, other_read_ns{0}, other_read_bytes{0}, other_reads{0};
    uint64_t frame = 0, last_frame_ns = 0, last_instructions = 0, start_ns = 0;
    std::array<double, 64> recent{};
    // summary window
    uint64_t window_ns = 0, window_frames = 0, window_slow = 0, window_native_ns = 0, window_instructions = 0;
    double window_max = 0;
    // the main thread's calls by name (static names: the import table's and the Direct3D methods'), for the top list of the summary
    struct Call { const char* name = nullptr; uint64_t ns = 0, calls = 0; };
    std::array<Call, 1024> table{};
};
inline State& state() { static State s; return s; }
inline bool on_main_thread() { return std::this_thread::get_id() == state().main_thread.load(std::memory_order_relaxed); }

// One call of the main thread by name (open addressing on the name's address; names are static strings).
inline void note_call(const char* name, uint64_t ns) {
    State& s = state();
    size_t i = (reinterpret_cast<uintptr_t>(name) >> 3) % s.table.size();
    for (size_t probe = 0; probe < s.table.size(); ++probe, i = (i + 1) % s.table.size()) {
        auto& slot = s.table[i];
        if (slot.name == name || !slot.name) { slot.name = name; slot.ns += ns; slot.calls += 1; return; }
    }
}

// Time spent inside one native call (an import or a Direct3D method): counted for the frame on the main thread, by name when one is given.
class NativeScope {
public:
    explicit NativeScope(const char* name) : name_(name), start_(enabled() && on_main_thread() ? now_ns() : 0) {}
    ~NativeScope() {
        if (!start_) return;
        const uint64_t spent = now_ns() - start_;
        State& s = state();
        s.ns[native] += spent;
        s.calls[native] += 1;
        if (name_) note_call(name_, spent);
    }

private:
    const char* name_;
    uint64_t start_;
};
// A call already timed by an outer NativeScope, attributed by a more precise name (a Direct3D method inside the method dispatch).
class NamedScope {
public:
    explicit NamedScope(const char* name) : name_(name), start_(enabled() && on_main_thread() ? now_ns() : 0) {}
    ~NamedScope() { if (start_) note_call(name_, now_ns() - start_); }

private:
    const char* name_;
    uint64_t start_;
};

// Time spent by the calling thread in one kind of call: counted for the frame when it is the main thread, apart for reads of other threads.
class Scope {
public:
    explicit Scope(Kind kind, uint32_t bytes = 0) : kind_(kind), bytes_(bytes), start_(enabled() ? now_ns() : 0) {}
    ~Scope() {
        if (!start_) return;
        State& s = state();
        const uint64_t spent = now_ns() - start_;
        if (std::this_thread::get_id() == s.main_thread.load(std::memory_order_relaxed)) {
            s.ns[kind_] += spent;
            s.calls[kind_] += 1;
            if (kind_ == read) s.read_bytes += bytes_;
        } else if (kind_ == read) {
            s.other_read_ns += spent;
            s.other_read_bytes += bytes_;
            s.other_reads += 1;
        }
    }
    void bytes(uint32_t n) { bytes_ = n; }

private:
    Kind kind_;
    uint32_t bytes_;
    uint64_t start_;
};

// Called by Present after the frame was handed over (on the presenting thread) with the guest instructions that thread has run so far.
inline void end_frame(uint64_t instructions) {
    if (!enabled()) return;
    State& s = state();
    const uint64_t t = now_ns();
    s.main_thread.store(std::this_thread::get_id(), std::memory_order_relaxed);
    if (!s.last_frame_ns) { s.last_frame_ns = s.start_ns = t; s.last_instructions = instructions; return; }
    const double ms = double(t - s.last_frame_ns) / 1e6;
    const uint64_t ran = instructions - s.last_instructions;
    std::array<double, 64> sorted = s.recent;
    const size_t have = size_t(std::min<uint64_t>(s.frame, sorted.size()));
    std::sort(sorted.begin(), sorted.begin() + long(have));
    const double median = have ? sorted[have / 2] : ms;
    auto take = [&](Kind k) { return double(s.ns[k].exchange(0)) / 1e6; };
    auto count = [&](Kind k) { return s.calls[k].exchange(0); };
    const double read_ms = take(read), wait_ms = take(wait), sleep_ms = take(sleep), present_ms = take(present), native_ms = take(native);
    const uint64_t reads = count(read), waits = count(wait), sleeps = count(sleep), natives = count(native);
    count(present);
    s.window_native_ns += uint64_t(native_ms * 1e6);
    s.window_instructions += ran;
    const uint64_t bytes = s.read_bytes.exchange(0);
    const double other_ms = double(s.other_read_ns.exchange(0)) / 1e6;
    const uint64_t other_bytes = s.other_read_bytes.exchange(0), other_reads = s.other_reads.exchange(0);
    const bool slow = have >= 16 && ms >= 25.0 && ms > 2.0 * median;
    if (slow)
        std::fprintf(stderr,
                     "frame trace: SLOW frame %llu at %.3f s: %.1f ms (median %.1f): guest %.1f M instructions, native calls %llu (%.1f ms), reads %llu (%.1f ms, %llu KB), "
                     "waits %llu (%.1f ms), sleeps %llu (%.1f ms), present %.1f ms; other threads' reads %llu (%.1f ms, %llu KB)\n",
                     static_cast<unsigned long long>(s.frame), double(t - s.start_ns) / 1e9, ms, median, double(ran) / 1e6, static_cast<unsigned long long>(natives),
                     native_ms, static_cast<unsigned long long>(reads),
                     read_ms, static_cast<unsigned long long>(bytes / 1024), static_cast<unsigned long long>(waits), wait_ms, static_cast<unsigned long long>(sleeps),
                     sleep_ms, present_ms, static_cast<unsigned long long>(other_reads), other_ms, static_cast<unsigned long long>(other_bytes / 1024));
    s.recent[s.frame % s.recent.size()] = ms;
    ++s.frame;
    s.window_ns += t - s.last_frame_ns;
    ++s.window_frames;
    s.window_slow += slow ? 1 : 0;
    s.window_max = std::max(s.window_max, ms);
    if (s.window_ns >= 10'000'000'000ull) {
        const double frames = double(std::max<uint64_t>(s.window_frames, 1));
        std::fprintf(stderr,
                     "frame trace: last %.1f s: %llu frames, %.1f fps, slowest %.1f ms, %llu slow frame(s); per frame %.2f ms, of it native calls %.2f ms, "
                     "the rest (guest code) %.2f ms, %.1f M guest instructions\n",
                     double(s.window_ns) / 1e9, static_cast<unsigned long long>(s.window_frames), double(s.window_frames) * 1e9 / double(s.window_ns), s.window_max,
                     static_cast<unsigned long long>(s.window_slow), double(s.window_ns) / 1e6 / frames, double(s.window_native_ns) / 1e6 / frames,
                     double(s.window_ns - std::min(s.window_ns, s.window_native_ns)) / 1e6 / frames, double(s.window_instructions) / 1e6 / frames);
        // the busiest calls of the window, by time
        std::array<State::Call, 12> top{};
        for (auto& slot : s.table) {
            if (!slot.name || !slot.calls) continue;
            auto worst = std::min_element(top.begin(), top.end(), [](const State::Call& a, const State::Call& b) { return a.ns < b.ns; });
            if (slot.ns > worst->ns) *worst = slot;
            slot.ns = slot.calls = 0;
        }
        std::sort(top.begin(), top.end(), [](const State::Call& a, const State::Call& b) { return a.ns > b.ns; });
        std::fprintf(stderr, "frame trace: top calls per frame:");
        for (const auto& call : top)
            if (call.name) std::fprintf(stderr, " %s %.3f ms/%.0f", call.name, double(call.ns) / 1e6 / frames, double(call.calls) / frames);
        std::fputc('\n', stderr);
        s.window_ns = s.window_frames = s.window_slow = s.window_native_ns = s.window_instructions = 0;
        s.window_max = 0;
    }
    s.last_frame_ns = t;
    s.last_instructions = instructions;
}

}  // namespace nfsu2raw::frame_trace
