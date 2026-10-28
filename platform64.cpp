#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
#include "platform64.hpp"
#include <algorithm>
#include <iomanip>
#include <limits>
#include <sstream>

namespace nfsu2raw {
namespace {
struct ImageBlock{uint32_t base,size;const char* file;const char* sha;};
struct Import{uint32_t iat,token;const char* dll;const char* name;};
#include "generated/platform_image.inc"
std::atomic<Platform64*> g_current{nullptr};
constexpr uint32_t import_token_base=0xf0000000u,import_token_end=0xf0010000u,dynamic_token_base=0xf0010000u,dynamic_token_end=0xf0100000u;
std::string sha256(const std::vector<uint8_t>& bytes){
    uint8_t digest[32];
    if(BCryptHash(BCRYPT_SHA256_ALG_HANDLE,nullptr,0,const_cast<uint8_t*>(bytes.data()),ULONG(bytes.size()),digest,32)<0)throw Fault("Windows SHA-256 failed");
    std::ostringstream s;for(auto b:digest)s<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(b);return s.str();
}
std::string hex(uint32_t v){std::ostringstream s;s<<"0x"<<std::hex<<v;return s.str();}
}

// A guest processor with its stack and thread block in the arena. The main one wraps the processor of the caller.
struct Platform64::Context{
    std::unique_ptr<Cpu> owned;Cpu* cpu=nullptr;uint32_t stack=0,teb=0;
    ~Context(){
        if(auto* space=nfsu2::guest::current_address_space()){if(stack)space->free(stack);if(teb)space->free(teb);}
    }
};

Platform64::Platform64(Cpu& main,const std::filesystem::path& exports,const std::filesystem::path& game):main_(main),game_(std::filesystem::absolute(game)){
    auto* space=nfsu2::guest::current_address_space();
    if(!space)throw Fault("Platform64 needs the guest arena (nfsu2::guest::create_arena) before it is built");
    if(g_current)throw Fault("Platform64 supports one active game image per process");
    if(!std::filesystem::is_directory(game_))throw Fault("game asset directory does not exist");
    process_id_=GetCurrentProcessId();
    main_.map(image_base,image_size);
    for(const auto& block:image_blocks){
        std::ifstream f(exports/block.file,std::ios::binary);
        if(!f)throw Fault(std::string("cannot read guest image block ")+block.file);
        std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(f)),{});
        if(bytes.size()!=block.size || sha256(bytes)!=block.sha)throw Fault(std::string("guest image block identity mismatch: ")+block.file);
        std::memcpy(main_.pointer(block.base,block.size),bytes.data(),bytes.size());
    }
    peb_=space->alloc_aligned(0x1000,0x1000);if(!peb_)throw Fault("the guest arena has no room for the process block");
    wm<4>(main_,peb_+8,image_base);
    slots_.resize(std::size(imports));
    main_context_=std::make_unique<Context>();main_context_->cpu=&main_;
    main_context_->stack=space->alloc_aligned(stack_size,0x1000);main_context_->teb=space->alloc_aligned(0x1000,0x1000);
    if(!main_context_->stack || !main_context_->teb)throw Fault("the guest arena has no room for the main thread");
    initialize(main_,main_context_->stack,main_context_->teb);
    for(const auto& imp:imports)wm<4>(main_,imp.iat,imp.token);
    main_.pc=entry_point;
    g_current=this;
}
Platform64::~Platform64(){
    stopping_=true;
    g_current=nullptr;
    main_context_.reset();
    if(auto* space=nfsu2::guest::current_address_space())if(peb_)space->free(peb_);
}
Platform64* Platform64::current(){return g_current.load();}

void Platform64::initialize(Cpu& c,uint32_t stack,uint32_t teb){
    std::memset(c.regs.data(),0,guest_register_span);c.instructions=0;
    wr<4>(c,0x110,teb);wm<4>(c,teb,0xffffffff);wm<4>(c,teb+4,stack+stack_size);wm<4>(c,teb+8,stack);
    wm<4>(c,teb+0x18,teb);wm<4>(c,teb+0x20,process_id_);wm<4>(c,teb+0x24,thread_id());wm<4>(c,teb+0x30,peb_);wm<4>(c,teb+0x34,0);
    wr<4>(c,16,stack+stack_size-0x100);wm<4>(c,r<4>(c,16),return_sentinel);
    wr<2>(c,0x10a0,0x027f);wr<2>(c,0x10a4,0xffff);     // the Win32 default control word (the host process runs 0x027F too)
}
uint32_t Platform64::thread_id(){thread_local uint32_t id=0;if(!id)id=next_thread_id_.fetch_add(4);return id;}

std::unique_ptr<Platform64::Context> Platform64::make_context(){
    auto* space=nfsu2::guest::current_address_space();
    auto context=std::make_unique<Context>();
    context->owned=std::make_unique<Cpu>();context->cpu=context->owned.get();
    context->stack=space->alloc_aligned(stack_size,0x1000);context->teb=space->alloc_aligned(0x1000,0x1000);
    if(!context->stack || !context->teb)throw Fault("the guest arena has no room for another guest thread");
    return context;
}

