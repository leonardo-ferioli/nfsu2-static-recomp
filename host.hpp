#pragma once
// The host processor as the translated program sees it: one place for everything that differs between x86 and arm64 hosts.
//
//   NFSU2_ISA_X86 / NFSU2_ISA_ARM64   which instruction set the program is compiled for (one of them)
//   NFSU2_X87_HOST_ASM                the host has an x87 FPU the generated code and the reference helpers may use (x86 only);
//                                     elsewhere the x87 is virtual (x87v.hpp) or software (x87_soft.hpp)
//
// cpuid, the cycle counter, MXCSR and the x87 control word have the same names on every host (nfsu2raw::host::*): on x86 they are
// the instructions, elsewhere a fixed CPU description, a monotonic counter and plain state.
#include <chrono>
#include <cstdint>

#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#define NFSU2_ISA_X86 1
#define NFSU2_X87_HOST_ASM 1
#include <xmmintrin.h>
#if defined(_MSC_VER) || defined(_WIN32)
#include <intrin.h>
#else
#include <cpuid.h>
#include <x86intrin.h>
#endif
#elif defined(__aarch64__) || defined(_M_ARM64)
#define NFSU2_ISA_ARM64 1
#else
#error "unsupported host processor: x86, x86-64 or arm64 are supported"
#endif

namespace nfsu2raw::host {
// CPUID leaf/sub-leaf into eax, ebx, ecx, edx. Non-x86 hosts report a fixed 2004-era processor that the game accepts: GenuineIntel,
// family 6, with FPU, TSC, CMOV, MMX, FXSR, SSE and SSE2 and nothing newer (no 3DNow!, no SSE3).
inline void cpuid(uint32_t leaf, uint32_t sub, uint32_t out[4]) {
#if defined(NFSU2_ISA_X86)
#if defined(_MSC_VER) || defined(_WIN32)
    int r[4]; __cpuidex(r, int(leaf), int(sub)); for (int i = 0; i < 4; ++i) out[i] = uint32_t(r[i]);
#else
    __cpuid_count(leaf, sub, out[0], out[1], out[2], out[3]);
#endif
#else
    (void)sub;
    out[0] = out[1] = out[2] = out[3] = 0;
    if (leaf == 0) { out[0] = 2; out[1] = 0x756e6547; out[3] = 0x49656e69; out[2] = 0x6c65746e; }                 // "GenuineIntel"
    else if (leaf == 1) { out[0] = 0x00000f29; out[3] = (1u << 0) | (1u << 4) | (1u << 8) | (1u << 15) | (1u << 23) | (1u << 24) | (1u << 25) | (1u << 26); }
    else if (leaf == 0x80000000u) out[0] = 0x80000001u;
#endif
}
// The time stamp counter (guest RDTSC). Elsewhere: nanoseconds of a monotonic clock, scaled to about 3 GHz.
inline uint64_t cycle_counter() {
#if defined(NFSU2_ISA_X86)
    return __rdtsc();
#else
    return uint64_t(std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count()) * 3;
#endif
}
// SSE control/status register and x87 control word of the host (the generated code mirrors the guest's values into them).
#if defined(NFSU2_ISA_X86)
inline uint32_t mxcsr_get() { return _mm_getcsr(); }
inline void mxcsr_set(uint32_t v) { _mm_setcsr(v); }
inline uint16_t x87_control_get() { uint16_t cw; asm volatile("fnstcw %0" : "=m"(cw)); return cw; }
inline void x87_control_set(uint16_t cw) { asm volatile("fldcw %0" ::"m"(cw)); }
#else
inline uint32_t& mxcsr_state() { static thread_local uint32_t v = 0x1f80; return v; }
inline uint16_t& x87_control_state() { static thread_local uint16_t v = 0x27f; return v; }
inline uint32_t mxcsr_get() { return mxcsr_state(); }
inline void mxcsr_set(uint32_t v) { mxcsr_state() = v; }
inline uint16_t x87_control_get() { return x87_control_state(); }
inline void x87_control_set(uint16_t cw) { x87_control_state() = cw; }
#endif
}
