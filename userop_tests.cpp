#include "runtime.hpp"
#include <intrin.h>
#include <xmmintrin.h>
#include <iostream>
#include <array>
using namespace nfsu2raw;
static void check(bool ok,const char* why){if(!ok)throw Fault(why);}
static unsigned op_id(const char* name){for(unsigned id=0;id<512;++id)if(std::strcmp(user_name(id),name)==0)return id;throw Fault("missing userop name");}
template<class T,size_t N> static V lanes(std::array<T,N> a){static_assert(sizeof(a)==16);return std::bit_cast<V>(a);}
static void sse2_width_cases(Cpu& c){
    auto operation=[&](const char* name,V a,V b){return user_op(c,op_id(name)|(16u<<16),{a,b});};
    std::array<int8_t,16> sb{},positive{},negative{},saturated{};sb.fill(20);positive.fill(120);negative.fill(-120);
    saturated.fill(127);check(operation("paddsb",lanes(positive),lanes(sb))==lanes(saturated),"SSE2 signed byte saturation in all sixteen lanes");
    saturated.fill(-128);check(operation("psubsb",lanes(negative),lanes(sb))==lanes(saturated),"SSE2 signed byte subtraction in high lanes");
    std::array<uint16_t,8> ua{},ub{},ur{};ua.fill(65500);ub.fill(100);ur.fill(65535);
    check(operation("paddusw",lanes(ua),lanes(ub))==lanes(ur),"SSE2 unsigned word saturation in all eight lanes");
    check(operation("packssdw",lanes(std::array<int32_t,4>{INT32_MIN,-32769,-32768,32767}),lanes(std::array<int32_t,4>{32768,100,INT32_MAX,-1}))==
          lanes(std::array<int16_t,8>{-32768,-32768,-32768,32767,32767,100,32767,-1}),"SSE2 signed dword packing order and saturation");
    check(operation("pmaddwd",lanes(std::array<int16_t,8>{1,2,300,-400,INT16_MIN,INT16_MIN,7,-8}),lanes(std::array<int16_t,8>{3,4,2,2,INT16_MIN,INT16_MIN,-2,1}))==
          lanes(std::array<int32_t,4>{11,-200,INT32_MIN,-22}),"SSE2 word multiply-add high lanes and signed wraparound");
}
// Expected values below are written out by hand from the AMD 3DNow! definitions, independent of userops_pure.hpp.
static uint64_t pair(float lo,float hi){return uint64_t(std::bit_cast<uint32_t>(lo))|(uint64_t(std::bit_cast<uint32_t>(hi))<<32);}
static uint64_t pair_bits(uint32_t lo,uint32_t hi){return uint64_t(lo)|(uint64_t(hi)<<32);}
static void three_dnow_cases(Cpu& c){
    auto op=[&](const char* name,uint64_t a,uint64_t b){return uint64_t(user_op(c,op_id(name)|(8u<<16),{a,b}));};
    const uint64_t x=pair(1.5f,-2.0f),y=pair(2.25f,4.0f);
    check(op("PackedFloatingADD",x,y)==pair(3.75f,2.0f),"PFADD adds each lane");
    check(op("PackedFloatingSUB",x,y)==pair(-0.75f,-6.0f),"PFSUB is destination minus source");
    check(op("PackedFloatingSUBR",x,y)==pair(0.75f,6.0f),"PFSUBR is source minus destination");
    check(op("PackedFloatingMUL",x,y)==pair(3.375f,-8.0f),"PFMUL multiplies each lane");
    check(op("PackedFloatingMAX",x,y)==pair(2.25f,4.0f),"PFMAX");
    check(op("PackedFloatingMIN",x,y)==pair(1.5f,-2.0f),"PFMIN");
    check(op("PackedFloatingCompareEQ",pair(1.0f,2.0f),pair(1.0f,3.0f))==pair_bits(0xffffffffu,0),"PFCMPEQ lane masks");
    check(op("PackedFloatingCompareGE",pair(1.0f,2.0f),pair(1.0f,3.0f))==pair_bits(0xffffffffu,0),"PFCMPGE lane masks");
    check(op("PackedFloatingCompareGT",pair(2.0f,2.0f),pair(1.0f,3.0f))==pair_bits(0xffffffffu,0),"PFCMPGT lane masks");
    check(op("PackedFloatingAccumulate",pair(1.0f,2.0f),pair(10.0f,20.0f))==pair(3.0f,30.0f),"PFACC sums each operand's lanes");
    check(op("PackedFloatingNegAccumulate",pair(1.0f,2.0f),pair(10.0f,20.0f))==pair(-1.0f,-10.0f),"PFNACC subtracts high from low");
    check(op("PackedFloatingPosNegAccumulate",pair(1.0f,2.0f),pair(10.0f,20.0f))==pair(-1.0f,30.0f),"PFPNACC");
    check(op("PackedSwapDWords",0,0x1122334455667788ull)==0x5566778811223344ull,"PSWAPD swaps the dwords of the source");
    check(op("PackedIntToFloatingDwordConv",0,pair_bits(3,uint32_t(-4)))==pair(3.0f,-4.0f),"PI2FD converts signed dwords");
    check(op("PackedFloatingToIntDwordConv",0,pair(2.9f,-2.9f))==pair_bits(2,uint32_t(-2)),"PF2ID truncates toward zero");
    check(op("PackedFloatingToIntDwordConv",0,pair(3.0e9f,-3.0e9f))==pair_bits(0x7fffffffu,0x80000000u),"PF2ID saturates");
    c.regs[4260]=0;c.regs[4261]=0;
    user_op(c,op_id("FastExitMediaState"),{});
    check(r<2>(c,4260)==0xffff,"FEMMS marks every x87 tag empty like EMMS");
    check(user_op(c,op_id("ffree")|(2u<<16),{V(0)})==0xffff,"FFREE leaves the tag word as it is");
    for(const char* name:{"FloatingReciprocalAprox","PackedFloatingReciprocalIter1","PackedFloatingReciprocalIter2","PackedFloatingReciprocalSQRAprox","PackedFloatingReciprocalSQRIter1","swi"}){
        bool faulted=false;try{user_op(c,op_id(name)|(8u<<16),{V(1),V(2)});}catch(const Fault&){faulted=true;}
        check(faulted,"unspecified or trapping operations must stop explicitly");
    }
}
int main(){try{
    Cpu c;
    int host[4];__cpuidex(host,0,0);
    uint32_t pointer=uint32_t(user_op(c,46,{0}));
    check(m<4>(c,pointer)==uint32_t(host[0]),"CPUID EAX");
    check(m<4>(c,pointer+4)==uint32_t(host[1]),"CPUID EBX");
    check(m<4>(c,pointer+8)==uint32_t(host[3]),"SLEIGH CPUID EDX before ECX");
    check(m<4>(c,pointer+12)==uint32_t(host[2]),"SLEIGH CPUID ECX");
    check(user_op(c,76,{})!=0,"RDTSC timestamp");
    V a=0x7fff00018000ffffull,b=0x00017fff8000ffffull;
    check(uint64_t(user_op(c,142,{a,b}))==0x7fff7fff8000fffeull,"MMX signed saturating add");
    V wide=(V(a)<<64)|a,wide_b=(V(b)<<64)|b;
    check(user_op(c,142|(16u<<16),{wide,wide_b})==((V(0x7fff7fff8000fffeull)<<64)|0x7fff7fff8000fffeull),"SSE2 high lanes and width contract");
    check(uint64_t(user_op(c,167,{0xffff80007fff0002ull,16}))==0xffffffff00000000ull,"MMX oversized arithmetic word shift");
    check(uint64_t(user_op(c,137,{0xffff000000010000ull,0xffff800000007fffull}))==0x80007fff80007fffull,"MMX signed dword packing order");
    V source=V(0xaaaaaaaa12345678ull)<<64 | V(0xbbbbbbbb00000000ull)|std::bit_cast<uint32_t>(4.0f);
    V dest=V(0x1122334455667788ull)<<64 | 0x99aabbcc00000000ull;
    V reciprocal=user_op(c,174,{dest,source});
    check((reciprocal&~mask(4))==dest,"RCPSS preserves upper destination lanes");
    check(uint32_t(reciprocal)==std::bit_cast<uint32_t>(_mm_cvtss_f32(_mm_rcp_ss(_mm_set_ss(4.0f)))),"RCPSS native approximation");
    V x=float_op("INT2FLOAT",1,4,0,1,10);
    V sin=user_op(c,114,{x});float actual=std::bit_cast<float>(uint32_t(float_op("FLOAT2FLOAT",sin,10,0,1,4)));
    check(actual>0.84147f && actual<0.84148f,"x87 sine with extended storage");
    sse2_width_cases(c);
    three_dnow_cases(c);
    std::cout<<"PASS CPUID, timestamp, MMX, SSE, x87 and 3DNow! userops\n";
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