bool Platform64::has_import(const char* name) const{return import_token(name)!=0;}
uint32_t Platform64::import_token(const char* name) const{
    for(const auto& imp:imports)if(std::strcmp(imp.name,name)==0)return imp.token;
    return 0;
}
void Platform64::override_import(const char* name,unsigned argument_count,NativeHook hook){
    std::lock_guard lock(mutex_);
    auto handler=std::make_unique<Handler>(Handler{argument_count,std::move(hook)});
    for(size_t i=0;i<std::size(imports);++i)if(std::strcmp(imports[i].name,name)==0){slots_[i]=std::make_unique<Handler>(*handler);}
    by_name_[name]=std::move(handler);
}
uint32_t Platform64::add_method_token(unsigned argument_count,NativeHook hook){
    std::lock_guard lock(mutex_);
    if(methods_.size()>=method_token_slots)throw Fault("out of method tokens");
    methods_.push_back(std::make_unique<Handler>(Handler{argument_count,std::move(hook)}));
    return method_token_base+uint32_t(methods_.size()-1)*16;
}
uint32_t Platform64::token_for(const char* name){
    if(uint32_t token=import_token(name))return token;
    std::lock_guard lock(mutex_);
    for(size_t i=0;i<dynamic_names_.size();++i)if(dynamic_names_[i]==name)return dynamic_token_base+uint32_t(i)*16;
    if(dynamic_token_base+uint32_t(dynamic_names_.size()+1)*16>=dynamic_token_end)throw Fault("out of dynamic import tokens");
    dynamic_names_.push_back(name);
    return dynamic_token_base+uint32_t(dynamic_names_.size()-1)*16;
}
void Platform64::throw_if_stopping(const char* what) const{if(stopping_)throw Fault(std::string("the platform is stopping (")+what+")");}

Platform64::Handler* Platform64::find_handler(uint32_t token,std::string& label){
    if(token>=import_token_base && token<import_token_end){
        if(token&15)return nullptr;
        const size_t index=(token-import_token_base)>>4;
        if(index>=std::size(imports))return nullptr;
        label=std::string(imports[index].dll)+"!"+imports[index].name;
        return slots_[index].get();
    }
    if(token>=dynamic_token_base && token<dynamic_token_end){
        if(token&15)return nullptr;
        std::lock_guard lock(mutex_);
        const size_t index=(token-dynamic_token_base)>>4;
        if(index>=dynamic_names_.size())return nullptr;
        label="dynamic!"+dynamic_names_[index];
        auto found=by_name_.find(dynamic_names_[index]);
        return found==by_name_.end()?nullptr:found->second.get();
    }
    if(token>=method_token_base && token<method_token_base+method_token_slots*16){
        if(token&15)return nullptr;
        const size_t index=(token-method_token_base)>>4;
        label="method#"+std::to_string(index);
        return index<methods_.size()?methods_[index].get():nullptr;
    }
    return nullptr;
}
void Platform64::note_import(const std::string& label,Cpu& c){
    std::lock_guard lock(mutex_);
    if(!trace_ || traced_.count(label))return;
    traced_[label]=true;
    trace_<<c.instructions<<" "<<label<<" return="<<hex(uint32_t(m<4>(c,r<4>(c,16))))<<'\n';trace_.flush();
}

bool Platform64::dispatch(Cpu& c){
    const uint32_t token=c.pc;
    if(token<import_token_base)return false;
    std::string label;
    Handler* handler=find_handler(token,label);
    if(label.empty())return false;                         // not a token of this platform (the range check above is only a fast reject)
    if(trace_.is_open())note_import(label,c);
    if(!handler){
        std::ostringstream message;message<<"unimplemented guest import "<<label<<" (token "<<hex(token)<<", return="<<hex(uint32_t(m<4>(c,r<4>(c,16))))<<")";
        throw Fault(message.str());
    }
    const uint32_t value=handler->fn(c);
    const uint32_t sp=uint32_t(r<4>(c,16)),back=uint32_t(m<4>(c,sp));
    wr<4>(c,0,value);wr<4>(c,16,sp+4+handler->argc*4);c.pc=back;wr<4>(c,644,back);
    return true;
}

uint32_t Platform64::execute(Cpu& c,uint32_t stop,uint64_t budget){
    for(uint64_t i=0;i<budget;++i){
        if(c.pc==stop)return uint32_t(r<4>(c,0));
        if(stopping_)throw Fault("the platform is stopping");
        if(dispatch(c))continue;
        step(c);
    }
    throw Fault("instruction budget exhausted");
}

uint32_t Platform64::callback(uint32_t address,std::initializer_list<uint32_t> arguments){
    // A processor per nesting level and thread that is inside a callback at the same time, kept for the next one (creating one maps a stack).
    std::unique_ptr<Context> context;
    {std::lock_guard lock(mutex_);if(!pool_.empty()){context=std::move(pool_.back());pool_.pop_back();}}
    if(!context)context=make_context();
    struct Giveback{Platform64& p;std::unique_ptr<Context>& c;~Giveback(){std::lock_guard lock(p.mutex_);p.pool_.push_back(std::move(c));}} giveback{*this,context};
    Cpu& c=*context->cpu;
    initialize(c,context->stack,context->teb);
    const uint32_t sp=uint32_t(r<4>(c,16));
    unsigned i=0;for(uint32_t a:arguments)wm<4>(c,sp+4+4*i++,a);
    c.pc=address;
    return execute(c,return_sentinel,std::numeric_limits<uint64_t>::max());
}

void Platform64::run(uint64_t budget,const std::filesystem::path& log){
    trace_.open(log);if(!trace_)throw Fault("cannot create the platform trace");
    trace_<<"entry="<<hex(main_.pc)<<'\n';
    try{
        execute(main_,return_sentinel,budget);
        throw Fault("guest entry point returned");
    }catch(const std::exception& e){
        trace_<<"STOP "<<e.what()<<" instructions="<<main_.instructions<<" PC="<<hex(main_.pc)<<" ESP="<<hex(uint32_t(r<4>(main_,16)))<<'\n';trace_.flush();
        throw;
    }
}

}  // namespace nfsu2raw
