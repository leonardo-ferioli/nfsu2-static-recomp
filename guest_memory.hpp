#pragma once
// The one place where a guest address (what the translated game holds in a register: 32 bits) meets a host pointer.
//
// Today (32-bit Windows host) the guest shares the process' address space: the host pointer is the guest address, so every conversion
// below compiles to nothing. On a 64-bit host the guest lives in an arena, a reserved 4 GiB range: host pointer = arena base + guest
// address. Code that turns a guest address into a pointer (or back) must use these functions and never `reinterpret_cast`, so that the
// two models are one switch (see docs/MEMORY_MODEL_64.md).
//
//   NFSU2_GUEST_IDENTITY   guest address == host address (the 32-bit host; defined automatically when pointers are 32 bits)
//   otherwise              arena model: set the base once with guest::set_arena_base() before any guest memory is touched
#include <cstddef>
#include <cstdint>

#if !defined(NFSU2_GUEST_IDENTITY) && UINTPTR_MAX == 0xffffffffu
#define NFSU2_GUEST_IDENTITY 1
#endif

namespace nfsu2::guest {

#ifdef NFSU2_GUEST_IDENTITY
inline constexpr bool identity = true;
inline void set_arena_base(void*) {}
inline uint8_t* arena_base() { return nullptr; }
inline void* to_host(uint32_t address) { return reinterpret_cast<void*>(static_cast<uintptr_t>(address)); }
inline uint32_t to_guest(const void* host) { return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(host)); }
inline bool is_guest(const void*) { return true; }
#else
inline constexpr bool identity = false;
extern uint8_t* g_arena_base;                       // start of the reserved 4 GiB range (4 GiB aligned)
inline void set_arena_base(void* base) { g_arena_base = static_cast<uint8_t*>(base); }
inline uint8_t* arena_base() { return g_arena_base; }
inline void* to_host(uint32_t address) { return g_arena_base + address; }
inline uint32_t to_guest(const void* host) { return static_cast<uint32_t>(static_cast<const uint8_t*>(host) - g_arena_base); }
inline bool is_guest(const void* host) { return static_cast<uint64_t>(static_cast<const uint8_t*>(host) - g_arena_base) <= 0xffffffffull; }
#endif

template <class T> inline T* ptr(uint32_t address) { return static_cast<T*>(to_host(address)); }

// Guest memory as a library (legacy_win32, legacy_dsound, the DirectInput model, the Direct3D 9 layer's Lock memory) needs it. A library
// never assumes a guest address is a host address; the port and NUE each provide one of these over their own memory.
class Memory {
public:
    virtual ~Memory() = default;
    virtual uint32_t alloc(uint32_t bytes) = 0;                     // zero-filled, 16-byte aligned, inside the guest address range; 0 on failure
    virtual void free(uint32_t address) = 0;
    virtual uint8_t* host(uint32_t address, uint32_t bytes) = 0;    // host pointer valid for `bytes` bytes, nullptr when not mapped
    virtual uint32_t address_of(const void* host_pointer) = 0;      // guest address of memory this object handed out (0 when foreign)
};

}  // namespace nfsu2::guest
