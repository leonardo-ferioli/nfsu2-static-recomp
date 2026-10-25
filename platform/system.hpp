// Platform API: what the machine is. Shaped like NUE's nue_system_get_info / nue_system_get_memory (include/nue/system.h): processor count and
// features, page size and memory, so GetSystemInfo, GlobalMemoryStatus, GetVersionEx and IsProcessorFeaturePresent are answered from here
// ("reports are shaped to what the guest expects": the Win32 layer decides which Windows it claims to be).
#pragma once
#include "platform/types.hpp"
#include <string>

namespace nfsu2::platform {

struct SystemInfo {
    uint32_t logical_processors = 1;
    uint32_t page_size = 4096;
    uint32_t allocation_granularity = 65536;
    uint64_t total_memory = 0, available_memory = 0;
    uint64_t total_virtual = 0, available_virtual = 0;   // address space of the process (a 32-bit guest sees at most 2 or 4 GiB)
    bool sse = true, sse2 = true, sse3 = false, ssse3 = false, sse41 = false, sse42 = false, avx = false, mmx = true, cmpxchg8b = true, rdtsc = true;
    std::string cpu_vendor, cpu_name;
    std::string os_name;
};

class System {
public:
    virtual ~System() = default;
    virtual SystemInfo info() = 0;                       // cheap; memory numbers refreshed at each call
};

}  // namespace nfsu2::platform
