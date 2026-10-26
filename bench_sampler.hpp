#pragma once
// Instruction-pointer sampler for console benchmarks: a thread suspends the measured thread every half millisecond, records where
// it is, and at the end prints the hottest host symbols (resolved with the linker map written next to the executable, <exe>.map)
// and the modules outside the executable. Usage: { BenchSampler s("label"); ...work...; }  (enabled by NFSU2_BENCH_SAMPLE=1).
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <psapi.h>
#include <timeapi.h>
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

class BenchSampler {
public:
    explicit BenchSampler(const char* label) : label_(label) {
        if (!GetEnvironmentVariableA("NFSU2_BENCH_SAMPLE", nullptr, 0)) return;
        HANDLE self = nullptr;
        DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &self, 0, FALSE, DUPLICATE_SAME_ACCESS);
        target_ = self;
        thread_ = std::thread([this] {
            timeBeginPeriod(1);
            while (!stop_.load()) {
                if (SuspendThread(target_) != DWORD(-1)) {
                    CONTEXT ctx{};
                    ctx.ContextFlags = CONTEXT_CONTROL;
                    if (GetThreadContext(target_, &ctx)) samples_.push_back(uint32_t(ctx.Eip));
                    ResumeThread(target_);
                }
                // ~20 kHz: a short spin (sleeps are 1 ms at best); the sampler runs on another core.
                LARGE_INTEGER f, t0, t;
                QueryPerformanceFrequency(&f);
                QueryPerformanceCounter(&t0);
                do { YieldProcessor(); QueryPerformanceCounter(&t); } while ((t.QuadPart - t0.QuadPart) * 20000 < f.QuadPart && !stop_.load());
            }
        });
    }
    ~BenchSampler() {
        if (!target_) return;
        stop_ = true;
        thread_.join();
        timeEndPeriod(1);
        CloseHandle(target_);
        report();
    }

private:
    void report() {
        char exe[MAX_PATH];
        GetModuleFileNameA(nullptr, exe, MAX_PATH);
        std::string map = exe;
        map = map.substr(0, map.size() - 4) + ".map";
        std::vector<std::pair<uint32_t, std::string>> syms;
        std::ifstream in(map);
        std::string line;
        bool publics = false;
        while (std::getline(in, line)) {
            if (line.find("Publics by Value") != std::string::npos) { publics = true; continue; }
            if (!publics) continue;
            std::istringstream s(line);
            std::string where, name, va;
            if (!(s >> where >> name >> va) || where.find(':') == std::string::npos) continue;
            const uint32_t v = uint32_t(std::strtoull(va.c_str(), nullptr, 16));
            if (v) syms.push_back({v, name});
        }
        std::sort(syms.begin(), syms.end());
        std::map<std::string, unsigned> hits;
        const bool fine = GetEnvironmentVariableA("NFSU2_BENCH_SAMPLE_FINE", nullptr, 0) != 0;   // 16-byte buckets inside symbols
        const uintptr_t base = uintptr_t(GetModuleHandleA(nullptr));
        MODULEINFO mi{};
        GetModuleInformation(GetCurrentProcess(), GetModuleHandleA(nullptr), &mi, sizeof(mi));
        for (uint32_t eip : samples_) {
            std::string key;
            if (eip >= base && eip < base + mi.SizeOfImage && !syms.empty()) {
                auto it = std::upper_bound(syms.begin(), syms.end(), std::make_pair(eip, std::string("\x7f")));
                key = it == syms.begin() ? "?" : std::prev(it)->second;
                if (fine && it != syms.begin()) {
                    char off[32];
                    std::snprintf(off, sizeof(off), "+0x%x", unsigned(eip - std::prev(it)->first) & ~0xfu);
                    key += off;
                }
            } else {
                HMODULE m = nullptr;
                char name[MAX_PATH] = "?";
                if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                       reinterpret_cast<LPCSTR>(uintptr_t(eip)), &m)) {
                    GetModuleBaseNameA(GetCurrentProcess(), m, name, MAX_PATH);
                    char off[32];
                    std::snprintf(off, sizeof(off), "+0x%x", unsigned(eip - uintptr_t(m)) & ~0xfu);
                    key = std::string(name) + off;
                } else key = "(no module)";
            }
            ++hits[key];
        }
        std::vector<std::pair<unsigned, std::string>> top;
        for (auto& h : hits) top.push_back({h.second, h.first});
        std::sort(top.rbegin(), top.rend());
        std::printf("-- samples of %s: %zu\n", label_, samples_.size());
        for (size_t i = 0; i < top.size() && i < 25; ++i)
            std::printf("  %5.1f%%  %s\n", 100.0 * top[i].first / std::max<size_t>(samples_.size(), 1), top[i].second.c_str());
    }
    const char* label_;
    HANDLE target_ = nullptr;
    std::thread thread_;
    std::atomic<bool> stop_{false};
    std::vector<uint32_t> samples_;
};
