#pragma once
// Pure SLEIGH user operations (functions of their operands only), shared by the fast backend, which calls
// them directly from generated code, and by the reference user_op() for the 3DNow! family.
// Portable C++ (no x86 intrinsics): the same code runs on every host. On x86 hosts userops.cpp still carries the original
// intrinsic implementation of the MMX/SSE2 operations, which the fast_optests harness compares with this one over random and
// boundary inputs, so this portable version is validated against the hardware instructions.
#include "runtime.hpp"
#include "x87_soft.hpp"
#include <cmath>
#include <cstring>

namespace nfsu2raw::uo {
using s8_t = int8_t; using s16_t = int16_t; using s32_t = int32_t; using s64_t = int64_t;
inline int sat8(int v){return v>127?127:(v<-128?-128:v);}
inline int sat16(int v){return v>32767?32767:(v<-32768?-32768:v);}
inline int usat8(int v){return v>255?255:(v<0?0:v);}
inline int usat16(int v){return v>65535?65535:(v<0?0:v);}
inline uint64_t u64v(V v){return uint64_t(v);}

// ---- lane helpers: 8-byte (MMX) and 16-byte (SSE2) registers --------------------------------------------------------------
template<class T,class F> inline uint64_t lanes8(uint64_t a,uint64_t b,F f){
    constexpr unsigned n=8/sizeof(T);uint64_t r=0;
    for(unsigned i=0;i<n;++i){
        const T x=T(a>>(i*sizeof(T)*8)),y=T(b>>(i*sizeof(T)*8));
        r|=uint64_t(std::make_unsigned_t<T>(f(x,y)))<<(i*sizeof(T)*8);
    }
    return r;
}
template<class T,class F> inline V lanes16(V a,V b,F f){
    constexpr unsigned n=16/sizeof(T);using U=std::make_unsigned_t<T>;
    T x[n],y[n];U r[n];std::memcpy(x,&a,16);std::memcpy(y,&b,16);
    for(unsigned i=0;i<n;++i)r[i]=U(f(x[i],y[i]));
    V o=0;std::memcpy(&o,r,16);return o;
}
template<unsigned W,class T,class F> inline V lanes(V a,V b,F f){
    if constexpr(W==8)return V(lanes8<T>(u64v(a),u64v(b),f));else return lanes16<T>(a,b,f);
}
template<unsigned W> inline V paddsb(V a,V b){return lanes<W,s8_t>(a,b,[](int x,int y){return sat8(x+y);});}
template<unsigned W> inline V paddsw(V a,V b){return lanes<W,s16_t>(a,b,[](int x,int y){return sat16(x+y);});}
template<unsigned W> inline V paddusb(V a,V b){return lanes<W,uint8_t>(a,b,[](int x,int y){return usat8(x+y);});}
template<unsigned W> inline V paddusw(V a,V b){return lanes<W,uint16_t>(a,b,[](int x,int y){return usat16(x+y);});}
template<unsigned W> inline V psubsb(V a,V b){return lanes<W,s8_t>(a,b,[](int x,int y){return sat8(x-y);});}
template<unsigned W> inline V psubsw(V a,V b){return lanes<W,s16_t>(a,b,[](int x,int y){return sat16(x-y);});}
template<unsigned W> inline V psubusb(V a,V b){return lanes<W,uint8_t>(a,b,[](int x,int y){return usat8(x-y);});}
template<unsigned W> inline V psubusw(V a,V b){return lanes<W,uint16_t>(a,b,[](int x,int y){return usat16(x-y);});}
template<unsigned W> inline V pmulhw(V a,V b){return lanes<W,s16_t>(a,b,[](int x,int y){return (x*y)>>16;});}
template<unsigned W> inline V pmaddwd(V a,V b){
    // Sum in unsigned arithmetic: 0x8000*0x8000*2 wraps to INT32_MIN exactly as the hardware does.
    constexpr unsigned n=W/4;int16_t x[W/2],y[W/2];uint32_t r[n];
    std::memcpy(x,&a,W);std::memcpy(y,&b,W);
    for(unsigned i=0;i<n;++i)r[i]=uint32_t(int(x[2*i])*int(y[2*i]))+uint32_t(int(x[2*i+1])*int(y[2*i+1]));
    V o=0;std::memcpy(&o,r,W);return o;
}
template<unsigned W> inline V psllw(V a,V b){
    const uint64_t count=u64v(b);
    return count>15?V(0):lanes<W,uint16_t>(a,V(0),[count](int x,int){return x<<count;});
}
template<unsigned W> inline V psraw(V a,V b){
    const uint64_t count=u64v(b)>15?15:u64v(b);
    return lanes<W,s16_t>(a,V(0),[count](int x,int){return x>>count;});
}
template<unsigned W> inline V packssdw(V a,V b){
    constexpr unsigned n=W/4;int32_t d[2*n];int16_t r[2*n];
    std::memcpy(d,&a,W);std::memcpy(d+n,&b,W);
    for(unsigned i=0;i<2*n;++i)r[i]=int16_t(sat16(d[i]));
    V o=0;std::memcpy(&o,r,W);return o;
}
template<unsigned W> inline V packsswb(V a,V b){
    constexpr unsigned n=W/2;int16_t d[2*n];int8_t r[2*n];
    std::memcpy(d,&a,W);std::memcpy(d+n,&b,W);
    for(unsigned i=0;i<2*n;++i)r[i]=int8_t(sat8(d[i]));
    V o=0;std::memcpy(&o,r,W);return o;
}
template<unsigned W> inline V movdq2q(V,V b){return b&mask(8);}
// Reciprocal estimates: the instructions return a ~12-bit approximation that differs between processors. x86 hosts use the
// instruction (what the game ran on); elsewhere the correctly rounded value, which every program written for the estimate accepts.
#if defined(NFSU2_ISA_X86)
inline float rcp_estimate(float x){return _mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(x)));}
inline float rsqrt_estimate(float x){return _mm_cvtss_f32(_mm_rsqrt_ss(_mm_set_ss(x)));}
#else
inline float rcp_estimate(float x){return 1.0f/x;}
inline float rsqrt_estimate(float x){return 1.0f/std::sqrt(x);}
#endif
template<unsigned W> inline V rcpps(V,V b){
    float x[4],r[4];std::memcpy(x,&b,16);for(unsigned i=0;i<4;++i)r[i]=rcp_estimate(x[i]);
    V o=0;std::memcpy(&o,r,16);return o;
}
template<unsigned W> inline V rcpss(V a,V b){return (a&~mask(4))|V(std::bit_cast<uint32_t>(rcp_estimate(std::bit_cast<float>(uint32_t(b)))));}
template<unsigned W> inline V rsqrtss(V a,V b){return (a&~mask(4))|V(std::bit_cast<uint32_t>(rsqrt_estimate(std::bit_cast<float>(uint32_t(b)))));}

