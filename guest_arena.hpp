#pragma once
// The guest's address space on a 64-bit host: a reserved arena, host = base + guest address (docs/MEMORY_MODEL_64.md, stage 2).
//
// `guest::AddressSpace` extends the narrow `guest::Memory` that the libraries use with what VirtualAlloc / VirtualProtect / VirtualQuery need:
// commit, decommit, protections in a 4 KiB software page table (the guest sees 4 KiB pages even on a 16 KiB host; the translated code reads and
// writes through plain pointers, so the table is consulted by the libraries, not enforced by the MMU). It mirrors the virtual functions of
// nue::legacy::GuestMemory (nue-engine, include/nue_legacy/guest_memory.hpp, ABI 1) so that implementation can replace this one: this is the
// port's own, self-contained copy; the NUE one is canonical.
#include "guest_memory.hpp"
#include <memory>

namespace nfsu2::guest {

enum PageProtection : uint32_t {   // Win32 values: the guest asks in those terms
    kPageNoAccess = 0x01, kPageReadOnly = 0x02, kPageReadWrite = 0x04, kPageWriteCopy = 0x08,
    kPageExecute = 0x10, kPageExecuteRead = 0x20, kPageExecuteReadWrite = 0x40, kPageExecuteWriteCopy = 0x80, kPageGuard = 0x100
};

class AddressSpace : public Memory {
public:
    virtual bool readable(uint32_t address, uint32_t bytes) = 0;                          // IsBadReadPtr == FALSE: committed and the protection reads
    virtual bool writable(uint32_t address, uint32_t bytes) = 0;
    virtual uint32_t protection(uint32_t address) = 0;                                    // PAGE_* of the page, 0 when not committed (VirtualQuery)
    virtual uint32_t protect(uint32_t address, uint32_t bytes, uint32_t page_protection) = 0;   // old protection of the first page, 0 on failure
    virtual bool commit(uint32_t address, uint32_t bytes, uint32_t page_protection) = 0;  // VirtualAlloc(MEM_COMMIT) inside the address space
    virtual bool decommit(uint32_t address, uint32_t bytes) = 0;                          // VirtualFree(MEM_DECOMMIT)
    virtual bool identity() const = 0;                                                    // true when host(a) == a
    uint32_t alloc(uint32_t bytes) override { return alloc_aligned(bytes, 16); }
    virtual uint32_t alloc_aligned(uint32_t bytes, uint32_t alignment) = 0;               // zero filled, power-of-two alignment, 0 on failure
};

#ifndef NFSU2_GUEST_IDENTITY
struct ArenaConfig {
    uint64_t arena_size = 0x100000000ull;     // 4 GiB; smaller = masked arena (addresses at or above the size are unmapped)
    uint32_t alloc_begin = 0x10000000u;       // the allocator hands out [alloc_begin, alloc_end); the image (0x400000..) and low pages are placed by the loader
    uint32_t alloc_end = 0xE0000000u;
};

// Reserves the arena (aligned to 4 GiB when the size is 4 GiB), makes it the process' arena base (guest::set_arena_base) and returns the address space.
// nullptr when the host refuses the reservation; `error` then says why.
std::unique_ptr<AddressSpace> create_arena(const ArenaConfig& config, const char** error = nullptr);
#endif

}  // namespace nfsu2::guest
