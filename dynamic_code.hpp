#pragma once
// Runtime P-code interpreter for code that exists only at run time.
//
// DECLARED DEPENDENCY. The game's audio engine loads relocatable x86 modules from its data files into the heap,
// relocates them and makes them executable (VirtualProtect with an execute protection). Such code is not part of
// SPEED2.EXE and cannot be translated ahead of time. Control that reaches an address inside a region registered
// this way is decoded at run time by Ghidra's SLEIGH engine (third_party/sleigh, driven by third_party/sleigh_spec/
// x86.sla) and interpreted operation by operation with the same semantics as the translated code. The original
// executable's .text is never decoded or interpreted: calls from interpreted code back into SPEED2.EXE addresses
// and into Windows imports return to the statically translated program.
#include "runtime.hpp"
#include <atomic>
#include <filesystem>
#include <functional>
#include <memory>
#include <mutex>
#include <vector>

namespace nfsu2raw {
struct VarnodeRef {
    enum Space : uint8_t { Const, Register, Unique, Ram } space = Const;
    uint32_t size = 0;
    uint64_t offset = 0;  // Unique offsets are compacted per instruction
};
struct InterpOp {
    int opcode = 0;  // SLEIGH OpCode value
    bool has_output = false;
    VarnodeRef output;
    std::vector<VarnodeRef> inputs;
};
struct DecodedInstruction {
    uint32_t address = 0, length = 0, unique_size = 0;
    uint8_t bytes[16] = {};
    std::vector<InterpOp> ops;
};

// ---- fast path ------------------------------------------------------------------------------------------------------
// An instruction pre-resolved for execution: operands are classified once (constant, register-file offset, scratch
// offset) and every operation whose operands fit in 64 bits runs on native integers. Operations that do not (wide
// vectors, floating point, user operations) keep using the generic 128-bit path, one operation at a time.
struct Operand {
    uint8_t space = 0;  // 0 constant, 1 register file, 2 per-instruction scratch
    uint8_t size = 0;
    uint32_t offset = 0;
    uint64_t value = 0;  // constants
};
struct MicroOp {
    int kind = 0;  // SLEIGH opcode
    bool fast = false, dead = false;
    Operand out, a, b;
    int32_t target = -1;  // intra-instruction branch destination (operation index)
    uint32_t absolute = 0;  // branch/call destination outside the instruction
    bool to_absolute = false;
};
struct CompiledInstruction {
    DecodedInstruction decoded;
    std::vector<MicroOp> micro;
};
struct JitBlock { void* code = nullptr; };
// Executes one straight-line fast operation (everything except branches) and the generic path for one operation.
void execute_data_micro(const MicroOp& m, uint8_t* regs, uint8_t* scratch);
size_t exec_slow_op(Cpu& c, const DecodedInstruction& d, size_t i, uint8_t* scratch, uint32_t& next);
// Native x86-32 code for a block of compiled instructions (null if executable memory is unavailable). The instructions
// must outlive the result. jit_run behaves like executing each instruction with execute_compiled, and rethrows faults.
std::shared_ptr<JitBlock> jit_compile(const std::vector<CompiledInstruction>& block);
void jit_run(Cpu& c, const JitBlock& block);
// `fast` false keeps every operation on the generic path (reference behaviour, used to cross-check the fast one).
CompiledInstruction compile_instruction(const DecodedInstruction& instruction, bool fast = true);
// Removes operations whose flag results are overwritten before anyone reads them, within one straight-line block
// (flags are assumed live at the end of the block and around any instruction with control flow or a user operation).
void eliminate_dead_flags(std::vector<CompiledInstruction>& block);
void execute_compiled(Cpu& c, const CompiledInstruction& instruction);

// SLEIGH opcode number for a P-code mnemonic as exported by Ghidra's Java API ("INT_ADD", "FLOAT2FLOAT", ...); -1 if unknown.
int interpreter_opcode(const std::string& mnemonic);
// Executes one decoded instruction on `c`: registers live in Cpu::regs, memory is the guest's real address space.
// Sets c.pc to the next instruction (fall-through, branch target or indirect target).
void interpret_instruction(Cpu& c, const DecodedInstruction& instruction);
// Compact the sparse unique-space offsets of an instruction into a small scratch area.
void compact_unique_space(DecodedInstruction& instruction);

class DynamicCode {
public:
    // `reader` replaces direct guest-memory reads (tests decode a byte buffer as if it were at its original address).
    using Reader = std::function<void(uint8_t* destination, size_t size, uint32_t address)>;
    explicit DynamicCode(const std::filesystem::path& sleigh_specification, Reader reader = nullptr);
    ~DynamicCode();
    void add_region(uint32_t base, uint32_t size);
    bool contains(uint32_t address) const;
    std::shared_ptr<const DecodedInstruction> decode(uint32_t address);
    // Decoder output exactly as SLEIGH emits it (no unique-space compaction, no cache): for comparison with Ghidra's export.
    DecodedInstruction decode_raw(uint32_t address);
    // Interpret from c.pc while it stays inside a registered region, for at most `budget` instructions.
    void run(Cpu& c, uint64_t budget);
    // 0 generic 128-bit path only, 1 native-integer fast path, 2 fast path plus dead-flag elimination,
    // 3 (default) additionally compiles each block to native x86-32 code.
    // NFSU2_INTERP_MODE in the environment overrides the default (differential tests).
    void set_mode(int mode);
    uint64_t decoded_count() const { return decoded_; }

private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
    mutable std::mutex mutex_;
    std::vector<std::pair<uint32_t, uint32_t>> regions_;  // [base, end)
    std::atomic<uint32_t> lowest_{0xffffffffu}, highest_{0};  // bounds of all regions: lets contains() reject most addresses without the lock
    uint64_t decoded_ = 0;
};
}
