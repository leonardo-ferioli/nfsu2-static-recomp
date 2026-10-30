#include "runtime.hpp"
#ifndef NFSU2_GUEST_IDENTITY
#include "guest_arena.hpp"
#endif
#include "difftrace.hpp"
#ifdef NFSU2_NATIVE32
#include "native32.hpp"
#include "bench_sampler.hpp"
using ActivePlatform=nfsu2raw::NativePlatform;
#else
#include "platform.hpp"
using ActivePlatform=nfsu2raw::Platform;
#include "platform64.hpp"
#ifdef NFSU2_HAS_MODS
#include "mods_widescreen.hpp"
#include "mods_detail.hpp"
#endif
#include "win32_facade.hpp"
#include "platform/audio/dsound_install.hpp"
#include "platform/audio/null_sink.hpp"
#endif
#include <chrono>
#include <thread>
#include <mutex>
#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace nfsu2raw;
#ifndef NFSU2_NATIVE32
// A silent output that keeps real time: a null sink whose clock is advanced 10 ms every 10 ms by a thread. The game's audio start-up waits for the play
// cursor to move, so a sink with a frozen clock (the test NullSink) would keep it waiting for ever; no sound card is opened.
class PacedNullSink final : public nfsu2::platform::audio::AudioSink {
public:
    using Status=nfsu2::platform::Status;
    ~PacedNullSink() override{close();}
    Status open(const nfsu2::platform::audio::SinkDesc& d,nfsu2::platform::audio::SinkCallback cb,void* user) override{return sink_.open(d,cb,user);}
    nfsu2::platform::audio::OutputLayout actual() const override{return sink_.actual();}
    Status start() override{
        const Status s=sink_.start();
        if(s==Status::ok && !thread_.joinable()){
            stop_=false;
            thread_=std::thread([this]{
                const uint32_t frames=sink_.actual().sample_rate/100;
                while(!stop_){std::this_thread::sleep_for(std::chrono::milliseconds(10));std::lock_guard lock(mutex_);sink_.advance(frames);}
            });
        }
        return s;
    }
    Status stop() override{return sink_.stop();}
    void close() override{stop_=true;if(thread_.joinable())thread_.join();sink_.close();}
    bool running() const override{return sink_.running();}
    uint64_t frames_played() const override{return sink_.frames_played();}
    nfsu2::platform::audio::SinkLatency latency() const override{return sink_.latency();}
    nfsu2::platform::audio::SinkStats stats() const override{return sink_.stats();}
private:
    nfsu2::platform::audio::NullSink sink_{480,480};
    std::thread thread_;
    std::mutex mutex_;
    std::atomic<bool> stop_{false};
};
#endif
int main(int argc,char** argv){
    try {
#ifndef NFSU2_GUEST_IDENTITY
        // NFSU2_GUEST_ARENA=1: the guest processor's memory lives in the 64-bit arena (docs/MEMORY_MODEL_64.md) instead of in vectors; results must not change.
        std::unique_ptr<nfsu2::guest::AddressSpace> arena;
        if(std::getenv("NFSU2_GUEST_ARENA")){const char* error=nullptr;arena=nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(),&error);if(!arena)throw Fault(std::string("arena: ")+(error?error:"?"));_putenv("NFSU2_GUEST_ARENA=");}   // the guest reads the environment block: the switch must not be part of it
#endif
#ifndef NFSU2_NATIVE32
        if(argc>=5 && std::string(argv[1])=="--boot64"){
            // The 64-bit platform: the guest in the arena, imports served by the Win32 facade over legacy_win32 (all groups). Stops at the first import nobody serves.
            if(!arena){const char* error=nullptr;arena=nfsu2::guest::create_arena(nfsu2::guest::arena_config_from_environment(),&error);if(!arena)throw Fault(std::string("arena: ")+(error?error:"?"));}
            Cpu c;Platform64 p(c,argv[2],argv[3]);
            std::string error;auto options=parse_win32_layer(argc>5?argv[5]:"all",error);if(!error.empty())throw Fault("unknown Win32 group "+error);
            Win32Facade facade(p,options);
            // DirectSound: the NUE layer over a null sink (headless; no sound card is opened), the guest's handles meaning what the Win32 layer says.
            const nfsu2::platform::audio::GuestHandles handles{[&](uint32_t h){facade.set_event(h);},[&](uint32_t h){return facade.is_window(h);}};
            nfsu2::platform::audio::AudioSettings audio;audio.enabled=true;audio.sink_factory=[]{return std::unique_ptr<nfsu2::platform::audio::AudioSink>(std::make_unique<PacedNullSink>());};
            std::string audio_why;if(!nfsu2::platform::audio::install_dsound(p,audio,[](const std::string& t){std::cout<<t<<std::endl;},audio_why,&handles))std::cout<<"DirectSound not installed: "<<audio_why<<std::endl;
#ifdef NFSU2_HAS_MODS
            // NFSU2_BOOT64_MODS=1: the mods with their default settings (the launcher's [MAIN]/[MISC]/... defaults), as the product installs them before the game runs.
            if(std::getenv("NFSU2_BOOT64_MODS"))std::cout<<install_widescreen(WidescreenSettings{})<<std::endl<<install_detail(DetailSettings{})<<std::endl;   // opt-in: the engine comparison (fast64_boot) runs the unmodded game
#endif
            const auto log=std::filesystem::absolute(argv[2]).parent_path()/"logs/boot64_trace.log";
            std::cout<<"Platform64: "<<facade.installed_report()<<"\ntrace: "<<log<<std::endl;
            try{p.run(std::stoull(argv[4]),log);}catch(const std::exception& e){std::cout<<"STOP "<<e.what()<<"\ninstructions="<<c.instructions<<std::endl;nfsu2::platform::audio::shutdown_dsound([](const std::string& t){std::cout<<t<<std::endl;});return 0;}
            return 0;
        }
#endif
        if(argc==5 && std::string(argv[1])=="--boot"){
            Cpu c;ActivePlatform p(c,argv[2],argv[3]);
            const auto log=std::filesystem::absolute(argv[2]).parent_path()/"logs/boot_trace.log";
            std::cout<<"Executing translated PE entry point; trace: "<<log<<std::endl;
#ifdef NFSU2_DIFF_TRACE
            DiffTrace trace;diff_trace=&trace;
            auto report=[&](const char* how){diff_trace=nullptr;std::cout<<"DIFFTRACE boot "<<how<<" instructions="<<trace.instructions<<" exits="<<trace.exits<<std::hex<<" pc_hash="<<trace.pc_hash<<" reg_hash="<<trace.reg_hash<<std::dec<<" EAX="<<uint32_t(r<4>(c,0))<<"\n";};
            try{p.run(std::stoull(argv[4]),log);}catch(const std::exception& e){report(e.what());return 0;}
            report("finished");return 0;
#else
            p.run(std::stoull(argv[4]),log);return 0;
#endif
        }
        if(argc==3 && std::string(argv[1])=="--hash"){
            std::string text=argv[2];
            if(text.size()>150)throw Fault("the original normalization routine has a fixed 160-byte buffer");
            Cpu c;c.map(0,0x10000);uint32_t data=c.memory.back().base+0x100;c.map(0,0x10000);
            std::memcpy(c.pointer(data,text.size()+1),text.c_str(),text.size()+1);
            const uint32_t sp=c.memory.back().base+0x8000,stop=0xdead0000;
            wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,data);c.pc=0x00575330;
            auto steps=run(c,stop,5000000);
            std::printf("%08x (%llu statically translated instructions)\n",uint32_t(r<4>(c,0)),static_cast<unsigned long long>(steps));
            return 0;
        }
        if(argc==4 && std::string(argv[1])=="--bench-hash"){
            // Throughput of a real translated routine with calls, loops and table lookups (no platform, no window).
            std::string text=argv[2];const unsigned repeat=unsigned(std::stoul(argv[3]));
            if(text.size()>150)throw Fault("the original normalization routine has a fixed 160-byte buffer");
            Cpu c;c.map(0,0x10000);uint32_t data=c.memory.back().base+0x100;c.map(0,0x10000);
            std::memcpy(c.pointer(data,text.size()+1),text.c_str(),text.size()+1);
            const uint32_t sp=c.memory.back().base+0x8000,stop=0xdead0000;
            uint64_t total=0;uint32_t result=0;
#ifdef NFSU2_DIFF_TRACE
            DiffTrace trace;   // only counted when NFSU2_BENCH_TRACE is set: tracing slows the reference engine
            if(std::getenv("NFSU2_BENCH_TRACE"))diff_trace=&trace;
#endif
#ifdef NFSU2_NATIVE32
            BenchSampler sampler("bench-hash");   // NFSU2_BENCH_SAMPLE=1
#endif
            const auto started=std::chrono::steady_clock::now();
            for(unsigned i=0;i<repeat;++i){
                wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,data);c.pc=0x00575330;
                total+=run(c,stop,5000000);result=uint32_t(r<4>(c,0));
            }
            const double seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
#ifdef NFSU2_DIFF_TRACE
            diff_trace=nullptr;std::printf("page exits per call: %.1f",double(trace.exits)/repeat);
#endif
            std::printf("%08x %llu instructions, %.1f ms, %.1f M instr/s\n",result,static_cast<unsigned long long>(total),seconds*1000,double(total)/seconds/1e6);
            return 0;
        }
        std::cout<<"NFSU2 raw static recompilation\n"
          <<"Input SHA-256: "<<input_sha256<<"\n"
          <<"Identified functions: "<<function_count<<"\n"
          <<"Translated x86 instructions: "<<instruction_count<<"\n"
          <<"Lowered SLEIGH operations: "<<pcode_count<<"\n"
          <<"Original x86 execution fallback: none\n"
          <<"Status: static translation with Windows bridge; real-entry boot is under investigation.\n"
          <<"Menu/racing/full physics/cars/audio acceptance is still pending.\n"
          <<"Usage: speed_raw --hash <resource-path> | --boot <export-dir> <game-dir> <budget>\n";
        return argc==1 || (argc==2 && std::string(argv[1])=="--info") ? 0:2;
    }catch(const std::exception& e){std::cerr<<"raw translation fault: "<<e.what()<<"\n";return 1;}
}
