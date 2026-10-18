#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
#include "platform.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>

namespace nfsu2raw {
namespace {
struct ImageBlock{uint32_t base,size;const char* file;const char* sha;};
struct Import{uint32_t iat,token;const char* dll;const char* name;};
#include "generated/platform_image.inc"
std::string sha256(const std::vector<uint8_t>& bytes){
    uint8_t digest[32];
    if(BCryptHash(BCRYPT_SHA256_ALG_HANDLE,nullptr,0,const_cast<uint8_t*>(bytes.data()),ULONG(bytes.size()),digest,32)<0)
        throw Fault("Windows SHA-256 failed");
    std::ostringstream s;for(auto b:digest)s<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(b);return s.str();
}
}
Platform::Platform(Cpu& cpu,const std::filesystem::path& export_dir,const std::filesystem::path& game_dir):c(cpu),assets(std::filesystem::absolute(game_dir)){
    if(!std::filesystem::is_directory(assets))throw Fault("game asset directory does not exist");
    c.map(image_base,image_size);
    for(const auto& block:image_blocks){
        std::ifstream f(export_dir/block.file,std::ios::binary);
        if(!f)throw Fault(std::string("cannot read guest image block ")+block.file);
        std::vector<uint8_t> bytes((std::istreambuf_iterator<char>(f)),{});
        if(bytes.size()!=block.size || sha256(bytes)!=block.sha)throw Fault(std::string("guest image block identity mismatch: ")+block.file);
        std::memcpy(c.pointer(block.base,block.size),bytes.data(),bytes.size());
    }
    c.map(0x01000000,stack_size);
    c.map(0x10000000,0x04000000);
    c.map(0x7ffde000,0x3000);
    wr<4>(c,0x110,0x7ffde000);
    wm<4>(c,0x7ffde000,0xffffffff); // end of guest exception chain
    wm<4>(c,0x7ffde004,0x01000000+stack_size);
    wm<4>(c,0x7ffde008,0x01000000);
    wm<4>(c,0x7ffde018,0x7ffde000);
    wm<4>(c,0x7ffde020,GetCurrentProcessId());
    wm<4>(c,0x7ffde024,GetCurrentThreadId());
    wm<4>(c,0x7ffde030,0x7ffdf000);
    wm<4>(c,0x7ffdf008,image_base);
    wr<4>(c,16,0x01000000+stack_size-0x100);
    wm<4>(c,r<4>(c,16),0xdead0000);
    wr<2>(c,0x10a0,0x037f);wr<2>(c,0x10a4,0xffff);
    for(const auto& imp:imports)wm<4>(c,imp.iat,imp.token);
    c.pc=entry_point;
}
Platform::~Platform(){
    for(auto [a,p]:critical_sections){auto cs=reinterpret_cast<CRITICAL_SECTION*>(p);DeleteCriticalSection(cs);delete cs;}
}
uint32_t Platform::handle(uintptr_t native){if(!native || native==uintptr_t(-1))return uint32_t(native);uint32_t token=handle_next++;handles[token]=native;return token;}
uintptr_t Platform::native_handle(uint32_t guest){
    if(guest>=0xfffffffe)return uintptr_t(intptr_t(int32_t(guest)));
    auto it=handles.find(guest);if(it==handles.end())throw Fault("unmapped native handle token");return it->second;
}
uint32_t Platform::arg(unsigned i){return uint32_t(m<4>(c,r<4>(c,16)+4+i*4));}
void Platform::result(uint32_t value,unsigned count){
    const uint32_t sp=uint32_t(r<4>(c,16));const uint32_t ret=uint32_t(m<4>(c,sp));
    wr<4>(c,0,value);wr<4>(c,16,sp+4+count*4);c.pc=ret;wr<4>(c,644,ret);
}
uint32_t Platform::allocate(uint32_t size,uint32_t heap,bool zero){
    if(!heap_limits.count(heap)){last_error=ERROR_INVALID_HANDLE;return 0;}
    uint64_t used=0;for(auto [a,allocation]:allocations)if(allocation.heap==heap)used+=allocation.capacity;
    const uint64_t capacity=(uint64_t(std::max(size,1u))+15)&~15ull;
    if(capacity>0x04000000 || (heap_limits[heap] && used+capacity>heap_limits[heap])){last_error=ERROR_NOT_ENOUGH_MEMORY;return 0;}
    uint32_t a=0,actual=uint32_t(capacity);auto free=free_blocks.lower_bound(actual);
    if(free!=free_blocks.end()){a=free->second;actual=free->first;free_blocks.erase(free);}
    else{
        if(uint64_t(heap_cursor)+capacity>0x14000000){last_error=ERROR_NOT_ENOUGH_MEMORY;return 0;}
        a=heap_cursor;heap_cursor+=actual;
    }
    allocations[a]={size,actual,heap};if(zero)std::memset(c.pointer(a,actual),0,actual);return a;
}
bool Platform::release(uint32_t a,uint32_t heap){
    auto i=allocations.find(a);if(i==allocations.end() || i->second.heap!=heap){last_error=ERROR_INVALID_PARAMETER;return false;}
    free_blocks.emplace(i->second.capacity,a);allocations.erase(i);return true;
}
std::string Platform::string(uint32_t a){
    std::string s;if(!a)return s;
    for(unsigned i=0;i<32768;++i){char b=char(m<1>(c,a+i));if(!b)return s;s+=b;}
    throw Fault("unterminated guest API string");
}
bool Platform::dispatch_import(){
    if(c.pc<0xf0000000 || c.pc>=0xf0100000)return false;
    const Import* found=nullptr;for(const auto& imp:imports)if(imp.token==c.pc){found=&imp;break;}
    Import dynamic{};
    if(!found && c.pc>=0xf0010000 && (c.pc-0xf0010000)%16==0){
        auto index=(c.pc-0xf0010000)/16;
        if(index<dynamic_imports.size()){dynamic={0,c.pc,dynamic_imports[index].first.c_str(),dynamic_imports[index].second.c_str()};found=&dynamic;}
    }
    if(!found)throw Fault("unknown guest import token");
    const auto& imp=*found;const std::string name=imp.name;
    if(trace){trace<<c.instructions<<" "<<imp.dll<<"!"<<name<<" return=0x"<<std::hex<<uint32_t(m<4>(c,r<4>(c,16)))<<std::dec<<'\n';trace.flush();}
    if(name=="GetModuleHandleA" || name=="GetModuleHandleW"){
        if(arg(0)==0){result(image_base,1);return true;}
        if(name=="GetModuleHandleW")throw Fault("wide module names require conversion");
        auto module=GetModuleHandleA(string(arg(0)).c_str());
        if(!module){last_error=GetLastError();result(0,1);return true;}
        uint32_t token=0;
        for(auto [g,n]:modules)if(n==reinterpret_cast<uintptr_t>(module)){token=g;break;}
        if(!token){token=handle(reinterpret_cast<uintptr_t>(module));modules[token]=reinterpret_cast<uintptr_t>(module);}
        result(token,1);
    }else if(name=="GetProcAddress"){
        auto module=modules.find(arg(0));if(module==modules.end())throw Fault("GetProcAddress requires a mapped system DLL");
        if(arg(1)<0x10000)throw Fault("dynamic ordinal import has no adapter contract");
        auto function=string(arg(1));
        if(!GetProcAddress(reinterpret_cast<HMODULE>(module->second),function.c_str())){last_error=GetLastError();result(0,2);return true;}
        dynamic_imports.emplace_back("dynamic-system-DLL",function);
        result(0xf0010000+uint32_t(dynamic_imports.size()-1)*16,2);
    }else if(name=="InitializeCriticalSection" || name=="InitializeCriticalSectionAndSpinCount"){
        const uint32_t a=arg(0);if(critical_sections.count(a))throw Fault("guest critical section initialized twice");
        auto cs=new CRITICAL_SECTION;
        if(!InitializeCriticalSectionAndSpinCount(cs,name=="InitializeCriticalSection"?0:arg(1))){delete cs;last_error=GetLastError();result(0,2);return true;}
        critical_sections[a]=reinterpret_cast<uintptr_t>(cs);
        std::memset(c.pointer(a,24),0,24);wm<4>(c,a+4,0xffffffff);
        result(1,name=="InitializeCriticalSection"?1:2);
    }else if(name=="EnterCriticalSection" || name=="LeaveCriticalSection" || name=="DeleteCriticalSection"){
        const uint32_t a=arg(0);auto it=critical_sections.find(a);
        if(it==critical_sections.end())throw Fault("uninitialized guest critical section");
        auto cs=reinterpret_cast<CRITICAL_SECTION*>(it->second);
        if(name=="EnterCriticalSection")EnterCriticalSection(cs);
        else if(name=="LeaveCriticalSection")LeaveCriticalSection(cs);
        else{DeleteCriticalSection(cs);delete cs;critical_sections.erase(it);result(0,1);return true;}
        wm<4>(c,a+4,uint32_t(cs->LockCount));wm<4>(c,a+8,uint32_t(cs->RecursionCount));wm<4>(c,a+12,uint32_t(reinterpret_cast<uintptr_t>(cs->OwningThread)));
        result(0,1);
    }else if(name=="InterlockedExchange" || name=="InterlockedCompareExchange"){
        const auto a=arg(0);const uint32_t old=uint32_t(m<4>(c,a));
        if(name=="InterlockedExchange" || old==arg(2))wm<4>(c,a,arg(1));
        result(old,name=="InterlockedExchange"?2:3);
    }else if(name=="GetVersionExA"){
        const uint32_t a=arg(0);const uint32_t size=uint32_t(m<4>(c,a));
        if(size!=148 && size!=156){last_error=ERROR_INSUFFICIENT_BUFFER;result(0,1);return true;}
        OSVERSIONINFOEXA v{};v.dwOSVersionInfoSize=sizeof(v);
        // RtlGetVersion returns the actual host version, without manifest-dependent guesses.
        using Version=LONG(WINAPI*)(OSVERSIONINFOW*);
        auto version=reinterpret_cast<Version>(GetProcAddress(GetModuleHandleW(L"ntdll.dll"),"RtlGetVersion"));
        OSVERSIONINFOEXW w{};w.dwOSVersionInfoSize=sizeof(w);
        if(!version || version(reinterpret_cast<OSVERSIONINFOW*>(&w))<0)throw Fault("cannot query Windows version");
        std::memset(c.pointer(a,size),0,size);wm<4>(c,a,size);wm<4>(c,a+4,w.dwMajorVersion);
        wm<4>(c,a+8,w.dwMinorVersion);wm<4>(c,a+12,w.dwBuildNumber);wm<4>(c,a+16,w.dwPlatformId);
        if(size==156){wm<2>(c,a+148,w.wServicePackMajor);wm<2>(c,a+150,w.wServicePackMinor);wm<2>(c,a+152,w.wSuiteMask);wm<1>(c,a+154,w.wProductType);}
        result(1,1);
    }else if(name=="GetProcessHeap"){result(0xe0000001,0);
    }else if(name=="HeapCreate"){
        if(arg(2) && arg(1)>arg(2)){last_error=ERROR_INVALID_PARAMETER;result(0,3);return true;}
        uint32_t h=heap_next++;heap_limits[h]=arg(2);result(h,3);
    }else if(name=="HeapDestroy"){
        uint32_t h=arg(0);if(h==0xe0000001 || !heap_limits.count(h)){last_error=ERROR_INVALID_HANDLE;result(0,1);return true;}
        std::vector<uint32_t> addresses;for(auto [a,v]:allocations)if(v.heap==h)addresses.push_back(a);
        for(auto a:addresses)release(a,h);heap_limits.erase(h);result(1,1);
    }else if(name=="HeapAlloc"){
        if(arg(1)&HEAP_GENERATE_EXCEPTIONS)throw Fault("HeapAlloc exception flag requires guest SEH delivery");
        result(allocate(arg(2),arg(0),(arg(1)&HEAP_ZERO_MEMORY)!=0),3);
    }else if(name=="HeapSize"){
        auto i=allocations.find(arg(2));result(i==allocations.end() || i->second.heap!=arg(0)?0xffffffff:i->second.size,3);
    }else if(name=="HeapFree"){
        result(release(arg(2),arg(0)),3);
    }else if(name=="HeapReAlloc"){
        const uint32_t old=arg(2),size=arg(3);auto it=allocations.find(old);
        if(it==allocations.end() || it->second.heap!=arg(0)){last_error=ERROR_INVALID_PARAMETER;result(0,4);return true;}
        const auto previous=it->second;
        if(size<=previous.capacity){if(size>previous.size && (arg(1)&HEAP_ZERO_MEMORY))std::memset(c.pointer(old+previous.size,size-previous.size),0,size-previous.size);it->second.size=size;result(old,4);return true;}
        if(arg(1)&HEAP_REALLOC_IN_PLACE_ONLY){last_error=ERROR_NOT_ENOUGH_MEMORY;result(0,4);return true;}
        uint32_t a=allocate(size,arg(0),(arg(1)&HEAP_ZERO_MEMORY)!=0);if(a){std::memcpy(c.pointer(a,size),c.pointer(old,previous.size),previous.size);release(old,arg(0));}
        result(a,4);
    }else if(name=="GetCommandLineA"){
        auto text='"'+(assets/"SPEED2.EXE").string()+'"';uint32_t a=allocate(uint32_t(text.size()+1));std::memcpy(c.pointer(a,text.size()+1),text.c_str(),text.size()+1);result(a,0);
    }else if(name=="GetEnvironmentStringsW" || name=="GetEnvironmentStrings"){
        if(name=="GetEnvironmentStringsW"){
            auto env=GetEnvironmentStringsW();if(!env){last_error=GetLastError();result(0,0);return true;}
            size_t n=0;while(env[n] || env[n+1])++n;n+=2;
            uint32_t a=allocate(uint32_t(n*2));std::memcpy(c.pointer(a,n*2),env,n*2);FreeEnvironmentStringsW(env);result(a,0);
        }else{
            auto env=GetEnvironmentStringsA();if(!env){last_error=GetLastError();result(0,0);return true;}
            size_t n=0;while(env[n] || env[n+1])++n;n+=2;
            uint32_t a=allocate(uint32_t(n));std::memcpy(c.pointer(a,n),env,n);FreeEnvironmentStringsA(env);result(a,0);
        }
    }else if(name=="FreeEnvironmentStringsW" || name=="FreeEnvironmentStringsA"){result(release(arg(0),0xe0000001),1);
    }else if(name=="GetACP"){result(GetACP(),0);
    }else if(name=="GetOEMCP"){result(GetOEMCP(),0);
    }else if(name=="GetCPInfo"){
        CPINFO info{};BOOL ok=GetCPInfo(arg(0),&info);last_error=GetLastError();if(ok)std::memcpy(c.pointer(arg(1),sizeof(info)),&info,sizeof(info));result(ok,2);
    }else if(name=="MultiByteToWideChar"){
        int n=int32_t(arg(3));size_t bytes=n<0?string(arg(2)).size()+1:size_t(n);
        int out=int32_t(arg(5));auto dst=out?reinterpret_cast<wchar_t*>(c.pointer(arg(4),size_t(out)*2)):nullptr;
        int r=MultiByteToWideChar(arg(0),arg(1),reinterpret_cast<const char*>(c.pointer(arg(2),bytes)),n,dst,out);last_error=GetLastError();result(r,6);
    }else if(name=="WideCharToMultiByte"){
        int n=int32_t(arg(3));size_t chars=n<0?0:size_t(n);if(n<0){while(m<2>(c,arg(2)+chars*2))++chars;++chars;}
        int out=int32_t(arg(5));auto dst=out?reinterpret_cast<char*>(c.pointer(arg(4),size_t(out))):nullptr;
        BOOL used=FALSE;const char* def=arg(6)?reinterpret_cast<char*>(c.pointer(arg(6),1)):nullptr;
        int r=WideCharToMultiByte(arg(0),arg(1),reinterpret_cast<const wchar_t*>(c.pointer(arg(2),chars*2)),n,dst,out,def,arg(7)?&used:nullptr);
        last_error=GetLastError();if(arg(7))wm<4>(c,arg(7),used);result(r,8);
    }else if(name=="GetStartupInfoA"){
        STARTUPINFOA info{};info.cb=sizeof(info);GetStartupInfoA(&info);const uint32_t a=arg(0);std::memset(c.pointer(a,68),0,68);
        wm<4>(c,a,68);wm<4>(c,a+16,info.dwX);wm<4>(c,a+20,info.dwY);wm<4>(c,a+24,info.dwXSize);wm<4>(c,a+28,info.dwYSize);
        wm<4>(c,a+32,info.dwXCountChars);wm<4>(c,a+36,info.dwYCountChars);wm<4>(c,a+40,info.dwFillAttribute);wm<4>(c,a+44,info.dwFlags);wm<2>(c,a+48,info.wShowWindow);
        if(info.cbReserved2)throw Fault("inherited CRT descriptor table needs pointer translation");
        wm<4>(c,a+56,handle(reinterpret_cast<uintptr_t>(info.hStdInput)));wm<4>(c,a+60,handle(reinterpret_cast<uintptr_t>(info.hStdOutput)));wm<4>(c,a+64,handle(reinterpret_cast<uintptr_t>(info.hStdError)));result(0,1);
    }else if(name=="GetStdHandle"){result(handle(reinterpret_cast<uintptr_t>(GetStdHandle(arg(0)))),1);
    }else if(name=="GetFileType"){result(GetFileType(reinterpret_cast<HANDLE>(native_handle(arg(0)))),1);
    }else if(name=="SetHandleCount"){result(SetHandleCount(arg(0)),1);
    }else if(name=="GetModuleFileNameA"){
        if(arg(0)!=0 && arg(0)!=image_base)throw Fault("module filename for system module not implemented");
        const auto text=(assets/"SPEED2.EXE").string();const uint32_t capacity=arg(2);const size_t n=std::min(size_t(capacity),text.size()+1);
        if(n)std::memcpy(c.pointer(arg(1),n),text.c_str(),n);if(capacity<=text.size())last_error=ERROR_INSUFFICIENT_BUFFER;
        result(std::min(capacity,uint32_t(text.size())),3);
    }else if(name=="GetStringTypeW"){
        int n=int32_t(arg(2));size_t count=n<0?0:size_t(n);if(n<0){while(m<2>(c,arg(1)+count*2))++count;++count;}
        BOOL ok=GetStringTypeW(arg(0),reinterpret_cast<wchar_t*>(c.pointer(arg(1),count*2)),n,reinterpret_cast<WORD*>(c.pointer(arg(3),count*2)));last_error=GetLastError();result(ok,4);
    }else if(name=="GetLocaleInfoA"){
        const int count=int32_t(arg(3));int n=GetLocaleInfoA(arg(0),arg(1),count?reinterpret_cast<char*>(c.pointer(arg(2),count)):nullptr,count);last_error=GetLastError();result(n,4);
    }else if(name=="GetLocaleInfoW"){
        const int count=int32_t(arg(3));int n=GetLocaleInfoW(arg(0),arg(1),count?reinterpret_cast<wchar_t*>(c.pointer(arg(2),size_t(count)*2)):nullptr,count);last_error=GetLastError();result(n,4);
    }else if(name=="LCMapStringW"){
        const int count=int32_t(arg(3)),out=int32_t(arg(5));size_t n=count<0?0:size_t(count);
        if(count<0){while(m<2>(c,arg(2)+n*2))++n;++n;}
        // LCMAP_SORTKEY uses an output count in bytes instead of UTF-16 units.
        const size_t bytes=(arg(1)&LCMAP_SORTKEY)?size_t(out):size_t(out)*2;
        int rc=LCMapStringW(arg(0),arg(1),reinterpret_cast<wchar_t*>(c.pointer(arg(2),n*2)),count,out?reinterpret_cast<wchar_t*>(c.pointer(arg(4),bytes)):nullptr,out);
        last_error=GetLastError();result(rc,6);
    }else if(name=="LCMapStringA"){
        const int count=int32_t(arg(3)),out=int32_t(arg(5));const size_t n=count<0?string(arg(2)).size()+1:size_t(count);
        int rc=LCMapStringA(arg(0),arg(1),reinterpret_cast<char*>(c.pointer(arg(2),n)),count,out?reinterpret_cast<char*>(c.pointer(arg(4),out)):nullptr,out);
        last_error=GetLastError();result(rc,6);
    }else if(name=="IsValidCodePage"){result(IsValidCodePage(arg(0)),1);
    }else if(name=="IsValidLocale"){result(IsValidLocale(arg(0),arg(1)),2);
    }else if(name=="GetUserDefaultLCID"){result(GetUserDefaultLCID(),0);
    }else if(name=="IsDebuggerPresent"){result(IsDebuggerPresent(),0);
    }else if(name=="IsProcessorFeaturePresent"){result(IsProcessorFeaturePresent(arg(0)),1);
    }else if(name=="SetUnhandledExceptionFilter"){
        const uint32_t previous=exception_filter;exception_filter=arg(0);result(previous,1);
    }else if(name=="SetErrorMode"){result(SetErrorMode(arg(0)),1);
    }else if(name=="GetCurrentProcessId"){result(GetCurrentProcessId(),0);
    }else if(name=="GetCurrentThreadId"){result(GetCurrentThreadId(),0);
    }else if(name=="GetCurrentProcess"){result(0xffffffff,0);
    }else if(name=="GetCurrentThread"){result(0xfffffffe,0);
    }else if(name=="GetLastError"){result(last_error,0);
    }else if(name=="SetLastError"){last_error=arg(0);result(0,1);
    }else if(name=="TlsAlloc"){result(tls_next++,0);
    }else if(name=="TlsSetValue"){tls[arg(0)]=arg(1);result(1,2);
    }else if(name=="TlsGetValue"){last_error=0;result(tls[arg(0)],1);
    }else if(name=="TlsFree"){tls.erase(arg(0));result(1,1);
    }else if(name=="QueryPerformanceCounter"){LARGE_INTEGER x;BOOL ok=QueryPerformanceCounter(&x);wm<8>(c,arg(0),uint64_t(x.QuadPart));result(ok,1);
    }else if(name=="QueryPerformanceFrequency"){LARGE_INTEGER x;BOOL ok=QueryPerformanceFrequency(&x);wm<8>(c,arg(0),uint64_t(x.QuadPart));result(ok,1);
    }else if(name=="GetTickCount"){result(GetTickCount(),0);
    }else if(name=="GetSystemTimeAsFileTime"){FILETIME t;GetSystemTimeAsFileTime(&t);std::memcpy(c.pointer(arg(0),8),&t,8);result(0,1);
    }else if(name=="OutputDebugStringA"){OutputDebugStringA(string(arg(0)).c_str());result(0,1);
    }else if(name=="ExitProcess"){throw Fault("translated process requested ExitProcess("+std::to_string(arg(0))+")");
    }else{
        std::ostringstream message;message<<"unimplemented guest import "<<imp.dll<<"!"<<name<<" (IAT=0x"<<std::hex<<imp.iat<<", return=0x"<<uint32_t(m<4>(c,r<4>(c,16)))<<")";
        throw Fault(message.str());
    }
    return true;
}
void Platform::run(uint64_t budget,const std::filesystem::path& log){
    trace.open(log);if(!trace)throw Fault("cannot create bootstrap trace");
    trace<<"input_sha256="<<input_sha256<<" entry=0x"<<std::hex<<c.pc<<std::dec<<"\n";
    uint32_t recent[32]{};unsigned cursor=0;
    try{
        for(uint64_t i=0;i<budget;++i){
            if(c.pc==0xdead0000)throw Fault("guest entry point returned");
            recent[cursor++%32]=c.pc;
            if(dispatch_import())continue;
            step(c);
        }
        throw Fault("bootstrap instruction budget exhausted");
    }catch(const std::exception& e){
        trace<<"STOP "<<e.what()<<" instructions="<<c.instructions<<" PC=0x"<<std::hex<<c.pc<<" ESP=0x"<<uint32_t(r<4>(c,16))<<"\nlast PCs:";
        for(unsigned i=0;i<32;++i)trace<<" "<<std::hex<<recent[(cursor+i)%32];trace<<'\n';trace.flush();throw;
    }
}
}
