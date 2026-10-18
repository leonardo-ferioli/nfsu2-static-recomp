#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <iostream>
using namespace nfsu2raw;
int main(int argc,char** argv){try{
    if(argc!=3)throw Fault("requires export and game directories");
    Cpu c;NativePlatform p(c,argv[1],argv[2]);
    auto direct=reinterpret_cast<uint32_t*>(uintptr_t(0x00400000));
    if((*direct&0xffff)!=0x5a4d)throw Fault("guest PE is not mapped at its real 32-bit address");
    const uint32_t sp=uint32_t(r<4>(c,16));
    wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0);
    c.pc=uint32_t(m<4>(c,0x783138));
    if(!p.dispatch(c) || r<4>(c,0)!=0x00400000 || r<4>(c,16)!=sp+8 || c.pc!=0xdead0000)
        throw Fault("native32 guest module adapter or stdcall stack cleanup");
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);c.pc=uint32_t(m<4>(c,0x783070));
    if(!p.dispatch(c) || !r<4>(c,0) || r<4>(c,16)!=sp+4 || c.pc!=0xdead0000)
        throw Fault("native32 zero-argument system call");
    c.map(0,16);uint32_t limits=c.memory.back().base;
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,limits);wm<4>(c,sp+8,limits+4);
    c.pc=uint32_t(uintptr_t(GetProcAddress(GetModuleHandleW(L"kernel32.dll"),"GetCurrentThreadStackLimits")));
    if(!p.dispatch(c))throw Fault("GetCurrentThreadStackLimits dispatch");
    if(m<4>(c,limits)!=m<4>(c,r<4>(c,0x110)+8) || m<4>(c,limits+4)!=m<4>(c,r<4>(c,0x110)+4)){
        std::cerr<<std::hex<<"native limits "<<uint32_t(m<4>(c,limits))<<".."<<uint32_t(m<4>(c,limits+4))<<" guest "<<uint32_t(m<4>(c,r<4>(c,0x110)+8))<<".."<<uint32_t(m<4>(c,r<4>(c,0x110)+4))<<'\n';
        throw Fault("native call must expose the actual guest stack limits in the OS TEB");
    }
    const char text[]="static-thread";std::memcpy(c.pointer(limits,sizeof(text)),text,sizeof(text));
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);
    const uint32_t thread_args[]={0,0,0x0043dbb0,limits,0,0};
    for(unsigned i=0;i<6;++i)wm<4>(c,sp+4+4*i,thread_args[i]);
    c.pc=uint32_t(m<4>(c,0x783248));
    if(!p.dispatch(c))throw Fault("CreateThread dispatch");
    auto thread=reinterpret_cast<HANDLE>(uintptr_t(uint32_t(r<4>(c,0))));DWORD exit_code=0;
    if(!thread || WaitForSingleObject(thread,5000)!=WAIT_OBJECT_0 || !GetExitCodeThread(thread,&exit_code) || exit_code!=sizeof(text)-1)
        throw Fault("native thread must execute the translated strlen routine and return its result");
    CloseHandle(thread);
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0x12345678);
    c.pc=uint32_t(m<4>(c,0x7830e4));p.dispatch(c);
    SetLastError(13); // Native tooling must not overwrite the guest's error state.
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);c.pc=uint32_t(m<4>(c,0x783114));p.dispatch(c);
    if(r<4>(c,0)!=0x12345678)throw Fault("guest GetLastError must be isolated from adapter activity");
    // Platform policy: translated workers never receive priorities above ABOVE_NORMAL.
    for(auto [requested,expected]:{std::pair{15,1},std::pair{2,1},std::pair{1,1},std::pair{0,0},std::pair{-1,-1}}){
        wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0xfffffffe);wm<4>(c,sp+8,uint32_t(requested));
        c.pc=uint32_t(m<4>(c,0x783174));
        if(!p.dispatch(c) || r<4>(c,0)!=1 || r<4>(c,16)!=sp+12)throw Fault("SetThreadPriority adapter must succeed and clean its stdcall arguments");
        wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0xfffffffe);c.pc=uint32_t(m<4>(c,0x783180));
        if(!p.dispatch(c) || int32_t(r<4>(c,0))!=expected)throw Fault("guest thread priority must be capped at ABOVE_NORMAL");
    }
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0xfffffffe);wm<4>(c,sp+8,0);c.pc=uint32_t(m<4>(c,0x783174));p.dispatch(c);
    // Repeated rendering/input sites must not flush a fresh pair of lines on
    // every frame. Exercise real native clock calls without creating a window.
    const auto trace=std::filesystem::absolute(argv[1]).parent_path()/"logs/native32_trace_test.log";
    wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,limits);c.pc=0x0043dbb0;
    p.run(10000,trace);
    for(unsigned i=0;i<3;++i){
        wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);c.pc=uint32_t(m<4>(c,0x78320c));
        if(!p.dispatch(c))throw Fault("diagnostic trace clock call");
    }
    std::ifstream logged(trace);std::string line;unsigned calls=0,results=0;
    while(std::getline(logged,line)){
        if(line.find("!GetTickCount return=")!=std::string::npos)++calls;
        if(line.find("RETURN target=")!=std::string::npos)++results;
    }
    if(calls!=1 || results!=1)throw Fault("repeated native call sites must be sampled once in the diagnostic trace");
    std::cout<<"PASS native32 non-executable image, native ABI and translated return\n";
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
