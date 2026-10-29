#pragma once
// x87 operations for native hook code (mods_anchor.cpp, mods_rendering.cpp): the guest's FPU stack as a hook sees it, on every host.
//
// With the host FPU (the default on x86) a hook runs between two translated x87 instructions on the same FPU, so it uses the instruction itself.
// With the virtual FPU (pages generated with --x87 double|soft80; every translation unit that includes this header must then be compiled
// with the same -DNFSU2_X87_VIRTUAL=1 [-DNFSU2_X87_SOFT80=1]) the guest's stack is in Cpu::regs and the hook works on that.
// All functions take the processor of the hook (Cpu&): no raw FPU instruction is needed in the hook code.
#include "runtime.hpp"
#if defined(NFSU2_X87_VIRTUAL)
#include "x87v.hpp"
#endif

namespace nfsu2raw {
#if defined(NFSU2_X87_VIRTUAL)
inline void x87_push_f32(Cpu& c, float v) { x87v::Fpu<x87v::Policy>::push(c.regs.data(), x87v::Policy::from32(std::bit_cast<uint32_t>(v))); }   // FLD m32
inline void x87_mul_f32(Cpu& c, float v) { x87v::insn<0xd8, 0x08>(c.regs.data(), &v); }                                                           // FMUL m32 (ST0 = ST0 * v)
inline void x87_add_f32(Cpu& c, float v) { x87v::insn<0xd8, 0x00>(c.regs.data(), &v); }                                                           // FADD m32
inline float x87_st0_f32(Cpu& c) { float v; x87v::insn<0xd9, 0x10>(c.regs.data(), &v); return v; }                                                // FST m32 (no pop)
inline float x87_pop_f32(Cpu& c) { float v; x87v::insn<0xd9, 0x18>(c.regs.data(), &v); return v; }                                                // FSTP m32
#else
inline void x87_push_f32(Cpu&, float v) { asm volatile("flds %0" ::"m"(v)); }
inline void x87_mul_f32(Cpu&, float v) { asm volatile("fmuls %0" ::"m"(v)); }
inline void x87_add_f32(Cpu&, float v) { asm volatile("fadds %0" ::"m"(v)); }
inline float x87_st0_f32(Cpu&) { float v; asm volatile("fsts %0" : "=m"(v)); return v; }
inline float x87_pop_f32(Cpu&) { float v; asm volatile("fstps %0" : "=m"(v)); return v; }
#endif
}