// ---- x87 transcendental operations on 80-bit values ---------------------------------------------------------------------------
struct F80{uint8_t bytes[10];};
inline F80 ext(V v){F80 f{};std::memcpy(&f,&v,10);return f;}
inline V val(const F80& f){V v=0;std::memcpy(&v,&f,10);return v;}
#if defined(NFSU2_X87_HOST_ASM)
// On x86 the host FPU, with the same instruction sequences as the reference.
template<unsigned W> inline V fsin(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fsin; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fcos(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fcos; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V f2xm1(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; f2xm1; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fptan(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fptan; fstp %%st(0); fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fpatan(V a,V b){F80 x=ext(a),y=ext(b),z{};asm volatile("fldt %1; fldt %2; fpatan; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");return val(z);}
template<unsigned W> inline V fscale(V a,V b){F80 x=ext(a),y=ext(b),z{};asm volatile("fldt %2; fldt %1; fscale; fstpt %0; fstp %%st(0)":"=m"(z):"m"(x),"m"(y):"st");return val(z);}
template<unsigned W> inline V log2(V a,V){F80 x=ext(a),z{};asm volatile("fld1; fldt %1; fyl2x; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
#else
// Elsewhere: computed in double and rounded to the extended format (the instructions are not correctly rounded either).
inline double to_double(V v){F80 f=ext(v);return std::bit_cast<double>(x87soft::to_f64(x87soft::load(&f),x87soft::Ctl{0,53}));}
inline V from_double(double d){F80 f;x87soft::store(&f,x87soft::from_f64(std::bit_cast<uint64_t>(d)));return val(f);}
template<unsigned W> inline V fsin(V a,V){return from_double(std::sin(to_double(a)));}
template<unsigned W> inline V fcos(V a,V){return from_double(std::cos(to_double(a)));}
template<unsigned W> inline V f2xm1(V a,V){return from_double(std::expm1(to_double(a)*0.69314718055994530942));}
template<unsigned W> inline V fptan(V a,V){return from_double(std::tan(to_double(a)));}
template<unsigned W> inline V fpatan(V a,V b){return from_double(std::atan2(to_double(a),to_double(b)));}
template<unsigned W> inline V fscale(V a,V b){return from_double(std::ldexp(to_double(a),int(std::trunc(to_double(b)))));}
template<unsigned W> inline V log2(V a,V){return from_double(std::log2(to_double(a)));}
#endif

// ---- AMD 3DNow! packed single-precision operations (8-byte registers: two float lanes) -----------
inline float lane(uint64_t v,unsigned i){return std::bit_cast<float>(uint32_t(v>>(32*i)));}
inline uint64_t pack(uint32_t lo,uint32_t hi){return uint64_t(lo)|(uint64_t(hi)<<32);}
inline uint32_t bits32(float f){return std::bit_cast<uint32_t>(f);}
template<class F> inline V lanes_f(V a,V b,F f){const uint64_t x=u64v(a),y=u64v(b);return V(pack(bits32(f(lane(x,0),lane(y,0))),bits32(f(lane(x,1),lane(y,1)))));}
template<unsigned W> inline V pfadd(V a,V b){return lanes_f(a,b,[](float x,float y){return x+y;});}
template<unsigned W> inline V pfsub(V a,V b){return lanes_f(a,b,[](float x,float y){return x-y;});}
template<unsigned W> inline V pfsubr(V a,V b){return lanes_f(a,b,[](float x,float y){return y-x;});}
template<unsigned W> inline V pfmul(V a,V b){return lanes_f(a,b,[](float x,float y){return x*y;});}
template<unsigned W> inline V pfmax(V a,V b){return lanes_f(a,b,[](float x,float y){return x>y?x:y;});}
template<unsigned W> inline V pfmin(V a,V b){return lanes_f(a,b,[](float x,float y){return x<y?x:y;});}
template<class F> inline V compare_f(V a,V b,F f){const uint64_t x=u64v(a),y=u64v(b);
    return V(pack(f(lane(x,0),lane(y,0))?0xffffffffu:0,f(lane(x,1),lane(y,1))?0xffffffffu:0));}
template<unsigned W> inline V pfcmpeq(V a,V b){return compare_f(a,b,[](float x,float y){return x==y;});}
template<unsigned W> inline V pfcmpge(V a,V b){return compare_f(a,b,[](float x,float y){return x>=y;});}
template<unsigned W> inline V pfcmpgt(V a,V b){return compare_f(a,b,[](float x,float y){return x>y;});}
// Horizontal operations: the destination pair feeds the low lane, the source pair the high lane.
template<unsigned W> inline V pfacc(V a,V b){const uint64_t x=u64v(a),y=u64v(b);return V(pack(bits32(lane(x,0)+lane(x,1)),bits32(lane(y,0)+lane(y,1))));}
template<unsigned W> inline V pfnacc(V a,V b){const uint64_t x=u64v(a),y=u64v(b);return V(pack(bits32(lane(x,0)-lane(x,1)),bits32(lane(y,0)-lane(y,1))));}
template<unsigned W> inline V pfpnacc(V a,V b){const uint64_t x=u64v(a),y=u64v(b);return V(pack(bits32(lane(x,0)-lane(x,1)),bits32(lane(y,0)+lane(y,1))));}
template<unsigned W> inline V pswapd(V,V b){const uint64_t y=u64v(b);return V((y<<32)|(y>>32));}
template<unsigned W> inline V pi2fd(V,V b){const uint64_t y=u64v(b);return V(pack(bits32(float(int32_t(y))),bits32(float(int32_t(y>>32)))));}
inline uint32_t to_int32_saturating(float f){
    if(f!=f)return 0x80000000u;
    if(f>=2147483648.0f)return 0x7fffffffu;
    if(f<=-2147483648.0f)return 0x80000000u;
    return uint32_t(int32_t(f));
}
template<unsigned W> inline V pf2id(V,V b){const uint64_t y=u64v(b);return V(pack(to_int32_saturating(lane(y,0)),to_int32_saturating(lane(y,1))));}
}
