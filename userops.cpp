#include "runtime.hpp"
#include "userops_pure.hpp"
#include <map>
#include <intrin.h>
#include <xmmintrin.h>
#include <mmintrin.h>
#include <emmintrin.h>
#include <algorithm>
#include <cstdio>
#include <mutex>
#include <atomic>
#if defined(NFSU2_NATIVE32) || defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif

namespace nfsu2raw {
namespace {
struct F80{uint8_t bytes[10];};
F80 ext(V v){F80 f{};std::memcpy(&f,&v,10);return f;}
V val(const F80& f){V v=0;std::memcpy(&v,&f,10);return v;}
__m128 simd(V v){return std::bit_cast<__m128>(v);}
V bits(__m128 v){return std::bit_cast<V>(v);}
__m64 mm(V v){return std::bit_cast<__m64>(uint64_t(v));}
V bits(__m64 v){auto z=std::bit_cast<uint64_t>(v);_mm_empty();return z;}
std::recursive_mutex guest_bus;
}
V user_op(Cpu& c,unsigned id,std::initializer_list<V> input){
    const unsigned width=id>>16;id&=0xffff;
    const std::string name=user_name(id);auto it=input.begin();
    const V a=input.size()>0?*it++:0,b=input.size()>1?*it++:0;
    if(name=="cpuid" || name.starts_with("cpuid_")){
#ifdef NFSU2_NATIVE32
        c.map(0,4096);const uint32_t scratch=c.memory.back().base;
#else
        constexpr uint32_t scratch=0x7ffd0000;
        bool mapped=false;for(const auto& region:c.memory)if(region.base==scratch)mapped=true;
        if(!mapped)c.map(scratch,4096);
#endif
        int result[4];__cpuidex(result,int(uint32_t(a)),int(uint32_t(r<4>(c,4))));
        wm<4>(c,scratch,uint32_t(result[0]));wm<4>(c,scratch+4,uint32_t(result[1]));
        wm<4>(c,scratch+8,uint32_t(result[3]));wm<4>(c,scratch+12,uint32_t(result[2]));return scratch;
    }
    if(name=="rdtsc"){
        static const bool deterministic=GetEnvironmentVariableA("NFSU2_DETERMINISTIC_TIME",nullptr,0)!=0;
        static std::atomic<uint64_t> fake{4000000000ull};
        return deterministic?fake.fetch_add(5000):__rdtsc();
    }
    if(name=="LOCK"){guest_bus.lock();return 0;}
    if(name=="UNLOCK"){guest_bus.unlock();return 0;}
    if(name=="movdq2q")return b&mask(8);
    if(width==16){
        const __m128i x=std::bit_cast<__m128i>(a),y=std::bit_cast<__m128i>(b);
        if(name=="packssdw")return std::bit_cast<V>(_mm_packs_epi32(x,y));
        if(name=="packsswb")return std::bit_cast<V>(_mm_packs_epi16(x,y));
        if(name=="paddsb")return std::bit_cast<V>(_mm_adds_epi8(x,y));
        if(name=="paddsw")return std::bit_cast<V>(_mm_adds_epi16(x,y));
        if(name=="paddusb")return std::bit_cast<V>(_mm_adds_epu8(x,y));
        if(name=="paddusw")return std::bit_cast<V>(_mm_adds_epu16(x,y));
        if(name=="psubsb")return std::bit_cast<V>(_mm_subs_epi8(x,y));
        if(name=="psubsw")return std::bit_cast<V>(_mm_subs_epi16(x,y));
        if(name=="psubusb")return std::bit_cast<V>(_mm_subs_epu8(x,y));
        if(name=="psubusw")return std::bit_cast<V>(_mm_subs_epu16(x,y));
        if(name=="pmulhw")return std::bit_cast<V>(_mm_mulhi_epi16(x,y));
        if(name=="pmaddwd")return std::bit_cast<V>(_mm_madd_epi16(x,y));
        if(name=="psllw")return std::bit_cast<V>(_mm_sll_epi16(x,y));
        if(name=="psraw")return std::bit_cast<V>(_mm_sra_epi16(x,y));
    }
    if(name=="packssdw")return bits(_mm_packs_pi32(mm(a),mm(b)));
    if(name=="packsswb")return bits(_mm_packs_pi16(mm(a),mm(b)));
    if(name=="paddsb")return bits(_mm_adds_pi8(mm(a),mm(b)));
    if(name=="paddsw")return bits(_mm_adds_pi16(mm(a),mm(b)));
    if(name=="paddusb")return bits(_mm_adds_pu8(mm(a),mm(b)));
    if(name=="paddusw")return bits(_mm_adds_pu16(mm(a),mm(b)));
    if(name=="psubsb")return bits(_mm_subs_pi8(mm(a),mm(b)));
    if(name=="psubsw")return bits(_mm_subs_pi16(mm(a),mm(b)));
    if(name=="psubusb")return bits(_mm_subs_pu8(mm(a),mm(b)));
    if(name=="psubusw")return bits(_mm_subs_pu16(mm(a),mm(b)));
    if(name=="pmaddwd")return bits(_mm_madd_pi16(mm(a),mm(b)));
    if(name=="pmulhw")return bits(_mm_mulhi_pi16(mm(a),mm(b)));
    if(name=="psllw")return bits(_mm_sll_pi16(mm(a),mm(b)));
    if(name=="psraw")return bits(_mm_sra_pi16(mm(a),mm(b)));
    if(name=="rcpps")return bits(_mm_rcp_ps(simd(b)));
    if(name=="rcpss")return (a&~mask(4))|(bits(_mm_rcp_ss(simd(b)))&mask(4));
    if(name=="rsqrtss")return (a&~mask(4))|(bits(_mm_rsqrt_ss(simd(b)))&mask(4));
    if(name=="fsin" || name=="fcos" || name=="f2xm1" || name=="fptan" || name=="fpatan" || name=="fscale" || name=="log2"){
        F80 x=ext(a),y=ext(b),z{};
        if(name=="fsin")asm volatile("fldt %1; fsin; fstpt %0":"=m"(z):"m"(x):"st");
        else if(name=="fcos")asm volatile("fldt %1; fcos; fstpt %0":"=m"(z):"m"(x):"st");
        else if(name=="f2xm1")asm volatile("fldt %1; f2xm1; fstpt %0":"=m"(z):"m"(x):"st");
        else if(name=="fptan")asm volatile("fldt %1; fptan; fstp %%st(0); fstpt %0":"=m"(z):"m"(x):"st");
        else if(name=="fpatan")asm volatile("fldt %1; fldt %2; fpatan; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");
        else if(name=="fscale")asm volatile("fldt %2; fldt %1; fscale; fstpt %0; fstp %%st(0)":"=m"(z):"m"(x),"m"(y):"st");
        else asm volatile("fld1; fldt %1; fyl2x; fstpt %0":"=m"(z):"m"(x):"st");
        return val(z);
    }
    // AMD 3DNow! and x87/MMX state operations. The game reaches these only on a CPU that reports 3DNow!.
    using Operation=V(*)(V,V);
    static const std::map<std::string,Operation> three_dnow={
        {"PackedFloatingADD",uo::pfadd<8>},{"PackedFloatingSUB",uo::pfsub<8>},{"PackedFloatingSUBR",uo::pfsubr<8>},
        {"PackedFloatingMUL",uo::pfmul<8>},{"PackedFloatingMAX",uo::pfmax<8>},{"PackedFloatingMIN",uo::pfmin<8>},
        {"PackedFloatingCompareEQ",uo::pfcmpeq<8>},{"PackedFloatingCompareGE",uo::pfcmpge<8>},{"PackedFloatingCompareGT",uo::pfcmpgt<8>},
        {"PackedFloatingAccumulate",uo::pfacc<8>},{"PackedFloatingNegAccumulate",uo::pfnacc<8>},{"PackedFloatingPosNegAccumulate",uo::pfpnacc<8>},
        {"PackedSwapDWords",uo::pswapd<8>},{"PackedIntToFloatingDwordConv",uo::pi2fd<8>},{"PackedFloatingToIntDwordConv",uo::pf2id<8>}};
    if(auto op=three_dnow.find(name);op!=three_dnow.end())return op->second(a,b);
    constexpr uint32_t fpu_tag_word=4260;
    if(name=="FastExitMediaState"){wr<2>(c,fpu_tag_word,0xffff);return 0;}   // FEMMS: same effect as EMMS in SLEIGH
    if(name=="ffree")return r<2>(c,fpu_tag_word);                            // tags are not modelled beyond FPUTagWord
    char pc[20];std::snprintf(pc,sizeof(pc),"0x%08x",c.pc);
    if(name=="swi")throw Fault(std::string("INT3 software interrupt reached at ")+pc);
    if(name=="FloatingReciprocalAprox" || name.starts_with("PackedFloatingReciprocal"))
        throw Fault("3DNow! reciprocal/square-root approximation '"+name+"' at "+pc+": the hardware approximation contract is not specified in the available sources");
    throw Fault("unresolved SLEIGH userop '"+name+"' at "+pc);
}
}
