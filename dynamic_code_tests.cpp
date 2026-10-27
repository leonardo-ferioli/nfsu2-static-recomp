// Differential test of the runtime P-code interpreter (dynamic_code.hpp).
//
// The JDLZ decompressor (VA 0x573700, self-contained: no calls, no absolute data) is run three ways:
//   1. an independent C++ oracle of the JDLZ format,
//   2. the statically translated instructions in the image,
//   3. a copy of the same machine code placed in heap memory, made executable through the guest's own VirtualProtect
//      import (which is what registers the region) and executed by the SLEIGH-driven interpreter.
// Output bytes, general registers, stack discipline and instruction counts must agree. Unregistered heap code must
// not be interpreted, and the interpreter must reject a region it was not told about.
#include "native32.hpp"
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <array>
#include <chrono>
#include <cstring>
#include <fstream>
#include <random>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace nfsu2raw;

static void check(bool ok,const char* why){if(!ok)throw Fault(std::string("FAILED: ")+why);}
static uint32_t word(const std::vector<uint8_t>& b,size_t a){if(a+4>b.size())throw Fault("short JDLZ header");uint32_t v;std::memcpy(&v,b.data()+a,4);return v;}
// Same independent oracle as resource_tests.cpp (OpenNFSTools JDLZ.decompress semantics).
static std::vector<uint8_t> reference(const std::vector<uint8_t>& input){
    if(input.size()<18 || word(input,0)!=0x5a4c444a || input[4]!=2)throw Fault("invalid JDLZ fixture");
    const size_t end=word(input,12),length=word(input,8);if(end>input.size() || length>64*1024*1024)throw Fault("invalid JDLZ fixture sizes");
    std::vector<uint8_t> out;out.reserve(length);size_t cursor=18;unsigned flags=input[16]|256,flags2=input[17]|256;
    auto take=[&](){if(cursor>=end)throw Fault("truncated JDLZ token");return unsigned(input[cursor++]);};
    while(cursor<end && out.size()<length){
        if(!(flags&1)){out.push_back(uint8_t(take()));}
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
static std::vector<uint8_t> fixture(std::string text,unsigned first,unsigned second,unsigned output){
    std::vector<uint8_t> b(18);std::memcpy(b.data(),"JDLZ\x02\x10",6);uint32_t size=uint32_t(18+text.size());std::memcpy(b.data()+8,&output,4);std::memcpy(b.data()+12,&size,4);b[16]=first;b[17]=second;b.insert(b.end(),text.begin(),text.end());return b;
}

constexpr uint32_t jdlz=0x00573700,jdlz_bytes=0x200,iat_virtual_protect=7877188,stop=0xdead0000;
constexpr unsigned general_registers[]={0,4,8,12,16,20,24,28};  // EAX ECX EDX EBX ESP EBP ESI EDI

struct Outcome{uint32_t registers[8];uint64_t instructions;double seconds;};

// Whole-program differential: the game's startup code (original .text) up to its first CreateThread, once statically
// translated and once interpreted from the same bytes. This is a TEST-ONLY use of the interpreter on the original image
// (the product never does it): it validates the interpreter over ~220k real instructions of CRT, C++ and Win32 startup
// code. The two processes must end in the same registers, the same instruction count and the same memory.
static int boot_digest(const std::filesystem::path& specification,const char* exports,const char* game,bool interpreted,const char* dump_path){
    _putenv_s("NFSU2_DETERMINISTIC_MAP","1");_putenv_s("NFSU2_DETERMINISTIC_TIME","1");_putenv_s("NFSU2_STOP_AT_IMPORT","CreateThread");
    Cpu c;NativePlatform p(c,exports,game);
    DynamicCode interpreter(specification);
    uint32_t image_end=0;for(const auto& region:c.memory)if(region.base==0x400000)image_end=region.base+uint32_t(region.length);
    check(image_end>0x401000,"the image region is mapped");
    interpreter.add_region(0x401000,image_end-0x401000);
    std::string stop;
    try{
        for(;;){
            if(interpreted && interpreter.contains(c.pc))interpreter.run(c,1u<<20);
            else if(!p.dispatch(c)){if(interpreted)throw Fault("interpreted run reached code that is neither interpreted nor native");step(c);}
        }
    }catch(const Fault& e){stop=e.what();}
    // Everything the run can have changed goes to a file: the register file, then every mapped guest region. tools/test_dynamic_boot.py compares the
    // dumps; words that already differ between two runs of the SAME engine (host heap and module addresses) are noise.
    if(dump_path){
        std::ofstream out(dump_path,std::ios::binary);
        auto put=[&](const void* data,size_t size){out.write(static_cast<const char*>(data),std::streamsize(size));};
        const uint32_t count=uint32_t(c.memory.size());put(&count,4);
        std::vector<uint8_t> registers(c.regs.begin(),c.regs.begin()+0x1000);
        const uint32_t register_bytes=0x1000;put(&register_bytes,4);put(registers.data(),registers.size());
        for(const auto& region:c.memory){const uint32_t base=region.base,size=uint32_t(region.length);put(&base,4);put(&size,4);put(c.pointer(base,size),size);}
    }
    std::cout<<"DIGEST stop=\""<<stop<<"\" pc=0x"<<std::hex<<c.pc;
    for(unsigned reg:general_registers)std::cout<<" r"<<reg<<"=0x"<<uint32_t(r<4>(c,reg));
    std::cout<<std::dec<<" instructions="<<c.instructions<<"\n";
    return 0;
}

// ---- operation-level differential ------------------------------------------------------------------------------------
// Every integer/boolean P-code operation the translated engine implements (runtime.hpp eval<>) against the interpreter's
// implementation of it, through interpret_instruction on a one-operation instruction, at several operand widths, with
// random and edge-case values. A division fault must be a fault in both.
constexpr uint32_t op_out=0x2000,op_a=0x2100,op_b=0x2200;
static uint64_t op_cases_run=0;
template<Op O> constexpr bool unary_op(){return O==Op::COPY||O==Op::INT_ZEXT||O==Op::INT_SEXT||O==Op::INT_NEGATE||O==Op::INT_2COMP||O==Op::BOOL_NEGATE||O==Op::POPCOUNT;}
static std::vector<uint64_t> interesting(unsigned bytes,std::mt19937_64& rng){
    const uint64_t top=bytes>=8?~0ull:((1ull<<(bytes*8))-1),sign=1ull<<(bytes*8-1);
    std::vector<uint64_t> v={0,1,2,3,7,8,15,16,31,32,63,64,top,top-1,sign,sign-1,sign+1,top>>1,0x5555555555555555ull&top,0xaaaaaaaaaaaaaaaaull&top};
    for(int i=0;i<160;++i)v.push_back(rng()&top);
    return v;
}
template<Op O,unsigned OW,unsigned AN,unsigned BN>
static void op_case(const char* name,std::mt19937_64& rng){
    DecodedInstruction d;d.address=0x1000;d.length=1;
    InterpOp op;op.opcode=interpreter_opcode(name);check(op.opcode>=0,"P-code operation known to the interpreter");
    op.has_output=true;op.output={VarnodeRef::Register,OW,op_out};
    op.inputs.push_back({VarnodeRef::Register,AN,op_a});
    if constexpr(!unary_op<O>())op.inputs.push_back({VarnodeRef::Register,BN,op_b});
    d.ops.push_back(op);
    const CompiledInstruction compiled=compile_instruction(d,true);
    check(compiled.micro[0].fast,"the operation is eligible for the fast path");
    const std::vector<CompiledInstruction> single{compiled};
    const auto native=jit_compile(single);
    check(native!=nullptr,"native code was generated for the operation");
    Cpu c;
    for(uint64_t a:interesting(AN,rng)){
        for(uint64_t b:interesting(BN,rng)){
            if constexpr(unary_op<O>()){if(b!=0)continue;}
            V expected=0;bool expected_fault=false;
            try{expected=eval<O,OW,AN,BN>(a,b);}catch(const Fault&){expected_fault=true;}
            V ra=a,rb=b;std::memcpy(c.regs.data()+op_a,&ra,AN);std::memcpy(c.regs.data()+op_b,&rb,BN);
            std::memset(c.regs.data()+op_out,0xcc,16);
            bool fault=false;
            try{interpret_instruction(c,d);}catch(const Fault&){fault=true;}
            if(fault!=expected_fault){std::cerr<<name<<" "<<OW<<"/"<<AN<<"/"<<BN<<" a=0x"<<std::hex<<a<<" b=0x"<<b<<std::dec<<" fault: interpreter "<<fault<<" translated "<<expected_fault<<"\n";throw Fault("FAILED: fault behaviour differs");}
            if(fault)continue;
            V got=0;std::memcpy(&got,c.regs.data()+op_out,OW);
            const V want=expected&nfsu2raw::mask(OW);
            if(got!=want){std::cerr<<name<<" "<<OW<<"/"<<AN<<"/"<<BN<<" a=0x"<<std::hex<<a<<" b=0x"<<b<<" want=0x"<<uint64_t(want)<<" got=0x"<<uint64_t(got)<<std::dec<<"\n";throw Fault("FAILED: interpreter result differs from the translated operation");}
            for(unsigned i=OW;i<16;++i)check(c.regs[op_out+i]==0xcc,"the interpreter wrote past the output varnode");
            // The same operation through the native-integer fast path.
            std::memset(c.regs.data()+op_out,0xcc,16);
            bool fast_fault=false;
            try{execute_compiled(c,compiled);}catch(const Fault&){fast_fault=true;}
            if(fast_fault!=expected_fault)throw Fault("FAILED: fast path fault behaviour differs");
            V fast_got=0;std::memcpy(&fast_got,c.regs.data()+op_out,OW);
            if(fast_got!=want){std::cerr<<name<<" fast "<<OW<<"/"<<AN<<"/"<<BN<<" a=0x"<<std::hex<<a<<" b=0x"<<b<<" want=0x"<<uint64_t(want)<<" got=0x"<<uint64_t(fast_got)<<std::dec<<"\n";throw Fault("FAILED: fast path result differs from the translated operation");}
            for(unsigned i=OW;i<16;++i)check(c.regs[op_out+i]==0xcc,"the fast path wrote past the output varnode");
            // And as native x86 code generated for the block.
            std::memset(c.regs.data()+op_out,0xcc,16);
            bool native_fault=false;
            try{jit_run(c,*native);}catch(const Fault&){native_fault=true;}
            if(native_fault!=expected_fault)throw Fault("FAILED: native code fault behaviour differs");
            if(!native_fault){
                V native_got=0;std::memcpy(&native_got,c.regs.data()+op_out,OW);
                if(native_got!=want){std::cerr<<name<<" native "<<OW<<"/"<<AN<<"/"<<BN<<" a=0x"<<std::hex<<a<<" b=0x"<<b<<" want=0x"<<uint64_t(want)<<" got=0x"<<uint64_t(native_got)<<std::dec<<"\n";throw Fault("FAILED: native code result differs from the translated operation");}
                for(unsigned i=OW;i<16;++i)check(c.regs[op_out+i]==0xcc,"the native code wrote past the output varnode");
            }
            ++op_cases_run;
        }
    }
}
template<Op O>
static void op_all_sizes(const char* name,std::mt19937_64& rng){
    op_case<O,1,1,1>(name,rng);op_case<O,2,2,2>(name,rng);op_case<O,4,4,4>(name,rng);op_case<O,8,8,8>(name,rng);
    op_case<O,1,4,1>(name,rng);op_case<O,4,1,4>(name,rng);op_case<O,8,4,1>(name,rng);op_case<O,4,8,2>(name,rng);
    op_case<O,1,2,2>(name,rng);op_case<O,2,4,4>(name,rng);
}
static void operation_cases(){
    std::mt19937_64 rng(0x4e465355324f50ull);
#define OPS(X) X(COPY) X(INT_ZEXT) X(INT_SEXT) X(INT_ADD) X(INT_SUB) X(INT_MULT) X(INT_DIV) X(INT_REM) X(INT_SDIV) X(INT_SREM) \
    X(INT_AND) X(INT_OR) X(INT_XOR) X(INT_NEGATE) X(INT_2COMP) X(INT_LEFT) X(INT_RIGHT) X(INT_SRIGHT) X(INT_EQUAL) X(INT_NOTEQUAL) \
    X(INT_LESS) X(INT_LESSEQUAL) X(INT_SLESS) X(INT_SLESSEQUAL) X(INT_CARRY) X(INT_SCARRY) X(INT_SBORROW) X(BOOL_NEGATE) \
    X(BOOL_AND) X(BOOL_OR) X(BOOL_XOR) X(POPCOUNT) X(SUBPIECE)
#define RUN(NAME) op_all_sizes<Op::NAME>(#NAME,rng);
    OPS(RUN)
#undef RUN
    std::cout<<"PASS operation-level differential: "<<op_cases_run<<" cases over 33 P-code operations\n";
}

int main(int argc,char** argv){try{
    if(argc<3)throw Fault("requires export directory, game directory and optionally the SLEIGH specification");
    const std::filesystem::path specification=argc>3?std::filesystem::path(argv[3]):std::filesystem::path(argv[1])/".."/"third_party"/"sleigh_spec"/"x86.sla";
    if(argc>4)return boot_digest(specification,argv[1],argv[2],std::string(argv[4])=="boot-interpreted",argc>5?argv[5]:nullptr);
    operation_cases();
    Cpu c;NativePlatform p(c,argv[1],argv[2]);
    p.set_dynamic_code_specification(specification);

    // ---- copy of the machine code in executable-to-be heap memory -------------------------------------------------
    // Placed well above the translated image (the test process does not reserve the image's address range itself).
    uint8_t* heap=nullptr;
    for(uintptr_t hint=0x30000000;!heap && hint<0x60000000;hint+=0x00100000)heap=static_cast<uint8_t*>(VirtualAlloc(reinterpret_cast<void*>(hint),0x1000,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
    check(heap!=nullptr,"allocate the generated-code page");
    const uint32_t region=uint32_t(reinterpret_cast<uintptr_t>(heap));
    check(region>=0x01000000,"the copy lives outside the translated image");
    std::memcpy(heap,c.pointer(jdlz,jdlz_bytes),jdlz_bytes);

    const uint32_t sp=uint32_t(r<4>(c,16));
    auto prepare=[&](uint32_t entry,uint32_t src,uint32_t dst){
        const uint32_t initial[8]={0x11111111,0x22222222,0x33333333,0x44444444,sp,0x55555555,0x66666666,0x77777777};
        for(unsigned i=0;i<8;++i)wr<4>(c,general_registers[i],initial[i]);
        wm<4>(c,sp,stop);wm<4>(c,sp+4,src);wm<4>(c,sp+8,dst);c.pc=entry;
    };
    auto collect=[&](Outcome& o){for(unsigned i=0;i<8;++i)o.registers[i]=uint32_t(r<4>(c,general_registers[i]));};

    // ---- 1. code that was never registered must not be interpreted ------------------------------------------------
    {
        c.pc=region;
        bool handled=false;try{handled=p.dispatch(c);}catch(const Fault&){handled=false;}
        check(!handled,"unregistered heap code is not executed by the interpreter");
        check(p.dynamic_instructions_decoded()==0,"nothing decoded before registration");
    }

    // ---- 2. the guest's VirtualProtect import registers the region -------------------------------------------------
    {
        c.map(0,16);const uint32_t old_protection=c.memory.back().base;
        wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,region);wm<4>(c,sp+8,0x1000);wm<4>(c,sp+12,PAGE_EXECUTE_READWRITE);wm<4>(c,sp+16,old_protection);
        c.pc=uint32_t(m<4>(c,iat_virtual_protect));
        for(unsigned step=0;step<8 && c.pc!=stop;++step)check(p.dispatch(c),"VirtualProtect returns to the guest");
        check(c.pc==stop,"VirtualProtect returned");
        check(r<4>(c,0)==1,"VirtualProtect succeeded");
        check(uint32_t(m<4>(c,old_protection))==PAGE_READWRITE,"VirtualProtect reported the previous protection");
        MEMORY_BASIC_INFORMATION info;check(VirtualQuery(heap,&info,sizeof(info)) && info.Protect==PAGE_EXECUTE_READWRITE,"the page really became executable");
        wr<4>(c,16,sp);
    }

    // ---- 3. differential runs ----------------------------------------------------------------------------------------
    auto compare=[&](const std::vector<uint8_t>& input,const char* name){
        const auto expected=reference(input);
        c.map(0,input.size());const uint32_t src=c.memory.back().base;std::memcpy(c.pointer(src,input.size()),input.data(),input.size());
        auto run_variant=[&](bool interpreted,uint8_t guard,Outcome& o,uint32_t& dst){
            c.map(0,expected.size()+16);dst=c.memory.back().base;std::memset(c.pointer(dst+expected.size(),16),guard,16);
            prepare(interpreted?region:jdlz,src,dst);
            const uint64_t before=c.instructions;
            const auto started=std::chrono::steady_clock::now();
            if(interpreted){
                unsigned rounds=0;
                while(c.pc!=stop){
                    if(!p.dispatch(c)){std::cerr<<"interpreter left registered code at pc=0x"<<std::hex<<c.pc<<" (region 0x"<<region<<", "<<std::dec<<c.instructions-before<<" instructions)\n";throw Fault("FAILED: interpreted code stays interpreted until it returns");}
                    check(++rounds<100000,"interpreter terminates");
                }
                o.instructions=c.instructions-before;
            }else o.instructions=nfsu2raw::run(c,stop,3000000000ull);
            o.seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
            collect(o);
            check(r<4>(c,0)==expected.size(),"returned length");
            check(!std::memcmp(c.pointer(dst,expected.size()),expected.data(),expected.size()),"decompressed bytes match the oracle");
            for(unsigned i=0;i<16;++i)check(m<1>(c,dst+expected.size()+i)==guard,"output guard intact");
            check(r<4>(c,16)==sp+4,"cdecl stack discipline");
        };
        Outcome translated{},interpreted{};uint32_t dst_a=0,dst_b=0;
        run_variant(false,0xa5,translated,dst_a);
        run_variant(true,0x5a,interpreted,dst_b);
        check(!std::memcmp(c.pointer(dst_a,expected.size()),c.pointer(dst_b,expected.size()),expected.size()),"translated and interpreted outputs are identical");
        for(unsigned i=0;i<8;++i)check(translated.registers[i]==interpreted.registers[i],"general registers agree after the run");
        check(translated.instructions==interpreted.instructions,"same number of executed instructions");
        wr<4>(c,16,sp);
        std::cout<<"PASS "<<name<<" "<<expected.size()<<" bytes, "<<interpreted.instructions<<" instructions";
        if(interpreted.instructions>1000000)std::cout<<std::fixed<<std::setprecision(1)<<", interpreter "<<double(interpreted.instructions)/interpreted.seconds/1e6<<" M instr/s vs translated "<<double(translated.instructions)/translated.seconds/1e6<<" M instr/s";
        std::cout<<"\n";
    };
    compare(fixture("static",0,0,6),"literal stream");
    compare(fixture(std::string("a\0\3",3),2,1,7),"overlapping back reference");
    const auto file=std::filesystem::path(argv[2])/"GLOBAL/InGameCommon.lzc";
    std::ifstream f(file,std::ios::binary);check(bool(f),"actual game resource fixture is present");
    std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(f)),{});compare(bytes,"GLOBAL/InGameCommon.lzc");
    // ---- 4. the optimized interpreter against the generic one, state compared after every block -------------------------
    // Both modes run the same code from the same state (same buffers, reset in between); registers AND flags (0..0x240)
    // are hashed at every block exit and the sequences must be identical. This validates the native-integer fast path
    // and the removal of dead flag computations inside blocks, whose effect is only observable at block exits.
    {
        const auto expected=reference(bytes);
        c.map(0,bytes.size());const uint32_t src=c.memory.back().base;std::memcpy(c.pointer(src,bytes.size()),bytes.data(),bytes.size());
        c.map(0,expected.size()+16);const uint32_t dst=c.memory.back().base;
        auto trace=[&](int mode){
            std::vector<uint64_t> hashes;std::vector<std::array<uint8_t,0x240>> samples;
            std::memset(c.pointer(dst,expected.size()+16),0,expected.size()+16);
            DynamicCode interpreter(specification);interpreter.set_mode(mode);interpreter.add_region(region,0x1000);
            prepare(region,src,dst);
            const uint64_t before=c.instructions;
            while(c.pc!=stop){
                interpreter.run(c,1);
                uint64_t h=1469598103934665603ull;for(unsigned i=0;i<0x240;++i)h=(h^c.regs[i])*1099511628211ull;
                h=(h^c.pc)*1099511628211ull;hashes.push_back(h);
            }
            check(!std::memcmp(c.pointer(dst,expected.size()),expected.data(),expected.size()),"trace run output matches the oracle");
            wr<4>(c,16,sp);
            hashes.push_back(c.instructions-before);
            return hashes;
        };
        const auto generic=trace(0);
        for(int mode:{1,2,3}){
            const auto other=trace(mode);
            check(other.size()==generic.size(),"same number of blocks/instructions in every interpreter mode");
            for(size_t i=0;i<generic.size();++i)if(generic[i]!=other[i]){std::cerr<<"mode "<<mode<<" diverges from the generic path at block "<<i<<"\n";throw Fault("FAILED: optimized interpreter state differs from the generic one");}
        }
        std::cout<<"PASS optimized interpreter modes equal the generic one at all "<<generic.size()-1<<" block exits ("<<generic.back()<<" instructions): registers and flags\n";
    }
    std::cout<<"decoded "<<p.dynamic_instructions_decoded()<<" distinct instructions at run time\n";
    check(p.dynamic_instructions_decoded()>0 && p.dynamic_instructions_decoded()<jdlz_bytes,"decoded only what was executed");
    VirtualFree(heap,0,MEM_RELEASE);
    return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
