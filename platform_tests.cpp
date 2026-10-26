#include "platform.hpp"
#include <iostream>
using namespace nfsu2raw;
static void check(bool ok,const char* why){if(!ok)throw Fault(why);}
int main(int argc,char** argv){
    try{
        if(argc<2)throw Fault("test requires export directory");
        Cpu c;Platform p(c,argv[1],".");
        check(c.pc==0x0075bcc7,"actual PE entry point");
        check(m<2>(c,0x00400000)==0x5a4d,"DOS header data");
        check(r<4>(c,0x110)!=0,"guest FS/TEB initialized");
        const auto token=uint32_t(m<4>(c,0x00783138));
        check(token>=0xf0000000,"IAT bound to guest import token");
        const uint32_t sp=uint32_t(r<4>(c,16));
        wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0);
        c.pc=token;check(p.dispatch_import(),"GetModuleHandleA handler");
        check(r<4>(c,0)==0x00400000,"GetModuleHandleA(NULL) guest image handle");
        check(r<4>(c,16)==sp+8 && c.pc==0xdead0000,"stdcall return and argument cleanup");
        const char kernel[]="kernel32.dll";
        std::memcpy(c.pointer(0x7ffe0000,sizeof(kernel)),kernel,sizeof(kernel));
        wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,0x7ffe0000);
        c.pc=token;p.dispatch_import();
        check(r<4>(c,0)!=0 && r<4>(c,0)!=0x00400000,"named system module has a separate guest handle");
        auto call=[&](uint32_t iat,std::initializer_list<uint32_t> args){
            wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);unsigned i=0;
            for(auto value:args)wm<4>(c,sp+4+4*i++,value);
            c.pc=uint32_t(m<4>(c,iat));check(p.dispatch_import(),"API dispatch");return uint32_t(r<4>(c,0));
        };
        check(call(0x78325c,{0x12345678,0,64})==0,"HeapAlloc rejects unknown heap");
        uint32_t heap=call(0x7830d8,{0,4096,0});
        check(heap && heap!=0xe0000001,"HeapCreate creates a distinct heap");
        uint32_t allocation=call(0x78325c,{heap,8,64});
        check(allocation!=0 && m<8>(c,allocation)==0,"HeapAlloc zero initialized memory");
        wm<4>(c,allocation,0xaabbccdd);
        check(call(0x7830d0,{heap,0,allocation})==64,"HeapSize tracks allocation");
        check(call(0x783254,{0xe0000001,0,allocation})==0,"HeapFree rejects wrong heap ownership");
        check(call(0x783254,{heap,0,allocation})==1,"HeapFree releases allocation");
        check(call(0x7830d0,{heap,0,allocation})==0xffffffff,"freed allocation is invalid");
        check(call(0x7830dc,{heap})==1,"HeapDestroy releases guest heap");
        bool failed=false;
        c.pc=0xf0000fff;
        try{p.dispatch_import();}catch(const Fault&){failed=true;}
        check(failed,"unknown import token fails explicitly");
        std::cout<<"PASS guest PE loader, TEB, IAT and stdcall boundary\n";
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
