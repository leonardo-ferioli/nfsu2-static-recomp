#pragma once
// Runtime helpers for the fast static backend (generated_fast/*). A translated page is one C++
// function: guest registers live in a local byte array for the duration of the page, guest memory
// is accessed through the identical 32-bit host address, and operations use native integer types.
// The reference backend (generated/*, runtime.hpp eval<>) remains the oracle for differential tests.
#include "runtime.hpp"
#include "mods.hpp"
#include "difftrace.hpp"
#include "userops_pure.hpp"
#include <cmath>

namespace nfsu2raw {
using u8 = uint8_t; using u16 = uint16_t; using u32 = uint32_t; using u64 = uint64_t;
using s8 = int8_t;  using s16 = int16_t;  using s32 = int32_t;  using s64 = int64_t;

#define NFSU2_AI inline __attribute__((always_inline))
template<class T> NFSU2_AI T ld(const void* p){T v;__builtin_memcpy(&v,p,sizeof(T));return v;}
template<class T> NFSU2_AI void st(void* p,T v){__builtin_memcpy(p,&v,sizeof(T));}
NFSU2_AI u8  r1(const void* p){return *static_cast<const u8*>(p);}
NFSU2_AI u16 r2(const void* p){return ld<u16>(p);}
NFSU2_AI u32 r4(const void* p){return ld<u32>(p);}
NFSU2_AI u64 r8(const void* p){return ld<u64>(p);}
NFSU2_AI void w1(void* p,u8 v){*static_cast<u8*>(p)=v;}
NFSU2_AI void w2(void* p,u16 v){st<u16>(p,v);}
NFSU2_AI void w4(void* p,u32 v){st<u32>(p,v);}
NFSU2_AI void w8(void* p,u64 v){st<u64>(p,v);}
// Guest memory shares the host's 32-bit address space, so a guest address is the host address.
NFSU2_AI void* gp(u32 a){return nfsu2::guest::to_host(a);}
NFSU2_AI u8  m1(u32 a){return r1(gp(a));}
NFSU2_AI u16 m2(u32 a){return r2(gp(a));}
NFSU2_AI u32 m4(u32 a){return r4(gp(a));}
NFSU2_AI u64 m8(u32 a){return r8(gp(a));}
NFSU2_AI void s1(u32 a,u8 v){w1(gp(a),v);}
NFSU2_AI void s2(u32 a,u16 v){w2(gp(a),v);}
NFSU2_AI void s4(u32 a,u32 v){w4(gp(a),v);}
NFSU2_AI void s8_(u32 a,u64 v){w8(gp(a),v);}
// Wide (10/16 byte) values for the generic path, which reuses the reference eval<> semantics.
template<unsigned N> NFSU2_AI V rv(const void* p){V v=0;__builtin_memcpy(&v,p,N);return v;}
template<unsigned N> NFSU2_AI void wv(void* p,V v){__builtin_memcpy(p,&v,N);}

template<class T> NFSU2_AI T shl(T a,u64 b){return b>=sizeof(T)*8?T(0):T(a<<b);}
template<class T> NFSU2_AI T shr(T a,u64 b){return b>=sizeof(T)*8?T(0):T(a>>b);}
template<class T> NFSU2_AI T sar(T a,u64 b){
    using S=std::make_signed_t<T>;
    if(b>=sizeof(T)*8)return S(a)<0?T(~T(0)):T(0);
    return T(S(a)>>b);
}
template<class T> NFSU2_AI u8 carry(T a,T b){return u8(T(a+b)<a);}
template<class T> NFSU2_AI u8 scarry(T a,T b){using S=std::make_signed_t<T>;S t;return u8(__builtin_add_overflow(S(a),S(b),&t));}
template<class T> NFSU2_AI u8 sborrow(T a,T b){using S=std::make_signed_t<T>;S t;return u8(__builtin_sub_overflow(S(a),S(b),&t));}

[[noreturn]] void fast_fault(Cpu& c,const char* what,u32 pc);
// Compiler barrier for runtime services that read or write the register file through Cpu::regs.
#define NFSU2_BARRIER(R) __asm__ volatile("" :: "r"(R) : "memory")

// IEEE operations on SSE-sized values use native hardware arithmetic.
NFSU2_AI float f32(u32 v){return std::bit_cast<float>(v);}
NFSU2_AI double f64(u64 v){return std::bit_cast<double>(v);}
NFSU2_AI u32 b32(float v){return std::bit_cast<u32>(v);}
NFSU2_AI u64 b64(double v){return std::bit_cast<u64>(v);}

// N bytes of guest memory as an asm operand: a passed-through x87 instruction names exactly what it reads or writes (speed layer).
template<unsigned N> struct XM {u8 b[N];};
// x87 80-bit helpers: the same instruction sequences as the reference float_op, minus its string dispatch.
struct X80 {u8 b[10];};
NFSU2_AI X80 x80(const void* p){X80 x;__builtin_memcpy(&x,p,10);return x;}
NFSU2_AI void x80_add(void* d,const void* pa,const void* pb){X80 x=x80(pa),y=x80(pb),z;asm volatile("fldt %1; fldt %2; faddp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_sub(void* d,const void* pa,const void* pb){X80 x=x80(pa),y=x80(pb),z;asm volatile("fldt %2; fldt %1; fsubp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_mul(void* d,const void* pa,const void* pb){X80 x=x80(pa),y=x80(pb),z;asm volatile("fldt %1; fldt %2; fmulp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_div(void* d,const void* pa,const void* pb){X80 x=x80(pa),y=x80(pb),z;asm volatile("fldt %2; fldt %1; fdivp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_sqrt(void* d,const void* pa){X80 x=x80(pa),z;asm volatile("fldt %1; fsqrt; fstpt %0":"=m"(z):"m"(x):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_round(void* d,const void* pa){X80 x=x80(pa),z;asm volatile("fldt %1; frndint; fstpt %0":"=m"(z):"m"(x):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_neg(void* d,const void* pa){X80 x=x80(pa);x.b[9]^=0x80;__builtin_memcpy(d,&x,10);}
NFSU2_AI void x80_abs(void* d,const void* pa){X80 x=x80(pa);x.b[9]&=0x7f;__builtin_memcpy(d,&x,10);}
NFSU2_AI u8 x80_nan(const void* pa){u64 sig;u16 exp;__builtin_memcpy(&sig,pa,8);__builtin_memcpy(&exp,static_cast<const u8*>(pa)+8,2);return u8((exp&0x7fff)==0x7fff && (sig&0x7fffffffffffffffull)!=0);}
// Compare returns {equal, less, unordered} exactly like the reference fucomip sequence.
struct X80Cmp {u8 eq,lt,un;};
NFSU2_AI X80Cmp x80_cmp(const void* pa,const void* pb){
    X80 x=x80(pa),y=x80(pb);X80Cmp r;
    asm volatile("fldt %3; fldt %4; fucomip %%st(1), %%st; fstp %%st(0); sete %0; setb %1; setp %2"
        :"=qm"(r.eq),"=qm"(r.lt),"=qm"(r.un):"m"(y),"m"(x):"st","cc");
    return r;
}
NFSU2_AI void x80_from_f32(void* d,u32 v){float x=f32(v);X80 z;asm volatile("flds %1; fstpt %0":"=m"(z):"m"(x):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI void x80_from_f64(void* d,u64 v){double x=f64(v);X80 z;asm volatile("fldl %1; fstpt %0":"=m"(z):"m"(x):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI u32 x80_to_f32(const void* pa){X80 x=x80(pa);float z;asm volatile("fldt %1; fstps %0":"=m"(z):"m"(x):"st");return b32(z);}
NFSU2_AI u64 x80_to_f64(const void* pa){X80 x=x80(pa);double z;asm volatile("fldt %1; fstpl %0":"=m"(z):"m"(x):"st");return b64(z);}
NFSU2_AI void x80_from_i64(void* d,s64 v){X80 z;asm volatile("fildq %1; fstpt %0":"=m"(z):"m"(v):"st");__builtin_memcpy(d,&z,10);}
NFSU2_AI s64 x80_trunc(const void* pa){X80 x=x80(pa);s64 n;asm volatile("fldt %1; fisttpq %0":"=m"(n):"m"(x):"st");return n;}

#ifdef NFSU2_DIFF_TRACE
#define NFSU2_TR(a) diff_trace_pc(u32(a))
#define NFSU2_TR_EXIT(page,t) do{ if(((u32(t))>>12)!=(page))diff_trace_exit(c,u32(t)); }while(0)
#else
#define NFSU2_TR(a) ((void)0)
#define NFSU2_TR_EXIT(page,t) ((void)0)
#endif
}
