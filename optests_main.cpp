#include "optests.hpp"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <random>
#include <string>
#include <vector>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
using namespace nfsu2raw;

static std::mt19937_64 rng(0x5eed5eedull);
static uint64_t edge64(){
    static const uint64_t edge[]={0,1,2,3,7,8,0x1f,0x20,0x3f,0x40,0x7f,0x80,0xff,0x100,0x7fff,0x8000,0xffff,0x10000,0x7fffffff,0x80000000ull,
        0xffffffffull,0x100000000ull,0x7fffffffffffffffull,0x8000000000000000ull,~0ull,0x7fc00000,0x7f800000,0xff800000,0x00000001,0x00800000,
        0x3f800000,0xbf800000,0x80000001,0x7ff0000000000000ull,0xfff0000000000000ull,0x7ff8000000000000ull,0x3ff0000000000000ull,
        0x4059000000000000ull,0x0010000000000000ull,0x0000000000000001ull,0xc000000000000000ull};
    return edge[rng()%(sizeof(edge)/sizeof(edge[0]))];
}
static uint64_t pick64(){
    switch(rng()%5){
        case 0: return edge64();
        case 1: return rng()&0xff;
        case 2: return rng()&0xffffffffull;
        case 3: return edge64()+(rng()%5)-2;   // just around the boundary
        default: return rng();
    }
}
static void fill_operand(uint8_t* p){
    uint64_t lo=pick64(),hi=pick64();
    if(rng()%4==0){ // plausible x87 extended value: explicit integer bit, moderate exponent
        lo=rng()|0x8000000000000000ull;hi=(0x3f00+rng()%0x200)|((rng()&1)<<15);
    }
    std::memcpy(p,&lo,8);std::memcpy(p+8,&hi,8);
}
static bool both_nan(const std::string& name,const uint8_t* x,const uint8_t* y,unsigned size){
    if(size==4){float a,b;std::memcpy(&a,x,4);std::memcpy(&b,y,4);return a!=a && b!=b;}
    if(size==8){double a,b;std::memcpy(&a,x,8);std::memcpy(&b,y,8);return a!=a && b!=b;}
    (void)name;return false;
}
int main(int argc,char** argv){
    const unsigned iterations=argc>1?unsigned(std::atoi(argv[1])):20000;
    Cpu a,b;a.map(0,0x4000);
    const uint32_t arena=a.memory.back().base,arena_size=0x4000;
    const bool self_check=GetEnvironmentVariableA("NFSU2_OPTEST_SELFCHECK",nullptr,0)!=0;const unsigned self_check_case=7;
    unsigned failed_cases=0,known_rounding=0;uint64_t executions=0;
    for(unsigned ci=0;ci<op_case_count;++ci){
        const OpCase& c=op_cases[ci];const std::string name=c.name;
        const bool is_float=name.rfind("FLOAT",0)==0;
        const bool packed_float=name.find("CALLOTHER:PackedFloating")==0;
        // Destination width follows "NAME:D<-...".
        unsigned dest_size=0;if(auto colon=name.find(':');colon!=std::string::npos)dest_size=unsigned(std::atoi(name.c_str()+colon+1));
        unsigned mismatches=0;
        for(unsigned it=0;it<iterations;++it){
            for(unsigned i=0;i<0x1400;i+=8){uint64_t r=rng();std::memcpy(a.regs.data()+i,&r,8);}
            for(unsigned off:{0x400u,0x500u,0x600u})fill_operand(a.regs.data()+off);
            for(unsigned k=0;k<c.ptr_count;++k){uint32_t p=arena+uint32_t(rng()%(arena_size-64));std::memcpy(a.regs.data()+c.ptr_regs[k],&p,4);}
            std::memcpy(a.regs.data()+644,&c.pc,4);
            if(name=="X87:FLDCW"){  // only architecturally valid control words: unmasked exceptions would trap the harness itself
                static const uint16_t valid[]={0x027f,0x037f,0x067f,0x0a7f,0x0e7f,0x007f};
                const uint16_t cw=valid[rng()%6];std::memcpy(a.regs.data()+0x500,&cw,2);
            }
            b.regs=a.regs;a.pc=b.pc=c.pc;
            // Memory cases touch at most 16 bytes at the chosen pointer; only that window is randomized and compared.
            uint32_t window=0;if(c.ptr_count){std::memcpy(&window,a.regs.data()+c.ptr_regs[0],4);}
            auto* arena_window=reinterpret_cast<uint8_t*>(uintptr_t(window));
            uint8_t original_window[32],ref_window[32];
            if(c.ptr_count){for(auto& v:original_window)v=uint8_t(rng());std::memcpy(arena_window,original_window,32);}
            bool ref_fault=false,fast_fault=false;uint32_t ref_pc=0,fast_pc=0;
            try{ref_pc=c.ref(a);}catch(const Fault&){ref_fault=true;}
            if(c.ptr_count){std::memcpy(ref_window,arena_window,32);std::memcpy(arena_window,original_window,32);}
            try{fast_pc=c.fast(b);}catch(const Fault&){fast_fault=true;}
            ++executions;
            if(name.rfind("X87:",0)==0){x87_load_control(0x027f);asm volatile("fnclex");}
            if(self_check && ci==self_check_case && !fast_fault)b.regs[0x400]^=1; // sabotage: the harness must notice
            bool same=ref_fault==fast_fault;
            if(same && !ref_fault){
                same=ref_pc==fast_pc && (!c.ptr_count || std::memcmp(ref_window,arena_window,32)==0);
                if(same && std::memcmp(a.regs.data(),b.regs.data(),0x1400)!=0){
                    same=false;
                    // 3DNow! lanes: the reference library does float arithmetic through x87, the fast one through SSE;
                    // only NaN payloads may differ.
                    if(packed_float){
                        bool rest_equal=true;
                        for(unsigned i=0;i<0x1400;++i)if((i<0x400 || i>=0x408) && a.regs[i]!=b.regs[i]){rest_equal=false;break;}
                        bool lanes_equal=rest_equal;
                        for(unsigned lane=0;lane<2 && lanes_equal;++lane){
                            float x,y;std::memcpy(&x,a.regs.data()+0x400+4*lane,4);std::memcpy(&y,b.regs.data()+0x400+4*lane,4);
                            if(std::memcmp(&x,&y,4)!=0 && !(x!=x && y!=y))lanes_equal=false;
                        }
                        if(lanes_equal)same=true;
                    }
                    // Known, documented differences: NaN payloads and the reference's x87 double rounding of 8-byte results.
                    if(is_float && (dest_size==4 || dest_size==8)){
                        bool rest_equal=true;
                        for(unsigned i=0;i<0x1400;++i)if((i<0x400 || i>=0x400+dest_size) && a.regs[i]!=b.regs[i]){rest_equal=false;break;}
                        if(rest_equal){
                            if(both_nan(name,a.regs.data()+0x400,b.regs.data()+0x400,dest_size))same=true;
                            else if(dest_size==8){
                                uint64_t x,y;std::memcpy(&x,a.regs.data()+0x400,8);std::memcpy(&y,b.regs.data()+0x400,8);
                                if((x>y?x-y:y-x)==1){same=true;++known_rounding;}
                            }
                        }
                    }
                }
            }
            if(!same){
                if(++mismatches==1){
                    std::printf("MISMATCH %s ref_fault=%d fast_fault=%d ref_pc=%x fast_pc=%x\n",c.name,ref_fault,fast_fault,ref_pc,fast_pc);
                    for(unsigned off:{0x400u,0x500u,0x600u}){
                        std::printf("  reg%x ref=",off);for(int i=15;i>=0;--i)std::printf("%02x",a.regs[off+unsigned(i)]);
                        std::printf(" fast=");for(int i=15;i>=0;--i)std::printf("%02x",b.regs[off+unsigned(i)]);std::printf("\n");
                    }
                    for(unsigned i=0;i<0x1400;++i)if(a.regs[i]!=b.regs[i]&&(i<0x400||i>=0x700)){std::printf("  first differing register byte 0x%x ref=%02x fast=%02x\n",i,a.regs[i],b.regs[i]);break;}
                }
            }
        }
        if(mismatches){++failed_cases;std::printf("  -> %u/%u mismatches\n",mismatches,iterations);}
    }
    // ---- semantic check (not differential): FLDCW selects the rounding of FRNDINT/FIST, FNSTCW reads the host back ----
    auto find=[&](const char* label)->const OpCase*{
        for(unsigned i=0;i<op_case_count;++i)if(std::strcmp(op_cases[i].name,label)==0)return &op_cases[i];
        std::printf("missing case %s\n",label);std::exit(2);
    };
    const OpCase* fldcw=find("X87:FLDCW");const OpCase* fnstcw=find("X87:FNSTCW");const OpCase* round_case=find("ROUND:10<-10:r");
    struct Mode{uint16_t control;double input;double expected;};
    const Mode modes[]={{0x027f,2.7,3.0},{0x067f,2.7,2.0},{0x0a7f,2.7,3.0},{0x0e7f,2.7,2.0},
                        {0x027f,-2.7,-3.0},{0x067f,-2.7,-3.0},{0x0a7f,-2.7,-2.0},{0x0e7f,-2.7,-2.0}};
    unsigned semantic_failures=0;
    for(int engine=0;engine<2;++engine){
        Cpu& cpu=engine?b:a;
        for(const Mode& mode:modes){
            std::memset(cpu.regs.data(),0,0x1400);
            std::memcpy(cpu.regs.data()+0x500,&mode.control,2);cpu.pc=fldcw->pc;
            (engine?fldcw->fast:fldcw->ref)(cpu);
            const uint16_t host=x87_store_control();
            std::memset(cpu.regs.data(),0,0x1400);x80_from_f64(cpu.regs.data()+0x500,std::bit_cast<uint64_t>(mode.input));
            cpu.pc=round_case->pc;(engine?round_case->fast:round_case->ref)(cpu);
            const double rounded=std::bit_cast<double>(x80_to_f64(cpu.regs.data()+0x400));
            // FNSTCW must report what the host holds, not a stale register image.
            std::memset(cpu.regs.data(),0,0x1400);cpu.pc=fnstcw->pc;(engine?fnstcw->fast:fnstcw->ref)(cpu);
            uint16_t reported;std::memcpy(&reported,cpu.regs.data()+0x400,2);
            if(host!=mode.control || rounded!=mode.expected || reported!=mode.control){
                std::printf("x87 control %s CW=%04x input=%g -> host=%04x rounded=%g reported=%04x (expected %g)\n",engine?"fast":"ref",mode.control,mode.input,host,rounded,reported,mode.expected);
                ++semantic_failures;
            }
        }
    }
    x87_load_control(0x027f);
    if(semantic_failures)++failed_cases;
    std::printf("%u cases, %llu executions, %u failing cases, %u tolerated 1-ulp double results, x87 control semantic checks: %s\n",op_case_count,(unsigned long long)executions,failed_cases,known_rounding,semantic_failures?"FAILED":"ok");
    return failed_cases?1:0;
}
