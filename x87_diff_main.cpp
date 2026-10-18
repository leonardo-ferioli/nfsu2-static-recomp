// Differential run of one x87-heavy guest function with randomized inputs: built once against the reference engine
// (P-code x87 stack model) and once against the fast backend (x87 passed to the host FPU), same seeds, so that
// tools/test_x87_diff.py can compare the outputs line by line.
// Usage: x87_diff <export dir> <game dir> <entry hex> <trials> <seed>
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <csetjmp>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <random>
#include <sstream>
using namespace nfsu2raw;

// The fast backend touches guest memory directly: a wild pointer is a native access violation. Inside a trial it is turned
// into the same "fault" outcome the reference engine reports, so later trials still run.
static jmp_buf trial_exit;static volatile bool in_trial=false;
static LONG CALLBACK trial_guard(EXCEPTION_POINTERS* e){
    if(in_trial && e->ExceptionRecord->ExceptionCode==EXCEPTION_ACCESS_VIOLATION){in_trial=false;longjmp(trial_exit,1);}
    return EXCEPTION_CONTINUE_SEARCH;
}
static uint64_t fnv(const uint8_t* data,size_t size){uint64_t h=1469598103934665603ull;for(size_t i=0;i<size;++i)h=(h^data[i])*1099511628211ull;return h;}

