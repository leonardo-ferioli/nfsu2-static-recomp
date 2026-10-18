#include "runtime.hpp"
#include "difftrace.hpp"
#ifdef NFSU2_NATIVE32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif
#ifdef NFSU2_NATIVE32
#include "native32.hpp"
using ActivePlatform=nfsu2raw::NativePlatform;
#else
#include "platform.hpp"
using ActivePlatform=nfsu2raw::Platform;
#endif
#include <algorithm>
#include <chrono>
#include <map>
#include <vector>
#include <filesystem>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace nfsu2raw;
static uint32_t word(const std::vector<uint8_t>& b,size_t a){if(a+4>b.size())throw Fault("short JDLZ header");uint32_t v;std::memcpy(&v,b.data()+a,4);return v;}
// Characterization oracle from the observed JDLZ stream contract at VA 573700.
// Real bundles can have trailing padding; the oracle stops at the declared
// output length, as independently documented by OpenNFSTools JDLZ.decompress:
// https://github.com/MWisBest/OpenNFSTools/blob/master/LibNFS/Compression/JDLZ.cs
// The code under test remains the original statically translated instructions.
static std::vector<uint8_t> reference(const std::vector<uint8_t>& input){
    if(input.size()<18 || word(input,0)!=0x5a4c444a || input[4]!=2)throw Fault("invalid JDLZ fixture");
    const size_t end=word(input,12),length=word(input,8);if(end>input.size() || length>64*1024*1024)throw Fault("invalid JDLZ fixture sizes");
    std::vector<uint8_t> out;out.reserve(length);size_t cursor=18;unsigned flags=input[16]|256,flags2=input[17]|256;
    auto take=[&](){if(cursor>=end)throw Fault("truncated JDLZ token");return unsigned(input[cursor++]);};
    while(cursor<end && out.size()<length){
        if(!(flags&1)){if(out.size()>=length)throw Fault("JDLZ literal overflow");out.push_back(uint8_t(take()));}
        else{
            auto first=take(),second=take();unsigned count,distance;
            if(flags2&1){count=((first&0xf0)<<4|second)+3;distance=(first&15)+1;}
            else{count=(first&31)+3;distance=((first&0xe0)<<3|second)+17;}
            if(distance>out.size() || out.size()+count>length)throw Fault("JDLZ back reference outside output");
            for(unsigned i=0;i<count;++i)out.push_back(out[out.size()-distance]);
            flags2>>=1;
        }
        if(out.size()==length)break;
        flags>>=1;if(flags==1)flags=take()|256;if(flags2==1)flags2=take()|256;
    }
    if(out.size()!=length)throw Fault("incomplete JDLZ output");return out;
}
static void translated(Cpu& c,const std::vector<uint8_t>& input,const char* name){
    const auto expected=reference(input);
    c.map(0,input.size());const uint32_t src=c.memory.back().base;std::memcpy(c.pointer(src,input.size()),input.data(),input.size());
    c.map(0,expected.size()+16);const uint32_t dst=c.memory.back().base;
    std::memset(c.pointer(dst+expected.size(),16),0xa5,16);
    const uint32_t sp=uint32_t(r<4>(c,16)),stop=0xdead0000;
    wm<4>(c,sp,stop);wm<4>(c,sp+4,src);wm<4>(c,sp+8,dst);c.pc=0x00573700;
#ifdef NFSU2_DIFF_TRACE
    DiffTrace trace;diff_trace=&trace;
#endif
    const auto started=std::chrono::steady_clock::now();
    uint64_t steps=0;
#ifdef NFSU2_DIFF_TRACE
    if(GetEnvironmentVariableA("NFSU2_PC_HISTOGRAM",nullptr,0)){
        // Reference engine only: which instructions dominate the workload.
        std::map<uint32_t,uint64_t> histogram;
        while(c.pc!=stop){++histogram[c.pc];step(c);++steps;}
        std::vector<std::pair<uint64_t,uint32_t>> top;for(auto [pc,n]:histogram)top.push_back({n,pc});
        std::sort(top.rbegin(),top.rend());
        for(size_t i=0;i<top.size()&&i<80;++i)std::cout<<"HOT "<<std::hex<<top[i].second<<std::dec<<" "<<top[i].first<<'\n';
    }else
#endif
    steps=run(c,stop,3000000000ull);
#ifdef NFSU2_DIFF_TRACE
    diff_trace=nullptr;
    std::cout<<"DIFFTRACE "<<name<<" instructions="<<trace.instructions<<" exits="<<trace.exits<<std::hex<<" pc_hash="<<trace.pc_hash<<" reg_hash="<<trace.reg_hash<<std::dec<<" EAX="<<uint32_t(r<4>(c,0))<<" ESP_delta="<<(int64_t(r<4>(c,16))-int64_t(sp))<<"\n";
#endif
    const double seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
    if(r<4>(c,0)!=expected.size() || std::memcmp(c.pointer(dst,expected.size()),expected.data(),expected.size()))throw Fault(std::string("translated JDLZ mismatch: ")+name);
    for(unsigned i=0;i<16;++i)if(m<1>(c,dst+expected.size()+i)!=0xa5)throw Fault("translated JDLZ overwrote output guard");
    if(r<4>(c,16)!=sp+4)throw Fault("JDLZ cdecl stack discipline");wr<4>(c,16,sp);
    std::cout<<"PASS "<<name<<" "<<expected.size()<<" output bytes, "<<steps<<" translated instructions";
    // Baseline metric for backend work; informational only, never an assertion.
    if(steps>1000000)std::cout<<std::fixed<<std::setprecision(1)<<", "<<seconds*1000<<" ms, "<<double(steps)/seconds/1e6<<" M instr/s";
    std::cout<<"\n";
}
static std::vector<uint8_t> fixture(std::string text,unsigned first,unsigned second,unsigned output){
    std::vector<uint8_t> b(18);std::memcpy(b.data(),"JDLZ\x02\x10",6);uint32_t size=uint32_t(18+text.size());std::memcpy(b.data()+8,&output,4);std::memcpy(b.data()+12,&size,4);b[16]=first;b[17]=second;b.insert(b.end(),text.begin(),text.end());return b;
}
int main(int argc,char** argv){try{
    if(argc!=3)throw Fault("resource tests require export and game directories");
    Cpu c;ActivePlatform platform(c,argv[1],argv[2]);
    translated(c,fixture("static",0,0,6),"literal stream");
    translated(c,fixture(std::string("a\0\3",3),2,1,7),"overlapping back reference");
    const auto file=std::filesystem::path(argv[2])/"GLOBAL/InGameCommon.lzc";
    std::ifstream f(file,std::ios::binary);if(!f)throw Fault("missing actual game resource fixture");
    std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(f)),{});translated(c,bytes,"GLOBAL/InGameCommon.lzc");
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
