#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_667(Cpu& c){switch(c.pc){
case 0x667000:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667001;}
case 0x667001:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667002;}
case 0x667002:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667003;}
case 0x667003:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667004;}
case 0x667004:{ // MOV word ptr [EBX + 0x36],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667008;}
case 0x667008:{ // MOV word ptr [EBX + 0x34],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66700c;}
case 0x66700c:{ // MOV word ptr [EBX + 0x18],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667010;}
case 0x667010:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667012;}
case 0x667012:{ // LEA EDI,[EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667015;}
case 0x667015:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667016;}
case 0x667016:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667017;}
case 0x667017:{ // TEST byte ptr [ESI + 0x14],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66701b;}
case 0x66701b:{ // JZ 0x00667d3e
if(r<1>(c,0x206)){return 0x667d3e;}
return 0x667021;}
case 0x667021:{ // MOV dword ptr [EBP + -0x2c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667024;}
case 0x667024:{ // MOV dword ptr [EBP + -0x44],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667027;}
case 0x667027:{ // CMP dword ptr [ESI + 0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66702a;}
case 0x66702a:{ // MOV dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66702d;}
case 0x66702d:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667030;}
case 0x667030:{ // JZ 0x00667148
if(r<1>(c,0x206)){return 0x667148;}
return 0x667036;}
case 0x667036:{ // MOV EAX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667039;}
case 0x667039:{ // LEA ECX,[EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x66703c;}
case 0x66703c:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66703d;}
case 0x66703d:{ // LEA ECX,[EBP + -0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667040;}
case 0x667040:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667041;}
case 0x667041:{ // LEA ECX,[EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667044;}
case 0x667044:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667045;}
case 0x667045:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667047;}
case 0x667047:{ // LEA EDI,[ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x66704a;}
case 0x66704a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66704b;}
case 0x66704b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66704c;}
case 0x66704c:{ // MOV dword ptr [EBP + -0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66704f;}
case 0x66704f:{ // CALL dword ptr [ECX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667052ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x667052;}
case 0x667052:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667053;}
case 0x667053:{ // CALL 0x0065b3f7
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667058ull);
return 0x65b3f7;
return 0x667058;}
case 0x667058:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66705a;}
case 0x66705a:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66705d;}
case 0x66705d:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x667063;}
case 0x667063:{ // MOV EAX,dword ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667066;}
case 0x667066:{ // MOV dword ptr [EBX + 0x1c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667069;}
case 0x667069:{ // MOV EAX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66706c;}
case 0x66706c:{ // MOV dword ptr [EBX + 0x20],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66706f;}
case 0x66706f:{ // MOV ESI,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667072;}
case 0x667072:{ // LEA EAX,[EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667075;}
case 0x667075:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667076;}
case 0x667076:{ // LEA EAX,[EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667079;}
case 0x667079:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66707a;}
case 0x66707a:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66707c;}
case 0x66707c:{ // PUSH 0x53455250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x53455250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x667081;}
case 0x667081:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667082;}
case 0x667082:{ // CALL dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667085ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x667085;}
case 0x667085:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667086;}
case 0x667086:{ // CALL 0x00671db5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66708bull);
return 0x671db5;
return 0x66708b;}
case 0x66708b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66708d;}
case 0x66708d:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667090;}
case 0x667090:{ // JL 0x00667d4a
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d4a;}
return 0x667096;}
case 0x667096:{ // JNZ 0x00667102
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667102;}
return 0x667098;}
case 0x667098:{ // LEA EAX,[EBP + 0xffffff7c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff7cull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x66709e;}
case 0x66709e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66709f;}
case 0x66709f:{ // LEA EAX,[EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6670a2;}
case 0x6670a2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670a3;}
case 0x6670a3:{ // PUSH 0x49535250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x49535250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x6670a8;}
case 0x6670a8:{ // PUSH dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670ab;}
case 0x6670ab:{ // MOV dword ptr [EBP + -0x8],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6670b2;}
case 0x6670b2:{ // CALL 0x00671db5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6670b7ull);
return 0x671db5;
return 0x6670b7;}
case 0x6670b7:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670b9;}
case 0x6670b9:{ // JL 0x00667d4a
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d4a;}
return 0x6670bf;}
case 0x6670bf:{ // LEA EAX,[EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6670c2;}
case 0x6670c2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670c3;}
case 0x6670c3:{ // LEA EAX,[EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6670c6;}
case 0x6670c6:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670c7;}
case 0x6670c7:{ // LEA EAX,[EBP + -0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6670ca;}
case 0x6670ca:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670cb;}
case 0x6670cb:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6670ce;}
case 0x6670ce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670cf;}
case 0x6670cf:{ // PUSH dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6670d2;}
case 0x6670d2:{ // CALL 0x0065b3f7
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6670d7ull);
return 0x65b3f7;
return 0x6670d7;}
case 0x6670d7:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670d9;}
case 0x6670d9:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6670dc;}
case 0x6670dc:{ // JL 0x00667d4a
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d4a;}
return 0x6670e2;}
case 0x6670e2:{ // MOV ECX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6670e5;}
case 0x6670e5:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670e7;}
case 0x6670e7:{ // MOV DX,word ptr [ECX + EAX*0x4 + 0xc]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6670ec;}
case 0x6670ec:{ // ADD DX,word ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6c00)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x8),u<2>(c,0x17100)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6c00)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x8),u<2>(c,0x17100)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6c00)));
wr<2>(c,0x8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x8),u<2>(c,0x17100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x8),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670f0;}
case 0x6670f0:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670f1;}
case 0x6670f1:{ // CMP EAX,0x3
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6670f4;}
case 0x6670f4:{ // MOV word ptr [EBP + EAX*0x2 + -0x26],DX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffdaull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x6670f9;}
case 0x6670f9:{ // JC 0x006670e7
if(r<1>(c,0x200)){return 0x6670e7;}
return 0x6670fb;}
case 0x6670fb:{ // AND word ptr [EBP + -0x1e],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0x0ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667100;}
case 0x667100:{ // JMP 0x0066710c
return 0x66710c;
return 0x667102;}
case 0x667102:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667104;}
case 0x667104:{ // LEA EDI,[EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667107;}
case 0x667107:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667108;}
case 0x667108:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667109;}
case 0x667109:{ // MOV EDI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66710c;}
case 0x66710c:{ // MOV EDX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66710f;}
case 0x66710f:{ // LEA EAX,[EBX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2cull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667112;}
case 0x667112:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667114;}
case 0x667114:{ // CMP word ptr [EBP + ESI*0x1 + -0x68],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff98ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wu<2>(c,0x61800,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61800),0x0ull));
wu<2>(c,0x61a00,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61a00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66711a;}
case 0x66711a:{ // JNZ 0x0066712c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66712c;}
return 0x66711c;}
case 0x66711c:{ // MOV CX,word ptr [EBP + ESI*0x1 + -0x4c]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffb4ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667121;}
case 0x667121:{ // CMP CX,word ptr [EBP + ESI*0x1 + -0x70]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff90ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667126;}
case 0x667126:{ // JNZ 0x0066712c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66712c;}
return 0x667128;}
case 0x667128:{ // MOV CL,0x1
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x1ull));
return 0x66712a;}
case 0x66712a:{ // JMP 0x0066712e
return 0x66712e;
return 0x66712c;}
case 0x66712c:{ // XOR CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x4,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66712e;}
case 0x66712e:{ // CMP word ptr [EBP + ESI*0x1 + -0x70],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff90ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wu<2>(c,0x61800,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61800),0x0ull));
wu<2>(c,0x61a00,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61a00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667134;}
case 0x667134:{ // MOV byte ptr [EAX],CL
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
return 0x667136;}
case 0x667136:{ // JBE 0x0066713e
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x66713e;}
return 0x667138;}
case 0x667138:{ // TEST CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66713a;}
case 0x66713a:{ // JNZ 0x0066713e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66713e;}
return 0x66713c;}
case 0x66713c:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66713e;}
case 0x66713e:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66713f;}
case 0x66713f:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667140;}
case 0x667140:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667141;}
case 0x667141:{ // CMP ESI,0x8
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x8ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667144;}
case 0x667144:{ // JC 0x00667114
if(r<1>(c,0x200)){return 0x667114;}
return 0x667146;}
case 0x667146:{ // JMP 0x00667172
return 0x667172;
return 0x667148;}
case 0x667148:{ // ADD ESI,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0xcull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66714b;}
case 0x66714b:{ // MOV dword ptr [EBP + -0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66714e;}
case 0x66714e:{ // MOV dword ptr [ESI],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x667150;}
case 0x667150:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667152;}
case 0x667152:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667154;}
case 0x667154:{ // LEA EDI,[EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667157;}
case 0x667157:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667158;}
case 0x667158:{ // LEA ECX,[EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x66715b;}
case 0x66715b:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x66715c;}
case 0x66715c:{ // MOV byte ptr [ESI + EBX*0x1 + 0x2c],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,u<4>(c,0x7400),u<1>(c,0xa100));
return 0x667161;}
case 0x667161:{ // MOV word ptr [ECX],DX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,r<4>(c,0x4),u<2>(c,0xa200));
return 0x667164;}
case 0x667164:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667165;}
case 0x667165:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667166;}
case 0x667166:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667167;}
case 0x667167:{ // CMP ESI,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66716a;}
case 0x66716a:{ // JC 0x0066715c
if(r<1>(c,0x200)){return 0x66715c;}
return 0x66716c;}
case 0x66716c:{ // MOV EDI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66716f;}
case 0x66716f:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667172;}
case 0x667172:{ // MOV ESI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667174;}
case 0x667174:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667177;}
case 0x667177:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667179;}
case 0x667179:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66717a;}
case 0x66717a:{ // AND EDX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66717c;}
case 0x66717c:{ // MOV word ptr [EBX + 0x4e],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667180;}
case 0x667180:{ // MOV word ptr [EBX + 0x54],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x54ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667184;}
case 0x667184:{ // MOV word ptr [EBX + 0x5a],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667188;}
case 0x667188:{ // MOV word ptr [EBX + 0x60],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66718c;}
case 0x66718c:{ // MOV word ptr [EBX + 0x4c],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667190;}
case 0x667190:{ // MOV word ptr [EBX + 0x52],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667194;}
case 0x667194:{ // MOV word ptr [EBX + 0x58],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667198;}
case 0x667198:{ // MOV word ptr [EBX + 0x5e],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66719c;}
case 0x66719c:{ // MOV CX,word ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6671a0;}
case 0x6671a0:{ // AND EAX,0xfffffffa
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xfffffffaull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671a3;}
case 0x6671a3:{ // MOV word ptr [EBX + 0x50],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6671a7;}
case 0x6671a7:{ // MOV CX,word ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6671ab;}
case 0x6671ab:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671ad;}
case 0x6671ad:{ // MOV word ptr [EBX + 0x56],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6671b1;}
case 0x6671b1:{ // MOV CX,word ptr [EBX + 0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6671b5;}
case 0x6671b5:{ // OR EAX,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671b8;}
case 0x6671b8:{ // MOV dword ptr [EBX + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6671bb;}
case 0x6671bb:{ // MOV word ptr [EBX + 0x5c],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6671bf;}
case 0x6671bf:{ // CMP dword ptr [EDI],0x0
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
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
return 0x6671c2;}
case 0x6671c2:{ // MOV dword ptr [EBP + -0x1c],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6671c5;}
case 0x6671c5:{ // JZ 0x00667d3e
if(r<1>(c,0x206)){return 0x667d3e;}
return 0x6671cb;}
case 0x6671cb:{ // MOV ECX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6671ce;}
case 0x6671ce:{ // OR EAX,0x8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671d1;}
case 0x6671d1:{ // MOV dword ptr [EBX + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6671d4;}
case 0x6671d4:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6671d7;}
case 0x6671d7:{ // LEA ESI,[EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x6671da;}
case 0x6671da:{ // MOVZX EAX,word ptr [EBX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x38ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x6671de;}
case 0x6671de:{ // CMP EAX,ESI
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
return 0x6671e0;}
case 0x6671e0:{ // JNC 0x006672ff
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x6672ff;}
return 0x6671e6;}
case 0x6671e6:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x6671e8;}
case 0x6671e8:{ // IMUL EAX,EAX,0x64
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x64ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x6671eb;}
case 0x6671eb:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671ee;}
case 0x6671ee:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6671ef;}
case 0x6671ef:{ // CALL 0x00575620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6671f4ull);
return 0x575620;
return 0x6671f4;}
case 0x6671f4:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6671f6;}
case 0x6671f6:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6671f7;}
case 0x6671f7:{ // JZ 0x00667211
if(r<1>(c,0x206)){return 0x667211;}
return 0x6671f9;}
case 0x6671f9:{ // PUSH 0x663ec5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x663ec5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x6671fe;}
case 0x6671fe:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6671ff;}
case 0x6671ff:{ // LEA EDI,[EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667202;}
case 0x667202:{ // PUSH 0x64
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x64ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x667204;}
case 0x667204:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667205;}
case 0x667205:{ // MOV dword ptr [EAX],ESI
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x667207;}
case 0x667207:{ // CALL 0x00401650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66720cull);
return 0x401650;
return 0x66720c;}
case 0x66720c:{ // MOV dword ptr [EBP + -0x10],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66720f;}
case 0x66720f:{ // JMP 0x00667215
return 0x667215;
return 0x667211;}
case 0x667211:{ // AND dword ptr [EBP + -0x10],0x0
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
return 0x667215;}
case 0x667215:{ // CMP dword ptr [EBP + -0x10],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x667219;}
case 0x667219:{ // JZ 0x00667c87
if(r<1>(c,0x206)){return 0x667c87;}
return 0x66721f;}
case 0x66721f:{ // MOV EAX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667222;}
case 0x667222:{ // MOV CX,word ptr [EAX + 0x52]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x52ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667226;}
case 0x667226:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667229;}
case 0x667229:{ // MOV word ptr [EAX + 0x52],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66722d;}
case 0x66722d:{ // MOVZX ECX,CX
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x4)));
return 0x667230;}
case 0x667230:{ // IMUL ECX,ECX,0x1c
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x1cull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x667233;}
case 0x667233:{ // MOV ECX,dword ptr [ECX + 0x7b583c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x7b583cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667239;}
case 0x667239:{ // OR word ptr [EAX + 0x54],0xffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x54ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_OR,2,2,2>(u<2>(c,0xa200),0xffffull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66723f;}
case 0x66723f:{ // MOV dword ptr [EAX + 0x58],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667242;}
case 0x667242:{ // MOV word ptr [EAX + 0x56],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x1ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667248;}
case 0x667248:{ // MOV ESI,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66724b;}
case 0x66724b:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x66724d;}
case 0x66724d:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667250;}
case 0x667250:{ // LEA EDI,[EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667253;}
case 0x667253:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667254;}
case 0x667254:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667256;}
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
return 0x667254;
return 0x667256;}
case 0x667256:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667259;}
case 0x667259:{ // MOV ECX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66725b;}
case 0x66725b:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x66725d;}
case 0x66725d:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667260;}
case 0x667260:{ // MOV ECX,dword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667263;}
case 0x667263:{ // SHL ECX,0x1f
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x1full,0x1full));
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
return 0x667266;}
case 0x667266:{ // SAR ECX,0x1f
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x1full,0x1full));
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
return 0x667269;}
case 0x667269:{ // XOR ECX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66726c;}
case 0x66726c:{ // AND ECX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66726f;}
case 0x66726f:{ // XOR dword ptr [EAX + 0x30],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_XOR,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
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
return 0x667272;}
case 0x667272:{ // MOV EDX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667275;}
case 0x667275:{ // MOV EDX,dword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667278;}
case 0x667278:{ // MOV ECX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66727b;}
case 0x66727b:{ // SHL EDX,0x1e
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x1eull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x8),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x66727e;}
case 0x66727e:{ // SAR EDX,0x1e
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x1eull,0x1full));
wu<4>(c,0x99500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x8),u<4>(c,0x99400)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x667281;}
case 0x667281:{ // XOR EDX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667283;}
case 0x667283:{ // AND EDX,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667286;}
case 0x667286:{ // XOR EDX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667288;}
case 0x667288:{ // MOV dword ptr [EAX + 0x30],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66728b;}
case 0x66728b:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66728e;}
case 0x66728e:{ // MOV ECX,dword ptr [ECX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667291;}
case 0x667291:{ // MOV dword ptr [EAX + 0x3c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667294;}
case 0x667294:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667297;}
case 0x667297:{ // MOV ECX,dword ptr [ECX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x34ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66729a;}
case 0x66729a:{ // MOV dword ptr [EAX + 0x34],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66729d;}
case 0x66729d:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672a0;}
case 0x6672a0:{ // MOV CX,word ptr [ECX + 0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6672a4;}
case 0x6672a4:{ // MOV word ptr [EAX + 0x4e],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6672a8;}
case 0x6672a8:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672ab;}
case 0x6672ab:{ // MOV CX,word ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6672af;}
case 0x6672af:{ // MOV word ptr [EAX + 0x50],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6672b3;}
case 0x6672b3:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672b6;}
case 0x6672b6:{ // MOV ECX,dword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672b9;}
case 0x6672b9:{ // MOV dword ptr [EAX + 0x38],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6672bc;}
case 0x6672bc:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672bf;}
case 0x6672bf:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6672c1;}
case 0x6672c1:{ // MOV dword ptr [ECX + 0x34],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x34ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6672c4;}
case 0x6672c4:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672c7;}
case 0x6672c7:{ // MOV word ptr [ECX + 0x4e],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6672cb;}
case 0x6672cb:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672ce;}
case 0x6672ce:{ // MOV word ptr [ECX + 0x50],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6672d2;}
case 0x6672d2:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672d5;}
case 0x6672d5:{ // MOV dword ptr [ECX + 0x38],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6672d8;}
case 0x6672d8:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672db;}
case 0x6672db:{ // CMP ECX,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6672dd;}
case 0x6672dd:{ // JZ 0x006672ed
if(r<1>(c,0x206)){return 0x6672ed;}
return 0x6672df;}
case 0x6672df:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x6672e1;}
case 0x6672e1:{ // CALL 0x00664f63
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6672e6ull);
return 0x664f63;
return 0x6672e6;}
case 0x6672e6:{ // AND dword ptr [EBX + 0x4],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
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
return 0x6672ea;}
case 0x6672ea:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672ed;}
case 0x6672ed:{ // MOV dword ptr [EBX + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6672f0;}
case 0x6672f0:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672f3;}
case 0x6672f3:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6672f5;}
case 0x6672f5:{ // MOV AX,word ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6672f9;}
case 0x6672f9:{ // INC AX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x0),0x1ull));
wr<2>(c,0x0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x0),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6672fb;}
case 0x6672fb:{ // MOV word ptr [EBX + 0x38],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x38ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6672ff;}
case 0x6672ff:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667301;}
case 0x667301:{ // MOV AX,word ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667305;}
case 0x667305:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667307;}
case 0x667307:{ // CMP AX,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66730b;}
case 0x66730b:{ // MOV dword ptr [EBX + 0xc],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66730e;}
case 0x66730e:{ // MOV dword ptr [EBX + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667311;}
case 0x667311:{ // JA 0x00667316
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x667316;}
return 0x667313;}
case 0x667313:{ // MOV EAX,dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667316;}
case 0x667316:{ // MOVZX EAX,AX
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x0)));
return 0x667319;}
case 0x667319:{ // SHL EAX,0x4
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
return 0x66731c;}
case 0x66731c:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x66731e;}
case 0x66731e:{ // SHR ECX,0x2
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
return 0x667321;}
case 0x667321:{ // AND EAX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667324;}
case 0x667324:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667327;}
case 0x667327:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667329;}
case 0x667329:{ // MOV CX,word ptr [EBX + 0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x66732d;}
case 0x66732d:{ // CMP CX,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667331;}
case 0x667331:{ // MOV dword ptr [EBP + -0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667334;}
case 0x667334:{ // MOV dword ptr [EBX + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667337;}
case 0x667337:{ // MOV dword ptr [EBX + 0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66733a;}
case 0x66733a:{ // JA 0x0066733f
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x66733f;}
return 0x66733c;}
case 0x66733c:{ // MOV ECX,dword ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66733f;}
case 0x66733f:{ // MOVZX ECX,CX
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x4)));
return 0x667342;}
case 0x667342:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667345;}
case 0x667345:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667347;}
case 0x667347:{ // SHR ECX,0x2
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
return 0x66734a;}
case 0x66734a:{ // AND EAX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66734d;}
case 0x66734d:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667350;}
case 0x667350:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667352;}
case 0x667352:{ // MOV CX,word ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667356;}
case 0x667356:{ // CMP CX,word ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66735a;}
case 0x66735a:{ // MOV dword ptr [EBP + -0x64],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66735d;}
case 0x66735d:{ // MOV dword ptr [EBX + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667360;}
case 0x667360:{ // MOV dword ptr [EBX + 0x44],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x44ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667363;}
case 0x667363:{ // JA 0x00667368
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x667368;}
return 0x667365;}
case 0x667365:{ // MOV ECX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667368;}
case 0x667368:{ // MOVZX ECX,CX
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x4)));
return 0x66736b;}
case 0x66736b:{ // SHL ECX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x66736e;}
case 0x66736e:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667370;}
case 0x667370:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667372;}
case 0x667372:{ // SHR ECX,0x2
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
return 0x667375;}
case 0x667375:{ // AND EAX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667378;}
case 0x667378:{ // LEA ECX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x66737b;}
case 0x66737b:{ // MOV AX,word ptr [EBX + 0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x22ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x66737f;}
case 0x66737f:{ // MOVZX ESI,AX
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x0)));
return 0x667382;}
case 0x667382:{ // MOV dword ptr [EBP + -0x40],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667385;}
case 0x667385:{ // LEA ECX,[ECX + ESI*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667388;}
case 0x667388:{ // MOV dword ptr [EBX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66738b;}
case 0x66738b:{ // MOV word ptr [EBX + 0x34],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66738f;}
case 0x66738f:{ // CMP dword ptr [EBP + -0x2c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667392;}
case 0x667392:{ // JZ 0x00667724
if(r<1>(c,0x206)){return 0x667724;}
return 0x667398;}
case 0x667398:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66739a;}
case 0x66739a:{ // MOV CX,word ptr [EBX + 0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x66739e;}
case 0x66739e:{ // MOVZX EAX,CX
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x4)));
return 0x6673a1;}
case 0x6673a1:{ // IMUL EAX,EAX,0x64
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x64ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x6673a4;}
case 0x6673a4:{ // ADD EAX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
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
return 0x6673a7;}
case 0x6673a7:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673a8;}
case 0x6673a8:{ // MOV word ptr [EBX + 0x36],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6673ac;}
case 0x6673ac:{ // MOV EDX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673af;}
case 0x6673af:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673b1;}
case 0x6673b1:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673b2;}
case 0x6673b2:{ // AND EDX,0xfffffff5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffff5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673b5;}
case 0x6673b5:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x6673b7;}
case 0x6673b7:{ // OR EDX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673b9;}
case 0x6673b9:{ // MOV dword ptr [EAX + 0x30],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673bc;}
case 0x6673bc:{ // OR dword ptr [EBX + 0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x4ull));
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
return 0x6673c0;}
case 0x6673c0:{ // LEA ESI,[EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6673c3;}
case 0x6673c3:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673c6;}
case 0x6673c6:{ // MOV EAX,dword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673c9;}
case 0x6673c9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6673ca;}
case 0x6673ca:{ // ADD EAX,0x68
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x68ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x68ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673cd;}
case 0x6673cd:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6673ce;}
case 0x6673ce:{ // CALL 0x00670f08
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6673d3ull);
return 0x670f08;
return 0x6673d3;}
case 0x6673d3:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673d5;}
case 0x6673d5:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673d8;}
case 0x6673d8:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x6673de;}
case 0x6673de:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673e0;}
case 0x6673e0:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673e2;}
case 0x6673e2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6673e3;}
case 0x6673e3:{ // CALL dword ptr [ECX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6673e6ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x6673e6;}
case 0x6673e6:{ // MOV ESI,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673e9;}
case 0x6673e9:{ // LEA EDX,[ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6673ec;}
case 0x6673ec:{ // LEA ECX,[ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6673ef;}
case 0x6673ef:{ // LEA EDI,[ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6673f2;}
case 0x6673f2:{ // MOV dword ptr [EBP + -0x30],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673f5;}
case 0x6673f5:{ // MOV dword ptr [EBP + -0x54],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673f8;}
case 0x6673f8:{ // MOV dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6673fb;}
case 0x6673fb:{ // MOV ECX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6673fd;}
case 0x6673fd:{ // ADD ECX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6673ff;}
case 0x6673ff:{ // MOV dword ptr [EBP + -0x18],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667402;}
case 0x667402:{ // MOV EDX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667404;}
case 0x667404:{ // ADD EDX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667406;}
case 0x667406:{ // LEA EDI,[ESI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667409;}
case 0x667409:{ // MOV dword ptr [EBP + -0x28],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66740c;}
case 0x66740c:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66740f;}
case 0x66740f:{ // MOV dword ptr [EBP + -0x38],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667412;}
case 0x667412:{ // MOV ESI,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667414;}
case 0x667414:{ // ADD ESI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667416;}
case 0x667416:{ // SHL ECX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x667419;}
case 0x667419:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x66741b;}
case 0x66741b:{ // SHR EDI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66741d;}
case 0x66741d:{ // OR ECX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66741f;}
case 0x66741f:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667421;}
case 0x667421:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667424;}
case 0x667424:{ // OR ECX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667426;}
case 0x667426:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667428;}
case 0x667428:{ // SHR EDI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x66742b;}
case 0x66742b:{ // OR ECX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66742d;}
case 0x66742d:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x66742f;}
case 0x66742f:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667432;}
case 0x667432:{ // OR ECX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667434;}
case 0x667434:{ // SHL EDX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x8),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x667437;}
case 0x667437:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667439;}
case 0x667439:{ // SHR EDI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x66743c;}
case 0x66743c:{ // OR ECX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66743e;}
case 0x66743e:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x667440;}
case 0x667440:{ // SHR EDI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667442;}
case 0x667442:{ // OR EDX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667444;}
case 0x667444:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x667446;}
case 0x667446:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667449;}
case 0x667449:{ // OR EDX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66744b;}
case 0x66744b:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x66744d;}
case 0x66744d:{ // SHR EDI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667450;}
case 0x667450:{ // OR EDX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667452;}
case 0x667452:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x667454;}
case 0x667454:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667457;}
case 0x667457:{ // OR EDX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667459;}
case 0x667459:{ // SHL ESI,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x66745c;}
case 0x66745c:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x66745e;}
case 0x66745e:{ // SHR EDI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667461;}
case 0x667461:{ // OR EDX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667463;}
case 0x667463:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667465;}
case 0x667465:{ // SHR EDI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667467;}
case 0x667467:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667469;}
case 0x667469:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x66746b;}
case 0x66746b:{ // AND dword ptr [EAX + 0x18],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
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
return 0x66746f;}
case 0x66746f:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667472;}
case 0x667472:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667474;}
case 0x667474:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667476;}
case 0x667476:{ // SHR EDI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667479;}
case 0x667479:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66747b;}
case 0x66747b:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x66747d;}
case 0x66747d:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667480;}
case 0x667480:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667482;}
case 0x667482:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667484;}
case 0x667484:{ // SHR EDI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667487;}
case 0x667487:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667489;}
case 0x667489:{ // MOV EDI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66748c;}
case 0x66748c:{ // MOV dword ptr [EBP + -0x3c],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66748f;}
case 0x66748f:{ // MOV dword ptr [EAX + 0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667492;}
case 0x667492:{ // MOV ESI,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667495;}
case 0x667495:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x667497;}
case 0x667497:{ // MOV dword ptr [EAX + 0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66749a;}
case 0x66749a:{ // MOV ESI,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66749c;}
case 0x66749c:{ // ADD ESI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66749e;}
case 0x66749e:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674a1;}
case 0x6674a1:{ // SHL ESI,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x6674a4;}
case 0x6674a4:{ // MOV dword ptr [EAX + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674a7;}
case 0x6674a7:{ // JZ 0x006674ad
if(r<1>(c,0x206)){return 0x6674ad;}
return 0x6674a9;}
case 0x6674a9:{ // DEC ESI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674aa;}
case 0x6674aa:{ // MOV dword ptr [EAX + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674ad;}
case 0x6674ad:{ // MOV ESI,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674b0;}
case 0x6674b0:{ // MOV ESI,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674b2;}
case 0x6674b2:{ // MOV EDI,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674b5;}
case 0x6674b5:{ // ADD ESI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674b7;}
case 0x6674b7:{ // SHL ESI,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x6674ba;}
case 0x6674ba:{ // MOV dword ptr [EAX + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674bd;}
case 0x6674bd:{ // JZ 0x006674c3
if(r<1>(c,0x206)){return 0x6674c3;}
return 0x6674bf;}
case 0x6674bf:{ // DEC ESI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674c0;}
case 0x6674c0:{ // MOV dword ptr [EAX + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674c3;}
case 0x6674c3:{ // MOV ESI,dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674c6;}
case 0x6674c6:{ // MOV ESI,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674c8;}
case 0x6674c8:{ // MOV EDI,dword ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674cb;}
case 0x6674cb:{ // ADD ESI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674cd;}
case 0x6674cd:{ // SHL ESI,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x6674d0;}
case 0x6674d0:{ // MOV dword ptr [EAX + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674d3;}
case 0x6674d3:{ // JZ 0x006674d9
if(r<1>(c,0x206)){return 0x6674d9;}
return 0x6674d5;}
case 0x6674d5:{ // DEC ESI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674d6;}
case 0x6674d6:{ // MOV dword ptr [EAX + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6674d9;}
case 0x6674d9:{ // MOV EDI,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6674dc;}
case 0x6674dc:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6674de;}
case 0x6674de:{ // SHR ESI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674e0;}
case 0x6674e0:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674e2;}
case 0x6674e2:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x6674e4;}
case 0x6674e4:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x6674e7;}
case 0x6674e7:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674e9;}
case 0x6674e9:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6674eb;}
case 0x6674eb:{ // SHR ESI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x6674ee;}
case 0x6674ee:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674f0;}
case 0x6674f0:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x6674f2;}
case 0x6674f2:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x6674f5;}
case 0x6674f5:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674f7;}
case 0x6674f7:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6674f9;}
case 0x6674f9:{ // SHR ESI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x6674fc;}
case 0x6674fc:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6674fe;}
case 0x6674fe:{ // MOV EDI,dword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667501;}
case 0x667501:{ // MOV dword ptr [EAX + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667504;}
case 0x667504:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667506;}
case 0x667506:{ // SHR ESI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667508;}
case 0x667508:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66750a;}
case 0x66750a:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x66750c;}
case 0x66750c:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x66750f;}
case 0x66750f:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667511;}
case 0x667511:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667513;}
case 0x667513:{ // SHR ESI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x667516;}
case 0x667516:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667518;}
case 0x667518:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x66751a;}
case 0x66751a:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x66751d;}
case 0x66751d:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66751f;}
case 0x66751f:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667521;}
case 0x667521:{ // SHR ESI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x667524;}
case 0x667524:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667526;}
case 0x667526:{ // MOV EDI,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667529;}
case 0x667529:{ // MOV dword ptr [EAX + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66752c;}
case 0x66752c:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x66752e;}
case 0x66752e:{ // SHR ESI,0x1
wu<4>(c,0xa1200,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa1200),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667530;}
case 0x667530:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667532;}
case 0x667532:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667534;}
case 0x667534:{ // SHR EDI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667537;}
case 0x667537:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667539;}
case 0x667539:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x66753b;}
case 0x66753b:{ // SHR ESI,0x4
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x66753e;}
case 0x66753e:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667540;}
case 0x667540:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667542;}
case 0x667542:{ // SHR EDI,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x667545;}
case 0x667545:{ // OR EDI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667547;}
case 0x667547:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667549;}
case 0x667549:{ // SHR ESI,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x66754c;}
case 0x66754c:{ // OR ESI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_OR,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66754e;}
case 0x66754e:{ // MOV dword ptr [EAX + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667551;}
case 0x667551:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667554;}
case 0x667554:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667556;}
case 0x667556:{ // AND ESI,0x7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667559;}
case 0x667559:{ // SHR EDI,0x3
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1c),u<4>(c,0xa1b00)));
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
return 0x66755c;}
case 0x66755c:{ // LEA ESI,[ESI + EDI*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x66755f;}
case 0x66755f:{ // MOV dword ptr [EBX + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667562;}
case 0x667562:{ // MOV dword ptr [EAX + 0x1c],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667565;}
case 0x667565:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667568;}
case 0x667568:{ // LEA ECX,[ESI + ECX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x66756b;}
case 0x66756b:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x66756d;}
case 0x66756d:{ // AND ECX,0x7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667570;}
case 0x667570:{ // SHR ESI,0x3
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x18),u<4>(c,0xa1b00)));
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
return 0x667573;}
case 0x667573:{ // LEA ECX,[ECX + ESI*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667576;}
case 0x667576:{ // MOV dword ptr [EBX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667579;}
case 0x667579:{ // MOV dword ptr [EAX + 0x20],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66757c;}
case 0x66757c:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66757f;}
case 0x66757f:{ // LEA EDX,[ECX + EDX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667582;}
case 0x667582:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x667584;}
case 0x667584:{ // SHR ECX,0x3
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
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
return 0x667587;}
case 0x667587:{ // AND EDX,0x7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66758a;}
case 0x66758a:{ // LEA ECX,[EDX + ECX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x66758d;}
case 0x66758d:{ // MOV dword ptr [EBX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667590;}
case 0x667590:{ // MOV dword ptr [EAX + 0x24],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667593;}
case 0x667593:{ // MOV ECX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667596;}
case 0x667596:{ // SHL ECX,0x3
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
return 0x667599;}
case 0x667599:{ // ADD dword ptr [EBX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x66759c;}
case 0x66759c:{ // MOV ECX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66759f;}
case 0x66759f:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675a1;}
case 0x6675a1:{ // MOV dword ptr [EAX + 0x28],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675a4;}
case 0x6675a4:{ // MOV dword ptr [EAX + 0x2c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675a7;}
case 0x6675a7:{ // MOV ECX,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675aa;}
case 0x6675aa:{ // MOV dword ptr [EAX + 0x30],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675ad;}
case 0x6675ad:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675b0;}
case 0x6675b0:{ // MOV word ptr [ECX + 0x56],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6675b4;}
case 0x6675b4:{ // MOV word ptr [ECX + 0x54],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x54ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6675b8;}
case 0x6675b8:{ // ADD EAX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x40ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675bb;}
case 0x6675bb:{ // MOV ECX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675be;}
case 0x6675be:{ // MOV ECX,dword ptr [ECX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675c1;}
case 0x6675c1:{ // MOV dword ptr [EAX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675c4;}
case 0x6675c4:{ // MOV ECX,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675c7;}
case 0x6675c7:{ // MOV ECX,dword ptr [ECX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675ca;}
case 0x6675ca:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x6675cc;}
case 0x6675cc:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675cd;}
case 0x6675cd:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675d0;}
case 0x6675d0:{ // CMP EDX,0x3
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675d3;}
case 0x6675d3:{ // JC 0x006675bb
if(r<1>(c,0x200)){return 0x6675bb;}
return 0x6675d5;}
case 0x6675d5:{ // MOV EAX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675d8;}
case 0x6675d8:{ // SUB EAX,dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
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
return 0x6675db;}
case 0x6675db:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675de;}
case 0x6675de:{ // ADD EAX,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x80ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6675e3;}
case 0x6675e3:{ // MOV dword ptr [ECX + 0x5c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675e6;}
case 0x6675e6:{ // MOV EDX,dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675e9;}
case 0x6675e9:{ // MOV EDX,dword ptr [EAX + EDX*0x1 + -0x68]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff98ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675ed;}
case 0x6675ed:{ // LEA EAX,[EAX + EDX*0x8 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x6675f1;}
case 0x6675f1:{ // MOV dword ptr [ECX + 0x60],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6675f4;}
case 0x6675f4:{ // MOV EDX,dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675f7;}
case 0x6675f7:{ // MOV EDX,dword ptr [EAX + EDX*0x1 + -0x68]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff98ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6675fb;}
case 0x6675fb:{ // LEA EAX,[EAX + EDX*0x8 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x6675ff;}
case 0x6675ff:{ // MOV dword ptr [ECX + 0x64],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x64ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667602;}
case 0x667602:{ // MOV ESI,dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667605;}
case 0x667605:{ // LEA EAX,[ECX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x68ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667608;}
case 0x667608:{ // MOV ECX,dword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66760b;}
case 0x66760b:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x66760d;}
case 0x66760d:{ // SHR ECX,0x2
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
return 0x667610;}
case 0x667610:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667612;}
case 0x667612:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667614;}
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
return 0x667612;
return 0x667614;}
case 0x667614:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x667616;}
case 0x667616:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667619;}
case 0x667619:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x66761b;}
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
return 0x667619;
return 0x66761b;}
case 0x66761b:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66761e;}
case 0x66761e:{ // LEA EDX,[ECX + 0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x44ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667621;}
case 0x667621:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667622;}
case 0x667622:{ // ADD ECX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667625;}
case 0x667625:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667626;}
case 0x667626:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667627;}
case 0x667627:{ // CALL 0x00688dc9
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66762cull);
return 0x688dc9;
return 0x66762c;}
case 0x66762c:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66762e;}
case 0x66762e:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667631;}
case 0x667631:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x667637;}
case 0x667637:{ // MOVZX EAX,word ptr [EBX + 0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x66763b;}
case 0x66763b:{ // PUSH dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66763e;}
case 0x66763e:{ // MOV ECX,dword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667641;}
case 0x667641:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667642;}
case 0x667642:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667643;}
case 0x667643:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667646;}
case 0x667646:{ // CALL 0x00660f9c
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66764bull);
return 0x660f9c;
return 0x66764b;}
case 0x66764b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66764d;}
case 0x66764d:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667650;}
case 0x667650:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x667656;}
case 0x667656:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667659;}
case 0x667659:{ // MOV word ptr [EAX + 0x52],0xb4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0xb4ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66765f;}
case 0x66765f:{ // MOV dword ptr [EAX + 0x58],0x10000000
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x10000000ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667666;}
case 0x667666:{ // OR dword ptr [EBX + 0x8],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x66766a;}
case 0x66766a:{ // LEA EAX,[EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x66766d;}
case 0x66766d:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667670;}
case 0x667670:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667673;}
case 0x667673:{ // ADD EAX,0x5c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x5cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x5cull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667676;}
case 0x667676:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667679;}
case 0x667679:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66767b;}
case 0x66767b:{ // MOV DI,word ptr [EBP + ESI*0x1 + -0x24]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffdcull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wr<2>(c,0x1c,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667680;}
case 0x667680:{ // TEST DI,DI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa4400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x1c),r<2>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa4400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa4400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa4400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667683;}
case 0x667683:{ // JZ 0x006676d0
if(r<1>(c,0x206)){return 0x6676d0;}
return 0x667685;}
case 0x667685:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667688;}
case 0x667688:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66768a;}
case 0x66768a:{ // ADD EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x66768d;}
case 0x66768d:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66768f;}
case 0x66768f:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667691;}
case 0x667691:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667694;}
case 0x667694:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667696;}
case 0x667696:{ // JBE 0x006676a3
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x6676a3;}
return 0x667698;}
case 0x667698:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66769b;}
case 0x66769b:{ // ADD EDX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66769d;}
case 0x66769d:{ // ADD EAX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676a0;}
case 0x6676a0:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676a1;}
case 0x6676a1:{ // JNZ 0x0066769b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66769b;}
return 0x6676a3;}
case 0x6676a3:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6676a6;}
case 0x6676a6:{ // MOVZX EAX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x6676a9;}
case 0x6676a9:{ // CMP AX,DI
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(r<2>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676ac;}
case 0x6676ac:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x6676ae;}
case 0x6676ae:{ // JA 0x006676b2
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x6676b2;}
return 0x6676b0;}
case 0x6676b0:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6676b2;}
case 0x6676b2:{ // MOV AX,word ptr [EBP + ESI*0x1 + -0x70]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff90ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6676b7;}
case 0x6676b7:{ // MOVZX EDI,AX
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x0)));
return 0x6676ba;}
case 0x6676ba:{ // MOVZX ECX,CX
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(r<2>(c,0x4)));
return 0x6676bd;}
case 0x6676bd:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676bf;}
case 0x6676bf:{ // CMP EDI,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676c1;}
case 0x6676c1:{ // JNZ 0x006676e1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x6676e1;}
return 0x6676c3;}
case 0x6676c3:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676c5;}
case 0x6676c5:{ // JBE 0x006676d0
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x6676d0;}
return 0x6676c7;}
case 0x6676c7:{ // TEST AX,AX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa4400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),r<2>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa4400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa4400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa4400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676ca;}
case 0x6676ca:{ // JNZ 0x006676d0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x6676d0;}
return 0x6676cc;}
case 0x6676cc:{ // OR dword ptr [EBX + 0x8],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x10ull));
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
return 0x6676d0;}
case 0x6676d0:{ // ADD dword ptr [EBP + -0x4],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x6676d4;}
case 0x6676d4:{ // ADD dword ptr [EBP + -0x18],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x2ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x2ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x2ull));
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
return 0x6676d8;}
case 0x6676d8:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676d9;}
case 0x6676d9:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676da;}
case 0x6676da:{ // CMP ESI,0x6
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x6ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x6ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x6ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676dd;}
case 0x6676dd:{ // JC 0x0066767b
if(r<1>(c,0x200)){return 0x66767b;}
return 0x6676df;}
case 0x6676df:{ // JMP 0x006676e5
return 0x6676e5;
return 0x6676e1;}
case 0x6676e1:{ // AND dword ptr [EBX + 0x8],0xfffffffe
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffeull));
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
return 0x6676e5;}
case 0x6676e5:{ // TEST byte ptr [EBX + 0x8],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676e9;}
case 0x6676e9:{ // JZ 0x00667724
if(r<1>(c,0x206)){return 0x667724;}
return 0x6676eb;}
case 0x6676eb:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676ed;}
case 0x6676ed:{ // MOV AX,word ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6676f1;}
case 0x6676f1:{ // CMP AX,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6676f5;}
case 0x6676f5:{ // JA 0x006676fa
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x6676fa;}
return 0x6676f7;}
case 0x6676f7:{ // MOV EAX,dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6676fa;}
case 0x6676fa:{ // MOV word ptr [EBX + 0x50],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6676fe;}
case 0x6676fe:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667700;}
case 0x667700:{ // MOV AX,word ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667704;}
case 0x667704:{ // CMP AX,word ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667708;}
case 0x667708:{ // JA 0x0066770d
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x66770d;}
return 0x66770a;}
case 0x66770a:{ // MOV EAX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66770d;}
case 0x66770d:{ // MOV word ptr [EBX + 0x56],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667711;}
case 0x667711:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667713;}
case 0x667713:{ // MOV AX,word ptr [EBX + 0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667717;}
case 0x667717:{ // CMP AX,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66771b;}
case 0x66771b:{ // JA 0x00667720
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x667720;}
return 0x66771d;}
case 0x66771d:{ // MOV EAX,dword ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667720;}
case 0x667720:{ // MOV word ptr [EBX + 0x5c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667724;}
case 0x667724:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x667726;}
case 0x667726:{ // CALL 0x0065b733
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66772bull);
return 0x65b733;
return 0x66772b;}
case 0x66772b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66772d;}
case 0x66772d:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667730;}
case 0x667730:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x667736;}
case 0x667736:{ // AND word ptr [EBX + 0x34],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0x0ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66773b;}
case 0x66773b:{ // MOV ESI,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66773e;}
case 0x66773e:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667741;}
case 0x667741:{ // SHL EAX,0x2
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
return 0x667744;}
case 0x667744:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667745;}
case 0x667745:{ // CALL 0x00575620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66774aull);
return 0x575620;
return 0x66774a;}
case 0x66774a:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66774c;}
case 0x66774c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x66774d;}
case 0x66774d:{ // MOV dword ptr [EBP + -0x5c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667750;}
case 0x667750:{ // JZ 0x00667c87
if(r<1>(c,0x206)){return 0x667c87;}
return 0x667756;}
case 0x667756:{ // MOV ECX,dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667759;}
case 0x667759:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66775b;}
case 0x66775b:{ // ADD ECX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66775d;}
case 0x66775d:{ // CMP dword ptr [ESI + 0xc],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667760;}
case 0x667760:{ // JBE 0x0066776e
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x66776e;}
return 0x667762;}
case 0x667762:{ // MOV dword ptr [EAX + EDX*0x4],ECX
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa300));
return 0x667765;}
case 0x667765:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667766;}
case 0x667766:{ // ADD ECX,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x14ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667769;}
case 0x667769:{ // CMP EDX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66776c;}
case 0x66776c:{ // JC 0x00667762
if(r<1>(c,0x200)){return 0x667762;}
return 0x66776e;}
case 0x66776e:{ // PUSH 0x65b64b
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x65b64bull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x667773;}
case 0x667773:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x667775;}
case 0x667775:{ // PUSH dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667778;}
case 0x667778:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667779;}
case 0x667779:{ // CALL 0x0075cc70
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x66777eull);
return 0x75cc70;
return 0x66777e;}
case 0x66777e:{ // MOV EAX,dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667781;}
case 0x667781:{ // MOV ECX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667784;}
case 0x667784:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667786;}
case 0x667786:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667789;}
case 0x667789:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66778b;}
case 0x66778b:{ // ADD EAX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66778d;}
case 0x66778d:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66778f;}
case 0x66778f:{ // MOV dword ptr [EBP + -0x28],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667792;}
case 0x667792:{ // JBE 0x006677b9
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x6677b9;}
return 0x667794;}
case 0x667794:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667797;}
case 0x667797:{ // MOV dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66779a;}
case 0x66779a:{ // MOVZX ECX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x66779d;}
case 0x66779d:{ // SUB ECX,0x0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x0ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677a0;}
case 0x6677a0:{ // JZ 0x006677b0
if(r<1>(c,0x206)){return 0x6677b0;}
return 0x6677a2;}
case 0x6677a2:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677a3;}
case 0x6677a3:{ // JZ 0x006677ab
if(r<1>(c,0x206)){return 0x6677ab;}
return 0x6677a5;}
case 0x6677a5:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677a6;}
case 0x6677a6:{ // JNZ 0x006677b1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x6677b1;}
return 0x6677a8;}
case 0x6677a8:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677a9;}
case 0x6677a9:{ // JMP 0x006677b1
return 0x6677b1;
return 0x6677ab;}
case 0x6677ab:{ // INC dword ptr [EBP + -0x28]
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
return 0x6677ae;}
case 0x6677ae:{ // JMP 0x006677b1
return 0x6677b1;
return 0x6677b0;}
case 0x6677b0:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677b1;}
case 0x6677b1:{ // ADD EAX,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677b4;}
case 0x6677b4:{ // DEC dword ptr [EBP + -0x8]
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
return 0x6677b7;}
case 0x6677b7:{ // JNZ 0x0066779a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66779a;}
return 0x6677b9;}
case 0x6677b9:{ // MOV ECX,dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6677bc;}
case 0x6677bc:{ // AND dword ptr [EBP + -0x38],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
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
return 0x6677c0;}
case 0x6677c0:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677c2;}
case 0x6677c2:{ // MOV AX,word ptr [EBX + 0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6677c6;}
case 0x6677c6:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677c8;}
case 0x6677c8:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677ca;}
case 0x6677ca:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677cc;}
case 0x6677cc:{ // MOV dword ptr [EBP + -0x10],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6677cf;}
case 0x6677cf:{ // MOV DI,word ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x1c,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6677d3;}
case 0x6677d3:{ // ADD DI,AX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,2,2>(r<2>(c,0x1c),r<2>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x1c),r<2>(c,0x0)));
wr<2>(c,0x1c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1c),r<2>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1c),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6677d6;}
case 0x6677d6:{ // MOV word ptr [EBX + 0x36],DI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x1c)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6677da;}
case 0x6677da:{ // MOV DI,word ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x1c,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6677de;}
case 0x6677de:{ // MOV word ptr [EBX + 0x4c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6677e2;}
case 0x6677e2:{ // MOV word ptr [EBX + 0x52],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6677e6;}
case 0x6677e6:{ // MOV word ptr [EBX + 0x58],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6677ea;}
case 0x6677ea:{ // MOV word ptr [EBX + 0x5e],DI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x1c)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6677ee;}
case 0x6677ee:{ // CMP dword ptr [ESI + 0xc],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
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
return 0x6677f2;}
case 0x6677f2:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6677f5;}
case 0x6677f5:{ // MOV dword ptr [EBP + -0x18],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6677f8;}
case 0x6677f8:{ // MOV dword ptr [EBP + -0x28],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6677fb;}
case 0x6677fb:{ // JBE 0x00667c6e
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667c6e;}
return 0x667801;}
case 0x667801:{ // MOV EAX,dword ptr [EBP + -0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667804;}
case 0x667804:{ // MOV ECX,dword ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667807;}
case 0x667807:{ // MOV EDI,dword ptr [EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66780a;}
case 0x66780a:{ // MOVZX EAX,word ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x66780e;}
case 0x66780e:{ // AND dword ptr [EBP + -0xc],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x667812;}
case 0x667812:{ // SUB EAX,0x0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x0ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667815;}
case 0x667815:{ // MOV dword ptr [EBP + -0x54],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667818;}
case 0x667818:{ // JZ 0x0066783e
if(r<1>(c,0x206)){return 0x66783e;}
return 0x66781a;}
case 0x66781a:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66781b;}
case 0x66781b:{ // JZ 0x00667835
if(r<1>(c,0x206)){return 0x667835;}
return 0x66781d;}
case 0x66781d:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66781e;}
case 0x66781e:{ // JZ 0x0066782c
if(r<1>(c,0x206)){return 0x66782c;}
return 0x667820;}
case 0x667820:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667821;}
case 0x667821:{ // JNZ 0x00667848
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667848;}
return 0x667823;}
case 0x667823:{ // MOVZX EAX,word ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667827;}
case 0x667827:{ // INC dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x66782a;}
case 0x66782a:{ // JMP 0x00667845
return 0x667845;
return 0x66782c;}
case 0x66782c:{ // MOVZX EAX,word ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667830;}
case 0x667830:{ // INC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x667833;}
case 0x667833:{ // JMP 0x00667845
return 0x667845;
return 0x667835;}
case 0x667835:{ // MOVZX EAX,word ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667839;}
case 0x667839:{ // INC dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
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
return 0x66783c;}
case 0x66783c:{ // JMP 0x00667845
return 0x667845;
return 0x66783e;}
case 0x66783e:{ // MOVZX EAX,word ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667842;}
case 0x667842:{ // INC dword ptr [EBP + -0x28]
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
return 0x667845;}
case 0x667845:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667848;}
case 0x667848:{ // MOV ESI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66784b;}
case 0x66784b:{ // MOV AX,word ptr [EDI + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x66784f;}
case 0x66784f:{ // IMUL ESI,ESI,0x64
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x64ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x18,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x667852;}
case 0x667852:{ // ADD ESI,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
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
return 0x667855;}
case 0x667855:{ // MOV ECX,dword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667858;}
case 0x667858:{ // MOV word ptr [ESI + 0x54],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x54ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66785c;}
case 0x66785c:{ // MOV AX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667860;}
case 0x667860:{ // OR dword ptr [ESI + 0x30],0x9
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x9ull));
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
return 0x667864;}
case 0x667864:{ // MOV word ptr [ESI + 0x56],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667868;}
case 0x667868:{ // MOV EAX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66786a;}
case 0x66786a:{ // ADD EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
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
return 0x66786d;}
case 0x66786d:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x66786f;}
case 0x66786f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667870;}
case 0x667870:{ // MOV dword ptr [EBP + -0x3c],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667873;}
case 0x667873:{ // CALL 0x0065be0d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667878ull);
return 0x65be0d;
return 0x667878;}
case 0x667878:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66787a;}
case 0x66787a:{ // MOV dword ptr [EBP + -0x20],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x66787d;}
case 0x66787d:{ // JZ 0x00667910
if(r<1>(c,0x206)){return 0x667910;}
return 0x667883;}
case 0x667883:{ // CMP word ptr [ESI + 0x50],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x61800,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61800),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61800),0x1ull));
wu<2>(c,0x61a00,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61800),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61a00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667888;}
case 0x667888:{ // JNC 0x006678c7
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x6678c7;}
return 0x66788a;}
case 0x66788a:{ // PUSH 0x24
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x24ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x66788c;}
case 0x66788c:{ // CALL 0x00575620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667891ull);
return 0x575620;
return 0x667891;}
case 0x667891:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667893;}
case 0x667893:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667894;}
case 0x667894:{ // JZ 0x006678b4
if(r<1>(c,0x206)){return 0x6678b4;}
return 0x667896;}
case 0x667896:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667898;}
case 0x667898:{ // PUSH 0x65b680
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x65b680ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x66789d;}
case 0x66789d:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66789e;}
case 0x66789e:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x66789f;}
case 0x66789f:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x6678a1;}
case 0x6678a1:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6678a4;}
case 0x6678a4:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x6678a6;}
case 0x6678a6:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6678a7;}
case 0x6678a7:{ // MOV dword ptr [EBP + -0x30],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6678aa;}
case 0x6678aa:{ // CALL 0x00401650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6678afull);
return 0x401650;
return 0x6678af;}
case 0x6678af:{ // MOV EAX,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6678b2;}
case 0x6678b2:{ // JMP 0x006678b6
return 0x6678b6;
return 0x6678b4;}
case 0x6678b4:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6678b6;}
case 0x6678b6:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6678b8;}
case 0x6678b8:{ // MOV dword ptr [ESI + 0x34],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x34ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6678bb;}
case 0x6678bb:{ // JZ 0x00667c87
if(r<1>(c,0x206)){return 0x667c87;}
return 0x6678c1;}
case 0x6678c1:{ // MOV word ptr [ESI + 0x50],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x1ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6678c7;}
case 0x6678c7:{ // MOV ECX,dword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6678ca;}
case 0x6678ca:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6678cb;}
case 0x6678cb:{ // PUSH dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6678ce;}
case 0x6678ce:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x6678d0;}
case 0x6678d0:{ // PUSH dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6678d3;}
case 0x6678d3:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6678d6;}
case 0x6678d6:{ // CALL 0x0065bd1e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6678dbull);
return 0x65bd1e;
return 0x6678db;}
case 0x6678db:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6678dd;}
case 0x6678dd:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6678e0;}
case 0x6678e0:{ // JL 0x00667d3e
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667d3e;}
return 0x6678e6;}
case 0x6678e6:{ // MOV EDX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6678e9;}
case 0x6678e9:{ // MOV EAX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6678ec;}
case 0x6678ec:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x6678ee;}
case 0x6678ee:{ // LEA EDI,[EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6678f1;}
case 0x6678f1:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6678f2;}
case 0x6678f2:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x6678f4;}
case 0x6678f4:{ // MOV word ptr [EDX + 0x4e],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x1ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x6678fa;}
case 0x6678fa:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x6678fc;}
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
return 0x6678fa;
return 0x6678fc;}
case 0x6678fc:{ // AND dword ptr [EDX + 0x28],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
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
return 0x667900;}
case 0x667900:{ // AND dword ptr [EDX + 0x2c],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2cull));
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
return 0x667904;}
case 0x667904:{ // AND dword ptr [EDX + 0x30],0xfffffffd
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffdull));
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
return 0x667908;}
case 0x667908:{ // MOV dword ptr [EDX],0x1
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,r<4>(c,0x8),u<4>(c,0xa300));
return 0x66790e;}
case 0x66790e:{ // JMP 0x00667919
return 0x667919;
return 0x667910;}
case 0x667910:{ // AND dword ptr [ESI],0x0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667913;}
case 0x667913:{ // MOV EAX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667916;}
case 0x667916:{ // MOV EDX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667919;}
case 0x667919:{ // MOV ESI,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66791c;}
case 0x66791c:{ // MOV EDI,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x66791f;}
case 0x66791f:{ // MOV dword ptr [EDX + 0x3c],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667922;}
case 0x667922:{ // MOVZX ECX,word ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667926;}
case 0x667926:{ // SUB ECX,0x0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x0ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667929;}
case 0x667929:{ // JZ 0x00667bed
if(r<1>(c,0x206)){return 0x667bed;}
return 0x66792f;}
case 0x66792f:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667930;}
case 0x667930:{ // JZ 0x00667b54
if(r<1>(c,0x206)){return 0x667b54;}
return 0x667936;}
case 0x667936:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667937;}
case 0x667937:{ // JZ 0x006679d1
if(r<1>(c,0x206)){return 0x6679d1;}
return 0x66793d;}
case 0x66793d:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66793e;}
case 0x66793e:{ // JNZ 0x00667c53
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667c53;}
return 0x667944;}
case 0x667944:{ // MOV ESI,dword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667947;}
case 0x667947:{ // MOV word ptr [EDX + 0x52],0xb2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0xb2ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66794d;}
case 0x66794d:{ // MOV dword ptr [EDX + 0x58],0xf000000
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xf000000ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667954;}
case 0x667954:{ // MOVZX ECX,word ptr [EDI + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667958;}
case 0x667958:{ // ADD word ptr [EDX + 0x54],0x101
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,2,2>(u<2>(c,0xa200),0x101ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(u<2>(c,0xa200),0x101ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_ADD,2,2,2>(u<2>(c,0xa200),0x101ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66795e;}
case 0x66795e:{ // AND dword ptr [EDX + 0x30],0xfffffffd
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffdull));
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
return 0x667962;}
case 0x667962:{ // LEA ECX,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667965;}
case 0x667965:{ // MOV dword ptr [EDX + 0x48],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667968;}
case 0x667968:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66796a;}
case 0x66796a:{ // CMP EAX,ECX
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
return 0x66796c;}
case 0x66796c:{ // MOV dword ptr [EDX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x8),u<4>(c,0xa300));
return 0x66796e;}
case 0x66796e:{ // JZ 0x006679a1
if(r<1>(c,0x206)){return 0x6679a1;}
return 0x667970;}
case 0x667970:{ // MOV CX,word ptr [EAX + 0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x44ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667974;}
case 0x667974:{ // MOV ESI,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667976;}
case 0x667976:{ // MOV EDI,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667979;}
case 0x667979:{ // INC CX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(r<2>(c,0x4),0x1ull));
wr<2>(c,0x4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x4),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66797b;}
case 0x66797b:{ // MOV word ptr [ESI + EDI*0x1],CX
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6c00),u<2>(c,0xa200));
return 0x66797f;}
case 0x66797f:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667981;}
case 0x667981:{ // MOV ESI,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667984;}
case 0x667984:{ // AND word ptr [ECX + ESI*0x1 + 0x2],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x7400)));
wu<2>(c,0xa200,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0x0ull));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x7400)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x7400)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x7400)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x66798a;}
case 0x66798a:{ // MOV AX,word ptr [EAX + 0x46]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x46ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x66798e;}
case 0x66798e:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667990;}
case 0x667990:{ // MOV CX,word ptr [EDX + 0x56]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x56ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667994;}
case 0x667994:{ // CMP CX,AX
wu<2>(c,0x62a00,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wu<2>(c,0x62c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x4),u<2>(c,0x62a00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667997;}
case 0x667997:{ // JNC 0x0066799b
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x66799b;}
return 0x667999;}
case 0x667999:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x66799b;}
case 0x66799b:{ // MOV word ptr [EDX + 0x56],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x56ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x66799f;}
case 0x66799f:{ // JMP 0x006679b4
return 0x6679b4;
return 0x6679a1;}
case 0x6679a1:{ // MOV EAX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679a3;}
case 0x6679a3:{ // MOV ESI,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679a6;}
case 0x6679a6:{ // MOV word ptr [EAX + ESI*0x1],CX
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6c00),u<2>(c,0xa200));
return 0x6679aa;}
case 0x6679aa:{ // MOV EAX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679ac;}
case 0x6679ac:{ // MOV EDX,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679af;}
case 0x6679af:{ // MOV word ptr [EAX + EDX*0x1 + 0x2],CX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x6679b4;}
case 0x6679b4:{ // MOVZX EAX,word ptr [EBX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x6679b8;}
case 0x6679b8:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679bb;}
case 0x6679bb:{ // MOV DX,word ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x6679bf;}
case 0x6679bf:{ // LEA EAX,[ECX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x6679c2;}
case 0x6679c2:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679c4;}
case 0x6679c4:{ // MOV word ptr [EAX + ECX*0x1],DX
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6c00),u<2>(c,0xa200));
return 0x6679c8;}
case 0x6679c8:{ // INC word ptr [EBX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,2,2>(u<2>(c,0xa200),0x1ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_ADD,2,2,2>(u<2>(c,0xa200),0x1ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6679cc;}
case 0x6679cc:{ // JMP 0x00667c53
return 0x667c53;
return 0x6679d1;}
case 0x6679d1:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6679d3;}
case 0x6679d3:{ // JZ 0x00667ae3
if(r<1>(c,0x206)){return 0x667ae3;}
return 0x6679d9;}
case 0x6679d9:{ // MOV ECX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679dc;}
case 0x6679dc:{ // MOV ESI,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679de;}
case 0x6679de:{ // MOV dword ptr [EBP + -0x30],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6679e1;}
case 0x6679e1:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6679e3;}
case 0x6679e3:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6679e4;}
case 0x6679e4:{ // CMP dword ptr [ECX + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6679e7;}
case 0x6679e7:{ // JNC 0x006679ee
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x6679ee;}
return 0x6679e9;}
case 0x6679e9:{ // MOV dword ptr [EBP + -0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6679ec;}
case 0x6679ec:{ // JMP 0x006679f7
return 0x6679f7;
return 0x6679ee;}
case 0x6679ee:{ // MOV ECX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679f1;}
case 0x6679f1:{ // MOV ECX,dword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679f4;}
case 0x6679f4:{ // MOV dword ptr [EBP + -0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x6679f7;}
case 0x6679f7:{ // MOV ECX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679fa;}
case 0x6679fa:{ // MOV ESI,dword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6679fd;}
case 0x6679fd:{ // MOV ECX,dword ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a00;}
case 0x667a00:{ // MOV dword ptr [EBP + -0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a03;}
case 0x667a03:{ // MOV ESI,dword ptr [EDI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a06;}
case 0x667a06:{ // ADD ESI,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
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
return 0x667a09;}
case 0x667a09:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a0b;}
case 0x667a0b:{ // JL 0x00667ae3
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x667ae3;}
return 0x667a11;}
case 0x667a11:{ // CMP ECX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a14;}
case 0x667a14:{ // JLE 0x00667ac2
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x667ac2;}
return 0x667a1a;}
case 0x667a1a:{ // CMP ECX,0x2
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a1d;}
case 0x667a1d:{ // JZ 0x00667a77
if(r<1>(c,0x206)){return 0x667a77;}
return 0x667a1f;}
case 0x667a1f:{ // CMP ECX,0x5
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x5ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a22;}
case 0x667a22:{ // JNZ 0x00667ae3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667ae3;}
return 0x667a28;}
case 0x667a28:{ // MOV ESI,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a2b;}
case 0x667a2b:{ // LEA EAX,[EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667a2e;}
case 0x667a2e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667a2f;}
case 0x667a2f:{ // MOV dword ptr [EBP + -0x30],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a32;}
case 0x667a32:{ // CALL 0x0065b098
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667a37ull);
return 0x65b098;
return 0x667a37;}
case 0x667a37:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a39;}
case 0x667a39:{ // JZ 0x00667ae3
if(r<1>(c,0x206)){return 0x667ae3;}
return 0x667a3f;}
case 0x667a3f:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x667a41;}
case 0x667a41:{ // LEA EAX,[EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667a44;}
case 0x667a44:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667a45;}
case 0x667a45:{ // MOV dword ptr [EBP + -0x30],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a48;}
case 0x667a48:{ // CALL 0x0065b019
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667a4dull);
return 0x65b019;
return 0x667a4d;}
case 0x667a4d:{ // MOV ECX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a50;}
case 0x667a50:{ // OR dword ptr [ECX + 0x30],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x10ull));
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
return 0x667a54;}
case 0x667a54:{ // MOV EDX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a57;}
case 0x667a57:{ // MOV EDX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a59;}
case 0x667a59:{ // MOV dword ptr [ECX + 0x5c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a5c;}
case 0x667a5c:{ // MOV EDX,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a5f;}
case 0x667a5f:{ // MOVZX EDX,word ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667a63;}
case 0x667a63:{ // CMP EAX,EDX
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
return 0x667a65;}
case 0x667a65:{ // JNC 0x00667a69
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x667a69;}
return 0x667a67;}
case 0x667a67:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667a69;}
case 0x667a69:{ // MOV EDI,dword ptr [EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a6c;}
case 0x667a6c:{ // SHL EDX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x8),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x667a6f;}
case 0x667a6f:{ // MOV dword ptr [ECX + 0x60],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a72;}
case 0x667a72:{ // MOV EDX,dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a75;}
case 0x667a75:{ // JMP 0x00667ae3
return 0x667ae3;
return 0x667a77;}
case 0x667a77:{ // CMP dword ptr [EBP + -0x30],0x3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a7b;}
case 0x667a7b:{ // JNZ 0x00667ae3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667ae3;}
return 0x667a7d;}
case 0x667a7d:{ // CMP word ptr [ESI],0x3
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x18)));
wu<2>(c,0x61800,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61800),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61800),0x3ull));
wu<2>(c,0x61a00,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61800),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61a00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a81;}
case 0x667a81:{ // JNZ 0x00667ae3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667ae3;}
return 0x667a83;}
case 0x667a83:{ // MOV ECX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a86;}
case 0x667a86:{ // CMP ECX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667a89;}
case 0x667a89:{ // JNZ 0x00667aa2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667aa2;}
return 0x667a8b;}
case 0x667a8b:{ // OR dword ptr [EDX + 0x30],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x10ull));
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
return 0x667a8f;}
case 0x667a8f:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667a91;}
case 0x667a91:{ // MOV dword ptr [EDX + 0x5c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667a94;}
case 0x667a94:{ // MOVZX EAX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667a98;}
case 0x667a98:{ // CMP dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x667a9b;}
case 0x667a9b:{ // JNC 0x00667add
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x667add;}
return 0x667a9d;}
case 0x667a9d:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667aa0;}
case 0x667aa0:{ // JMP 0x00667add
return 0x667add;
return 0x667aa2;}
case 0x667aa2:{ // CMP dword ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667aa6;}
case 0x667aa6:{ // JNZ 0x00667ae3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667ae3;}
return 0x667aa8;}
case 0x667aa8:{ // OR dword ptr [EDX + 0x30],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x10ull));
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
return 0x667aac;}
case 0x667aac:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667aae;}
case 0x667aae:{ // MOV dword ptr [EDX + 0x5c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ab1;}
case 0x667ab1:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667ab3;}
case 0x667ab3:{ // MOVZX ECX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667ab7;}
case 0x667ab7:{ // SHL EAX,0x2
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
return 0x667aba;}
case 0x667aba:{ // CMP EAX,ECX
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
return 0x667abc;}
case 0x667abc:{ // JC 0x00667add
if(r<1>(c,0x200)){return 0x667add;}
return 0x667abe;}
case 0x667abe:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667ac0;}
case 0x667ac0:{ // JMP 0x00667add
return 0x667add;
return 0x667ac2;}
case 0x667ac2:{ // CMP dword ptr [EBP + -0x30],0x3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ac6;}
case 0x667ac6:{ // JNZ 0x00667ae3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667ae3;}
return 0x667ac8;}
case 0x667ac8:{ // OR dword ptr [EDX + 0x30],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x10ull));
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
return 0x667acc;}
case 0x667acc:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667ace;}
case 0x667ace:{ // MOV dword ptr [EDX + 0x5c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ad1;}
case 0x667ad1:{ // MOVZX EAX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667ad5;}
case 0x667ad5:{ // CMP dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x667ad8;}
case 0x667ad8:{ // JNC 0x00667add
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x667add;}
return 0x667ada;}
case 0x667ada:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667add;}
case 0x667add:{ // SHL EAX,0x4
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
return 0x667ae0;}
case 0x667ae0:{ // MOV dword ptr [EDX + 0x60],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ae3;}
case 0x667ae3:{ // MOV word ptr [EDX + 0x52],0x94
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x94ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667ae9;}
case 0x667ae9:{ // MOV dword ptr [EDX + 0x58],0xc000000
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xc000000ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667af0;}
case 0x667af0:{ // MOVZX ESI,word ptr [EDI + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667af4;}
case 0x667af4:{ // SHL ESI,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x667af7;}
case 0x667af7:{ // MOV dword ptr [EDX + 0x48],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667afa;}
case 0x667afa:{ // MOVZX ECX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667afe;}
case 0x667afe:{ // MOV EAX,dword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b01;}
case 0x667b01:{ // MOV EDI,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b03;}
case 0x667b03:{ // SHL ECX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x667b06;}
case 0x667b06:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b08;}
case 0x667b08:{ // MOV dword ptr [EBP + -0x30],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667b0b;}
case 0x667b0b:{ // JZ 0x00667b25
if(r<1>(c,0x206)){return 0x667b25;}
return 0x667b0d;}
case 0x667b0d:{ // MOV ESI,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b10;}
case 0x667b10:{ // ADD EDI,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
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
return 0x667b13;}
case 0x667b13:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b15;}
case 0x667b15:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667b17;}
case 0x667b17:{ // SHR ECX,0x2
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
return 0x667b1a;}
case 0x667b1a:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667b1c;}
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
return 0x667b1a;
return 0x667b1c;}
case 0x667b1c:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667b1e;}
case 0x667b1e:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b21;}
case 0x667b21:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667b23;}
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
return 0x667b21;
return 0x667b23;}
case 0x667b23:{ // JMP 0x00667b37
return 0x667b37;
return 0x667b25;}
case 0x667b25:{ // ADD EDI,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b27;}
case 0x667b27:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667b29;}
case 0x667b29:{ // SHR ECX,0x2
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
return 0x667b2c;}
case 0x667b2c:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b2e;}
case 0x667b2e:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667b30;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667b2e;
return 0x667b30;}
case 0x667b30:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667b32;}
case 0x667b32:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b35;}
case 0x667b35:{ // STOSB.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667b37;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x667b35;
return 0x667b37;}
case 0x667b37:{ // CMP byte ptr [EBX + 0x2c],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2cull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b3b;}
case 0x667b3b:{ // JZ 0x00667c53
if(r<1>(c,0x206)){return 0x667c53;}
return 0x667b41;}
case 0x667b41:{ // MOV EAX,dword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b44;}
case 0x667b44:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b46;}
case 0x667b46:{ // JZ 0x00667b4c
if(r<1>(c,0x206)){return 0x667b4c;}
return 0x667b48;}
case 0x667b48:{ // AND dword ptr [EAX + 0x30],0xfffffffe
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffeull));
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
return 0x667b4c;}
case 0x667b4c:{ // MOV dword ptr [EBP + -0x80],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667b4f;}
case 0x667b4f:{ // JMP 0x00667c53
return 0x667c53;
return 0x667b54;}
case 0x667b54:{ // AND dword ptr [EBP + -0x8],0x0
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
return 0x667b58;}
case 0x667b58:{ // MOV word ptr [EDX + 0x52],0x96
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x96ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667b5e;}
case 0x667b5e:{ // MOV dword ptr [EDX + 0x58],0xc020000
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xc020000ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667b65;}
case 0x667b65:{ // MOVZX EAX,word ptr [EDI + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667b69;}
case 0x667b69:{ // SHL EAX,0x4
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
return 0x667b6c;}
case 0x667b6c:{ // ADD EAX,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
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
return 0x667b6f;}
case 0x667b6f:{ // MOV dword ptr [EDX + 0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667b72;}
case 0x667b72:{ // CMP word ptr [EDI + 0x8],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x61800,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61800),0x0ull));
wu<2>(c,0x61a00,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61800),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61a00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b77;}
case 0x667b77:{ // JBE 0x00667bb4
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667bb4;}
return 0x667b79;}
case 0x667b79:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b7b;}
case 0x667b7b:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b7d;}
case 0x667b7d:{ // ADD ECX,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
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
return 0x667b80;}
case 0x667b80:{ // AND dword ptr [ECX + EAX*0x1],0x0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b84;}
case 0x667b84:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b86;}
case 0x667b86:{ // ADD ECX,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
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
return 0x667b89;}
case 0x667b89:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b8c;}
case 0x667b8c:{ // AND dword ptr [ECX + EAX*0x1 + -0xc],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffff4ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667b91;}
case 0x667b91:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667b93;}
case 0x667b93:{ // ADD ECX,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
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
return 0x667b96;}
case 0x667b96:{ // MOV dword ptr [ECX + EAX*0x1 + -0x8],0x1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffff8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x667b9e;}
case 0x667b9e:{ // MOV ECX,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667ba0;}
case 0x667ba0:{ // ADD ECX,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
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
return 0x667ba3;}
case 0x667ba3:{ // AND dword ptr [ECX + EAX*0x1 + -0x4],0x0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ba8;}
case 0x667ba8:{ // MOVZX ECX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667bac;}
case 0x667bac:{ // INC dword ptr [EBP + -0x8]
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
return 0x667baf;}
case 0x667baf:{ // CMP dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667bb2;}
case 0x667bb2:{ // JC 0x00667b7b
if(r<1>(c,0x200)){return 0x667b7b;}
return 0x667bb4;}
case 0x667bb4:{ // MOV EAX,dword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667bb7;}
case 0x667bb7:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667bb9;}
case 0x667bb9:{ // JZ 0x00667bd7
if(r<1>(c,0x206)){return 0x667bd7;}
return 0x667bbb;}
case 0x667bbb:{ // MOVZX ECX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667bbf;}
case 0x667bbf:{ // MOV EDI,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667bc1;}
case 0x667bc1:{ // ADD EDI,dword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
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
return 0x667bc4;}
case 0x667bc4:{ // SHL ECX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x667bc7;}
case 0x667bc7:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667bc9;}
case 0x667bc9:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667bcb;}
case 0x667bcb:{ // SHR ECX,0x2
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
return 0x667bce;}
case 0x667bce:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667bd0;}
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
return 0x667bce;
return 0x667bd0;}
case 0x667bd0:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667bd2;}
case 0x667bd2:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667bd5;}
case 0x667bd5:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667bd7;}
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
return 0x667bd5;
return 0x667bd7;}
case 0x667bd7:{ // CMP byte ptr [EBX + 0x2e],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2eull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667bdb;}
case 0x667bdb:{ // JZ 0x00667c53
if(r<1>(c,0x206)){return 0x667c53;}
return 0x667bdd;}
case 0x667bdd:{ // MOV EAX,dword ptr [EBP + -0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff88ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667be0;}
case 0x667be0:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667be2;}
case 0x667be2:{ // JZ 0x00667be8
if(r<1>(c,0x206)){return 0x667be8;}
return 0x667be4;}
case 0x667be4:{ // AND dword ptr [EAX + 0x30],0xfffffffe
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffeull));
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
return 0x667be8;}
case 0x667be8:{ // MOV dword ptr [EBP + -0x78],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff88ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667beb;}
case 0x667beb:{ // JMP 0x00667c53
return 0x667c53;
return 0x667bed;}
case 0x667bed:{ // MOV ECX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667bf0;}
case 0x667bf0:{ // MOV word ptr [EDX + 0x52],0x95
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x52ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(0x95ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667bf6;}
case 0x667bf6:{ // MOV dword ptr [EDX + 0x58],0xc010000
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xc010000ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667bfd;}
case 0x667bfd:{ // MOVZX EAX,word ptr [EDI + 0x6]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667c01;}
case 0x667c01:{ // LEA EAX,[ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667c04;}
case 0x667c04:{ // MOV dword ptr [EDX + 0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667c07;}
case 0x667c07:{ // MOVZX ECX,word ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667c0b;}
case 0x667c0b:{ // MOV dword ptr [EBP + -0x30],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667c0e;}
case 0x667c0e:{ // MOV EAX,dword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c11;}
case 0x667c11:{ // MOV EDI,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c13;}
case 0x667c13:{ // ADD EDI,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
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
return 0x667c16;}
case 0x667c16:{ // SHL ECX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x667c19;}
case 0x667c19:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c1b;}
case 0x667c1b:{ // JZ 0x00667c2f
if(r<1>(c,0x206)){return 0x667c2f;}
return 0x667c1d;}
case 0x667c1d:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c1f;}
case 0x667c1f:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667c21;}
case 0x667c21:{ // SHR ECX,0x2
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
return 0x667c24;}
case 0x667c24:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667c26;}
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
return 0x667c24;
return 0x667c26;}
case 0x667c26:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x667c28;}
case 0x667c28:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c2b;}
case 0x667c2b:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667c2d;}
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
return 0x667c2b;
return 0x667c2d;}
case 0x667c2d:{ // JMP 0x00667c3f
return 0x667c3f;
return 0x667c2f;}
case 0x667c2f:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667c31;}
case 0x667c31:{ // SHR ECX,0x2
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
return 0x667c34;}
case 0x667c34:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c36;}
case 0x667c36:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667c38;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667c36;
return 0x667c38;}
case 0x667c38:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x667c3a;}
case 0x667c3a:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c3d;}
case 0x667c3d:{ // STOSB.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x667c3f;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x667c3d;
return 0x667c3f;}
case 0x667c3f:{ // CMP byte ptr [EBX + 0x2d],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2dull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c43;}
case 0x667c43:{ // JZ 0x00667c53
if(r<1>(c,0x206)){return 0x667c53;}
return 0x667c45;}
case 0x667c45:{ // MOV EAX,dword ptr [EBP + -0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff84ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c48;}
case 0x667c48:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c4a;}
case 0x667c4a:{ // JZ 0x00667c50
if(r<1>(c,0x206)){return 0x667c50;}
return 0x667c4c;}
case 0x667c4c:{ // AND dword ptr [EAX + 0x30],0xfffffffe
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffeull));
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
return 0x667c50;}
case 0x667c50:{ // MOV dword ptr [EBP + -0x7c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff84ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667c53;}
case 0x667c53:{ // INC dword ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
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
return 0x667c56;}
case 0x667c56:{ // MOV EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c59;}
case 0x667c59:{ // MOV ECX,dword ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c5c;}
case 0x667c5c:{ // CMP ECX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
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
return 0x667c5f;}
case 0x667c5f:{ // JC 0x00667801
if(r<1>(c,0x200)){return 0x667801;}
return 0x667c65;}
case 0x667c65:{ // MOV ECX,dword ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c68;}
case 0x667c68:{ // MOV EDX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c6b;}
case 0x667c6b:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667c6e;}
case 0x667c6e:{ // MOV word ptr [EBX + 0x4e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667c72;}
case 0x667c72:{ // MOV AX,word ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667c76;}
case 0x667c76:{ // MOV word ptr [EBX + 0x54],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x54ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667c7a;}
case 0x667c7a:{ // MOV word ptr [EBX + 0x5a],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x5aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667c7e;}
case 0x667c7e:{ // MOV word ptr [EBX + 0x60],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667c82;}
case 0x667c82:{ // JMP 0x00667d3e
return 0x667d3e;
return 0x667c87;}
case 0x667c87:{ // MOV dword ptr [EBP + -0x14],0x8007000e
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x8007000eull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667c8e;}
case 0x667c8e:{ // JMP 0x00667d3e
return 0x667d3e;
return 0x667c93;}
case 0x667c93:{ // TEST byte ptr [EBX + 0x8],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667c97;}
case 0x667c97:{ // JZ 0x00667d3b
if(r<1>(c,0x206)){return 0x667d3b;}
return 0x667c9d;}
case 0x667c9d:{ // CMP dword ptr [EDI + 0xb4],EDX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ca3;}
case 0x667ca3:{ // JZ 0x00667d3b
if(r<1>(c,0x206)){return 0x667d3b;}
return 0x667ca9;}
case 0x667ca9:{ // TEST byte ptr [EDI + 0x119],0x8
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x119ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667cb0;}
case 0x667cb0:{ // JNZ 0x00667d3b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667d3b;}
return 0x667cb6;}
case 0x667cb6:{ // MOV ESI,dword ptr [EDI + 0xac]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xacull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cbc;}
case 0x667cbc:{ // IMUL ESI,dword ptr [EDI + 0xa0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xa0ull));
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(u<4>(c,0x17200)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x18,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x667cc3;}
case 0x667cc3:{ // CMP ESI,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667cc5;}
case 0x667cc5:{ // MOV dword ptr [EBP + -0x40],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667cc8;}
case 0x667cc8:{ // MOV dword ptr [EBP + -0x18],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ccb;}
case 0x667ccb:{ // JBE 0x00667d37
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667d37;}
return 0x667ccd;}
case 0x667ccd:{ // MOV ECX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cd0;}
case 0x667cd0:{ // MOV EAX,dword ptr [EDI + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xc0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cd6;}
case 0x667cd6:{ // SHL ECX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x667cd9;}
case 0x667cd9:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cdc;}
case 0x667cdc:{ // CMP EAX,EDX
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
return 0x667cde;}
case 0x667cde:{ // JZ 0x00667d2f
if(r<1>(c,0x206)){return 0x667d2f;}
return 0x667ce0;}
case 0x667ce0:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ce3;}
case 0x667ce3:{ // MOV EAX,dword ptr [EDI + 0xb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667ce9;}
case 0x667ce9:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cec;}
case 0x667cec:{ // MOV dword ptr [EBP + -0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667cef;}
case 0x667cef:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cf2;}
case 0x667cf2:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667cf4;}
case 0x667cf4:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667cf6;}
case 0x667cf6:{ // CMP EAX,EDX
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
return 0x667cf8;}
case 0x667cf8:{ // JZ 0x00667d2f
if(r<1>(c,0x206)){return 0x667d2f;}
return 0x667cfa;}
case 0x667cfa:{ // MOVZX ESI,word ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667cfe;}
case 0x667cfe:{ // CMP ESI,dword ptr [EBP + 0x8]
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
return 0x667d01;}
case 0x667d01:{ // JNZ 0x00667d1f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667d1f;}
return 0x667d03;}
case 0x667d03:{ // CMP ECX,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d05;}
case 0x667d05:{ // JNZ 0x00667d18
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667d18;}
return 0x667d07;}
case 0x667d07:{ // MOV ECX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d0a;}
case 0x667d0a:{ // CMP dword ptr [ECX],EDX
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d0c;}
case 0x667d0c:{ // JZ 0x00667d18
if(r<1>(c,0x206)){return 0x667d18;}
return 0x667d0e;}
case 0x667d0e:{ // ADD ECX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d11;}
case 0x667d11:{ // CMP dword ptr [ECX],EDX
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d13;}
case 0x667d13:{ // JNZ 0x00667d0e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667d0e;}
return 0x667d15;}
case 0x667d15:{ // MOV dword ptr [EBP + -0x48],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d18;}
case 0x667d18:{ // MOV dword ptr [ECX],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x667d1a;}
case 0x667d1a:{ // ADD ECX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d1d;}
case 0x667d1d:{ // MOV dword ptr [ECX],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x667d1f;}
case 0x667d1f:{ // ADD dword ptr [EBP + -0x4],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x667d23;}
case 0x667d23:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d26;}
case 0x667d26:{ // MOV EAX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d28;}
case 0x667d28:{ // CMP EAX,EDX
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
return 0x667d2a;}
case 0x667d2a:{ // JNZ 0x00667cfa
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667cfa;}
return 0x667d2c;}
case 0x667d2c:{ // MOV ESI,dword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d2f;}
case 0x667d2f:{ // INC dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
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
return 0x667d32;}
case 0x667d32:{ // CMP dword ptr [EBP + -0x18],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d35;}
case 0x667d35:{ // JC 0x00667ccd
if(r<1>(c,0x200)){return 0x667ccd;}
return 0x667d37;}
case 0x667d37:{ // AND dword ptr [EBX + 0x8],0xfffffff7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffff7ull));
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
return 0x667d3b;}
case 0x667d3b:{ // MOV dword ptr [EBP + -0x14],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d3e;}
case 0x667d3e:{ // PUSH dword ptr [EBP + -0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667d41;}
case 0x667d41:{ // CALL 0x00575630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667d46ull);
return 0x575630;
return 0x667d46;}
case 0x667d46:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d49;}
case 0x667d49:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667d4a;}
case 0x667d4a:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667d4b;}
case 0x667d4b:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667d4c;}
case 0x667d4c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x667d4d;}
case 0x667d4d:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x667d4e;}
case 0x667d4e:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x667d51;}
case 0x667d51:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667d53;}
case 0x667d53:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667d54;}
case 0x667d54:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x667d56;}
case 0x667d56:{ // SUB ESP,0x84
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x84ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x84ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x84ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d5c;}
case 0x667d5c:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667d5d;}
case 0x667d5d:{ // MOV EBX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d60;}
case 0x667d60:{ // IMUL EBX,EBX,0x64
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0xc)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x64ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0xc,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x667d63;}
case 0x667d63:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667d64;}
case 0x667d64:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667d65;}
case 0x667d65:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x667d67;}
case 0x667d67:{ // ADD EBX,dword ptr [EDI + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d6a;}
case 0x667d6a:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d70;}
case 0x667d70:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d73;}
case 0x667d73:{ // MOV EAX,dword ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d76;}
case 0x667d76:{ // SHL EAX,0x2
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
return 0x667d79;}
case 0x667d79:{ // MOV ESI,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d7c;}
case 0x667d7c:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d7e;}
case 0x667d7e:{ // CMP dword ptr [ESI + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667d81;}
case 0x667d81:{ // MOV dword ptr [EBP + -0x50],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d84;}
case 0x667d84:{ // MOV dword ptr [EBP + -0x14],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d87;}
case 0x667d87:{ // MOV dword ptr [EBP + -0x5c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d8a;}
case 0x667d8a:{ // JNZ 0x00667d91
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667d91;}
return 0x667d8c;}
case 0x667d8c:{ // MOV ESI,dword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d8f;}
case 0x667d8f:{ // JMP 0x00667d97
return 0x667d97;
return 0x667d91;}
case 0x667d91:{ // MOV ESI,dword ptr [EDI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d94;}
case 0x667d94:{ // MOV ESI,dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667d97;}
case 0x667d97:{ // MOV dword ptr [EBP + -0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667d9a;}
case 0x667d9a:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667da0;}
case 0x667da0:{ // MOV EAX,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667da3;}
case 0x667da3:{ // MOV EAX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667da6;}
case 0x667da6:{ // ADD EAX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
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
return 0x667da9;}
case 0x667da9:{ // ADD EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x667dac;}
case 0x667dac:{ // MOV dword ptr [ECX + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667daf;}
case 0x667daf:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667db2;}
case 0x667db2:{ // MOV EAX,dword ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667db5;}
case 0x667db5:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dbb;}
case 0x667dbb:{ // SHL EAX,0x2
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
return 0x667dbe;}
case 0x667dbe:{ // MOV ESI,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dc1;}
case 0x667dc1:{ // CMP dword ptr [ESI + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667dc4;}
case 0x667dc4:{ // JNZ 0x00667dcb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667dcb;}
return 0x667dc6;}
case 0x667dc6:{ // MOV ESI,dword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dc9;}
case 0x667dc9:{ // JMP 0x00667dd1
return 0x667dd1;
return 0x667dcb;}
case 0x667dcb:{ // MOV ESI,dword ptr [EDI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dce;}
case 0x667dce:{ // MOV ESI,dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dd1;}
case 0x667dd1:{ // MOV dword ptr [EBP + -0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667dd4;}
case 0x667dd4:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dda;}
case 0x667dda:{ // MOV EAX,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667ddd;}
case 0x667ddd:{ // MOV EAX,dword ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667de0;}
case 0x667de0:{ // ADD EAX,dword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
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
return 0x667de3;}
case 0x667de3:{ // ADD EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x667de6;}
case 0x667de6:{ // MOV dword ptr [ECX + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667de9;}
case 0x667de9:{ // MOV ECX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dec;}
case 0x667dec:{ // MOV EAX,dword ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667def;}
case 0x667def:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667df5;}
case 0x667df5:{ // SHL EAX,0x2
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
return 0x667df8;}
case 0x667df8:{ // MOV ESI,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667dfb;}
case 0x667dfb:{ // CMP dword ptr [ESI + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667dfe;}
case 0x667dfe:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e04;}
case 0x667e04:{ // MOV EAX,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e07;}
case 0x667e07:{ // JNZ 0x00667e24
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667e24;}
return 0x667e09;}
case 0x667e09:{ // CMP dword ptr [EAX + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e0c;}
case 0x667e0c:{ // JNZ 0x00667e13
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667e13;}
return 0x667e0e;}
case 0x667e0e:{ // MOV ESI,dword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e11;}
case 0x667e11:{ // JMP 0x00667e19
return 0x667e19;
return 0x667e13;}
case 0x667e13:{ // MOV ESI,dword ptr [EDI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e16;}
case 0x667e16:{ // MOV ESI,dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e19;}
case 0x667e19:{ // MOV EAX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e1c;}
case 0x667e1c:{ // ADD EAX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
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
return 0x667e1f;}
case 0x667e1f:{ // MOV EAX,dword ptr [EAX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e22;}
case 0x667e22:{ // JMP 0x00667e58
return 0x667e58;
return 0x667e24;}
case 0x667e24:{ // CMP dword ptr [EAX + 0x40],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e27;}
case 0x667e27:{ // JNZ 0x00667e2e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667e2e;}
return 0x667e29;}
case 0x667e29:{ // MOV EAX,dword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e2c;}
case 0x667e2c:{ // JMP 0x00667e34
return 0x667e34;
return 0x667e2e;}
case 0x667e2e:{ // MOV EAX,dword ptr [EDI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e31;}
case 0x667e31:{ // MOV EAX,dword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e34;}
case 0x667e34:{ // MOV ESI,dword ptr [EDI + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e3a;}
case 0x667e3a:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667e3d;}
case 0x667e3d:{ // MOV EAX,dword ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e40;}
case 0x667e40:{ // MOV EAX,dword ptr [ESI + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e43;}
case 0x667e43:{ // MOV ECX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e46;}
case 0x667e46:{ // ADD ECX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
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
return 0x667e49;}
case 0x667e49:{ // MOV EAX,dword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e4c;}
case 0x667e4c:{ // MOV ESI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e4f;}
case 0x667e4f:{ // MOV ECX,dword ptr [ECX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e52;}
case 0x667e52:{ // MOV EAX,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e55;}
case 0x667e55:{ // MOV EAX,dword ptr [EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e58;}
case 0x667e58:{ // MOV ECX,dword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e5b;}
case 0x667e5b:{ // LEA EAX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667e5e;}
case 0x667e5e:{ // LEA ESI,[ECX + EAX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x667e61;}
case 0x667e61:{ // MOV EAX,dword ptr [ESI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667e64;}
case 0x667e64:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e66;}
case 0x667e66:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e67;}
case 0x667e67:{ // TEST CL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e69;}
case 0x667e69:{ // JZ 0x00668c02
if(r<1>(c,0x206)){return 0x668c02;}
return 0x667e6f;}
case 0x667e6f:{ // CMP dword ptr [ESI + 0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e72;}
case 0x667e72:{ // JNZ 0x00667e7f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x667e7f;}
return 0x667e74;}
case 0x667e74:{ // OR EAX,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e77;}
case 0x667e77:{ // MOV dword ptr [ESI + 0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667e7a;}
case 0x667e7a:{ // MOV dword ptr [ESI + 0xc],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667e7d;}
case 0x667e7d:{ // JMP 0x00667e97
return 0x667e97;
return 0x667e7f;}
case 0x667e7f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667e80;}
case 0x667e80:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667e82;}
case 0x667e82:{ // CALL 0x00661313
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667e87ull);
return 0x661313;
return 0x667e87;}
case 0x667e87:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e89;}
case 0x667e89:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667e8c;}
case 0x667e8c:{ // JL 0x00668cad
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x668cad;}
return 0x667e92;}
case 0x667e92:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e94;}
case 0x667e94:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e96;}
case 0x667e96:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e97;}
case 0x667e97:{ // AND dword ptr [ESI + 0x14],0xfffffffe
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffeull));
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
return 0x667e9b;}
case 0x667e9b:{ // CMP word ptr [EBX + 0x36],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62100,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x62100),r<2>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x62100),r<2>(c,0x4)));
wu<2>(c,0x62300,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x62100),r<2>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62300),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62300),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667e9f;}
case 0x667e9f:{ // MOV dword ptr [EBP + -0x1c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ea2;}
case 0x667ea2:{ // JBE 0x00667f55
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667f55;}
return 0x667ea8;}
case 0x667ea8:{ // MOV dword ptr [EBP + -0x8],0x64
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x64ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667eaf;}
case 0x667eaf:{ // MOV EAX,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667eb2;}
case 0x667eb2:{ // ADD EAX,dword ptr [EBP + -0x8]
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
return 0x667eb5;}
case 0x667eb5:{ // MOV CX,word ptr [EAX + 0x52]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x52ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x667eb9;}
case 0x667eb9:{ // CMP CX,0xb4
wu<2>(c,0x61200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61200),0xb4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61200),0xb4ull));
wu<2>(c,0x61400,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61200),0xb4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ebe;}
case 0x667ebe:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ec1;}
case 0x667ec1:{ // JZ 0x00667eec
if(r<1>(c,0x206)){return 0x667eec;}
return 0x667ec3;}
case 0x667ec3:{ // CMP CX,0xb5
wu<2>(c,0x61200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61200),0xb5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61200),0xb5ull));
wu<2>(c,0x61400,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61200),0xb5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ec8;}
case 0x667ec8:{ // JZ 0x00667eec
if(r<1>(c,0x206)){return 0x667eec;}
return 0x667eca;}
case 0x667eca:{ // CMP word ptr [EAX + 0x4e],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62100,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wu<2>(c,0x62300,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62300),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62300),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ece;}
case 0x667ece:{ // JBE 0x00667f3a
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667f3a;}
return 0x667ed0;}
case 0x667ed0:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x667ed2;}
case 0x667ed2:{ // PUSH dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667ed5;}
case 0x667ed5:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667ed7;}
case 0x667ed7:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667eda;}
case 0x667eda:{ // CALL 0x006611a2
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667edfull);
return 0x6611a2;
return 0x667edf;}
case 0x667edf:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ee1;}
case 0x667ee1:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667ee4;}
case 0x667ee4:{ // JL 0x00668cad
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x668cad;}
return 0x667eea;}
case 0x667eea:{ // JMP 0x00667f35
return 0x667f35;
return 0x667eec;}
case 0x667eec:{ // MOV ECX,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667eef;}
case 0x667eef:{ // CMP ECX,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667ef1;}
case 0x667ef1:{ // JZ 0x00667f02
if(r<1>(c,0x206)){return 0x667f02;}
return 0x667ef3;}
case 0x667ef3:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667ef5;}
case 0x667ef5:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667ef6;}
case 0x667ef6:{ // CALL dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667ef9ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x667ef9;}
case 0x667ef9:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667efc;}
case 0x667efc:{ // AND dword ptr [EAX + 0x38],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
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
return 0x667f00;}
case 0x667f00:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f02;}
case 0x667f02:{ // CMP word ptr [EAX + 0x4e],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x62100,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wu<2>(c,0x62300,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x62100),r<2>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x62300),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x62300),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x62300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f06;}
case 0x667f06:{ // MOV dword ptr [EBP + -0x10],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f09;}
case 0x667f09:{ // JBE 0x00667f3a
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x667f3a;}
return 0x667f0b;}
case 0x667f0b:{ // PUSH dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f0e;}
case 0x667f0e:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x667f10;}
case 0x667f10:{ // PUSH dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f13;}
case 0x667f13:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f16;}
case 0x667f16:{ // CALL 0x006611a2
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667f1bull);
return 0x6611a2;
return 0x667f1b;}
case 0x667f1b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f1d;}
case 0x667f1d:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f20;}
case 0x667f20:{ // JL 0x00668cad
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x668cad;}
return 0x667f26;}
case 0x667f26:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667f29;}
case 0x667f29:{ // MOVZX EAX,word ptr [EAX + 0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4eull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667f2d;}
case 0x667f2d:{ // INC dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x667f30;}
case 0x667f30:{ // CMP dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x667f33;}
case 0x667f33:{ // JC 0x00667f0b
if(r<1>(c,0x200)){return 0x667f0b;}
return 0x667f35;}
case 0x667f35:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667f38;}
case 0x667f38:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f3a;}
case 0x667f3a:{ // INC dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
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
return 0x667f3d;}
case 0x667f3d:{ // ADD dword ptr [EBP + -0x8],0x64
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x64ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x64ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x64ull));
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
return 0x667f41;}
case 0x667f41:{ // MOV word ptr [EAX + 0x4e],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667f45;}
case 0x667f45:{ // MOVZX EAX,word ptr [EBX + 0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x667f49;}
case 0x667f49:{ // CMP dword ptr [EBP + -0x1c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
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
return 0x667f4c;}
case 0x667f4c:{ // JC 0x00667eaf
if(r<1>(c,0x200)){return 0x667eaf;}
return 0x667f52;}
case 0x667f52:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f54;}
case 0x667f54:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f55;}
case 0x667f55:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f57;}
case 0x667f57:{ // LEA EDI,[EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667f5a;}
case 0x667f5a:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f5b;}
case 0x667f5b:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f5c;}
case 0x667f5c:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f5d;}
case 0x667f5d:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f5e;}
case 0x667f5e:{ // MOV word ptr [EBX + 0x36],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667f62;}
case 0x667f62:{ // MOV word ptr [EBX + 0x34],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x34ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667f66;}
case 0x667f66:{ // MOV word ptr [EBX + 0x1a],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x667f6a;}
case 0x667f6a:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f6c;}
case 0x667f6c:{ // LEA EDI,[EBX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x24ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667f6f;}
case 0x667f6f:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f70;}
case 0x667f70:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x667f71;}
case 0x667f71:{ // TEST byte ptr [ESI + 0x14],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f75;}
case 0x667f75:{ // JZ 0x00668cad
if(r<1>(c,0x206)){return 0x668cad;}
return 0x667f7b;}
case 0x667f7b:{ // MOV dword ptr [EBP + -0x2c],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f7e;}
case 0x667f7e:{ // MOV dword ptr [EBP + -0x44],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f81;}
case 0x667f81:{ // CMP dword ptr [ESI + 0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667f84;}
case 0x667f84:{ // MOV dword ptr [EBP + -0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f87;}
case 0x667f87:{ // MOV dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667f8a;}
case 0x667f8a:{ // JZ 0x006680a2
if(r<1>(c,0x206)){return 0x6680a2;}
return 0x667f90;}
case 0x667f90:{ // MOV EAX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667f93;}
case 0x667f93:{ // LEA ECX,[EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667f96;}
case 0x667f96:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f97;}
case 0x667f97:{ // LEA ECX,[EBP + -0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667f9a;}
case 0x667f9a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f9b;}
case 0x667f9b:{ // LEA ECX,[EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667f9e;}
case 0x667f9e:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667f9f;}
case 0x667f9f:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667fa1;}
case 0x667fa1:{ // LEA EDI,[ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667fa4;}
case 0x667fa4:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fa5;}
case 0x667fa5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fa6;}
case 0x667fa6:{ // MOV dword ptr [EBP + -0x4],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667fa9;}
case 0x667fa9:{ // CALL dword ptr [ECX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667facull);
return uint32_t(u<4>(c,0x5ef00));
return 0x667fac;}
case 0x667fac:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fad;}
case 0x667fad:{ // CALL 0x0065b3f7
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667fb2ull);
return 0x65b3f7;
return 0x667fb2;}
case 0x667fb2:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667fb4;}
case 0x667fb4:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667fb7;}
case 0x667fb7:{ // JL 0x00668cad
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x668cad;}
return 0x667fbd;}
case 0x667fbd:{ // MOV EAX,dword ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667fc0;}
case 0x667fc0:{ // MOV dword ptr [EBX + 0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x24ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667fc3;}
case 0x667fc3:{ // MOV EAX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667fc6;}
case 0x667fc6:{ // MOV dword ptr [EBX + 0x28],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x28ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667fc9;}
case 0x667fc9:{ // MOV ESI,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667fcc;}
case 0x667fcc:{ // LEA EAX,[EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667fcf;}
case 0x667fcf:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fd0;}
case 0x667fd0:{ // LEA EAX,[EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667fd3;}
case 0x667fd3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fd4;}
case 0x667fd4:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x667fd6;}
case 0x667fd6:{ // PUSH 0x53455250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x53455250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x667fdb;}
case 0x667fdb:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fdc;}
case 0x667fdc:{ // CALL dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667fdfull);
return uint32_t(u<4>(c,0x5ef00));
return 0x667fdf;}
case 0x667fdf:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667fe0;}
case 0x667fe0:{ // CALL 0x00671db5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x667fe5ull);
return 0x671db5;
return 0x667fe5;}
case 0x667fe5:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x667fe7;}
case 0x667fe7:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x667fea;}
case 0x667fea:{ // JL 0x00668cb9
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x668cb9;}
return 0x667ff0;}
case 0x667ff0:{ // JNZ 0x0066805c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x66805c;}
return 0x667ff2;}
case 0x667ff2:{ // LEA EAX,[EBP + 0xffffff7c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff7cull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x667ff8;}
case 0x667ff8:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667ff9;}
case 0x667ff9:{ // LEA EAX,[EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x667ffc;}
case 0x667ffc:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x667ffd;}
case 0x667ffd:{ // PUSH 0x49535250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x49535250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x668002;}
default:missing_instruction(c.pc);}}
}
