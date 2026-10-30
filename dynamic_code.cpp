#include "dynamic_code.hpp"
#include "guest_memory.hpp"
#include <cstddef>
#include <exception>
#include <algorithm>
#include <atomic>
#include <cstdio>
#include <map>
#include <mutex>
#include <sstream>
#include <unordered_map>
#if defined(NFSU2_NATIVE32) || defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#undef LoadImage   // windows.h renames it to LoadImageA, which would no longer match the SLEIGH library's class
#undef OUT
#undef IN
#endif
#include "sleigh.hh"
#include "loadimage.hh"
#include "globalcontext.hh"
#include "opcodes.hh"

namespace nfsu2raw {
namespace {
using namespace ghidra;

[[noreturn]] void fail(const std::string& text) { throw Fault(text); }

inline V mask_of(unsigned size);

// ---- P-code semantics, mirroring runtime.hpp's eval<> and float_op ------------------------------------------------
V evaluate(int opcode, unsigned OUTN, unsigned AN, unsigned BN, V a, V b) {
    a &= mask_of(AN);
    b &= mask_of(BN);
    switch (opcode) {
    case CPUI_COPY: case CPUI_INT_ZEXT: return a;
    case CPUI_INT_SEXT: return static_cast<V>(signed_value(a, AN));
    case CPUI_INT_ADD: return a + b;
    case CPUI_INT_SUB: return a - b;
    case CPUI_INT_MULT: return a * b;
    case CPUI_INT_DIV: case CPUI_INT_REM: {
        if (!b) throw Fault("integer division by zero");
        if (AN > 8 || BN > 8) fail("wide division requires an explicit lowering");
        return opcode == CPUI_INT_DIV ? V(uint64_t(a) / uint64_t(b)) : V(uint64_t(a) % uint64_t(b));
    }
    case CPUI_INT_SDIV: case CPUI_INT_SREM: {
        if (AN > 8 || BN > 8) fail("wide signed division requires an explicit lowering");
        const int64_t x = static_cast<int64_t>(signed_value(a, AN)), y = static_cast<int64_t>(signed_value(b, BN));
        if (!y || (x == INT64_MIN && y == -1)) throw Fault("signed integer division fault");
        return opcode == CPUI_INT_SDIV ? static_cast<V>(x / y) : static_cast<V>(x % y);
    }
    case CPUI_INT_AND: return a & b;
    case CPUI_INT_OR: return a | b;
    case CPUI_INT_XOR: return a ^ b;
    case CPUI_INT_NEGATE: return ~a;
    case CPUI_INT_2COMP: return V(0) - a;
    case CPUI_INT_LEFT: return b >= AN * 8 ? V(0) : (a << static_cast<unsigned>(b));
    case CPUI_INT_RIGHT: return b >= AN * 8 ? V(0) : (a >> static_cast<unsigned>(b));
    case CPUI_INT_SRIGHT:
        if (b >= AN * 8) return signed_value(a, AN) < 0 ? nfsu2raw::mask(OUTN) : V(0);
        return static_cast<V>(signed_value(a, AN) >> static_cast<unsigned>(b));
    case CPUI_INT_EQUAL: return a == b;
    case CPUI_INT_NOTEQUAL: return a != b;
    case CPUI_INT_LESS: return a < b;
    case CPUI_INT_LESSEQUAL: return a <= b;
    case CPUI_INT_SLESS: return signed_value(a, AN) < signed_value(b, BN);
    case CPUI_INT_SLESSEQUAL: return signed_value(a, AN) <= signed_value(b, BN);
    case CPUI_INT_CARRY: return ((a + b) & nfsu2raw::mask(AN)) < a;
    case CPUI_INT_SCARRY: { const V s = (a + b) & nfsu2raw::mask(AN); return ((~(a ^ b) & (a ^ s)) >> (AN * 8 - 1)) & 1; }
    case CPUI_INT_SBORROW: { const V d = (a - b) & nfsu2raw::mask(AN); return (((a ^ b) & (a ^ d)) >> (AN * 8 - 1)) & 1; }
    case CPUI_BOOL_NEGATE: return a == 0;
    case CPUI_BOOL_AND: return bool(a) && bool(b);
    case CPUI_BOOL_OR: return bool(a) || bool(b);
    case CPUI_BOOL_XOR: return bool(a) != bool(b);
    case CPUI_POPCOUNT: return std::popcount(uint64_t(a)) + std::popcount(uint64_t(a >> 64));
    case CPUI_SUBPIECE: return b >= 16 ? V(0) : a >> (static_cast<unsigned>(b) * 8);
    case CPUI_PIECE: return (a << (BN * 8)) | b;
    default: break;
    }
    fail(std::string("unsupported P-code operation ") + get_opname(static_cast<OpCode>(opcode)));
}

const char* float_name(int opcode) {
    switch (opcode) {
    case CPUI_FLOAT_EQUAL: return "FLOAT_EQUAL";
    case CPUI_FLOAT_NOTEQUAL: return "FLOAT_NOTEQUAL";
    case CPUI_FLOAT_LESS: return "FLOAT_LESS";
    case CPUI_FLOAT_LESSEQUAL: return "FLOAT_LESSEQUAL";
    case CPUI_FLOAT_NAN: return "FLOAT_NAN";
    case CPUI_FLOAT_ADD: return "FLOAT_ADD";
    case CPUI_FLOAT_DIV: return "FLOAT_DIV";
    case CPUI_FLOAT_MULT: return "FLOAT_MULT";
    case CPUI_FLOAT_SUB: return "FLOAT_SUB";
    case CPUI_FLOAT_NEG: return "FLOAT_NEG";
    case CPUI_FLOAT_ABS: return "FLOAT_ABS";
    case CPUI_FLOAT_SQRT: return "FLOAT_SQRT";
    case CPUI_FLOAT_INT2FLOAT: return "INT2FLOAT";
    case CPUI_FLOAT_FLOAT2FLOAT: return "FLOAT2FLOAT";
    case CPUI_FLOAT_TRUNC: return "TRUNC";
    case CPUI_FLOAT_ROUND: return "ROUND";
    default: return nullptr;
    }
}

// Fixed-size copies for the common varnode widths avoid a generic memcpy call per operand.
inline void load_bytes(V& value, const void* from, unsigned size) {
    switch (size) {
    case 1: { uint8_t x; std::memcpy(&x, from, 1); value = x; return; }
    case 2: { uint16_t x; std::memcpy(&x, from, 2); value = x; return; }
    case 4: { uint32_t x; std::memcpy(&x, from, 4); value = x; return; }
    case 8: { uint64_t x; std::memcpy(&x, from, 8); value = x; return; }
    default: value = 0; std::memcpy(&value, from, size); return;
    }
}
inline void store_bytes(void* to, const V& value, unsigned size) {
    switch (size) {
    case 1: { uint8_t x = uint8_t(value); std::memcpy(to, &x, 1); return; }
    case 2: { uint16_t x = uint16_t(value); std::memcpy(to, &x, 2); return; }
    case 4: { uint32_t x = uint32_t(value); std::memcpy(to, &x, 4); return; }
    case 8: { uint64_t x = uint64_t(value); std::memcpy(to, &x, 8); return; }
    default: std::memcpy(to, &value, size); return;
    }
}
inline V mask_of(unsigned size) {
    switch (size) {
    case 1: return 0xff;
    case 2: return 0xffff;
    case 4: return 0xffffffffu;
    case 8: return ~uint64_t(0);
    default: return nfsu2raw::mask(size);
    }
}

// ---- storage ------------------------------------------------------------------------------------------------------
bool overlaps(const VarnodeRef& v, uint32_t base, uint32_t size) {
    return v.space == VarnodeRef::Register && v.offset < base + size && base < v.offset + v.size;
}

V read(Cpu& c, const VarnodeRef& v, const uint8_t* scratch) {
    if (v.size > 16) fail("varnode wider than 16 bytes");
    V value = 0;
    switch (v.space) {
    case VarnodeRef::Const:
        return V(v.offset) & mask_of(std::min<unsigned>(v.size, 16));
    case VarnodeRef::Register:
        if (v.offset + v.size > c.regs.size()) fail("register outside the register file");
        if (overlaps(v, reg_fpu_control, 2)) wr<2>(c, reg_fpu_control, x87_store_control());
        if (overlaps(v, reg_mxcsr, 4)) wr<4>(c, reg_mxcsr, mxcsr_store());
        load_bytes(value, c.regs.data() + v.offset, v.size);
        return value;
    case VarnodeRef::Unique:
        load_bytes(value, scratch + v.offset, v.size);
        return value;
    case VarnodeRef::Ram:
        load_bytes(value, nfsu2::guest::ptr<const void>(uint32_t(v.offset)), v.size);
        return value;
    }
    return value;
}

void write(Cpu& c, const VarnodeRef& v, uint8_t* scratch, V value) {
    if (v.size > 16) fail("varnode wider than 16 bytes");
    switch (v.space) {
    case VarnodeRef::Const: fail("write to a constant");
    case VarnodeRef::Register:
        if (v.offset + v.size > c.regs.size()) fail("register outside the register file");
        store_bytes(c.regs.data() + v.offset, value, v.size);
        if (overlaps(v, reg_fpu_control, 2)) {
            if (v.offset != reg_fpu_control || v.size != 2) fail("partial write of the x87 control word");
            x87_load_control(uint16_t(r<2>(c, reg_fpu_control)));
        }
        if (overlaps(v, reg_mxcsr, 4)) {
            if (v.offset != reg_mxcsr || v.size != 4) fail("partial write of MXCSR");
            mxcsr_load(uint32_t(r<4>(c, reg_mxcsr)));
        }
        return;
    case VarnodeRef::Unique:
        store_bytes(scratch + v.offset, value, v.size);
        return;
    case VarnodeRef::Ram:
        store_bytes(nfsu2::guest::ptr<void>(uint32_t(v.offset)), value, v.size);
        return;
    }
}

// ---- SLEIGH glue --------------------------------------------------------------------------------------------------
class GuestImage : public LoadImage {
public:
    DynamicCode::Reader reader;
    GuestImage() : LoadImage("guest memory") {}
    void loadFill(uint1* ptr, int4 size, const Address& addr) override {
        if (reader) { reader(ptr, size_t(size), uint32_t(addr.getOffset())); return; }
        // Read what is committed and readable; the rest is zero so decoding never faults near a region's end.
        uint64_t at = addr.getOffset();
        int4 done = 0;
        while (done < size) {
            MEMORY_BASIC_INFORMATION info{};
            const uintptr_t position = uintptr_t(nfsu2::guest::ptr<void>(uint32_t(at + done)));   // the host address of the guest address
            if (!VirtualQuery(reinterpret_cast<void*>(position), &info, sizeof(info)) || info.State != MEM_COMMIT ||
                (info.Protect & (PAGE_NOACCESS | PAGE_GUARD)))
                break;
            const uintptr_t limit = uintptr_t(info.BaseAddress) + info.RegionSize;
            const int4 chunk = int4(std::min<uintptr_t>(limit - position, uintptr_t(size - done)));
            std::memcpy(ptr + done, reinterpret_cast<const void*>(position), chunk);
            done += chunk;
        }
        std::memset(ptr + done, 0, size - done);
    }
    // Bytes of an instruction that was already decoded from this address: the pages were readable then, and a region is
    // registered only after the system accepted it as executable, so no VirtualQuery per executed instruction.
    void reread(uint1* ptr, int4 size, const Address& addr) const {
        if (reader) { reader(ptr, size_t(size), uint32_t(addr.getOffset())); return; }
        std::memcpy(ptr, nfsu2::guest::ptr<const void>(addr.getOffset()), size);
    }
    bool same(const uint8_t* expected, size_t size, uint32_t address) const {
        if (reader) { uint8_t now[1024]; reader(now, size, address); return std::memcmp(expected, now, size) == 0; }
        return std::memcmp(expected, nfsu2::guest::ptr<const void>(address), size) == 0;
    }
    std::string getArchType() const override { return "guest"; }
    void adjustVma(long) override {}
};

class Collector : public PcodeEmit {
public:
    Collector(DecodedInstruction& out, AddrSpace* cst, AddrSpace* reg, AddrSpace* uniq) : out_(out), cst_(cst), reg_(reg), uniq_(uniq) {}
    void dump(const Address&, OpCode opc, VarnodeData* outvar, VarnodeData* vars, int4 isize) override {
        InterpOp op;
        op.opcode = int(opc);
        if (outvar) { op.has_output = true; op.output = convert(*outvar); }
        for (int4 i = 0; i < isize; ++i) op.inputs.push_back(convert(vars[i]));
        out_.ops.push_back(std::move(op));
    }

private:
    VarnodeRef convert(const VarnodeData& d) const {
        VarnodeRef r;
        r.size = d.size;
        r.offset = d.offset;
        if (d.space == cst_) r.space = VarnodeRef::Const;
        else if (d.space == reg_) r.space = VarnodeRef::Register;
        else if (d.space == uniq_) r.space = VarnodeRef::Unique;
        else r.space = VarnodeRef::Ram;
        return r;
    }
    DecodedInstruction& out_;
    AddrSpace *cst_, *reg_, *uniq_;
};
}  // namespace

// ---- interpreter ---------------------------------------------------------------------------------------------------
int interpreter_opcode(const std::string& mnemonic) {
    static const std::map<std::string, int> aliases = {
        {"INT2FLOAT", CPUI_FLOAT_INT2FLOAT}, {"FLOAT2FLOAT", CPUI_FLOAT_FLOAT2FLOAT}, {"TRUNC", CPUI_FLOAT_TRUNC},
        {"ROUND", CPUI_FLOAT_ROUND}, {"CEIL", CPUI_FLOAT_CEIL}, {"FLOOR", CPUI_FLOAT_FLOOR}};
    if (auto it = aliases.find(mnemonic); it != aliases.end()) return it->second;
    for (int opc = CPUI_COPY; opc < CPUI_MAX; ++opc)
        if (mnemonic == get_opname(static_cast<OpCode>(opc))) return opc;
    return -1;
}

void compact_unique_space(DecodedInstruction& d) {
    std::vector<std::pair<uint64_t, uint64_t>> ranges;
    auto each = [&](auto&& fn) {
        for (auto& op : d.ops) {
            if (op.has_output && op.output.space == VarnodeRef::Unique) fn(op.output);
            for (auto& in : op.inputs) if (in.space == VarnodeRef::Unique) fn(in);
        }
    };
    each([&](VarnodeRef& v) { ranges.push_back({v.offset, v.offset + v.size}); });
    std::sort(ranges.begin(), ranges.end());
    std::vector<std::array<uint64_t, 3>> merged;  // start, end, compact base
    uint64_t total = 0;
    for (auto [start, end] : ranges) {
        if (!merged.empty() && start < merged.back()[1]) {
            total += std::max(end, merged.back()[1]) - merged.back()[1];
            merged.back()[1] = std::max(end, merged.back()[1]);
        } else {
            merged.push_back({start, end, total});
            total += end - start;
        }
    }
    each([&](VarnodeRef& v) {
        for (const auto& m : merged)
            if (m[0] <= v.offset && v.offset < m[1]) { v.offset = m[2] + (v.offset - m[0]); return; }
        fail("unique varnode outside the compacted layout");
    });
    d.unique_size = uint32_t(total);
}

// One P-code operation through the generic 128-bit path (reference behaviour). Returns the index of the next operation.
size_t exec_slow_op(Cpu& c, const DecodedInstruction& d, size_t i, uint8_t* scratch, uint32_t& next) {
    const size_t count = d.ops.size();
    {
        const InterpOp& op = d.ops[i];
        size_t following = i + 1;
        const int opc = op.opcode;
        auto in = [&](size_t k) { return read(c, op.inputs[k], scratch); };
        auto relative_target = [&](const VarnodeRef& dest) -> int64_t {
            return int64_t(i) + int64_t(dest.offset);
        };
        switch (opc) {
        case CPUI_LOAD: {
            const uint32_t address = uint32_t(in(1));
            write(c, op.output, scratch, read(c, VarnodeRef{VarnodeRef::Ram, op.output.size, address}, scratch));
            break;
        }
        case CPUI_STORE: {
            const uint32_t address = uint32_t(in(1));
            write(c, VarnodeRef{VarnodeRef::Ram, op.inputs[2].size, address}, scratch, in(2));
            break;
        }
        case CPUI_BRANCH: case CPUI_CBRANCH: {
            const VarnodeRef& dest = op.inputs[0];
            const bool taken = opc == CPUI_BRANCH || in(1) != 0;
            if (taken) {
                if (dest.space == VarnodeRef::Const) {
                    const int64_t target = relative_target(dest);
                    if (target < 0 || target > int64_t(count)) fail("P-code branch outside the instruction");
                    following = size_t(target);
                } else {
                    next = uint32_t(dest.offset);
                    following = count;
                }
            }
            break;
        }
        case CPUI_CALL: next = uint32_t(op.inputs[0].offset); following = count; break;
        case CPUI_BRANCHIND: case CPUI_CALLIND: case CPUI_RETURN: next = uint32_t(in(0)); following = count; break;
        case CPUI_CALLOTHER: {
            V args[4] = {};
            const size_t n = op.inputs.size() - 1;
            if (n > 4) fail("user operation with more than four operands");
            for (size_t k = 0; k < n; ++k) args[k] = in(k + 1);
            const unsigned encoded = unsigned(op.inputs[0].offset) | ((op.has_output ? op.output.size : 0u) << 16);
            c.pc = d.address;
            V result = 0;
            switch (n) {
            case 0: result = user_op(c, encoded, {}); break;
            case 1: result = user_op(c, encoded, {args[0]}); break;
            case 2: result = user_op(c, encoded, {args[0], args[1]}); break;
            case 3: result = user_op(c, encoded, {args[0], args[1], args[2]}); break;
            default: result = user_op(c, encoded, {args[0], args[1], args[2], args[3]}); break;
            }
            if (op.has_output) write(c, op.output, scratch, result);
            break;
        }
        default:
            if (const char* name = float_name(opc)) {
                const V a = in(0);
                const unsigned an = op.inputs[0].size;
                V b = 0;
                unsigned bn = 4;
                if (op.inputs.size() > 1) { b = in(1); bn = op.inputs[1].size; }
                write(c, op.output, scratch, float_op(name, a, an, b, bn, op.output.size));
            } else {
                const V a = in(0);
                const unsigned an = op.inputs[0].size;
                V b = 0;
                unsigned bn = 1;
                if (op.inputs.size() > 1) { b = in(1); bn = op.inputs[1].size; }
                write(c, op.output, scratch, evaluate(opc, op.output.size, an, bn, a, b));
            }
        }
        return following;
    }
}

void interpret_instruction(Cpu& c, const DecodedInstruction& d) {
    uint8_t scratch[1024];
    if (d.unique_size > sizeof(scratch)) fail("instruction needs too much temporary storage");
    wr<4>(c, 644, d.address);  // the shadow EIP, as the translated engine refreshes it before each instruction
    uint32_t next = d.address + d.length;
    for (size_t i = 0; i < d.ops.size();) i = exec_slow_op(c, d, i, scratch, next);
    c.pc = next;
}

// ---- fast path -----------------------------------------------------------------------------------------------------
namespace {
constexpr uint32_t flags_begin = 0x200, flags_end = 0x220;  // one bit per flag byte in the liveness masks

inline uint64_t mask64(unsigned n) { return n >= 8 ? ~uint64_t(0) : ((uint64_t(1) << (n * 8)) - 1); }
inline int64_t sext64(uint64_t v, unsigned n) {
    if (n >= 8) return int64_t(v);
    const unsigned shift = 64 - 8 * n;
    return int64_t(v << shift) >> shift;
}
inline uint64_t load_n(const uint8_t* p, unsigned n) {
    switch (n) {
    case 1: return *p;
    case 2: { uint16_t x; std::memcpy(&x, p, 2); return x; }
    case 4: { uint32_t x; std::memcpy(&x, p, 4); return x; }
    case 8: { uint64_t x; std::memcpy(&x, p, 8); return x; }
    default: { uint64_t x = 0; std::memcpy(&x, p, n); return x; }
    }
}
inline void store_n(uint8_t* p, uint64_t v, unsigned n) {
    switch (n) {
    case 1: *p = uint8_t(v); return;
    case 2: { uint16_t x = uint16_t(v); std::memcpy(p, &x, 2); return; }
    case 4: { uint32_t x = uint32_t(v); std::memcpy(p, &x, 4); return; }
    case 8: std::memcpy(p, &v, 8); return;
    default: std::memcpy(p, &v, n); return;
    }
}

bool fast_opcode(int opc) {
    switch (opc) {
    case CPUI_LOAD: case CPUI_STORE: case CPUI_BRANCH: case CPUI_CBRANCH: case CPUI_CALL: case CPUI_CALLIND:
    case CPUI_BRANCHIND: case CPUI_RETURN: case CPUI_COPY: case CPUI_INT_ZEXT: case CPUI_INT_SEXT: case CPUI_INT_ADD:
    case CPUI_INT_SUB: case CPUI_INT_MULT: case CPUI_INT_DIV: case CPUI_INT_REM: case CPUI_INT_SDIV: case CPUI_INT_SREM:
    case CPUI_INT_AND: case CPUI_INT_OR: case CPUI_INT_XOR: case CPUI_INT_NEGATE: case CPUI_INT_2COMP: case CPUI_INT_LEFT:
    case CPUI_INT_RIGHT: case CPUI_INT_SRIGHT: case CPUI_INT_EQUAL: case CPUI_INT_NOTEQUAL: case CPUI_INT_LESS:
    case CPUI_INT_LESSEQUAL: case CPUI_INT_SLESS: case CPUI_INT_SLESSEQUAL: case CPUI_INT_CARRY: case CPUI_INT_SCARRY:
    case CPUI_INT_SBORROW: case CPUI_BOOL_NEGATE: case CPUI_BOOL_AND: case CPUI_BOOL_OR: case CPUI_BOOL_XOR:
    case CPUI_POPCOUNT: case CPUI_SUBPIECE: case CPUI_PIECE:
        return true;
    default:
        return false;
    }
}
bool is_branch_kind(int opc) {
    return opc == CPUI_BRANCH || opc == CPUI_CBRANCH || opc == CPUI_CALL || opc == CPUI_CALLIND || opc == CPUI_BRANCHIND || opc == CPUI_RETURN;
}

// Classify a varnode as an operand; false if it needs the generic path.
bool make_operand(const VarnodeRef& v, Operand& o) {
    if (v.size < 1 || v.size > 8) return false;
    o.size = uint8_t(v.size);
    switch (v.space) {
    case VarnodeRef::Const: o.space = 0; o.value = v.offset & mask64(v.size); return true;
    case VarnodeRef::Register:
        if (overlaps(v, reg_fpu_control, 2) || overlaps(v, reg_mxcsr, 4)) return false;  // mirrored to the host FPU
        o.space = 1; o.offset = uint32_t(v.offset); return true;
    case VarnodeRef::Unique: o.space = 2; o.offset = uint32_t(v.offset); return true;
    default: return false;
    }
}

uint32_t flag_bits(const Operand& o) {
    if (o.space != 1 || o.offset >= flags_end || o.offset + o.size <= flags_begin) return 0;
    uint32_t bits = 0;
    for (uint32_t b = std::max<uint32_t>(o.offset, flags_begin); b < std::min<uint32_t>(o.offset + o.size, flags_end); ++b) bits |= 1u << (b - flags_begin);
    return bits;
}
}  // namespace

CompiledInstruction compile_instruction(const DecodedInstruction& d, bool fast) {
    CompiledInstruction ci;
    ci.decoded = d;
    ci.micro.resize(d.ops.size());
    for (size_t i = 0; i < d.ops.size(); ++i) {
        const InterpOp& op = d.ops[i];
        MicroOp& m = ci.micro[i];
        m.kind = op.opcode;
        if (!fast || !fast_opcode(op.opcode)) continue;
        bool ok = true;
        const size_t n = op.inputs.size();
        switch (op.opcode) {
        case CPUI_LOAD:
            ok = n == 2 && op.has_output && make_operand(op.output, m.out) && make_operand(op.inputs[1], m.a);
            break;
        case CPUI_STORE:
            ok = n == 3 && make_operand(op.inputs[1], m.a) && make_operand(op.inputs[2], m.b);
            break;
        case CPUI_BRANCH: case CPUI_CBRANCH: {
            const VarnodeRef& dest = op.inputs[0];
            ok = op.opcode == CPUI_BRANCH ? n == 1 : (n == 2 && make_operand(op.inputs[1], m.a));
            if (dest.space == VarnodeRef::Const) {
                const int64_t target = int64_t(i) + int64_t(dest.offset);
                ok = ok && target >= 0 && target <= int64_t(d.ops.size());
                m.target = int32_t(target);
            } else { m.to_absolute = true; m.absolute = uint32_t(dest.offset); }
            break;
        }
        case CPUI_CALL: m.to_absolute = true; m.absolute = uint32_t(op.inputs[0].offset); break;
        case CPUI_CALLIND: case CPUI_BRANCHIND: case CPUI_RETURN: ok = n >= 1 && make_operand(op.inputs[0], m.a); break;
        default: {
            ok = op.has_output && n >= 1 && n <= 2 && make_operand(op.output, m.out) && make_operand(op.inputs[0], m.a);
            if (ok && n == 2) ok = make_operand(op.inputs[1], m.b);
            if (ok && n == 1) { m.b.space = 0; m.b.size = 1; m.b.value = 0; }
            if (ok && op.opcode == CPUI_PIECE) ok = m.b.size < 8 && m.a.size + m.b.size <= 8;
            break;
        }
        }
        m.fast = ok;
    }
    if (d.unique_size > 1024) fail("instruction needs too much temporary storage");
    return ci;
}

void eliminate_dead_flags(std::vector<CompiledInstruction>& block) {
    uint32_t live = 0xffffffffu;
    for (size_t k = block.size(); k-- > 0;) {
        CompiledInstruction& ci = block[k];
        bool conservative = false;
        for (const MicroOp& m : ci.micro) if (!m.fast || is_branch_kind(m.kind)) conservative = true;
        if (conservative) { live = 0xffffffffu; continue; }
        std::vector<bool> scratch_live(ci.decoded.unique_size + 8, false);
        auto note_read = [&](const Operand& o) {
            if (o.space == 2) for (uint32_t b = o.offset; b < o.offset + o.size; ++b) scratch_live[b] = true;
            live |= flag_bits(o);
        };
        for (size_t i = ci.micro.size(); i-- > 0;) {
            MicroOp& m = ci.micro[i];
            const bool has_output = m.kind != CPUI_STORE;
            if (has_output) {
                bool needed = true;
                if (m.out.space == 1) {
                    const uint32_t bits = flag_bits(m.out);
                    // Only a write that lies entirely inside the flag bytes can be judged by their liveness.
                    if (bits && m.out.offset >= flags_begin && m.out.offset + m.out.size <= flags_end) { needed = (live & bits) != 0; live &= ~bits; }
                } else if (m.out.space == 2) {
                    needed = false;
                    for (uint32_t b = m.out.offset; b < m.out.offset + m.out.size; ++b) needed |= scratch_live[b];
                    for (uint32_t b = m.out.offset; b < m.out.offset + m.out.size; ++b) scratch_live[b] = false;
                }
                if (!needed && m.kind != CPUI_LOAD) { m.dead = true; continue; }
            }
            note_read(m.a);
            if (m.kind != CPUI_LOAD) note_read(m.b);
        }
    }
}

// Executes one straight-line fast operation (everything except branches).
void execute_data_micro(const MicroOp& m, uint8_t* regs, uint8_t* scratch) {
#define RD(o) ((o).space == 0 ? (o).value : load_n(((o).space == 1 ? regs : scratch) + (o).offset, (o).size))
#define WR(o, v) store_n(((o).space == 1 ? regs : scratch) + (o).offset, (v), (o).size)
    switch (m.kind) {
        case CPUI_LOAD: WR(m.out, load_n(nfsu2::guest::ptr<const uint8_t>(uint32_t(RD(m.a))), m.out.size)); break;
        case CPUI_STORE: store_n(nfsu2::guest::ptr<uint8_t>(uint32_t(RD(m.a))), RD(m.b), m.b.size); break;
        case CPUI_COPY: case CPUI_INT_ZEXT: WR(m.out, RD(m.a)); break;
        case CPUI_INT_SEXT: WR(m.out, uint64_t(sext64(RD(m.a), m.a.size))); break;
        case CPUI_INT_ADD: WR(m.out, RD(m.a) + RD(m.b)); break;
        case CPUI_INT_SUB: WR(m.out, RD(m.a) - RD(m.b)); break;
        case CPUI_INT_MULT: WR(m.out, RD(m.a) * RD(m.b)); break;
        case CPUI_INT_DIV: case CPUI_INT_REM: {
            const uint64_t a = RD(m.a), b = RD(m.b);
            if (!b) throw Fault("integer division by zero");
            WR(m.out, m.kind == CPUI_INT_DIV ? a / b : a % b);
            break;
        }
        case CPUI_INT_SDIV: case CPUI_INT_SREM: {
            const int64_t x = sext64(RD(m.a), m.a.size), y = sext64(RD(m.b), m.b.size);
            if (!y || (x == INT64_MIN && y == -1)) throw Fault("signed integer division fault");
            WR(m.out, uint64_t(m.kind == CPUI_INT_SDIV ? x / y : x % y));
            break;
        }
        case CPUI_INT_AND: WR(m.out, RD(m.a) & RD(m.b)); break;
        case CPUI_INT_OR: WR(m.out, RD(m.a) | RD(m.b)); break;
        case CPUI_INT_XOR: WR(m.out, RD(m.a) ^ RD(m.b)); break;
        case CPUI_INT_NEGATE: WR(m.out, ~RD(m.a)); break;
        case CPUI_INT_2COMP: WR(m.out, uint64_t(0) - RD(m.a)); break;
        case CPUI_INT_LEFT: { const uint64_t a = RD(m.a), b = RD(m.b); WR(m.out, b >= unsigned(m.a.size) * 8 ? 0 : a << unsigned(b)); break; }
        case CPUI_INT_RIGHT: { const uint64_t a = RD(m.a), b = RD(m.b); WR(m.out, b >= unsigned(m.a.size) * 8 ? 0 : a >> unsigned(b)); break; }
        case CPUI_INT_SRIGHT: {
            const uint64_t a = RD(m.a), b = RD(m.b);
            const int64_t x = sext64(a, m.a.size);
            if (b >= unsigned(m.a.size) * 8) WR(m.out, x < 0 ? mask64(m.out.size) : 0);
            else WR(m.out, uint64_t(x >> unsigned(b)));
            break;
        }
        case CPUI_INT_EQUAL: WR(m.out, RD(m.a) == RD(m.b)); break;
        case CPUI_INT_NOTEQUAL: WR(m.out, RD(m.a) != RD(m.b)); break;
        case CPUI_INT_LESS: WR(m.out, RD(m.a) < RD(m.b)); break;
        case CPUI_INT_LESSEQUAL: WR(m.out, RD(m.a) <= RD(m.b)); break;
        case CPUI_INT_SLESS: WR(m.out, sext64(RD(m.a), m.a.size) < sext64(RD(m.b), m.b.size)); break;
        case CPUI_INT_SLESSEQUAL: WR(m.out, sext64(RD(m.a), m.a.size) <= sext64(RD(m.b), m.b.size)); break;
        case CPUI_INT_CARRY: { const uint64_t a = RD(m.a), b = RD(m.b); WR(m.out, ((a + b) & mask64(m.a.size)) < a); break; }
        case CPUI_INT_SCARRY: {
            const uint64_t a = RD(m.a), b = RD(m.b), s = (a + b) & mask64(m.a.size);
            WR(m.out, ((~(a ^ b) & (a ^ s)) >> (unsigned(m.a.size) * 8 - 1)) & 1);
            break;
        }
        case CPUI_INT_SBORROW: {
            const uint64_t a = RD(m.a), b = RD(m.b), s = (a - b) & mask64(m.a.size);
            WR(m.out, (((a ^ b) & (a ^ s)) >> (unsigned(m.a.size) * 8 - 1)) & 1);
            break;
        }
        case CPUI_BOOL_NEGATE: WR(m.out, RD(m.a) == 0); break;
        case CPUI_BOOL_AND: WR(m.out, (RD(m.a) != 0) && (RD(m.b) != 0)); break;
        case CPUI_BOOL_OR: WR(m.out, (RD(m.a) != 0) || (RD(m.b) != 0)); break;
        case CPUI_BOOL_XOR: WR(m.out, (RD(m.a) != 0) != (RD(m.b) != 0)); break;
        case CPUI_POPCOUNT: WR(m.out, uint64_t(std::popcount(RD(m.a)))); break;
        case CPUI_SUBPIECE: { const uint64_t a = RD(m.a), b = RD(m.b); WR(m.out, b >= 8 ? 0 : a >> (unsigned(b) * 8)); break; }
        case CPUI_PIECE: WR(m.out, (RD(m.a) << (unsigned(m.b.size) * 8)) | RD(m.b)); break;
        default: fail("operation marked fast without a handler");
    }
#undef RD
#undef WR
}
void execute_compiled(Cpu& c, const CompiledInstruction& ci) {
    uint8_t scratch[1024];
    uint8_t* const regs = c.regs.data();
    const DecodedInstruction& d = ci.decoded;
    std::memcpy(regs + 644, &d.address, 4);  // the shadow EIP, as the translated engine refreshes it before each instruction
    uint32_t next = d.address + d.length;
    const size_t count = ci.micro.size();
#define RD(o) ((o).space == 0 ? (o).value : load_n(((o).space == 1 ? regs : scratch) + (o).offset, (o).size))
    for (size_t i = 0; i < count;) {
        const MicroOp& m = ci.micro[i];
        if (m.dead) { ++i; continue; }
        if (!m.fast) { i = exec_slow_op(c, d, i, scratch, next); continue; }
        size_t following = i + 1;
        switch (m.kind) {
        case CPUI_BRANCH: case CPUI_CBRANCH:
            if (m.kind == CPUI_BRANCH || RD(m.a) != 0) {
                if (m.to_absolute) { next = m.absolute; following = count; } else following = size_t(m.target);
            }
            break;
        case CPUI_CALL: next = m.absolute; following = count; break;
        case CPUI_CALLIND: case CPUI_BRANCHIND: case CPUI_RETURN: next = uint32_t(RD(m.a)); following = count; break;
        default: execute_data_micro(m, regs, scratch); break;
        }
        i = following;
    }
#undef RD
    c.pc = next;
}

// ---- native code for blocks (x86-32 host) --------------------------------------------------------------------------
// A block of pre-resolved instructions becomes one native function `int block(Cpu*)`. Registers live in the Cpu's
// register file (EBX points at it), per-instruction temporaries on the native stack (EDI), the Cpu itself is ESI.
// Operations with 1/2/4-byte operands are emitted inline; everything else (wide values, division, population count,
// floating point, user operations, instructions with internal control flow) calls back into the interpreter for that
// operation or instruction. Helpers never throw through generated code: they catch, remember the exception and
// return nonzero, and the generated code returns it to jit_run(), which rethrows.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
namespace {
enum Reg { EAX = 0, ECX = 1, EDX = 2, EBX = 3, ESP = 4, EBP = 5, ESI = 6, EDI = 7 };
enum Cond { CC_B = 2, CC_E = 4, CC_NE = 5, CC_BE = 6, CC_L = 0xc, CC_LE = 0xe };

struct Asm {
    std::vector<uint8_t> b;
    void u8(uint32_t v) { b.push_back(uint8_t(v)); }
    void u32(uint32_t v) { for (int i = 0; i < 4; ++i) b.push_back(uint8_t(v >> (8 * i))); }
    size_t here() const { return b.size(); }
    void mov_ri(int r, uint32_t imm) { u8(0xB8 + r); u32(imm); }
    void mem(int reg, int base, uint32_t disp) { u8(0x80 | (reg << 3) | base); u32(disp); }  // [base + disp32]
    void load(int r, int base, uint32_t disp, unsigned size) {
        if (size == 1) { u8(0x0F); u8(0xB6); } else if (size == 2) { u8(0x0F); u8(0xB7); } else u8(0x8B);
        mem(r, base, disp);
    }
    void store(int base, uint32_t disp, int r, unsigned size) {
        if (size == 1) u8(0x88); else if (size == 2) { u8(0x66); u8(0x89); } else u8(0x89);
        mem(r, base, disp);
    }
    void rr(uint8_t op, int dst, int src) { u8(op); u8(0xC0 | (src << 3) | dst); }  // op r/m32(dst), r32(src)
    void imul(int dst, int src) { u8(0x0F); u8(0xAF); u8(0xC0 | (dst << 3) | src); }
    void unary(int ext, int r) { u8(0xF7); u8(0xC0 | (ext << 3) | r); }  // not 2, neg 3
    void shift_cl(int ext, int r) { u8(0xD3); u8(0xC0 | (ext << 3) | r); }  // shl 4, shr 5, sar 7
    void shift_i(int ext, int r, uint32_t n) { u8(0xC1); u8(0xC0 | (ext << 3) | r); u8(n); }
    void and_i(int r, uint32_t imm) { u8(0x81); u8(0xE0 | r); u32(imm); }
    void cmp_i(int r, uint32_t imm) { u8(0x81); u8(0xF8 | r); u32(imm); }
    void setcc(int cc, int r) { u8(0x0F); u8(0x90 + cc); u8(0xC0 | r); }
    void movzx8(int d, int s) { u8(0x0F); u8(0xB6); u8(0xC0 | (d << 3) | s); }
    void movzx16(int d, int s) { u8(0x0F); u8(0xB7); u8(0xC0 | (d << 3) | s); }
    void movsx8(int d, int s) { u8(0x0F); u8(0xBE); u8(0xC0 | (d << 3) | s); }
    void movsx16(int d, int s) { u8(0x0F); u8(0xBF); u8(0xC0 | (d << 3) | s); }
    size_t jcc(int cc) { u8(0x0F); u8(0x80 + cc); u32(0); return here() - 4; }
    size_t jmp() { u8(0xE9); u32(0); return here() - 4; }
    void patch(size_t at) { const uint32_t rel = uint32_t(here() - (at + 4)); std::memcpy(&b[at], &rel, 4); }
    void push_i(uint32_t imm) { u8(0x68); u32(imm); }
    void push_r(int r) { u8(0x50 + r); }
    void call_abs(const void* fn, unsigned argument_bytes) {
        mov_ri(EAX, uint32_t(uintptr_t(fn)));
        u8(0xFF); u8(0xD0);  // call eax
        u8(0x83); u8(0xC4); u8(argument_bytes);  // add esp, n
    }
};

struct JitContext {
    Asm a;
    std::vector<size_t> error_jumps;
    uint32_t pc_offset = 0;
};

thread_local std::exception_ptr jit_exception;
int jit_micro(const MicroOp* m, uint8_t* regs, uint8_t* scratch) {
    try { execute_data_micro(*m, regs, scratch); return 0; } catch (...) { jit_exception = std::current_exception(); return 1; }
}
int jit_slow(Cpu* c, const CompiledInstruction* ci, uint32_t index, uint8_t* scratch) {
    try { uint32_t next = 0; exec_slow_op(*c, ci->decoded, index, scratch, next); return 0; } catch (...) { jit_exception = std::current_exception(); return 1; }
}
int jit_instruction(Cpu* c, const CompiledInstruction* ci) {
    try { execute_compiled(*c, *ci); return 0; } catch (...) { jit_exception = std::current_exception(); return 1; }
}

uint8_t* code_memory(size_t size) {
    static std::mutex mutex;
    static uint8_t *cursor = nullptr, *end = nullptr;
    std::lock_guard lock(mutex);
    size = (size + 15) & ~size_t(15);
    if (!cursor || cursor + size > end) {
        const size_t slab = std::max<size_t>(size, 1 << 20);
        cursor = static_cast<uint8_t*>(VirtualAlloc(nullptr, slab, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
        if (!cursor) return nullptr;
        end = cursor + slab;
    }
    uint8_t* result = cursor;
    cursor += size;
    return result;
}

bool size_ok(const Operand& o) { return o.size == 1 || o.size == 2 || o.size == 4; }
int base_of(const Operand& o) { return o.space == 1 ? EBX : EDI; }
void ld(Asm& a, int r, const Operand& o) {
    if (o.space == 0) a.mov_ri(r, uint32_t(o.value));
    else a.load(r, base_of(o), o.offset, o.size);
}
void st(Asm& a, const Operand& o, int r) { a.store(base_of(o), o.offset, r, o.size); }
void sign_extend(Asm& a, int r, unsigned size) {
    if (size == 1) a.movsx8(r, r); else if (size == 2) a.movsx16(r, r);
}
void zero_extend(Asm& a, int r, unsigned size) {
    if (size == 1) a.movzx8(r, r); else if (size == 2) a.movzx16(r, r);
}

// Emits one straight-line fast operation inline; false if it must go through the helper.
bool emit_inline(Asm& a, const MicroOp& m) {
    const unsigned an = m.a.size;
    switch (m.kind) {
    case CPUI_COPY:
        if (m.out.size == 8 && m.a.size == 8 && m.out.space != 0) {
            if (m.a.space == 0) { a.mov_ri(ECX, uint32_t(m.a.value)); a.mov_ri(EDX, uint32_t(m.a.value >> 32)); }
            else { a.load(ECX, base_of(m.a), m.a.offset, 4); a.load(EDX, base_of(m.a), m.a.offset + 4, 4); }
            a.store(base_of(m.out), m.out.offset, ECX, 4); a.store(base_of(m.out), m.out.offset + 4, EDX, 4);
            return true;
        }
        break;
    case CPUI_LOAD:
        if (m.out.size == 8 && size_ok(m.a)) {
            ld(a, EAX, m.a);
            a.load(ECX, EAX, 0, 4); a.load(EDX, EAX, 4, 4);
            a.store(base_of(m.out), m.out.offset, ECX, 4); a.store(base_of(m.out), m.out.offset + 4, EDX, 4);
            return true;
        }
        if (size_ok(m.out) && size_ok(m.a)) { ld(a, EAX, m.a); a.load(EAX, EAX, 0, m.out.size); st(a, m.out, EAX); return true; }
        return false;
    case CPUI_STORE:
        if (!size_ok(m.a)) return false;
        if (m.b.size == 8) {
            ld(a, EAX, m.a);
            if (m.b.space == 0) { a.mov_ri(ECX, uint32_t(m.b.value)); a.mov_ri(EDX, uint32_t(m.b.value >> 32)); }
            else { a.load(ECX, base_of(m.b), m.b.offset, 4); a.load(EDX, base_of(m.b), m.b.offset + 4, 4); }
            a.store(EAX, 0, ECX, 4); a.store(EAX, 4, EDX, 4);
            return true;
        }
        if (!size_ok(m.b)) return false;
        ld(a, EAX, m.a); ld(a, ECX, m.b); a.store(EAX, 0, ECX, m.b.size);
        return true;
    default: break;
    }
    if (!size_ok(m.out) || !size_ok(m.a) || !size_ok(m.b)) return false;
    switch (m.kind) {
    case CPUI_COPY: case CPUI_INT_ZEXT: ld(a, EAX, m.a); st(a, m.out, EAX); return true;
    case CPUI_INT_SEXT: ld(a, EAX, m.a); sign_extend(a, EAX, an); st(a, m.out, EAX); return true;
    case CPUI_INT_ADD: case CPUI_INT_SUB: case CPUI_INT_AND: case CPUI_INT_OR: case CPUI_INT_XOR: {
        ld(a, EAX, m.a); ld(a, ECX, m.b);
        a.rr(m.kind == CPUI_INT_ADD ? 0x01 : m.kind == CPUI_INT_SUB ? 0x29 : m.kind == CPUI_INT_AND ? 0x21 : m.kind == CPUI_INT_OR ? 0x09 : 0x31, EAX, ECX);
        st(a, m.out, EAX);
        return true;
    }
    case CPUI_INT_MULT: ld(a, EAX, m.a); ld(a, ECX, m.b); a.imul(EAX, ECX); st(a, m.out, EAX); return true;
    case CPUI_INT_NEGATE: ld(a, EAX, m.a); a.unary(2, EAX); st(a, m.out, EAX); return true;
    case CPUI_INT_2COMP: ld(a, EAX, m.a); a.unary(3, EAX); st(a, m.out, EAX); return true;
    case CPUI_INT_LEFT: case CPUI_INT_RIGHT: {
        ld(a, EAX, m.a); ld(a, ECX, m.b);
        a.cmp_i(ECX, an * 8);
        const size_t in_range = a.jcc(CC_B);
        a.rr(0x31, EAX, EAX);
        const size_t done = a.jmp();
        a.patch(in_range);
        a.shift_cl(m.kind == CPUI_INT_LEFT ? 4 : 5, EAX);
        a.patch(done);
        st(a, m.out, EAX);
        return true;
    }
    case CPUI_INT_SRIGHT: {
        ld(a, EAX, m.a); sign_extend(a, EAX, an); ld(a, ECX, m.b);
        a.cmp_i(ECX, an * 8);
        const size_t in_range = a.jcc(CC_B);
        a.mov_ri(ECX, 31);
        a.patch(in_range);
        a.shift_cl(7, EAX);
        st(a, m.out, EAX);
        return true;
    }
    case CPUI_INT_EQUAL: case CPUI_INT_NOTEQUAL: case CPUI_INT_LESS: case CPUI_INT_LESSEQUAL: {
        ld(a, EAX, m.a); ld(a, ECX, m.b); a.rr(0x39, EAX, ECX);
        a.setcc(m.kind == CPUI_INT_EQUAL ? CC_E : m.kind == CPUI_INT_NOTEQUAL ? CC_NE : m.kind == CPUI_INT_LESS ? CC_B : CC_BE, EAX);
        a.movzx8(EAX, EAX); st(a, m.out, EAX);
        return true;
    }
    case CPUI_INT_SLESS: case CPUI_INT_SLESSEQUAL: {
        ld(a, EAX, m.a); sign_extend(a, EAX, an); ld(a, ECX, m.b); sign_extend(a, ECX, m.b.size);
        a.rr(0x39, EAX, ECX);
        a.setcc(m.kind == CPUI_INT_SLESS ? CC_L : CC_LE, EAX);
        a.movzx8(EAX, EAX); st(a, m.out, EAX);
        return true;
    }
    case CPUI_INT_CARRY:
        ld(a, EAX, m.a); ld(a, ECX, m.b);
        a.rr(0x89, EDX, EAX); a.rr(0x01, EAX, ECX); zero_extend(a, EAX, an);
        a.rr(0x39, EAX, EDX); a.setcc(CC_B, EAX); a.movzx8(EAX, EAX); st(a, m.out, EAX);
        return true;
    case CPUI_INT_SCARRY: case CPUI_INT_SBORROW: {
        const bool carry = m.kind == CPUI_INT_SCARRY;
        ld(a, EAX, m.a); ld(a, ECX, m.b);
        a.rr(0x89, EBP, EAX);                       // ebp = a
        a.rr(carry ? 0x01 : 0x29, EAX, ECX);        // eax = a + b  /  a - b
        a.rr(0x89, EDX, EBP); a.rr(0x31, EDX, ECX); // edx = a ^ b
        if (carry) a.unary(2, EDX);                 // ~(a ^ b)
        a.rr(0x31, EBP, EAX);                       // ebp = a ^ result
        a.rr(0x21, EDX, EBP);
        a.shift_i(5, EDX, an * 8 - 1);
        a.and_i(EDX, 1);
        st(a, m.out, EDX);
        return true;
    }
    case CPUI_BOOL_NEGATE: ld(a, EAX, m.a); a.rr(0x85, EAX, EAX); a.setcc(CC_E, EAX); a.movzx8(EAX, EAX); st(a, m.out, EAX); return true;
    case CPUI_BOOL_AND: case CPUI_BOOL_OR: case CPUI_BOOL_XOR:
        ld(a, EAX, m.a); ld(a, ECX, m.b);
        a.rr(0x85, EAX, EAX); a.setcc(CC_NE, EAX); a.rr(0x85, ECX, ECX); a.setcc(CC_NE, ECX);
        a.u8(m.kind == CPUI_BOOL_AND ? 0x20 : m.kind == CPUI_BOOL_OR ? 0x08 : 0x30); a.u8(0xC8);  // op al, cl
        a.movzx8(EAX, EAX); st(a, m.out, EAX);
        return true;
    case CPUI_SUBPIECE:
        if (m.b.space != 0) return false;
        if (m.b.value >= 4) a.rr(0x31, EAX, EAX);
        else { ld(a, EAX, m.a); if (m.b.value) a.shift_i(5, EAX, uint32_t(m.b.value) * 8); }
        st(a, m.out, EAX);
        return true;
    case CPUI_PIECE:
        if (m.a.size + m.b.size > 4) return false;
        ld(a, EAX, m.a); a.shift_i(4, EAX, m.b.size * 8); ld(a, ECX, m.b); a.rr(0x09, EAX, ECX); st(a, m.out, EAX);
        return true;
    default:
        return false;
    }
}

void check_status(JitContext& j) {
    j.a.rr(0x85, EAX, EAX);
    j.error_jumps.push_back(j.a.jcc(CC_NE));
}
void set_pc(JitContext& j, uint32_t value) { j.a.u8(0xC7); j.a.mem(0, ESI, j.pc_offset); j.a.u32(value); }
void set_pc_from_eax(JitContext& j) { j.a.u8(0x89); j.a.mem(EAX, ESI, j.pc_offset); }
}  // namespace

std::shared_ptr<JitBlock> jit_compile(const std::vector<CompiledInstruction>& block) {
    JitContext j;
    Asm& a = j.a;
    j.pc_offset = uint32_t(offsetof(Cpu, pc));
    uint32_t scratch_bytes = 16;
    for (const auto& ci : block) scratch_bytes = std::max<uint32_t>(scratch_bytes, (ci.decoded.unique_size + 15) & ~15u);
    // prologue
    a.push_r(EBX); a.push_r(ESI); a.push_r(EDI); a.push_r(EBP);
    a.u8(0x8B); a.u8(0x74); a.u8(0x24); a.u8(0x14);  // mov esi, [esp + 20]
    a.u8(0x8D); a.mem(EBX, ESI, uint32_t(offsetof(Cpu, regs)));  // lea ebx, [esi + regs]
    a.u8(0x81); a.u8(0xEC); a.u32(scratch_bytes);  // sub esp, scratch
    a.rr(0x89, EDI, ESP);  // mov edi, esp
    for (const auto& ci : block) {
        const DecodedInstruction& d = ci.decoded;
        const uint32_t fall = d.address + d.length;
        // Straight-line unless a branch appears anywhere but as the last operation.
        bool branch_inside = false;
        for (size_t i = 0; i + 1 < ci.micro.size(); ++i) if (is_branch_kind(ci.micro[i].kind)) branch_inside = true;
        const MicroOp* last = ci.micro.empty() ? nullptr : &ci.micro.back();
        const bool terminal = last && is_branch_kind(last->kind);
        bool native_terminal = false;
        if (terminal && last->fast && !branch_inside) {
            if (last->kind == CPUI_BRANCH || last->kind == CPUI_CALL) native_terminal = last->to_absolute;
            else if (last->kind == CPUI_CBRANCH) native_terminal = last->to_absolute && size_ok(last->a);
            else native_terminal = size_ok(last->a);  // CALLIND, BRANCHIND, RETURN
        }
        if (branch_inside || (terminal && !native_terminal)) {
            a.push_i(uint32_t(uintptr_t(&ci))); a.push_r(ESI);
            a.call_abs(reinterpret_cast<const void*>(&jit_instruction), 8);
            check_status(j);
            continue;
        }
        a.u8(0xC7); a.mem(0, EBX, 644); a.u32(d.address);  // shadow EIP
        const size_t body = terminal ? ci.micro.size() - 1 : ci.micro.size();
        for (size_t i = 0; i < body; ++i) {
            const MicroOp& m = ci.micro[i];
            if (m.dead) continue;
            if (!m.fast) {
                a.push_r(EDI); a.push_i(uint32_t(i)); a.push_i(uint32_t(uintptr_t(&ci))); a.push_r(ESI);
                a.call_abs(reinterpret_cast<const void*>(&jit_slow), 16);
                check_status(j);
            } else if (!emit_inline(a, m)) {
                a.push_r(EDI); a.push_r(EBX); a.push_i(uint32_t(uintptr_t(&m)));
                a.call_abs(reinterpret_cast<const void*>(&jit_micro), 12);
                check_status(j);
            }
        }
        if (native_terminal) {
            const MicroOp& m = *last;
            switch (m.kind) {
            case CPUI_BRANCH: case CPUI_CALL: set_pc(j, m.absolute); break;
            case CPUI_CBRANCH: {
                ld(a, EAX, m.a);
                set_pc(j, fall);
                a.rr(0x85, EAX, EAX);
                const size_t skip = a.jcc(CC_E);
                set_pc(j, m.absolute);
                a.patch(skip);
                break;
            }
            default:  // CALLIND, BRANCHIND, RETURN
                ld(a, EAX, m.a);
                set_pc_from_eax(j);
                break;
            }
        }
        if (!terminal) {
            // Falls through to the next instruction of the block (or out of it).
            set_pc(j, fall);
        }
    }
    // epilogue: success returns 0, a helper failure returns 1
    a.rr(0x31, EAX, EAX);
    const size_t skip_error = a.jmp();
    for (size_t e : j.error_jumps) a.patch(e);
    a.mov_ri(EAX, 1);
    a.patch(skip_error);
    a.u8(0x81); a.u8(0xC4); a.u32(scratch_bytes);  // add esp, scratch
    a.u8(0x5D); a.u8(0x5F); a.u8(0x5E); a.u8(0x5B);  // pop ebp, edi, esi, ebx
    a.u8(0xC3);  // ret
    uint8_t* memory = code_memory(a.b.size());
    if (!memory) return nullptr;
    std::memcpy(memory, a.b.data(), a.b.size());
    FlushInstructionCache(GetCurrentProcess(), memory, a.b.size());
    auto result = std::make_shared<JitBlock>();
    result->code = memory;
    return result;
}

void jit_run(Cpu& c, const JitBlock& block) {
    if (reinterpret_cast<int(__cdecl*)(Cpu*)>(block.code)(&c)) {
        std::exception_ptr error = jit_exception;
        jit_exception = nullptr;
        std::rethrow_exception(error);
    }
}
#pragma clang diagnostic pop

// ---- DynamicCode ---------------------------------------------------------------------------------------------------
struct DynamicCode::Impl {
    GuestImage loader;
    ContextInternal context;
    Sleigh translator;
    AddrSpace *ram, *reg, *uniq, *cst;
    std::unordered_map<uint32_t, std::shared_ptr<DecodedInstruction>> cache;
    // Straight-line blocks of pre-resolved instructions, keyed by entry address and revalidated against the code bytes.
    struct Block {
        std::vector<uint8_t> bytes;
        std::vector<CompiledInstruction> items;
        std::shared_ptr<JitBlock> jit;
    };
    std::unordered_map<uint32_t, std::shared_ptr<Block>> blocks;
    std::vector<std::shared_ptr<Block>> retired;  // replaced blocks stay alive: running threads may still hold them
    std::atomic<uint32_t> generation{1};
    // Identifies this instance in the per-thread block cache. An address would not do: a destroyed instance's memory can be
    // reused by the next one, whose cache would then hold dangling blocks.
    const uint64_t serial = [] { static std::atomic<uint64_t> next{1}; return next.fetch_add(1); }();
    int mode = 3;
    std::mutex mutex;
    Impl() : translator(&loader, &context) {
        char text[16];
        if (GetEnvironmentVariableA("NFSU2_INTERP_MODE", text, sizeof(text)) && text[0] >= '0' && text[0] <= '3') mode = text[0] - '0';
#ifndef NFSU2_GUEST_IDENTITY
        if (mode > 2) mode = 2;   // mode 3 emits x86-32 machine code: only the 32-bit host can run it
#endif
    }
};

DynamicCode::DynamicCode(const std::filesystem::path& specification, Reader reader) {
    static std::once_flag once;
    std::call_once(once, [] { AttributeId::initialize(); ElementId::initialize(); });
    impl_ = std::make_unique<Impl>();
    impl_->loader.reader = std::move(reader);
    try {
        if (!std::filesystem::is_regular_file(specification)) fail("missing SLEIGH specification " + specification.string());
        std::istringstream wrapper("<sleigh>" + specification.generic_string() + "</sleigh>");
        DocumentStorage storage;
        Element* root = storage.parseDocument(wrapper)->getRoot();
        storage.registerTag(root);
        impl_->translator.initialize(storage);
        impl_->context.setVariableDefault("addrsize", 1);  // 32-bit addresses
        impl_->context.setVariableDefault("opsize", 1);    // 32-bit operands
    } catch (const LowlevelError& e) {
        fail("cannot initialize the SLEIGH engine: " + e.explain);
    }
    impl_->ram = impl_->translator.getDefaultCodeSpace();
    impl_->reg = impl_->translator.getSpaceByName("register");
    impl_->uniq = impl_->translator.getUniqueSpace();
    impl_->cst = impl_->translator.getConstantSpace();
    if (!impl_->reg) fail("the SLEIGH specification has no register space");
}

DynamicCode::~DynamicCode() = default;

void DynamicCode::add_region(uint32_t base, uint32_t size) {
    std::lock_guard lock(mutex_);
    const uint32_t end = uint32_t(std::min<uint64_t>(uint64_t(base) + size, 0x100000000ull - 1));
    bool merged = false;
    for (auto& r : regions_)
        if (base <= r.second && r.first <= end) { r.first = std::min(r.first, base); r.second = std::max(r.second, end); merged = true; break; }
    if (!merged) regions_.push_back({base, end});
    uint32_t low = 0xffffffffu, high = 0;
    for (const auto& r : regions_) { low = std::min(low, r.first); high = std::max(high, r.second); }
    lowest_.store(low, std::memory_order_relaxed);
    highest_.store(high, std::memory_order_relaxed);
}

bool DynamicCode::contains(uint32_t address) const {
    if (address < lowest_.load(std::memory_order_relaxed) || address >= highest_.load(std::memory_order_relaxed)) return false;
    std::lock_guard lock(mutex_);
    for (const auto& r : regions_)
        if (address >= r.first && address < r.second) return true;
    return false;
}

std::shared_ptr<const DecodedInstruction> DynamicCode::decode(uint32_t address) {
    std::lock_guard lock(impl_->mutex);
    auto found = impl_->cache.find(address);
    if (found != impl_->cache.end()) {
        const auto& cached = *found->second;
        // Generated code may be patched after it was first executed: re-decode when its bytes changed.
        uint8_t now[16];
        impl_->loader.reread(now, int4(cached.length), Address(impl_->ram, address));
        if (std::memcmp(cached.bytes, now, cached.length) == 0) return found->second;
    }
    auto decoded = std::make_shared<DecodedInstruction>();
    decoded->address = address;
    Collector collector(*decoded, impl_->cst, impl_->reg, impl_->uniq);
    try {
        decoded->length = uint32_t(impl_->translator.oneInstruction(collector, Address(impl_->ram, address)));
    } catch (const LowlevelError& e) {
        char text[64];
        std::snprintf(text, sizeof(text), "0x%08x", address);
        fail(std::string("cannot decode runtime-generated code at ") + text + ": " + e.explain);
    }
    if (decoded->length == 0 || decoded->length > 15) fail("invalid instruction length from the decoder");
    impl_->loader.loadFill(decoded->bytes, int4(decoded->length), Address(impl_->ram, address));
    compact_unique_space(*decoded);
    impl_->cache[address] = decoded;
    ++decoded_;
    return decoded;
}

DecodedInstruction DynamicCode::decode_raw(uint32_t address) {
    std::lock_guard lock(impl_->mutex);
    DecodedInstruction decoded;
    decoded.address = address;
    Collector collector(decoded, impl_->cst, impl_->reg, impl_->uniq);
    try {
        decoded.length = uint32_t(impl_->translator.oneInstruction(collector, Address(impl_->ram, address)));
    } catch (const LowlevelError& e) {
        fail("cannot decode: " + e.explain);
    }
    return decoded;
}

void DynamicCode::set_mode(int mode) {
    std::lock_guard lock(impl_->mutex);
    impl_->mode = mode < 0 ? 0 : mode > 3 ? 3 : mode;
#ifndef NFSU2_GUEST_IDENTITY
    if (impl_->mode > 2) impl_->mode = 2;   // mode 3 emits x86-32 machine code: only the 32-bit host can run it
#endif
    for (auto& entry : impl_->blocks) impl_->retired.push_back(entry.second);
    impl_->blocks.clear();
    ++impl_->generation;
}

void DynamicCode::run(Cpu& c, uint64_t budget) {
    // Regions only ever grow, so the one holding the entry point is looked up once; leaving it ends the run.
    uint32_t lo = 0, hi = 0;
    {
        std::lock_guard lock(mutex_);
        for (const auto& r : regions_)
            if (c.pc >= r.first && c.pc < r.second) { lo = r.first; hi = r.second; break; }
    }
    // Per-thread direct-mapped lookup in front of the shared block table: a hit costs one compare of the code bytes.
    struct Slot { uint32_t pc = 0; const Impl::Block* block = nullptr; };
    static thread_local struct { uint64_t owner = 0; uint32_t generation = 0; Slot slots[256]; } local;
    if (local.owner != impl_->serial || local.generation != impl_->generation.load()) {
        local.owner = impl_->serial;
        local.generation = impl_->generation.load();
        for (auto& slot : local.slots) slot = Slot{};
    }
    while (budget > 0 && c.pc >= lo && c.pc < hi) {
        const Impl::Block* block = nullptr;
        Slot& slot = local.slots[(c.pc ^ (c.pc >> 8)) & 255];
        // Generated code may be patched after it was first executed: a block is reused only while its bytes are unchanged.
        if (slot.block && slot.pc == c.pc && impl_->loader.same(slot.block->bytes.data(), slot.block->bytes.size(), c.pc)) block = slot.block;
        if (!block) {
            std::lock_guard lock(impl_->mutex);
            const uint32_t start = c.pc;
            std::shared_ptr<Impl::Block> found_block;
            auto found = impl_->blocks.find(start);
            if (found != impl_->blocks.end()) {
                if (impl_->loader.same(found->second->bytes.data(), found->second->bytes.size(), start)) found_block = found->second;
                else impl_->retired.push_back(found->second);
            }
            if (!found_block) {
                found_block = std::make_shared<Impl::Block>();
                auto& built = *found_block;
                uint32_t at = start;
                for (unsigned n = 0; n < 32 && built.bytes.size() < 480; ++n) {
                    DecodedInstruction decoded;
                    decoded.address = at;
                    Collector collector(decoded, impl_->cst, impl_->reg, impl_->uniq);
                    try {
                        decoded.length = uint32_t(impl_->translator.oneInstruction(collector, Address(impl_->ram, at)));
                    } catch (const LowlevelError& e) {
                        if (n > 0) break;  // the failure is reported if control ever gets there
                        char text[64];
                        std::snprintf(text, sizeof(text), "0x%08x", at);
                        fail(std::string("cannot decode runtime-generated code at ") + text + ": " + e.explain);
                    }
                    if (decoded.length == 0 || decoded.length > 15) fail("invalid instruction length from the decoder");
                    compact_unique_space(decoded);
                    bool terminal = false;
                    for (const auto& op : decoded.ops)
                        if (op.opcode == CPUI_CALL || op.opcode == CPUI_CALLIND || op.opcode == CPUI_BRANCHIND || op.opcode == CPUI_RETURN ||
                            ((op.opcode == CPUI_BRANCH || op.opcode == CPUI_CBRANCH) && op.inputs[0].space != VarnodeRef::Const))
                            terminal = true;
                    uint8_t raw[16];
                    impl_->loader.loadFill(raw, int4(decoded.length), Address(impl_->ram, at));
                    built.bytes.insert(built.bytes.end(), raw, raw + decoded.length);
                    built.items.push_back(compile_instruction(decoded, impl_->mode >= 1));
                    at += decoded.length;
                    ++decoded_;
                    if (terminal || at >= hi) break;
                }
                if (impl_->mode >= 2) eliminate_dead_flags(built.items);
                if (impl_->mode >= 3) built.jit = jit_compile(built.items);
                impl_->blocks[start] = found_block;
            }
            block = found_block.get();
            slot = Slot{start, block};
        }
        if (block->jit) jit_run(c, *block->jit);
        else for (const auto& item : block->items) execute_compiled(c, item);
        const uint64_t executed = block->items.size();
        c.instructions += executed;
        budget = budget > executed ? budget - executed : 0;
    }
}
}
