// The port's guest::Memory (guest_memory.hpp, docs/MEMORY_MODEL_64.md) for the DirectSound glue and its tests. Windows host.
//
// Every conversion between a guest address and a host pointer goes through guest::to_host / guest::to_guest, so one implementation serves both
// models: on today's 32-bit host (NFSU2_GUEST_IDENTITY) the two are the same number and allocation comes from a private heap; with an arena base set
// (guest::set_arena_base, the 4 GiB range of the 64-bit model) allocation comes from a window inside the arena (committed on first use, first-fit with
// coalescing) because a Windows heap block would not be a guest address. Stage 4's arena allocator replaces the window, not the interface.
#pragma once
#include <cstdint>
#include <map>
#include <mutex>

#include "guest_memory.hpp"

namespace nfsu2::platform::audio {

class PortGuestMemory final : public nfsu2::guest::Memory {
public:
    // `window_base`/`window_bytes`: the guest address range used for allocations when guest != host (ignored on the identity host).
    explicit PortGuestMemory(uint32_t window_base = 0xF0000000u, uint32_t window_bytes = 8u << 20);
    ~PortGuestMemory() override;
    PortGuestMemory(const PortGuestMemory&) = delete;
    PortGuestMemory& operator=(const PortGuestMemory&) = delete;

    uint32_t alloc(uint32_t bytes) override;
    void free(uint32_t address) override;
    uint8_t* host(uint32_t address, uint32_t bytes) override;
    uint32_t address_of(const void* host_pointer) override;

    uint32_t live_allocations() const;

private:
    uint32_t window_alloc(uint32_t bytes);
    void window_free(uint32_t address, uint32_t bytes);

    uint32_t window_base_, window_bytes_;
    void* heap_ = nullptr;
    bool window_ready_ = false;
    mutable std::mutex mutex_;
    std::map<uint32_t, uint32_t> used_;     // guest address -> size (both models)
    std::map<uint32_t, void*> raw_;         // identity model: guest address -> the heap block it was aligned from
    std::map<uint32_t, uint32_t> free_;     // arena model: free ranges of the window (start -> size)
};

}  // namespace nfsu2::platform::audio
