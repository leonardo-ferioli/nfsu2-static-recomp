#include "runtime.hpp"
#include <cmath>
#include <cstdio>
#include <iostream>

using namespace nfsu2raw;
static unsigned checks=0;
static void require(bool ok,const char* name){++checks;if(!ok)throw Fault(std::string("test failed: ")+name);}
template<unsigned N> static void integers(){
    constexpr uint64_t max=N==8 ? UINT64_MAX : ((uint64_t(1)<<(N*8))-1);
    constexpr uint64_t sign=uint64_t(1)<<(N*8-1);
    uint64_t seed=0xa73159d34b1ull;
    for(unsigned i=0;i<1000;++i){
        seed=seed*6364136223846793005ull+1;uint64_t a=seed&max;
        seed=seed*6364136223846793005ull+1;uint64_t b=seed&max;
        uint64_t sum=(a+b)&max,difference=(a-b)&max;
        require((eval<Op::INT_ADD,N,N,N>(a,b)&max)==sum,"integer add");
        require(eval<Op::INT_CARRY,1,N,N>(a,b)==(sum<a),"unsigned carry");
        require(eval<Op::INT_SCARRY,1,N,N>(a,b)==bool((~(a^b)&(a^sum))&sign),"signed add overflow");
        require(eval<Op::INT_SBORROW,1,N,N>(a,b)==bool(((a^b)&(a^difference))&sign),"signed subtract overflow");
        require(eval<Op::INT_LEFT,N,N,4>(a,N*8)==0,"oversized left shift");
        require(eval<Op::INT_RIGHT,N,N,4>(a,N*8)==0,"oversized right shift");
        auto negative=bool(a&sign);
        require((eval<Op::INT_SRIGHT,N,N,4>(a,N*8)&max)==(negative?max:0),"oversized arithmetic shift");
    }
}
static uint32_t reference_hash(const std::string& s){
    uint32_t h=0xffffffffu;
    for(unsigned char ch:s){if(ch>='a'&&ch<='z')ch-=32;if(ch=='/')ch='\\';h=h*33+ch;}
    return h;
}
static void translated_hash(const std::string& text){
    Cpu c;c.map(0,0x10000);uint32_t data=c.memory.back().base+0x100;c.map(0,0x10000);
    std::memcpy(c.pointer(data,text.size()+1),text.c_str(),text.size()+1);
    const uint32_t sp=c.memory.back().base+0x8000,stop=0xdead0000;
    wr<4>(c,16,sp);wm<4>(c,sp,stop);wm<4>(c,sp+4,data);c.pc=0x00575330;
    run(c,stop,5000000);
    require(uint32_t(r<4>(c,0))==reference_hash(text),"translated path normalization and hash");
    require(uint32_t(r<4>(c,16))==sp+4,"translated CALL/RET stack discipline");
}
static V f32(float x){return std::bit_cast<uint32_t>(x);}
static float as32(V x){return std::bit_cast<float>(uint32_t(x));}
// Characterize the virtual resource visitor reached by the real boot at
// 0x005048f0 (original vtable pointer at 0x0079ab00).
static void translated_resource_visitor(){
    Cpu c;c.map(0,4096);uint32_t base=c.memory.back().base;
    const uint32_t self=base+0x100,item=base+0x200,sp=base+0x800;
    for(bool match:{true,false}){
        wm<4>(c,self+4,0xabc123);wm<4>(c,self+8,0x55);
        wm<4>(c,item+12,match?0xabc123:0xabc124);
        wr<4>(c,4,self);wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,sp+4,item);
        c.pc=0x005048f0;run(c,0xdead0000,32);
        require(r<1>(c,0)==(match?0:1),"translated resource visitor match result");
        require(m<4>(c,self+8)==(match?item:0x55),"translated resource visitor stores only matching item");
        require(r<4>(c,16)==sp+8,"translated resource visitor thiscall stack cleanup");
    }
}
int main(){
 try{
    integers<1>();integers<2>();integers<4>();integers<8>();
    Cpu c;wr<4>(c,0,0xaabbccdd);wr<1>(c,1,0x42);
    require(r<4>(c,0)==0xaabb42dd,"overlapping AL/AH/AX/EAX storage");
    c.map(0,16);uint32_t data=c.memory.back().base;wm<8>(c,data+1,0x8877665544332211ull);
    require(m<4>(c,data+2)==0x55443322,"unaligned little-endian memory");
    wr<4>(c,16,data+4);wm<4>(c,data+4,0xdead0000);wr<4>(c,0,0xabc123);
    c.pc=0x006f6c46;run(c,0xdead0000,2);
    require(r<4>(c,16)==data+8 && r<4>(c,0)==0xabc123,"statically recovered empty virtual method returns without changing EAX");
    bool fault=false;try{m<4>(c,data+15);}catch(const Fault&){fault=true;}require(fault,"memory boundary fault");
    require(as32(float_op("FLOAT_ADD",f32(1.5f),4,f32(2.25f),4,4))==3.75f,"x87 add");
    require(as32(float_op("FLOAT_SUB",f32(6.0f),4,f32(2.0f),4,4))==4.0f,"x87 subtract operand order");
    require(as32(float_op("FLOAT_DIV",f32(6.0f),4,f32(2.0f),4,4))==3.0f,"x87 divide operand order");
    require(as32(float_op("FLOAT_MULT",f32(6.0f),4,f32(2.0f),4,4))==12.0f,"x87 multiply");
    require(float_op("FLOAT_LESS",f32(1),4,f32(2),4,1)==1,"x87 comparison operand order");
    require(float_op("FLOAT_LESS",f32(2),4,f32(1),4,1)==0,"x87 comparison reverse");
    require(as32(float_op("FLOAT_SQRT",f32(9),4,0,4,4))==3,"x87 square root");
    require(uint32_t(float_op("TRUNC",f32(-3.75f),4,0,4,4))==uint32_t(-3),"float truncation");
    V extended=float_op("FLOAT2FLOAT",f32(1.5f),4,0,4,10);
    require(as32(float_op("FLOAT2FLOAT",extended,10,0,4,4))==1.5f,"80-bit storage round trip");
    require(float_op("FLOAT_NAN",f32(NAN),4,0,4,1)==1,"NaN classification");
    for(auto text:{"","abc","ABC","cars/350z/geometry.bin","GLOBAL\\GLOBALB.BUN","UI_Main.fng"})translated_hash(text);
    translated_resource_visitor();
    fault=false;try{c.pc=0x123;step(c);}catch(const Fault&){fault=true;}require(fault,"no original code fallback");
    fault=false;try{c.pc=0x123;user_op(c,0,{});}catch(const Fault&){fault=true;}require(fault,"unresolved userops fail explicitly");
    std::cout<<"PASS "<<checks<<" checks, including real translated NFSU2 hash/normalization functions\n";
    return 0;
 }catch(const std::exception& e){std::cerr<<e.what()<<"\n";return 1;}
}
