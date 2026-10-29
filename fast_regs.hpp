#pragma once
// Support for the register-parameter lowering of the fast backend (tools/gen_regs.py, generate_fast.py --reg-params):
// the guest's general registers travel as function arguments between guest superblocks.
#include "fast.hpp"
#include "speed.hpp"
namespace nfsu2raw {
#if defined(__x86_64__) || defined(_M_X64) || defined(__aarch64__) || defined(_M_ARM64)
// 64-bit hosts (x86-64, arm64): preserve_none, so every argument (eight registers, the processor, the instruction budget) travels in
// registers and a musttail call is a plain jump.
#define PN __attribute__((preserve_none))
#else
// 32-bit: regcall passes the first five integer arguments in EAX, ECX, EDX, EDI and ESI.
#define PN __attribute__((regcall))
#endif
constexpr s32 REG_BUDGET = 1 << 16;   // guest instructions executed before control returns to the dispatch loop
}
