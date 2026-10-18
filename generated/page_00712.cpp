#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_712(Cpu& c){switch(c.pc){
case 0x712001:{ // JNC 0x00712f33
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x712f33;}
return 0x712007;}
case 0x712007:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71200a;}
case 0x71200a:{ // SHL EAX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),u<4>(c,0x9c000)));
wu<1>(c,0x4c600,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<4>(c,0x4c700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x9c000),0x1ull));
wu<4>(c,0x4c800,eval<Op::INT_LEFT,4,4,4>(u<4>(c,0x9c100),u<4>(c,0x4c700)));
wu<1>(c,0x4c900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x4c800),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4c900)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4ca00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x1ull));
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71200d;}
case 0x71200d:{ // MOV dword ptr [EBP + -0x34],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712010;}
case 0x712010:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712013;}
case 0x712013:{ // MOV dword ptr [EBP + -0x30],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712016;}
case 0x712016:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712019;}
case 0x712019:{ // SHL ECX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x4),u<4>(c,0x9c000)));
wu<1>(c,0x4c600,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<4>(c,0x4c700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x9c000),0x1ull));
wu<4>(c,0x4c800,eval<Op::INT_LEFT,4,4,4>(u<4>(c,0x9c100),u<4>(c,0x4c700)));
wu<1>(c,0x4c900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x4c800),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4c900)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4ca00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x1ull));
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71201c;}
case 0x71201c:{ // MOV dword ptr [EBP + -0x2c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71201f;}
case 0x71201f:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712021;}
case 0x712021:{ // MOV dword ptr [EBP + -0x38],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712024;}
case 0x712024:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712027;}
case 0x712027:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71202a;}
case 0x71202a:{ // MOV EAX,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71202d;}
case 0x71202d:{ // MOV dword ptr [EBP + -0x40],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712030;}
case 0x712030:{ // MOV EAX,dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712033;}
case 0x712033:{ // MOV dword ptr [EBP + -0x3c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712036;}
case 0x712036:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712037;}
case 0x712037:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712038;}
case 0x712038:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712039;}
case 0x712039:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71203a;}
case 0x71203a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71203b;}
case 0x71203b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71203c;}
case 0x71203c:{ // MOV EAX,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71203f;}
case 0x71203f:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712041;}
case 0x712041:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712044;}
case 0x712044:{ // MOVD MM5,EAX
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x712047;}
case 0x712047:{ // MOV EAX,dword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71204a;}
case 0x71204a:{ // PUNPCKLWD MM5,MM5
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71204d;}
case 0x71204d:{ // LEA ESI,[EBP + 0xfffffe20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe20ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x712053;}
case 0x712053:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x712056;}
case 0x712056:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712058;}
case 0x712058:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71205b;}
case 0x71205b:{ // PADDW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x71205e;}
case 0x71205e:{ // PADDW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x712061;}
case 0x712061:{ // PACKUSWB MM5,MM5
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712064;}
case 0x712064:{ // MOVQ qword ptr [EBP + -0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712068;}
case 0x712068:{ // PSRAW MM6,0x2
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x2ull}));
return 0x71206c;}
case 0x71206c:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x71206f;}
case 0x71206f:{ // LEA EDI,[EBP + 0xfffffea0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffea0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x712075;}
case 0x712075:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x712078;}
case 0x712078:{ // PSUBB MM6,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1160,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1160),u<1>(c,0x131500)));
wr<1>(c,0x1161,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1161),u<1>(c,0x131501)));
wr<1>(c,0x1162,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1162),u<1>(c,0x131502)));
wr<1>(c,0x1163,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1163),u<1>(c,0x131503)));
wr<1>(c,0x1164,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1164),u<1>(c,0x131504)));
wr<1>(c,0x1165,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1165),u<1>(c,0x131505)));
wr<1>(c,0x1166,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1166),u<1>(c,0x131506)));
wr<1>(c,0x1167,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1167),u<1>(c,0x131507)));
return 0x71207f;}
case 0x71207f:{ // LEA EAX,[EAX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x712082;}
case 0x712082:{ // MOVQ MM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712086;}
case 0x712086:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712089;}
case 0x712089:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71208c;}
case 0x71208c:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71208f;}
case 0x71208f:{ // MOVQ qword ptr [EBP + 0xffffff60],MM6
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712096;}
case 0x712096:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712099;}
case 0x712099:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71209c;}
case 0x71209c:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71209f;}
case 0x71209f:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7120a2;}
case 0x7120a2:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7120a5;}
case 0x7120a5:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7120a9;}
case 0x7120a9:{ // MOVQ MM0,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7120ad;}
case 0x7120ad:{ // PSUBUSB MM5,MM4
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x7120b0;}
case 0x7120b0:{ // PSUBUSB MM4,MM2
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x7120b3;}
case 0x7120b3:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7120b6;}
case 0x7120b6:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x7120b9;}
case 0x7120b9:{ // MOVQ qword ptr [EDI + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7120bd;}
case 0x7120bd:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7120c0;}
case 0x7120c0:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7120c3;}
case 0x7120c3:{ // MOVQ qword ptr [EDI + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7120c7;}
case 0x7120c7:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7120ca;}
case 0x7120ca:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7120cd;}
case 0x7120cd:{ // MOVQ qword ptr [EDI + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7120d1;}
case 0x7120d1:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7120d5;}
case 0x7120d5:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7120d8;}
case 0x7120d8:{ // PSUBUSB MM5,MM6
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x7120db;}
case 0x7120db:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x7120de;}
case 0x7120de:{ // POR MM5,MM6
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1160)));
return 0x7120e1;}
case 0x7120e1:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7120e4;}
case 0x7120e4:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7120e7;}
case 0x7120e7:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7120ea;}
case 0x7120ea:{ // MOVQ qword ptr [EDI + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7120ee;}
case 0x7120ee:{ // PADDUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x7120f1;}
case 0x7120f1:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7120f4;}
case 0x7120f4:{ // PSUBUSB MM5,MM6
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x7120f7;}
case 0x7120f7:{ // PSUBUSB MM6,MM2
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7120fa;}
case 0x7120fa:{ // POR MM5,MM6
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1160)));
return 0x7120fd;}
case 0x7120fd:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x712100;}
case 0x712100:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712103;}
case 0x712103:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x712106;}
case 0x712106:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712109;}
case 0x712109:{ // MOVQ MM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71210d;}
case 0x71210d:{ // MOVQ qword ptr [EDI + 0x30],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712111;}
case 0x712111:{ // PADDUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x712114;}
case 0x712114:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712117;}
case 0x712117:{ // MOVQ qword ptr [EDI + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71211b;}
case 0x71211b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71211e;}
case 0x71211e:{ // PSUBUSB MM5,MM6
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x712121;}
case 0x712121:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x712124;}
case 0x712124:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712127;}
case 0x712127:{ // POR MM5,MM6
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1160)));
return 0x71212a;}
case 0x71212a:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71212e;}
case 0x71212e:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712131;}
case 0x712131:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712134;}
case 0x712134:{ // MOVQ qword ptr [EDI + 0x48],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712138;}
case 0x712138:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71213b;}
case 0x71213b:{ // PADDUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71213e;}
case 0x71213e:{ // MOVQ qword ptr [EBP + -0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712142;}
case 0x712142:{ // MOVQ MM5,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712149;}
case 0x712149:{ // PSUBB MM4,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1140,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1140),u<1>(c,0x131500)));
wr<1>(c,0x1141,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1141),u<1>(c,0x131501)));
wr<1>(c,0x1142,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1142),u<1>(c,0x131502)));
wr<1>(c,0x1143,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1143),u<1>(c,0x131503)));
wr<1>(c,0x1144,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1144),u<1>(c,0x131504)));
wr<1>(c,0x1145,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1145),u<1>(c,0x131505)));
wr<1>(c,0x1146,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1146),u<1>(c,0x131506)));
wr<1>(c,0x1147,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1147),u<1>(c,0x131507)));
return 0x712150;}
case 0x712150:{ // PCMPGTB MM5,MM4
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1140),r<1>(c,0x1150)));
wr<1>(c,0x1150,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1141),r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1142),r<1>(c,0x1152)));
wr<1>(c,0x1152,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1143),r<1>(c,0x1153)));
wr<1>(c,0x1153,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1144),r<1>(c,0x1154)));
wr<1>(c,0x1154,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1145),r<1>(c,0x1155)));
wr<1>(c,0x1155,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1146),r<1>(c,0x1156)));
wr<1>(c,0x1156,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1147),r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x712153;}
case 0x712153:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712156;}
case 0x712156:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712159;}
case 0x712159:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71215c;}
case 0x71215c:{ // MOVQ qword ptr [EDI + 0x50],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712160;}
case 0x712160:{ // PSUBUSB MM4,MM6
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x712163;}
case 0x712163:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x712166;}
case 0x712166:{ // MOVQ MM0,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71216a;}
case 0x71216a:{ // MOVQ MM3,qword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71216e;}
case 0x71216e:{ // POR MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x712171;}
case 0x712171:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712174;}
case 0x712174:{ // PSUBB MM3,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1130,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1130),u<1>(c,0x131500)));
wr<1>(c,0x1131,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1131),u<1>(c,0x131501)));
wr<1>(c,0x1132,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1132),u<1>(c,0x131502)));
wr<1>(c,0x1133,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1133),u<1>(c,0x131503)));
wr<1>(c,0x1134,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1134),u<1>(c,0x131504)));
wr<1>(c,0x1135,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1135),u<1>(c,0x131505)));
wr<1>(c,0x1136,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1136),u<1>(c,0x131506)));
wr<1>(c,0x1137,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1137),u<1>(c,0x131507)));
return 0x71217b;}
case 0x71217b:{ // PSUBB MM4,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1140,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1140),u<1>(c,0x131500)));
wr<1>(c,0x1141,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1141),u<1>(c,0x131501)));
wr<1>(c,0x1142,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1142),u<1>(c,0x131502)));
wr<1>(c,0x1143,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1143),u<1>(c,0x131503)));
wr<1>(c,0x1144,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1144),u<1>(c,0x131504)));
wr<1>(c,0x1145,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1145),u<1>(c,0x131505)));
wr<1>(c,0x1146,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1146),u<1>(c,0x131506)));
wr<1>(c,0x1147,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1147),u<1>(c,0x131507)));
return 0x712182;}
case 0x712182:{ // PCMPGTB MM3,MM4
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1140),r<1>(c,0x1130)));
wr<1>(c,0x1130,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1141),r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1142),r<1>(c,0x1132)));
wr<1>(c,0x1132,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1143),r<1>(c,0x1133)));
wr<1>(c,0x1133,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1144),r<1>(c,0x1134)));
wr<1>(c,0x1134,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1145),r<1>(c,0x1135)));
wr<1>(c,0x1135,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1146),r<1>(c,0x1136)));
wr<1>(c,0x1136,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1147),r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x712185;}
case 0x712185:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712188;}
case 0x712188:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71218b;}
case 0x71218b:{ // PAND MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71218e;}
case 0x71218e:{ // MOVQ qword ptr [EDI + 0x58],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712192;}
case 0x712192:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712195;}
case 0x712195:{ // PSUBUSB MM4,MM6
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x712198;}
case 0x712198:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71219b;}
case 0x71219b:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71219e;}
case 0x71219e:{ // MOVQ qword ptr [EDI + 0x60],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7121a2;}
case 0x7121a2:{ // POR MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x7121a5;}
case 0x7121a5:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7121a9;}
case 0x7121a9:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7121ac;}
case 0x7121ac:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7121af;}
case 0x7121af:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7121b2;}
case 0x7121b2:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7121b5;}
case 0x7121b5:{ // MOVQ qword ptr [EDI + 0x68],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7121b9;}
case 0x7121b9:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7121bc;}
case 0x7121bc:{ // MOVQ MM1,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7121c0;}
case 0x7121c0:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7121c3;}
case 0x7121c3:{ // PSUBUSB MM3,MM6
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x7121c6;}
case 0x7121c6:{ // PSUBUSB MM6,MM0
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x7121c9;}
case 0x7121c9:{ // POR MM3,MM6
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1160)));
return 0x7121cc;}
case 0x7121cc:{ // MOVQ qword ptr [EDI + 0x70],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7121d0;}
case 0x7121d0:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7121d3;}
case 0x7121d3:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7121d6;}
case 0x7121d6:{ // PADDUSB MM4,MM3
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x7121d9;}
case 0x7121d9:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7121dc;}
case 0x7121dc:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7121df;}
case 0x7121df:{ // MOVQ qword ptr [EDI + 0x78],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7121e3;}
case 0x7121e3:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7121e6;}
case 0x7121e6:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7121e9;}
case 0x7121e9:{ // PSUBUSB MM3,MM6
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x7121ec;}
case 0x7121ec:{ // PSUBUSB MM6,MM2
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7121ef;}
case 0x7121ef:{ // POR MM3,MM6
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1160)));
return 0x7121f2;}
case 0x7121f2:{ // MOVQ qword ptr [EDI + 0x80],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7121f9;}
case 0x7121f9:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7121fc;}
case 0x7121fc:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7121ff;}
case 0x7121ff:{ // PADDUSB MM4,MM3
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x712202;}
case 0x712202:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712205;}
case 0x712205:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712208;}
case 0x712208:{ // MOVQ qword ptr [EDI + 0x88],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71220f;}
case 0x71220f:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712212;}
case 0x712212:{ // PSUBUSB MM3,MM6
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x712215;}
case 0x712215:{ // MOVQ qword ptr [EDI + 0x90],MM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71221c;}
case 0x71221c:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71221f;}
case 0x71221f:{ // POR MM3,MM6
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1160)));
return 0x712222;}
case 0x712222:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712225;}
case 0x712225:{ // PADDUSB MM4,MM3
wr<8>(c,0x1140,user_op(c,524431,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x712228;}
case 0x712228:{ // MOVQ qword ptr [EBP + -0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71222c;}
case 0x71222c:{ // MOVQ MM6,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712233;}
case 0x712233:{ // PSUBB MM4,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1140,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1140),u<1>(c,0x131500)));
wr<1>(c,0x1141,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1141),u<1>(c,0x131501)));
wr<1>(c,0x1142,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1142),u<1>(c,0x131502)));
wr<1>(c,0x1143,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1143),u<1>(c,0x131503)));
wr<1>(c,0x1144,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1144),u<1>(c,0x131504)));
wr<1>(c,0x1145,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1145),u<1>(c,0x131505)));
wr<1>(c,0x1146,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1146),u<1>(c,0x131506)));
wr<1>(c,0x1147,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1147),u<1>(c,0x131507)));
return 0x71223a;}
case 0x71223a:{ // MOVQ qword ptr [EDI + 0x98],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x98ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712241;}
case 0x712241:{ // PCMPGTB MM6,MM4
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1140),r<1>(c,0x1160)));
wr<1>(c,0x1160,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1141),r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1142),r<1>(c,0x1162)));
wr<1>(c,0x1162,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1143),r<1>(c,0x1163)));
wr<1>(c,0x1163,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1144),r<1>(c,0x1164)));
wr<1>(c,0x1164,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1145),r<1>(c,0x1165)));
wr<1>(c,0x1165,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1146),r<1>(c,0x1166)));
wr<1>(c,0x1166,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1147),r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x712244;}
case 0x712244:{ // PAND MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x712247;}
case 0x712247:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71224a;}
case 0x71224a:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71224d;}
case 0x71224d:{ // PUNPCKHBW MM0,MM6
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
return 0x712250;}
case 0x712250:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x712253;}
case 0x712253:{ // MOVQ MM1,qword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712257;}
case 0x712257:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71225b;}
case 0x71225b:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71225f;}
case 0x71225f:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712263;}
case 0x712263:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712267;}
case 0x712267:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x71226a;}
case 0x71226a:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71226d;}
case 0x71226d:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712270;}
case 0x712270:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712273;}
case 0x712273:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71227a;}
case 0x71227a:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x71227d;}
case 0x71227d:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x712280;}
case 0x712280:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x712284;}
case 0x712284:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712287;}
case 0x712287:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x71228b;}
case 0x71228b:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x71228e;}
case 0x71228e:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x712291;}
case 0x712291:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x712298;}
case 0x712298:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71229b;}
case 0x71229b:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71229e;}
case 0x71229e:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7122a1;}
case 0x7122a1:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x7122a5;}
case 0x7122a5:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x7122a8;}
case 0x7122a8:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7122ab;}
case 0x7122ab:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x7122ae;}
case 0x7122ae:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7122b1;}
case 0x7122b1:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7122b5;}
case 0x7122b5:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7122b9;}
case 0x7122b9:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x7122bc;}
case 0x7122bc:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x7122bf;}
case 0x7122bf:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x7122c2;}
case 0x7122c2:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x7122c5;}
case 0x7122c5:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x7122c8;}
case 0x7122c8:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7122cb;}
case 0x7122cb:{ // MOVQ qword ptr [EBP + 0xffffff70],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7122d2;}
case 0x7122d2:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7122d5;}
case 0x7122d5:{ // MOVQ qword ptr [EBP + 0xffffff50],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7122dc;}
case 0x7122dc:{ // MOVQ MM3,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7122df;}
case 0x7122df:{ // MOVQ MM2,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7122e6;}
case 0x7122e6:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7122e9;}
case 0x7122e9:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x7122ec;}
case 0x7122ec:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7122f0;}
case 0x7122f0:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7122f3;}
case 0x7122f3:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7122f7;}
case 0x7122f7:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7122fb;}
case 0x7122fb:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7122ff;}
case 0x7122ff:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x712306;}
case 0x712306:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x712309;}
case 0x712309:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71230c;}
case 0x71230c:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712310;}
case 0x712310:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712313;}
case 0x712313:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712317;}
case 0x712317:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71231a;}
case 0x71231a:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71231d;}
case 0x71231d:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712320;}
case 0x712320:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x712323;}
case 0x712323:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712327;}
case 0x712327:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71232a;}
case 0x71232a:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71232e;}
case 0x71232e:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712331;}
case 0x712331:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712334;}
case 0x712334:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712338;}
case 0x712338:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71233b;}
case 0x71233b:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71233e;}
case 0x71233e:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712341;}
case 0x712341:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712345;}
case 0x712345:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712349;}
case 0x712349:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71234c;}
case 0x71234c:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712350;}
case 0x712350:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712353;}
case 0x712353:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712356;}
case 0x712356:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x71235a;}
case 0x71235a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71235d;}
case 0x71235d:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712360;}
case 0x712360:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712363;}
case 0x712363:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712367;}
case 0x712367:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71236b;}
case 0x71236b:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71236e;}
case 0x71236e:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712372;}
case 0x712372:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712375;}
case 0x712375:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712378;}
case 0x712378:{ // MOVQ MM5,qword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71237f;}
case 0x71237f:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712383;}
case 0x712383:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712386;}
case 0x712386:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712389;}
case 0x712389:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71238c;}
case 0x71238c:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712390;}
case 0x712390:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712394;}
case 0x712394:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712398;}
case 0x712398:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71239f;}
case 0x71239f:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7123a2;}
case 0x7123a2:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7123a5;}
case 0x7123a5:{ // MOVQ MM5,qword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7123ac;}
case 0x7123ac:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7123b0;}
case 0x7123b0:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123b3;}
case 0x7123b3:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7123b6;}
case 0x7123b6:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123b9;}
case 0x7123b9:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7123bd;}
case 0x7123bd:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7123c1;}
case 0x7123c1:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7123c5;}
case 0x7123c5:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7123c8;}
case 0x7123c8:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7123cb;}
case 0x7123cb:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7123ce;}
case 0x7123ce:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7123d2;}
case 0x7123d2:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123d5;}
case 0x7123d5:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7123d8;}
case 0x7123d8:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123db;}
case 0x7123db:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7123df;}
case 0x7123df:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7123e3;}
case 0x7123e3:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7123e7;}
case 0x7123e7:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7123ea;}
case 0x7123ea:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7123ed;}
case 0x7123ed:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7123f0;}
case 0x7123f0:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7123f4;}
case 0x7123f4:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123f7;}
case 0x7123f7:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7123fa;}
case 0x7123fa:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7123fd;}
case 0x7123fd:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712401;}
case 0x712401:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712408;}
case 0x712408:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71240c;}
case 0x71240c:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71240f;}
case 0x71240f:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712412;}
case 0x712412:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712415;}
case 0x712415:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712419;}
case 0x712419:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71241c;}
case 0x71241c:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71241f;}
case 0x71241f:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712422;}
case 0x712422:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712426;}
case 0x712426:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712429;}
case 0x712429:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71242c;}
case 0x71242c:{ // MOVQ MM1,qword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712430;}
case 0x712430:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712434;}
case 0x712434:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712438;}
case 0x712438:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71243c;}
case 0x71243c:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712440;}
case 0x712440:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x712443;}
case 0x712443:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x712446;}
case 0x712446:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712449;}
case 0x712449:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712450;}
case 0x712450:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x712453;}
case 0x712453:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x712456;}
case 0x712456:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x712459;}
case 0x712459:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x71245d;}
case 0x71245d:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712460;}
case 0x712460:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x712464;}
case 0x712464:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x712467;}
case 0x712467:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x71246a;}
case 0x71246a:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x712471;}
case 0x712471:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712474;}
case 0x712474:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x712477;}
case 0x712477:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71247a;}
case 0x71247a:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x71247e;}
case 0x71247e:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x712481;}
case 0x712481:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x712484;}
case 0x712484:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x712487;}
case 0x712487:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71248a;}
case 0x71248a:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71248e;}
case 0x71248e:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712492;}
case 0x712492:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x712495;}
case 0x712495:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x712498;}
case 0x712498:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71249b;}
case 0x71249b:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x71249e;}
case 0x71249e:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x7124a1;}
case 0x7124a1:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7124a4;}
case 0x7124a4:{ // MOVQ qword ptr [EBP + 0xffffff70],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7124ab;}
case 0x7124ab:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7124ae;}
case 0x7124ae:{ // MOVQ qword ptr [EBP + 0xffffff50],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7124b5;}
case 0x7124b5:{ // MOVQ MM3,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7124b8;}
case 0x7124b8:{ // MOVQ MM2,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7124bf;}
case 0x7124bf:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7124c2;}
case 0x7124c2:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x7124c5;}
case 0x7124c5:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7124c9;}
case 0x7124c9:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7124cc;}
case 0x7124cc:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7124d0;}
case 0x7124d0:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7124d4;}
case 0x7124d4:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7124d8;}
case 0x7124d8:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7124df;}
case 0x7124df:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x7124e2;}
case 0x7124e2:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7124e5;}
case 0x7124e5:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7124e9;}
case 0x7124e9:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7124ec;}
case 0x7124ec:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7124f0;}
case 0x7124f0:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7124f3;}
case 0x7124f3:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7124f6;}
case 0x7124f6:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7124f9;}
case 0x7124f9:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x7124fc;}
case 0x7124fc:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712500;}
case 0x712500:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712503;}
case 0x712503:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712507;}
case 0x712507:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71250a;}
case 0x71250a:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71250d;}
case 0x71250d:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712511;}
case 0x712511:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712514;}
case 0x712514:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712517;}
case 0x712517:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71251a;}
case 0x71251a:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71251e;}
case 0x71251e:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712522;}
case 0x712522:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712525;}
case 0x712525:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712529;}
case 0x712529:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71252c;}
case 0x71252c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71252f;}
case 0x71252f:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712533;}
case 0x712533:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712536;}
case 0x712536:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712539;}
case 0x712539:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71253c;}
case 0x71253c:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712540;}
case 0x712540:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712544;}
case 0x712544:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712547;}
case 0x712547:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71254b;}
case 0x71254b:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71254e;}
case 0x71254e:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712551;}
case 0x712551:{ // MOVQ MM5,qword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712558;}
case 0x712558:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x71255c;}
case 0x71255c:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71255f;}
case 0x71255f:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712562;}
case 0x712562:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712565;}
case 0x712565:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712569;}
case 0x712569:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71256d;}
case 0x71256d:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712571;}
case 0x712571:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712578;}
case 0x712578:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71257b;}
case 0x71257b:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71257e;}
case 0x71257e:{ // MOVQ MM5,qword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712585;}
case 0x712585:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712589;}
case 0x712589:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71258c;}
case 0x71258c:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x71258f;}
case 0x71258f:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712592;}
case 0x712592:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712596;}
case 0x712596:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71259a;}
case 0x71259a:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71259e;}
case 0x71259e:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7125a1;}
case 0x7125a1:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7125a4;}
case 0x7125a4:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7125a7;}
case 0x7125a7:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7125ab;}
case 0x7125ab:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125ae;}
case 0x7125ae:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7125b1;}
case 0x7125b1:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125b4;}
case 0x7125b4:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7125b8;}
case 0x7125b8:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7125bc;}
case 0x7125bc:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7125c0;}
case 0x7125c0:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7125c3;}
case 0x7125c3:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7125c6;}
case 0x7125c6:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7125c9;}
case 0x7125c9:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7125cd;}
case 0x7125cd:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125d0;}
case 0x7125d0:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7125d3;}
case 0x7125d3:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125d6;}
case 0x7125d6:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7125da;}
case 0x7125da:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7125e1;}
case 0x7125e1:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7125e5;}
case 0x7125e5:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7125e8;}
case 0x7125e8:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7125eb;}
case 0x7125eb:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7125ee;}
case 0x7125ee:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x7125f2;}
case 0x7125f2:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125f5;}
case 0x7125f5:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7125f8;}
case 0x7125f8:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7125fb;}
case 0x7125fb:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7125ff;}
case 0x7125ff:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712602;}
case 0x712602:{ // SUB ESI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712605;}
case 0x712605:{ // MOV EBP,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712608;}
case 0x712608:{ // LEA EBP,[EBP + EDX*0x4]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x71260c;}
case 0x71260c:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71260f;}
case 0x71260f:{ // PACKUSWB MM0,qword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712613;}
case 0x712613:{ // MOVQ qword ptr [EBP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x14),u<8>(c,0xa400));
return 0x712617;}
case 0x712617:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71261b;}
case 0x71261b:{ // PACKUSWB MM1,qword ptr [ESI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x18ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71261f;}
case 0x71261f:{ // MOVQ qword ptr [EBP + ECX*0x1],MM1
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x712624;}
case 0x712624:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712628;}
case 0x712628:{ // PACKUSWB MM2,qword ptr [ESI + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x28ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71262c;}
case 0x71262c:{ // MOVQ qword ptr [EBP + ECX*0x2],MM2
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x712631;}
case 0x712631:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712635;}
case 0x712635:{ // PACKUSWB MM3,qword ptr [ESI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x38ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712639;}
case 0x712639:{ // LEA EBP,[EBP + ECX*0x4]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x71263d;}
case 0x71263d:{ // MOVQ qword ptr [EBP + EDX*0x1],MM3
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x712642;}
case 0x712642:{ // MOVQ MM0,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712646;}
case 0x712646:{ // PACKUSWB MM0,qword ptr [ESI + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x48ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71264a;}
case 0x71264a:{ // MOVQ qword ptr [EBP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x14),u<8>(c,0xa400));
return 0x71264e;}
case 0x71264e:{ // MOVQ MM1,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712652;}
case 0x712652:{ // PACKUSWB MM1,qword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712656;}
case 0x712656:{ // MOVQ qword ptr [EBP + ECX*0x1],MM1
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x71265b;}
case 0x71265b:{ // MOVQ MM2,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71265f;}
case 0x71265f:{ // PACKUSWB MM2,qword ptr [ESI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712663;}
case 0x712663:{ // MOVQ qword ptr [EBP + ECX*0x2],MM2
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x712668;}
case 0x712668:{ // MOVQ MM3,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71266c;}
case 0x71266c:{ // PACKUSWB MM3,qword ptr [ESI + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x78ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712670;}
case 0x712670:{ // LEA EBP,[EBP + ECX*0x2]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x712674;}
case 0x712674:{ // MOVQ qword ptr [EBP + ECX*0x1],MM3
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x712679;}
case 0x712679:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267a;}
case 0x71267a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267b;}
case 0x71267b:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267c;}
case 0x71267c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267d;}
case 0x71267d:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267e;}
case 0x71267e:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71267f;}
case 0x71267f:{ // MOV ECX,dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712682;}
case 0x712682:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712685;}
case 0x712685:{ // MOV ESI,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712688;}
case 0x712688:{ // MOVZX EDI,byte ptr [EBP + -0xa]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff6ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71268c;}
case 0x71268c:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x71268e;}
case 0x71268e:{ // SHL EAX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),u<4>(c,0x9c000)));
wu<1>(c,0x4c600,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<4>(c,0x4c700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x9c000),0x1ull));
wu<4>(c,0x4c800,eval<Op::INT_LEFT,4,4,4>(u<4>(c,0x9c100),u<4>(c,0x4c700)));
wu<1>(c,0x4c900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x4c800),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4c900)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4ca00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9c000),0x1ull));
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x712691;}
case 0x712691:{ // MOV dword ptr [EBP + -0x74],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff8cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712694;}
case 0x712694:{ // ADD EAX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712696;}
case 0x712696:{ // MOVZX ESI,byte ptr [EBP + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71269a;}
case 0x71269a:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71269c;}
case 0x71269c:{ // MOVZX EDI,byte ptr [EBP + -0xb]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff5ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126a0;}
case 0x7126a0:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126a2;}
case 0x7126a2:{ // MOVZX EDI,byte ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126a6;}
case 0x7126a6:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126a8;}
case 0x7126a8:{ // MOVZX EDI,byte ptr [EBP + -0xd]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff3ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126ac;}
case 0x7126ac:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126ae;}
case 0x7126ae:{ // MOVZX EDI,byte ptr [EBP + -0xe]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff2ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126b2;}
case 0x7126b2:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126b4;}
case 0x7126b4:{ // MOVZX EDI,byte ptr [EBP + -0xf]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126b8;}
case 0x7126b8:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126ba;}
case 0x7126ba:{ // MOVZX EDI,byte ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126be;}
case 0x7126be:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126c0;}
case 0x7126c0:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126c2;}
case 0x7126c2:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7126c5;}
case 0x7126c5:{ // MOV EDX,dword ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7126c8;}
case 0x7126c8:{ // MOVZX ESI,byte ptr [EBP + -0x1a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126cc;}
case 0x7126cc:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126ce;}
case 0x7126ce:{ // MOVZX EDX,byte ptr [EBP + -0x19]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126d2;}
case 0x7126d2:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126d4;}
case 0x7126d4:{ // MOVZX ESI,byte ptr [EBP + -0x1b]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe5ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126d8;}
case 0x7126d8:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126da;}
case 0x7126da:{ // MOVZX ESI,byte ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126de;}
case 0x7126de:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126e0;}
case 0x7126e0:{ // MOVZX ESI,byte ptr [EBP + -0x1d]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe3ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126e4;}
case 0x7126e4:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126e6;}
case 0x7126e6:{ // MOVZX ESI,byte ptr [EBP + -0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126ea;}
case 0x7126ea:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126ec;}
case 0x7126ec:{ // MOVZX ESI,byte ptr [EBP + -0x1f]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126f0;}
case 0x7126f0:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126f2;}
case 0x7126f2:{ // MOVZX ESI,byte ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x7126f6;}
case 0x7126f6:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126f8;}
case 0x7126f8:{ // ADD dword ptr [EAX],EDX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126fa;}
case 0x7126fa:{ // CMP ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7126fd;}
case 0x7126fd:{ // JNZ 0x00712708
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x712708;}
return 0x7126ff;}
case 0x7126ff:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712700;}
case 0x712700:{ // MOV dword ptr [EBP + -0x28],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712703;}
case 0x712703:{ // JMP 0x00712f14
return 0x712f14;
return 0x712708;}
case 0x712708:{ // MOV EAX,dword ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71270b;}
case 0x71270b:{ // MOV dword ptr [EBP + -0x3c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71270e;}
case 0x71270e:{ // MOV dword ptr [EBP + -0x40],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x712711;}
case 0x712711:{ // MOV EAX,dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712714;}
case 0x712714:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712716;}
case 0x712716:{ // MOVZX DX,byte ptr [EAX + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x71271b;}
case 0x71271b:{ // MOV word ptr [EBP + ECX*0x2 + 0xfffffea0],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffea0ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x712723;}
case 0x712723:{ // MOVZX DX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x712727;}
case 0x712727:{ // ADD EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71272a;}
case 0x71272a:{ // MOV word ptr [EBP + ECX*0x2 + 0xffffff30],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xffffff30ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x712732;}
case 0x712732:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712733;}
case 0x712733:{ // CMP ECX,0x8
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x8ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712736;}
case 0x712736:{ // JC 0x00712716
if(r<1>(c,0x200)){return 0x712716;}
return 0x712738;}
case 0x712738:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712739;}
case 0x712739:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71273a;}
case 0x71273a:{ // MOV EAX,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71273d;}
case 0x71273d:{ // MOVD MM0,EAX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x712740;}
case 0x712740:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712741;}
case 0x712741:{ // PUNPCKLWD MM0,MM0
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1100)));
return 0x712744;}
case 0x712744:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x712747;}
case 0x712747:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712748;}
case 0x712748:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71274b;}
case 0x71274b:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x71274e;}
case 0x71274e:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71274f;}
case 0x71274f:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x712752;}
case 0x712752:{ // PACKUSWB MM0,MM0
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712755;}
case 0x712755:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712756;}
case 0x712756:{ // MOVQ qword ptr [EBP + -0x50],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71275a;}
case 0x71275a:{ // PSRAW MM1,0x2
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x2ull}));
return 0x71275e;}
case 0x71275e:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712761;}
case 0x712761:{ // PSUBB MM1,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1110,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1110),u<1>(c,0x131500)));
wr<1>(c,0x1111,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1111),u<1>(c,0x131501)));
wr<1>(c,0x1112,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1112),u<1>(c,0x131502)));
wr<1>(c,0x1113,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1113),u<1>(c,0x131503)));
wr<1>(c,0x1114,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1114),u<1>(c,0x131504)));
wr<1>(c,0x1115,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1115),u<1>(c,0x131505)));
wr<1>(c,0x1116,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1116),u<1>(c,0x131506)));
wr<1>(c,0x1117,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1117),u<1>(c,0x131507)));
return 0x712768;}
case 0x712768:{ // MOVQ qword ptr [EBP + 0xffffff60],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71276f;}
case 0x71276f:{ // MOV EAX,dword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712772;}
case 0x712772:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712774;}
case 0x712774:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712777;}
case 0x712777:{ // LEA ESI,[EBP + 0xfffffe20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe20ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71277d;}
case 0x71277d:{ // LEA EDI,[EBP + 0xfffffea0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffea0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x712783;}
case 0x712783:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712786;}
case 0x712786:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712788;}
case 0x712788:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71278b;}
case 0x71278b:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71278f;}
case 0x71278f:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712793;}
case 0x712793:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x712796;}
case 0x712796:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71279a;}
case 0x71279a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71279d;}
case 0x71279d:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x7127a0;}
case 0x7127a0:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x7127a3;}
case 0x7127a3:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7127a6;}
case 0x7127a6:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x7127a9;}
case 0x7127a9:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x7127ac;}
case 0x7127ac:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7127af;}
case 0x7127af:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x7127b2;}
case 0x7127b2:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x7127b5;}
case 0x7127b5:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7127b8;}
case 0x7127b8:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x7127bb;}
case 0x7127bb:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x7127be;}
case 0x7127be:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x7127c1;}
case 0x7127c1:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7127c4;}
case 0x7127c4:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7127c7;}
case 0x7127c7:{ // MOVQ qword ptr [EDI + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127cb;}
case 0x7127cb:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7127ce;}
case 0x7127ce:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7127d1;}
case 0x7127d1:{ // MOVQ qword ptr [EDI + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127d5;}
case 0x7127d5:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7127d8;}
case 0x7127d8:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7127db;}
case 0x7127db:{ // MOVQ qword ptr [EDI + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127df;}
case 0x7127df:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7127e2;}
case 0x7127e2:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7127e5;}
case 0x7127e5:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127e9;}
case 0x7127e9:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7127ec;}
case 0x7127ec:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7127ef;}
case 0x7127ef:{ // MOVQ qword ptr [EDI + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127f3;}
case 0x7127f3:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7127f6;}
case 0x7127f6:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7127f9;}
case 0x7127f9:{ // MOVQ qword ptr [EDI + 0x60],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7127fd;}
case 0x7127fd:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712800;}
case 0x712800:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712804;}
case 0x712804:{ // MOVQ qword ptr [EDI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712808;}
case 0x712808:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71280c;}
case 0x71280c:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71280f;}
case 0x71280f:{ // MOVQ qword ptr [EDI + 0x80],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712816;}
case 0x712816:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712819;}
case 0x712819:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71281d;}
case 0x71281d:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x712820;}
case 0x712820:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x712823;}
case 0x712823:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x712826;}
case 0x712826:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x712829;}
case 0x712829:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x71282c;}
case 0x71282c:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71282f;}
case 0x71282f:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x712832;}
case 0x712832:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x712835;}
case 0x712835:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x712838;}
case 0x712838:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71283b;}
case 0x71283b:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71283e;}
case 0x71283e:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712841;}
case 0x712841:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712844;}
case 0x712844:{ // MOVQ qword ptr [EDI + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712848;}
case 0x712848:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71284b;}
case 0x71284b:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71284e;}
case 0x71284e:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712852;}
case 0x712852:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712855;}
case 0x712855:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712858;}
case 0x712858:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71285c;}
case 0x71285c:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71285f;}
case 0x71285f:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x712862;}
case 0x712862:{ // MOVQ qword ptr [EDI + 0x48],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712866;}
case 0x712866:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712869;}
case 0x712869:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71286c;}
case 0x71286c:{ // MOVQ qword ptr [EDI + 0x58],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712870;}
case 0x712870:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x712873;}
case 0x712873:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x712876;}
case 0x712876:{ // MOVQ qword ptr [EDI + 0x68],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71287a;}
case 0x71287a:{ // MOVQ qword ptr [EDI + 0x78],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71287e;}
case 0x71287e:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712885;}
case 0x712885:{ // MOVQ MM0,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712888;}
case 0x712888:{ // MOVQ MM1,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71288c;}
case 0x71288c:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712890;}
case 0x712890:{ // PACKUSWB MM0,qword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712894;}
case 0x712894:{ // PACKUSWB MM1,qword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712898;}
case 0x712898:{ // PACKUSWB MM2,qword ptr [EDI + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71289c;}
case 0x71289c:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7128a0;}
case 0x7128a0:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7128a4;}
case 0x7128a4:{ // PACKUSWB MM3,qword ptr [EDI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x7128a8;}
case 0x7128a8:{ // PACKUSWB MM4,qword ptr [EDI + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x7128ac;}
case 0x7128ac:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7128af;}
case 0x7128af:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7128b2;}
case 0x7128b2:{ // PSUBUSB MM5,MM0
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x7128b5;}
case 0x7128b5:{ // PSUBUSB MM0,MM1
wr<8>(c,0x1100,user_op(c,524458,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x7128b8;}
case 0x7128b8:{ // POR MM0,MM5
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1150)));
return 0x7128bb;}
case 0x7128bb:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x7128be;}
case 0x7128be:{ // PSUBUSB MM1,MM2
wr<8>(c,0x1110,user_op(c,524458,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x7128c1;}
case 0x7128c1:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7128c4;}
case 0x7128c4:{ // POR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x7128c7;}
case 0x7128c7:{ // PSUBUSB MM5,MM2
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x7128ca;}
case 0x7128ca:{ // PSUBUSB MM2,MM3
wr<8>(c,0x1120,user_op(c,524458,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x7128cd;}
case 0x7128cd:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7128d0;}
case 0x7128d0:{ // POR MM2,MM5
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1150)));
return 0x7128d3;}
case 0x7128d3:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x7128d6;}
case 0x7128d6:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x7128d9;}
case 0x7128d9:{ // POR MM3,MM6
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1160)));
return 0x7128dc;}
case 0x7128dc:{ // PADDUSB MM0,MM1
wr<8>(c,0x1100,user_op(c,524431,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x7128df;}
case 0x7128df:{ // PADDUSB MM2,MM3
wr<8>(c,0x1120,user_op(c,524431,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x7128e2;}
case 0x7128e2:{ // MOVQ MM7,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7128e9;}
case 0x7128e9:{ // PADDUSB MM0,MM2
wr<8>(c,0x1100,user_op(c,524431,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x7128ec;}
case 0x7128ec:{ // MOVQ qword ptr [EBP + -0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7128f0;}
case 0x7128f0:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7128f3;}
case 0x7128f3:{ // PSUBB MM0,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1100,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1100),u<1>(c,0x131500)));
wr<1>(c,0x1101,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1101),u<1>(c,0x131501)));
wr<1>(c,0x1102,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1102),u<1>(c,0x131502)));
wr<1>(c,0x1103,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1103),u<1>(c,0x131503)));
wr<1>(c,0x1104,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1104),u<1>(c,0x131504)));
wr<1>(c,0x1105,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1105),u<1>(c,0x131505)));
wr<1>(c,0x1106,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1106),u<1>(c,0x131506)));
wr<1>(c,0x1107,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1107),u<1>(c,0x131507)));
return 0x7128fa;}
case 0x7128fa:{ // PCMPGTB MM7,MM0
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1170)));
wr<1>(c,0x1170,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1172)));
wr<1>(c,0x1172,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1173)));
wr<1>(c,0x1173,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1174)));
wr<1>(c,0x1174,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1175)));
wr<1>(c,0x1175,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1176)));
wr<1>(c,0x1176,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1177)));
wr<1>(c,0x1177,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x7128fd;}
case 0x7128fd:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712901;}
case 0x712901:{ // MOVQ MM1,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712905;}
case 0x712905:{ // MOVQ MM2,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712909;}
case 0x712909:{ // PACKUSWB MM5,qword ptr [EDI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71290d;}
case 0x71290d:{ // PACKUSWB MM1,qword ptr [EDI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712911;}
case 0x712911:{ // PACKUSWB MM2,qword ptr [EDI + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712915;}
case 0x712915:{ // MOVQ MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71291c;}
case 0x71291c:{ // MOVQ MM4,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712923;}
case 0x712923:{ // PACKUSWB MM3,qword ptr [EDI + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71292a;}
case 0x71292a:{ // PACKUSWB MM4,qword ptr [EDI + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x98ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x712931;}
case 0x712931:{ // MOVQ MM0,MM5
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712934;}
case 0x712934:{ // PSUBUSB MM5,MM6
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x712937;}
case 0x712937:{ // PSUBUSB MM6,MM0
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71293a;}
case 0x71293a:{ // POR MM5,MM6
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1160)));
return 0x71293d;}
case 0x71293d:{ // MOVQ MM6,qword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712941;}
case 0x712941:{ // PSUBB MM5,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1150,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1150),u<1>(c,0x131500)));
wr<1>(c,0x1151,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1151),u<1>(c,0x131501)));
wr<1>(c,0x1152,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1152),u<1>(c,0x131502)));
wr<1>(c,0x1153,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1153),u<1>(c,0x131503)));
wr<1>(c,0x1154,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1154),u<1>(c,0x131504)));
wr<1>(c,0x1155,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1155),u<1>(c,0x131505)));
wr<1>(c,0x1156,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1156),u<1>(c,0x131506)));
wr<1>(c,0x1157,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1157),u<1>(c,0x131507)));
return 0x712948;}
case 0x712948:{ // PSUBB MM6,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1160,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1160),u<1>(c,0x131500)));
wr<1>(c,0x1161,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1161),u<1>(c,0x131501)));
wr<1>(c,0x1162,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1162),u<1>(c,0x131502)));
wr<1>(c,0x1163,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1163),u<1>(c,0x131503)));
wr<1>(c,0x1164,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1164),u<1>(c,0x131504)));
wr<1>(c,0x1165,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1165),u<1>(c,0x131505)));
wr<1>(c,0x1166,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1166),u<1>(c,0x131506)));
wr<1>(c,0x1167,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1167),u<1>(c,0x131507)));
return 0x71294f;}
case 0x71294f:{ // PCMPGTB MM6,MM5
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1150),r<1>(c,0x1160)));
wr<1>(c,0x1160,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1151),r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1152),r<1>(c,0x1162)));
wr<1>(c,0x1162,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1153),r<1>(c,0x1163)));
wr<1>(c,0x1163,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1154),r<1>(c,0x1164)));
wr<1>(c,0x1164,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1155),r<1>(c,0x1165)));
wr<1>(c,0x1165,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1156),r<1>(c,0x1166)));
wr<1>(c,0x1166,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1157),r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x712952;}
case 0x712952:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712955;}
case 0x712955:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x712958;}
case 0x712958:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71295b;}
case 0x71295b:{ // PSUBUSB MM5,MM0
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x71295e;}
case 0x71295e:{ // PSUBUSB MM0,MM1
wr<8>(c,0x1100,user_op(c,524458,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x712961;}
case 0x712961:{ // POR MM0,MM5
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1150)));
return 0x712964;}
case 0x712964:{ // PSUBUSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x712967;}
case 0x712967:{ // PSUBUSB MM1,MM2
wr<8>(c,0x1110,user_op(c,524458,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71296a;}
case 0x71296a:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71296d;}
case 0x71296d:{ // POR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x712970;}
case 0x712970:{ // PSUBUSB MM5,MM2
wr<8>(c,0x1150,user_op(c,524458,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x712973;}
case 0x712973:{ // PSUBUSB MM2,MM3
wr<8>(c,0x1120,user_op(c,524458,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x712976;}
case 0x712976:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x712979;}
case 0x712979:{ // POR MM2,MM5
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1150)));
return 0x71297c;}
case 0x71297c:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71297f;}
case 0x71297f:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x712982;}
case 0x712982:{ // POR MM3,MM6
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1160)));
return 0x712985;}
case 0x712985:{ // PADDUSB MM0,MM1
wr<8>(c,0x1100,user_op(c,524431,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x712988;}
case 0x712988:{ // PADDUSB MM2,MM3
wr<8>(c,0x1120,user_op(c,524431,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x71298b;}
case 0x71298b:{ // MOVQ MM6,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712992;}
case 0x712992:{ // PADDUSB MM0,MM2
wr<8>(c,0x1100,user_op(c,524431,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x712995;}
case 0x712995:{ // MOVQ qword ptr [EBP + -0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712999;}
case 0x712999:{ // PSUBB MM0,qword ptr [0x008175e0]
wu<8>(c,0x131500,eval<Op::COPY,8,8>(m<8>(c,0x8175e0)));
wr<1>(c,0x1100,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1100),u<1>(c,0x131500)));
wr<1>(c,0x1101,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1101),u<1>(c,0x131501)));
wr<1>(c,0x1102,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1102),u<1>(c,0x131502)));
wr<1>(c,0x1103,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1103),u<1>(c,0x131503)));
wr<1>(c,0x1104,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1104),u<1>(c,0x131504)));
wr<1>(c,0x1105,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1105),u<1>(c,0x131505)));
wr<1>(c,0x1106,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1106),u<1>(c,0x131506)));
wr<1>(c,0x1107,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1107),u<1>(c,0x131507)));
return 0x7129a0;}
case 0x7129a0:{ // PCMPGTB MM6,MM0
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1160)));
wr<1>(c,0x1160,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1162)));
wr<1>(c,0x1162,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1163)));
wr<1>(c,0x1163,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1164)));
wr<1>(c,0x1164,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1165)));
wr<1>(c,0x1165,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1166)));
wr<1>(c,0x1166,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x7129a3;}
case 0x7129a3:{ // PAND MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x7129a6;}
case 0x7129a6:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7129a9;}
case 0x7129a9:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7129ac;}
case 0x7129ac:{ // PUNPCKHBW MM0,MM6
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
return 0x7129af;}
case 0x7129af:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7129b2;}
case 0x7129b2:{ // MOVQ MM1,qword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7129b6;}
case 0x7129b6:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7129ba;}
case 0x7129ba:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7129be;}
case 0x7129be:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7129c2;}
case 0x7129c2:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7129c6;}
case 0x7129c6:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x7129c9;}
case 0x7129c9:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7129cc;}
case 0x7129cc:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7129cf;}
case 0x7129cf:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7129d2;}
case 0x7129d2:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7129d9;}
case 0x7129d9:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x7129dc;}
case 0x7129dc:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x7129df;}
case 0x7129df:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x7129e3;}
case 0x7129e3:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7129e6;}
case 0x7129e6:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x7129ea;}
case 0x7129ea:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x7129ed;}
case 0x7129ed:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x7129f0;}
case 0x7129f0:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x7129f7;}
case 0x7129f7:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7129fa;}
case 0x7129fa:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7129fd;}
case 0x7129fd:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712a00;}
case 0x712a00:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x712a04;}
case 0x712a04:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x712a07;}
case 0x712a07:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x712a0a;}
case 0x712a0a:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x712a0d;}
case 0x712a0d:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712a10;}
case 0x712a10:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a14;}
case 0x712a14:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a18;}
case 0x712a18:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x712a1b;}
case 0x712a1b:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x712a1e;}
case 0x712a1e:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x712a21;}
case 0x712a21:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712a24;}
case 0x712a24:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712a27;}
case 0x712a27:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x712a2a;}
case 0x712a2a:{ // MOVQ qword ptr [EBP + 0xffffff70],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712a31;}
case 0x712a31:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x712a34;}
case 0x712a34:{ // MOVQ qword ptr [EBP + 0xffffff50],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712a3b;}
case 0x712a3b:{ // MOVQ MM3,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a3e;}
case 0x712a3e:{ // MOVQ MM2,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a45;}
case 0x712a45:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712a48;}
case 0x712a48:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x712a4b;}
case 0x712a4b:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a4f;}
case 0x712a4f:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712a52;}
case 0x712a52:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712a56;}
case 0x712a56:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x712a5a;}
case 0x712a5a:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712a5e;}
case 0x712a5e:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x712a65;}
case 0x712a65:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x712a68;}
case 0x712a68:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712a6b;}
case 0x712a6b:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a6f;}
case 0x712a6f:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712a72;}
case 0x712a72:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712a76;}
case 0x712a76:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712a79;}
case 0x712a79:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712a7c;}
case 0x712a7c:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712a7f;}
case 0x712a7f:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x712a82;}
case 0x712a82:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712a86;}
case 0x712a86:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712a89;}
case 0x712a89:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712a8d;}
case 0x712a8d:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712a90;}
case 0x712a90:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712a93;}
case 0x712a93:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712a97;}
case 0x712a97:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712a9a;}
case 0x712a9a:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712a9d;}
case 0x712a9d:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712aa0;}
case 0x712aa0:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712aa4;}
case 0x712aa4:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712aa8;}
case 0x712aa8:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712aab;}
case 0x712aab:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712aaf;}
case 0x712aaf:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712ab2;}
case 0x712ab2:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712ab5;}
case 0x712ab5:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712ab9;}
case 0x712ab9:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712abc;}
case 0x712abc:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712abf;}
case 0x712abf:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712ac2;}
case 0x712ac2:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712ac6;}
case 0x712ac6:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712aca;}
case 0x712aca:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712acd;}
case 0x712acd:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712ad1;}
case 0x712ad1:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712ad4;}
case 0x712ad4:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712ad7;}
case 0x712ad7:{ // MOVQ MM5,qword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712ade;}
case 0x712ade:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712ae2;}
case 0x712ae2:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712ae5;}
case 0x712ae5:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712ae8;}
case 0x712ae8:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712aeb;}
case 0x712aeb:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712aef;}
case 0x712aef:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712af3;}
case 0x712af3:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712af7;}
case 0x712af7:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712afe;}
case 0x712afe:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712b01;}
case 0x712b01:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712b04;}
case 0x712b04:{ // MOVQ MM5,qword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b0b;}
case 0x712b0b:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712b0f;}
case 0x712b0f:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b12;}
case 0x712b12:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712b15;}
case 0x712b15:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b18;}
case 0x712b18:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712b1c;}
case 0x712b1c:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b20;}
case 0x712b20:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712b24;}
case 0x712b24:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712b27;}
case 0x712b27:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712b2a;}
case 0x712b2a:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712b2d;}
case 0x712b2d:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712b31;}
case 0x712b31:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b34;}
case 0x712b34:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712b37;}
case 0x712b37:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b3a;}
case 0x712b3a:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712b3e;}
case 0x712b3e:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b42;}
case 0x712b42:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712b46;}
case 0x712b46:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712b49;}
case 0x712b49:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712b4c;}
case 0x712b4c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712b4f;}
case 0x712b4f:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712b53;}
case 0x712b53:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b56;}
case 0x712b56:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712b59;}
case 0x712b59:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b5c;}
case 0x712b5c:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712b60;}
case 0x712b60:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b67;}
case 0x712b67:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712b6b;}
case 0x712b6b:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712b6e;}
case 0x712b6e:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712b71;}
case 0x712b71:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712b74;}
case 0x712b74:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712b78;}
case 0x712b78:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b7b;}
case 0x712b7b:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x712b7e;}
case 0x712b7e:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712b81;}
case 0x712b81:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712b85;}
case 0x712b85:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712b88;}
case 0x712b88:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712b8b;}
case 0x712b8b:{ // MOVQ MM1,qword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b8f;}
case 0x712b8f:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b93;}
case 0x712b93:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b97;}
case 0x712b97:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b9b;}
case 0x712b9b:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712b9f;}
case 0x712b9f:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x712ba2;}
case 0x712ba2:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x712ba5;}
case 0x712ba5:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712ba8;}
case 0x712ba8:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712bab;}
case 0x712bab:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712bb2;}
case 0x712bb2:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x712bb5;}
case 0x712bb5:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x712bb8;}
case 0x712bb8:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x712bbc;}
case 0x712bbc:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712bbf;}
case 0x712bbf:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x712bc3;}
case 0x712bc3:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x712bc6;}
case 0x712bc6:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x712bc9;}
case 0x712bc9:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x712bd0;}
case 0x712bd0:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712bd3;}
case 0x712bd3:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x712bd6;}
case 0x712bd6:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712bd9;}
case 0x712bd9:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x712bdd;}
case 0x712bdd:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x712be0;}
case 0x712be0:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x712be3;}
case 0x712be3:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x712be6;}
case 0x712be6:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712be9;}
case 0x712be9:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712bed;}
case 0x712bed:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712bf1;}
case 0x712bf1:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x712bf4;}
case 0x712bf4:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x712bf7;}
case 0x712bf7:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x712bfa;}
case 0x712bfa:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712bfd;}
case 0x712bfd:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712c00;}
case 0x712c00:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x712c03;}
case 0x712c03:{ // MOVQ qword ptr [EBP + 0xffffff70],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712c0a;}
case 0x712c0a:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x712c0d;}
case 0x712c0d:{ // MOVQ qword ptr [EBP + 0xffffff50],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x712c14;}
case 0x712c14:{ // MOVQ MM3,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c17;}
case 0x712c17:{ // MOVQ MM2,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c1e;}
case 0x712c1e:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712c21;}
case 0x712c21:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x712c24;}
case 0x712c24:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c28;}
case 0x712c28:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712c2b;}
case 0x712c2b:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712c2f;}
case 0x712c2f:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x712c33;}
case 0x712c33:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712c37;}
case 0x712c37:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x712c3e;}
case 0x712c3e:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x712c41;}
case 0x712c41:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712c44;}
case 0x712c44:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c48;}
case 0x712c48:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c4b;}
case 0x712c4b:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712c4f;}
case 0x712c4f:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c52;}
case 0x712c52:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712c55;}
case 0x712c55:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c58;}
case 0x712c58:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x712c5b;}
case 0x712c5b:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c5f;}
case 0x712c5f:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712c62;}
case 0x712c62:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712c66;}
case 0x712c66:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712c69;}
case 0x712c69:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712c6c;}
case 0x712c6c:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712c70;}
case 0x712c70:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c73;}
case 0x712c73:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712c76;}
case 0x712c76:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c79;}
case 0x712c79:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712c7d;}
case 0x712c7d:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712c81;}
case 0x712c81:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712c84;}
case 0x712c84:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712c88;}
case 0x712c88:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712c8b;}
case 0x712c8b:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712c8e;}
case 0x712c8e:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712c92;}
case 0x712c92:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c95;}
case 0x712c95:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712c98;}
case 0x712c98:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712c9b;}
case 0x712c9b:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712c9f;}
case 0x712c9f:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712ca3;}
case 0x712ca3:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x712ca6;}
case 0x712ca6:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712caa;}
case 0x712caa:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712cad;}
case 0x712cad:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712cb0;}
case 0x712cb0:{ // MOVQ MM5,qword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712cb7;}
case 0x712cb7:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712cbb;}
case 0x712cbb:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712cbe;}
case 0x712cbe:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712cc1;}
case 0x712cc1:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712cc4;}
case 0x712cc4:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712cc8;}
case 0x712cc8:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712ccc;}
case 0x712ccc:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712cd0;}
case 0x712cd0:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x712cd7;}
case 0x712cd7:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712cda;}
case 0x712cda:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712cdd;}
case 0x712cdd:{ // MOVQ MM5,qword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712ce4;}
case 0x712ce4:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712ce8;}
case 0x712ce8:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712ceb;}
case 0x712ceb:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712cee;}
case 0x712cee:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712cf1;}
case 0x712cf1:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712cf5;}
case 0x712cf5:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712cf9;}
case 0x712cf9:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712cfd;}
case 0x712cfd:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712d00;}
case 0x712d00:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712d03;}
case 0x712d03:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712d06;}
case 0x712d06:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712d0a;}
case 0x712d0a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d0d;}
case 0x712d0d:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712d10;}
case 0x712d10:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d13;}
case 0x712d13:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712d17;}
case 0x712d17:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d1b;}
case 0x712d1b:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712d1f;}
case 0x712d1f:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712d22;}
case 0x712d22:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712d25;}
case 0x712d25:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712d28;}
case 0x712d28:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712d2c;}
case 0x712d2c:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d2f;}
case 0x712d2f:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712d32;}
case 0x712d32:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d35;}
case 0x712d35:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712d39;}
case 0x712d39:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d40;}
case 0x712d40:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x712d44;}
case 0x712d44:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x712d47;}
case 0x712d47:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712d4a;}
case 0x712d4a:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x712d4d;}
case 0x712d4d:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x712d51;}
case 0x712d51:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d54;}
case 0x712d54:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x712d57;}
case 0x712d57:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x712d5a;}
case 0x712d5a:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712d5e;}
case 0x712d5e:{ // MOV EAX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712d61;}
case 0x712d61:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712d64;}
case 0x712d64:{ // SUB ESI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712d67;}
case 0x712d67:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712d6a;}
case 0x712d6a:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d6d;}
case 0x712d6d:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d71;}
case 0x712d71:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712d74;}
case 0x712d74:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x712d77;}
case 0x712d77:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x712d7a;}
case 0x712d7a:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d7e;}
case 0x712d7e:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712d82;}
case 0x712d82:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x712d85;}
case 0x712d85:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x712d88;}
case 0x712d88:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x712d8b;}
case 0x712d8b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712d8e;}
case 0x712d8e:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x712d91;}
case 0x712d91:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x712d94;}
case 0x712d94:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x712d97;}
case 0x712d97:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x712d9a;}
case 0x712d9a:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712d9e;}
case 0x712d9e:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x712da1;}
case 0x712da1:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x712da4;}
case 0x712da4:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712da8;}
case 0x712da8:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712dac;}
case 0x712dac:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712db0;}
case 0x712db0:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712db4;}
case 0x712db4:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712db7;}
case 0x712db7:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712dba;}
case 0x712dba:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x712dbd;}
case 0x712dbd:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x712dc0;}
case 0x712dc0:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x712dc3;}
case 0x712dc3:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x712dc6;}
case 0x712dc6:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712dc9;}
case 0x712dc9:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712dcc;}
case 0x712dcc:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x712dcf;}
case 0x712dcf:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x712dd2;}
case 0x712dd2:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x712dd5;}
case 0x712dd5:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x712dd8;}
case 0x712dd8:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712ddb;}
case 0x712ddb:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712dde;}
case 0x712dde:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x712de1;}
case 0x712de1:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712de5;}
case 0x712de5:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1170,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1177,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712de8;}
case 0x712de8:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712dec;}
case 0x712dec:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712def;}
case 0x712def:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712df2;}
case 0x712df2:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712df6;}
case 0x712df6:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x712df9;}
case 0x712df9:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712dfd;}
case 0x712dfd:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712e00;}
case 0x712e00:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712e03;}
case 0x712e03:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e06;}
case 0x712e06:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e0a;}
case 0x712e0a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712e0d;}
case 0x712e0d:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x712e10;}
case 0x712e10:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x712e13;}
case 0x712e13:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e17;}
case 0x712e17:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e1b;}
case 0x712e1b:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x712e1e;}
case 0x712e1e:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x712e21;}
case 0x712e21:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x712e24;}
case 0x712e24:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x712e27;}
case 0x712e27:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x712e2a;}
case 0x712e2a:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x712e2d;}
case 0x712e2d:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x712e30;}
case 0x712e30:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x712e33;}
case 0x712e33:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x712e37;}
case 0x712e37:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x712e3a;}
case 0x712e3a:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x712e3d;}
case 0x712e3d:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e41;}
case 0x712e41:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e45;}
case 0x712e45:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e49;}
case 0x712e49:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e4d;}
case 0x712e4d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712e50;}
case 0x712e50:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x712e53;}
case 0x712e53:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x712e56;}
case 0x712e56:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x712e59;}
case 0x712e59:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x712e5c;}
case 0x712e5c:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x712e5f;}
case 0x712e5f:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x712e62;}
case 0x712e62:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x712e65;}
case 0x712e65:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x712e68;}
case 0x712e68:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x712e6b;}
case 0x712e6b:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x712e6e;}
case 0x712e6e:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x712e71;}
case 0x712e71:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e74;}
case 0x712e74:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712e77;}
case 0x712e77:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x712e7a;}
case 0x712e7a:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x712e7e;}
case 0x712e7e:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1170,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1177,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712e81;}
case 0x712e81:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712e85;}
case 0x712e85:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712e88;}
case 0x712e88:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wu<1>(c,0xdf200,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf000)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf000)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf000),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf000),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf300)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x712e8b;}
case 0x712e8b:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712e8f;}
case 0x712e8f:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x712e92;}
case 0x712e92:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x712e96;}
case 0x712e96:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e97;}
case 0x712e97:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e98;}
case 0x712e98:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e99;}
case 0x712e99:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e9a;}
case 0x712e9a:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e9b;}
case 0x712e9b:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712e9c;}
case 0x712e9c:{ // MOVZX EDI,byte ptr [EBP + -0xa]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff6ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ea0;}
case 0x712ea0:{ // MOVZX ESI,byte ptr [EBP + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ea4;}
case 0x712ea4:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ea6;}
case 0x712ea6:{ // MOVZX EDI,byte ptr [EBP + -0xb]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff5ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712eaa;}
case 0x712eaa:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712ead;}
case 0x712ead:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712eb0;}
case 0x712eb0:{ // MOV ECX,dword ptr [EBP + -0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff8cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712eb3;}
case 0x712eb3:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712eb5;}
case 0x712eb5:{ // MOVZX EDI,byte ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712eb9;}
case 0x712eb9:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ebb;}
case 0x712ebb:{ // MOVZX EDI,byte ptr [EBP + -0xd]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff3ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ebf;}
case 0x712ebf:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ec1;}
case 0x712ec1:{ // MOVZX EDI,byte ptr [EBP + -0xe]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff2ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ec5;}
case 0x712ec5:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ec7;}
case 0x712ec7:{ // MOVZX EDI,byte ptr [EBP + -0xf]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ecb;}
case 0x712ecb:{ // LEA EAX,[ECX + EAX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x712ecf;}
case 0x712ecf:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ed1;}
case 0x712ed1:{ // MOVZX EDI,byte ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ed5;}
case 0x712ed5:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ed7;}
case 0x712ed7:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ed9;}
case 0x712ed9:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712edc;}
case 0x712edc:{ // MOVZX EDX,byte ptr [EBP + -0x1a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ee0;}
case 0x712ee0:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ee2;}
case 0x712ee2:{ // MOVZX ECX,byte ptr [EBP + -0x19]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ee6;}
case 0x712ee6:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ee8;}
case 0x712ee8:{ // MOVZX EDX,byte ptr [EBP + -0x1b]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe5ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712eec;}
case 0x712eec:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712eee;}
case 0x712eee:{ // MOVZX EDX,byte ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ef2;}
case 0x712ef2:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712ef4;}
case 0x712ef4:{ // MOVZX EDX,byte ptr [EBP + -0x1d]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe3ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712ef8;}
case 0x712ef8:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712efa;}
case 0x712efa:{ // MOVZX EDX,byte ptr [EBP + -0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712efe;}
case 0x712efe:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f00;}
case 0x712f00:{ // MOVZX EDX,byte ptr [EBP + -0x1f]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712f04;}
case 0x712f04:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f06;}
case 0x712f06:{ // MOVZX EDX,byte ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x712f0a;}
case 0x712f0a:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f0c;}
case 0x712f0c:{ // ADD dword ptr [EAX],ECX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f0e;}
case 0x712f0e:{ // INC dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f11;}
case 0x712f11:{ // MOV ECX,dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712f14;}
case 0x712f14:{ // ADD dword ptr [EBP + -0x34],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x4ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f18;}
case 0x712f18:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x712f1a;}
case 0x712f1a:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712f1b;}
case 0x712f1b:{ // ADD dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f1e;}
case 0x712f1e:{ // ADD dword ptr [EBP + -0x38],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f21;}
case 0x712f21:{ // ADD dword ptr [EBP + -0x2c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f24;}
case 0x712f24:{ // ADD dword ptr [EBP + -0x30],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f27;}
case 0x712f27:{ // CMP ECX,dword ptr [EBP + 0xffffff4c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff4cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f2d;}
case 0x712f2d:{ // JC 0x0071202a
if(r<1>(c,0x200)){return 0x71202a;}
return 0x712f33;}
case 0x712f33:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712f34;}
case 0x712f34:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712f35;}
case 0x712f35:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x712f37;}
case 0x712f37:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712f38;}
case 0x712f38:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x712f3a;}
case 0x712f3a:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x712f3b;}
case 0x712f3b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x712f3c;}
case 0x712f3c:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f3d;}
case 0x712f3d:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x712f3f;}
case 0x712f3f:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f40;}
case 0x712f40:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f41;}
case 0x712f41:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f44;}
case 0x712f44:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f47;}
case 0x712f47:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f48;}
case 0x712f48:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x712f4b;}
case 0x712f4b:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x712f4f;}
case 0x712f4f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x712f51;}
case 0x712f51:{ // SUB ESP,0x988
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x988ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x988ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x988ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f57;}
case 0x712f57:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f59;}
case 0x712f59:{ // OR AL,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x712f5b;}
case 0x712f5b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f5c;}
case 0x712f5c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x712f5d;}
case 0x712f5d:{ // MOV byte ptr [EBP + 0xfffff7e8],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7e8ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f64;}
case 0x712f64:{ // MOV byte ptr [EBP + 0xfffff7e9],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7e9ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f6a;}
case 0x712f6a:{ // MOV byte ptr [EBP + 0xfffff7ea],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7eaull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f71;}
case 0x712f71:{ // MOV byte ptr [EBP + 0xfffff7eb],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7ebull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f78;}
case 0x712f78:{ // MOV byte ptr [EBP + 0xfffff7ec],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7ecull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f7e;}
case 0x712f7e:{ // MOV byte ptr [EBP + 0xfffff7ed],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7edull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f84;}
case 0x712f84:{ // MOV byte ptr [EBP + 0xfffff7ee],AL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7eeull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f8a;}
case 0x712f8a:{ // MOV byte ptr [EBP + 0xfffff7ef],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7efull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f91;}
case 0x712f91:{ // MOV byte ptr [EBP + 0xfffff7f0],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f0ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f98;}
case 0x712f98:{ // MOV byte ptr [EBP + 0xfffff7f1],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f1ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712f9f;}
case 0x712f9f:{ // MOV byte ptr [EBP + 0xfffff7f2],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f2ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fa6;}
case 0x712fa6:{ // MOV byte ptr [EBP + 0xfffff7f3],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f3ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fad;}
case 0x712fad:{ // MOV byte ptr [EBP + 0xfffff7f4],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f4ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fb4;}
case 0x712fb4:{ // MOV byte ptr [EBP + 0xfffff7f5],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f5ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fba;}
case 0x712fba:{ // MOV byte ptr [EBP + 0xfffff7f6],AL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f6ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fc0;}
case 0x712fc0:{ // MOV byte ptr [EBP + 0xfffff7f7],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f7ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fc7;}
case 0x712fc7:{ // MOV byte ptr [EBP + 0xfffff7f8],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f8ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fce;}
case 0x712fce:{ // MOV byte ptr [EBP + 0xfffff7f9],AL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7f9ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fd4;}
case 0x712fd4:{ // MOV byte ptr [EBP + 0xfffff7fa],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7faull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fdb;}
case 0x712fdb:{ // MOV byte ptr [EBP + 0xfffff7fb],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7fbull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fe2;}
case 0x712fe2:{ // MOV byte ptr [EBP + 0xfffff7fc],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7fcull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fe9;}
case 0x712fe9:{ // MOV byte ptr [EBP + 0xfffff7fd],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7fdull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712fef;}
case 0x712fef:{ // MOV byte ptr [EBP + 0xfffff7fe],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7feull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712ff6;}
case 0x712ff6:{ // MOV byte ptr [EBP + 0xfffff7ff],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff7ffull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x712ffd;}
case 0x712ffd:{ // MOV byte ptr [EBP + 0xfffff800],0xfe
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff800ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xfeull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x713004;}
default:missing_instruction(c.pc);}}
}
