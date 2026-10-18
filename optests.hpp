#pragma once
// Operation-level differential test: reference lowering (generate.py) vs fast lowering (generate_fast.py).
#include "fast.hpp"
namespace nfsu2raw {
struct OpCase{const char* name;uint32_t pc;uint32_t(*ref)(Cpu&);uint32_t(*fast)(Cpu&);unsigned ptr_count;uint32_t ptr_regs[2];bool memory;};
extern const OpCase op_cases[];
extern const unsigned op_case_count;
}
