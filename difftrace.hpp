#pragma once
// Differential-test instrumentation shared by the reference and fast backends (-DNFSU2_DIFF_TRACE).
// Both engines hash every executed instruction address and, whenever control leaves a 4 KiB page,
// the architectural register file (excluding the shadow EIP at 644..647). Equal hashes plus equal
// instruction counts mean identical control flow and identical register state at every page exit.
#include "runtime.hpp"

namespace nfsu2raw {
#ifdef NFSU2_DIFF_TRACE
struct DiffTrace {
    uint64_t pc_hash=1469598103934665603ull,reg_hash=1469598103934665603ull,instructions=0,exits=0;
    // Optional ring of the last exits for locating the first divergence.
    static constexpr unsigned ring=64;
    uint32_t last_exit[ring]{};
};
extern thread_local DiffTrace* diff_trace;
// NFSU2_DIFF_LOG_RANGE=first:last logs "index pc" for instructions in that range (to find a first divergence).
extern uint64_t diff_log_lo,diff_log_hi;
void diff_log(uint32_t pc,uint64_t index);
inline void diff_trace_pc(uint32_t pc){
    if(auto* t=diff_trace){
        if(__builtin_expect(t->instructions>=diff_log_lo && t->instructions<diff_log_hi,0))diff_log(pc,t->instructions);
        t->pc_hash=(t->pc_hash^pc)*1099511628211ull;++t->instructions;
    }
}
void diff_trace_exit(Cpu& c,uint32_t to_pc);
#endif
}
