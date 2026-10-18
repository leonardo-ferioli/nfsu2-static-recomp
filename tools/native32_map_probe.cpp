#include <windows.h>
#include <cstdio>
int main(){MEMORY_BASIC_INFORMATION m{};VirtualQuery((void*)0x400000,&m,sizeof(m));printf("module=%p region=%p size=%lx state=%lx type=%lx\n",GetModuleHandle(0),m.BaseAddress,(unsigned long)m.RegionSize,m.State,m.Type);void* p=VirtualAlloc((void*)0x400000,0x532000,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);printf("map=%p error=%lu\n",p,GetLastError());}
