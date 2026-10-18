// Console tests for the guest exception dispatcher, window-procedure trampolines and callback processor pool.
// Guest exception handlers are stood in for by native hooks (NativePlatform::add_native_hook), so no hand-written
// x86 and no window, device or sound object is needed.
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
using namespace nfsu2raw;

static void check(bool ok,const char* why){if(!ok)throw Fault(std::string("FAILED: ")+why);}
constexpr uint32_t iat_raise=0x7832a4,iat_unwind=0x783290,iat_unhandled=0x783104,iat_set_filter=0x7830c0,iat_register_class=0x783340;
constexpr uint32_t return_label=0xdead0000,unwind_label=0xdead0010;

int main(int argc,char** argv){try{
    if(argc!=3)throw Fault("requires export and game directories");
    Cpu c;NativePlatform p(c,argv[1],argv[2]);
    const uint32_t sp=uint32_t(r<4>(c,16)),teb=uint32_t(r<4>(c,0x110));
    c.map(0,0x2000);const uint32_t area=c.memory.back().base;
    const uint32_t frame_a=area,frame_b=area+0x100,scratch=area+0x400;
    constexpr uint32_t hook_a=0xf0fe1000,hook_b=0xf0fe1010,hook_filter=0xf0fe1020;
    std::vector<std::string> log;
    auto reset_registers=[&]{
        wr<4>(c,0,0x11111111);wr<4>(c,4,0x22222222);wr<4>(c,8,0x33333333);wr<4>(c,12,0x44444444);
        wr<4>(c,20,0x55555555);wr<4>(c,24,0x66666666);wr<4>(c,28,0x77777777);
    };
    auto call=[&](uint32_t iat,std::initializer_list<uint32_t> args){
        wr<4>(c,16,sp);wm<4>(c,sp,return_label);unsigned i=0;for(auto a:args)wm<4>(c,sp+4+4*i++,a);
        c.pc=uint32_t(m<4>(c,iat));
        for(unsigned step=0;step<64 && !(c.pc>=return_label && c.pc<return_label+0x100);++step)
            if(!p.dispatch(c))throw Fault("the dispatcher left translated code unexpectedly");
        check(c.pc>=return_label && c.pc<return_label+0x100,"guest control returned to the caller");
    };
    auto chain=[&](bool two){  // fs:[0] -> B -> A -> end
        wm<4>(c,frame_a,0xffffffff);wm<4>(c,frame_a+4,hook_a);
        wm<4>(c,frame_b,frame_a);wm<4>(c,frame_b+4,hook_b);
        wm<4>(c,teb,two?frame_b:0xffffffff);
    };

    // ---- RaiseException walks the chain: B continues the search, A resumes with an edited context ----------------
    p.add_native_hook(hook_b,4,[&](Cpu& cpu){
        const uint32_t esp=uint32_t(r<4>(cpu,16));
        const uint32_t rec=uint32_t(m<4>(cpu,esp+4)),frame=uint32_t(m<4>(cpu,esp+8)),ctx=uint32_t(m<4>(cpu,esp+12));
        log.push_back("B");
        check(frame==frame_b,"handler B receives its own registration");
        check(uint32_t(m<4>(cpu,rec))==0xE0000001,"exception code");
        check(uint32_t(m<4>(cpu,rec+16))==2 && uint32_t(m<4>(cpu,rec+20))==7 && uint32_t(m<4>(cpu,rec+24))==8,"exception parameters");
        check(uint32_t(m<4>(cpu,rec+12))==return_label,"exception address is the guest call site");
        check(uint32_t(m<4>(cpu,ctx+0xb0))==0x11111111 && uint32_t(m<4>(cpu,ctx+0xa4))==0x44444444,"context carries EAX and EBX");
        check(uint32_t(m<4>(cpu,ctx+0xb8))==return_label && uint32_t(m<4>(cpu,ctx+0xc4))==sp+4+16,"context EIP and ESP follow the call");
        wr<4>(cpu,12,0xbadbad01);  // handlers may clobber callee-saved registers; the context must win on resume
        return 1u;  // ExceptionContinueSearch
    });
    p.add_native_hook(hook_a,4,[&](Cpu& cpu){
        const uint32_t esp=uint32_t(r<4>(cpu,16));
        const uint32_t frame=uint32_t(m<4>(cpu,esp+8)),ctx=uint32_t(m<4>(cpu,esp+12));
        log.push_back("A");
        check(frame==frame_a,"handler A receives its own registration");
        wm<4>(cpu,ctx+0xb0,0x1234);
        return 0u;  // ExceptionContinueExecution
    });
    chain(true);reset_registers();log.clear();
    wm<4>(c,scratch,7);wm<4>(c,scratch+4,8);
    call(iat_raise,{0xE0000001,0,2,scratch});
    check(log==std::vector<std::string>({"B","A"}),"handlers run innermost first");
    check(uint32_t(r<4>(c,0))==0x1234,"EAX comes from the edited context");
    check(uint32_t(r<4>(c,4))==0x22222222 && uint32_t(r<4>(c,12))==0x44444444 && uint32_t(r<4>(c,20))==0x55555555,"other registers are restored from the context");
    check(uint32_t(r<4>(c,16))==sp+4+16 && c.pc==return_label,"RaiseException returns like a stdcall with four arguments");
    check(uint32_t(m<4>(c,teb))==frame_b,"the handler chain is untouched by a continued exception");

    // ---- a non-continuable exception cannot be resumed ------------------------------------------------------------
    p.add_native_hook(hook_b,4,[&](Cpu&){return 1u;});
    chain(true);log.clear();
    bool refused=false;try{call(iat_raise,{0xE0000002,1,0,0});}catch(const Fault& f){refused=std::string(f.what()).find("non-continuable")!=std::string::npos;if(!refused)std::cerr<<"got: "<<f.what()<<std::endl;}
    check(refused,"a handler may not continue EXCEPTION_NONCONTINUABLE");

    // ---- RtlUnwind to a target frame: B is unwound and unlinked, A (the target) is not called ----------------------
    p.add_native_hook(hook_b,4,[&](Cpu& cpu){
        const uint32_t esp=uint32_t(r<4>(cpu,16));
        const uint32_t rec=uint32_t(m<4>(cpu,esp+4)),frame=uint32_t(m<4>(cpu,esp+8));
        log.push_back("unwind B");
        check(frame==frame_b && (uint32_t(m<4>(cpu,rec+4))&2),"EXCEPTION_UNWINDING is set for the unwinding handler");
        wr<4>(cpu,12,0);wr<4>(cpu,20,0);wr<4>(cpu,24,0);wr<4>(cpu,28,0);  // callee-saved registers must come back
        return 1u;
    });
    chain(true);reset_registers();log.clear();
    call(iat_unwind,{frame_a,unwind_label,0,0x77});
    check(log==std::vector<std::string>({"unwind B"}),"only frames below the target are unwound");
    check(uint32_t(m<4>(c,teb))==frame_a,"the unwound frame is unlinked");
    check(c.pc==unwind_label && uint32_t(r<4>(c,0))==0x77 && uint32_t(r<4>(c,16))==sp+4+16,"unwinding resumes at TargetIp with ReturnValue in EAX");
    check(uint32_t(r<4>(c,12))==0x44444444 && uint32_t(r<4>(c,20))==0x55555555 && uint32_t(r<4>(c,24))==0x66666666 && uint32_t(r<4>(c,28))==0x77777777,"callee-saved registers survive an unwind");

    // ---- RtlUnwind with a null target unwinds the whole chain and flags an exit unwind ---------------------------
    p.add_native_hook(hook_a,4,[&](Cpu& cpu){
        const uint32_t esp=uint32_t(r<4>(cpu,16));
        const uint32_t rec=uint32_t(m<4>(cpu,esp+4));
        log.push_back("unwind A");
        check((uint32_t(m<4>(cpu,rec+4))&6)==6,"EXCEPTION_EXIT_UNWIND is set when there is no target frame");
        return 1u;
    });
    chain(true);log.clear();
    call(iat_unwind,{0,0,0,0});
    check(log==std::vector<std::string>({"unwind B","unwind A"}) && uint32_t(m<4>(c,teb))==0xffffffff && c.pc==return_label,"a null target frame unwinds every registration");

    // ---- the top-level filter decides what happens to an unhandled exception ------------------------------------
    chain(false);
    int32_t filter_result=-1;uint32_t filter_code=0;
    p.add_native_hook(hook_filter,1,[&](Cpu& cpu){
        const uint32_t esp=uint32_t(r<4>(cpu,16)),pointers=uint32_t(m<4>(cpu,esp+4));
        filter_code=uint32_t(m<4>(cpu,uint32_t(m<4>(cpu,pointers))));
        return uint32_t(filter_result);
    });
    call(iat_set_filter,{hook_filter});
    reset_registers();
    call(iat_raise,{0xC0000005,0,0,0});
    check(filter_code==0xC0000005 && c.pc==return_label,"the registered top-level filter sees the exception and -1 resumes execution");
    filter_result=1;
    refused=false;try{call(iat_raise,{0xC0000005,0,0,0});}catch(const Fault& f){refused=std::string(f.what()).find("top-level filter")!=std::string::npos;}
    check(refused,"EXCEPTION_EXECUTE_HANDLER from the top-level filter ends the run explicitly");
    // UnhandledExceptionFilter called by the guest forwards to the registered filter and returns its value.
    wm<4>(c,scratch,0xC0000094);wm<4>(c,scratch+0x20,scratch);wm<4>(c,scratch+0x24,scratch+0x40);
    filter_result=1;call(iat_unhandled,{scratch+0x20});
    check(uint32_t(r<4>(c,0))==1 && filter_code==0xC0000094 && uint32_t(r<4>(c,16))==sp+4+4,"UnhandledExceptionFilter returns the registered filter's verdict");
    call(iat_set_filter,{0});
    refused=false;try{call(iat_raise,{0xC0000005,0,0,0});}catch(const Fault& f){refused=std::string(f.what()).find("unhandled guest exception")!=std::string::npos;}
    check(refused,"with no handler and no filter an exception stops explicitly");
    call(iat_unhandled,{scratch+0x20});
    check(uint32_t(r<4>(c,0))==1,"without a registered filter UnhandledExceptionFilter reports EXCEPTION_EXECUTE_HANDLER");

    // ---- window procedure trampolines: one native entry per distinct guest procedure ------------------------------
    c.map(0,0x1000);const uint32_t cls=c.memory.back().base;
    auto register_class=[&](const char* name,uint32_t guest_proc){
        std::memset(c.pointer(cls,0x100),0,0x100);
        wm<4>(c,cls,48);wm<4>(c,cls+8,guest_proc);wm<4>(c,cls+20,0x400000);
        std::memcpy(c.pointer(cls+0x80,std::strlen(name)+1),name,std::strlen(name)+1);wm<4>(c,cls+40,cls+0x80);
        call(iat_register_class,{cls});check(uint32_t(r<4>(c,0))!=0,"RegisterClassExA succeeded");
        WNDCLASSEXA info{};info.cbSize=sizeof(info);
        check(GetClassInfoExA(GetModuleHandleA(nullptr),name,&info),"the class exists");
        return reinterpret_cast<uintptr_t>(info.lpfnWndProc);
    };
    const uintptr_t first=register_class("NFSU2SehTestA",0x0043dbb0),same=register_class("NFSU2SehTestB",0x0043dbb0),other=register_class("NFSU2SehTestC",0x0043dbf0);
    check(first!=0x0043dbb0 && first==same,"classes sharing a guest procedure share a trampoline and the guest address is never exposed");
    check(other!=first,"a different guest procedure gets its own trampoline");
    for(const char* name:{"NFSU2SehTestA","NFSU2SehTestB","NFSU2SehTestC"})UnregisterClassA(name,GetModuleHandleA(nullptr));
    // The trampoline reaches the guest through window_callback (strlen stands in for the window procedure).
    std::memcpy(c.pointer(scratch+0x200,8),"abcdefg",8);
    check(p.window_callback(0,{scratch+0x200})==7,"the first trampoline enters its guest procedure");

    // ---- callbacks reuse one processor instead of mapping a stack every time ----------------------------------------
    const unsigned before=p.callback_cpus_created();
    for(unsigned i=0;i<300;++i)check(p.callback(0x0043dbb0,{scratch+0x200})==7,"pooled callback result");
    check(p.callback_cpus_created()<=before+1,"sequential callbacks reuse the same processor");
    std::cout<<"PASS guest SEH dispatcher, window procedure trampolines and callback pool\n";
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
