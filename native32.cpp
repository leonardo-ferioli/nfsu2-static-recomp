#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define CINTERFACE
#define DIRECTINPUT_VERSION 0x0800
#include <windows.h>
#include <bcrypt.h>
#include <intrin.h>
#include <mmsystem.h>
#include <dinput.h>
#include <cstddef>
#include "native32.hpp"
#include "d3d_shadow.hpp"
#include "platform/services.hpp"
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <iostream>
#include <memory>
#include <limits>
#include <array>
#include <chrono>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <string_view>
#include <utility>

namespace nfsu2raw {
void invalidate_native_memory();
extern "C" uint8_t raw_guest_reservation[];
namespace {
struct ImageBlock{uint32_t base,size;const char* file;const char* sha;};
struct Import{uint32_t iat,token;const char* dll;const char* name;};
#include "generated/platform_image.inc"
NativePlatform* current_platform=nullptr;
thread_local Cpu* active_guest_cpu=nullptr;
thread_local uint32_t last_page_entry=0;     // guest PC at the start of the most recent translated page
thread_local const char* last_native_name="";   // most recent native import or COM call made by this thread (static or never-freed string)
std::atomic<uint32_t> resolve_generation{1};
std::atomic<uint32_t> dynamic_generation{1};   // bumped when a name is learned for a dynamically obtained function address   // bumped when a library may have been unloaded: cached native targets are dropped
struct ThreadExit:std::exception{uint32_t value;explicit ThreadExit(uint32_t v):value(v){}const char* what()const noexcept override{return "guest requested ExitThread";}};
struct ThreadStart{NativePlatform* platform;uint32_t address,argument;};
DWORD WINAPI translated_thread_start(void* input){std::unique_ptr<ThreadStart> start(static_cast<ThreadStart*>(input));return start->platform->thread_entry(start->address,start->argument);}
struct TimerCpu{Cpu cpu;std::mutex mutex;};
struct TimerState{NativePlatform* platform;std::shared_ptr<TimerCpu> execution;uint32_t address,user,flags;std::atomic<bool> completed=false;};
thread_local TimerState* active_timer=nullptr;
struct EnumContext{NativePlatform* platform;uint32_t address,reference;};
BOOL CALLBACK translated_input_enum(const void* item,void* context){
    auto state=static_cast<EnumContext*>(context);
    return BOOL(state->platform->callback(state->address,{uint32_t(uintptr_t(item)),state->reference}));
}
BOOL CALLBACK translated_input_semantic_enum(LPCDIDEVICEINSTANCEA item,LPDIRECTINPUTDEVICE8A device,DWORD flags,DWORD remaining,void* context){
    auto state=static_cast<EnumContext*>(context);
    return BOOL(state->platform->input_semantic_callback(state->address,state->reference,uint32_t(uintptr_t(item)),uint32_t(uintptr_t(device)),flags,remaining));
}
void CALLBACK translated_timer_start(UINT id,UINT message,DWORD_PTR user,DWORD_PTR one,DWORD_PTR two){
    auto state=reinterpret_cast<TimerState*>(user);state->platform->timer_entry(uintptr_t(state),id,message,uint32_t(one),uint32_t(two));
}
// Where the crash report goes besides standard error (set when the game starts running), and the mod-originated call the thread is in.
std::string crash_report_path;
thread_local const char* mod_call_name=nullptr;
LONG CALLBACK native_fault_guard(EXCEPTION_POINTERS* e){
    DWORD code=e->ExceptionRecord->ExceptionCode;
    if(code!=EXCEPTION_ACCESS_VIOLATION && code!=EXCEPTION_ILLEGAL_INSTRUCTION && code!=EXCEPTION_STACK_OVERFLOW)return EXCEPTION_CONTINUE_SEARCH;
    static char text[4096];
    const Cpu* guest=active_guest_cpu;
    int n=std::snprintf(text,sizeof(text),"native32 CPU fault code=0x%08lx native-PC=0x%08lx guest-PC=0x%08x address=0x%08lx\r\n",code,e->ContextRecord->Eip,guest?guest->pc:0,code==EXCEPTION_ACCESS_VIOLATION?DWORD(e->ExceptionRecord->ExceptionInformation[1]):0);
    n+=std::snprintf(text+n,sizeof(text)-n,"  thread=%lu inside-mod-call=%s\r\n",GetCurrentThreadId(),mod_call_name?mod_call_name:"no");
    if(guest){
        // The guest registers as last stored in the register file (the compiler may hold a few newer values in host registers).
        auto reg=[&](unsigned o){uint32_t v;std::memcpy(&v,guest->regs.data()+o,4);return v;};
        n+=std::snprintf(text+n,sizeof(text)-n,"  guest eax=%08x ecx=%08x edx=%08x ebx=%08x esp=%08x ebp=%08x esi=%08x edi=%08x\r\n",reg(0),reg(4),reg(8),reg(12),reg(16),reg(20),reg(24),reg(28));
        // Return addresses on the guest stack: words that point just after a CALL instruction of the translated program.
        uint32_t words[256];SIZE_T got=0;
        if(ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(uintptr_t(reg(16))),words,sizeof(words),&got) && got>=4){
            n+=std::snprintf(text+n,sizeof(text)-n,"  guest stack return addresses:");
            int shown=0;
            for(SIZE_T i=0;i<got/4 && shown<24 && n<int(sizeof(text))-24;++i){
                const uint32_t a=words[i];
                if(a<image_base+5 || a>=image_base+image_size)continue;
                uint8_t before[5];SIZE_T read=0;
                if(ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(uintptr_t(a-5)),before,5,&read) && read==5 && before[0]==0xE8){n+=std::snprintf(text+n,sizeof(text)-n," %x",a);++shown;}
            }
            n+=std::snprintf(text+n,sizeof(text)-n,"\r\n");
        }
    }
    DWORD written;WriteFile(GetStdHandle(STD_ERROR_HANDLE),text,DWORD(std::max(n,0)),&written,nullptr);
    if(!crash_report_path.empty()){
        HANDLE file=CreateFileA(crash_report_path.c_str(),FILE_APPEND_DATA,FILE_SHARE_READ,nullptr,OPEN_ALWAYS,FILE_ATTRIBUTE_NORMAL,nullptr);
        if(file!=INVALID_HANDLE_VALUE){WriteFile(file,text,DWORD(std::max(n,0)),&written,nullptr);CloseHandle(file);}
    }
    if(current_platform)current_platform->finish_d3d9_recorder();   // best effort: a crash still leaves a closed trace
    ClipCursor(nullptr);
    ExitProcess(1);
}
struct NativeFrame{uint32_t target,sp,eax,edx,ecx,after,stack_base,stack_limit;};
static_assert(sizeof(void*)==4 && sizeof(NativeFrame)==32);
// Native stdcall/cdecl functions consume their actual stack arguments. The
// original guest return VA is saved in C++ before CALL overwrites that slot.
extern "C" __attribute__((naked)) void invoke_native32(NativeFrame*){
    asm volatile(
        "pushl %ebp; pushl %ebx; pushl %esi; pushl %edi;"
        "movl 20(%esp),%ebx;"
        "pushl %fs:0; pushl %fs:4; pushl %fs:8; pushl %fs:0xe0c; movl %esp,%esi;"
        "movl 24(%ebx),%eax; movl %eax,%fs:4;"
        "movl 28(%ebx),%eax; movl %eax,%fs:8; movl %eax,%fs:0xe0c; movl $-1,%fs:0;"
        "movl 4(%ebx),%esp;"
        "calll *0(%ebx);"
        "movl %eax,8(%ebx); movl %edx,12(%ebx); movl %ecx,16(%ebx); movl %esp,20(%ebx);"
        "movl %esi,%esp; popl %fs:0xe0c; popl %fs:8; popl %fs:4; popl %fs:0;"
        "popl %edi; popl %esi; popl %ebx; popl %ebp; retl;");
}
std::string digest(const std::vector<uint8_t>& b){
    uint8_t sha[32];if(BCryptHash(BCRYPT_SHA256_ALG_HANDLE,nullptr,0,const_cast<uint8_t*>(b.data()),ULONG(b.size()),sha,32)<0)throw Fault("cannot hash guest image");
    std::ostringstream s;for(auto n:sha)s<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(n);return s.str();
}
// ---- optional d3d9.dll next to the launcher (nue_d3d9: Direct3D 9 on bgfx, nue_d3d9/dll) ---------------------------------------
// Like DXVK: a d3d9.dll in the launcher's folder replaces the system's for the guest's Direct3D 9 imports (the guest then talks to its COM objects through the
// same native bridge). It is trusted like a system library for the "is this a native target" check below. NFSU2_SYSTEM_D3D9=1 ignores it.
HMODULE d3d9_override_module(){
    static const HMODULE module=[]()->HMODULE{
        if(GetEnvironmentVariableA("NFSU2_SYSTEM_D3D9",nullptr,0))return nullptr;
        wchar_t exe[32768];const DWORD n=GetModuleFileNameW(nullptr,exe,32768);if(!n||n>=32768)return nullptr;
        std::wstring path(exe,n);const size_t slash=path.find_last_of(L"\\/");if(slash==std::wstring::npos)return nullptr;
        path.resize(slash+1);path+=L"d3d9.dll";
        if(GetFileAttributesW(path.c_str())==INVALID_FILE_ATTRIBUTES)return nullptr;
        return LoadLibraryExW(path.c_str(),nullptr,LOAD_LIBRARY_SEARCH_DLL_LOAD_DIR|LOAD_LIBRARY_SEARCH_SYSTEM32);
    }();
    return module;
}
HMODULE load_import_library(const char* dll){
    if(!_stricmp(dll,"d3d9.dll"))if(HMODULE override=d3d9_override_module())return override;
    return LoadLibraryExA(dll,nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
}
bool system_code(uint32_t a){
    MEMORY_BASIC_INFORMATION m{};if(!VirtualQuery(reinterpret_cast<void*>(uintptr_t(a)),&m,sizeof(m)) || m.Type!=MEM_IMAGE)return false;
    if(m.AllocationBase && m.AllocationBase==static_cast<void*>(d3d9_override_module()) && (m.Protect&(PAGE_EXECUTE|PAGE_EXECUTE_READ|PAGE_EXECUTE_READWRITE|PAGE_EXECUTE_WRITECOPY)))return true;
    if(!(m.Protect&(PAGE_EXECUTE|PAGE_EXECUTE_READ|PAGE_EXECUTE_READWRITE|PAGE_EXECUTE_WRITECOPY)))return false;
    wchar_t file[32768],root[MAX_PATH];
    DWORD n=GetModuleFileNameW(static_cast<HMODULE>(m.AllocationBase),file,32768),r=GetWindowsDirectoryW(root,MAX_PATH);
    return n && r && n>r && file[r]==L'\\' && _wcsnicmp(file,root,r)==0;
}
// ---- optional profile of guest -> Windows calls (NFSU2_PROFILE=1) ---------------------------------------------------
// Every native call is timed; every 5 s a summary goes to the trace log: wall time, instructions per second of the main
// thread, how much of the time the main thread spent inside Windows, and the targets that cost the most. Off by default.
bool profile_enabled(){static const bool on=GetEnvironmentVariableA("NFSU2_PROFILE",nullptr,0)!=0;return on;}
// NFSU2_PROFILE=1 is the light profile: native calls are only counted (one relaxed atomic add each), the main thread is
// sampled, and the sampler thread writes the report; NFSU2_PROFILE=full also times every call (about 0.3 us each).
bool profile_full(){static const bool on=[]{char v[16];return GetEnvironmentVariableA("NFSU2_PROFILE",v,sizeof(v))&&!std::strcmp(v,"full");}();return on;}
constexpr unsigned light_slots=8192;
std::atomic<uint64_t> light_counts[light_slots];
std::atomic<uint64_t> light_ticks[light_slots];      // time spent inside each native target (light profile; QueryPerformanceCounter ticks)
std::string light_labels[light_slots];      // written under profile_mutex when a route is created
uint32_t light_targets[light_slots];       // native address behind each slot
std::atomic<uint32_t> light_next{1},light_present{0};
std::atomic<uint64_t> light_present_calls{0};
uint32_t light_d3d9=0,light_device=0;
// Shadow of the game's device state (see NativePlatform::set_state_cache). An entry is 0x100000000|value once known.
constexpr unsigned render_states=256,sampler_stages=16,sampler_types=14,stage_count=8,stage_types=33;
uint64_t cached_render_state[render_states],cached_sampler_state[sampler_stages*sampler_types],cached_stage_state[stage_count*stage_types];
// Device methods by slot: 57 SetRenderState, 67 SetTextureStageState, 69 SetSamplerState; 2 Release, 16 Reset, 59-61 state blocks.
std::atomic<uint32_t> state_target[3]={},state_reset_target[5]={};   // call targets (0 until the device is known)
std::atomic<bool> state_cache_disabled{false},state_recording{false};
std::atomic<uint32_t> state_block_vtable{0},state_apply_target{0},light_create_device_target{0};
std::atomic<uint64_t> state_cache_hits{0},state_cache_misses{0};
uint32_t light_vertex_buffer_vtable=0,light_index_buffer_vtable=0,light_texture_vtable=0;
// Per-thread view for the profile: every thread that runs translated code is sampled (where it is, or which Windows call it
// is inside) and its CPU time measured, to see what a loading pause is waiting for.
std::mutex profile_mutex;
struct ThreadProfile{
    DWORD id=0;uint32_t entry=0;HANDLE handle=nullptr;Cpu* cpu=nullptr;const char* volatile native=nullptr;bool alive=true;
    std::unordered_map<uint32_t,uint64_t> blocks;std::map<std::string,uint64_t> waits;uint64_t samples=0,outside=0,last_cpu=0;
};
std::vector<std::unique_ptr<ThreadProfile>> profile_threads;
thread_local ThreadProfile* my_thread_profile=nullptr;
ThreadProfile* profile_register_thread(Cpu* cpu,uint32_t entry){
    auto info=std::make_unique<ThreadProfile>();
    info->id=GetCurrentThreadId();info->entry=entry;info->cpu=cpu;
    info->handle=OpenThread(THREAD_QUERY_LIMITED_INFORMATION,FALSE,info->id);
    std::lock_guard lock(profile_mutex);
    my_thread_profile=info.get();profile_threads.push_back(std::move(info));
    return my_thread_profile;
}
struct ProfileThreadScope{
    ThreadProfile* info=nullptr;
    ProfileThreadScope(Cpu* cpu,uint32_t entry){if(profile_enabled())info=profile_register_thread(cpu,entry);}
    ~ProfileThreadScope(){if(!info)return;std::lock_guard lock(profile_mutex);info->alive=false;info->cpu=nullptr;my_thread_profile=nullptr;}
};
// Bindings and constants of the device (d3d_shadow.hpp); the call targets that matter are found by hashing, filled in when the device is known.
DeviceShadow device_shadow;
uint32_t bind_hash_target[64];uint8_t bind_hash_kind[64];
void clear_state_cache(){
    std::memset(cached_render_state,0,sizeof(cached_render_state));std::memset(cached_sampler_state,0,sizeof(cached_sampler_state));std::memset(cached_stage_state,0,sizeof(cached_stage_state));
    device_shadow.clear();
}
inline uint32_t guest_u32(uint32_t address){uint32_t v;std::memcpy(&v,reinterpret_cast<const void*>(uintptr_t(address)),4);return v;}
void register_bind_targets(uint32_t vtable){
    std::memset(bind_hash_target,0,sizeof(bind_hash_target));
    for(unsigned i=0;i<bind_slot_count;++i){
        const uint32_t target=guest_u32(vtable+bind_slot_numbers[i]*4);
        if(!target)continue;
        unsigned at=(target*2654435761u)>>26;
        while(bind_hash_target[at] && bind_hash_target[at]!=target)at=(at+1)&63;
        bind_hash_target[at]=target;bind_hash_kind[at]=bind_slot_kinds[i];
    }
}
inline uint8_t bind_kind_of(uint32_t target){
    unsigned at=(target*2654435761u)>>26;
    for(unsigned n=0;n<64;++n,at=(at+1)&63){if(bind_hash_target[at]==target)return bind_hash_kind[at];if(!bind_hash_target[at])return BindNone;}
    return BindNone;
}
// Cached slot and argument count of a device state method: 1 render state, 2 texture stage state, 3 sampler state.
uint64_t* state_slot(unsigned kind,uint32_t first,uint32_t second){
    switch(kind){
    case 1:return first<render_states?&cached_render_state[first]:nullptr;
    case 2:return first<stage_count && second<stage_types?&cached_stage_state[first*stage_types+second]:nullptr;
    case 3:return first<sampler_stages && second<sampler_types?&cached_sampler_state[first*sampler_types+second]:nullptr;
    }
    return nullptr;
}
uint64_t profile_clock(){LARGE_INTEGER v;QueryPerformanceCounter(&v);return uint64_t(v.QuadPart);}
struct ProfileStat{uint64_t calls=0,ticks=0,main_ticks=0;std::string label;};
std::unordered_map<uint32_t,ProfileStat> profile_stats;
uint64_t profile_window_start=0,profile_window_instructions=0,profile_main_ticks=0,profile_all_ticks=0,profile_calls=0;
std::unordered_map<uint32_t,uint64_t> profile_samples;   // guest 256-byte block at the last page exit of the main thread -> samples
uint64_t profile_sample_total=0,profile_native_samples=0;
// Frame rate: IDirect3D9::CreateDevice (vtable slot 16) yields the device whose vtable slot 17 is Present; calls to that
// address are counted. Process and main-thread CPU come from GetProcessTimes/GetThreadTimes.
uint32_t profile_d3d9=0,profile_device=0,profile_present=0;uint64_t profile_present_calls=0;
HANDLE profile_main_thread=nullptr;uint64_t profile_last_process_cpu=0,profile_last_thread_cpu=0;
uint64_t file_time_value(const FILETIME& f){return (uint64_t(f.dwHighDateTime)<<32)|f.dwLowDateTime;}
// Memory in use by this process, for the profile report: working set and private commit from the system, and what the address space
// is made of (private memory, mapped files, the program image) with the largest private regions, which is where a game's pools show up.
std::string memory_report(){
    struct Counters{DWORD cb;DWORD PageFaultCount;SIZE_T PeakWorkingSetSize,WorkingSetSize,QuotaPeakPagedPoolUsage,QuotaPagedPoolUsage,QuotaPeakNonPagedPoolUsage,QuotaNonPagedPoolUsage,PagefileUsage,PeakPagefileUsage,PrivateUsage;};
    using Fn=BOOL(WINAPI*)(HANDLE,Counters*,DWORD);
    static const Fn query=reinterpret_cast<Fn>(GetProcAddress(GetModuleHandleA("kernel32.dll"),"K32GetProcessMemoryInfo"));
    std::ostringstream text;
    text<<std::fixed<<std::setprecision(0);
    Counters counters{};counters.cb=sizeof(counters);
    if(query && query(GetCurrentProcess(),&counters,sizeof(counters)))
        text<<"PROFILE MEMORY private="<<double(counters.PrivateUsage)/1048576.0<<"MB working-set="<<double(counters.WorkingSetSize)/1048576.0<<"MB peak-working-set="<<double(counters.PeakWorkingSetSize)/1048576.0<<"MB";
    uint64_t committed_private=0,committed_mapped=0,committed_image=0;
    std::vector<std::pair<uint64_t,uintptr_t>> largest;
    MEMORY_BASIC_INFORMATION info;
    for(uintptr_t at=0;VirtualQuery(reinterpret_cast<void*>(at),&info,sizeof(info))==sizeof(info);){
        if(info.State==MEM_COMMIT){
            if(info.Type==MEM_PRIVATE){committed_private+=info.RegionSize;largest.push_back({info.RegionSize,uintptr_t(info.BaseAddress)});}
            else if(info.Type==MEM_MAPPED)committed_mapped+=info.RegionSize;
            else committed_image+=info.RegionSize;
        }
        const uintptr_t next=uintptr_t(info.BaseAddress)+info.RegionSize;
        if(next<=at)break;
        at=next;
    }
    std::sort(largest.rbegin(),largest.rend());
    text<<"\nPROFILE   committed address space: private="<<double(committed_private)/1048576.0<<"MB mapped-files="<<double(committed_mapped)/1048576.0<<"MB images="<<double(committed_image)/1048576.0<<"MB; largest private regions:";
    for(size_t i=0;i<largest.size()&&i<6;++i)text<<" 0x"<<std::hex<<largest[i].second<<std::dec<<"="<<double(largest[i].first)/1048576.0<<"MB";
    return text.str();
}
uint64_t process_cpu_100ns(){FILETIME create,exit_time,kernel,user;GetProcessTimes(GetCurrentProcess(),&create,&exit_time,&kernel,&user);return file_time_value(kernel)+file_time_value(user);}
uint64_t thread_cpu_100ns(HANDLE thread){FILETIME create,exit_time,kernel,user;if(!thread||!GetThreadTimes(thread,&create,&exit_time,&kernel,&user))return 0;return file_time_value(kernel)+file_time_value(user);}
const char* const d3d9_device_methods[]={"QueryInterface","AddRef","Release","TestCooperativeLevel","GetAvailableTextureMem","EvictManagedResources","GetDirect3D","GetDeviceCaps","GetDisplayMode",
    "GetCreationParameters","SetCursorProperties","SetCursorPosition","ShowCursor","CreateAdditionalSwapChain","GetSwapChain","GetNumberOfSwapChains","Reset","Present","GetBackBuffer",
    "GetRasterStatus","SetDialogBoxMode","SetGammaRamp","GetGammaRamp","CreateTexture","CreateVolumeTexture","CreateCubeTexture","CreateVertexBuffer","CreateIndexBuffer","CreateRenderTarget",
    "CreateDepthStencilSurface","UpdateSurface","UpdateTexture","GetRenderTargetData","GetFrontBufferData","StretchRect","ColorFill","CreateOffscreenPlainSurface","SetRenderTarget",
    "GetRenderTarget","SetDepthStencilSurface","GetDepthStencilSurface","BeginScene","EndScene","Clear","SetTransform","GetTransform","MultiplyTransform","SetViewport","GetViewport",
    "SetMaterial","GetMaterial","SetLight","GetLight","LightEnable","GetLightEnable","SetClipPlane","GetClipPlane","SetRenderState","GetRenderState","CreateStateBlock","BeginStateBlock",
    "EndStateBlock","SetClipStatus","GetClipStatus","GetTexture","SetTexture","GetTextureStageState","SetTextureStageState","GetSamplerState","SetSamplerState","ValidateDevice",
    "SetPaletteEntries","GetPaletteEntries","SetCurrentTexturePalette","GetCurrentTexturePalette","SetScissorRect","GetScissorRect","SetSoftwareVertexProcessing","GetSoftwareVertexProcessing",
    "SetNPatchMode","GetNPatchMode","DrawPrimitive","DrawIndexedPrimitive","DrawPrimitiveUP","DrawIndexedPrimitiveUP","ProcessVertices","CreateVertexDeclaration","SetVertexDeclaration",
    "GetVertexDeclaration","SetFVF","GetFVF","CreateVertexShader","SetVertexShader","GetVertexShader","SetVertexShaderConstantF","GetVertexShaderConstantF","SetVertexShaderConstantI",
    "GetVertexShaderConstantI","SetVertexShaderConstantB","GetVertexShaderConstantB","SetStreamSource","GetStreamSource","SetStreamSourceFreq","GetStreamSourceFreq","SetIndices","GetIndices",
    "CreatePixelShader","SetPixelShader","GetPixelShader","SetPixelShaderConstantF","GetPixelShaderConstantF","SetPixelShaderConstantI","GetPixelShaderConstantI","SetPixelShaderConstantB",
    "GetPixelShaderConstantB","DrawRectPatch","DrawTriPatch","DeletePatch","CreateQuery"};
// "IDirect3DDevice9::SetRenderState" for a call target equal to a slot of the game's device, else nullptr.
const char* d3d9_method_name(uint32_t device,uint32_t target){
    if(!device)return nullptr;
    const uint32_t vtable=*reinterpret_cast<const uint32_t*>(uintptr_t(device));
    for(unsigned i=0;i<std::size(d3d9_device_methods);++i)if(*reinterpret_cast<const uint32_t*>(uintptr_t(vtable)+i*4)==target)return d3d9_device_methods[i];
    return nullptr;
}
// Methods of buffers and textures created by the game's device, recognised by the vtable of the first object of each kind.
std::string d3d9_object_method_name(uint32_t target){
    static const char* const buffer[]={"QueryInterface","AddRef","Release","GetDevice","SetPrivateData","GetPrivateData","FreePrivateData","SetPriority","GetPriority","PreLoad","GetType","Lock","Unlock","GetDesc"};
    static const char* const texture[]={"QueryInterface","AddRef","Release","GetDevice","SetPrivateData","GetPrivateData","FreePrivateData","SetPriority","GetPriority","PreLoad","GetType","SetLOD","GetLOD","GetLevelCount",
        "SetAutoGenFilterType","GetAutoGenFilterType","GenerateMipSubLevels","GetLevelDesc","GetSurfaceLevel","LockRect","UnlockRect","AddDirtyRect"};
    auto find=[&](uint32_t vtable,const char* const* names,unsigned count,const char* klass)->std::string{
        if(!vtable)return "";
        for(unsigned i=0;i<count;++i)if(*reinterpret_cast<const uint32_t*>(uintptr_t(vtable)+i*4)==target)return std::string(klass)+"::"+names[i];
        return "";
    };
    std::string name=find(light_vertex_buffer_vtable,buffer,std::size(buffer),"IDirect3DVertexBuffer9");
    if(name.empty())name=find(light_index_buffer_vtable,buffer,std::size(buffer),"IDirect3DIndexBuffer9");
    if(name.empty())name=find(light_texture_vtable,texture,std::size(texture),"IDirect3DTexture9");
    return name;
}
std::string profile_label(uint32_t target,const char* import_name){
    if(import_name)return import_name;
    HMODULE module=nullptr;char file[MAX_PATH]="?";
    if(GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,reinterpret_cast<LPCSTR>(uintptr_t(target)),&module))GetModuleFileNameA(module,file,MAX_PATH);
    const char* slash=std::strrchr(file,'\\');
    char text[128];std::snprintf(text,sizeof(text),"%s+0x%x",slash?slash+1:file,unsigned(target-uint32_t(uintptr_t(module))));
    return text;
}
bool trace_input(){static const bool on=GetEnvironmentVariableA("NFSU2_TRACE_INPUT",nullptr,0)!=0;return on;}
uint32_t argument(Cpu& c,unsigned i){return uint32_t(m<4>(c,r<4>(c,16)+4+i*4));}
void returned(Cpu& c,uint32_t value,unsigned argc){
    uint32_t sp=uint32_t(r<4>(c,16));c.pc=uint32_t(m<4>(c,sp));wr<4>(c,0,value);wr<4>(c,16,sp+4+argc*4);wr<4>(c,644,c.pc);
}
template<size_t I> LRESULT CALLBACK translated_window_proc_slot(HWND w,UINT msg,WPARAM wp,LPARAM lp){
    if(!current_platform)return DefWindowProcA(w,msg,wp,lp);
    return LRESULT(current_platform->window_callback(unsigned(I),{uint32_t(uintptr_t(w)),msg,uint32_t(wp),uint32_t(lp)}));
}
template<size_t... I> constexpr std::array<WNDPROC,sizeof...(I)> window_proc_table(std::index_sequence<I...>){return {translated_window_proc_slot<I>...};}
const auto native_window_procs=window_proc_table(std::make_index_sequence<NativePlatform::window_proc_slots>{});
// Callback processors are reused per thread: a window message must not map a fresh 1 MiB stack each time.
thread_local std::vector<std::unique_ptr<Cpu>> callback_pool;
constexpr uint32_t exception_handler_token=0xf0ffff00,exception_unwind_token=0xf0ffff10,exception_filter_token=0xf0ffff20;
constexpr uint32_t context_size=0x2cc,exception_record_size=0x50;
}
namespace {
// The supported SPEED2.EXE, read as a file: only its section contents are used, as data.
struct PeImage{
    struct Section{uint32_t rva,virtual_size,raw_pointer,raw_size;};
    std::vector<uint8_t> file;std::vector<Section> sections;uint32_t size_of_headers=0;
    uint16_t u16(size_t o)const{if(o+2>file.size())throw Fault("truncated PE header");uint16_t v;std::memcpy(&v,file.data()+o,2);return v;}
    uint32_t u32(size_t o)const{if(o+4>file.size())throw Fault("truncated PE header");uint32_t v;std::memcpy(&v,file.data()+o,4);return v;}
    explicit PeImage(const std::filesystem::path& exe){
        std::ifstream f(exe,std::ios::binary);if(!f)throw Fault("cannot open game executable "+exe.string());
        file.assign(std::istreambuf_iterator<char>(f),{});
        if(digest(file)!=input_sha256)throw Fault("SPEED2.EXE is not the supported build (SHA-256 mismatch)");
        if(u16(0)!=0x5a4d)throw Fault("SPEED2.EXE has no DOS header");
        const size_t pe=u32(0x3c);
        if(u32(pe)!=0x4550 || u16(pe+4)!=0x14c)throw Fault("SPEED2.EXE is not a 32-bit x86 PE image");
        const unsigned count=u16(pe+6);const size_t optional=pe+24,table=optional+u16(pe+20);
        if(u16(optional)!=0x10b || u32(optional+28)!=image_base || u32(optional+56)!=image_size || image_base+u32(optional+16)!=entry_point)
            throw Fault("SPEED2.EXE image layout differs from the translated program");
        size_of_headers=u32(optional+60);
        for(unsigned i=0;i<count;++i){const size_t at=table+40u*i;sections.push_back({u32(at+12),u32(at+8),u32(at+20),u32(at+16)});}
    }
    std::vector<uint8_t> block(uint32_t base,uint32_t size)const{
        std::vector<uint8_t> out(size,0);
        size_t from=0,length=0;
        if(base==image_base){from=0;length=std::min<size_t>(size_of_headers,size);}
        else{
            bool found=false;
            for(const auto& s:sections)if(image_base+s.rva==base){from=s.raw_pointer;length=std::min<size_t>(s.raw_size,size);found=true;break;}
            if(!found)throw Fault("the executable has no section at a mapped guest block");
        }
        if(from+length>file.size())throw Fault("section data lies outside SPEED2.EXE");
        std::memcpy(out.data(),file.data()+from,length);return out;
    }
};
}
NativePlatform::NativePlatform(Cpu& c,const std::filesystem::path& exports,const std::filesystem::path& game)
  :NativePlatform(c,game,BlockSource([exports](uint32_t,uint32_t,const char* file){
      std::ifstream f(exports/file,std::ios::binary);if(!f)throw Fault(std::string("cannot load guest data ")+file);
      return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)),{});})){}
