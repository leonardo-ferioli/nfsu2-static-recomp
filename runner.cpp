#include "runtime.hpp"
#include "difftrace.hpp"
#ifdef NFSU2_NATIVE32
#include "native32.hpp"
#include "bench_sampler.hpp"
using ActivePlatform=nfsu2raw::NativePlatform;
#else
#include "platform.hpp"
using ActivePlatform=nfsu2raw::Platform;
#endif
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace nfsu2raw;
int main(int argc,char** argv){
    try {
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
