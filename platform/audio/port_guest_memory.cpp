#include "platform/audio/port_guest_memory.hpp"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

#include <algorithm>

namespace nfsu2::platform::audio {

PortGuestMemory::PortGuestMemory(uint32_t window_base, uint32_t window_bytes) : window_base_(window_base), window_bytes_(window_bytes) {
    if (nfsu2::guest::identity) heap_ = HeapCreate(0, 0, 0);
}

PortGuestMemory::~PortGuestMemory() {
    if (heap_) HeapDestroy(heap_);
    // The window is committed memory inside an arena somebody else reserved: decommit it, never release the arena.
    if (window_ready_) VirtualFree(nfsu2::guest::to_host(window_base_), window_bytes_, MEM_DECOMMIT);
}

uint32_t PortGuestMemory::live_allocations() const {
    std::lock_guard lock(mutex_);
    return uint32_t(used_.size());
}

uint32_t PortGuestMemory::alloc(uint32_t bytes) {
    const uint32_t size = (std::max<uint32_t>(bytes, 1) + 15) & ~15u;
    std::lock_guard lock(mutex_);
    uint32_t address = 0;
    if (nfsu2::guest::identity) {
        void* raw = HeapAlloc(heap_, HEAP_ZERO_MEMORY, size_t(size) + 16);
        if (!raw) return 0;
        // Align inside the block; the pointer is turned into a guest address by the model's own conversion.
        const size_t slack = (16 - (nfsu2::guest::to_guest(raw) & 15u)) & 15u;
        void* aligned = static_cast<uint8_t*>(raw) + slack;
        address = nfsu2::guest::to_guest(aligned);
        raw_[address] = raw;
    } else {
        address = window_alloc(size);
        if (!address) return 0;
        std::fill_n(static_cast<uint8_t*>(nfsu2::guest::to_host(address)), size, uint8_t(0));
    }
    used_[address] = size;
    return address;
}

void PortGuestMemory::free(uint32_t address) {
    std::lock_guard lock(mutex_);
    auto it = used_.find(address);
    if (it == used_.end()) return;
    if (nfsu2::guest::identity) {
        auto r = raw_.find(address);
        if (r != raw_.end()) {
            HeapFree(heap_, 0, r->second);
            raw_.erase(r);
        }
    } else {
        window_free(address, it->second);
    }
    used_.erase(it);
}

uint8_t* PortGuestMemory::host(uint32_t address, uint32_t bytes) {
    // The address came from the guest: the whole range must be committed, accessible memory (and inside the guest address space).
    uint64_t cursor = address;
    uint64_t remaining = bytes ? bytes : 1;
    if (cursor + remaining > 0x100000000ull) return nullptr;
    while (remaining) {
        MEMORY_BASIC_INFORMATION info;
        const uint8_t* here = static_cast<const uint8_t*>(nfsu2::guest::to_host(uint32_t(cursor)));
        if (!VirtualQuery(here, &info, sizeof(info))) return nullptr;
        if (info.State != MEM_COMMIT || (info.Protect & (PAGE_NOACCESS | PAGE_GUARD))) return nullptr;
        const uint8_t* region_end = static_cast<const uint8_t*>(info.BaseAddress) + info.RegionSize;
        const uint64_t span = std::min<uint64_t>(uint64_t(region_end - here), remaining);
        if (span == 0) return nullptr;
        cursor += span;
        remaining -= span;
    }
    return static_cast<uint8_t*>(nfsu2::guest::to_host(address));
}

uint32_t PortGuestMemory::address_of(const void* host_pointer) {
    if (!nfsu2::guest::is_guest(host_pointer)) return 0;
    const uint32_t address = nfsu2::guest::to_guest(host_pointer);
    std::lock_guard lock(mutex_);
    auto it = used_.upper_bound(address);
    if (it == used_.begin()) return 0;
    --it;
    return address < it->first + it->second ? address : 0;   // only memory this object handed out
}

uint32_t PortGuestMemory::window_alloc(uint32_t size) {
    if (!window_ready_) {
        void* where = nfsu2::guest::to_host(window_base_);
        void* got = VirtualAlloc(where, window_bytes_, MEM_COMMIT, PAGE_READWRITE);   // the arena is normally reserved already
        if (!got) got = VirtualAlloc(where, window_bytes_, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
        if (got != where) return 0;
        free_[window_base_] = window_bytes_;
        window_ready_ = true;
    }
    for (auto it = free_.begin(); it != free_.end(); ++it) {   // first fit
        if (it->second < size) continue;
        const uint32_t start = it->first, left = it->second - size;
        free_.erase(it);
        if (left) free_[start + size] = left;
        return start;
    }
    return 0;
}

void PortGuestMemory::window_free(uint32_t address, uint32_t size) {
    auto next = free_.lower_bound(address);
    if (next != free_.end() && address + size == next->first) {   // merge with the following range
        size += next->second;
        next = free_.erase(next);
    }
    if (next != free_.begin()) {   // merge with the preceding range
        auto prev = std::prev(next);
        if (prev->first + prev->second == address) {
            prev->second += size;
            return;
        }
    }
    free_[address] = size;
}

}  // namespace nfsu2::platform::audio
