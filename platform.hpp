#pragma once
#include "runtime.hpp"
#include <filesystem>
#include <fstream>
#include <map>

namespace nfsu2raw {
// The platform boundary never treats a guest VA as a host code pointer.
class Platform {
public:
    Platform(Cpu& cpu,const std::filesystem::path& exports,const std::filesystem::path& assets);
    ~Platform();
    bool dispatch_import();
    void run(uint64_t budget,const std::filesystem::path& trace);
private:
    Cpu& c;
    std::filesystem::path assets;
    std::ofstream trace;
    uint32_t heap_cursor=0x10000000, last_error=0;
    struct Allocation{uint32_t size,capacity,heap;};
    std::map<uint32_t,Allocation> allocations;
    std::multimap<uint32_t,uint32_t> free_blocks;
    std::map<uint32_t,uint64_t> heap_limits{{0xe0000001,0}};
    uint32_t heap_next=0xe0000002;
    std::map<uint32_t,uintptr_t> modules;
    std::map<uint32_t,uintptr_t> handles;
    std::map<uint32_t,uintptr_t> critical_sections;
    std::vector<std::pair<std::string,std::string>> dynamic_imports;
    uint32_t handle_next=0xd0000000;
    std::map<uint32_t,uint32_t> tls;
    uint32_t tls_next=0;
    uint32_t exception_filter=0;
    uint32_t arg(unsigned i);
    void result(uint32_t value,unsigned argument_count);
    uint32_t allocate(uint32_t size,uint32_t heap=0xe0000001,bool zero=true);
    bool release(uint32_t address,uint32_t heap);
    std::string string(uint32_t address);
    uint32_t handle(uintptr_t native);
    uintptr_t native_handle(uint32_t guest);
};
}
