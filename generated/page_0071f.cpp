#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_71f(Cpu& c){switch(c.pc){
case 0x71f001:{ // SHL EAX,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
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
return 0x71f004;}
case 0x71f004:{ // ADD EAX,0x817b00
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x817b00ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x817b00ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x817b00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f009;}
case 0x71f009:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f00a;}
case 0x71f00a:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71f00c;}
case 0x71f00c:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71f00e;}
case 0x71f00e:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71f010;}
case 0x71f010:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f013;}
case 0x71f013:{ // PUSH dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f016;}
case 0x71f016:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f017;}
case 0x71f017:{ // CALL 0x0071ed5e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71f01cull);
return 0x71ed5e;
return 0x71f01c;}
case 0x71f01c:{ // ADD ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f01f;}
case 0x71f01f:{ // JMP 0x0071f090
return 0x71f090;
return 0x71f021;}
case 0x71f021:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f024;}
case 0x71f024:{ // CMP EAX,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f026;}
case 0x71f026:{ // JNZ 0x0071f045
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71f045;}
return 0x71f028;}
case 0x71f028:{ // MOV EAX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f02b;}
case 0x71f02b:{ // SHL EAX,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
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
return 0x71f02e;}
case 0x71f02e:{ // ADD EAX,0x817b00
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x817b00ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x817b00ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x817b00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f033;}
case 0x71f033:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f034;}
case 0x71f034:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71f036;}
case 0x71f036:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71f038;}
case 0x71f038:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f039;}
case 0x71f039:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f03a;}
case 0x71f03a:{ // PUSH dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f03d;}
case 0x71f03d:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f03e;}
case 0x71f03e:{ // CALL 0x0071edbd
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71f043ull);
return 0x71edbd;
return 0x71f043;}
case 0x71f043:{ // JMP 0x0071f01c
return 0x71f01c;
return 0x71f045;}
case 0x71f045:{ // LEA ESI,[ECX + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xffffffffull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71f048;}
case 0x71f048:{ // CMP EAX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f04a;}
case 0x71f04a:{ // JNZ 0x0071f065
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71f065;}
return 0x71f04c;}
case 0x71f04c:{ // MOV ESI,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f04f;}
case 0x71f04f:{ // SHL ESI,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x18),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71f052;}
case 0x71f052:{ // MOV EAX,0x817b00
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x817b00ull));
return 0x71f057;}
case 0x71f057:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f059;}
case 0x71f059:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f05a;}
case 0x71f05a:{ // MOV ESI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f05d;}
case 0x71f05d:{ // SHL ESI,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x18),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71f060;}
case 0x71f060:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f062;}
case 0x71f062:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f063;}
case 0x71f063:{ // JMP 0x0071f082
return 0x71f082;
return 0x71f065;}
case 0x71f065:{ // LEA ESI,[ECX + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71f068;}
case 0x71f068:{ // CMP EAX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f06a;}
case 0x71f06a:{ // JNZ 0x0071f090
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71f090;}
return 0x71f06c;}
case 0x71f06c:{ // MOV ESI,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f06f;}
case 0x71f06f:{ // SHL ESI,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x18),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71f072;}
case 0x71f072:{ // MOV EAX,0x817b00
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x817b00ull));
return 0x71f077;}
case 0x71f077:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f079;}
case 0x71f079:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f07a;}
case 0x71f07a:{ // MOV ESI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f07d;}
case 0x71f07d:{ // SHL ESI,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x18),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71f080;}
case 0x71f080:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f082;}
case 0x71f082:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f083;}
case 0x71f083:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f084;}
case 0x71f084:{ // PUSH dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f087;}
case 0x71f087:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f088;}
case 0x71f088:{ // CALL 0x0071eca2
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71f08dull);
return 0x71eca2;
return 0x71f08d;}
case 0x71f08d:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f090;}
case 0x71f090:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f091;}
case 0x71f091:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x71f092;}
case 0x71f092:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f093;}
case 0x71f093:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f094;}
case 0x71f094:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f096;}
case 0x71f096:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f097;}
case 0x71f097:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f098;}
case 0x71f098:{ // MOV EDI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f09b;}
case 0x71f09b:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f09e;}
case 0x71f09e:{ // MOV ECX,0x8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8ull));
return 0x71f0a3;}
case 0x71f0a3:{ // MOV EAX,0x10
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x10ull));
return 0x71f0a8;}
case 0x71f0a8:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x71f0ac;}
case 0x71f0ac:{ // MOVDQU XMM3,xmmword ptr [ESI]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x18)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f0b0;}
case 0x71f0b0:{ // PUNPCKLBW XMM3,XMM0
wr<1>(c,0x12cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x12ce,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x12cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x12cc,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x12cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x12ca,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x12c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x12c8,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x12c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x12c6,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x12c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x12c4,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x12c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x12c2,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x12c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71f0b4;}
case 0x71f0b4:{ // MOVDQU xmmword ptr [EDI],XMM3
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x71f0b8;}
case 0x71f0b8:{ // ADD ESI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f0bb;}
case 0x71f0bb:{ // ADD EDI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f0bd;}
case 0x71f0bd:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f0be;}
case 0x71f0be:{ // JNZ 0x0071f0ac
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71f0ac;}
return 0x71f0c0;}
case 0x71f0c0:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f0c1;}
case 0x71f0c1:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f0c2;}
case 0x71f0c2:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f0c3;}
case 0x71f0c3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f0c4;}
case 0x71f0c4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f0c5;}
case 0x71f0c5:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f0c7;}
case 0x71f0c7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f0c8;}
case 0x71f0c8:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f0c9;}
case 0x71f0c9:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f0cc;}
case 0x71f0cc:{ // MOV EDX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f0cf;}
case 0x71f0cf:{ // MOVQ XMM0,qword ptr [0x00817e00]
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(m<8>(c,0x817e00)));
return 0x71f0d7;}
case 0x71f0d7:{ // PXOR XMM3,XMM3
wr<16>(c,0x12c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x12c0)));
return 0x71f0db;}
case 0x71f0db:{ // MOV EBX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f0de;}
case 0x71f0de:{ // LEA ECX,[EAX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x80ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71f0e4;}
case 0x71f0e4:{ // MOVDQA XMM2,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f0e8;}
case 0x71f0e8:{ // PACKSSWB XMM2,XMM3
wr<16>(c,0x1280,user_op(c,1048712,{r<16>(c,0x1280),r<16>(c,0x12c0)}));
return 0x71f0ec;}
case 0x71f0ec:{ // PXOR XMM2,XMM0
wr<16>(c,0x1280,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1200)));
return 0x71f0f0;}
case 0x71f0f0:{ // LEA EAX,[EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71f0f3;}
case 0x71f0f3:{ // CMP EAX,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f0f5;}
case 0x71f0f5:{ // MOVQ qword ptr [EDX],XMM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71f0f9;}
case 0x71f0f9:{ // LEA EDX,[EDX + EBX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71f0fc;}
case 0x71f0fc:{ // JC 0x0071f0e4
if(r<1>(c,0x200)){return 0x71f0e4;}
return 0x71f0fe;}
case 0x71f0fe:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f0ff;}
case 0x71f0ff:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f100;}
case 0x71f100:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f101;}
case 0x71f101:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f102;}
case 0x71f102:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f103;}
case 0x71f103:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f105;}
case 0x71f105:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f106;}
case 0x71f106:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f107;}
case 0x71f107:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f108;}
case 0x71f108:{ // MOV EBX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f10b;}
case 0x71f10b:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f10e;}
case 0x71f10e:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f111;}
case 0x71f111:{ // MOV EDX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f114;}
case 0x71f114:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x71f118;}
case 0x71f118:{ // LEA EDI,[ECX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71f11e;}
case 0x71f11e:{ // MOVQ XMM2,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71f122;}
case 0x71f122:{ // MOVDQA XMM4,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f126;}
case 0x71f126:{ // PUNPCKLBW XMM2,XMM0
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71f12a;}
case 0x71f12a:{ // ADD EBX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f12c;}
case 0x71f12c:{ // PADDSW XMM2,XMM4
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1300)}));
return 0x71f130;}
case 0x71f130:{ // LEA ECX,[ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71f133;}
case 0x71f133:{ // PACKUSWB XMM2,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1280,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71f137;}
case 0x71f137:{ // CMP ECX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f139;}
case 0x71f139:{ // MOVQ qword ptr [EAX],XMM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x71f13d;}
case 0x71f13d:{ // LEA EAX,[EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71f140;}
case 0x71f140:{ // JC 0x0071f11e
if(r<1>(c,0x200)){return 0x71f11e;}
return 0x71f142;}
case 0x71f142:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f143;}
case 0x71f143:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f144;}
case 0x71f144:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f145;}
case 0x71f145:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f146;}
case 0x71f146:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f147;}
case 0x71f147:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f148;}
case 0x71f148:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f14a;}
case 0x71f14a:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f14b;}
case 0x71f14b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f14c;}
case 0x71f14c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f14d;}
case 0x71f14d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f14e;}
case 0x71f14e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f14f;}
case 0x71f14f:{ // MOV ECX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f152;}
case 0x71f152:{ // MOV ESI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f155;}
case 0x71f155:{ // MOV EDI,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f158;}
case 0x71f158:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f15b;}
case 0x71f15b:{ // MOV EDX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f15e;}
case 0x71f15e:{ // LEA EAX,[ECX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71f164;}
case 0x71f164:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x71f168;}
case 0x71f168:{ // MOVQ XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71f16c;}
case 0x71f16c:{ // MOVQ XMM4,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<16>(c,0x1300,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71f170;}
case 0x71f170:{ // PUNPCKLBW XMM2,XMM0
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71f174;}
case 0x71f174:{ // PUNPCKLBW XMM4,XMM0
wr<1>(c,0x130f,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(r<1>(c,0x1307)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(r<1>(c,0x1306)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(r<1>(c,0x1305)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(r<1>(c,0x1304)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(r<1>(c,0x1303)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(r<1>(c,0x1302)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(r<1>(c,0x1301)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71f178;}
case 0x71f178:{ // MOVDQA XMM6,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f17c;}
case 0x71f17c:{ // PADDW XMM2,XMM4
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1300)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1302)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1304)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1306)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1308)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x130a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x130c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x130e)));
return 0x71f180;}
case 0x71f180:{ // PSRLW XMM2,0x1
wr<2>(c,0x1280,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1280),0x1ull));
wr<2>(c,0x1282,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1282),0x1ull));
wr<2>(c,0x1284,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1284),0x1ull));
wr<2>(c,0x1286,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1286),0x1ull));
wr<2>(c,0x1288,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1288),0x1ull));
wr<2>(c,0x128a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x128a),0x1ull));
wr<2>(c,0x128c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x128c),0x1ull));
wr<2>(c,0x128e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x128e),0x1ull));
return 0x71f185;}
case 0x71f185:{ // PADDW XMM2,XMM6
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1380)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1382)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1384)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1386)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1388)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x138a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x138c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x138e)));
return 0x71f189;}
case 0x71f189:{ // LEA ECX,[ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71f18c;}
case 0x71f18c:{ // PACKUSWB XMM2,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1280,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71f190;}
case 0x71f190:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f192;}
case 0x71f192:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f194;}
case 0x71f194:{ // CMP ECX,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71f196;}
case 0x71f196:{ // MOVQ qword ptr [EBX],XMM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,r<4>(c,0xc),u<8>(c,0xa400));
return 0x71f19a;}
case 0x71f19a:{ // LEA EBX,[EBX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71f19d;}
case 0x71f19d:{ // JC 0x0071f168
if(r<1>(c,0x200)){return 0x71f168;}
return 0x71f19f;}
case 0x71f19f:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a0;}
case 0x71f1a0:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a1;}
case 0x71f1a1:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a2;}
case 0x71f1a2:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a3;}
case 0x71f1a3:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a4;}
case 0x71f1a4:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f1a5;}
case 0x71f1a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f1a6;}
case 0x71f1a6:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f1a7;}
case 0x71f1a7:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f1a9;}
case 0x71f1a9:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f1aa;}
case 0x71f1aa:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f1ab;}
case 0x71f1ab:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f1ae;}
case 0x71f1ae:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f1b1;}
case 0x71f1b1:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f1b4;}
case 0x71f1b4:{ // LEA ECX,[0x817e40]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x817e40ull));
return 0x71f1ba;}
case 0x71f1ba:{ // MOVDQA XMM0,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1be;}
case 0x71f1be:{ // MOVDQA XMM1,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1c3;}
case 0x71f1c3:{ // PMULLW XMM0,xmmword ptr [EBX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0xc)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1200,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1200),u<2>(c,0x121f00)));
wr<2>(c,0x1202,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1202),u<2>(c,0x121f02)));
wr<2>(c,0x1204,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1204),u<2>(c,0x121f04)));
wr<2>(c,0x1206,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1206),u<2>(c,0x121f06)));
wr<2>(c,0x1208,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1208),u<2>(c,0x121f08)));
wr<2>(c,0x120a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120a),u<2>(c,0x121f0a)));
wr<2>(c,0x120c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120c),u<2>(c,0x121f0c)));
wr<2>(c,0x120e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120e),u<2>(c,0x121f0e)));
return 0x71f1c7;}
case 0x71f1c7:{ // PMULLW XMM1,xmmword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),u<2>(c,0x121f00)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),u<2>(c,0x121f02)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),u<2>(c,0x121f04)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),u<2>(c,0x121f06)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),u<2>(c,0x121f08)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),u<2>(c,0x121f0a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),u<2>(c,0x121f0c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),u<2>(c,0x121f0e)));
return 0x71f1cc;}
case 0x71f1cc:{ // MOVDQA XMM2,xmmword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1d1;}
case 0x71f1d1:{ // MOVDQA XMM3,xmmword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1d6;}
case 0x71f1d6:{ // PMULLW XMM2,xmmword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),u<2>(c,0x121f00)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),u<2>(c,0x121f02)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),u<2>(c,0x121f04)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),u<2>(c,0x121f06)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),u<2>(c,0x121f08)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),u<2>(c,0x121f0a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),u<2>(c,0x121f0c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),u<2>(c,0x121f0e)));
return 0x71f1db;}
case 0x71f1db:{ // PMULLW XMM3,xmmword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x121f00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x121f02)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x121f04)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x121f06)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x121f08)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x121f0a)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x121f0c)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x121f0e)));
return 0x71f1e0;}
case 0x71f1e0:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f1e4;}
case 0x71f1e4:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f1e9;}
case 0x71f1e9:{ // MOVDQA XMM4,xmmword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1ee;}
case 0x71f1ee:{ // MOVDQA XMM5,xmmword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f1f3;}
case 0x71f1f3:{ // PMULLW XMM4,xmmword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1300),u<2>(c,0x121f00)));
wr<2>(c,0x1302,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1302),u<2>(c,0x121f02)));
wr<2>(c,0x1304,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1304),u<2>(c,0x121f04)));
wr<2>(c,0x1306,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1306),u<2>(c,0x121f06)));
wr<2>(c,0x1308,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1308),u<2>(c,0x121f08)));
wr<2>(c,0x130a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130a),u<2>(c,0x121f0a)));
wr<2>(c,0x130c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130c),u<2>(c,0x121f0c)));
wr<2>(c,0x130e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130e),u<2>(c,0x121f0e)));
return 0x71f1f8;}
case 0x71f1f8:{ // PMULLW XMM5,xmmword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1340,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1340),u<2>(c,0x121f00)));
wr<2>(c,0x1342,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1342),u<2>(c,0x121f02)));
wr<2>(c,0x1344,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1344),u<2>(c,0x121f04)));
wr<2>(c,0x1346,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1346),u<2>(c,0x121f06)));
wr<2>(c,0x1348,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1348),u<2>(c,0x121f08)));
wr<2>(c,0x134a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134a),u<2>(c,0x121f0a)));
wr<2>(c,0x134c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134c),u<2>(c,0x121f0c)));
wr<2>(c,0x134e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134e),u<2>(c,0x121f0e)));
return 0x71f1fd;}
case 0x71f1fd:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f202;}
case 0x71f202:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f207;}
case 0x71f207:{ // MOVDQA XMM6,xmmword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f20c;}
case 0x71f20c:{ // MOVDQA XMM7,xmmword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f211;}
case 0x71f211:{ // PMULLW XMM6,xmmword ptr [EBX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),u<2>(c,0x121f00)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),u<2>(c,0x121f02)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),u<2>(c,0x121f04)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),u<2>(c,0x121f06)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),u<2>(c,0x121f08)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),u<2>(c,0x121f0a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),u<2>(c,0x121f0c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),u<2>(c,0x121f0e)));
return 0x71f216;}
case 0x71f216:{ // PMULLW XMM7,xmmword ptr [EBX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x13c0,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13c0),u<2>(c,0x121f00)));
wr<2>(c,0x13c2,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13c2),u<2>(c,0x121f02)));
wr<2>(c,0x13c4,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13c4),u<2>(c,0x121f04)));
wr<2>(c,0x13c6,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13c6),u<2>(c,0x121f06)));
wr<2>(c,0x13c8,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13c8),u<2>(c,0x121f08)));
wr<2>(c,0x13ca,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13ca),u<2>(c,0x121f0a)));
wr<2>(c,0x13cc,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13cc),u<2>(c,0x121f0c)));
wr<2>(c,0x13ce,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x13ce),u<2>(c,0x121f0e)));
return 0x71f21b;}
case 0x71f21b:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f220;}
case 0x71f220:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f225;}
case 0x71f225:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f22a;}
case 0x71f22a:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f22f;}
case 0x71f22f:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f234;}
case 0x71f234:{ // MOVDQA XMM6,xmmword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f239;}
case 0x71f239:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f23d;}
case 0x71f23d:{ // MOVDQA XMM7,xmmword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f242;}
case 0x71f242:{ // PMULHW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x71f246;}
case 0x71f246:{ // MOVDQA XMM1,xmmword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f24b;}
case 0x71f24b:{ // PMULHW XMM6,XMM7
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x13c0)}));
return 0x71f24f;}
case 0x71f24f:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x71f253;}
case 0x71f253:{ // PMULHW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f257;}
case 0x71f257:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f25c;}
case 0x71f25c:{ // PMULHW XMM5,XMM7
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),r<16>(c,0x13c0)}));
return 0x71f260;}
case 0x71f260:{ // MOVDQA XMM0,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f264;}
case 0x71f264:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x71f268;}
case 0x71f268:{ // PADDW XMM6,XMM7
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x13c0)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x13c2)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x13c4)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x13c6)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x13c8)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x13ca)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x13cc)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x13ce)));
return 0x71f26c;}
case 0x71f26c:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f270;}
case 0x71f270:{ // MOVDQA XMM1,xmmword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f275;}
case 0x71f275:{ // PADDW XMM7,XMM5
wr<2>(c,0x13c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c0),r<2>(c,0x1340)));
wr<2>(c,0x13c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c2),r<2>(c,0x1342)));
wr<2>(c,0x13c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c4),r<2>(c,0x1344)));
wr<2>(c,0x13c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c6),r<2>(c,0x1346)));
wr<2>(c,0x13c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c8),r<2>(c,0x1348)));
wr<2>(c,0x13ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13ca),r<2>(c,0x134a)));
wr<2>(c,0x13cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13cc),r<2>(c,0x134c)));
wr<2>(c,0x13ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13ce),r<2>(c,0x134e)));
return 0x71f279;}
case 0x71f279:{ // MOVDQA XMM5,XMM0
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f27d;}
case 0x71f27d:{ // PMULHW XMM0,XMM3
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x12c0)}));
return 0x71f281;}
case 0x71f281:{ // PADDSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71f285;}
case 0x71f285:{ // PMULHW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f289;}
case 0x71f289:{ // MOVDQA XMM7,xmmword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f28e;}
case 0x71f28e:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f292;}
case 0x71f292:{ // PADDW XMM0,XMM3
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x12c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x12c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x12c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x12c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x12c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x12ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x12cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x12ce)));
return 0x71f296;}
case 0x71f296:{ // PMULHW XMM3,XMM7
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x13c0)}));
return 0x71f29a;}
case 0x71f29a:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f29f;}
case 0x71f29f:{ // PMULHW XMM7,XMM1
wr<16>(c,0x13c0,user_op(c,1048733,{r<16>(c,0x13c0),r<16>(c,0x1240)}));
return 0x71f2a3;}
case 0x71f2a3:{ // PADDW XMM5,XMM1
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1240)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1242)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1244)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1246)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1248)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x124a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x124c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x124e)));
return 0x71f2a7;}
case 0x71f2a7:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f2ab;}
case 0x71f2ab:{ // PMULHW XMM2,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,user_op(c,1048733,{r<16>(c,0x1280),u<16>(c,0xa600)}));
return 0x71f2b0;}
case 0x71f2b0:{ // PSUBSW XMM3,XMM5
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1340)}));
return 0x71f2b4;}
case 0x71f2b4:{ // MOVDQA XMM5,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f2b9;}
case 0x71f2b9:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71f2bd;}
case 0x71f2bd:{ // MOVDQA XMM7,XMM5
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71f2c1;}
case 0x71f2c1:{ // PSUBSW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048745,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f2c5;}
case 0x71f2c5:{ // PMULHW XMM5,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),u<16>(c,0xa600)}));
return 0x71f2ca;}
case 0x71f2ca:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f2ce;}
case 0x71f2ce:{ // PMULHW XMM1,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x71f2d3;}
case 0x71f2d3:{ // PADDSW XMM4,XMM4
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1300)}));
return 0x71f2d7;}
case 0x71f2d7:{ // PADDSW XMM4,XMM0
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1200)}));
return 0x71f2db;}
case 0x71f2db:{ // PSUBSW XMM3,XMM6
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1380)}));
return 0x71f2df;}
case 0x71f2df:{ // PADDW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x71f2e3;}
case 0x71f2e3:{ // PADDSW XMM6,XMM6
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x1380)}));
return 0x71f2e7;}
case 0x71f2e7:{ // PMULHW XMM7,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,user_op(c,1048733,{r<16>(c,0x13c0),u<16>(c,0xa600)}));
return 0x71f2ec;}
case 0x71f2ec:{ // PADDSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f2f0;}
case 0x71f2f0:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f2f5;}
case 0x71f2f5:{ // PSUBSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048745,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f2f9;}
case 0x71f2f9:{ // MOVDQA XMM4,xmmword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f2fe;}
case 0x71f2fe:{ // MOVDQA XMM5,XMM3
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f302;}
case 0x71f302:{ // PMULHW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f306;}
case 0x71f306:{ // PADDSW XMM7,XMM2
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1280)}));
return 0x71f30a;}
case 0x71f30a:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f30f;}
case 0x71f30f:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f313;}
case 0x71f313:{ // MOVDQA XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f317;}
case 0x71f317:{ // PMULHW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f31b;}
case 0x71f31b:{ // PADDW XMM5,XMM3
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x12c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x12c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x12c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x12c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x12c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x12ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x12cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x12ce)));
return 0x71f31f;}
case 0x71f31f:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f324;}
case 0x71f324:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f328;}
case 0x71f328:{ // PADDW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x71f32c;}
case 0x71f32c:{ // PSUBSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f330;}
case 0x71f330:{ // MOVDQA XMM0,XMM6
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f334;}
case 0x71f334:{ // PMULHW XMM6,XMM4
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x1300)}));
return 0x71f338;}
case 0x71f338:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71f33c;}
case 0x71f33c:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f340;}
case 0x71f340:{ // PADDSW XMM3,XMM0
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1200)}));
return 0x71f344;}
case 0x71f344:{ // PADDSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f348;}
case 0x71f348:{ // PMULHW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71f34c;}
case 0x71f34c:{ // PADDW XMM6,XMM0
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1200)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1204)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1206)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1208)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x120a)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x120c)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x120e)));
return 0x71f350;}
case 0x71f350:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f354;}
case 0x71f354:{ // PADDSW XMM2,XMM2
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1280)}));
return 0x71f358;}
case 0x71f358:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f35d;}
case 0x71f35d:{ // PADDSW XMM2,XMM6
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1380)}));
return 0x71f361;}
case 0x71f361:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71f365;}
case 0x71f365:{ // PSUBSW XMM2,XMM1
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x1240)}));
return 0x71f369;}
case 0x71f369:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f36d;}
case 0x71f36d:{ // PADDSW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f371;}
case 0x71f371:{ // PSUBSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71f375;}
case 0x71f375:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f37a;}
case 0x71f37a:{ // PADDSW XMM7,XMM7
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x13c0)}));
return 0x71f37e;}
case 0x71f37e:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f383;}
case 0x71f383:{ // PADDSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x71f387;}
case 0x71f387:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f38c;}
case 0x71f38c:{ // PSUBSW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71f390;}
case 0x71f390:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71f394;}
case 0x71f394:{ // PADDSW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f398;}
case 0x71f398:{ // PSUBSW XMM6,XMM5
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1340)}));
return 0x71f39c;}
case 0x71f39c:{ // PADDSW XMM5,XMM5
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1340)}));
return 0x71f3a0;}
case 0x71f3a0:{ // PADDSW XMM5,XMM6
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1380)}));
return 0x71f3a4;}
case 0x71f3a4:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f3a9;}
case 0x71f3a9:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f3ae;}
case 0x71f3ae:{ // PSUBSW XMM7,XMM0
wr<16>(c,0x13c0,user_op(c,1048745,{r<16>(c,0x13c0),r<16>(c,0x1200)}));
return 0x71f3b2;}
case 0x71f3b2:{ // PADDSW XMM0,XMM0
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x1200)}));
return 0x71f3b6;}
case 0x71f3b6:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71f3ba;}
case 0x71f3ba:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f3bf;}
case 0x71f3bf:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f3c4;}
case 0x71f3c4:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f3c9;}
case 0x71f3c9:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f3cd;}
case 0x71f3cd:{ // MOVDQA XMM4,xmmword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f3d2;}
case 0x71f3d2:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f3d7;}
case 0x71f3d7:{ // MOVDQA XMM5,XMM4
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71f3db;}
case 0x71f3db:{ // PUNPCKLWD XMM4,XMM0
wr<2>(c,0x130e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x130c,eval<Op::COPY,2,2>(r<2>(c,0x1306)));
wr<2>(c,0x130a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1308,eval<Op::COPY,2,2>(r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1304,eval<Op::COPY,2,2>(r<2>(c,0x1302)));
wr<2>(c,0x1302,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x71f3df;}
case 0x71f3df:{ // PUNPCKHWD XMM5,XMM0
wr<2>(c,0x1340,eval<Op::COPY,2,2>(r<2>(c,0x1348)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x134a)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x134c)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x134e)));
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x71f3e3;}
case 0x71f3e3:{ // MOVDQA XMM6,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f3e8;}
case 0x71f3e8:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f3ed;}
case 0x71f3ed:{ // MOVDQA XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f3f1;}
case 0x71f3f1:{ // PUNPCKLWD XMM6,XMM0
wr<2>(c,0x138e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x138c,eval<Op::COPY,2,2>(r<2>(c,0x1386)));
wr<2>(c,0x138a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1388,eval<Op::COPY,2,2>(r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::COPY,2,2>(r<2>(c,0x1382)));
wr<2>(c,0x1382,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x71f3f5;}
case 0x71f3f5:{ // PUNPCKHWD XMM7,XMM0
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x71f3f9;}
case 0x71f3f9:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71f3fd;}
case 0x71f3fd:{ // PUNPCKLDQ XMM4,XMM6
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
return 0x71f401;}
case 0x71f401:{ // PUNPCKHDQ XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x71f405;}
case 0x71f405:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f40a;}
case 0x71f40a:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71f40e;}
case 0x71f40e:{ // PUNPCKLDQ XMM5,XMM7
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
return 0x71f412;}
case 0x71f412:{ // PUNPCKHDQ XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x71f416;}
case 0x71f416:{ // MOVDQA XMM0,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f41a;}
case 0x71f41a:{ // MOVDQA XMM1,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f41f;}
case 0x71f41f:{ // MOVDQA XMM7,XMM0
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f423;}
case 0x71f423:{ // PUNPCKLWD XMM0,XMM1
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x1246)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x1244)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x1240)));
return 0x71f427;}
case 0x71f427:{ // PUNPCKHWD XMM7,XMM1
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
return 0x71f42b;}
case 0x71f42b:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f430;}
case 0x71f430:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f435;}
case 0x71f435:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f439;}
case 0x71f439:{ // PUNPCKLWD XMM2,XMM3
wr<2>(c,0x128e,eval<Op::COPY,2,2>(r<2>(c,0x12c6)));
wr<2>(c,0x128c,eval<Op::COPY,2,2>(r<2>(c,0x1286)));
wr<2>(c,0x128a,eval<Op::COPY,2,2>(r<2>(c,0x12c4)));
wr<2>(c,0x1288,eval<Op::COPY,2,2>(r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::COPY,2,2>(r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::COPY,2,2>(r<2>(c,0x1282)));
wr<2>(c,0x1282,eval<Op::COPY,2,2>(r<2>(c,0x12c0)));
return 0x71f43d;}
case 0x71f43d:{ // PUNPCKHWD XMM1,XMM3
wr<2>(c,0x1240,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x12c8)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x12ca)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x12cc)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x12ce)));
return 0x71f441;}
case 0x71f441:{ // MOVDQA XMM3,XMM0
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f445;}
case 0x71f445:{ // PUNPCKLDQ XMM0,XMM2
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
return 0x71f449;}
case 0x71f449:{ // PUNPCKHDQ XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x71f44d;}
case 0x71f44d:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x71f451;}
case 0x71f451:{ // PUNPCKLDQ XMM2,XMM1
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x71f455;}
case 0x71f455:{ // PUNPCKHDQ XMM7,XMM1
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x71f459;}
case 0x71f459:{ // MOVDQA XMM1,XMM0
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f45d;}
case 0x71f45d:{ // PUNPCKLQDQ XMM0,XMM4
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
return 0x71f461;}
case 0x71f461:{ // PUNPCKHQDQ XMM1,XMM4
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
return 0x71f465;}
case 0x71f465:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f469;}
case 0x71f469:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f46e;}
case 0x71f46e:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f473;}
case 0x71f473:{ // MOVDQA XMM1,XMM3
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f477;}
case 0x71f477:{ // PUNPCKLQDQ XMM1,XMM0
wr<8>(c,0x1248,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x71f47b;}
case 0x71f47b:{ // PUNPCKHQDQ XMM3,XMM0
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x71f47f;}
case 0x71f47f:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f483;}
case 0x71f483:{ // PUNPCKLQDQ XMM4,XMM5
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1340)));
return 0x71f487;}
case 0x71f487:{ // PUNPCKHQDQ XMM2,XMM5
wr<8>(c,0x1280,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1348)));
return 0x71f48b;}
case 0x71f48b:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f490;}
case 0x71f490:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f495;}
case 0x71f495:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f49a;}
case 0x71f49a:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f49f;}
case 0x71f49f:{ // MOVDQA XMM5,XMM7
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x71f4a3;}
case 0x71f4a3:{ // PUNPCKLQDQ XMM5,XMM6
wr<8>(c,0x1348,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
return 0x71f4a7;}
case 0x71f4a7:{ // PUNPCKHQDQ XMM7,XMM6
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(r<8>(c,0x13c8)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
return 0x71f4ab;}
case 0x71f4ab:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f4b0;}
case 0x71f4b0:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f4b5;}
case 0x71f4b5:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4ba;}
case 0x71f4ba:{ // MOVDQA XMM6,xmmword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4bf;}
case 0x71f4bf:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f4c3;}
case 0x71f4c3:{ // MOVDQA XMM7,xmmword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4c8;}
case 0x71f4c8:{ // PMULHW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x71f4cc;}
case 0x71f4cc:{ // MOVDQA XMM1,xmmword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4d1;}
case 0x71f4d1:{ // PMULHW XMM6,XMM7
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x13c0)}));
return 0x71f4d5;}
case 0x71f4d5:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x71f4d9;}
case 0x71f4d9:{ // PMULHW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f4dd;}
case 0x71f4dd:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4e2;}
case 0x71f4e2:{ // PMULHW XMM5,XMM7
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),r<16>(c,0x13c0)}));
return 0x71f4e6;}
case 0x71f4e6:{ // MOVDQA XMM0,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4ea;}
case 0x71f4ea:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x71f4ee;}
case 0x71f4ee:{ // PADDW XMM6,XMM7
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x13c0)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x13c2)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x13c4)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x13c6)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x13c8)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x13ca)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x13cc)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x13ce)));
return 0x71f4f2;}
case 0x71f4f2:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f4f6;}
case 0x71f4f6:{ // MOVDQA XMM1,xmmword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f4fb;}
case 0x71f4fb:{ // PADDW XMM7,XMM5
wr<2>(c,0x13c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c0),r<2>(c,0x1340)));
wr<2>(c,0x13c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c2),r<2>(c,0x1342)));
wr<2>(c,0x13c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c4),r<2>(c,0x1344)));
wr<2>(c,0x13c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c6),r<2>(c,0x1346)));
wr<2>(c,0x13c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13c8),r<2>(c,0x1348)));
wr<2>(c,0x13ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13ca),r<2>(c,0x134a)));
wr<2>(c,0x13cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13cc),r<2>(c,0x134c)));
wr<2>(c,0x13ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x13ce),r<2>(c,0x134e)));
return 0x71f4ff;}
case 0x71f4ff:{ // MOVDQA XMM5,XMM0
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f503;}
case 0x71f503:{ // PMULHW XMM0,XMM3
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x12c0)}));
return 0x71f507;}
case 0x71f507:{ // PADDSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71f50b;}
case 0x71f50b:{ // PMULHW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f50f;}
case 0x71f50f:{ // MOVDQA XMM7,xmmword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f514;}
case 0x71f514:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f518;}
case 0x71f518:{ // PADDW XMM0,XMM3
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x12c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x12c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x12c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x12c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x12c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x12ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x12cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x12ce)));
return 0x71f51c;}
case 0x71f51c:{ // PMULHW XMM3,XMM7
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x13c0)}));
return 0x71f520;}
case 0x71f520:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f525;}
case 0x71f525:{ // PMULHW XMM7,XMM1
wr<16>(c,0x13c0,user_op(c,1048733,{r<16>(c,0x13c0),r<16>(c,0x1240)}));
return 0x71f529;}
case 0x71f529:{ // PADDW XMM5,XMM1
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1240)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1242)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1244)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1246)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1248)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x124a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x124c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x124e)));
return 0x71f52d;}
case 0x71f52d:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f531;}
case 0x71f531:{ // PMULHW XMM2,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,user_op(c,1048733,{r<16>(c,0x1280),u<16>(c,0xa600)}));
return 0x71f536;}
case 0x71f536:{ // PSUBSW XMM3,XMM5
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1340)}));
return 0x71f53a;}
case 0x71f53a:{ // MOVDQA XMM5,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f53f;}
case 0x71f53f:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71f543;}
case 0x71f543:{ // MOVDQA XMM7,XMM5
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71f547;}
case 0x71f547:{ // PSUBSW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048745,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f54b;}
case 0x71f54b:{ // PMULHW XMM5,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,user_op(c,1048733,{r<16>(c,0x1340),u<16>(c,0xa600)}));
return 0x71f550;}
case 0x71f550:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f554;}
case 0x71f554:{ // PMULHW XMM1,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x71f559;}
case 0x71f559:{ // PADDSW XMM4,XMM4
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1300)}));
return 0x71f55d;}
case 0x71f55d:{ // PADDSW XMM4,XMM0
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1200)}));
return 0x71f561;}
case 0x71f561:{ // PSUBSW XMM3,XMM6
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1380)}));
return 0x71f565;}
case 0x71f565:{ // PADDW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x71f569;}
case 0x71f569:{ // PADDSW XMM6,XMM6
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x1380)}));
return 0x71f56d;}
case 0x71f56d:{ // PMULHW XMM7,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,user_op(c,1048733,{r<16>(c,0x13c0),u<16>(c,0xa600)}));
return 0x71f572;}
case 0x71f572:{ // PADDSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f576;}
case 0x71f576:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f57b;}
case 0x71f57b:{ // PSUBSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048745,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f57f;}
case 0x71f57f:{ // MOVDQA XMM4,xmmword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f584;}
case 0x71f584:{ // MOVDQA XMM5,XMM3
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f588;}
case 0x71f588:{ // PMULHW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f58c;}
case 0x71f58c:{ // PADDSW XMM7,XMM2
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1280)}));
return 0x71f590;}
case 0x71f590:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f595;}
case 0x71f595:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f599;}
case 0x71f599:{ // MOVDQA XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f59d;}
case 0x71f59d:{ // PMULHW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f5a1;}
case 0x71f5a1:{ // PADDW XMM5,XMM3
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x12c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x12c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x12c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x12c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x12c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x12ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x12cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x12ce)));
return 0x71f5a5;}
case 0x71f5a5:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f5aa;}
case 0x71f5aa:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f5ae;}
case 0x71f5ae:{ // PADDW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x71f5b2;}
case 0x71f5b2:{ // PSUBSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f5b6;}
case 0x71f5b6:{ // MOVDQA XMM0,XMM6
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f5ba;}
case 0x71f5ba:{ // PMULHW XMM6,XMM4
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x1300)}));
return 0x71f5be;}
case 0x71f5be:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71f5c2;}
case 0x71f5c2:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f5c6;}
case 0x71f5c6:{ // PADDSW XMM3,XMM0
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1200)}));
return 0x71f5ca;}
case 0x71f5ca:{ // PADDSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f5ce;}
case 0x71f5ce:{ // PMULHW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71f5d2;}
case 0x71f5d2:{ // PADDW XMM6,XMM0
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1200)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1204)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1206)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1208)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x120a)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x120c)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x120e)));
return 0x71f5d6;}
case 0x71f5d6:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f5da;}
case 0x71f5da:{ // PADDSW XMM2,XMM2
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1280)}));
return 0x71f5de;}
case 0x71f5de:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f5e3;}
case 0x71f5e3:{ // PADDSW XMM2,XMM6
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1380)}));
return 0x71f5e7;}
case 0x71f5e7:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71f5eb;}
case 0x71f5eb:{ // PSUBSW XMM2,XMM1
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x1240)}));
return 0x71f5ef;}
case 0x71f5ef:{ // PADDSW XMM2,xmmword ptr [0x00817e20]
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),m<16>(c,0x817e20)}));
return 0x71f5f7;}
case 0x71f5f7:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f5fb;}
case 0x71f5fb:{ // PADDSW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f5ff;}
case 0x71f5ff:{ // PSRAW XMM2,0x4
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x4ull}));
return 0x71f604;}
case 0x71f604:{ // PSUBSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71f608;}
case 0x71f608:{ // PSRAW XMM1,0x4
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0x4ull}));
return 0x71f60d;}
case 0x71f60d:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f612;}
case 0x71f612:{ // PADDSW XMM7,XMM7
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x13c0)}));
return 0x71f616;}
case 0x71f616:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f61b;}
case 0x71f61b:{ // PADDSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x71f61f;}
case 0x71f61f:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f624;}
case 0x71f624:{ // PSUBSW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71f628;}
case 0x71f628:{ // PADDSW XMM4,xmmword ptr [0x00817e20]
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),m<16>(c,0x817e20)}));
return 0x71f630;}
case 0x71f630:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71f634;}
case 0x71f634:{ // PADDSW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f638;}
case 0x71f638:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71f63d;}
case 0x71f63d:{ // PSUBSW XMM6,XMM5
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1340)}));
return 0x71f641;}
case 0x71f641:{ // PSRAW XMM3,0x4
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0x4ull}));
return 0x71f646;}
case 0x71f646:{ // PADDSW XMM6,xmmword ptr [0x00817e20]
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),m<16>(c,0x817e20)}));
return 0x71f64e;}
case 0x71f64e:{ // PADDSW XMM5,XMM5
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1340)}));
return 0x71f652;}
case 0x71f652:{ // PADDSW XMM5,XMM6
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1380)}));
return 0x71f656;}
case 0x71f656:{ // PSRAW XMM6,0x4
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x4ull}));
return 0x71f65b;}
case 0x71f65b:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f660;}
case 0x71f660:{ // PSRAW XMM5,0x4
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0x4ull}));
return 0x71f665;}
case 0x71f665:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f66a;}
case 0x71f66a:{ // PSUBSW XMM7,XMM0
wr<16>(c,0x13c0,user_op(c,1048745,{r<16>(c,0x13c0),r<16>(c,0x1200)}));
return 0x71f66e;}
case 0x71f66e:{ // PADDSW XMM7,xmmword ptr [0x00817e20]
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),m<16>(c,0x817e20)}));
return 0x71f676;}
case 0x71f676:{ // PADDSW XMM0,XMM0
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x1200)}));
return 0x71f67a;}
case 0x71f67a:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71f67e;}
case 0x71f67e:{ // PSRAW XMM7,0x4
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x4ull}));
return 0x71f683;}
case 0x71f683:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f688;}
case 0x71f688:{ // PSRAW XMM0,0x4
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x4ull}));
return 0x71f68d;}
case 0x71f68d:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f692;}
case 0x71f692:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f697;}
case 0x71f697:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f69b;}
case 0x71f69b:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f69c;}
case 0x71f69c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f69d;}
case 0x71f69d:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71f69e;}
case 0x71f69e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71f69f;}
case 0x71f69f:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f6a0;}
case 0x71f6a0:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71f6a2;}
case 0x71f6a2:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f6a3;}
case 0x71f6a3:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71f6a4;}
case 0x71f6a4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f6a7;}
case 0x71f6a7:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f6aa;}
case 0x71f6aa:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71f6ad;}
case 0x71f6ad:{ // LEA ECX,[0x817e40]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x817e40ull));
return 0x71f6b3;}
case 0x71f6b3:{ // MOVDQA XMM0,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6b7;}
case 0x71f6b7:{ // MOVDQA XMM1,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6bc;}
case 0x71f6bc:{ // PMULLW XMM0,xmmword ptr [EBX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0xc)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1200,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1200),u<2>(c,0x121f00)));
wr<2>(c,0x1202,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1202),u<2>(c,0x121f02)));
wr<2>(c,0x1204,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1204),u<2>(c,0x121f04)));
wr<2>(c,0x1206,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1206),u<2>(c,0x121f06)));
wr<2>(c,0x1208,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1208),u<2>(c,0x121f08)));
wr<2>(c,0x120a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120a),u<2>(c,0x121f0a)));
wr<2>(c,0x120c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120c),u<2>(c,0x121f0c)));
wr<2>(c,0x120e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120e),u<2>(c,0x121f0e)));
return 0x71f6c0;}
case 0x71f6c0:{ // PMULLW XMM1,xmmword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),u<2>(c,0x121f00)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),u<2>(c,0x121f02)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),u<2>(c,0x121f04)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),u<2>(c,0x121f06)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),u<2>(c,0x121f08)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),u<2>(c,0x121f0a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),u<2>(c,0x121f0c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),u<2>(c,0x121f0e)));
return 0x71f6c5;}
case 0x71f6c5:{ // MOVDQA XMM2,xmmword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6ca;}
case 0x71f6ca:{ // MOVDQA XMM3,xmmword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6cf;}
case 0x71f6cf:{ // PMULLW XMM2,xmmword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),u<2>(c,0x121f00)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),u<2>(c,0x121f02)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),u<2>(c,0x121f04)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),u<2>(c,0x121f06)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),u<2>(c,0x121f08)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),u<2>(c,0x121f0a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),u<2>(c,0x121f0c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),u<2>(c,0x121f0e)));
return 0x71f6d4;}
case 0x71f6d4:{ // PMULLW XMM3,xmmword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x121f00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x121f00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x121f02)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x121f04)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x121f06)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x121f08)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x121f0a)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x121f0c)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x121f0e)));
return 0x71f6d9;}
case 0x71f6d9:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f6dd;}
case 0x71f6dd:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f6e2;}
case 0x71f6e2:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f6e7;}
case 0x71f6e7:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f6ec;}
case 0x71f6ec:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6f1;}
case 0x71f6f1:{ // MOVDQA XMM6,xmmword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f6f6;}
case 0x71f6f6:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f6fa;}
case 0x71f6fa:{ // PMULHW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x71f6fe;}
case 0x71f6fe:{ // MOVDQA XMM1,xmmword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f703;}
case 0x71f703:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x71f707;}
case 0x71f707:{ // PMULHW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f70b;}
case 0x71f70b:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f710;}
case 0x71f710:{ // MOVDQA XMM0,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f714;}
case 0x71f714:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x71f718;}
case 0x71f718:{ // MOVDQA XMM7,xmmword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f71d;}
case 0x71f71d:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f721;}
case 0x71f721:{ // MOVDQA XMM5,XMM0
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f725;}
case 0x71f725:{ // PMULHW XMM0,XMM3
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x12c0)}));
return 0x71f729;}
case 0x71f729:{ // PXOR XMM6,XMM6
wr<16>(c,0x1380,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1380)));
return 0x71f72d;}
case 0x71f72d:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f731;}
case 0x71f731:{ // PADDW XMM0,XMM3
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x12c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x12c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x12c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x12c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x12c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x12ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x12cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x12ce)));
return 0x71f735;}
case 0x71f735:{ // PMULHW XMM3,XMM7
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x13c0)}));
return 0x71f739;}
case 0x71f739:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f73e;}
case 0x71f73e:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f742;}
case 0x71f742:{ // PMULHW XMM2,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,user_op(c,1048733,{r<16>(c,0x1280),u<16>(c,0xa600)}));
return 0x71f747;}
case 0x71f747:{ // PSUBSW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048745,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f74b;}
case 0x71f74b:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f74f;}
case 0x71f74f:{ // PMULHW XMM1,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x71f754;}
case 0x71f754:{ // PADDSW XMM4,XMM4
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1300)}));
return 0x71f758;}
case 0x71f758:{ // PADDSW XMM4,XMM0
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1200)}));
return 0x71f75c;}
case 0x71f75c:{ // PSUBSW XMM3,XMM6
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1380)}));
return 0x71f760;}
case 0x71f760:{ // PADDSW XMM6,XMM6
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x1380)}));
return 0x71f764;}
case 0x71f764:{ // PADDSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f768;}
case 0x71f768:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f76d;}
case 0x71f76d:{ // MOVDQA XMM4,xmmword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f772;}
case 0x71f772:{ // MOVDQA XMM5,XMM3
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f776;}
case 0x71f776:{ // PMULHW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f77a;}
case 0x71f77a:{ // MOVDQA XMM7,XMM2
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f77e;}
case 0x71f77e:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f783;}
case 0x71f783:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f787;}
case 0x71f787:{ // MOVDQA XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f78b;}
case 0x71f78b:{ // PMULHW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f78f;}
case 0x71f78f:{ // PADDW XMM5,XMM3
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x12c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x12c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x12c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x12c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x12c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x12ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x12cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x12ce)));
return 0x71f793;}
case 0x71f793:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f797;}
case 0x71f797:{ // PADDW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x71f79b;}
case 0x71f79b:{ // MOVDQA XMM0,XMM6
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f79f;}
case 0x71f79f:{ // PMULHW XMM6,XMM4
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x1300)}));
return 0x71f7a3;}
case 0x71f7a3:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f7a7;}
case 0x71f7a7:{ // PADDSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f7ab;}
case 0x71f7ab:{ // PADDW XMM6,XMM0
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1200)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1204)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1206)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1208)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x120a)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x120c)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x120e)));
return 0x71f7af;}
case 0x71f7af:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f7b3;}
case 0x71f7b3:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f7b7;}
case 0x71f7b7:{ // PADDSW XMM2,XMM2
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1280)}));
return 0x71f7bb;}
case 0x71f7bb:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f7c0;}
case 0x71f7c0:{ // PADDSW XMM2,XMM6
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1380)}));
return 0x71f7c4;}
case 0x71f7c4:{ // PSUBSW XMM2,XMM1
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x1240)}));
return 0x71f7c8;}
case 0x71f7c8:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f7cc;}
case 0x71f7cc:{ // PADDSW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f7d0;}
case 0x71f7d0:{ // PSUBSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71f7d4;}
case 0x71f7d4:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f7d9;}
case 0x71f7d9:{ // PADDSW XMM7,XMM7
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x13c0)}));
return 0x71f7dd;}
case 0x71f7dd:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f7e2;}
case 0x71f7e2:{ // PADDSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x71f7e6;}
case 0x71f7e6:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f7eb;}
case 0x71f7eb:{ // PSUBSW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71f7ef;}
case 0x71f7ef:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71f7f3;}
case 0x71f7f3:{ // PADDSW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f7f7;}
case 0x71f7f7:{ // PSUBSW XMM6,XMM5
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1340)}));
return 0x71f7fb;}
case 0x71f7fb:{ // PADDSW XMM5,XMM5
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1340)}));
return 0x71f7ff;}
case 0x71f7ff:{ // PADDSW XMM5,XMM6
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1380)}));
return 0x71f803;}
case 0x71f803:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f808;}
case 0x71f808:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f80d;}
case 0x71f80d:{ // PSUBSW XMM7,XMM0
wr<16>(c,0x13c0,user_op(c,1048745,{r<16>(c,0x13c0),r<16>(c,0x1200)}));
return 0x71f811;}
case 0x71f811:{ // PADDSW XMM0,XMM0
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x1200)}));
return 0x71f815;}
case 0x71f815:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71f819;}
case 0x71f819:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f81e;}
case 0x71f81e:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f823;}
case 0x71f823:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f828;}
case 0x71f828:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f82c;}
case 0x71f82c:{ // MOVDQA XMM4,xmmword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f831;}
case 0x71f831:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f836;}
case 0x71f836:{ // MOVDQA XMM5,XMM4
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71f83a;}
case 0x71f83a:{ // PUNPCKLWD XMM4,XMM0
wr<2>(c,0x130e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x130c,eval<Op::COPY,2,2>(r<2>(c,0x1306)));
wr<2>(c,0x130a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1308,eval<Op::COPY,2,2>(r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1304,eval<Op::COPY,2,2>(r<2>(c,0x1302)));
wr<2>(c,0x1302,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x71f83e;}
case 0x71f83e:{ // PUNPCKHWD XMM5,XMM0
wr<2>(c,0x1340,eval<Op::COPY,2,2>(r<2>(c,0x1348)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x134a)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x134c)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x134e)));
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x71f842;}
case 0x71f842:{ // MOVDQA XMM6,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f847;}
case 0x71f847:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f84c;}
case 0x71f84c:{ // MOVDQA XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f850;}
case 0x71f850:{ // PUNPCKLWD XMM6,XMM0
wr<2>(c,0x138e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x138c,eval<Op::COPY,2,2>(r<2>(c,0x1386)));
wr<2>(c,0x138a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1388,eval<Op::COPY,2,2>(r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::COPY,2,2>(r<2>(c,0x1382)));
wr<2>(c,0x1382,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x71f854;}
case 0x71f854:{ // PUNPCKHWD XMM7,XMM0
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x71f858;}
case 0x71f858:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71f85c;}
case 0x71f85c:{ // PUNPCKLDQ XMM4,XMM6
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
return 0x71f860;}
case 0x71f860:{ // PUNPCKHDQ XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x71f864;}
case 0x71f864:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f869;}
case 0x71f869:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71f86d;}
case 0x71f86d:{ // PUNPCKLDQ XMM5,XMM7
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
return 0x71f871;}
case 0x71f871:{ // PUNPCKHDQ XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x71f875;}
case 0x71f875:{ // MOVDQA XMM0,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f879;}
case 0x71f879:{ // MOVDQA XMM1,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f87e;}
case 0x71f87e:{ // MOVDQA XMM7,XMM0
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f882;}
case 0x71f882:{ // PUNPCKLWD XMM0,XMM1
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x1246)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x1244)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x1240)));
return 0x71f886;}
case 0x71f886:{ // PUNPCKHWD XMM7,XMM1
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
return 0x71f88a;}
case 0x71f88a:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f88f;}
case 0x71f88f:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f894;}
case 0x71f894:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f898;}
case 0x71f898:{ // PUNPCKLWD XMM2,XMM3
wr<2>(c,0x128e,eval<Op::COPY,2,2>(r<2>(c,0x12c6)));
wr<2>(c,0x128c,eval<Op::COPY,2,2>(r<2>(c,0x1286)));
wr<2>(c,0x128a,eval<Op::COPY,2,2>(r<2>(c,0x12c4)));
wr<2>(c,0x1288,eval<Op::COPY,2,2>(r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::COPY,2,2>(r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::COPY,2,2>(r<2>(c,0x1282)));
wr<2>(c,0x1282,eval<Op::COPY,2,2>(r<2>(c,0x12c0)));
return 0x71f89c;}
case 0x71f89c:{ // PUNPCKHWD XMM1,XMM3
wr<2>(c,0x1240,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x12c8)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x12ca)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x12cc)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x12ce)));
return 0x71f8a0;}
case 0x71f8a0:{ // MOVDQA XMM3,XMM0
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f8a4;}
case 0x71f8a4:{ // PUNPCKLDQ XMM0,XMM2
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
return 0x71f8a8;}
case 0x71f8a8:{ // PUNPCKHDQ XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x71f8ac;}
case 0x71f8ac:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x71f8b0;}
case 0x71f8b0:{ // PUNPCKLDQ XMM2,XMM1
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x71f8b4;}
case 0x71f8b4:{ // PUNPCKHDQ XMM7,XMM1
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x71f8b8;}
case 0x71f8b8:{ // MOVDQA XMM1,XMM0
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f8bc;}
case 0x71f8bc:{ // PUNPCKLQDQ XMM0,XMM4
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
return 0x71f8c0;}
case 0x71f8c0:{ // PUNPCKHQDQ XMM1,XMM4
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
return 0x71f8c4;}
case 0x71f8c4:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71f8c8;}
case 0x71f8c8:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f8cd;}
case 0x71f8cd:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f8d2;}
case 0x71f8d2:{ // MOVDQA XMM1,XMM3
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f8d6;}
case 0x71f8d6:{ // PUNPCKLQDQ XMM1,XMM0
wr<8>(c,0x1248,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x71f8da;}
case 0x71f8da:{ // PUNPCKHQDQ XMM3,XMM0
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x71f8de;}
case 0x71f8de:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f8e2;}
case 0x71f8e2:{ // PUNPCKLQDQ XMM4,XMM5
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1340)));
return 0x71f8e6;}
case 0x71f8e6:{ // PUNPCKHQDQ XMM2,XMM5
wr<8>(c,0x1280,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1348)));
return 0x71f8ea;}
case 0x71f8ea:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f8ef;}
case 0x71f8ef:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f8f4;}
case 0x71f8f4:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f8f9;}
case 0x71f8f9:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f8fe;}
case 0x71f8fe:{ // MOVDQA XMM5,XMM7
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x71f902;}
case 0x71f902:{ // PUNPCKLQDQ XMM5,XMM6
wr<8>(c,0x1348,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
return 0x71f906;}
case 0x71f906:{ // PUNPCKHQDQ XMM7,XMM6
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(r<8>(c,0x13c8)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
return 0x71f90a;}
case 0x71f90a:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f90f;}
case 0x71f90f:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f914;}
case 0x71f914:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f919;}
case 0x71f919:{ // MOVDQA XMM6,xmmword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f91e;}
case 0x71f91e:{ // MOVDQA XMM4,XMM2
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f922;}
case 0x71f922:{ // PMULHW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048733,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x71f926;}
case 0x71f926:{ // MOVDQA XMM1,xmmword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f92b;}
case 0x71f92b:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x71f92f;}
case 0x71f92f:{ // PMULHW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71f933;}
case 0x71f933:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f938;}
case 0x71f938:{ // MOVDQA XMM0,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f93c;}
case 0x71f93c:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x71f940;}
case 0x71f940:{ // MOVDQA XMM7,xmmword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f945;}
case 0x71f945:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f949;}
case 0x71f949:{ // MOVDQA XMM5,XMM0
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f94d;}
case 0x71f94d:{ // PMULHW XMM0,XMM3
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x12c0)}));
return 0x71f951;}
case 0x71f951:{ // PXOR XMM6,XMM6
wr<16>(c,0x1380,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1380)));
return 0x71f955;}
case 0x71f955:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f959;}
case 0x71f959:{ // PADDW XMM0,XMM3
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x12c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x12c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x12c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x12c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x12c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x12ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x12cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x12ce)));
return 0x71f95d;}
case 0x71f95d:{ // PMULHW XMM3,XMM7
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x13c0)}));
return 0x71f961;}
case 0x71f961:{ // MOVDQA XMM2,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f966;}
case 0x71f966:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f96a;}
case 0x71f96a:{ // PMULHW XMM2,xmmword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,user_op(c,1048733,{r<16>(c,0x1280),u<16>(c,0xa600)}));
return 0x71f96f;}
case 0x71f96f:{ // PSUBSW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048745,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f973;}
case 0x71f973:{ // PADDW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71f977;}
case 0x71f977:{ // PMULHW XMM1,xmmword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048733,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x71f97c;}
case 0x71f97c:{ // PADDSW XMM4,XMM4
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1300)}));
return 0x71f980;}
case 0x71f980:{ // PADDSW XMM4,XMM0
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),r<16>(c,0x1200)}));
return 0x71f984;}
case 0x71f984:{ // PSUBSW XMM3,XMM6
wr<16>(c,0x12c0,user_op(c,1048745,{r<16>(c,0x12c0),r<16>(c,0x1380)}));
return 0x71f988;}
case 0x71f988:{ // PADDSW XMM6,XMM6
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x1380)}));
return 0x71f98c;}
case 0x71f98c:{ // PADDSW XMM6,XMM3
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),r<16>(c,0x12c0)}));
return 0x71f990;}
case 0x71f990:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f995;}
case 0x71f995:{ // MOVDQA XMM4,xmmword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f99a;}
case 0x71f99a:{ // MOVDQA XMM5,XMM3
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71f99e;}
case 0x71f99e:{ // PMULHW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048733,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71f9a2;}
case 0x71f9a2:{ // MOVDQA XMM7,XMM2
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71f9a6;}
case 0x71f9a6:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71f9ab;}
case 0x71f9ab:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71f9af;}
case 0x71f9af:{ // MOVDQA XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f9b3;}
case 0x71f9b3:{ // PMULHW XMM0,XMM4
wr<16>(c,0x1200,user_op(c,1048733,{r<16>(c,0x1200),r<16>(c,0x1300)}));
return 0x71f9b7;}
case 0x71f9b7:{ // PADDW XMM5,XMM3
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x12c0)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x12c2)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x12c4)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x12c6)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x12c8)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x12ca)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x12cc)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x12ce)));
return 0x71f9bb;}
case 0x71f9bb:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x71f9bf;}
case 0x71f9bf:{ // PADDW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x71f9c3;}
case 0x71f9c3:{ // MOVDQA XMM0,XMM6
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f9c7;}
case 0x71f9c7:{ // PMULHW XMM6,XMM4
wr<16>(c,0x1380,user_op(c,1048733,{r<16>(c,0x1380),r<16>(c,0x1300)}));
return 0x71f9cb;}
case 0x71f9cb:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f9cf;}
case 0x71f9cf:{ // PADDSW XMM1,XMM5
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1340)}));
return 0x71f9d3;}
case 0x71f9d3:{ // PADDW XMM6,XMM0
wr<2>(c,0x1380,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1200)));
wr<2>(c,0x1382,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1202)));
wr<2>(c,0x1384,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1204)));
wr<2>(c,0x1386,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1206)));
wr<2>(c,0x1388,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1208)));
wr<2>(c,0x138a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138a),r<2>(c,0x120a)));
wr<2>(c,0x138c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138c),r<2>(c,0x120c)));
wr<2>(c,0x138e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x138e),r<2>(c,0x120e)));
return 0x71f9d7;}
case 0x71f9d7:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71f9db;}
case 0x71f9db:{ // PSUBSW XMM6,XMM2
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1280)}));
return 0x71f9df;}
case 0x71f9df:{ // PADDSW XMM2,XMM2
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1280)}));
return 0x71f9e3;}
case 0x71f9e3:{ // MOVDQA XMM0,xmmword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71f9e8;}
case 0x71f9e8:{ // PADDSW XMM2,XMM6
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),r<16>(c,0x1380)}));
return 0x71f9ec;}
case 0x71f9ec:{ // PSUBSW XMM2,XMM1
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x1240)}));
return 0x71f9f0;}
case 0x71f9f0:{ // PADDSW XMM2,xmmword ptr [0x00817e20]
wr<16>(c,0x1280,user_op(c,1048718,{r<16>(c,0x1280),m<16>(c,0x817e20)}));
return 0x71f9f8;}
case 0x71f9f8:{ // PADDSW XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x71f9fc;}
case 0x71f9fc:{ // PADDSW XMM1,XMM2
wr<16>(c,0x1240,user_op(c,1048718,{r<16>(c,0x1240),r<16>(c,0x1280)}));
return 0x71fa00;}
case 0x71fa00:{ // PSRAW XMM2,0x4
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x4ull}));
return 0x71fa05;}
case 0x71fa05:{ // PSUBSW XMM4,XMM7
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x13c0)}));
return 0x71fa09;}
case 0x71fa09:{ // PSRAW XMM1,0x4
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0x4ull}));
return 0x71fa0e;}
case 0x71fa0e:{ // MOVDQA XMM3,xmmword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71fa13;}
case 0x71fa13:{ // PADDSW XMM7,XMM7
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x13c0)}));
return 0x71fa17;}
case 0x71fa17:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa1c;}
case 0x71fa1c:{ // PADDSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x71fa20;}
case 0x71fa20:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa25;}
case 0x71fa25:{ // PSUBSW XMM4,XMM3
wr<16>(c,0x1300,user_op(c,1048745,{r<16>(c,0x1300),r<16>(c,0x12c0)}));
return 0x71fa29;}
case 0x71fa29:{ // PADDSW XMM4,xmmword ptr [0x00817e20]
wr<16>(c,0x1300,user_op(c,1048718,{r<16>(c,0x1300),m<16>(c,0x817e20)}));
return 0x71fa31;}
case 0x71fa31:{ // PADDSW XMM3,XMM3
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x12c0)}));
return 0x71fa35;}
case 0x71fa35:{ // PADDSW XMM3,XMM4
wr<16>(c,0x12c0,user_op(c,1048718,{r<16>(c,0x12c0),r<16>(c,0x1300)}));
return 0x71fa39;}
case 0x71fa39:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71fa3e;}
case 0x71fa3e:{ // PSUBSW XMM6,XMM5
wr<16>(c,0x1380,user_op(c,1048745,{r<16>(c,0x1380),r<16>(c,0x1340)}));
return 0x71fa42;}
case 0x71fa42:{ // PSRAW XMM3,0x4
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0x4ull}));
return 0x71fa47;}
case 0x71fa47:{ // PADDSW XMM6,xmmword ptr [0x00817e20]
wr<16>(c,0x1380,user_op(c,1048718,{r<16>(c,0x1380),m<16>(c,0x817e20)}));
return 0x71fa4f;}
case 0x71fa4f:{ // PADDSW XMM5,XMM5
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1340)}));
return 0x71fa53;}
case 0x71fa53:{ // PADDSW XMM5,XMM6
wr<16>(c,0x1340,user_op(c,1048718,{r<16>(c,0x1340),r<16>(c,0x1380)}));
return 0x71fa57;}
case 0x71fa57:{ // PSRAW XMM6,0x4
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x4ull}));
return 0x71fa5c;}
case 0x71fa5c:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa61;}
case 0x71fa61:{ // PSRAW XMM5,0x4
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0x4ull}));
return 0x71fa66;}
case 0x71fa66:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa6b;}
case 0x71fa6b:{ // PSUBSW XMM7,XMM0
wr<16>(c,0x13c0,user_op(c,1048745,{r<16>(c,0x13c0),r<16>(c,0x1200)}));
return 0x71fa6f;}
case 0x71fa6f:{ // PADDSW XMM7,xmmword ptr [0x00817e20]
wr<16>(c,0x13c0,user_op(c,1048718,{r<16>(c,0x13c0),m<16>(c,0x817e20)}));
return 0x71fa77;}
case 0x71fa77:{ // PADDSW XMM0,XMM0
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x1200)}));
return 0x71fa7b;}
case 0x71fa7b:{ // PADDSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048718,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71fa7f;}
case 0x71fa7f:{ // PSRAW XMM7,0x4
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x4ull}));
return 0x71fa84;}
case 0x71fa84:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa89;}
case 0x71fa89:{ // PSRAW XMM0,0x4
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x4ull}));
return 0x71fa8e;}
case 0x71fa8e:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa93;}
case 0x71fa93:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fa98;}
case 0x71fa98:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71fa9c;}
case 0x71fa9c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fa9d;}
case 0x71fa9d:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fa9e;}
case 0x71fa9e:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fa9f;}
case 0x71fa9f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71faa0;}
case 0x71faa0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71faa1;}
case 0x71faa1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71faa3;}
case 0x71faa3:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71faa6;}
case 0x71faa6:{ // MOV EDX,0xf
wr<4>(c,0x8,eval<Op::COPY,4,4>(0xfull));
return 0x71faab;}
case 0x71faab:{ // MOVD XMM2,EDX
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x8)));
return 0x71faaf;}
case 0x71faaf:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fab2;}
case 0x71fab2:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fab5;}
case 0x71fab5:{ // MOVQ XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71fab9;}
case 0x71fab9:{ // MOVQ XMM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71fabd;}
case 0x71fabd:{ // PMULLW XMM0,XMM1
wr<2>(c,0x1200,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1240)));
wr<2>(c,0x1202,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1244)));
wr<2>(c,0x1206,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1246)));
wr<2>(c,0x1208,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1248)));
wr<2>(c,0x120a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120a),r<2>(c,0x124a)));
wr<2>(c,0x120c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120c),r<2>(c,0x124c)));
wr<2>(c,0x120e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120e),r<2>(c,0x124e)));
return 0x71fac1;}
case 0x71fac1:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71fac5;}
case 0x71fac5:{ // PSRAW XMM0,0x5
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x5ull}));
return 0x71faca;}
case 0x71faca:{ // PUNPCKLWD XMM0,XMM0
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x71face;}
case 0x71face:{ // PUNPCKLDQ XMM0,XMM0
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x71fad2;}
case 0x71fad2:{ // PUNPCKLQDQ XMM0,XMM0
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x71fad6;}
case 0x71fad6:{ // MOVDQA XMM1,XMM0
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71fada;}
case 0x71fada:{ // MOVDQA xmmword ptr [EDX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x8),u<16>(c,0xa600));
return 0x71fade;}
case 0x71fade:{ // MOVDQA xmmword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fae3;}
case 0x71fae3:{ // MOVDQA xmmword ptr [EDX + 0x20],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fae8;}
case 0x71fae8:{ // MOVDQA xmmword ptr [EDX + 0x30],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71faed;}
case 0x71faed:{ // MOVDQA xmmword ptr [EDX + 0x40],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71faf2;}
case 0x71faf2:{ // MOVDQA xmmword ptr [EDX + 0x50],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71faf7;}
case 0x71faf7:{ // MOVDQA xmmword ptr [EDX + 0x60],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fafc;}
case 0x71fafc:{ // MOVDQA xmmword ptr [EDX + 0x70],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71fb01;}
case 0x71fb01:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fb02;}
case 0x71fb02:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fb03;}
case 0x71fb03:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb04;}
case 0x71fb04:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71fb06;}
case 0x71fb06:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb09;}
case 0x71fb09:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fb0c;}
case 0x71fb0c:{ // AND dword ptr [EBP + -0x4],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fb10;}
case 0x71fb10:{ // AND dword ptr [EBP + -0x8],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fb14;}
case 0x71fb14:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fb17;}
case 0x71fb17:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb18;}
case 0x71fb18:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb1a;}
case 0x71fb1a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb1b;}
case 0x71fb1b:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fb1e;}
case 0x71fb1e:{ // MOV dword ptr [EBP + 0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x4ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fb25;}
case 0x71fb25:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb26;}
case 0x71fb26:{ // MOVZX EDX,byte ptr [ECX + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fb2a;}
case 0x71fb2a:{ // MOVZX ESI,byte ptr [ECX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fb2d;}
case 0x71fb2d:{ // MOVZX EAX,byte ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fb31;}
case 0x71fb31:{ // MOVZX EDI,byte ptr [ECX + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x6ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fb35;}
case 0x71fb35:{ // LEA EBX,[ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71fb38;}
case 0x71fb38:{ // ADD EBX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb3a;}
case 0x71fb3a:{ // ADD EBX,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb3c;}
case 0x71fb3c:{ // ADD dword ptr [EBP + -0x4],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0xc)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0xc)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0xc)));
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
return 0x71fb3f;}
case 0x71fb3f:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x71fb41;}
case 0x71fb41:{ // IMUL EAX,EDX
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x8)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fb44;}
case 0x71fb44:{ // MOV EBX,ESI
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x71fb46;}
case 0x71fb46:{ // IMUL EBX,ESI
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0xc)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0xc,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fb49;}
case 0x71fb49:{ // ADD EBX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb4b;}
case 0x71fb4b:{ // MOVZX EAX,byte ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fb4f;}
case 0x71fb4f:{ // ADD ECX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb52;}
case 0x71fb52:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x71fb54;}
case 0x71fb54:{ // IMUL EDX,EAX
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x8)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fb57;}
case 0x71fb57:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x71fb59;}
case 0x71fb59:{ // IMUL EAX,EDI
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fb5c;}
case 0x71fb5c:{ // ADD EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x71fb5f;}
case 0x71fb5f:{ // ADD EBX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb61;}
case 0x71fb61:{ // ADD EAX,EBX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb63;}
case 0x71fb63:{ // DEC dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x71fb66;}
case 0x71fb66:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fb69;}
case 0x71fb69:{ // JNZ 0x0071fb26
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fb26;}
return 0x71fb6b;}
case 0x71fb6b:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fb6e;}
case 0x71fb6e:{ // IMUL ECX,ECX
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fb71;}
case 0x71fb71:{ // SHL EAX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x71fb74;}
case 0x71fb74:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fb75;}
case 0x71fb75:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb77;}
case 0x71fb77:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fb78;}
case 0x71fb78:{ // SHR EAX,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x0),u<4>(c,0xa1b00)));
wu<1>(c,0x4d300,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
wu<4>(c,0x4d400,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<4>(c,0x4d500,eval<Op::INT_RIGHT,4,4,4>(u<4>(c,0xa1c00),u<4>(c,0x4d400)));
wu<4>(c,0x4d600,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4d500),0x1ull));
wu<1>(c,0x4d700,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d600),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d700)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d800,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<1>(c,0x4d900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa1c00),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d900)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
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
return 0x71fb7b;}
case 0x71fb7b:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fb7c;}
case 0x71fb7c:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x71fb7d;}
case 0x71fb7d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fb7e;}
case 0x71fb7e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb7f;}
case 0x71fb7f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71fb81;}
case 0x71fb81:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fb84;}
case 0x71fb84:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb85;}
case 0x71fb85:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb86;}
case 0x71fb86:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fb88;}
case 0x71fb88:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fb89;}
case 0x71fb89:{ // MOV dword ptr [ECX + 0x4538],0x40
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4538ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x40ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x71fb93;}
case 0x71fb93:{ // MOV dword ptr [EBP + 0x8],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fb96;}
case 0x71fb96:{ // LEA EDI,[ECX + 0x4938]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4938ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71fb9c;}
case 0x71fb9c:{ // MOV ESI,dword ptr [ECX + 0x4538]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4538ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fba2;}
case 0x71fba2:{ // LEA EAX,[ESI + ESI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71fba5;}
case 0x71fba5:{ // SHL EAX,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<4>(c,0x0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<1>(c,0x9b900,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9b900)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fba7;}
case 0x71fba7:{ // SUB EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbaa;}
case 0x71fbaa:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbac;}
case 0x71fbac:{ // DIV ESI
wu<8>(c,0x6ac00,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x18)));
wu<8>(c,0x6ad00,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x8)));
wu<8>(c,0x6ae00,eval<Op::INT_LEFT,8,8,4>(u<8>(c,0x6ad00),0x20ull));
wu<8>(c,0x6af00,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x6b100,eval<Op::INT_OR,8,8,8>(u<8>(c,0x6ae00),u<8>(c,0x6af00)));
wu<8>(c,0x6b300,eval<Op::INT_DIV,8,8,8>(u<8>(c,0x6b100),u<8>(c,0x6ac00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x6b300),0x0ull));
wu<8>(c,0x6b600,eval<Op::INT_REM,8,8,8>(u<8>(c,0x6b100),u<8>(c,0x6ac00)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x6b600),0x0ull));
return 0x71fbae;}
case 0x71fbae:{ // ADD dword ptr [EBP + 0x8],0x5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x5ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x5ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x5ull));
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
return 0x71fbb2;}
case 0x71fbb2:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbb3;}
case 0x71fbb3:{ // MOV dword ptr [EDI],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x71fbb5;}
case 0x71fbb5:{ // SUB EDI,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x4ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbb8;}
case 0x71fbb8:{ // CMP EBX,dword ptr [ECX + 0x4538]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4538ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbbe;}
case 0x71fbbe:{ // JC 0x0071fb9c
if(r<1>(c,0x200)){return 0x71fb9c;}
return 0x71fbc0;}
case 0x71fbc0:{ // MOV EDX,dword ptr [ECX + 0x4538]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4538ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fbc6;}
case 0x71fbc6:{ // MOV EAX,0xff
wr<4>(c,0x0,eval<Op::COPY,4,4>(0xffull));
return 0x71fbcb;}
case 0x71fbcb:{ // CMP EDX,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbcd;}
case 0x71fbcd:{ // JNC 0x0071fbe7
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x71fbe7;}
return 0x71fbcf;}
case 0x71fbcf:{ // MOV ESI,0x124e
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x124eull));
return 0x71fbd4;}
case 0x71fbd4:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbd6;}
case 0x71fbd6:{ // LEA ECX,[ECX + ESI*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71fbd9;}
case 0x71fbd9:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbdb;}
case 0x71fbdb:{ // MOV dword ptr [ECX],0x1
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x71fbe1;}
case 0x71fbe1:{ // SUB ECX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbe4;}
case 0x71fbe4:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbe5;}
case 0x71fbe5:{ // JNZ 0x0071fbdb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fbdb;}
return 0x71fbe7;}
case 0x71fbe7:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fbe8;}
case 0x71fbe8:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fbe9;}
case 0x71fbe9:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fbea;}
case 0x71fbea:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fbeb;}
case 0x71fbeb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fbec;}
case 0x71fbec:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fbed;}
case 0x71fbed:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71fbef;}
case 0x71fbef:{ // SUB ESP,0x24
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x24ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbf2;}
case 0x71fbf2:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fbf5;}
case 0x71fbf5:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fbf6;}
case 0x71fbf6:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fbf7;}
case 0x71fbf7:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fbf8;}
case 0x71fbf8:{ // MOV EDI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fbfb;}
case 0x71fbfb:{ // OR DL,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x8,eval<Op::INT_OR,1,1,1>(r<1>(c,0x8),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x8),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fbfe;}
case 0x71fbfe:{ // XOR BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xc,eval<Op::INT_XOR,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xc),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc00;}
case 0x71fc00:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc02;}
case 0x71fc02:{ // JBE 0x0071fc2d
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fc2d;}
return 0x71fc04;}
case 0x71fc04:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc07;}
case 0x71fc07:{ // MOV ESI,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc0a;}
case 0x71fc0a:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc0c;}
case 0x71fc0c:{ // JBE 0x0071fc20
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fc20;}
return 0x71fc0e;}
case 0x71fc0e:{ // MOV AL,byte ptr [ECX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x4)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x71fc10;}
case 0x71fc10:{ // CMP AL,DL
wu<1>(c,0x62700,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wu<1>(c,0x62900,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62900),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62900),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62900),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc12;}
case 0x71fc12:{ // JNC 0x0071fc16
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x71fc16;}
return 0x71fc14;}
case 0x71fc14:{ // MOV DL,AL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x71fc16;}
case 0x71fc16:{ // CMP AL,BL
wu<1>(c,0x62700,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wu<1>(c,0x62900,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),u<1>(c,0x62700)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62900),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62900),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62900),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc18;}
case 0x71fc18:{ // JBE 0x0071fc1c
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fc1c;}
return 0x71fc1a;}
case 0x71fc1a:{ // MOV BL,AL
wr<1>(c,0xc,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x71fc1c;}
case 0x71fc1c:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc1d;}
case 0x71fc1d:{ // DEC ESI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc1e;}
case 0x71fc1e:{ // JNZ 0x0071fc0e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fc0e;}
return 0x71fc20;}
case 0x71fc20:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc23;}
case 0x71fc23:{ // SUB EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc26;}
case 0x71fc26:{ // ADD ECX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc28;}
case 0x71fc28:{ // DEC dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x71fc2b;}
case 0x71fc2b:{ // JNZ 0x0071fc07
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fc07;}
return 0x71fc2d;}
case 0x71fc2d:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc30;}
case 0x71fc30:{ // MOVZX EDX,DL
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x8)));
return 0x71fc33;}
case 0x71fc33:{ // MOV ESI,0x124e
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x124eull));
return 0x71fc38;}
case 0x71fc38:{ // MOVZX EAX,BL
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(r<1>(c,0xc)));
return 0x71fc3b;}
case 0x71fc3b:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc3d;}
case 0x71fc3d:{ // MOV ESI,dword ptr [ECX + ESI*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc40;}
case 0x71fc40:{ // MOV ECX,dword ptr [ECX + EAX*0x4 + 0x453c]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0x453cull,r<4>(c,0x4)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7d00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc47;}
case 0x71fc47:{ // CMP ESI,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc49;}
case 0x71fc49:{ // MOV dword ptr [EBP + 0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc4c;}
case 0x71fc4c:{ // JA 0x0071fc51
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x71fc51;}
return 0x71fc4e;}
case 0x71fc4e:{ // MOV dword ptr [EBP + 0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc51;}
case 0x71fc51:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc54;}
case 0x71fc54:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc56;}
case 0x71fc56:{ // SAR EAX,0x5
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
wu<4>(c,0x99500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x0),u<4>(c,0x99400)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
wu<4>(c,0x4ce00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x99400),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,4>(u<4>(c,0x99500),u<4>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
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
return 0x71fc59;}
case 0x71fc59:{ // ADD dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
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
return 0x71fc5c;}
case 0x71fc5c:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc5e;}
case 0x71fc5e:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc61;}
case 0x71fc61:{ // JBE 0x0071fd0c
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fd0c;}
return 0x71fc67;}
case 0x71fc67:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc6a;}
case 0x71fc6a:{ // NEG EDX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_2COMP,4,4>(r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc6c;}
case 0x71fc6c:{ // LEA EAX,[EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71fc6f;}
case 0x71fc6f:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc71;}
case 0x71fc71:{ // MOV dword ptr [EBP + -0x14],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc74;}
case 0x71fc74:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc77;}
case 0x71fc77:{ // MOV dword ptr [EBP + -0x10],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc7a;}
case 0x71fc7a:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fc7d;}
case 0x71fc7d:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc7f;}
case 0x71fc7f:{ // JBE 0x0071fcde
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fcde;}
return 0x71fc81;}
case 0x71fc81:{ // MOV dword ptr [EBP + -0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fc84;}
case 0x71fc84:{ // MOVZX EAX,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fc87;}
case 0x71fc87:{ // LEA EDI,[ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71fc8a;}
case 0x71fc8a:{ // MOVZX ECX,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fc8d;}
case 0x71fc8d:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc8f;}
case 0x71fc8f:{ // MOVZX ECX,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fc92;}
case 0x71fc92:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x71fc93;}
case 0x71fc93:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x71fc95;}
case 0x71fc95:{ // MOVZX EAX,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fc98;}
case 0x71fc98:{ // XOR EBX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc9a;}
case 0x71fc9a:{ // SUB EBX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fc9c;}
case 0x71fc9c:{ // MOVZX EDX,byte ptr [EDI + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xfffffffeull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fca0;}
case 0x71fca0:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fca2;}
case 0x71fca2:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x71fca3;}
case 0x71fca3:{ // XOR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fca5;}
case 0x71fca5:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fca7;}
case 0x71fca7:{ // SHL ECX,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<4>(c,0x4,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<1>(c,0x9b900,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9b900)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fca9;}
case 0x71fca9:{ // CMP EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcac;}
case 0x71fcac:{ // JG 0x0071fcb4
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71fcb4;}
return 0x71fcae;}
case 0x71fcae:{ // MOVZX EAX,byte ptr [EDI + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xfffffffeull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fcb2;}
case 0x71fcb2:{ // JMP 0x0071fcb7
return 0x71fcb7;
return 0x71fcb4;}
case 0x71fcb4:{ // MOVZX EAX,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fcb7;}
case 0x71fcb7:{ // ADD ECX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcb9;}
case 0x71fcb9:{ // CMP EBX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcbc;}
case 0x71fcbc:{ // JG 0x0071fcc3
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71fcc3;}
return 0x71fcbe;}
case 0x71fcbe:{ // MOVZX EAX,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fcc1;}
case 0x71fcc1:{ // JMP 0x0071fcc6
return 0x71fcc6;
return 0x71fcc3;}
case 0x71fcc3:{ // MOVZX EAX,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fcc6;}
case 0x71fcc6:{ // ADD ECX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcc8;}
case 0x71fcc8:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fccb;}
case 0x71fccb:{ // ADD ECX,0x2
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x2ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcce;}
case 0x71fcce:{ // SAR ECX,0x2
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0x99500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0x99400)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
wu<4>(c,0x4ce00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x99400),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,4>(u<4>(c,0x99500),u<4>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
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
return 0x71fcd1;}
case 0x71fcd1:{ // DEC dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x71fcd4;}
case 0x71fcd4:{ // MOV byte ptr [EAX + ESI*0x1],CL
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6c00),u<1>(c,0xa100));
return 0x71fcd7;}
case 0x71fcd7:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x71fcd9;}
case 0x71fcd9:{ // JNZ 0x0071fc84
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fc84;}
return 0x71fcdb;}
case 0x71fcdb:{ // MOV EDX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fcde;}
case 0x71fcde:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fce1;}
case 0x71fce1:{ // MOV EDI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fce4;}
case 0x71fce4:{ // MOV EBX,ECX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x71fce6;}
case 0x71fce6:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
wu<1>(c,0x4d300,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
wu<4>(c,0x4d400,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<4>(c,0x4d500,eval<Op::INT_RIGHT,4,4,4>(u<4>(c,0xa1c00),u<4>(c,0x4d400)));
wu<4>(c,0x4d600,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4d500),0x1ull));
wu<1>(c,0x4d700,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d600),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d700)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d800,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<1>(c,0x4d900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa1c00),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d900)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
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
return 0x71fce9;}
case 0x71fce9:{ // LEA ESI,[EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71fcec;}
case 0x71fcec:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71fcee;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x14300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x14400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x14500,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x14600,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x14500)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x14400),u<4>(c,0x14600)));
wu<4>(c,0x14800,m<4>(c,u<4>(c,0x14300)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(u<4>(c,0x14800)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71fcec;
return 0x71fcee;}
case 0x71fcee:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71fcf0;}
case 0x71fcf0:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcf3;}
case 0x71fcf3:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71fcf5;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<4>(c,0x12900,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x12a00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x12b00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x12c00,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x12b00)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x12a00),u<4>(c,0x12c00)));
wu<1>(c,0x12e00,m<1>(c,u<4>(c,0x12900)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(u<1>(c,0x12e00)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x71fcf3;
return 0x71fcf5;}
case 0x71fcf5:{ // MOV ESI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fcf8;}
case 0x71fcf8:{ // ADD ESI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcfb;}
case 0x71fcfb:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fcfd;}
case 0x71fcfd:{ // DEC dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x71fd00;}
case 0x71fd00:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd03;}
case 0x71fd03:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd06;}
case 0x71fd06:{ // JNZ 0x0071fc7a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71fc7a;}
return 0x71fd0c;}
case 0x71fd0c:{ // AND dword ptr [EBP + -0x8],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fd10;}
case 0x71fd10:{ // CMP dword ptr [EBP + 0x14],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd14;}
case 0x71fd14:{ // JBE 0x0071fdda
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fdda;}
return 0x71fd1a;}
case 0x71fd1a:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd1d;}
case 0x71fd1d:{ // MOV EAX,EBX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71fd1f;}
case 0x71fd1f:{ // SUB EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd22;}
case 0x71fd22:{ // MOV dword ptr [EBP + -0xc],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd25;}
case 0x71fd25:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd28;}
case 0x71fd28:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd2b;}
case 0x71fd2b:{ // MOV ECX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd2e;}
case 0x71fd2e:{ // AND dword ptr [EBP + -0x10],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fd32;}
case 0x71fd32:{ // LEA EDI,[EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71fd35;}
case 0x71fd35:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd38;}
case 0x71fd38:{ // MOV dword ptr [EBP + -0x4],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd3b;}
case 0x71fd3b:{ // ADD EBX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd3d;}
case 0x71fd3d:{ // CMP dword ptr [EBP + 0x18],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd41;}
case 0x71fd41:{ // JBE 0x0071fdac
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fdac;}
return 0x71fd43;}
case 0x71fd43:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd46;}
case 0x71fd46:{ // MOVZX ECX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fd49;}
case 0x71fd49:{ // MOVZX EDX,byte ptr [EBX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0xc)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fd4c;}
case 0x71fd4c:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x71fd4e;}
case 0x71fd4e:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd50;}
case 0x71fd50:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x71fd51;}
case 0x71fd51:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x71fd53;}
case 0x71fd53:{ // XOR ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd55;}
case 0x71fd55:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd57;}
case 0x71fd57:{ // MOVZX EDX,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fd5a;}
case 0x71fd5a:{ // LEA EAX,[ECX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71fd5d;}
case 0x71fd5d:{ // MOV dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fd60;}
case 0x71fd60:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x71fd62;}
case 0x71fd62:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd64;}
case 0x71fd64:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x71fd65;}
case 0x71fd65:{ // XOR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd67;}
case 0x71fd67:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd69;}
case 0x71fd69:{ // CMP EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd6c;}
case 0x71fd6c:{ // JG 0x0071fd76
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71fd76;}
return 0x71fd6e;}
case 0x71fd6e:{ // MOVZX EAX,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fd71;}
case 0x71fd71:{ // ADD dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
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
return 0x71fd74;}
case 0x71fd74:{ // JMP 0x0071fd79
return 0x71fd79;
return 0x71fd76;}
case 0x71fd76:{ // ADD dword ptr [EBP + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
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
return 0x71fd79;}
case 0x71fd79:{ // CMP ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fd7c;}
case 0x71fd7c:{ // JG 0x0071fd86
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71fd86;}
return 0x71fd7e;}
case 0x71fd7e:{ // MOVZX EAX,byte ptr [EBX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0xc)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fd81;}
case 0x71fd81:{ // ADD dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
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
return 0x71fd84;}
case 0x71fd84:{ // JMP 0x0071fd89
return 0x71fd89;
return 0x71fd86;}
case 0x71fd86:{ // ADD dword ptr [EBP + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
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
return 0x71fd89;}
case 0x71fd89:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd8c;}
case 0x71fd8c:{ // LEA ECX,[EAX + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71fd8f;}
case 0x71fd8f:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd92;}
case 0x71fd92:{ // SAR ECX,0x2
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0x99500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0x99400)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
wu<4>(c,0x4ce00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x99400),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,4>(u<4>(c,0x99500),u<4>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
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
return 0x71fd95;}
case 0x71fd95:{ // MOV byte ptr [EBP + EAX*0x1 + -0x24],CL
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffdcull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x7400),u<1>(c,0xa100));
return 0x71fd99;}
case 0x71fd99:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fd9c;}
case 0x71fd9c:{ // ADD dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
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
return 0x71fd9f;}
case 0x71fd9f:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fda1;}
case 0x71fda1:{ // ADD EBX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x4)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fda3;}
case 0x71fda3:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fda4;}
case 0x71fda4:{ // CMP EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fda7;}
case 0x71fda7:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fdaa;}
case 0x71fdaa:{ // JC 0x0071fd43
if(r<1>(c,0x200)){return 0x71fd43;}
return 0x71fdac;}
case 0x71fdac:{ // MOV EBX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fdaf;}
case 0x71fdaf:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdb1;}
case 0x71fdb1:{ // CMP dword ptr [EBP + 0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdb4;}
case 0x71fdb4:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71fdb6;}
case 0x71fdb6:{ // JBE 0x0071fdc7
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fdc7;}
return 0x71fdb8;}
case 0x71fdb8:{ // MOV DL,byte ptr [EBP + EAX*0x1 + -0x24]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffdcull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7400)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x71fdbc;}
case 0x71fdbc:{ // MOV byte ptr [ECX],DL
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,r<4>(c,0x4),u<1>(c,0xa100));
return 0x71fdbe;}
case 0x71fdbe:{ // ADD ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdc1;}
case 0x71fdc1:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdc2;}
case 0x71fdc2:{ // CMP EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdc5;}
case 0x71fdc5:{ // JC 0x0071fdb8
if(r<1>(c,0x200)){return 0x71fdb8;}
return 0x71fdc7;}
case 0x71fdc7:{ // INC dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x71fdca;}
case 0x71fdca:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fdcd;}
case 0x71fdcd:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdce;}
case 0x71fdce:{ // CMP EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fdd1;}
case 0x71fdd1:{ // MOV dword ptr [EBP + -0xc],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fdd4;}
case 0x71fdd4:{ // JC 0x0071fd28
if(r<1>(c,0x200)){return 0x71fd28;}
return 0x71fdda;}
case 0x71fdda:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fddb;}
case 0x71fddb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fddc;}
case 0x71fddc:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fddd;}
case 0x71fddd:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x71fdde;}
case 0x71fdde:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fddf;}
case 0x71fddf:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fde0;}
case 0x71fde0:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71fde2;}
case 0x71fde2:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fde3;}
case 0x71fde3:{ // MOV EBX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fde6;}
case 0x71fde6:{ // TEST EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fde8;}
case 0x71fde8:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fde9;}
case 0x71fde9:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fdec;}
case 0x71fdec:{ // MOV EDX,dword ptr [ESI + 0x290]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x290ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fdf2;}
case 0x71fdf2:{ // MOV ECX,dword ptr [ESI + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x7cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fdf5;}
case 0x71fdf5:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fdf6;}
case 0x71fdf6:{ // MOV dword ptr [EBP + 0x8],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fdf9;}
case 0x71fdf9:{ // JLE 0x0071fdff
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x71fdff;}
return 0x71fdfb;}
case 0x71fdfb:{ // SAR EBX,CL
wu<1>(c,0x99000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1full));
wu<4>(c,0x99100,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0xc),u<1>(c,0x99000)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x4ce00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,1>(u<4>(c,0x99100),u<1>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71fdfd;}
case 0x71fdfd:{ // JMP 0x0071fe05
return 0x71fe05;
return 0x71fdff;}
case 0x71fdff:{ // NEG EBX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_2COMP,4,4>(r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe01;}
case 0x71fe01:{ // SAR EBX,CL
wu<1>(c,0x99000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1full));
wu<4>(c,0x99100,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0xc),u<1>(c,0x99000)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x4ce00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,1>(u<4>(c,0x99100),u<1>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71fe03;}
case 0x71fe03:{ // NEG EBX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_2COMP,4,4>(r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe05;}
case 0x71fe05:{ // MOV EDI,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe08;}
case 0x71fe08:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe0a;}
case 0x71fe0a:{ // JLE 0x0071fe10
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x71fe10;}
return 0x71fe0c;}
case 0x71fe0c:{ // SAR EDI,CL
wu<1>(c,0x99000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1full));
wu<4>(c,0x99100,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x1c),u<1>(c,0x99000)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x4ce00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,1>(u<4>(c,0x99100),u<1>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71fe0e;}
case 0x71fe0e:{ // JMP 0x0071fe16
return 0x71fe16;
return 0x71fe10;}
case 0x71fe10:{ // NEG EDI
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_2COMP,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe12;}
case 0x71fe12:{ // SAR EDI,CL
wu<1>(c,0x99000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1full));
wu<4>(c,0x99100,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_SRIGHT,4,4,1>(r<4>(c,0x1c),u<1>(c,0x99000)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x4ce00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,1>(u<4>(c,0x99100),u<1>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x99000),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x99000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71fe14;}
case 0x71fe14:{ // NEG EDI
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_2COMP,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe16;}
case 0x71fe16:{ // MOV ECX,dword ptr [ESI + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x88ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe1c;}
case 0x71fe1c:{ // MOV EAX,dword ptr [ESI + 0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x74ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe1f;}
case 0x71fe1f:{ // IMUL ECX,EDI
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71fe22;}
case 0x71fe22:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71fe24;}
case 0x71fe24:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe25;}
case 0x71fe25:{ // LEA EAX,[EAX + EAX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x71fe29;}
case 0x71fe29:{ // SUB ECX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe2b;}
case 0x71fe2b:{ // ADD ECX,EBX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe2d;}
case 0x71fe2d:{ // ADD ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe30;}
case 0x71fe30:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe31;}
case 0x71fe31:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe32;}
case 0x71fe32:{ // CALL dword ptr [0x008b9c58]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x8b9c58)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71fe38ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x71fe38;}
case 0x71fe38:{ // NEG EBX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_2COMP,4,4>(r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe3a;}
case 0x71fe3a:{ // NEG EDI
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_2COMP,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe3c;}
case 0x71fe3c:{ // AND EBX,0x7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe3f;}
case 0x71fe3f:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe42;}
case 0x71fe42:{ // AND EDI,0x7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe45;}
case 0x71fe45:{ // TEST EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe47;}
case 0x71fe47:{ // JZ 0x0071fe64
if(r<1>(c,0x206)){return 0x71fe64;}
return 0x71fe49;}
case 0x71fe49:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe4c;}
case 0x71fe4c:{ // LEA EAX,[EBX + EAX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x71fe50;}
case 0x71fe50:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71fe52;}
case 0x71fe52:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe53;}
case 0x71fe53:{ // MOV EAX,dword ptr [ESI + 0x13c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x13cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe59;}
case 0x71fe59:{ // PUSH dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe5b;}
case 0x71fe5b:{ // CALL dword ptr [0x008b9ee4]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x8b9ee4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71fe61ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x71fe61;}
case 0x71fe61:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe64;}
case 0x71fe64:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe66;}
case 0x71fe66:{ // JZ 0x0071fe85
if(r<1>(c,0x206)){return 0x71fe85;}
return 0x71fe68;}
case 0x71fe68:{ // MOV EAX,dword ptr [ESI + 0x13c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x13cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe6e;}
case 0x71fe6e:{ // ADD EDI,0x2
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x2ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe71;}
case 0x71fe71:{ // SHL EDI,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1c),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71fe74;}
case 0x71fe74:{ // ADD EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe77;}
case 0x71fe77:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71fe79;}
case 0x71fe79:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe7a;}
case 0x71fe7a:{ // PUSH dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fe7c;}
case 0x71fe7c:{ // CALL dword ptr [0x008b9ef0]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x8b9ef0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71fe82ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x71fe82;}
case 0x71fe82:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe85;}
case 0x71fe85:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fe86;}
case 0x71fe86:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fe87;}
case 0x71fe87:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fe88;}
case 0x71fe88:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71fe89;}
case 0x71fe89:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fe8a;}
case 0x71fe8a:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe8c;}
case 0x71fe8c:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe90;}
case 0x71fe90:{ // AND dword ptr [EAX + 0x4],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fe94;}
case 0x71fe94:{ // MOV dword ptr [EAX],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x71fe96;}
case 0x71fe96:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fe98;}
case 0x71fe98:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fe9a;}
case 0x71fe9a:{ // JZ 0x0071fe9f
if(r<1>(c,0x206)){return 0x71fe9f;}
return 0x71fe9c;}
case 0x71fe9c:{ // MOV dword ptr [EDX + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fe9f;}
case 0x71fe9f:{ // MOV dword ptr [ECX],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x71fea1;}
case 0x71fea1:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fea4;}
case 0x71fea4:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fea6;}
case 0x71fea6:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71feaa;}
case 0x71feaa:{ // CMP EAX,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71feac;}
case 0x71feac:{ // JNZ 0x0071feb2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71feb2;}
return 0x71feae;}
case 0x71feae:{ // MOV EDX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71feb0;}
case 0x71feb0:{ // MOV dword ptr [ECX],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x71feb2;}
case 0x71feb2:{ // MOV ECX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71feb5;}
case 0x71feb5:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71feb7;}
case 0x71feb7:{ // JZ 0x0071febd
if(r<1>(c,0x206)){return 0x71febd;}
return 0x71feb9;}
case 0x71feb9:{ // MOV EDX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71febb;}
case 0x71febb:{ // MOV dword ptr [ECX],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x71febd;}
case 0x71febd:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71febf;}
case 0x71febf:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fec1;}
case 0x71fec1:{ // JZ 0x0071fec9
if(r<1>(c,0x206)){return 0x71fec9;}
return 0x71fec3;}
case 0x71fec3:{ // MOV EAX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fec6;}
case 0x71fec6:{ // MOV dword ptr [ECX + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71fec9;}
case 0x71fec9:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fecc;}
case 0x71fecc:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fed0;}
case 0x71fed0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fed1;}
case 0x71fed1:{ // MOV ESI,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fed5;}
case 0x71fed5:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71fed6;}
case 0x71fed6:{ // MOV EDI,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71feda;}
case 0x71feda:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x71fedc;}
case 0x71fedc:{ // MOV EDX,EDI
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x71fede;}
case 0x71fede:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
wu<1>(c,0x4d300,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
wu<4>(c,0x4d400,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<4>(c,0x4d500,eval<Op::INT_RIGHT,4,4,4>(u<4>(c,0xa1c00),u<4>(c,0x4d400)));
wu<4>(c,0x4d600,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4d500),0x1ull));
wu<1>(c,0x4d700,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d600),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d300)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d700)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d800,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa1b00),0x1ull));
wu<1>(c,0x4d900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa1c00),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d800)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d900)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1b00),0x0ull));
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
return 0x71fee1;}
case 0x71fee1:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71fee3;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x14300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x14400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x14500,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x14600,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x14500)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x14400),u<4>(c,0x14600)));
wu<4>(c,0x14800,m<4>(c,u<4>(c,0x14300)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(u<4>(c,0x14800)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71fee1;
return 0x71fee3;}
case 0x71fee3:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x71fee5;}
case 0x71fee5:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fee8;}
case 0x71fee8:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71feea;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<4>(c,0x12900,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x12a00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x12b00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x12c00,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x12b00)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x12a00),u<4>(c,0x12c00)));
wu<1>(c,0x12e00,m<1>(c,u<4>(c,0x12900)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(u<1>(c,0x12e00)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x71fee8;
return 0x71feea;}
case 0x71feea:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71feeb;}
case 0x71feeb:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x71feed;}
case 0x71feed:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71feee;}
case 0x71feee:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71feef;}
case 0x71feef:{ // MOV ECX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fef3;}
case 0x71fef3:{ // MOV EAX,dword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fef6;}
case 0x71fef6:{ // AND dword ptr [ECX + 0x10],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x71fefa;}
case 0x71fefa:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71fefb;}
case 0x71fefb:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71feff;}
case 0x71feff:{ // MOV EAX,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff02;}
case 0x71ff02:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ff03;}
case 0x71ff03:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff07;}
case 0x71ff07:{ // MOV EAX,dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff0a;}
case 0x71ff0a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ff0b;}
case 0x71ff0b:{ // MOV ECX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff0f;}
case 0x71ff0f:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff11;}
case 0x71ff11:{ // AND dword ptr [ECX],0x0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff14;}
case 0x71ff14:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ff15;}
case 0x71ff15:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff16;}
case 0x71ff16:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff17;}
case 0x71ff17:{ // MOV ESI,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff1b;}
case 0x71ff1b:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff1d;}
case 0x71ff1d:{ // CMP dword ptr [ESI + 0xc],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff20;}
case 0x71ff20:{ // JZ 0x00720031
if(r<1>(c,0x206)){return 0x720031;}
return 0x71ff26;}
case 0x71ff26:{ // MOV ECX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff28;}
case 0x71ff28:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff29;}
case 0x71ff29:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff2a;}
case 0x71ff2a:{ // PUSH dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff2d;}
case 0x71ff2d:{ // ADD ECX,0x38
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x38ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x38ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff30;}
case 0x71ff30:{ // CALL 0x0071fea4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ff35ull);
return 0x71fea4;
return 0x71ff35;}
case 0x71ff35:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff38;}
case 0x71ff38:{ // ADD EAX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff3b;}
case 0x71ff3b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff3c;}
case 0x71ff3c:{ // MOV ECX,0x8b446c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b446cull));
return 0x71ff41;}
case 0x71ff41:{ // CALL 0x0071fea4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ff46ull);
return 0x71fea4;
return 0x71ff46;}
case 0x71ff46:{ // MOV EDI,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff49;}
case 0x71ff49:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff4b;}
case 0x71ff4b:{ // ADD EDI,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x18ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff4e;}
case 0x71ff4e:{ // CMP byte ptr [EAX + 0x25],BL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x25ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x61e00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wu<1>(c,0x62000,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62000),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff51;}
case 0x71ff51:{ // JZ 0x0071ff5f
if(r<1>(c,0x206)){return 0x71ff5f;}
return 0x71ff53;}
case 0x71ff53:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff56;}
case 0x71ff56:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff57;}
case 0x71ff57:{ // CALL 0x007350e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ff5cull);
return 0x7350e0;
return 0x71ff5c;}
case 0x71ff5c:{ // ADD EDI,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x14ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff5f;}
case 0x71ff5f:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff61;}
case 0x71ff61:{ // XOR EBP,EBP
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x14,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x14),r<4>(c,0x14)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff63;}
case 0x71ff63:{ // CMP word ptr [EAX + 0x20],BX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62100,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wu<2>(c,0x62300,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62300),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62300),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff67;}
case 0x71ff67:{ // JBE 0x0071ff83
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71ff83;}
return 0x71ff69;}
case 0x71ff69:{ // LEA EAX,[EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71ff6c;}
case 0x71ff6c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff6d;}
case 0x71ff6d:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff6e;}
case 0x71ff6e:{ // CALL 0x007357a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ff73ull);
return 0x7357a0;
return 0x71ff73;}
case 0x71ff73:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff75;}
case 0x71ff75:{ // MOVZX EAX,word ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71ff79;}
case 0x71ff79:{ // ADD EDI,0x1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1cull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff7c;}
case 0x71ff7c:{ // INC EBP
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff7d;}
case 0x71ff7d:{ // CMP EBP,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff7f;}
case 0x71ff7f:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ff80;}
case 0x71ff80:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ff81;}
case 0x71ff81:{ // JL 0x0071ff69
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x71ff69;}
return 0x71ff83;}
case 0x71ff83:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff85;}
case 0x71ff85:{ // CMP byte ptr [EAX + 0x26],BL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x26ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x61e00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wu<1>(c,0x62000,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62000),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff88;}
case 0x71ff88:{ // JZ 0x0071ff9b
if(r<1>(c,0x206)){return 0x71ff9b;}
return 0x71ff8a;}
case 0x71ff8a:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff8d;}
case 0x71ff8d:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ff8e;}
case 0x71ff8e:{ // CALL 0x00735160
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ff93ull);
return 0x735160;
return 0x71ff93;}
case 0x71ff93:{ // MOVZX EAX,byte ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71ff97;}
case 0x71ff97:{ // LEA EDI,[EDI + EAX*0x4 + 0x14]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x71ff9b;}
case 0x71ff9b:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ff9d;}
case 0x71ff9d:{ // XOR EBP,EBP
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x14,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x14),r<4>(c,0x14)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ff9f;}
case 0x71ff9f:{ // CMP word ptr [EAX + 0x22],BX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x22ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62100,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wu<2>(c,0x62300,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x62100),r<2>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62300),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62300),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffa3;}
case 0x71ffa3:{ // JBE 0x0071ffc4
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71ffc4;}
return 0x71ffa5;}
case 0x71ffa5:{ // LEA EAX,[EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71ffa8;}
case 0x71ffa8:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ffa9;}
case 0x71ffa9:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ffaa;}
case 0x71ffaa:{ // CALL 0x00735620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ffafull);
return 0x735620;
return 0x71ffaf;}
case 0x71ffaf:{ // MOVZX EAX,byte ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71ffb3;}
case 0x71ffb3:{ // LEA EDI,[EDI + EAX*0x4 + 0x1c]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x71ffb7;}
case 0x71ffb7:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ffb9;}
case 0x71ffb9:{ // MOVZX EAX,word ptr [EAX + 0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x22ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71ffbd;}
case 0x71ffbd:{ // INC EBP
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffbe;}
case 0x71ffbe:{ // CMP EBP,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffc0;}
case 0x71ffc0:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ffc1;}
case 0x71ffc1:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ffc2;}
case 0x71ffc2:{ // JL 0x0071ffa5
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x71ffa5;}
return 0x71ffc4;}
case 0x71ffc4:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ffc6;}
case 0x71ffc6:{ // XOR EBP,EBP
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x14,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x14),r<4>(c,0x14)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffc8;}
case 0x71ffc8:{ // CMP byte ptr [EAX + 0x24],BL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x61e00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wu<1>(c,0x62000,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62000),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffcb;}
case 0x71ffcb:{ // LEA EDI,[EAX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71ffce;}
case 0x71ffce:{ // JBE 0x0071fff6
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x71fff6;}
return 0x71ffd0;}
case 0x71ffd0:{ // MOV EAX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ffd2;}
case 0x71ffd2:{ // ADD EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
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
return 0x71ffd5;}
case 0x71ffd5:{ // ADD EDI,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x4ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffd8;}
case 0x71ffd8:{ // MOV CL,byte ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x71ffdb;}
case 0x71ffdb:{ // CMP CL,BL
wu<1>(c,0x62700,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x4),u<1>(c,0x62700)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x4),u<1>(c,0x62700)));
wu<1>(c,0x62900,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x4),u<1>(c,0x62700)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62900),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62900),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62900),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ffdd;}
case 0x71ffdd:{ // JL 0x0071ffeb
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x71ffeb;}
return 0x71ffdf;}
case 0x71ffdf:{ // MOVSX ECX,CL
wr<4>(c,0x4,eval<Op::INT_SEXT,4,1>(r<1>(c,0x4)));
return 0x71ffe2;}
case 0x71ffe2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ffe3;}
case 0x71ffe3:{ // CALL dword ptr [ECX*0x4 + 0x817fa0]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x817fa0ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71ffeaull);
return uint32_t(u<4>(c,0x5ef00));
return 0x71ffea;}
case 0x71ffea:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ffeb;}
case 0x71ffeb:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ffed;}
case 0x71ffed:{ // MOVZX EAX,byte ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x71fff1;}
case 0x71fff1:{ // INC EBP
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fff2;}
case 0x71fff2:{ // CMP EBP,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fff4;}
case 0x71fff4:{ // JL 0x0071ffd0
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x71ffd0;}
return 0x71fff6;}
case 0x71fff6:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71fff8;}
case 0x71fff8:{ // XOR EBP,EBP
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x14,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x14),r<4>(c,0x14)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fffa;}
case 0x71fffa:{ // CMP byte ptr [EAX + 0x27],BL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x27ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x61e00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wu<1>(c,0x62000,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x61e00),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x62000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x62000),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x62000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71fffd;}
case 0x71fffd:{ // JBE 0x00720020
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x720020;}
return 0x71ffff;}
case 0x71ffff:{ // MOV EAX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x720001;}
default:missing_instruction(c.pc);}}
}
