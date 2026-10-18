#pragma once
// Pure SLEIGH user operations (functions of their operands only), shared by the fast backend, which calls
// them directly from generated code, and by the reference user_op() for the 3DNow! family.
// The MMX/SSE2/x87 operations already present in userops.cpp keep their original implementation there;
// the fast_optests harness compares that implementation with this one over random and boundary inputs.
#include "runtime.hpp"
#include <emmintrin.h>
#include <xmmintrin.h>
#include <cmath>
#include <cstring>

namespace nfsu2raw::uo {
using s8_t = int8_t; using s16_t = int16_t; using s32_t = int32_t; using s64_t = int64_t;
inline __m128i xm(V v){return std::bit_cast<__m128i>(v);}
inline V vx(__m128i v){return std::bit_cast<V>(v);}
inline __m128 xf(V v){return std::bit_cast<__m128>(v);}
inline V vf(__m128 v){return std::bit_cast<V>(v);}
inline int sat8(int v){return v>127?127:(v<-128?-128:v);}
inline int sat16(int v){return v>32767?32767:(v<-32768?-32768:v);}
inline int usat8(int v){return v>255?255:(v<0?0:v);}
inline int usat16(int v){return v>65535?65535:(v<0?0:v);}
inline uint64_t u64v(V v){return uint64_t(v);}

// ---- MMX (8-byte) lane helpers ----------------------------------------------------------------
template<class T,class F> inline uint64_t lanes8(uint64_t a,uint64_t b,F f){
    constexpr unsigned n=8/sizeof(T);uint64_t r=0;
    for(unsigned i=0;i<n;++i){
        const T x=T(a>>(i*sizeof(T)*8)),y=T(b>>(i*sizeof(T)*8));
        r|=uint64_t(std::make_unsigned_t<T>(f(x,y)))<<(i*sizeof(T)*8);
    }
    return r;
}
template<unsigned W> inline V paddsb(V a,V b){if constexpr(W==8)return V(lanes8<s8_t>(u64v(a),u64v(b),[](int x,int y){return sat8(x+y);}));else return vx(_mm_adds_epi8(xm(a),xm(b)));}
template<unsigned W> inline V paddsw(V a,V b){if constexpr(W==8)return V(lanes8<s16_t>(u64v(a),u64v(b),[](int x,int y){return sat16(x+y);}));else return vx(_mm_adds_epi16(xm(a),xm(b)));}
template<unsigned W> inline V paddusb(V a,V b){if constexpr(W==8)return V(lanes8<uint8_t>(u64v(a),u64v(b),[](int x,int y){return usat8(x+y);}));else return vx(_mm_adds_epu8(xm(a),xm(b)));}
template<unsigned W> inline V paddusw(V a,V b){if constexpr(W==8)return V(lanes8<uint16_t>(u64v(a),u64v(b),[](int x,int y){return usat16(x+y);}));else return vx(_mm_adds_epu16(xm(a),xm(b)));}
template<unsigned W> inline V psubsb(V a,V b){if constexpr(W==8)return V(lanes8<s8_t>(u64v(a),u64v(b),[](int x,int y){return sat8(x-y);}));else return vx(_mm_subs_epi8(xm(a),xm(b)));}
template<unsigned W> inline V psubsw(V a,V b){if constexpr(W==8)return V(lanes8<s16_t>(u64v(a),u64v(b),[](int x,int y){return sat16(x-y);}));else return vx(_mm_subs_epi16(xm(a),xm(b)));}
template<unsigned W> inline V psubusb(V a,V b){if constexpr(W==8)return V(lanes8<uint8_t>(u64v(a),u64v(b),[](int x,int y){return usat8(x-y);}));else return vx(_mm_subs_epu8(xm(a),xm(b)));}
template<unsigned W> inline V psubusw(V a,V b){if constexpr(W==8)return V(lanes8<uint16_t>(u64v(a),u64v(b),[](int x,int y){return usat16(x-y);}));else return vx(_mm_subs_epu16(xm(a),xm(b)));}
template<unsigned W> inline V pmulhw(V a,V b){if constexpr(W==8)return V(lanes8<s16_t>(u64v(a),u64v(b),[](int x,int y){return (x*y)>>16;}));else return vx(_mm_mulhi_epi16(xm(a),xm(b)));}
template<unsigned W> inline V pmaddwd(V a,V b){
    if constexpr(W==8){
        const uint64_t x=u64v(a),y=u64v(b);uint64_t r=0;
        for(unsigned i=0;i<2;++i){
            // Sum in unsigned arithmetic: 0x8000*0x8000*2 wraps to INT32_MIN exactly as the hardware does.
            uint32_t sum=0;
            for(unsigned j=0;j<2;++j){const int p=int16_t(x>>((2*i+j)*16))*int16_t(y>>((2*i+j)*16));sum+=uint32_t(p);}
            r|=uint64_t(sum)<<(32*i);
        }
        return V(r);
    }else return vx(_mm_madd_epi16(xm(a),xm(b)));
}
template<unsigned W> inline V psllw(V a,V b){
    if constexpr(W==8){const uint64_t count=u64v(b);return V(count>15?0:lanes8<uint16_t>(u64v(a),0,[count](int x,int){return x<<count;}));}
    else return vx(_mm_sll_epi16(xm(a),xm(b)));
}
template<unsigned W> inline V psraw(V a,V b){
    if constexpr(W==8){const uint64_t count=u64v(b)>15?15:u64v(b);return V(lanes8<s16_t>(u64v(a),0,[count](int x,int){return x>>count;}));}
    else return vx(_mm_sra_epi16(xm(a),xm(b)));
}
template<unsigned W> inline V packssdw(V a,V b){
    if constexpr(W==8){
        const uint64_t x=u64v(a),y=u64v(b);uint64_t r=0;
        const int32_t d[4]={int32_t(x),int32_t(x>>32),int32_t(y),int32_t(y>>32)};
        for(unsigned i=0;i<4;++i)r|=uint64_t(uint16_t(sat16(d[i])))<<(16*i);
        return V(r);
    }else return vx(_mm_packs_epi32(xm(a),xm(b)));
}
template<unsigned W> inline V packsswb(V a,V b){
    if constexpr(W==8){
        const uint64_t x=u64v(a),y=u64v(b);uint64_t r=0;
        for(unsigned i=0;i<4;++i){
            r|=uint64_t(uint8_t(sat8(int16_t(x>>(16*i)))))<<(8*i);
            r|=uint64_t(uint8_t(sat8(int16_t(y>>(16*i)))))<<(8*(i+4));
        }
        return V(r);
    }else return vx(_mm_packs_epi16(xm(a),xm(b)));
}
template<unsigned W> inline V movdq2q(V,V b){return b&mask(8);}
template<unsigned W> inline V rcpps(V,V b){return vf(_mm_rcp_ps(xf(b)));}
template<unsigned W> inline V rcpss(V a,V b){return (a&~mask(4))|(vf(_mm_rcp_ss(xf(b)))&mask(4));}
template<unsigned W> inline V rsqrtss(V a,V b){return (a&~mask(4))|(vf(_mm_rsqrt_ss(xf(b)))&mask(4));}

// ---- x87 transcendental operations on 80-bit values (same instruction sequences as the reference) ----
struct F80{uint8_t bytes[10];};
inline F80 ext(V v){F80 f{};std::memcpy(&f,&v,10);return f;}
inline V val(const F80& f){V v=0;std::memcpy(&v,&f,10);return v;}
template<unsigned W> inline V fsin(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fsin; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fcos(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fcos; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V f2xm1(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; f2xm1; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fptan(V a,V){F80 x=ext(a),z{};asm volatile("fldt %1; fptan; fstp %%st(0); fstpt %0":"=m"(z):"m"(x):"st");return val(z);}
template<unsigned W> inline V fpatan(V a,V b){F80 x=ext(a),y=ext(b),z{};asm volatile("fldt %1; fldt %2; fpatan; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");return val(z);}
template<unsigned W> inline V fscale(V a,V b){F80 x=ext(a),y=ext(b),z{};asm volatile("fldt %2; fldt %1; fscale; fstpt %0; fstp %%st(0)":"=m"(z):"m"(x),"m"(y):"st");return val(z);}
template<unsigned W> inline V log2(V a,V){F80 x=ext(a),z{};asm volatile("fld1; fldt %1; fyl2x; fstpt %0":"=m"(z):"m"(x):"st");return val(z);}

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