NativePlatform::NativePlatform(Cpu& c,const std::filesystem::path& game,FromExecutable)
  :NativePlatform(c,game,BlockSource([image=std::make_shared<PeImage>(std::filesystem::absolute(game)/"SPEED2.EXE")](uint32_t base,uint32_t size,const char*){
      return image->block(base,size);})){}
NativePlatform::NativePlatform(Cpu& c,const std::filesystem::path& game,FromEmbedded embedded)
  :NativePlatform(c,game,BlockSource([embedded](uint32_t base,uint32_t size,const char* file){
      for(unsigned i=0;i<embedded.count;++i)if(embedded.blocks[i].base==base && embedded.blocks[i].size==size)return std::vector<uint8_t>(embedded.blocks[i].data,embedded.blocks[i].data+size);
      throw Fault(std::string("the program holds no data for guest block ")+file);})){}
NativePlatform::NativePlatform(Cpu& c,const std::filesystem::path& game,const BlockSource& source):main_cpu(c),assets(std::filesystem::absolute(game)){
    if(uintptr_t(raw_guest_reservation)!=0x00401000)throw Fault("native32 guest reservation is not at the required VA");
    if(current_platform)throw Fault("native32 supports one active game image per process");
    if(!std::filesystem::is_directory(assets))throw Fault("asset directory does not exist");
    c.map(image_base,image_size);
    for(const auto& block:image_blocks){
        std::vector<uint8_t> bytes=source(block.base,block.size,block.file);
        if(bytes.size()!=block.size || digest(bytes)!=block.sha)throw Fault(std::string("guest image identity mismatch: ")+block.file);
        std::memcpy(c.pointer(block.base,block.size),bytes.data(),bytes.size());
    }
    prepare(c);for(const auto& i:imports)wm<4>(c,i.iat,i.token);c.pc=entry_point;
    command_line='"'+(assets/"SPEED2.EXE").string()+'"';current_platform=this;
    exception_guard=AddVectoredExceptionHandler(1,native_fault_guard);
}
NativePlatform::~NativePlatform(){
    stopping=true;
    d3d9_recorder_ptr.store(nullptr);if(d3d9_recorder)d3d9_recorder->finish();
    if(profile_sampler.joinable())profile_sampler.join();
    for(;;){
        std::map<uint32_t,uintptr_t> pending;{std::lock_guard lock(state_mutex);pending.swap(timers);}
        for(auto [id,state]:pending){timeKillEvent(id);delete reinterpret_cast<TimerState*>(state);}
        std::vector<uintptr_t> workers;{std::lock_guard lock(state_mutex);workers.swap(threads);}
        for(auto t:workers){auto h=reinterpret_cast<HANDLE>(t);if(WaitForSingleObject(h,3000)!=WAIT_OBJECT_0){record("STOP guest worker failed to stop; terminating this process");ExitProcess(1);}CloseHandle(h);}
        std::lock_guard lock(state_mutex);if(timers.empty() && threads.empty())break;
    }
    if(auto* window=nfsu2::platform::services().window)window->release_cursor_clip();
    for(auto& method:method_tokens)delete method.exchange(nullptr);
    if(exception_guard)RemoveVectoredExceptionHandler(exception_guard);current_platform=nullptr;
}
void NativePlatform::prepare(Cpu& c){
    c.map(0,stack_size);uint32_t stack=c.memory.back().base;
    c.map(0,0x1000);uint32_t teb=c.memory.back().base;
    initialize_cpu(c,stack,teb);
}
void NativePlatform::initialize_cpu(Cpu& c,uint32_t stack,uint32_t teb){
    std::memset(c.regs.data(),0,c.regs.size());c.instructions=0;
    wr<4>(c,0x110,teb);wm<4>(c,teb,0xffffffff);wm<4>(c,teb+4,stack+stack_size);wm<4>(c,teb+8,stack);
    wm<4>(c,teb+0x18,teb);wm<4>(c,teb+0x20,GetCurrentProcessId());wm<4>(c,teb+0x24,GetCurrentThreadId());wm<4>(c,teb+0x34,0);
    wr<4>(c,16,stack+stack_size-0x100);wm<4>(c,r<4>(c,16),0xdead0000);
    wr<2>(c,0x10a0,0x037f);wr<2>(c,0x10a4,0xffff);
}
void NativePlatform::record(const std::string& text){
    std::lock_guard guard(log_mutex);if(!trace)return;
    const bool critical=text.starts_with("STOP ") || text.starts_with("PROFILE") || text.find("FAULT ")!=std::string::npos;
    if(!critical && (trace_limited || trace_bytes+text.size()+1>4*1024*1024)){
        if(!trace_limited){trace<<"TRACE LIMIT: ordinary records omitted after 4 MiB; STOP/FAULT records remain enabled\n";trace.flush();trace_limited=true;}
        return;
    }
    trace<<text<<'\n';trace.flush();trace_bytes+=text.size()+1;
}
bool NativePlatform::first_native_call(uint32_t target,uint32_t guest_return,bool result){
    // One bit per (call site, direction) hashed into a shared bitmap: a site seen before costs one relaxed load, no lock and no
    // thread-local access. A collision can hide a first-use record of the diagnostic trace; it never changes behaviour.
    static std::atomic<uint8_t> seen_bits[1u<<20];
    const unsigned bit=result?2:1;
    std::atomic<uint8_t>& cell=seen_bits[(((target*2654435761u)^(guest_return*40503u))>>12)&((1u<<20)-1)];
    if(cell.load(std::memory_order_relaxed)&bit)return false;
    cell.fetch_or(uint8_t(bit),std::memory_order_relaxed);
    bool first=false;
    {
        std::lock_guard guard(log_mutex);
        if(trace && !trace_limited){auto& seen=traced_calls[{target,guest_return}];if(!(seen&bit)){seen|=bit;first=true;}}
    }
    return first;
}
uintptr_t NativePlatform::resolve(uint32_t token){
    // Targets are only ever added, so each thread keeps its own lock-free copy (checking that an address belongs to a
    // Windows system module costs several microseconds and D3D9/DirectSound calls arrive here once per method call).
    thread_local struct{uint32_t generation=0;std::unordered_map<uint32_t,uintptr_t> map;} cache;
    const uint32_t generation=resolve_generation.load(std::memory_order_relaxed);
    if(cache.generation!=generation){cache.map.clear();cache.generation=generation;}
    if(auto hit=cache.map.find(token);hit!=cache.map.end())return hit->second;
    const uintptr_t result=resolve_uncached(token);
    if(result)cache.map[token]=result;
    return result;
}
uintptr_t NativePlatform::resolve_uncached(uint32_t token){
    {std::lock_guard lock(state_mutex);if(auto found=targets.find(token);found!=targets.end())return found->second;}
    for(const auto& i:imports)if(i.token==token){
        auto module=load_import_library(i.dll);
        if(!module)throw Fault(std::string("missing system import library ")+i.dll);
        auto fn=GetProcAddress(module,i.name[0]=='#'?MAKEINTRESOURCEA(std::stoi(i.name+1)):i.name);
        if(!fn)throw Fault(std::string("missing system import ")+i.dll+"!"+i.name);
        auto address=reinterpret_cast<uintptr_t>(fn);
        if(!system_code(uint32_t(address)))throw Fault("import target is outside the Windows system libraries");
        {std::lock_guard lock(state_mutex);targets[token]=address;}return address;
    }
    return system_code(token)?token:0;
}
void NativePlatform::limit_frame_rate(unsigned frames_per_second){
    // Waits so that frames are at least 1/fps apart: a sleep for the bulk, a short spin for the last millisecond. A frame
    // that is already late is never delayed, and a long stall (loading, the window being dragged) restarts the schedule.
    static const uint64_t frequency=[]{LARGE_INTEGER f;QueryPerformanceFrequency(&f);timeBeginPeriod(1);return uint64_t(f.QuadPart);}();
    thread_local uint64_t next=0;
    const uint64_t interval=frequency/frames_per_second;
    uint64_t now=profile_clock();
    // A frame that is a whole interval late (or the first one) is shown at once and the schedule restarts from here; waiting after it
    // would only make a slow game slower.
    if(!next || now>next+interval){next=now;return;}
    next+=interval;
    while(now<next){
        const uint64_t remaining=next-now;
        if(remaining>frequency/500)Sleep(DWORD((remaining-frequency/1000)*1000/frequency));   // keep ~1 ms for the spin
        else YieldProcessor();
        now=profile_clock();
    }
}
void NativePlatform::profile_native_call(Cpu& c,uint32_t target,const char* import_name,uint64_t ticks){
    static const uint64_t frequency=[]{LARGE_INTEGER f;QueryPerformanceFrequency(&f);return uint64_t(f.QuadPart);}();
    std::lock_guard lock(profile_mutex);
    const bool main_thread=&c==&main_cpu;
    auto& stat=profile_stats[target];
    if(stat.label.empty())stat.label=profile_label(target,import_name);
    ++stat.calls;stat.ticks+=ticks;profile_all_ticks+=ticks;++profile_calls;
    if(target==profile_present && profile_present)++profile_present_calls;
    if(main_thread){
        stat.main_ticks+=ticks;profile_main_ticks+=ticks;
        if(!profile_main_thread)DuplicateHandle(GetCurrentProcess(),GetCurrentThread(),GetCurrentProcess(),&profile_main_thread,0,FALSE,DUPLICATE_SAME_ACCESS);
    }
    const uint64_t now=profile_clock();
    if(!profile_window_start){profile_window_start=now;profile_window_instructions=main_cpu.instructions;profile_last_process_cpu=process_cpu_100ns();profile_last_thread_cpu=thread_cpu_100ns(profile_main_thread);return;}
    if(now-profile_window_start<5*frequency)return;
    const double seconds=double(now-profile_window_start)/double(frequency);
    std::vector<std::pair<uint64_t,const ProfileStat*>> ordered;
    for(const auto& entry:profile_stats)ordered.push_back({entry.second.ticks,&entry.second});
    std::sort(ordered.rbegin(),ordered.rend());
    std::ostringstream text;
    {
        SYSTEM_INFO info;GetSystemInfo(&info);
        const uint64_t process_cpu=process_cpu_100ns(),thread_cpu=thread_cpu_100ns(profile_main_thread);
        const double process_percent=100.0*double(process_cpu-profile_last_process_cpu)/1e7/seconds,thread_percent=100.0*double(thread_cpu-profile_last_thread_cpu)/1e7/seconds;
        profile_last_process_cpu=process_cpu;profile_last_thread_cpu=thread_cpu;
        text<<"PROFILE FPS=";
        if(profile_present)text<<std::fixed<<std::setprecision(1)<<double(profile_present_calls)/seconds;else text<<"unknown(Present not identified)";
        text<<" process-CPU="<<std::fixed<<std::setprecision(0)<<process_percent<<"%-of-one-core ("<<std::setprecision(1)<<process_percent/double(info.dwNumberOfProcessors)<<"% of "<<info.dwNumberOfProcessors<<" logical processors)"
            <<" main-thread-CPU="<<std::setprecision(0)<<thread_percent<<"%\n";
        profile_present_calls=0;
    }
    text<<"PROFILE window="<<std::fixed<<std::setprecision(1)<<seconds<<"s main-thread-instructions/s="<<double(main_cpu.instructions-profile_window_instructions)/seconds/1e6<<"M"
        <<" native-calls/s="<<double(profile_calls)/seconds<<" main-thread-time-in-Windows="<<100.0*double(profile_main_ticks)/double(frequency)/seconds<<"% all-threads-time-in-Windows="<<100.0*double(profile_all_ticks)/double(frequency)/seconds<<"%";
    for(size_t i=0;i<ordered.size()&&i<12;++i){
        const ProfileStat& e=*ordered[i].second;
        text<<"\nPROFILE   "<<e.label<<" calls="<<e.calls<<" total="<<1000.0*double(e.ticks)/double(frequency)<<"ms avg="<<1e6*double(e.ticks)/double(frequency)/double(e.calls)<<"us main="<<1000.0*double(e.main_ticks)/double(frequency)<<"ms";
    }
    {
        std::vector<std::pair<uint64_t,uint32_t>> hot;
        for(const auto& entry:profile_samples)hot.push_back({entry.second,entry.first});
        std::sort(hot.rbegin(),hot.rend());
        text<<"\nPROFILE   main-thread samples="<<profile_sample_total<<" (outside translated code/in Windows: "<<100.0*double(profile_native_samples)/double(std::max<uint64_t>(profile_sample_total,1))<<"%) hottest 256-byte blocks at page exits:";
        for(size_t i=0;i<hot.size()&&i<12;++i)text<<"\nPROFILE     0x"<<std::hex<<hot[i].second<<std::dec<<" "<<100.0*double(hot[i].first)/double(std::max<uint64_t>(profile_sample_total,1))<<"%";
        profile_samples.clear();profile_sample_total=profile_native_samples=0;
    }
    record(text.str());
    { char mode[16]; if(GetEnvironmentVariableA("NFSU2_PROFILE",mode,sizeof(mode)) && !std::strcmp(mode,"stderr")){const std::string line=text.str()+"\n";std::fputs(line.c_str(),stderr);} }
    for(auto& entry:profile_stats){entry.second.calls=0;entry.second.ticks=0;entry.second.main_ticks=0;}
    profile_window_start=now;profile_window_instructions=main_cpu.instructions;profile_main_ticks=profile_all_ticks=profile_calls=0;
}
bool NativePlatform::dispatch(Cpu& c){
    if(c.pc>=image_base && c.pc<image_base+image_size)return false;
    if(auto* code=dynamic.load();code && code->contains(c.pc)){
        const uint64_t before=c.instructions;code->run(c,1u<<18);
        const uint64_t total=dynamic_executed.fetch_add(c.instructions-before)+(c.instructions-before);
        if(total>=dynamic_report_at.load()){
            dynamic_report_at=total*4;
            std::ostringstream message;message<<"DYNAMIC CODE executed "<<total<<" instructions so far ("<<code->decoded_count()<<" decoded) last pc=0x"<<std::hex<<c.pc;record(message.str());
        }
        return true;
    }
    if(c.pc>=0xf0ffff00 && c.pc<0xf0ffff30)return exception_return(c);
    if(const uint32_t slot=(c.pc-method_token_base)>>4;c.pc>=method_token_base && slot<method_token_slots && (c.pc&15)==0){
        if(const ImportOverride* method=method_tokens[slot].load(std::memory_order_acquire)){
            const uint32_t value=method->handler(c);
            returned(c,value,method->argument_count);return true;
        }
    }
    if(const uint32_t slot=(c.pc-0xf0000000u)>>4;slot<import_override_slots && import_overrides[slot] && (c.pc&15)==0){
        const ImportOverride& override_=*import_overrides[slot];
        const uint32_t value=override_.handler(c);
        returned(c,value,override_.argument_count);return true;
    }
    if(!native_hooks.empty()){
        auto hook=native_hooks.find(c.pc);
        if(hook!=native_hooks.end()){const unsigned argc=hook->second.first;const uint32_t value=hook->second.second(c);returned(c,value,argc);return true;}
    }
    static const std::unordered_map<uint32_t,const Import*> import_table=[]{std::unordered_map<uint32_t,const Import*> t;for(const auto& i:imports)t[i.token]=&i;return t;}();
    // Differential-test controls (environment only; never active in normal runs).
    static const std::string stop_import=[]{char b[64];return std::string(b,GetEnvironmentVariableA("NFSU2_STOP_AT_IMPORT",b,sizeof(b))%sizeof(b));}();
    static const bool deterministic_time=GetEnvironmentVariableA("NFSU2_DETERMINISTIC_TIME",nullptr,0)!=0;
    // Only these names get special treatment below; every other native call takes the common path without string work.
    static const std::unordered_set<std::string_view> special_names=[]{
        std::unordered_set<std::string_view> t={"GetModuleHandleA","GetCommandLineA","GetLastError","SetLastError","GetModuleFileNameA","SetUnhandledExceptionFilter",
            "LoadLibraryA","RtlUnwind","RaiseException","UnhandledExceptionFilter","VirtualProtect","VirtualAlloc","ExitThread","SetThreadPriority","CreateThread",
            "timeSetEvent","timeKillEvent","WaitForSingleObject","WaitForMultipleObjects","Sleep","SleepEx","RegisterClassExA","GetProcAddress","DirectInput8Create",
            "FreeLibrary","FreeLibraryAndExitThread"};
        if(GetEnvironmentVariableA("NFSU2_DETERMINISTIC_TIME",nullptr,0))for(auto n:{"QueryPerformanceCounter","GetEnvironmentStringsW","GetEnvironmentStringsA","GetEnvironmentStrings",
            "FreeEnvironmentStringsW","FreeEnvironmentStringsA","Process32First","Process32Next","GetTickCount","timeGetTime","GetSystemTimeAsFileTime"})t.insert(n);
        return t;}();
    // Everything that depends only on the call target is decided once and remembered per thread (a frame makes ~17,000 of these calls).
    struct Route{uint32_t token=0,resolve_generation=0,dynamic_generation=0;uintptr_t target=0;const Import* imported=nullptr;const char* label=nullptr;const char* resolved_name=nullptr;bool special=false;uint32_t id=0;bool d3d_create=false;};
    thread_local Route routes[2048];
    Route& route=routes[(c.pc*2654435761u)>>21];
    {
        const uint32_t resolve_now=resolve_generation.load(std::memory_order_relaxed),dynamic_now=dynamic_generation.load(std::memory_order_relaxed);
        if(route.token!=c.pc || route.resolve_generation!=resolve_now || route.dynamic_generation!=dynamic_now){
            const Import* imported=nullptr;if(auto found=import_table.find(c.pc);found!=import_table.end())imported=found->second;
            const uintptr_t resolved=resolve(c.pc);if(!resolved)return false;
            const char* label=imported?imported->name:"system-COM-or-dynamic-call";
            const char* resolved_name=label;
            if(!imported && dynamic_name_count.load(std::memory_order_relaxed)){std::lock_guard lock(state_mutex);auto known=dynamic_names.find(uint32_t(resolved));if(known!=dynamic_names.end())resolved_name=known->second.c_str();}
            const bool special=special_names.count(std::string_view(resolved_name))!=0 || (!stop_import.empty() && stop_import==resolved_name);
            route=Route{c.pc,resolve_now,dynamic_now,resolved,imported,label,resolved_name,special};
            route.d3d_create=!std::strcmp(resolved_name,"Direct3DCreate9");
            if(profile_enabled() && !profile_full()){
                const uint32_t id=light_next.fetch_add(1);
                if(id<light_slots){route.id=id;std::lock_guard lock(profile_mutex);light_labels[id]=profile_label(uint32_t(resolved),imported?imported->name:nullptr);light_targets[id]=uint32_t(resolved);}
            }
        }
    }
    const Import* imported=route.imported;const uintptr_t target=route.target;const char* resolved_name=route.resolved_name;const bool special=route.special;
    last_native_name=route.label;
    if(my_thread_profile)my_thread_profile->native=route.label;
    std::string name;if(special)name=resolved_name;
    const uint32_t original_sp=uint32_t(r<4>(c,16));
    const uint32_t teb=uint32_t(r<4>(c,0x110));
    auto g4=[](uint32_t address){uint32_t v;std::memcpy(&v,reinterpret_cast<const void*>(uintptr_t(address)),4);return v;};
    auto s4=[](uint32_t address,uint32_t v){std::memcpy(reinterpret_cast<void*>(uintptr_t(address)),&v,4);};
    const uint32_t guest_stack_base=g4(teb+4),guest_stack_limit=g4(teb+8);
    if(original_sp<guest_stack_limit || original_sp>guest_stack_base-8)throw Fault("guest stack pointer is outside its stack during a native call");
    const uint32_t guest_return=g4(original_sp);
    if(vsync_on.load(std::memory_order_relaxed)){
        // Presentation parameters (D3DPRESENT_PARAMETERS, PresentationInterval at +52) of CreateDevice (argument 5) and Reset (argument 1).
        const uint32_t t=uint32_t(target);uint32_t parameters=0;
        if(light_create_device_target.load(std::memory_order_relaxed)==t)parameters=g4(original_sp+4+5*4);
        else if(state_reset_target[1].load(std::memory_order_relaxed)==t)parameters=g4(original_sp+8);
        if(parameters && g4(parameters+52)==0x80000000u){s4(parameters+52,1);record("VSYNC presentation interval IMMEDIATE changed to ONE");}
    }
    // Device state cache: a state call that would set what the device already holds returns S_OK without calling Windows.
    // State blocks keep it honest: while one is being recorded the calls are not applied (neither skipped nor remembered), and
    // applying one changes the device's state out of sight (the cache is emptied).
    unsigned state_kind=0;uint8_t bind_kind=BindNone;uint32_t bind_args[4]={};
    if(state_cache_on.load(std::memory_order_relaxed) && state_target[0].load(std::memory_order_relaxed) && &c==&main_cpu && !state_cache_disabled.load(std::memory_order_relaxed)){
        const uint32_t t=uint32_t(target);
        const bool recording=state_recording.load(std::memory_order_relaxed);
        if(t==state_target[0].load(std::memory_order_relaxed)){if(!recording)state_kind=1;}
        else if(t==state_target[1].load(std::memory_order_relaxed)){if(!recording)state_kind=2;}
        else if(t==state_target[2].load(std::memory_order_relaxed)){if(!recording)state_kind=3;}
        else if(t==state_reset_target[0].load(std::memory_order_relaxed) || t==state_reset_target[1].load(std::memory_order_relaxed))clear_state_cache();   // Release, Reset
        else if(t==state_reset_target[3].load(std::memory_order_relaxed))state_recording=true;                                                              // BeginStateBlock
        else if(state_apply_target.load(std::memory_order_relaxed)==t)clear_state_cache();                                                                   // IDirect3DStateBlock9::Apply
        else if(!recording)bind_kind=bind_kind_of(t);
        if(bind_kind){
            for(unsigned i=0;i<bind_argument_count(bind_kind);++i)bind_args[i]=g4(original_sp+8+4*i);
            if(const unsigned pop=device_shadow.redundant(bind_kind,bind_args)){state_cache_hits.fetch_add(1,std::memory_order_relaxed);returned(c,0,pop);return true;}
        }
        if(state_kind){
            const uint32_t first=g4(original_sp+8),second=g4(original_sp+12);
            const uint32_t value=state_kind==1?second:g4(original_sp+16);
            uint64_t* slot=state_kind==1?state_slot(1,first,0):state_slot(state_kind,first,second);
            if(!slot)state_kind=0;
            else if(*slot==(0x100000000ull|value)){state_cache_hits.fetch_add(1,std::memory_order_relaxed);returned(c,0,state_kind==1?3:4);return true;}
            else state_cache_misses.fetch_add(1,std::memory_order_relaxed);
        }
    }
    if(first_native_call(uint32_t(target),guest_return,false)){
        std::ostringstream msg;msg<<c.instructions<<" "<<(imported?imported->dll:"Windows")<<"!"<<resolved_name<<" return=0x"<<std::hex<<guest_return;record(msg.str());
    }
    if(special){
    if(name=="FreeLibrary" || name=="FreeLibraryAndExitThread")++resolve_generation;
    if(!stop_import.empty() && name==stop_import)throw Fault("diagnostic stop before "+name);
    if(deterministic_time){
        static std::atomic<uint64_t> ticks{1000000000ull};
        if(name=="QueryPerformanceCounter"){uint64_t v=ticks.fetch_add(1000);wm<4>(c,argument(c,0),uint32_t(v));wm<4>(c,argument(c,0)+4,uint32_t(v>>32));returned(c,1,1);return true;}
        // The process list and environment block vary between runs and the CRT walks them; use fixed ones.
        static const wchar_t fixed_environment_w[]=L"NFSU2_DETERMINISTIC=1\0";
        static const char fixed_environment_a[]="NFSU2_DETERMINISTIC=1\0";
        if(name=="GetEnvironmentStringsW"){returned(c,uint32_t(uintptr_t(fixed_environment_w)),0);return true;}
        if(name=="GetEnvironmentStringsA" || name=="GetEnvironmentStrings"){returned(c,uint32_t(uintptr_t(fixed_environment_a)),0);return true;}
        if(name=="FreeEnvironmentStringsW" || name=="FreeEnvironmentStringsA"){returned(c,1,1);return true;}
        if(name=="Process32First" || name=="Process32Next"){wm<4>(c,teb+0x34,ERROR_NO_MORE_FILES);returned(c,0,2);return true;}
        if(name=="GetTickCount" || name=="timeGetTime"){returned(c,uint32_t(ticks.fetch_add(100)/1000),0);return true;}
        if(name=="GetSystemTimeAsFileTime"){uint64_t v=132000000000000000ull+ticks.fetch_add(1000)*10;wm<4>(c,argument(c,0),uint32_t(v));wm<4>(c,argument(c,0)+4,uint32_t(v>>32));returned(c,0,1);return true;}
    }
    if(name=="GetModuleHandleA" && (!argument(c,0) || _stricmp(reinterpret_cast<char*>(uintptr_t(argument(c,0))),"SPEED2.EXE")==0)){
        returned(c,image_base,1);return true;
    }
    if(name=="GetCommandLineA"){returned(c,uint32_t(uintptr_t(command_line.c_str())),0);return true;}
    if(name=="GetLastError"){returned(c,uint32_t(m<4>(c,teb+0x34)),0);return true;}
    if(name=="SetLastError"){wm<4>(c,teb+0x34,argument(c,0));returned(c,0,1);return true;}
    if(name=="GetModuleFileNameA" && (!argument(c,0) || argument(c,0)==image_base)){
        auto file=(assets/"SPEED2.EXE").string();uint32_t n=argument(c,2),used=std::min(n,uint32_t(file.size()));
        if(n){std::memcpy(c.pointer(argument(c,1),used),file.data(),used);if(n>used)wm<1>(c,argument(c,1)+used,0);else SetLastError(ERROR_INSUFFICIENT_BUFFER);}
        returned(c,used,3);return true;
    }
    if(name=="SetUnhandledExceptionFilter"){auto old=exception_filter;exception_filter=argument(c,0);returned(c,old,1);return true;}
    if(name=="LoadLibraryA"){
        const char* file=reinterpret_cast<const char*>(uintptr_t(argument(c,0)));
        const auto local=std::filesystem::absolute(file);
        if(std::filesystem::is_regular_file(local))throw Fault("game-local x86 module requires separate analysis before native loading: "+local.string());
        SetLastError(uint32_t(m<4>(c,teb+0x34)));auto module=load_import_library(file);DWORD error=GetLastError();wm<4>(c,teb+0x34,error);returned(c,uint32_t(uintptr_t(module)),1);return true;
    }
    if(name=="RtlUnwind" || name=="RaiseException" || name=="UnhandledExceptionFilter")return exception_import(c,name,guest_return);
    if(name=="VirtualProtect" || name=="VirtualAlloc"){
        // Memory made executable outside the translated image holds generated code: remember it so control that
        // reaches it is interpreted (dynamic_code.hpp). The call itself is the ordinary native call.
        const bool protect=name=="VirtualProtect";
        const uint32_t address=argument(c,0),size=argument(c,1),flags=argument(c,protect?2:3);
        SetLastError(uint32_t(m<4>(c,teb+0x34)));
        uint32_t result;
        if(protect)result=VirtualProtect(reinterpret_cast<void*>(uintptr_t(address)),size,flags,reinterpret_cast<DWORD*>(uintptr_t(argument(c,3))))?1:0;
        else result=uint32_t(uintptr_t(VirtualAlloc(reinterpret_cast<void*>(uintptr_t(address)),size,argument(c,2),flags)));
        wm<4>(c,teb+0x34,GetLastError());
        const uint32_t region=protect?address:result;
        if(result && (flags&0xf0) && (region+size<=image_base || region>=image_base+image_size))register_dynamic_region(region,size);
        returned(c,result,4);return true;
    }
    if(name=="ExitThread")throw ThreadExit(argument(c,0));
    if(name=="SetThreadPriority"){
        // Platform policy, not a game patch: the original asks for THREAD_PRIORITY_TIME_CRITICAL (0xf)
        // on translated workers that run far slower than native code. Starving the desktop scheduler
        // caused the 2026-10-16 responsiveness incident, so levels above ABOVE_NORMAL are capped.
        const int requested=int(argument(c,1)),applied=requested>THREAD_PRIORITY_ABOVE_NORMAL?THREAD_PRIORITY_ABOVE_NORMAL:requested;
        if(applied!=requested){std::ostringstream s;s<<"PRIORITY CAP requested="<<requested<<" applied="<<applied<<" return=0x"<<std::hex<<guest_return;record(s.str());}
        SetLastError(uint32_t(m<4>(c,teb+0x34)));
        const BOOL ok=SetThreadPriority(reinterpret_cast<HANDLE>(uintptr_t(argument(c,0))),applied);
        wm<4>(c,teb+0x34,GetLastError());returned(c,ok,2);return true;
    }
    if(name=="CreateThread"){
        if(stopping)throw Fault("thread creation interrupted during shutdown");
        auto start=std::make_unique<ThreadStart>(ThreadStart{this,argument(c,2),argument(c,3)});
        if(start->address<image_base || start->address>=image_base+image_size)throw Fault("thread entry must belong to the translated guest image");
        SetLastError(uint32_t(m<4>(c,teb+0x34)));
        const uintptr_t affinity=thread_affinity.load();
        const uint32_t requested_flags=argument(c,4);
        auto handle=CreateThread(reinterpret_cast<SECURITY_ATTRIBUTES*>(uintptr_t(argument(c,0))),argument(c,1),translated_thread_start,start.get(),affinity?requested_flags|CREATE_SUSPENDED:requested_flags,reinterpret_cast<DWORD*>(uintptr_t(argument(c,5))));
        DWORD error=GetLastError();
        if(handle && affinity){SetThreadAffinityMask(handle,affinity);if(!(requested_flags&CREATE_SUSPENDED))ResumeThread(handle);}
        if(handle){
            start.release();HANDLE owned=nullptr;
            if(!DuplicateHandle(GetCurrentProcess(),handle,GetCurrentProcess(),&owned,0,FALSE,DUPLICATE_SAME_ACCESS))throw Fault("cannot retain translated worker ownership");
            std::lock_guard lock(state_mutex);threads.push_back(uintptr_t(owned));
        }
        wm<4>(c,teb+0x34,error);returned(c,uint32_t(uintptr_t(handle)),6);return true;
    }
    if(name=="timeSetEvent" && !(argument(c,4)&(TIME_CALLBACK_EVENT_SET|TIME_CALLBACK_EVENT_PULSE))){
        if(stopping)throw Fault("timer creation interrupted during shutdown");
        // Expired one-shot timers retain their context until their callbacks
        // have returned. Re-arming chains share a serialized CPU and stack.
        {std::lock_guard lock(state_mutex);for(auto it=timers.begin();it!=timers.end();){auto old=reinterpret_cast<TimerState*>(it->second);if(old!=active_timer && old->completed){delete old;it=timers.erase(it);}else ++it;}}
        auto state=std::make_unique<TimerState>();state->platform=this;state->address=argument(c,2);state->user=argument(c,3);state->flags=argument(c,4);
        if(active_timer)state->execution=active_timer->execution;
        else{state->execution=std::make_shared<TimerCpu>();prepare(state->execution->cpu);}
        if(state->address<image_base || state->address>=image_base+image_size)throw Fault("timer callback does not belong to the translated guest");
        auto id=timeSetEvent(argument(c,0),argument(c,1),translated_timer_start,DWORD_PTR(state.get()),argument(c,4)|TIME_KILL_SYNCHRONOUS);
        if(id){std::lock_guard lock(state_mutex);timers[id]=uintptr_t(state.release());}returned(c,id,5);return true;
    }
    if(name=="timeKillEvent"){
        const uint32_t id=argument(c,0);if(active_timer)throw Fault("synchronous timer cancellation from a timer callback requires a deferred teardown adapter");
        auto value=timeKillEvent(id);TimerState* retired=nullptr;
        if(value==TIMERR_NOERROR){std::lock_guard lock(state_mutex);auto it=timers.find(id);if(it!=timers.end()){retired=reinterpret_cast<TimerState*>(it->second);timers.erase(it);}}
        delete retired;returned(c,value,1);return true;
    }
    if(name=="WaitForSingleObject" && argument(c,1)==INFINITE){
        DWORD value;
        do{if(stopping)throw Fault("guest wait interrupted after a worker fault");value=WaitForSingleObject(reinterpret_cast<HANDLE>(uintptr_t(argument(c,0))),100);}while(value==WAIT_TIMEOUT);
        returned(c,value,2);return true;
    }
    if(name=="WaitForMultipleObjects" && argument(c,3)==INFINITE){
        DWORD value;const uint32_t count=argument(c,0);auto h=reinterpret_cast<HANDLE*>(c.pointer(argument(c,1),size_t(count)*4));
        do{if(stopping)throw Fault("guest wait interrupted after a worker fault");value=WaitForMultipleObjects(count,h,argument(c,2),100);}while(value==WAIT_TIMEOUT);
        returned(c,value,4);return true;
    }
    if(name=="Sleep" || name=="SleepEx"){
        DWORD remaining=argument(c,0),value=0;const bool alertable=name=="SleepEx" && argument(c,1);
        do{if(stopping)throw Fault("guest sleep interrupted during shutdown");const DWORD part=std::min(remaining,100ul);value=SleepEx(part,alertable);if(value==WAIT_IO_COMPLETION)break;if(remaining!=INFINITE)remaining-=part;}while(remaining);
        returned(c,value,name=="Sleep"?1:2);return true;
    }
    if(name=="RegisterClassExA"){
        const auto original=reinterpret_cast<WNDCLASSEXA*>(uintptr_t(argument(c,0)));WNDCLASSEXA local=*original;
        const uint32_t guest=uint32_t(uintptr_t(local.lpfnWndProc));
        if(guest>=image_base && guest<image_base+image_size){
            // Each distinct guest window procedure gets its own native trampoline; classes sharing one reuse it.
            unsigned slot=0;
            {std::lock_guard lock(state_mutex);
             while(slot<window_proc_count && window_procs[slot]!=guest)++slot;
             if(slot==window_proc_count){
                 if(window_proc_count==window_proc_slots)throw Fault("more distinct guest window procedures than native trampolines");
                 window_procs[window_proc_count++]=guest;
             }}
            local.lpfnWndProc=native_window_procs[slot];
        }
        auto atom=RegisterClassExA(&local);
        const DWORD error=GetLastError();wm<4>(c,r<4>(c,0x110)+0x34,error);
        returned(c,atom,1);return true;
    }
    }  // special
    // This undocumented field is checked against the real public API on each
    // calling thread. An incompatible host layout stops before modifying it.
    thread_local bool verified_teb=false;
    if(!verified_teb){ULONG_PTR low,high;GetCurrentThreadStackLimits(&low,&high);if(low!=__readfsdword(0xe0c))throw Fault("unrecognized Windows x86 stack allocation layout");verified_teb=true;}
    std::string proc_name;
    if(name=="GetProcAddress" && argument(c,1)>0xffff)proc_name=reinterpret_cast<char*>(uintptr_t(argument(c,1)));
    uint32_t input_out=0,input_kind=0,object=g4(original_sp+4),release_method=0;
    unsigned enum_index=UINT_MAX;
    bool semantic_enumeration=false;
    if(name=="DirectInput8Create"){input_out=argument(c,3);input_kind=1;}
    unsigned existing_input=0;
    if(input_bloom.load(std::memory_order_relaxed)&(1u<<((object>>4)&31))){std::lock_guard lock(state_mutex);auto found=input_objects.find(object);if(found!=input_objects.end())existing_input=found->second;}
    if(existing_input){
        const uint32_t vt=uint32_t(m<4>(c,object));release_method=uint32_t(m<4>(c,vt+8));
        if(existing_input==1){
            if(target==m<4>(c,vt+offsetof(IDirectInput8AVtbl,CreateDevice))){input_out=argument(c,2);input_kind=2;}
            if(target==m<4>(c,vt+offsetof(IDirectInput8AVtbl,EnumDevices)))enum_index=2;
            if(target==m<4>(c,vt+offsetof(IDirectInput8AVtbl,EnumDevicesBySemantics))){enum_index=3;semantic_enumeration=true;}
            if(target==m<4>(c,vt+offsetof(IDirectInput8AVtbl,ConfigureDevices)))throw Fault("DirectInput configuration callback contract requires an adapter");
        }else{
            if(target==m<4>(c,vt+offsetof(IDirectInputDevice8AVtbl,EnumObjects)) || target==m<4>(c,vt+offsetof(IDirectInputDevice8AVtbl,EnumEffects)) || target==m<4>(c,vt+offsetof(IDirectInputDevice8AVtbl,EnumCreatedEffectObjects)))enum_index=1;
            if(target==m<4>(c,vt+offsetof(IDirectInputDevice8AVtbl,EnumEffectsInFile)))enum_index=2;
        }
    }
    EnumContext enumeration{this,0,0};
    if(enum_index!=UINT_MAX){
        enumeration.address=argument(c,enum_index);enumeration.reference=argument(c,enum_index+1);
        wm<4>(c,original_sp+4+enum_index*4,semantic_enumeration?uint32_t(uintptr_t(translated_input_semantic_enum)):uint32_t(uintptr_t(translated_input_enum)));
        wm<4>(c,original_sp+4+(enum_index+1)*4,uint32_t(uintptr_t(&enumeration)));
    }
    NativeFrame frame{uint32_t(target),original_sp+4,0,0,0,0,guest_stack_base,guest_stack_limit};
    {const uint32_t last_error=g4(teb+0x34);asm volatile("movl %0,%%fs:0x34"::"r"(last_error):"memory");}   // what SetLastError does
    const bool profiling=profile_enabled(),profiling_full=profiling&&profile_full();const uint64_t started=profiling_full?profile_clock():0;
    const char* profile_name=resolved_name;
    const uint64_t light_started=(profiling && !profiling_full && route.id)?profile_clock():0;
    D3d9Recorder* const recorder=d3d9_recorder_ptr.load(std::memory_order_relaxed);
    const bool recording=recorder && &c==&main_cpu;
    if(recording){if(!std::strcmp(resolved_name,"ExitProcess") || !std::strcmp(resolved_name,"TerminateProcess"))recorder->finish();else if(!std::strcmp(resolved_name,"PostQuitMessage") || !std::strcmp(resolved_name,"DestroyWindow"))recorder->checkpoint();else recorder->before(uint32_t(target),original_sp);}
    invoke_native32(&frame);const DWORD guest_error=__readfsdword(0x34);
    if(recording){if(route.d3d_create && frame.eax)recorder->created_d3d9(frame.eax);recorder->after(uint32_t(target),original_sp,frame.eax,c.instructions);}invalidate_native_memory();s4(teb+0x34,guest_error);
    if(light_started)light_ticks[route.id].fetch_add(profile_clock()-light_started,std::memory_order_relaxed);
    const unsigned limit=frame_limit.load(std::memory_order_relaxed);
    if((profiling && !profiling_full) || limit || state_cache_on.load(std::memory_order_relaxed) || vsync_on.load(std::memory_order_relaxed)){
        if(route.id)light_counts[route.id].fetch_add(1,std::memory_order_relaxed);
        const uint32_t present=light_present.load(std::memory_order_relaxed);
        if(present){
            if(uint32_t(target)==present){
                light_present_calls.fetch_add(1,std::memory_order_relaxed);
                if(limit)limit_frame_rate(limit);
            }
        }
        else{
            // Present is slot 17 of the device whose creation (IDirect3D9::CreateDevice, slot 16) we just saw succeed.
            if(route.d3d_create && frame.eax){light_d3d9=frame.eax;light_create_device_target=g4(g4(frame.eax)+16*4);}
            else if(light_d3d9 && !light_device && frame.eax==0 && uint32_t(target)==g4(g4(light_d3d9)+16*4)){
                const uint32_t device=g4(g4(original_sp+4+6*4));
                if(device){
                    light_device=device;
                    const uint32_t vtable=g4(device);
                    state_target[0]=g4(vtable+57*4);state_target[1]=g4(vtable+67*4);state_target[2]=g4(vtable+69*4);register_bind_targets(vtable);
                    state_reset_target[0]=g4(vtable+2*4);state_reset_target[1]=g4(vtable+16*4);
                    state_reset_target[2]=g4(vtable+59*4);state_reset_target[3]=g4(vtable+60*4);state_reset_target[4]=g4(vtable+61*4);
                    light_present.store(g4(vtable+17*4));
                }
            }
        }
    }
    if(state_cache_on.load(std::memory_order_relaxed) && light_device && &c==&main_cpu){
        const uint32_t t=uint32_t(target);
        if(t==state_reset_target[4].load(std::memory_order_relaxed)){
            state_recording=false;   // EndStateBlock(device, &block)
            if(frame.eax==0 && !state_block_vtable.load()){const uint32_t block=g4(g4(original_sp+8));if(block){state_block_vtable=g4(block);state_apply_target=g4(g4(block)+5*4);}}
        }else if(t==state_reset_target[2].load(std::memory_order_relaxed) && frame.eax==0 && !state_block_vtable.load()){
            const uint32_t block=g4(g4(original_sp+12));   // CreateStateBlock(device, type, &block)
            if(block){state_block_vtable=g4(block);state_apply_target=g4(g4(block)+5*4);}
        }
    }
    if(profiling && !profiling_full && light_device && frame.eax==0){
        const uint32_t vtable=g4(light_device),t=uint32_t(target);
        if(t==g4(vtable+26*4)){const uint32_t o=g4(g4(original_sp+4+5*4));if(o&&!light_vertex_buffer_vtable)light_vertex_buffer_vtable=g4(o);}
        else if(t==g4(vtable+27*4)){const uint32_t o=g4(g4(original_sp+4+5*4));if(o&&!light_index_buffer_vtable)light_index_buffer_vtable=g4(o);}
        else if(t==g4(vtable+23*4)){const uint32_t o=g4(g4(original_sp+4+7*4));if(o&&!light_texture_vtable)light_texture_vtable=g4(o);}
    }
    if(profiling_full){
        const uint64_t elapsed=profile_clock()-started;
        {
            std::lock_guard lock(profile_mutex);
            if(!profile_d3d9 && !std::strcmp(profile_name,"Direct3DCreate9") && frame.eax)profile_d3d9=frame.eax;
            else if(profile_d3d9 && !profile_device && frame.eax==0 && target==g4(g4(profile_d3d9)+16*4)){
                const uint32_t device=g4(g4(original_sp+4+6*4));
                if(device){profile_device=device;profile_present=g4(g4(device)+17*4);}
            }
        }
        profile_native_call(c,uint32_t(target),imported?imported->name:nullptr,elapsed);
    }
    if(first_native_call(uint32_t(target),guest_return,true)){
        std::ostringstream s;s<<"RETURN target=0x"<<std::hex<<uint32_t(target)<<" guest=0x"<<guest_return<<" EAX=0x"<<frame.eax<<" stack-pop="<<std::dec<<(frame.after-original_sp);record(s.str());
    }
    if(frame.eax && !proc_name.empty()){std::lock_guard lock(state_mutex);dynamic_names[frame.eax]=proc_name;dynamic_name_count=dynamic_names.size();++dynamic_generation;}
    s4(original_sp,guest_return);
    if(state_kind){
        const uint32_t first=g4(original_sp+8),second=g4(original_sp+12);
        const uint32_t value=state_kind==1?second:g4(original_sp+16);
        if(uint64_t* slot=state_kind==1?state_slot(1,first,0):state_slot(state_kind,first,second))*slot=frame.eax==0?(0x100000000ull|value):0;
    }
    if(bind_kind)device_shadow.remember(bind_kind,bind_args,frame.eax);
    if(enum_index!=UINT_MAX){wm<4>(c,original_sp+4+enum_index*4,enumeration.address);wm<4>(c,original_sp+4+(enum_index+1)*4,enumeration.reference);}
    if(input_out && int32_t(frame.eax)>=0){auto created=uint32_t(m<4>(c,input_out));if(created){std::lock_guard lock(state_mutex);input_objects[created]=input_kind;input_bloom|=1u<<((created>>4)&31);}}
    if(existing_input && trace_input()){
        // Diagnostic (NFSU2_TRACE_INPUT=1): name the DirectInput method, its HRESULT and, for keyboards, the pressed scancodes.
        const uint32_t vt=uint32_t(m<4>(c,object));
        struct Method{const char* name;size_t offset;};
        static const Method device_methods[]={{"Acquire",offsetof(IDirectInputDevice8AVtbl,Acquire)},{"Unacquire",offsetof(IDirectInputDevice8AVtbl,Unacquire)},
            {"GetDeviceState",offsetof(IDirectInputDevice8AVtbl,GetDeviceState)},{"GetDeviceData",offsetof(IDirectInputDevice8AVtbl,GetDeviceData)},
            {"SetDataFormat",offsetof(IDirectInputDevice8AVtbl,SetDataFormat)},{"SetCooperativeLevel",offsetof(IDirectInputDevice8AVtbl,SetCooperativeLevel)},
            {"SetProperty",offsetof(IDirectInputDevice8AVtbl,SetProperty)},{"SetEventNotification",offsetof(IDirectInputDevice8AVtbl,SetEventNotification)},
            {"Poll",offsetof(IDirectInputDevice8AVtbl,Poll)},{"GetCapabilities",offsetof(IDirectInputDevice8AVtbl,GetCapabilities)}};
        static const Method input_methods[]={{"CreateDevice",offsetof(IDirectInput8AVtbl,CreateDevice)},{"EnumDevices",offsetof(IDirectInput8AVtbl,EnumDevices)}};
        const char* method="other";
        if(existing_input==2){for(const auto& d:device_methods)if(target==m<4>(c,vt+d.offset))method=d.name;}
        else{for(const auto& d:input_methods)if(target==m<4>(c,vt+d.offset))method=d.name;}
        if(std::strcmp(method,"other")!=0){
            static std::map<std::string,std::pair<unsigned,uint32_t>> seen;static std::mutex seen_mutex;
            std::lock_guard lock(seen_mutex);auto& entry=seen[std::string(existing_input==2?"Device::":"DirectInput8::")+method];
            const bool changed=entry.first==0 || entry.second!=frame.eax;
            if(changed || entry.first<8){
                std::ostringstream msg;msg<<"DI "<<(existing_input==2?"Device::":"DirectInput8::")<<method<<" hr=0x"<<std::hex<<frame.eax<<" call#"<<std::dec<<(entry.first+1);
                record(msg.str());
            }
            entry.first++;entry.second=frame.eax;
            if(existing_input==2 && std::strcmp(method,"GetDeviceData")==0 && frame.eax==0 && argument(c,3)){
                // Buffered input: log each delivered event (offset, data) so a missing key press is visible.
                const uint32_t count=uint32_t(m<4>(c,argument(c,3))),size=argument(c,1),buffer=argument(c,2);
                for(uint32_t i=0;buffer && i<count && i<16;++i){
                    std::ostringstream msg;msg<<"DI buffered event: offset=0x"<<std::hex<<uint32_t(m<4>(c,buffer+i*size))<<" data=0x"<<uint32_t(m<4>(c,buffer+i*size+4));record(msg.str());
                }
            }
            if(existing_input==2 && std::strcmp(method,"GetDeviceState")==0 && frame.eax==0 && argument(c,1)==256){
                static std::vector<unsigned> previous;std::vector<unsigned> down;
                const uint8_t* keys=reinterpret_cast<const uint8_t*>(uintptr_t(argument(c,2)));
                for(unsigned i=0;i<256;++i)if(keys[i]&0x80)down.push_back(i);
                if(down!=previous){std::ostringstream msg;msg<<"DI keyboard state: scancodes down =";for(auto k:down)msg<<" 0x"<<std::hex<<k;record(msg.str());previous=down;}
            }
        }
    }
    if(existing_input && target==release_method && frame.eax==0){std::lock_guard lock(state_mutex);input_objects.erase(object);}
    wr<4>(c,0,frame.eax);wr<4>(c,8,frame.edx);wr<4>(c,4,frame.ecx);wr<4>(c,16,frame.after);c.pc=guest_return;wr<4>(c,644,c.pc);
    if(callback_fault_set.load(std::memory_order_acquire)){std::lock_guard lock(state_mutex);if(!callback_fault.empty())throw Fault(callback_fault);}
    return true;
}
uint32_t NativePlatform::execute(Cpu& c,uint32_t stop,uint64_t budget){
    struct Restore{Cpu* previous;~Restore(){active_guest_cpu=previous;}}restore{active_guest_cpu};active_guest_cpu=&c;
    for(uint64_t i=0;i<budget;++i){if(stopping)throw Fault("translated execution interrupted");if(c.pc==stop)return uint32_t(r<4>(c,0));if(!dispatch(c)){last_page_entry=c.pc;step(c);}}
    throw Fault("native32 translated instruction budget exhausted");
}
NativePlatform* NativePlatform::current(){return current_platform;}
void NativePlatform::note_mod_call(const char* name){mod_call_name=name;}
uint32_t NativePlatform::callback(uint32_t address,std::initializer_list<uint32_t> args){return call_guest(address,0,0,args);}
void NativePlatform::override_import(const char* name,unsigned argument_count,NativeHook hook){
    for(const auto& i:imports){
        if(std::strcmp(i.name,name)!=0)continue;
        const uint32_t slot=(i.token-0xf0000000u)>>4;
        if(slot>=import_override_slots)throw Fault(std::string("import token out of range for ")+name);
        import_overrides[slot]=std::make_unique<ImportOverride>(ImportOverride{argument_count,std::move(hook)});
        return;
    }
    throw Fault(std::string("the game does not import ")+name);
}
uint32_t NativePlatform::add_method_token(unsigned argument_count,NativeHook hook){
    const unsigned index=method_token_count.fetch_add(1);
    if(index>=method_token_slots){method_token_count=method_token_slots;throw Fault("more method tokens than slots");}
    method_tokens[index].store(new ImportOverride{argument_count,std::move(hook)},std::memory_order_release);
    return method_token_base+(index<<4);
}
uint32_t NativePlatform::call_guest(uint32_t address,uint32_t ecx,uint32_t edx,std::initializer_list<uint32_t> args){
    struct Error{DWORD value=GetLastError();~Error(){SetLastError(value);}}error;
    // The processor is leased from a per-thread pool; callbacks may nest (a message sent while another is handled).
    struct Lease{
        NativePlatform* owner;std::unique_ptr<Cpu> cpu;
        ~Lease(){
            if(!cpu)return;
            {std::lock_guard lock(owner->state_mutex);owner->exceptions.erase(cpu.get());}
            if(callback_pool.size()<16)callback_pool.push_back(std::move(cpu));
        }
    };
    try{
        if(!address)throw Fault("guest callback has no target");
        Lease lease{this,nullptr};
        if(callback_pool.empty()){lease.cpu=std::make_unique<Cpu>();prepare(*lease.cpu);++callbacks_created;}
        else{lease.cpu=std::move(callback_pool.back());callback_pool.pop_back();
             initialize_cpu(*lease.cpu,lease.cpu->memory[0].base,lease.cpu->memory[1].base);}
        Cpu& c=*lease.cpu;
        wr<4>(c,4,ecx);wr<4>(c,8,edx);
        wm<4>(c,r<4>(c,0x110)+0x34,error.value);uint32_t sp=uint32_t(r<4>(c,16));unsigned i=0;for(auto a:args)wm<4>(c,sp+4+4*i++,a);
        c.pc=address;auto result=execute(c,0xdead0000,10000000);error.value=uint32_t(m<4>(c,r<4>(c,0x110)+0x34));return result;
    }catch(const std::exception& e){std::string fault=e.what();{std::lock_guard lock(state_mutex);callback_fault=fault;callback_fault_set=true;}record("CALLBACK FAULT "+fault);return 0;}
}
uint32_t NativePlatform::window_callback(unsigned slot,std::initializer_list<uint32_t> args){
    uint32_t address;{std::lock_guard lock(state_mutex);address=slot<window_proc_count?window_procs[slot]:0;}
    if(!address){record("CALLBACK FAULT window procedure slot has no guest target");return 0;}
    if(auto* recorder=d3d9_recorder_ptr.load(std::memory_order_relaxed)){const uint32_t message=args.size()>1?*(args.begin()+1):0;if(message==WM_CLOSE||message==WM_DESTROY||message==WM_QUIT)recorder->checkpoint();}   // the window is closing: flush what is recorded
    return callback(address,args);
}
std::string NativePlatform::set_d3d9_recorder(const RecorderOptions& options){
    auto recorder=std::make_unique<D3d9Recorder>(options);
    if(!recorder->ok())return recorder->error();
    state_cache_on=false;
    d3d9_recorder=std::move(recorder);d3d9_recorder_ptr.store(d3d9_recorder.get());
    return "";
}
void NativePlatform::register_dynamic_region(uint32_t base,uint32_t size){
    std::lock_guard lock(state_mutex);
    if(!dynamic_owner){
        std::filesystem::path specification=dynamic_specification;
        if(specification.empty()){
            char variable[1024];
            if(GetEnvironmentVariableA("NFSU2_SLEIGH_SPEC",variable,sizeof(variable)))specification=variable;
            else{wchar_t module[MAX_PATH*2];const DWORD n=GetModuleFileNameW(nullptr,module,DWORD(std::size(module)));specification=std::filesystem::path(module,module+n).parent_path()/"sleigh"/"x86.sla";}
        }
        dynamic_owner=std::make_unique<DynamicCode>(specification);
        dynamic.store(dynamic_owner.get());
        record("DYNAMIC CODE interpreter ready: "+specification.string());
    }
    dynamic_owner->add_region(base,size);
    std::ostringstream message;message<<"DYNAMIC CODE region registered base=0x"<<std::hex<<base<<" size=0x"<<size;record(message.str());
}
void NativePlatform::add_native_hook(uint32_t address,unsigned argument_count,NativeHook hook){
    std::lock_guard lock(state_mutex);native_hooks[address]={argument_count,std::move(hook)};
}
// ---- Guest structured exception handling -------------------------------------------------------------------
// RaiseException, RtlUnwind and UnhandledExceptionFilter run as a state machine on the main dispatch loop instead
// of nesting C++ calls: each guest handler is entered with a return address in a reserved token range, and its
// return lands in exception_return(). A handler that never returns (an __except block unwinding the stack)
// simply leaves a state behind, which purge_dead_exceptions() removes once the guest stack has moved past it.
void NativePlatform::purge_dead_exceptions(Cpu& c){
    std::lock_guard lock(state_mutex);
    auto found=exceptions.find(&c);if(found==exceptions.end())return;
    const uint32_t esp=uint32_t(r<4>(c,16));
    auto& states=found->second;
    while(!states.empty() && states.back().call_base<esp)states.pop_back();
    if(states.empty())exceptions.erase(found);
}
void NativePlatform::build_exception_context(Cpu& c,uint32_t context,uint32_t eip,uint32_t esp){
    std::memset(c.pointer(context,context_size),0,context_size);
    wm<4>(c,context,0x10007);  // CONTEXT_i386 | CONTROL | INTEGER | SEGMENTS
    static const unsigned registers[][2]={{0x9c,28},{0xa0,24},{0xa4,12},{0xa8,8},{0xac,4},{0xb0,0},{0xb4,20}};  // EDI ESI EBX EDX ECX EAX EBP
    for(const auto& pair:registers)wm<4>(c,context+pair[0],uint32_t(r<4>(c,pair[1])));
    uint32_t flags=0x202;  // IF set, reserved bit 1 set
    flags|=uint32_t(r<1>(c,0x200)&1)<<0;flags|=uint32_t(r<1>(c,0x202)&1)<<2;flags|=uint32_t(r<1>(c,0x204)&1)<<4;
    flags|=uint32_t(r<1>(c,0x206)&1)<<6;flags|=uint32_t(r<1>(c,0x207)&1)<<7;flags|=uint32_t(r<1>(c,0x20a)&1)<<10;
    flags|=uint32_t(r<1>(c,0x20b)&1)<<11;
    wm<4>(c,context+0xb8,eip);wm<4>(c,context+0xc0,flags);wm<4>(c,context+0xc4,esp);
    wm<4>(c,context+0xbc,0x1b);wm<4>(c,context+0xc8,0x23);wm<4>(c,context+0x98,0x23);wm<4>(c,context+0x94,0x23);wm<4>(c,context+0x90,0x3b);
}
void NativePlatform::finish_with_context(Cpu& c,uint32_t context){
    static const unsigned registers[][2]={{0x9c,28},{0xa0,24},{0xa4,12},{0xa8,8},{0xac,4},{0xb0,0},{0xb4,20}};
    for(const auto& pair:registers)wr<4>(c,pair[1],uint32_t(m<4>(c,context+pair[0])));
    const uint32_t flags=uint32_t(m<4>(c,context+0xc0));
    wr<1>(c,0x200,(flags>>0)&1);wr<1>(c,0x202,(flags>>2)&1);wr<1>(c,0x204,(flags>>4)&1);wr<1>(c,0x206,(flags>>6)&1);
    wr<1>(c,0x207,(flags>>7)&1);wr<1>(c,0x20a,(flags>>10)&1);wr<1>(c,0x20b,(flags>>11)&1);
    wr<4>(c,16,uint32_t(m<4>(c,context+0xc4)));c.pc=uint32_t(m<4>(c,context+0xb8));wr<4>(c,644,c.pc);
}
void NativePlatform::call_exception_handler(Cpu& c,ExceptionState& s,uint32_t handler,uint32_t frame,uint32_t token){
    // stdcall: EXCEPTION_DISPOSITION handler(EXCEPTION_RECORD*, void* frame, CONTEXT*, void* dispatcher_context)
    const uint32_t sp=s.call_base;
    wm<4>(c,sp,token);wm<4>(c,sp+4,s.record);wm<4>(c,sp+8,frame);wm<4>(c,sp+12,s.context);wm<4>(c,sp+16,sp+24);wm<4>(c,sp+24,0);
    wr<4>(c,16,sp);c.pc=handler;wr<4>(c,644,c.pc);
}
bool NativePlatform::exception_import(Cpu& c,const std::string& name,uint32_t guest_return){
    purge_dead_exceptions(c);
    const uint32_t esp=uint32_t(r<4>(c,16)),teb=uint32_t(r<4>(c,0x110));
    if(name=="UnhandledExceptionFilter"){
        const uint32_t pointers=argument(c,0);
        if(!exception_filter){record("UnhandledExceptionFilter with no registered guest filter: EXCEPTION_EXECUTE_HANDLER");returned(c,1,1);return true;}
        ExceptionState s{};s.kind=ExceptionState::Filter;s.import_return=true;s.pointers=pointers;s.guest_return=guest_return;s.resume_sp=esp+8;
        s.call_base=(esp-0x80)&~15u;
        {std::lock_guard lock(state_mutex);exceptions[&c].push_back(s);}
        wm<4>(c,s.call_base,exception_filter_token);wm<4>(c,s.call_base+4,pointers);
        wr<4>(c,16,s.call_base);c.pc=exception_filter;wr<4>(c,644,c.pc);return true;
    }
    ExceptionState s{};s.guest_return=guest_return;s.resume_sp=esp+4+16;
    const uint32_t context=((esp-0x40-context_size)&~15u),record=((context-exception_record_size)&~15u);
    s.context=context;s.record=record;s.pointers=record-8;s.call_base=(s.pointers-0x80)&~15u;
    if(name=="RaiseException"){
        const uint32_t code=argument(c,0),flags=argument(c,1),count=std::min(argument(c,2),15u),arguments=argument(c,3);
        std::memset(c.pointer(record,exception_record_size),0,exception_record_size);
        wm<4>(c,record,code);wm<4>(c,record+4,flags&1);wm<4>(c,record+12,guest_return);wm<4>(c,record+16,count);
        for(uint32_t i=0;i<count;++i)wm<4>(c,record+20+4*i,uint32_t(m<4>(c,arguments+4*i)));
        build_exception_context(c,context,guest_return,s.resume_sp);
        wm<4>(c,s.pointers,record);wm<4>(c,s.pointers+4,context);
        s.kind=ExceptionState::Raise;s.frame=uint32_t(m<4>(c,teb));
        {std::lock_guard lock(state_mutex);exceptions[&c].push_back(s);}
        std::ostringstream message;message<<"RaiseException code=0x"<<std::hex<<code<<" flags=0x"<<flags<<" from guest 0x"<<guest_return;
        this->record(message.str());
        continue_raise(c);return true;
    }
    // RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue)
    const uint32_t target_frame=argument(c,0),target_ip=argument(c,1),given=argument(c,2),value=argument(c,3);
    std::memset(c.pointer(record,exception_record_size),0,exception_record_size);
    if(given)std::memcpy(c.pointer(record,exception_record_size),c.pointer(given,exception_record_size),exception_record_size);
    else wm<4>(c,record,0xc0000027);  // STATUS_UNWIND
    wm<4>(c,record+4,uint32_t(m<4>(c,record+4))|2|(target_frame?0u:4u));  // EXCEPTION_UNWINDING (| EXCEPTION_EXIT_UNWIND)
    build_exception_context(c,context,guest_return,s.resume_sp);
    wm<4>(c,s.pointers,record);wm<4>(c,s.pointers+4,context);
    s.kind=ExceptionState::Unwind;s.target_frame=target_frame;s.target_ip=target_ip;s.return_value=value;
    s.saved[0]=uint32_t(r<4>(c,12));s.saved[1]=uint32_t(r<4>(c,20));s.saved[2]=uint32_t(r<4>(c,24));s.saved[3]=uint32_t(r<4>(c,28));
    {std::lock_guard lock(state_mutex);exceptions[&c].push_back(s);}
    continue_unwind(c);return true;
}
void NativePlatform::continue_raise(Cpu& c){
    ExceptionState* s;{std::lock_guard lock(state_mutex);s=&exceptions[&c].back();}
    for(unsigned guard=0;guard<4096;++guard){
        if(s->frame==0xffffffff || s->frame==0)break;
        const uint32_t handler=uint32_t(m<4>(c,s->frame+4));
        call_exception_handler(c,*s,handler,s->frame,exception_handler_token);return;
    }
    // End of the chain: the registered top-level filter decides, otherwise the exception is fatal.
    const uint32_t code=uint32_t(m<4>(c,s->record));
    if(exception_filter){
        s->kind=ExceptionState::Filter;s->import_return=false;
        wm<4>(c,s->call_base,exception_filter_token);wm<4>(c,s->call_base+4,s->pointers);
        wr<4>(c,16,s->call_base);c.pc=exception_filter;wr<4>(c,644,c.pc);return;
    }
    std::ostringstream message;message<<"unhandled guest exception code=0x"<<std::hex<<code<<" at guest 0x"<<uint32_t(m<4>(c,s->record+12));
    throw Fault(message.str());
}
void NativePlatform::continue_unwind(Cpu& c){
    ExceptionState* s;{std::lock_guard lock(state_mutex);s=&exceptions[&c].back();}
    const uint32_t teb=uint32_t(r<4>(c,0x110)),frame=uint32_t(m<4>(c,teb));
    if(frame!=s->target_frame && frame!=0xffffffff && frame!=0){
        s->frame=frame;
        call_exception_handler(c,*s,uint32_t(m<4>(c,frame+4)),frame,exception_unwind_token);return;
    }
    // Unwinding is complete: continue at TargetIp (or return to the caller) with the callee-saved registers intact.
    wr<4>(c,12,s->saved[0]);wr<4>(c,20,s->saved[1]);wr<4>(c,24,s->saved[2]);wr<4>(c,28,s->saved[3]);
    wr<4>(c,0,s->return_value);wr<4>(c,16,s->resume_sp);
    c.pc=s->target_ip?s->target_ip:s->guest_return;wr<4>(c,644,c.pc);
    purge_dead_exceptions(c);
}
bool NativePlatform::exception_return(Cpu& c){
    ExceptionState* s;
    {std::lock_guard lock(state_mutex);
     auto found=exceptions.find(&c);
     if(found==exceptions.end() || found->second.empty())throw Fault("guest exception token reached without a pending exception");
     s=&found->second.back();}
    const uint32_t token=c.pc,value=uint32_t(r<4>(c,0)),esp=uint32_t(r<4>(c,16));
    const uint32_t expected=s->call_base+(token==exception_filter_token?8:20);
    if(esp!=expected)throw Fault("guest exception handler returned with an unbalanced stack");
    if(token==exception_handler_token){
        if(value==1){  // ExceptionContinueSearch
            s->frame=uint32_t(m<4>(c,s->frame));continue_raise(c);return true;
        }
        if(value==0){  // ExceptionContinueExecution
            if(uint32_t(m<4>(c,s->record+4))&1)throw Fault("guest handler continued a non-continuable exception");
            const uint32_t context=s->context;finish_with_context(c,context);purge_dead_exceptions(c);return true;
        }
        throw Fault("guest exception handler returned an unsupported disposition");
    }
    if(token==exception_unwind_token){
        // The handler has run its termination code; the frame is unlinked before the next one is visited.
        wm<4>(c,r<4>(c,0x110),uint32_t(m<4>(c,s->frame)));
        continue_unwind(c);return true;
    }
    // Top-level filter: -1 resumes, anything else ends the process in the original; here that is an explicit stop.
    if(s->import_return){
        const uint32_t resume=s->resume_sp,back=s->guest_return;
        wr<4>(c,0,value);wr<4>(c,16,resume);c.pc=back;wr<4>(c,644,c.pc);purge_dead_exceptions(c);return true;
    }
    if(int32_t(value)==-1){const uint32_t context=s->context;finish_with_context(c,context);purge_dead_exceptions(c);return true;}
    std::ostringstream message;message<<"unhandled guest exception code=0x"<<std::hex<<uint32_t(m<4>(c,s->record))<<" (top-level filter returned "<<int32_t(value)<<")";
    throw Fault(message.str());
}
void NativePlatform::timer_entry(uintptr_t input,uint32_t id,uint32_t message,uint32_t one,uint32_t two){
    if(stopping)return;
    auto state=reinterpret_cast<TimerState*>(input);active_timer=state;
    try{
        std::lock_guard lock(state->execution->mutex);Cpu& c=state->execution->cpu;const uint32_t sp=c.memory.front().base+stack_size-0x100;
        wr<4>(c,16,sp);wm<4>(c,sp,0xdead0000);wm<4>(c,r<4>(c,0x110)+0x24,__readfsdword(0x24));
        const uint32_t args[]={id,message,state->user,one,two};for(unsigned i=0;i<5;++i)wm<4>(c,sp+4+4*i,args[i]);
        c.pc=state->address;execute(c,0xdead0000,10000000);
    }catch(const std::exception& e){if(!stopping){std::string fault=std::string("TIMER FAULT ")+e.what();{std::lock_guard lock(state_mutex);callback_fault=fault;callback_fault_set=true;}record(fault);stopping=true;}}
    active_timer=nullptr;
    if(!(state->flags&TIME_PERIODIC))state->completed=true;
}
uint32_t NativePlatform::thread_entry(uint32_t address,uint32_t argument){
    Cpu c;
    ProfileThreadScope profile_scope(&c,address);
    try{
        prepare(c);wm<4>(c,r<4>(c,16)+4,argument);c.pc=address;
        return execute(c,0xdead0000,std::numeric_limits<uint64_t>::max());
    }catch(const ThreadExit& exit){return exit.value;}
    catch(const std::exception& e){
        if(!stopping){
            std::ostringstream s;s<<"THREAD FAULT "<<e.what()<<" PC=0x"<<std::hex<<c.pc<<" entry=0x"<<address<<" last-page-entry=0x"<<last_page_entry<<" last-native="<<last_native_name;
            for(auto [name,offset]:{std::pair{"EAX",0},std::pair{"ECX",4},std::pair{"EDX",8},std::pair{"EBX",12},std::pair{"ESI",24},std::pair{"EDI",28},std::pair{"EBP",20},std::pair{"ESP",16}})s<<" "<<name<<"=0x"<<uint32_t(r<4>(c,offset));
            s<<" stack:";try{const uint32_t sp=uint32_t(r<4>(c,16));for(unsigned i=0;i<12;++i)s<<" "<<uint32_t(m<4>(c,sp+4*i));}catch(const std::exception&){}
            // The 16 bytes before and 32 bytes at each pointer-like register help tell a freed or overwritten object from a bad pointer.
            for(auto [name,offset]:{std::pair{"EAX",0},std::pair{"ESI",24},std::pair{"EDI",28},std::pair{"EBX",12}}){
                const uint32_t p=uint32_t(r<4>(c,offset));
                if(p<0x10000)continue;
                MEMORY_BASIC_INFORMATION info{};
                if(!VirtualQuery(reinterpret_cast<void*>(uintptr_t(p)),&info,sizeof(info)) || info.State!=MEM_COMMIT || (info.Protect&(PAGE_NOACCESS|PAGE_GUARD)))continue;
                s<<" ["<<name<<"]:";
                for(int i=-2;i<8;++i){const uintptr_t at=uintptr_t(p)+4*i;if(at>=uintptr_t(info.BaseAddress) && at+4<=uintptr_t(info.BaseAddress)+info.RegionSize)s<<" "<<*reinterpret_cast<const uint32_t*>(at);}
                if(offset==0){  // the object EAX points to: also show what its pointer-like fields refer to
                    for(int i=0;i<4;++i){
                        const uintptr_t at=uintptr_t(p)+4*i;if(at+4>uintptr_t(info.BaseAddress)+info.RegionSize)break;
                        const uint32_t q=*reinterpret_cast<const uint32_t*>(at);MEMORY_BASIC_INFORMATION inner{};
                        if(q<0x10000 || !VirtualQuery(reinterpret_cast<void*>(uintptr_t(q)),&inner,sizeof(inner)) || inner.State!=MEM_COMMIT || (inner.Protect&(PAGE_NOACCESS|PAGE_GUARD)))continue;
                        s<<" {+"<<4*i<<"->"<<q<<":";
                        for(int k=-4;k<12;++k){const uintptr_t a2=uintptr_t(q)+4*k;if(a2>=uintptr_t(inner.BaseAddress) && a2+4<=uintptr_t(inner.BaseAddress)+inner.RegionSize)s<<" "<<*reinterpret_cast<const uint32_t*>(a2);}
                        s<<"}";
                    }
                }
            }
            record(s.str());{std::lock_guard lock(state_mutex);callback_fault=s.str();callback_fault_set=true;}stopping=true;
        }
        return 1;
    }
}
uint32_t NativePlatform::input_semantic_callback(uint32_t address,uint32_t reference,uint32_t item,uint32_t device,uint32_t flags,uint32_t remaining){
    if(device){std::lock_guard lock(state_mutex);input_objects[device]=2;input_bloom|=1u<<((device>>4)&31);}
    return callback(address,{item,device,flags,remaining,reference});
}
void NativePlatform::run(uint64_t budget,const std::filesystem::path& log){
    trace.open(log);if(!trace)throw Fault("cannot open native32 trace");
    crash_report_path=(log.parent_path()/"crash_report.txt").string();
    const uint32_t main_thread_id=GetCurrentThreadId();
    ProfileThreadScope main_profile_scope(&main_cpu,0);
    if(profile_enabled())profile_sampler=std::thread([this,main_thread_id]{
        // Samples where the main thread last left translated code, 500 times a second (profile mode only); in the light
        // profile this thread also writes the report every 5 s.
        static const uint64_t frequency=[]{LARGE_INTEGER f;QueryPerformanceFrequency(&f);return uint64_t(f.QuadPart);}();
        HANDLE main_handle=OpenThread(THREAD_QUERY_LIMITED_INFORMATION,FALSE,main_thread_id);
        // Where the main thread's CPU really is: its instruction pointer, read 500 times a second (resolved to modules when the report is written).
        HANDLE context_handle=OpenThread(THREAD_SUSPEND_RESUME|THREAD_GET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,main_thread_id);
        struct EipSample{uint32_t eip,esp,words;uint32_t stack[48];};   // the top of the stack is kept to find out who called into a module
        std::vector<EipSample> eip_samples;eip_samples.reserve(4096);
        const bool light=!profile_full();
        uint64_t window_start=profile_clock(),last_instructions=main_cpu.instructions,last_process=process_cpu_100ns(),last_thread=thread_cpu_100ns(main_handle),last_present=0;
        std::vector<uint64_t> last_counts(light_slots,0);
        std::vector<uint64_t> last_ticks(light_slots,0);
        while(!stopping){
            std::this_thread::sleep_for(std::chrono::milliseconds(2));
            if(context_handle && eip_samples.size()<eip_samples.capacity()){
                // Nothing that can block or allocate may run while the thread is suspended.
                CONTEXT context;context.ContextFlags=CONTEXT_CONTROL;
                if(SuspendThread(context_handle)!=DWORD(-1)){
                    const BOOL got=GetThreadContext(context_handle,&context);
                    EipSample sample{};
                    if(got){
                        sample.eip=uint32_t(context.Eip);sample.esp=uint32_t(context.Esp);SIZE_T read=0;
                        if(ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(uintptr_t(sample.esp)),sample.stack,sizeof(sample.stack),&read))sample.words=uint32_t(read/4);
                    }
                    ResumeThread(context_handle);
                    if(got)eip_samples.push_back(sample);
                }
            }
            const uint32_t pc=main_cpu.pc;
            {
                std::lock_guard lock(profile_mutex);
                ++profile_sample_total;
                if(pc>=image_base && pc<image_base+image_size)++profile_samples[pc&~0xffu];else ++profile_native_samples;
                for(auto& thread:profile_threads){
                    if(!thread->alive || !thread->cpu)continue;
                    const uint32_t thread_pc=thread->cpu->pc;
                    ++thread->samples;
                    if(thread_pc>=image_base && thread_pc<image_base+image_size)++thread->blocks[thread_pc&~0xffu];
                    else{++thread->outside;const char* what=thread->native;++thread->waits[what?what:"(dispatch)"];}
                }
            }
            const uint64_t now=profile_clock();
            if(!light || now-window_start<5*frequency)continue;
            const double seconds=double(now-window_start)/double(frequency);
            SYSTEM_INFO info;GetSystemInfo(&info);
            const uint64_t process_cpu=process_cpu_100ns(),thread_cpu=thread_cpu_100ns(main_handle),instructions=main_cpu.instructions;
            const double process_percent=100.0*double(process_cpu-last_process)/1e7/seconds,thread_percent=100.0*double(thread_cpu-last_thread)/1e7/seconds;
            std::ostringstream text;
            text<<"PROFILE FPS=";
            const uint64_t present_calls=light_present_calls.load();
            if(light_present.load())text<<std::fixed<<std::setprecision(1)<<double(present_calls-last_present)/seconds;else text<<"unknown(Present not identified)";
            text<<" process-CPU="<<std::fixed<<std::setprecision(0)<<process_percent<<"%-of-one-core ("<<std::setprecision(1)<<process_percent/double(info.dwNumberOfProcessors)<<"% of "<<info.dwNumberOfProcessors<<" logical processors)"
                <<" main-thread-CPU="<<std::setprecision(0)<<thread_percent<<"%\n"<<memory_report()<<"\n";
            uint64_t total_calls=0;std::vector<std::pair<uint64_t,unsigned>> top;
            const unsigned used=std::min<uint32_t>(light_next.load(),light_slots);
            for(unsigned i=1;i<used;++i){const uint64_t value=light_counts[i].load(std::memory_order_relaxed),delta=value-last_counts[i];last_counts[i]=value;total_calls+=delta;if(delta)top.push_back({delta,i});}
            std::sort(top.rbegin(),top.rend());
            uint64_t total_ticks=0;std::vector<std::pair<uint64_t,unsigned>> slow;
            for(unsigned i=1;i<used;++i){const uint64_t value=light_ticks[i].load(std::memory_order_relaxed),delta=value-last_ticks[i];last_ticks[i]=value;total_ticks+=delta;if(delta)slow.push_back({delta,i});}
            std::sort(slow.rbegin(),slow.rend());
            {
                std::lock_guard lock(profile_mutex);
                const double outside=100.0*double(profile_native_samples)/double(std::max<uint64_t>(profile_sample_total,1));
                text<<"PROFILE window="<<std::fixed<<std::setprecision(1)<<seconds<<"s main-thread-instructions/s="<<double(instructions-last_instructions)/seconds/1e6<<"M native-calls/s="<<double(total_calls)/seconds
                    <<" main-thread-time-outside-translated-code="<<outside<<"% (dispatch + Windows)";
                for(size_t i=0;i<top.size()&&i<14;++i){
                    const uint32_t slot_target=light_targets[top[i].second];
                    const char* method=d3d9_method_name(light_device,slot_target);
                    std::string object_method;if(!method)object_method=d3d9_object_method_name(slot_target);
                    text<<"\nPROFILE   "<<(method?std::string("IDirect3DDevice9::")+method:!object_method.empty()?object_method:light_labels[top[i].second])<<" calls/s="<<double(top[i].first)/seconds<<" per-frame="
                        <<(light_present.load()&&present_calls>last_present?double(top[i].first)/double(present_calls-last_present):0.0);
                }
                text<<"\nPROFILE   time inside Windows/Direct3D calls: "<<std::setprecision(1)<<1000.0*double(total_ticks)/double(frequency)/seconds<<" ms per second of wall time ("<<100.0*double(total_ticks)/double(frequency)/seconds<<"% of one thread); per frame:";
                for(size_t i=0;i<slow.size()&&i<12;++i){
                    const uint32_t slot_target=light_targets[slow[i].second];
                    const char* method=d3d9_method_name(light_device,slot_target);
                    std::string object_method;if(!method)object_method=d3d9_object_method_name(slot_target);
                    text<<"\nPROFILE     "<<(method?std::string("IDirect3DDevice9::")+method:!object_method.empty()?object_method:light_labels[slow[i].second])<<" "<<std::setprecision(2)
                        <<(present_calls>last_present?1000.0*double(slow[i].first)/double(frequency)/double(present_calls-last_present):0.0)<<" ms/frame ("<<std::setprecision(1)<<100.0*double(slow[i].first)/double(frequency)/seconds<<"% of wall time)";
                }
                std::vector<std::pair<uint64_t,uint32_t>> hot;
                for(const auto& entry:profile_samples)hot.push_back({entry.second,entry.first});
                std::sort(hot.rbegin(),hot.rend());
                text<<"\nPROFILE   main-thread samples="<<profile_sample_total<<" hottest 256-byte blocks at page exits:";
                for(size_t i=0;i<hot.size()&&i<10;++i)text<<"\nPROFILE     0x"<<std::hex<<hot[i].second<<std::dec<<" "<<100.0*double(hot[i].first)/double(std::max<uint64_t>(profile_sample_total,1))<<"%";
                profile_samples.clear();profile_sample_total=profile_native_samples=0;
            }
            {
                std::lock_guard lock(profile_mutex);
                for(auto& thread:profile_threads){
                    if(!thread->samples && thread->alive==false)continue;
                    const uint64_t cpu_now=thread_cpu_100ns(thread->handle);
                    const double cpu_percent=100.0*double(cpu_now-thread->last_cpu)/1e7/seconds;thread->last_cpu=cpu_now;
                    if(cpu_percent<1.0 && thread->samples==0)continue;
                    text<<"\nPROFILE   thread "<<thread->id<<(thread->entry?" entry=0x":" (main)")<<std::hex;if(thread->entry)text<<thread->entry;text<<std::dec
                        <<(thread->alive?"":" (ended)")<<": cpu="<<std::fixed<<std::setprecision(0)<<cpu_percent<<"% in-translated-code="<<(thread->samples?100.0*double(thread->samples-thread->outside)/double(thread->samples):0.0)<<"%";
                    std::vector<std::pair<uint64_t,std::string>> waits;for(const auto& w:thread->waits)waits.push_back({w.second,w.first});std::sort(waits.rbegin(),waits.rend());
                    for(size_t i=0;i<waits.size()&&i<3;++i)text<<" in["<<waits[i].second<<"]="<<100.0*double(waits[i].first)/double(std::max<uint64_t>(thread->samples,1))<<"%";
                    std::vector<std::pair<uint64_t,uint32_t>> blocks;for(const auto& b:thread->blocks)blocks.push_back({b.second,b.first});std::sort(blocks.rbegin(),blocks.rend());
                    for(size_t i=0;i<blocks.size()&&i<3;++i)text<<" 0x"<<std::hex<<blocks[i].second<<std::dec<<"="<<100.0*double(blocks[i].first)/double(std::max<uint64_t>(thread->samples,1))<<"%";
                    thread->blocks.clear();thread->waits.clear();thread->samples=thread->outside=0;
                }
                profile_threads.erase(std::remove_if(profile_threads.begin(),profile_threads.end(),[](const std::unique_ptr<ThreadProfile>& t){return !t->alive && !t->samples;}),profile_threads.end());
            }
            {
                // Main-thread instruction pointer samples by module, and the hottest 256-byte blocks of the launcher image itself (resolved with nfsu2_launcher.map).
                std::map<std::string,uint64_t> modules;std::unordered_map<uint32_t,uint64_t> exe_blocks;std::unordered_map<uint32_t,std::string> region_names;
                const uint32_t exe_base=uint32_t(uintptr_t(GetModuleHandleA(nullptr)));
                // The module of an address (cached per 64 KiB).
                auto module_of=[&](uint32_t address)->const std::string&{
                    auto found=region_names.find(address>>16);
                    if(found==region_names.end()){
                        std::string name="(outside any module)";HMODULE module=nullptr;
                        if(GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,reinterpret_cast<LPCSTR>(uintptr_t(address)),&module)){
                            char file[MAX_PATH]="?";GetModuleFileNameA(module,file,MAX_PATH);const char* slash=std::strrchr(file,'\\');name=slash?slash+1:file;
                        }
                        found=region_names.emplace(address>>16,name).first;
                    }
                    return found->second;
                };
                // Does this stack word look like the return address of a CALL (E8 rel32, or FF /2 in its short and long forms)?
                auto after_call=[&](uint32_t word)->bool{
                    const uint8_t* p=reinterpret_cast<const uint8_t*>(uintptr_t(word));
                    return p[-5]==0xE8 || (p[-2]==0xFF && (p[-1]&0x38)==0x10) || (p[-3]==0xFF && (p[-2]&0x38)==0x10) || (p[-6]==0xFF && (p[-5]&0x38)==0x10);
                };
                std::map<std::string,uint64_t> callers;   // "module <- caller" for samples outside the launcher's own code
                std::map<std::string,uint64_t> module_offsets;   // "module+offset" (16-byte buckets) for the same samples
                for(const auto& sample:eip_samples){
                    const uint32_t eip=sample.eip;
                    if(!(module_of(eip).find(".exe")!=std::string::npos)){
                        {
                            HMODULE module=nullptr;
                            if(GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,reinterpret_cast<LPCSTR>(uintptr_t(eip)),&module)){
                                char text_[96];std::snprintf(text_,sizeof(text_),"%s+0x%x",module_of(eip).c_str(),unsigned((eip-uint32_t(uintptr_t(module)))&~0xfu));++module_offsets[text_];
                            }
                        }
                        for(uint32_t i=0;i<sample.words;++i){
                            const uint32_t word=sample.stack[i];
                            if(word>=image_base+8 && word<image_base+image_size && after_call(word)){
                                char text_[64];std::snprintf(text_,sizeof(text_),"%s <- game code, call site 0x%x",module_of(eip).c_str(),word);++callers[text_];break;
                            }
                            if(word>exe_base+0x1000 && module_of(word).find(".exe")!=std::string::npos && after_call(word)){
                                char text_[64];std::snprintf(text_,sizeof(text_),"%s <- launcher code, RVA 0x%x",module_of(eip).c_str(),word-exe_base);++callers[text_];break;
                            }
                        }
                    }
                    auto found=region_names.find(eip>>16);
                    if(found==region_names.end()){
                        std::string name="(outside any module)";HMODULE module=nullptr;
                        if(GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,reinterpret_cast<LPCSTR>(uintptr_t(eip)),&module)){
                            char file[MAX_PATH]="?";GetModuleFileNameA(module,file,MAX_PATH);const char* slash=std::strrchr(file,'\\');name=slash?slash+1:file;
                        }
                        found=region_names.emplace(eip>>16,name).first;
                    }
                    ++modules[found->second];
                    if(uint32_t(eip-exe_base)<0x4000000u && found->second.find(".exe")!=std::string::npos)++exe_blocks[(eip-exe_base)>>8];
                }
                std::vector<std::pair<uint64_t,std::string>> ranked_modules;for(const auto& m:modules)ranked_modules.push_back({m.second,m.first});std::sort(ranked_modules.rbegin(),ranked_modules.rend());
                const double total_eip=double(std::max<size_t>(eip_samples.size(),1));
                text<<"\nPROFILE   main-thread instruction pointer, "<<eip_samples.size()<<" samples, by module:";
                for(size_t i=0;i<ranked_modules.size()&&i<8;++i)text<<" "<<ranked_modules[i].second<<"="<<std::fixed<<std::setprecision(1)<<100.0*double(ranked_modules[i].first)/total_eip<<"%";
                std::vector<std::pair<uint64_t,uint32_t>> ranked_blocks;for(const auto& b:exe_blocks)ranked_blocks.push_back({b.second,b.first});std::sort(ranked_blocks.rbegin(),ranked_blocks.rend());
                text<<"\nPROFILE   hottest 256-byte blocks of the launcher image (RVA):";
                for(size_t i=0;i<ranked_blocks.size()&&i<250;++i)text<<" 0x"<<std::hex<<(ranked_blocks[i].second<<8)<<std::dec<<"="<<std::setprecision(1)<<100.0*double(ranked_blocks[i].first)/total_eip<<"%";
                std::vector<std::pair<uint64_t,std::string>> ranked_callers;for(const auto& k:callers)ranked_callers.push_back({k.second,k.first});std::sort(ranked_callers.rbegin(),ranked_callers.rend());
                std::vector<std::pair<uint64_t,std::string>> ranked_offsets;for(const auto& k:module_offsets)ranked_offsets.push_back({k.second,k.first});std::sort(ranked_offsets.rbegin(),ranked_offsets.rend());
                text<<"\nPROFILE   hottest places outside the launcher's own code:";
                for(size_t i=0;i<ranked_offsets.size()&&i<14;++i)text<<" "<<ranked_offsets[i].second<<"="<<std::setprecision(1)<<100.0*double(ranked_offsets[i].first)/total_eip<<"%";
                text<<"\nPROFILE   time outside the launcher's own code, by who called (module <- caller):";
                for(size_t i=0;i<ranked_callers.size()&&i<24;++i)text<<"\nPROFILE     "<<std::setprecision(1)<<100.0*double(ranked_callers[i].first)/total_eip<<"% "<<ranked_callers[i].second;
                eip_samples.clear();
            }
            text<<"\nPROFILE   state cache: hits="<<state_cache_hits.load()<<" misses="<<state_cache_misses.load()<<(state_cache_disabled.load()?" (disabled: state blocks in use)":"");
            record(text.str());
            { char mode[16]; if(GetEnvironmentVariableA("NFSU2_PROFILE",mode,sizeof(mode)) && !std::strcmp(mode,"stderr")){const std::string line=text.str()+"\n";std::fputs(line.c_str(),stderr);} }
            window_start=now;last_instructions=instructions;last_process=process_cpu;last_thread=thread_cpu;last_present=present_calls;
        }
        if(main_handle)CloseHandle(main_handle);
        if(context_handle)CloseHandle(context_handle);
    });
    std::filesystem::current_path(assets);record("native32 static translation; original image mapped PAGE_READWRITE, never executable");
    record("TRACE MODE: first call/result per native target and guest return site; ordinary output capped at 4 MiB");
    try{execute(main_cpu,0xdead0000,budget);}catch(const std::exception& e){
        std::ostringstream s;s<<"STOP "<<e.what()<<" instructions="<<main_cpu.instructions<<" PC=0x"<<std::hex<<main_cpu.pc;
        for(auto [name,offset]:{std::pair{"EAX",0},std::pair{"ECX",4},std::pair{"EDX",8},std::pair{"ESI",24},std::pair{"EDI",28},std::pair{"ESP",16}})s<<" "<<name<<"=0x"<<uint32_t(r<4>(main_cpu,offset));
        s<<" last-page-entry=0x"<<last_page_entry<<" last-native="<<last_native_name;record(s.str());throw;
    }
}
}
