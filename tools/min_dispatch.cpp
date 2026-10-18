// Small semantic probe used before the complete artifact finishes linking.
#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_43d(Cpu&);
uint32_t page_575(Cpu&);
uint32_t dispatch(Cpu& c){switch(c.pc>>12){
 case 0x43d:return page_43d(c);
 case 0x575:return page_575(c);
 default:missing_instruction(c.pc);
}}
const char* user_name(unsigned){return "probe unresolved userop";}
}
