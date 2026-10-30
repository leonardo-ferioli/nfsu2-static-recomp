// The guest's address space on a 64-bit host (guest_arena.hpp): a reserved range with a software page table. The host part is five calls (reserve,
// release, commit, decommit, clear an environment variable), for Windows (VirtualAlloc) and POSIX (mmap PROT_NONE + mprotect: Linux, Android, macOS,
// iOS). The canonical implementation is nue::legacy::ArenaMemory in the NUE engine; this file is the port's self-contained copy.
#include "guest_arena.hpp"

#ifndef NFSU2_GUEST_IDENTITY
#include <atomic>
#include <algorithm>
#include <bit>
#include <iterator>
#include <map>
#include <mutex>
#include <vector>
#include <cstdlib>
#include <cstring>

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#endif

namespace nfsu2::guest {

uint8_t* g_arena_base = nullptr;
uint64_t g_arena_size = 0x100000000ull;
static AddressSpace* g_current = nullptr;
AddressSpace* current_address_space() { return g_current; }
void fault_not_in_arena(const void*) { __builtin_trap(); }

namespace {
constexpr uint32_t kPage = 0x1000;

#if defined(_WIN32)

// Reserve `size` bytes aligned to `alignment` (a power of two): VirtualAlloc2 with an address requirement when the system has it, otherwise
// reserve twice the size, release, and re-reserve at the aligned address inside it (a small race against other threads allocating).
uint8_t* reserve_aligned(uint64_t size, uint64_t alignment) {
    using VirtualAlloc2Fn = PVOID(WINAPI*)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, MEM_EXTENDED_PARAMETER*, ULONG);
    static const VirtualAlloc2Fn virtual_alloc2 = [] {
        HMODULE kernelbase = LoadLibraryA("kernelbase.dll");
        return kernelbase ? reinterpret_cast<VirtualAlloc2Fn>(GetProcAddress(kernelbase, "VirtualAlloc2")) : nullptr;
    }();
    if (virtual_alloc2) {
        MEM_ADDRESS_REQUIREMENTS requirements{};
        requirements.Alignment = static_cast<SIZE_T>(alignment);
        MEM_EXTENDED_PARAMETER parameter{};
        parameter.Type = MemExtendedParameterAddressRequirements;
        parameter.Pointer = &requirements;
        if (void* base = virtual_alloc2(GetCurrentProcess(), nullptr, static_cast<SIZE_T>(size), MEM_RESERVE, PAGE_NOACCESS, &parameter, 1))
            return static_cast<uint8_t*>(base);
    }
    for (int attempt = 0; attempt < 8; ++attempt) {
        void* probe = VirtualAlloc(nullptr, static_cast<SIZE_T>(size + alignment), MEM_RESERVE, PAGE_NOACCESS);
        if (!probe) return nullptr;
        const uintptr_t aligned = (reinterpret_cast<uintptr_t>(probe) + alignment - 1) & ~(static_cast<uintptr_t>(alignment) - 1);
        VirtualFree(probe, 0, MEM_RELEASE);
        if (void* base = VirtualAlloc(reinterpret_cast<void*>(aligned), static_cast<SIZE_T>(size), MEM_RESERVE, PAGE_NOACCESS)) return static_cast<uint8_t*>(base);
    }
    return nullptr;
}
void os_release(uint8_t* base, uint64_t) { VirtualFree(base, 0, MEM_RELEASE); }
bool os_commit(uint8_t* at, uint64_t bytes) { return VirtualAlloc(at, static_cast<SIZE_T>(bytes), MEM_COMMIT, PAGE_READWRITE) != nullptr; }
// The guest pages [at, at + bytes) are no longer committed: Windows decommits them (they read as zeros once committed again).
bool os_decommit(uint8_t* at, uint64_t bytes, const std::vector<uint16_t>&, uint64_t) { return VirtualFree(at, static_cast<SIZE_T>(bytes), MEM_DECOMMIT) != 0; }
void os_clear_environment(const char* name) {
    std::vector<char> clear(std::strlen(name) + 2);
    std::strcpy(clear.data(), name);
    std::strcat(clear.data(), "=");
    _putenv(clear.data());
}
#else
// POSIX: the reservation is PROT_NONE and never backed; a commit makes the host pages read-write (the guest's 4 KiB protections stay in the software
// table, as on Windows). A host page can be 16 KiB (Android, Apple): it is committed whole, and a decommit of part of it clears the guest pages instead.
uint64_t host_page() { static const uint64_t size = uint64_t(sysconf(_SC_PAGESIZE)); return size; }
uint8_t* reserve_aligned(uint64_t size, uint64_t alignment) {
    void* probe = mmap(nullptr, size + alignment, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (probe == MAP_FAILED) return nullptr;
    const uintptr_t start = reinterpret_cast<uintptr_t>(probe), aligned = (start + alignment - 1) & ~(static_cast<uintptr_t>(alignment) - 1);
    if (aligned > start) munmap(probe, aligned - start);                                   // keep exactly [aligned, aligned + size)
    const uintptr_t tail = aligned + size, end = start + size + alignment;
    if (end > tail) munmap(reinterpret_cast<void*>(tail), end - tail);
    return reinterpret_cast<uint8_t*>(aligned);
}
void os_release(uint8_t* base, uint64_t size) { munmap(base, size); }
bool os_commit(uint8_t* at, uint64_t bytes) {
    const uint64_t page = host_page();
    const uintptr_t begin = reinterpret_cast<uintptr_t>(at) & ~(page - 1), end = (reinterpret_cast<uintptr_t>(at) + bytes + page - 1) & ~(page - 1);
    return mprotect(reinterpret_cast<void*>(begin), end - begin, PROT_READ | PROT_WRITE) == 0;
}
// `pages` is the guest page table after the decommit and `first` the guest page `at` starts at: host pages with no committed guest page left are
// returned to the system; the rest of the range is cleared so that it reads as zeros when it is committed again, as on Windows.
bool os_decommit(uint8_t* at, uint64_t bytes, const std::vector<uint16_t>& pages, uint64_t first) {
    std::memset(at, 0, static_cast<size_t>(bytes));
    const uint64_t page = host_page(), per_host = std::max<uint64_t>(1, page / kPage);
    const uint8_t* base = at - first * kPage;
    for (uint64_t guest = first - first % per_host; guest * kPage < first * kPage + bytes; guest += per_host) {
        bool in_use = false;
        for (uint64_t g = guest; g < guest + per_host && g < pages.size(); ++g) in_use |= pages[g] != 0;
        if (in_use) continue;
        void* host = const_cast<uint8_t*>(base + guest * kPage);
        madvise(host, page, MADV_DONTNEED);
        mprotect(host, page, PROT_NONE);
    }
    return true;
}
void os_clear_environment(const char* name) { unsetenv(name); }
#endif

class Arena final : public AddressSpace {
public:
    Arena(uint8_t* base, const ArenaConfig& config) : base_(base), config_(config), pages_(config.arena_size / kPage, 0) {
        free_[config.alloc_begin] = config.alloc_end - config.alloc_begin;
        g_current = this;
    }
    ~Arena() override {
        if (g_current == this) g_current = nullptr;
        if (g_arena_base == base_) { g_arena_base = nullptr; g_arena_size = 0x100000000ull; }
        os_release(base_, config_.arena_size);
    }

    uint8_t* base() const { return base_; }

    uint32_t alloc_aligned(uint32_t bytes, uint32_t alignment) override {
        alignment = std::max<uint32_t>(16, std::bit_ceil(std::max<uint32_t>(alignment, 1)));
        const uint64_t size = (std::max<uint64_t>(bytes, 1) + 15) & ~uint64_t(15);
        std::lock_guard lock(mutex_);
        for (auto it = free_.begin(); it != free_.end(); ++it) {
            const uint64_t start = (static_cast<uint64_t>(it->first) + alignment - 1) & ~(static_cast<uint64_t>(alignment) - 1);
            if (start + size > static_cast<uint64_t>(it->first) + it->second) continue;
            const uint32_t block_begin = it->first, block_size = it->second;
            if (!commit_locked(static_cast<uint32_t>(start), static_cast<uint32_t>(size), kPageReadWrite)) return 0;
            free_.erase(it);
            if (start > block_begin) free_[block_begin] = static_cast<uint32_t>(start - block_begin);
            const uint64_t end = start + size, block_end = static_cast<uint64_t>(block_begin) + block_size;
            if (end < block_end) free_[static_cast<uint32_t>(end)] = static_cast<uint32_t>(block_end - end);
            allocations_[static_cast<uint32_t>(start)] = static_cast<uint32_t>(size);
            std::memset(base_ + start, 0, static_cast<size_t>(size));
            return static_cast<uint32_t>(start);
        }
        return 0;
    }

    void free(uint32_t address) override {
        std::lock_guard lock(mutex_);
        const auto found = allocations_.find(address);
        if (found == allocations_.end()) return;
        uint32_t begin = address, size = found->second;
        allocations_.erase(found);
        auto next = free_.lower_bound(begin);                                   // merge with the neighbours
        if (next != free_.end() && begin + size == next->first) { size += next->second; next = free_.erase(next); }
        if (next != free_.begin()) {
            auto previous = std::prev(next);
            if (previous->first + previous->second == begin) { begin = previous->first; size += previous->second; free_.erase(previous); }
        }
        free_[begin] = size;
    }

    // No lock: the host reaches guest memory through here on every call the game makes (the return address, the arguments the layers read); the page table is
    // written with atomic stores under the lock, after the host commit and before the host decommit, so a page seen committed here is committed.
    uint8_t* host(uint32_t address, uint32_t bytes) override { return mapped_locked(address, bytes) ? base_ + address : nullptr; }
    uint32_t address_of(const void* host_pointer) override {
        const uint8_t* p = static_cast<const uint8_t*>(host_pointer);
        return p >= base_ && p < base_ + config_.arena_size ? static_cast<uint32_t>(p - base_) : 0;
    }
    bool readable(uint32_t address, uint32_t bytes) override { return access_ok(address, bytes, false); }
    bool writable(uint32_t address, uint32_t bytes) override { return access_ok(address, bytes, true); }
    uint32_t protection(uint32_t address) override {
        std::lock_guard lock(mutex_);
        return address < config_.arena_size ? pages_[address / kPage] : 0;
    }
    uint32_t protect(uint32_t address, uint32_t bytes, uint32_t page_protection) override {
        std::lock_guard lock(mutex_);
        if (!mapped_locked(address, std::max<uint32_t>(bytes, 1)) || !valid_protection(page_protection)) return 0;
        const uint32_t old = pages_[address / kPage];
        for (uint64_t page = address / kPage; page <= (static_cast<uint64_t>(address) + std::max<uint32_t>(bytes, 1) - 1) / kPage; ++page) set_page(page, page_protection);
        return old;
    }
    bool commit(uint32_t address, uint32_t bytes, uint32_t page_protection) override {
        std::lock_guard lock(mutex_);
        if (!valid_protection(page_protection) || !commit_locked(address, bytes, page_protection)) return false;
        carve_locked(address, bytes);
        return true;
    }
    bool decommit(uint32_t address, uint32_t bytes) override {
        std::lock_guard lock(mutex_);
        if (!bytes || static_cast<uint64_t>(address) + bytes > config_.arena_size) return false;
        const uint32_t first = address / kPage;
        const uint32_t last = static_cast<uint32_t>((static_cast<uint64_t>(address) + bytes - 1) / kPage);
        for (uint32_t page = first; page <= last; ++page) set_page(page, 0);
        return os_decommit(base_ + static_cast<uint64_t>(first) * kPage, static_cast<uint64_t>(last - first + 1) * kPage, pages_, first);
    }
    bool identity() const override { return false; }

private:
    // A range committed at a fixed address (the image, the stack, a loader's heap) leaves the allocator's free list: it must never be handed out again.
    void carve_locked(uint32_t address, uint32_t bytes) {
        const uint64_t begin = static_cast<uint64_t>(address) & ~uint64_t(kPage - 1);
        const uint64_t end = (static_cast<uint64_t>(address) + bytes + kPage - 1) & ~uint64_t(kPage - 1);
        for (auto it = free_.begin(); it != free_.end();) {
            const uint64_t block_begin = it->first, block_end = block_begin + it->second;
            if (block_end <= begin || block_begin >= end) { ++it; continue; }
            it = free_.erase(it);
            if (block_begin < begin) free_[static_cast<uint32_t>(block_begin)] = static_cast<uint32_t>(begin - block_begin);
            if (block_end > end) free_[static_cast<uint32_t>(end)] = static_cast<uint32_t>(block_end - end);
            it = free_.lower_bound(static_cast<uint32_t>(std::min<uint64_t>(block_end, 0xffffffffull)));   // the pieces are already handled
        }
    }
    static bool valid_protection(uint32_t p) {
        const uint32_t base = p & ~uint32_t(kPageGuard);
        if ((p & kPageGuard) && base == kPageNoAccess) return false;
        return base == kPageNoAccess || base == kPageReadOnly || base == kPageReadWrite || base == kPageWriteCopy || base == kPageExecute ||
               base == kPageExecuteRead || base == kPageExecuteReadWrite || base == kPageExecuteWriteCopy;
    }
    // The page table is read without the lock by host(): writes are atomic stores (made under the lock), reads atomic loads.
    void set_page(uint64_t page, uint32_t value) { std::atomic_ref<uint16_t>(pages_[page]).store(static_cast<uint16_t>(value), std::memory_order_release); }
    uint16_t page_value(uint64_t page) const { return std::atomic_ref<uint16_t>(const_cast<uint16_t&>(pages_[page])).load(std::memory_order_acquire); }
    // Every page of the range committed (safe with or without the lock).
    bool mapped_locked(uint32_t address, uint32_t bytes) const {
        if (static_cast<uint64_t>(address) + bytes > config_.arena_size) return false;
        const uint64_t last = bytes ? (static_cast<uint64_t>(address) + bytes - 1) / kPage : address / kPage;
        for (uint64_t page = address / kPage; page <= last; ++page)
            if (!page_value(page)) return false;
        return true;
    }
    bool access_ok(uint32_t address, uint32_t bytes, bool write) {
        std::lock_guard lock(mutex_);
        if (!mapped_locked(address, bytes)) return false;
        const uint64_t last = bytes ? (static_cast<uint64_t>(address) + bytes - 1) / kPage : address / kPage;
        for (uint64_t page = address / kPage; page <= last; ++page) {
            const uint32_t p = pages_[page];
            if (p & kPageGuard) return false;
            const uint32_t base = p;
            const bool can_read = base != kPageNoAccess;
            const bool can_write = base == kPageReadWrite || base == kPageWriteCopy || base == kPageExecuteReadWrite || base == kPageExecuteWriteCopy;
            if (write ? !can_write : !can_read) return false;
        }
        return true;
    }
    bool commit_locked(uint32_t address, uint32_t bytes, uint32_t page_protection) {
        if (!bytes || static_cast<uint64_t>(address) + bytes > config_.arena_size) return false;
        const uint32_t first = address / kPage;
        const uint32_t last = static_cast<uint32_t>((static_cast<uint64_t>(address) + bytes - 1) / kPage);
        for (uint32_t page = first; page <= last;) {                            // commit each run of uncommitted pages on the host once
            if (pages_[page]) { ++page; continue; }
            uint32_t end = page;
            while (end + 1 <= last && !pages_[end + 1]) ++end;
            if (!os_commit(base_ + static_cast<uint64_t>(page) * kPage, static_cast<uint64_t>(end - page + 1) * kPage)) return false;
            for (uint32_t p = page; p <= end; ++p) set_page(p, page_protection);
            page = end + 1;
        }
        return true;
    }

    uint8_t* base_;
    ArenaConfig config_;
    std::vector<uint16_t> pages_;                     // per 4 KiB guest page: 0 = not committed, otherwise the PAGE_* protection
    std::map<uint32_t, uint32_t> free_, allocations_; // start -> size
    std::mutex mutex_;
};
}  // namespace

ArenaConfig arena_config(uint64_t arena_size) {
    ArenaConfig config;
    config.arena_size = arena_size;
    config.alloc_end = arena_size >= 0x100000000ull ? 0xE0000000u : static_cast<uint32_t>(arena_size - 0x01000000ull);   // keep the top 16 MiB free below a smaller arena
    return config;
}
ArenaConfig arena_config_from_environment() {
    uint64_t mebibytes = 2048;
    if (const char* text = std::getenv("NFSU2_ARENA_MIB")) {
        mebibytes = std::strtoull(text, nullptr, 10);
        os_clear_environment("NFSU2_ARENA_MIB");                                     // the guest reads the environment block: the switch must not be part of it
    }
    return arena_config(mebibytes * 0x100000ull);
}

std::unique_ptr<AddressSpace> create_arena(const ArenaConfig& config, const char** error) {
    auto fail = [&](const char* text) { if (error) *error = text; return std::unique_ptr<AddressSpace>(); };
    if (config.arena_size < 0x01000000ull || config.arena_size > 0x100000000ull || config.alloc_begin >= config.alloc_end || config.alloc_end > config.arena_size) return fail("bad arena configuration");
    if (g_arena_base) return fail("an arena already exists in this process");
    uint8_t* base = reserve_aligned(config.arena_size, 0x100000000ull);
    if (!base) return fail("the host refused the address space reservation");
    g_arena_base = base;
    g_arena_size = config.arena_size;
    return std::make_unique<Arena>(base, config);
}

}  // namespace nfsu2::guest
#endif
