#pragma once
#include "guest_memory.hpp"
#include <array>
#include <bit>
#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <string>
#include <vector>
#include "host.hpp"

namespace nfsu2raw {
#if defined(_M_IX86) || defined(__i386__)
using V = unsigned _BitInt(128);
using S = _BitInt(128);
#else
using V = unsigned __int128;
using S = __int128;
#endif
struct Fault : std::runtime_error { using std::runtime_error::runtime_error; };
struct Region {
    uint32_t base; std::vector<uint8_t> bytes;   // `bytes` holds the storage on the vector model; on the arena the memory is in the arena and `bytes` is empty
    uint64_t length = 0;                         // size of the region in both models (bytes.size() is not)
    bool from_allocator = false;                 // arena model: the base came from the allocator (freed with the processor), not from a fixed commit
};
// Bytes of Cpu::regs that hold guest registers (the highest one in the export ends at 0x2236; tools/generate_fast.py refuses a
// register beyond this span). A processor starting a call clears only these (a callback used to clear all 16 KiB: half its cost).
constexpr size_t guest_register_span = 0x2400;
struct Cpu {
    ~Cpu();
    std::array<uint8_t, 0x4000> regs{};
    std::vector<uint8_t> unique = std::vector<uint8_t>(0x400000);
    std::vector<Region> memory;
    uint32_t pc=0;
    uint32_t chain=0;   // page-to-page tail calls since the dispatch loop last had control (fast backend)
    uint64_t instructions=0;
    uint8_t* pointer(uint32_t address, size_t size);
    void map(uint32_t base, size_t size);
};
constexpr V mask(unsigned n) { return n>=16 ? ~V(0) : (V(1)<<(n*8))-1; }
inline S signed_value(V a,unsigned n) {
    a&=mask(n); if(n<16 && (a>>(n*8-1))) a|=~mask(n); return static_cast<S>(a);
}
template<unsigned N> inline V read_bytes(const uint8_t* p) {
    static_assert(N>0 && N<=16); V v=0; std::memcpy(&v,p,N);return v;
}
template<unsigned N> inline void write_bytes(uint8_t* p,V v) {
    static_assert(N>0 && N<=16);std::memcpy(p,&v,N);
}
template<unsigned N> inline V r(Cpu& c,uint32_t o){return read_bytes<N>(c.regs.data()+o);}
template<unsigned N> inline V u(Cpu& c,uint32_t o){return read_bytes<N>(c.unique.data()+o);}
template<unsigned N> inline V m(Cpu& c,V a){return read_bytes<N>(c.pointer(static_cast<uint32_t>(a),N));}
template<unsigned N> inline void wr(Cpu& c,uint32_t o,V v){write_bytes<N>(c.regs.data()+o,v);}
template<unsigned N> inline void wu(Cpu& c,uint32_t o,V v){write_bytes<N>(c.unique.data()+o,v);}
template<unsigned N> inline void wm(Cpu& c,V a,V v){write_bytes<N>(c.pointer(static_cast<uint32_t>(a),N),v);}
V float_op(const char* op,V a,unsigned an,V b,unsigned bn,unsigned out);
V user_op(Cpu& c,unsigned id,std::initializer_list<V> args);
// The guest's x87 control word and MXCSR drive the host FPU: FLDCW/LDMXCSR (a write to the register) program the
// host, and FNSTCW/STMXCSR (a read) observe it. Rounding for FIST/FRNDINT, precision control and exception
// masks therefore behave as on the original CPU, including the CRT's temporary switch to truncation.
inline uint16_t x87_store_control(){return host::x87_control_get();}
inline void x87_load_control(uint16_t cw){host::x87_control_set(cw);}
inline uint32_t mxcsr_store(){return host::mxcsr_get();}
inline void mxcsr_load(uint32_t value){host::mxcsr_set(value);}
constexpr uint32_t reg_fpu_control=0x10a0,reg_mxcsr=0x1094;
[[noreturn]] void missing_instruction(uint32_t address);

enum class Op { COPY,INT_ZEXT,INT_SEXT,INT_ADD,INT_SUB,INT_MULT,INT_DIV,INT_REM,
 INT_SDIV,INT_SREM,INT_AND,INT_OR,INT_XOR,INT_NEGATE,INT_2COMP,INT_LEFT,INT_RIGHT,
 INT_SRIGHT,INT_EQUAL,INT_NOTEQUAL,INT_LESS,INT_LESSEQUAL,INT_SLESS,INT_SLESSEQUAL,
 INT_CARRY,INT_SCARRY,INT_SBORROW,BOOL_NEGATE,BOOL_AND,BOOL_OR,BOOL_XOR,POPCOUNT,SUBPIECE };
template<Op O,unsigned OUT,unsigned AN,unsigned BN=1> inline V eval(V a,V b=0) {
    a&=mask(AN);b&=mask(BN);
    if constexpr(O==Op::COPY || O==Op::INT_ZEXT)return a;
    else if constexpr(O==Op::INT_SEXT)return static_cast<V>(signed_value(a,AN));
    else if constexpr(O==Op::INT_ADD)return a+b;
    else if constexpr(O==Op::INT_SUB)return a-b;
    else if constexpr(O==Op::INT_MULT)return a*b;
    else if constexpr(O==Op::INT_DIV || O==Op::INT_REM) {
        if(!b)throw Fault("integer division by zero");
        static_assert(AN<=8 && BN<=8,"wide division requires an explicit lowering");
        if constexpr(O==Op::INT_DIV)return uint64_t(a)/uint64_t(b);else return uint64_t(a)%uint64_t(b);
    } else if constexpr(O==Op::INT_SDIV || O==Op::INT_SREM) {
        static_assert(AN<=8 && BN<=8);int64_t x=static_cast<int64_t>(signed_value(a,AN));
        int64_t y=static_cast<int64_t>(signed_value(b,BN));
        if(!y || (x==INT64_MIN && y==-1))throw Fault("signed integer division fault");
        if constexpr(O==Op::INT_SDIV)return static_cast<V>(x/y);else return static_cast<V>(x%y);
    } else if constexpr(O==Op::INT_AND)return a&b;
    else if constexpr(O==Op::INT_OR)return a|b;
    else if constexpr(O==Op::INT_XOR)return a^b;
    else if constexpr(O==Op::INT_NEGATE)return ~a;
    else if constexpr(O==Op::INT_2COMP)return V(0)-a;
    else if constexpr(O==Op::INT_LEFT)return b>=AN*8 ? 0 : (a<<static_cast<unsigned>(b));
    else if constexpr(O==Op::INT_RIGHT)return b>=AN*8 ? 0 : (a>>static_cast<unsigned>(b));
    else if constexpr(O==Op::INT_SRIGHT) {
        if(b>=AN*8)return signed_value(a,AN)<0 ? mask(OUT):0;
        return static_cast<V>(signed_value(a,AN)>>static_cast<unsigned>(b));
    } else if constexpr(O==Op::INT_EQUAL)return a==b;
    else if constexpr(O==Op::INT_NOTEQUAL)return a!=b;
    else if constexpr(O==Op::INT_LESS)return a<b;
    else if constexpr(O==Op::INT_LESSEQUAL)return a<=b;
    else if constexpr(O==Op::INT_SLESS)return signed_value(a,AN)<signed_value(b,BN);
    else if constexpr(O==Op::INT_SLESSEQUAL)return signed_value(a,AN)<=signed_value(b,BN);
    else if constexpr(O==Op::INT_CARRY)return ((a+b)&mask(AN))<a;
    else if constexpr(O==Op::INT_SCARRY) {
        V s=(a+b)&mask(AN);return ((~(a^b)&(a^s))>>(AN*8-1))&1;
    } else if constexpr(O==Op::INT_SBORROW) {
        V d=(a-b)&mask(AN);return (((a^b)&(a^d))>>(AN*8-1))&1;
    } else if constexpr(O==Op::BOOL_NEGATE)return a==0;
    else if constexpr(O==Op::BOOL_AND)return bool(a)&&bool(b);
    else if constexpr(O==Op::BOOL_OR)return bool(a)||bool(b);
    else if constexpr(O==Op::BOOL_XOR)return bool(a)!=bool(b);
    else if constexpr(O==Op::POPCOUNT)return std::popcount(uint64_t(a))+std::popcount(uint64_t(a>>64));
    else if constexpr(O==Op::SUBPIECE)return b>=16 ? 0 : a>>(static_cast<unsigned>(b)*8);
}

uint32_t dispatch(Cpu& c);
void step(Cpu& c);
uint64_t run(Cpu& c,uint32_t stop,uint64_t budget);
extern const uint64_t instruction_count;
extern const uint64_t pcode_count;
extern const uint64_t function_count;
extern const char input_sha256[];
const char* user_name(unsigned id);
#if __has_include("generated/extern_templates.inc")
#include "generated/extern_templates.inc"
#endif
}
