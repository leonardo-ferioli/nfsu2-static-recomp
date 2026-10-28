#include "runtime.hpp"
#include "guest_memory.hpp"
#include "guest_arena.hpp"
#include "difftrace.hpp"
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <limits>
#if defined(NFSU2_NATIVE32) || defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <atomic>
#endif

namespace nfsu2raw {
#ifdef NFSU2_NATIVE32
// 32-bit: a 64-bit atomic add is a lock cmpxchg8b loop on x86-32, and this runs after every native call. Only equality is
// compared, so wrapping around is harmless.
static std::atomic<uint32_t> memory_epoch=1;
// A plain load and store, not a locked add: the value only has to change. Two threads racing may store the same new value; a
// cache then lives on that should have been dropped, which only matters for the diagnostic of an access to freed memory.
void invalidate_native_memory(){memory_epoch.store(memory_epoch.load(std::memory_order_relaxed)+1,std::memory_order_relaxed);}
#endif
Cpu::~Cpu(){
#ifdef NFSU2_NATIVE32
    for(auto& region:memory)VirtualFree(nfsu2::guest::ptr<void>(region.base),0,MEM_RELEASE);
    invalidate_native_memory();
#elif !defined(NFSU2_GUEST_IDENTITY)
    if(auto* space=nfsu2::guest::current_address_space())
        for(auto& region:memory){
            space->decommit(region.base,uint32_t(region.length));
        }
#endif
}
uint8_t* Cpu::pointer(uint32_t a,size_t n) {
#ifdef NFSU2_NATIVE32
    if(uint64_t(a)+n<=0x100000000ull){
        for(auto& region:memory)if(a>=region.base && uint64_t(a)-region.base<region.length){
            if(uint64_t(a)-region.base+n>region.length)throw Fault("guest region boundary exceeded");
            return nfsu2::guest::ptr<uint8_t>(a);
        }
        struct Cache{uint64_t base=0,end=0;};
        thread_local std::array<Cache,16> hot{};thread_local uint32_t epoch=0;thread_local unsigned next=0;
        const auto current=memory_epoch.load(std::memory_order_relaxed);
        if(epoch!=current){hot={};epoch=current;next=0;}
        for(const auto& entry:hot)if(a>=entry.base && uint64_t(a)+n<=entry.end)return nfsu2::guest::ptr<uint8_t>(a);
        MEMORY_BASIC_INFORMATION info{};
        if(VirtualQuery(nfsu2::guest::ptr<void>(a),&info,sizeof(info)) && info.State==MEM_COMMIT &&
           !(info.Protect&(PAGE_NOACCESS|PAGE_GUARD)) && uint64_t(a)+n<=uintptr_t(info.BaseAddress)+info.RegionSize){
            hot[next++%hot.size()]={uintptr_t(info.BaseAddress),uint64_t(uintptr_t(info.BaseAddress))+info.RegionSize};
            return nfsu2::guest::ptr<uint8_t>(a);
        }
    }
#else
    for(auto& region:memory)if(a>=region.base && uint64_t(a)-region.base+n<=region.length)
        return region.bytes.empty()?nfsu2::guest::ptr<uint8_t>(a):region.bytes.data()+(a-region.base);   // empty: the region lives in the arena
#endif
    char msg[100];std::snprintf(msg,sizeof(msg),"unmapped guest memory 0x%08x (%zu bytes), PC=0x%08x",a,n,pc);
    throw Fault(msg);
}
void Cpu::map(uint32_t base,size_t size) {
    if(uint64_t(base)+size>0x100000000ull)throw Fault("guest mapping exceeds 32-bit address space");
    for(auto& r:memory)if(uint64_t(base)<uint64_t(r.base)+r.length && uint64_t(r.base)<uint64_t(base)+size)
        throw Fault("overlapping guest memory mappings");
#ifdef NFSU2_NATIVE32
    invalidate_native_memory();
    if(base==0x00400000 && size==0x00532000){
        auto module=GetModuleHandleW(nullptr);auto dos=reinterpret_cast<IMAGE_DOS_HEADER*>(module);
        auto nt=reinterpret_cast<IMAGE_NT_HEADERS*>(uintptr_t(module)+dos->e_lfanew);bool reservation=false;
        for(unsigned i=0;i<nt->FileHeader.NumberOfSections;++i){auto& s=IMAGE_FIRST_SECTION(nt)[i];
            if(std::memcmp(s.Name,".raw_gue",8)==0 && s.VirtualAddress==0x1000 && s.Misc.VirtualSize>=size-0x1000 && !(s.Characteristics&IMAGE_SCN_MEM_EXECUTE))reservation=true;
        }
        if(uintptr_t(module)!=base || !reservation)throw Fault("guest image requires a non-executable PE reservation");
        DWORD old;if(!VirtualProtect(module,size,PAGE_READWRITE,&old))throw Fault("cannot write reserved guest image data");
    }else{
        void* mapped=nullptr;
        if(!base && GetEnvironmentVariableA("NFSU2_DETERMINISTIC_MAP",nullptr,0)){
            // Differential tests need identical guest pointers in separate processes (no ASLR variation).
            static std::atomic<uint32_t> next{0x10000000};
            for(unsigned tries=0;tries<64 && !mapped;++tries){
                const uint32_t at=next.fetch_add(uint32_t((size+0x2ffff)&~size_t(0xffff)));
                mapped=VirtualAlloc(nfsu2::guest::ptr<void>(at),size,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
            }
        }else mapped=VirtualAlloc(nfsu2::guest::ptr<void>(base),size,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
        if(!mapped || (base && uintptr_t(mapped)!=base))throw Fault("cannot map non-executable guest memory at requested address");
        base=nfsu2::guest::to_guest(mapped);
    }
#else
    // Automatic placement is the same in both models (guest pointers are part of what the code computes with: hash tables, alignment-dependent paths).
    if(!base){base=0x02000000;for(auto& r:memory)if(uint64_t(r.base)+r.length<0x70000000)base=std::max(base,uint32_t((uint64_t(r.base)+r.length+0xffff)&~0xffffull));}
#ifndef NFSU2_GUEST_IDENTITY
    if(auto* space=nfsu2::guest::current_address_space()){   // the guest lives in the arena (docs/MEMORY_MODEL_64.md): the range is committed there
        if(!space->commit(base,uint32_t(size),nfsu2::guest::kPageReadWrite))throw Fault("cannot commit guest memory at the requested address");
        memory.push_back(Region{base,{},size});
        return;
    }
#endif
#endif
    memory.push_back(Region{base,std::vector<uint8_t>(size),size});
}
[[noreturn]] void missing_instruction(uint32_t a){
    char msg[90];std::snprintf(msg,sizeof(msg),"no statically translated instruction at 0x%08x",a);throw Fault(msg);
}
#ifdef NFSU2_DIFF_TRACE
thread_local DiffTrace* diff_trace=nullptr;
static uint64_t env_range(bool high){
    char text[64];if(!GetEnvironmentVariableA("NFSU2_DIFF_LOG_RANGE",text,sizeof(text)))return high?0:~0ull;
    const char* colon=std::strchr(text,':');return high?(colon?std::strtoull(colon+1,nullptr,10):0):std::strtoull(text,nullptr,10);
}
uint64_t diff_log_lo=env_range(false),diff_log_hi=env_range(true);
void diff_log(uint32_t pc,uint64_t index){
    static FILE* log=[]{char path[260];return GetEnvironmentVariableA("NFSU2_DIFF_LOG_FILE",path,sizeof(path))?std::fopen(path,"w"):nullptr;}();
    if(log)std::fprintf(log,"%llu %08x\n",(unsigned long long)index,pc);
}
void diff_trace_exit(Cpu& c,uint32_t to_pc){
    auto* t=diff_trace;if(!t)return;
    // Only the architectural register file; the shadow EIP at 644..647 differs by design between backends.
    static const bool mask_flags=GetEnvironmentVariableA("NFSU2_DIFF_MASK_FLAGS",nullptr,0)!=0;
    uint8_t snapshot[0x1400];std::memcpy(snapshot,c.regs.data(),sizeof(snapshot));std::memset(snapshot+644,0,4);
    if(mask_flags)std::memset(snapshot+0x200,0,0x20); // flag bytes proven dead are not materialized by the fast backend
    uint64_t h=t->reg_hash;
    for(size_t i=0;i<sizeof(snapshot);i+=8){uint64_t w;std::memcpy(&w,snapshot+i,8);h=(h^w)*1099511628211ull;}
    h=(h^to_pc)*1099511628211ull;t->reg_hash=h;t->last_exit[t->exits++%DiffTrace::ring]=to_pc;
    // Optional per-exit checkpoints to locate the first divergence between backends.
    static FILE* checkpoints=[]{char path[260];return GetEnvironmentVariableA("NFSU2_DIFF_CHECKPOINTS",path,sizeof(path))?std::fopen(path,"w"):nullptr;}();
    if(checkpoints)std::fprintf(checkpoints,"%llu %08x %016llx %llu\n",(unsigned long long)t->exits,to_pc,(unsigned long long)t->pc_hash,(unsigned long long)t->instructions);
}
#endif
#ifdef NFSU2_FAST_BACKEND
// Fast pages count their own instructions and keep the registers in locals between exits.
void step(Cpu& c){c.pc=dispatch(c);wr<4>(c,644,c.pc);}
void fast_fault(Cpu& c,const char* what,uint32_t pc){
    c.pc=pc;char msg[96];std::snprintf(msg,sizeof(msg),"%s, PC=0x%08x",what,pc);throw Fault(msg);
}
#else
void step(Cpu& c){
    wr<4>(c,644,c.pc);
#ifdef NFSU2_DIFF_TRACE
    const uint32_t from=c.pc;diff_trace_pc(from);
#endif
    c.pc=dispatch(c);wr<4>(c,644,c.pc);++c.instructions;
#ifdef NFSU2_DIFF_TRACE
    if((from^c.pc)>>12)diff_trace_exit(c,c.pc);
#endif
}
#endif
uint64_t run(Cpu& c,uint32_t stop,uint64_t budget){
    uint64_t start=c.instructions;
    while(c.pc!=stop && c.instructions-start<budget)step(c);
    if(c.pc!=stop)throw Fault("translated execution instruction budget exhausted");
    return c.instructions-start;
}

// x87 80-bit operands are kept as ten raw bytes. Native long double on Windows
// is only 64 bits; these operations deliberately use x87 memory instructions.
struct F80 {uint8_t bytes[10];};
static F80 unpack80(V v){F80 f{};std::memcpy(&f,&v,10);return f;}
static V pack80(const F80& f){V v=0;std::memcpy(&v,&f,10);return v;}
static F80 to80(V v,unsigned n){
    F80 z{};
    if(n==10)return unpack80(v);
    if(n==4){uint32_t b=uint32_t(v);float x=std::bit_cast<float>(b);asm volatile("flds %1; fstpt %0":"=m"(z):"m"(x):"st");}
    else if(n==8){uint64_t b=uint64_t(v);double x=std::bit_cast<double>(b);asm volatile("fldl %1; fstpt %0":"=m"(z):"m"(x):"st");}
    else throw Fault("unsupported floating point width");return z;
}
static V from80(F80 x,unsigned n){
    if(n==10)return pack80(x);
    if(n==4){float z;asm volatile("fldt %1; fstps %0":"=m"(z):"m"(x):"st");return std::bit_cast<uint32_t>(z);}
    if(n==8){double z;asm volatile("fldt %1; fstpl %0":"=m"(z):"m"(x):"st");return std::bit_cast<uint64_t>(z);}
    throw Fault("unsupported floating point result width");
}
V float_op(const char* op,V a,unsigned an,V b,unsigned bn,unsigned out){
    if(std::strcmp(op,"INT2FLOAT")==0){
        int64_t x=static_cast<int64_t>(signed_value(a,an));F80 z{};
        asm volatile("fildq %1; fstpt %0":"=m"(z):"m"(x):"st");return from80(z,out);
    }
    F80 x=to80(a,an),y{},z{};
    if(std::strcmp(op,"FLOAT2FLOAT")==0)return from80(x,out);
    if(std::strcmp(op,"FLOAT_NAN")==0){
        uint64_t sig=0;uint16_t exp=0;std::memcpy(&sig,x.bytes,8);std::memcpy(&exp,x.bytes+8,2);
        return (exp&0x7fff)==0x7fff && (sig&0x7fffffffffffffffull)!=0;
    }
    if(std::strcmp(op,"FLOAT_NEG")==0){x.bytes[9]^=0x80;return from80(x,out);}
    if(std::strcmp(op,"FLOAT_ABS")==0){x.bytes[9]&=0x7f;return from80(x,out);}
    if(std::strcmp(op,"FLOAT_SQRT")==0){asm volatile("fldt %1; fsqrt; fstpt %0":"=m"(z):"m"(x):"st");return from80(z,out);}
    if(std::strcmp(op,"ROUND")==0){asm volatile("fldt %1; frndint; fstpt %0":"=m"(z):"m"(x):"st");return from80(z,out);}
    if(std::strcmp(op,"TRUNC")==0){
        int64_t n;asm volatile("fldt %1; fisttpq %0":"=m"(n):"m"(x):"st");return static_cast<V>(n)&mask(out);
    }
    y=to80(b,bn);
    if(std::strcmp(op,"FLOAT_ADD")==0)asm volatile("fldt %1; fldt %2; faddp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");
    else if(std::strcmp(op,"FLOAT_SUB")==0)asm volatile("fldt %2; fldt %1; fsubp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");
    else if(std::strcmp(op,"FLOAT_MULT")==0)asm volatile("fldt %1; fldt %2; fmulp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");
    else if(std::strcmp(op,"FLOAT_DIV")==0)asm volatile("fldt %2; fldt %1; fdivp; fstpt %0":"=m"(z):"m"(x),"m"(y):"st");
    else if(std::strcmp(op,"FLOAT_EQUAL")==0 || std::strcmp(op,"FLOAT_NOTEQUAL")==0 ||
            std::strcmp(op,"FLOAT_LESS")==0 || std::strcmp(op,"FLOAT_LESSEQUAL")==0){
        unsigned char eq,lt,un;
        asm volatile("fldt %3; fldt %4; fucomip %%st(1), %%st; fstp %%st(0); sete %0; setb %1; setp %2"
            :"=qm"(eq),"=qm"(lt),"=qm"(un):"m"(y),"m"(x):"st","cc");
        if(std::strcmp(op,"FLOAT_EQUAL")==0)return eq&&!un;
        if(std::strcmp(op,"FLOAT_NOTEQUAL")==0)return !eq||un;
        if(std::strcmp(op,"FLOAT_LESS")==0)return lt&&!un;
        return (lt||eq)&&!un;
    }else throw Fault(std::string("unlowered float operation ")+op);
    return from80(z,out);
}
#if __has_include("generated/template_instantiations.inc")
#include "generated/template_instantiations.inc"
#endif
}