int main(int argc,char** argv){try{
    if(argc!=7)throw Fault("usage: x87_diff <export> <game> <entry hex> <trials> <seed> <values pre-pushed on the FPU stack: 0..2>");
    _putenv_s("NFSU2_DETERMINISTIC_MAP","1");_putenv_s("NFSU2_DETERMINISTIC_TIME","1");
    const uint32_t entry=uint32_t(std::stoul(argv[3],nullptr,16));const unsigned trials=unsigned(std::stoul(argv[4])),seed=unsigned(std::stoul(argv[5])),pre_pushed=unsigned(std::stoul(argv[6]));
    Cpu c;NativePlatform p(c,argv[1],argv[2]);
    AddVectoredExceptionHandler(1,trial_guard);
    constexpr size_t buffer_bytes=0x20000;
    c.map(0,buffer_bytes);const uint32_t buffer=c.memory.back().base;
    const uint32_t sp=uint32_t(r<4>(c,16)),stop=0xdead0000;
    std::mt19937 rng(seed*2654435761u^entry);
    static const float pool[]={0.f,-0.f,1.f,-1.f,0.5f,2.f,3.14159265f,100.25f,-37.5f,1e-3f,65536.f,1e10f,255.f,0.1f,-2.75f,7.f,1e-30f,12345.678f};
    auto random_float_bits=[&]{float f=pool[rng()%std::size(pool)];if(rng()%3==0)f*=float(int(rng()%2000)-1000)/37.f;uint32_t b;std::memcpy(&b,&f,4);return b;};
    auto pointer=[&]{return buffer+0x8000+((rng()%0x4000)&~3u);};
    for(unsigned trial=0;trial<trials;++trial){
        uint8_t* bytes=c.pointer(buffer,buffer_bytes);
        for(size_t i=0;i<buffer_bytes;i+=4){
            uint32_t v;switch(rng()%8){case 0:v=random_float_bits();break;case 1:v=pointer();break;case 2:v=pointer();break;default:v=random_float_bits();}
            std::memcpy(bytes+i,&v,4);
        }
        // Registers and arguments: pointers into the middle of the buffer, float bit patterns and small integers.
        auto argument=[&]{switch(rng()%10){case 0:case 1:case 2:case 3:case 4:case 5:case 6:return pointer();case 7:case 8:return random_float_bits();default:return uint32_t(rng()%16);}};
        const uint32_t initial[8]={uint32_t(rng()%64),pointer(),uint32_t(rng()%64),pointer(),sp,pointer(),pointer(),pointer()};
        for(unsigned i=0;i<8;++i)wr<4>(c,i*4,initial[i]);
        wm<4>(c,sp,stop);for(unsigned i=0;i<6;++i)wm<4>(c,sp+4+4*i,argument());
        c.pc=entry;
        // Clean FPU: precision/rounding as on a default Win32 thread, empty stack, reference stack model zeroed.
        asm volatile("fninit");x87_load_control(0x027f);
        std::memset(c.regs.data()+0x1100,0,0x80);wr<2>(c,0x10a4,0xffff);wr<2>(c,0x10a0,0x027f);
        {   // Some routines take their operands on the FPU stack: start with two values (ST0, ST1).
            double inputs[2];for(auto& v:inputs){uint32_t b=random_float_bits();float f;std::memcpy(&f,&b,4);v=double(f);}
            uint8_t extended[2][10];
            for(int i=0;i<2;++i)asm volatile("fldl %1; fstpt %0":"=m"(extended[i]):"m"(inputs[i]):"memory");
#ifdef NFSU2_FAST_BACKEND
            if(pre_pushed>1)asm volatile("fldt %0"::"m"(extended[1]):"memory");
            if(pre_pushed>0)asm volatile("fldt %0"::"m"(extended[0]):"memory");
#else
            if(pre_pushed>0)std::memcpy(c.regs.data()+0x1100,extended[0],10);
            if(pre_pushed>1)std::memcpy(c.regs.data()+0x1110,extended[1],10);
#endif
        }
        std::string status="ok";uint64_t steps=0;
        std::string pushed_values;{uint8_t t[10];
#ifdef NFSU2_FAST_BACKEND
            if(pre_pushed){asm volatile("fstpt %0":"=m"(t)::"memory");std::ostringstream o;for(unsigned i=10;i-->0;)o<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(t[i]);pushed_values=o.str();asm volatile("fldt %0"::"m"(t):"memory");}
#else
            if(pre_pushed){std::ostringstream o;for(unsigned i=10;i-->0;)o<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(c.regs[0x1100+i]);pushed_values=o.str();}
#endif
        }
        if(setjmp(trial_exit)==0){
            in_trial=true;
            try{steps=nfsu2raw::run(c,stop,200000);}catch(const Fault& e){status="fault";}
            in_trial=false;
        }else status="fault";
        std::ostringstream line;
        line<<"T "<<trial<<" "<<status<<std::hex;
        for(unsigned i=0;i<8;++i)line<<" r"<<i<<"="<<uint32_t(r<4>(c,i*4));
        line<<" in0="<<pushed_values<<" buf="<<fnv(c.pointer(buffer,buffer_bytes),buffer_bytes)<<std::dec<<" steps="<<steps;
#ifdef NFSU2_FAST_BACKEND
        {   // the guest's stack lives on the host FPU: read it out
            uint16_t status_word;asm volatile("fnstsw %0":"=m"(status_word)::"memory");
            line<<" sf="<<((status_word>>6)&1);   // sticky stack fault: the routine's preconditions on the FPU stack depth were not met
            uint8_t env[28];asm volatile("fnstenv %0":"=m"(env)::"memory");asm volatile("fldenv %0"::"m"(env):"memory");
            uint16_t tags;std::memcpy(&tags,env+8,2);unsigned depth=0;for(unsigned i=0;i<8;++i)if(((tags>>(2*i))&3)!=3)++depth;
            line<<" depth="<<depth<<" st0=";
            if(depth){uint8_t st0[10];asm volatile("fstpt %0":"=m"(st0)::"memory");for(unsigned i=10;i-->0;)line<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(st0[i]);
                if(std::getenv("X87_DEBUG_STACK"))for(unsigned d=1;d<depth;++d){uint8_t t[10];asm volatile("fstpt %0":"=m"(t)::"memory");line<<" st"<<d<<"=";for(unsigned i=10;i-->0;)line<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(t[i]);}}
            else line<<"-";
        }
#else
        line<<" depth=? st0=";for(unsigned i=10;i-->0;)line<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(c.regs[0x1100+i]);
#endif
        std::cout<<line.str()<<"\n";
        asm volatile("fninit");
    }
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
