// Cost of a guest -> Windows call through NativePlatform::dispatch (console only, no window, no game code):
// a cheap import is called repeatedly through its import-table slot and the time per call is reported.
// Usage: fast_native_bench <export dir> <game dir>
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <chrono>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace nfsu2raw;

int main(int argc,char** argv){try{
    if(argc!=3)throw Fault("requires export and game directories");
    Cpu c;NativePlatform p(c,argv[1],argv[2]);
    const uint32_t sp=uint32_t(r<4>(c,16)),stop=0xdead0000;
    struct Probe{const char* name;uint32_t iat;uint32_t args;};
    for(const Probe& probe:{Probe{"GetCurrentProcessId",7876720,0},Probe{"GetCurrentThreadId",7877120,0},Probe{"TlsGetValue",7877296,1}}){
        const unsigned calls=std::getenv("NFSU2_PROFILE")?12000000u:200000u;
        const auto started=std::chrono::steady_clock::now();
        for(unsigned i=0;i<calls;++i){
            wr<4>(c,16,sp);wm<4>(c,sp,stop);if(probe.args)wm<4>(c,sp+4,0);
            c.pc=uint32_t(m<4>(c,probe.iat));
            if(!p.dispatch(c))throw Fault("the import was not dispatched");
            if(c.pc!=stop)throw Fault("the import did not return to the caller");
        }
        const double seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
        std::cout<<probe.name<<": "<<seconds/calls*1e9<<" ns per guest->native call\n";
    }
    // A COM-style call: the guest jumps straight to a system function's address (D3D9 device methods are reached this way).
    {
        const uint32_t function=uint32_t(uintptr_t(GetProcAddress(GetModuleHandleA("kernel32.dll"),"GetCurrentProcessId")));
        const unsigned calls=50000;
        const auto started=std::chrono::steady_clock::now();
        for(unsigned i=0;i<calls;++i){
            wr<4>(c,16,sp);wm<4>(c,sp,stop);c.pc=function;
            if(!p.dispatch(c))throw Fault("the system address was not dispatched");
            if(c.pc!=stop)throw Fault("the system call did not return to the caller");
        }
        const double seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
        std::cout<<"direct system address (COM-style): "<<seconds/calls*1e9<<" ns per guest->native call\n";
    }
    // The game's own memcpy (0x401000, REP MOVSD/MOVSB): translated string instructions are P-code loops.
    {
        const size_t bytes=3u<<20;
        c.map(0,bytes);const uint32_t src=c.memory.back().base;c.map(0,bytes);const uint32_t dst=c.memory.back().base;
        std::memset(c.pointer(src,bytes),0x5a,bytes);
        double best=1e9;
        for(int round=0;round<3;++round){
            wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,dst);wm<4>(c,sp+8,src);wm<4>(c,sp+12,uint32_t(bytes));c.pc=0x401000;
            const auto started=std::chrono::steady_clock::now();
            nfsu2raw::run(c,stop,100000000ull);
            best=std::min(best,std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count());
        }
        if(std::memcmp(c.pointer(dst,bytes),c.pointer(src,bytes),bytes))throw Fault("translated memcpy copied wrongly");
        double native_best=1e9;
        for(int round=0;round<3;++round){
            const auto started=std::chrono::steady_clock::now();
            std::memcpy(c.pointer(dst,bytes),c.pointer(src,bytes),bytes);
            native_best=std::min(native_best,std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count());
        }
        std::cout<<"translated memcpy (REP MOVSD): "<<bytes/best/1e6<<" MB/s; host memcpy: "<<bytes/native_best/1e6<<" MB/s\n";
    }
    // A straight-line x87 routine of the game (0x43c7c0: 148 instructions, 124 of them x87).
    {
        c.map(0,0x1000);const uint32_t buffer=c.memory.back().base;
        float* values=reinterpret_cast<float*>(c.pointer(buffer,0x1000));for(int i=0;i<0x400;++i)values[i]=1.0f+0.01f*float(i%37);
        const unsigned calls=200000;uint64_t instructions=0;
        const auto started=std::chrono::steady_clock::now();
        for(unsigned i=0;i<calls;++i){
            wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,buffer);wm<4>(c,sp+8,buffer);c.pc=0x43c7c0;
            const uint64_t before=c.instructions;
            nfsu2raw::run(c,stop,1000000ull);instructions+=c.instructions-before;
        }
        const double seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
        std::cout<<"x87 routine 0x43c7c0: "<<instructions/seconds/1e6<<" M instr/s, "<<seconds/calls*1e9/148<<" ns per instruction\n";
    }
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
