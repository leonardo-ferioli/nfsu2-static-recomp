#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_42a(Cpu& c){switch(c.pc){
case 0x42a004:{ // CMP EDI,0x8
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x8ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a007;}
case 0x42a007:{ // JZ 0x0042a013
if(r<1>(c,0x206)){return 0x42a013;}
return 0x42a009;}
case 0x42a009:{ // CMP EDI,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a00c;}
case 0x42a00c:{ // JZ 0x0042a013
if(r<1>(c,0x206)){return 0x42a013;}
return 0x42a00e;}
case 0x42a00e:{ // CMP EDI,0x2
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a011;}
case 0x42a011:{ // JNZ 0x0042a02d
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a02d;}
return 0x42a013;}
case 0x42a013:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a016;}
case 0x42a016:{ // MOV EAX,dword ptr [ECX + 0x5cc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x5ccull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a01c;}
case 0x42a01c:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a01e;}
case 0x42a01e:{ // JZ 0x0042a02d
if(r<1>(c,0x206)){return 0x42a02d;}
return 0x42a020;}
case 0x42a020:{ // CMP dword ptr [ECX + 0x28],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a024;}
case 0x42a024:{ // JNZ 0x0042a02d
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a02d;}
return 0x42a026;}
case 0x42a026:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a028;}
case 0x42a028:{ // CALL 0x005f46a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a02dull);
return 0x5f46a0;
return 0x42a02d;}
case 0x42a02d:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a02f;}
case 0x42a02f:{ // CALL 0x00422150
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a034ull);
return 0x422150;
return 0x42a034;}
case 0x42a034:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a036;}
case 0x42a036:{ // CALL 0x0041bf80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a03bull);
return 0x41bf80;
return 0x42a03b;}
case 0x42a03b:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a03c;}
case 0x42a03c:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a03d;}
case 0x42a03d:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a03e;}
case 0x42a03e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a03f;}
case 0x42a03f:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a040;}
case 0x42a040:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a043;}
case 0x42a050:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a052;}
case 0x42a052:{ // PUSH 0x77196b
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x77196bull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42a057;}
case 0x42a057:{ // MOV EAX,FS:[0x0]
wu<4>(c,0x12000,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0x12100,m<4>(c,u<4>(c,0x12000)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x12100)));
return 0x42a05d;}
case 0x42a05d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a05e;}
case 0x42a05e:{ // MOV dword ptr FS:[0x0],ESP
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x10)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x42a065;}
case 0x42a065:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a066;}
case 0x42a066:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a067;}
case 0x42a067:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a068;}
case 0x42a068:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x42a06a;}
case 0x42a06a:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a06c;}
case 0x42a06c:{ // MOV byte ptr [ESI + 0x710],BL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a072;}
case 0x42a072:{ // LEA EAX,[ESI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42a075;}
case 0x42a075:{ // MOV ECX,0x10
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x10ull));
return 0x42a07a;}
case 0x42a07a:{ // LEA EBX,[EBX]
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x42a080;}
case 0x42a080:{ // AND dword ptr [EAX],0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xfffffffcull));
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
return 0x42a083;}
case 0x42a083:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a086;}
case 0x42a086:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a087;}
case 0x42a087:{ // JNZ 0x0042a080
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a080;}
return 0x42a089;}
case 0x42a089:{ // MOV ECX,dword ptr [ESI + 0x6e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6e8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a08f;}
case 0x42a08f:{ // CALL 0x00411be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a094ull);
return 0x411be0;
return 0x42a094;}
case 0x42a094:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a097;}
case 0x42a097:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a098;}
case 0x42a098:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a099;}
case 0x42a099:{ // ADD ECX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a09c;}
case 0x42a09c:{ // CALL 0x0041d160
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0a1ull);
return 0x41d160;
return 0x42a0a1;}
case 0x42a0a1:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a0a4;}
case 0x42a0a4:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a0a5;}
case 0x42a0a5:{ // CALL 0x005eb910
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0aaull);
return 0x5eb910;
return 0x42a0aa;}
case 0x42a0aa:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a0ad;}
case 0x42a0ad:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a0ae;}
case 0x42a0ae:{ // CALL 0x005eb8f0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0b3ull);
return 0x5eb8f0;
return 0x42a0b3;}
case 0x42a0b3:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a0b6;}
case 0x42a0b6:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a0b7;}
case 0x42a0b7:{ // CALL 0x005eb900
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0bcull);
return 0x5eb900;
return 0x42a0bc;}
case 0x42a0bc:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a0be;}
case 0x42a0be:{ // CALL 0x00402110
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0c3ull);
return 0x402110;
return 0x42a0c3;}
case 0x42a0c3:{ // MOV ECX,dword ptr [ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a0c9;}
case 0x42a0c9:{ // CMP ECX,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a0cb;}
case 0x42a0cb:{ // MOV byte ptr [ESI + 0x798],BL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x798ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a0d1;}
case 0x42a0d1:{ // MOV byte ptr [ESI + 0x77c],BL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x77cull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a0d7;}
case 0x42a0d7:{ // JZ 0x0042a0df
if(r<1>(c,0x206)){return 0x42a0df;}
return 0x42a0d9;}
case 0x42a0d9:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a0db;}
case 0x42a0db:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a0dd;}
case 0x42a0dd:{ // CALL dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0dfull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42a0df;}
case 0x42a0df:{ // MOV ECX,dword ptr [0x0081cb6c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x81cb6c)));
return 0x42a0e5;}
case 0x42a0e5:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a0e6;}
case 0x42a0e6:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a0e7;}
case 0x42a0e7:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a0ecull);
return 0x440e50;
return 0x42a0ec;}
case 0x42a0ec:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42a0ee;}
case 0x42a0ee:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a0f1;}
case 0x42a0f1:{ // MOV dword ptr [ESP + 0xc],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a0f5;}
case 0x42a0f5:{ // CMP EDI,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a0f7;}
case 0x42a0f7:{ // MOV dword ptr [ESP + 0x18],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a0fb;}
case 0x42a0fb:{ // JZ 0x0042a114
if(r<1>(c,0x206)){return 0x42a114;}
return 0x42a0fd;}
case 0x42a0fd:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42a102;}
case 0x42a102:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a103;}
case 0x42a103:{ // PUSH 0x7
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x7ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a105;}
case 0x42a105:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a107;}
case 0x42a107:{ // CALL 0x004234a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a10cull);
return 0x4234a0;
return 0x42a10c;}
case 0x42a10c:{ // MOV dword ptr [EDI],0x785820
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x785820ull));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x42a112;}
case 0x42a112:{ // JMP 0x0042a116
return 0x42a116;
return 0x42a114;}
case 0x42a114:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a116;}
case 0x42a116:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a117;}
case 0x42a117:{ // LEA ECX,[ESI + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x54ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42a11a;}
case 0x42a11a:{ // MOV dword ptr [ESP + 0x1c],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a122;}
case 0x42a122:{ // MOV dword ptr [ESI + 0x6f8],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a128;}
case 0x42a128:{ // CALL 0x00428720
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a12dull);
return 0x428720;
return 0x42a12d;}
case 0x42a12d:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a12f;}
case 0x42a12f:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a130;}
case 0x42a130:{ // JZ 0x0042a13b
if(r<1>(c,0x206)){return 0x42a13b;}
return 0x42a132;}
case 0x42a132:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a134;}
case 0x42a134:{ // CALL 0x00422150
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a139ull);
return 0x422150;
return 0x42a139;}
case 0x42a139:{ // JMP 0x0042a169
return 0x42a169;
return 0x42a13b;}
case 0x42a13b:{ // CMP byte ptr [ESI + 0x710],BL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
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
return 0x42a141;}
case 0x42a141:{ // JNZ 0x0042a14e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a14e;}
return 0x42a143;}
case 0x42a143:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a144;}
case 0x42a144:{ // MOV ECX,0x88a320
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a320ull));
return 0x42a149;}
case 0x42a149:{ // CALL 0x0043be80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a14eull);
return 0x43be80;
return 0x42a14e;}
case 0x42a14e:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a150;}
case 0x42a150:{ // CALL 0x004023e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a155ull);
return 0x4023e0;
return 0x42a155;}
case 0x42a155:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a158;}
case 0x42a158:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a15a;}
case 0x42a15a:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a15c;}
case 0x42a15c:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a15d;}
case 0x42a15d:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a15e;}
case 0x42a15e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a15f;}
case 0x42a15f:{ // CALL dword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a162ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42a162;}
case 0x42a162:{ // MOV byte ptr [ESI + 0x710],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a169;}
case 0x42a169:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a16b;}
case 0x42a16b:{ // CALL 0x0041bf80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a170ull);
return 0x41bf80;
return 0x42a170;}
case 0x42a170:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a174;}
case 0x42a174:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a175;}
case 0x42a175:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a176;}
case 0x42a176:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x42a17d;}
case 0x42a17d:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a180;}
case 0x42a180:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a181;}
case 0x42a190:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a191;}
case 0x42a191:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x42a193;}
case 0x42a193:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a196;}
case 0x42a196:{ // SUB ESP,0x44
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a199;}
case 0x42a199:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a19a;}
case 0x42a19a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a19b;}
case 0x42a19b:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x42a19d;}
case 0x42a19d:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a1a0;}
case 0x42a1a0:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1a1;}
case 0x42a1a1:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1a2;}
case 0x42a1a2:{ // CALL 0x004116a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a1a7ull);
return 0x4116a0;
return 0x42a1a7;}
case 0x42a1a7:{ // LEA ECX,[ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a1ab;}
case 0x42a1ab:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1ac;}
case 0x42a1ac:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a1af;}
case 0x42a1af:{ // LEA EDX,[ESP + 0x44]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x44ull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a1b3;}
case 0x42a1b3:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42a1b5;}
case 0x42a1b5:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1b6;}
case 0x42a1b6:{ // MOV dword ptr [ESP + 0x2c],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a1ba;}
case 0x42a1ba:{ // CALL 0x005ec250
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a1bfull);
return 0x5ec250;
return 0x42a1bf;}
case 0x42a1bf:{ // FLD float ptr [ESP + 0x34]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a1bfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a1c3;}
case 0x42a1c3:{ // FSUB float ptr [ESP + 0x44]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x44ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a1c3ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42a1c7;}
case 0x42a1c7:{ // MOV EAX,dword ptr [ESI + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a1ca;}
case 0x42a1ca:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a1cc;}
case 0x42a1cc:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a1ccull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a1d2;}
case 0x42a1d2:{ // FSTP float ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a1d2ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a1d6;}
case 0x42a1d6:{ // JZ 0x0042a2c3
if(r<1>(c,0x206)){return 0x42a2c3;}
return 0x42a1dc;}
case 0x42a1dc:{ // MOV EDX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a1df;}
case 0x42a1df:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1e0;}
case 0x42a1e0:{ // LEA EAX,[ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a1e4;}
case 0x42a1e4:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1e5;}
case 0x42a1e5:{ // LEA ECX,[ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a1e9;}
case 0x42a1e9:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1ea;}
case 0x42a1ea:{ // ADD EDX,0x60
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x60ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x60ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a1ed;}
case 0x42a1ed:{ // LEA EDI,[ESI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42a1f0;}
case 0x42a1f0:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a1f1;}
case 0x42a1f1:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a1f3;}
case 0x42a1f3:{ // MOV dword ptr [ESP + 0x28],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a1fb;}
case 0x42a1fb:{ // MOV dword ptr [ESP + 0x2c],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a203;}
case 0x42a203:{ // CALL 0x00419b20
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a208ull);
return 0x419b20;
return 0x42a208;}
case 0x42a208:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a20b;}
case 0x42a20b:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a20d;}
case 0x42a20d:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a20f;}
case 0x42a20f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a210;}
case 0x42a210:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a212;}
case 0x42a212:{ // ADD EAX,0x60
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x60ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x60ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a215;}
case 0x42a215:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a216;}
case 0x42a216:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a218;}
case 0x42a218:{ // CALL 0x004198c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a21dull);
return 0x4198c0;
return 0x42a21d;}
case 0x42a21d:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42a21f;}
case 0x42a21f:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a222;}
case 0x42a222:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a224;}
case 0x42a224:{ // MOV ECX,dword ptr [ESI + EBX*0x4 + 0x70]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a228;}
case 0x42a228:{ // MOV dword ptr [ESP + 0x20],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a22c;}
case 0x42a22c:{ // MOV dword ptr [ESP + 0x2c],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a230;}
case 0x42a230:{ // JZ 0x0042a23a
if(r<1>(c,0x206)){return 0x42a23a;}
return 0x42a232;}
case 0x42a232:{ // MOV EDX,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a235;}
case 0x42a235:{ // FLD float ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a235ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a238;}
case 0x42a238:{ // JMP 0x0042a240
return 0x42a240;
return 0x42a23a;}
case 0x42a23a:{ // FLD float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a23aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
return 0x42a240;}
case 0x42a240:{ // FLD float ptr [0x00785b80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a240ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x785b80),4,0x0ull,4,10));
return 0x42a246;}
case 0x42a246:{ // FSUBR ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a246ull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
return 0x42a248;}
case 0x42a248:{ // FLD float ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a248ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a24c;}
case 0x42a24c:{ // FCOMPP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a24cull));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",r<10>(c,0x1110),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a24e;}
case 0x42a24e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a250;}
case 0x42a250:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a250ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a252;}
case 0x42a252:{ // TEST AH,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a255;}
case 0x42a255:{ // JNZ 0x0042a2c3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a2c3;}
return 0x42a257;}
case 0x42a257:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a25a;}
case 0x42a25a:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a25c;}
case 0x42a25c:{ // JZ 0x0042a267
if(r<1>(c,0x206)){return 0x42a267;}
return 0x42a25e;}
case 0x42a25e:{ // MOV EAX,dword ptr [EDI + EAX*0x4 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a262;}
case 0x42a262:{ // FLD float ptr [EAX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a262ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a265;}
case 0x42a265:{ // JMP 0x0042a26d
return 0x42a26d;
return 0x42a267;}
case 0x42a267:{ // FLD float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a267ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
return 0x42a26d;}
case 0x42a26d:{ // FLD float ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a26dull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a271;}
case 0x42a271:{ // FCOMP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a271ull));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",r<10>(c,0x1110),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a273;}
case 0x42a273:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a275;}
case 0x42a275:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a275ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a277;}
case 0x42a277:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a27a;}
case 0x42a27a:{ // JP 0x0042a2c3
if(r<1>(c,0x202)){return 0x42a2c3;}
return 0x42a27c;}
case 0x42a27c:{ // MOV EDX,dword ptr [ESP + 0x24]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a280;}
case 0x42a280:{ // MOV EAX,dword ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a284;}
case 0x42a284:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a285;}
case 0x42a285:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a286;}
case 0x42a286:{ // CALL 0x0040ada0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a28bull);
return 0x40ada0;
return 0x42a28b;}
case 0x42a28b:{ // FCOMP float ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a28bull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a28f;}
case 0x42a28f:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a291;}
case 0x42a291:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a294;}
case 0x42a294:{ // JP 0x0042a2c3
if(r<1>(c,0x202)){return 0x42a2c3;}
return 0x42a296;}
case 0x42a296:{ // MOV ECX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a29a;}
case 0x42a29a:{ // CALL 0x00401ed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a29full);
return 0x401ed0;
return 0x42a29f;}
case 0x42a29f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a2a0;}
case 0x42a2a0:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a2a1;}
case 0x42a2a1:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a2a3;}
case 0x42a2a3:{ // MOV dword ptr [ESI + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x42a2a6;}
case 0x42a2a6:{ // CALL 0x004120c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a2abull);
return 0x4120c0;
return 0x42a2ab;}
case 0x42a2ab:{ // MOV ECX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2af;}
case 0x42a2af:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2b1;}
case 0x42a2b1:{ // CALL dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a2b4ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42a2b4;}
case 0x42a2b4:{ // MOV EBX,dword ptr [ESP + 0x2c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2b8;}
case 0x42a2b8:{ // NEG EAX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_2COMP,4,4>(r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a2ba;}
case 0x42a2ba:{ // SBB AL,AL
wu<1>(c,0x48c00,eval<Op::COPY,1,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wu<1>(c,0x49000,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x49000),u<1>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x49000),u<1>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<1>(c,0x0,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x49000),u<1>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a2bc;}
case 0x42a2bc:{ // INC AL
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x0,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a2be;}
case 0x42a2be:{ // MOV byte ptr [ESI + 0x10],AL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x42a2c1;}
case 0x42a2c1:{ // JMP 0x0042a2d9
return 0x42a2d9;
return 0x42a2c3;}
case 0x42a2c3:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2c5;}
case 0x42a2c5:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a2c7;}
case 0x42a2c7:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a2c9;}
case 0x42a2c9:{ // CALL dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a2ccull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42a2cc;}
case 0x42a2cc:{ // LEA EDI,[ESI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42a2cf;}
case 0x42a2cf:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a2d1;}
case 0x42a2d1:{ // CALL 0x00411be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a2d6ull);
return 0x411be0;
return 0x42a2d6;}
case 0x42a2d6:{ // OR EBX,0xffffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_OR,4,4,4>(r<4>(c,0xc),0xffffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a2d9;}
case 0x42a2d9:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2dc;}
case 0x42a2dc:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a2de;}
case 0x42a2de:{ // JZ 0x0042a343
if(r<1>(c,0x206)){return 0x42a343;}
return 0x42a2e0;}
case 0x42a2e0:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2e3;}
case 0x42a2e3:{ // MOV EDX,dword ptr [ECX + 0x430]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x430ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2e9;}
case 0x42a2e9:{ // MOV EAX,[0x007e8e60]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7e8e60)));
return 0x42a2ee;}
case 0x42a2ee:{ // MOV dword ptr [ESP + 0x2c],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a2f2;}
case 0x42a2f2:{ // MOV EDX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a2f4;}
case 0x42a2f4:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a2f6;}
case 0x42a2f6:{ // MOV dword ptr [ESP + 0x20],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a2fa;}
case 0x42a2fa:{ // CALL dword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a2fdull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42a2fd;}
case 0x42a2fd:{ // FMUL float ptr [ESP + 0x2c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a2fdull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a301;}
case 0x42a301:{ // FCOM float ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a301ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xab200,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab200),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab200),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab200),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
return 0x42a305;}
case 0x42a305:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a307;}
case 0x42a307:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a30a;}
case 0x42a30a:{ // JNZ 0x0042a312
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a312;}
return 0x42a30c;}
case 0x42a30c:{ // FSTP float ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a30cull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a310;}
case 0x42a310:{ // JMP 0x0042a31c
return 0x42a31c;
return 0x42a312;}
case 0x42a312:{ // MOV EAX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a316;}
case 0x42a316:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a316ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a318;}
case 0x42a318:{ // MOV dword ptr [ESP + 0x20],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a31c;}
case 0x42a31c:{ // MOV ECX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a320;}
case 0x42a320:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a323;}
case 0x42a323:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a324;}
case 0x42a324:{ // MOV CL,byte ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42a327;}
case 0x42a327:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a329;}
case 0x42a329:{ // TEST CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a32b;}
case 0x42a32b:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a32e;}
case 0x42a32e:{ // SETZ DL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x206)));
return 0x42a331;}
case 0x42a331:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a332;}
case 0x42a332:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a333;}
case 0x42a333:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a334;}
case 0x42a334:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a335;}
case 0x42a335:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a337;}
case 0x42a337:{ // CALL 0x00428030
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a33cull);
return 0x428030;
return 0x42a33c;}
case 0x42a33c:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a33d;}
case 0x42a33d:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a33e;}
case 0x42a33e:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a33f;}
case 0x42a33f:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a341;}
case 0x42a341:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a342;}
case 0x42a342:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a343;}
case 0x42a343:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a345;}
case 0x42a345:{ // CALL 0x00411be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a34aull);
return 0x411be0;
return 0x42a34a;}
case 0x42a34a:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a34b;}
case 0x42a34b:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a34c;}
case 0x42a34c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a34d;}
case 0x42a34d:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a34f;}
case 0x42a34f:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a350;}
case 0x42a350:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a351;}
case 0x42a360:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a361;}
case 0x42a361:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x42a363;}
case 0x42a363:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a366;}
case 0x42a366:{ // SUB ESP,0x34
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x34ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x34ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x34ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a369;}
case 0x42a369:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a36a;}
case 0x42a36a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a36b;}
case 0x42a36b:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x42a36d;}
case 0x42a36d:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a370;}
case 0x42a370:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a371;}
case 0x42a371:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a372;}
case 0x42a372:{ // CALL 0x004116a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a377ull);
return 0x4116a0;
return 0x42a377;}
case 0x42a377:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42a379;}
case 0x42a379:{ // MOV EAX,dword ptr [ESI + 0x3e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a37f;}
case 0x42a37f:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a381;}
case 0x42a381:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a383;}
case 0x42a383:{ // MOV dword ptr [ESP + 0x14],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a38b;}
case 0x42a38b:{ // JZ 0x0042a3e7
if(r<1>(c,0x206)){return 0x42a3e7;}
return 0x42a38d;}
case 0x42a38d:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a390;}
case 0x42a390:{ // FLD float ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a390ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a393;}
case 0x42a393:{ // FSUB float ptr [ESI + 0x400]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x400ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a393ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42a399;}
case 0x42a399:{ // FLD float ptr [ECX + 0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x64ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a399ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a39c;}
case 0x42a39c:{ // FSUB float ptr [ESI + 0x404]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x404ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a39cull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42a3a2;}
case 0x42a3a2:{ // FLD ST0
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x42a3a4;}
case 0x42a3a4:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3a4ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x42a3a6;}
case 0x42a3a6:{ // FLD ST2
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x42a3a8;}
case 0x42a3a8:{ // FMUL ST3
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3a8ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1130),10,10));
return 0x42a3aa;}
case 0x42a3aa:{ // FADDP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3aaull));
wr<10>(c,0x1110,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a3ac;}
case 0x42a3ac:{ // FSQRT
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3acull));
wr<10>(c,0x1100,float_op("FLOAT_SQRT",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a3ae;}
case 0x42a3ae:{ // FSTP ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3aeull));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a3b0;}
case 0x42a3b0:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3b0ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a3b2;}
case 0x42a3b2:{ // FCOMP float ptr [0x00783c54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3b2ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783c54),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a3b8;}
case 0x42a3b8:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a3ba;}
case 0x42a3ba:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a3bd;}
case 0x42a3bd:{ // JP 0x0042a3e7
if(r<1>(c,0x202)){return 0x42a3e7;}
return 0x42a3bf;}
case 0x42a3bf:{ // FLD float ptr [ECX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3bfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a3c2;}
case 0x42a3c2:{ // FSUB float ptr [ESI + 0x408]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x408ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3c2ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42a3c8;}
case 0x42a3c8:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3c8ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a3ca;}
case 0x42a3ca:{ // FCOMP float ptr [0x00783c58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a3caull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783c58),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a3d0;}
case 0x42a3d0:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a3d2;}
case 0x42a3d2:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a3d5;}
case 0x42a3d5:{ // JP 0x0042a3e7
if(r<1>(c,0x202)){return 0x42a3e7;}
return 0x42a3d7;}
case 0x42a3d7:{ // MOV ECX,0x81cbc0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81cbc0ull));
return 0x42a3dc;}
case 0x42a3dc:{ // MOV dword ptr [ESI + 0x3e4],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a3e2;}
case 0x42a3e2:{ // CALL 0x004131f0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a3e7ull);
return 0x4131f0;
return 0x42a3e7;}
case 0x42a3e7:{ // MOV EAX,dword ptr [ESI + 0x3e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a3ed;}
case 0x42a3ed:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a3ef;}
case 0x42a3ef:{ // JZ 0x0042a5c4
if(r<1>(c,0x206)){return 0x42a5c4;}
return 0x42a3f5;}
case 0x42a3f5:{ // CMP EAX,0x3
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
return 0x42a3f8;}
case 0x42a3f8:{ // JZ 0x0042a52a
if(r<1>(c,0x206)){return 0x42a52a;}
return 0x42a3fe;}
case 0x42a3fe:{ // LEA ECX,[ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a402;}
case 0x42a402:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a403;}
case 0x42a403:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a406;}
case 0x42a406:{ // LEA EDX,[ESP + 0x34]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a40a;}
case 0x42a40a:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a40b;}
case 0x42a40b:{ // CALL 0x005ec250
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a410ull);
return 0x5ec250;
return 0x42a410;}
case 0x42a410:{ // FLD float ptr [ESP + 0x24]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a410ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a414;}
case 0x42a414:{ // FSUB float ptr [ESP + 0x34]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a414ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42a418;}
case 0x42a418:{ // MOV EAX,dword ptr [ESI + 0x4b4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4b4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a41e;}
case 0x42a41e:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a420;}
case 0x42a420:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a420ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a426;}
case 0x42a426:{ // FSTP float ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a426ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a42a;}
case 0x42a42a:{ // JZ 0x0042a4e5
if(r<1>(c,0x206)){return 0x42a4e5;}
return 0x42a430;}
case 0x42a430:{ // MOV EDX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a433;}
case 0x42a433:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a434;}
case 0x42a434:{ // LEA EAX,[ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a438;}
case 0x42a438:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a439;}
case 0x42a439:{ // LEA ECX,[ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a43d;}
case 0x42a43d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a43e;}
case 0x42a43e:{ // LEA EDI,[ESI + 0x4b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4b0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a444;}
case 0x42a444:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a445;}
case 0x42a445:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a447;}
case 0x42a447:{ // MOV dword ptr [ESP + 0x20],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a44f;}
case 0x42a44f:{ // MOV dword ptr [ESP + 0x28],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a457;}
case 0x42a457:{ // CALL 0x00419bc0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a45cull);
return 0x419bc0;
return 0x42a45c;}
case 0x42a45c:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a45f;}
case 0x42a45f:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a461;}
case 0x42a461:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a463;}
case 0x42a463:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a464;}
case 0x42a464:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a466;}
case 0x42a466:{ // ADD EAX,0x60
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x60ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x60ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a469;}
case 0x42a469:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a46a;}
case 0x42a46a:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a46c;}
case 0x42a46c:{ // CALL 0x004198c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a471ull);
return 0x4198c0;
return 0x42a471;}
case 0x42a471:{ // MOV ECX,dword ptr [ESI + EAX*0x4 + 0x4b8]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0x4b8ull,r<4>(c,0x18)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7d00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a478;}
case 0x42a478:{ // MOV dword ptr [ESP + 0x14],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a47c;}
case 0x42a47c:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a47f;}
case 0x42a47f:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a481;}
case 0x42a481:{ // JZ 0x0042a48b
if(r<1>(c,0x206)){return 0x42a48b;}
return 0x42a483;}
case 0x42a483:{ // MOV EDX,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a486;}
case 0x42a486:{ // FLD float ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a486ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a489;}
case 0x42a489:{ // JMP 0x0042a491
return 0x42a491;
return 0x42a48b;}
case 0x42a48b:{ // FLD float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a48bull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
return 0x42a491;}
case 0x42a491:{ // FLD float ptr [0x00785b80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a491ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x785b80),4,0x0ull,4,10));
return 0x42a497;}
case 0x42a497:{ // FSUBR ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a497ull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
return 0x42a499;}
case 0x42a499:{ // FLD float ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a499ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a49d;}
case 0x42a49d:{ // FCOMPP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a49dull));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",r<10>(c,0x1110),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a49f;}
case 0x42a49f:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a4a1;}
case 0x42a4a1:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4a1ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a4a3;}
case 0x42a4a3:{ // TEST AH,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4a6;}
case 0x42a4a6:{ // JNZ 0x0042a4e3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a4e3;}
return 0x42a4a8;}
case 0x42a4a8:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a4ab;}
case 0x42a4ab:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4ad;}
case 0x42a4ad:{ // JZ 0x0042a4b8
if(r<1>(c,0x206)){return 0x42a4b8;}
return 0x42a4af;}
case 0x42a4af:{ // MOV EAX,dword ptr [EDI + EAX*0x4 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a4b3;}
case 0x42a4b3:{ // FLD float ptr [EAX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4b3ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a4b6;}
case 0x42a4b6:{ // JMP 0x0042a4be
return 0x42a4be;
return 0x42a4b8;}
case 0x42a4b8:{ // FLD float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4b8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
return 0x42a4be;}
case 0x42a4be:{ // FLD float ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4beull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a4c2;}
case 0x42a4c2:{ // FCOMP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4c2ull));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",r<10>(c,0x1110),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a4c4;}
case 0x42a4c4:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a4c6;}
case 0x42a4c6:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4c6ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a4c8;}
case 0x42a4c8:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4cb;}
case 0x42a4cb:{ // JP 0x0042a4e3
if(r<1>(c,0x202)){return 0x42a4e3;}
return 0x42a4cd;}
case 0x42a4cd:{ // MOV EDX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a4d1;}
case 0x42a4d1:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a4d2;}
case 0x42a4d2:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a4d3;}
case 0x42a4d3:{ // CALL 0x0040ada0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a4d8ull);
return 0x40ada0;
return 0x42a4d8;}
case 0x42a4d8:{ // FCOMP float ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a4d8ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a4dc;}
case 0x42a4dc:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a4de;}
case 0x42a4de:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4e1;}
case 0x42a4e1:{ // JNP 0x0042a532
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x42a532;}
return 0x42a4e3;}
case 0x42a4e3:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4e5;}
case 0x42a4e5:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a4e8;}
case 0x42a4e8:{ // LEA EAX,[ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a4ec;}
case 0x42a4ec:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a4ed;}
case 0x42a4ed:{ // ADD ECX,0x60
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x60ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x60ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a4f0;}
case 0x42a4f0:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a4f2;}
case 0x42a4f2:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a4f3;}
case 0x42a4f3:{ // LEA ECX,[ESI + 0x3f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3f0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a4f9;}
case 0x42a4f9:{ // MOV dword ptr [ESP + 0x24],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a4fd;}
case 0x42a4fd:{ // CALL 0x0041af90
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a502ull);
return 0x41af90;
return 0x42a502;}
case 0x42a502:{ // MOV dword ptr [ESI + 0x3e8],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a508;}
case 0x42a508:{ // CMP dword ptr [ESP + 0x18],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a50c;}
case 0x42a50c:{ // SETZ DL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x206)));
return 0x42a50f;}
case 0x42a50f:{ // LEA ECX,[ESI + 0x4b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4b0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a515;}
case 0x42a515:{ // MOV byte ptr [ESI + 0x3ec],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3ecull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a51b;}
case 0x42a51b:{ // CALL 0x00411be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a520ull);
return 0x411be0;
return 0x42a520;}
case 0x42a520:{ // MOV dword ptr [ESP + 0x14],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a528;}
case 0x42a528:{ // JMP 0x0042a534
return 0x42a534;
return 0x42a52a;}
case 0x42a52a:{ // MOV dword ptr [ESI + 0x3e8],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a530;}
case 0x42a530:{ // JMP 0x0042a534
return 0x42a534;
return 0x42a532;}
case 0x42a532:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a534;}
case 0x42a534:{ // MOV ECX,dword ptr [ESI + 0x3e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a53a;}
case 0x42a53a:{ // CMP ECX,EDI
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
return 0x42a53c;}
case 0x42a53c:{ // JZ 0x0042a5ab
if(r<1>(c,0x206)){return 0x42a5ab;}
return 0x42a53e;}
case 0x42a53e:{ // MOV EDX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a541;}
case 0x42a541:{ // FLD float ptr [EDX + 0x430]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x430ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a541ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a547;}
case 0x42a547:{ // FMUL float ptr [0x00783c48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a547ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x783c48),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a54d;}
case 0x42a54d:{ // FCOM float ptr [0x00783c4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a54dull));
wu<10>(c,0xab200,float_op("FLOAT2FLOAT",m<4>(c,0x783c4c),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab200),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab200),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab200),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
return 0x42a553;}
case 0x42a553:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a555;}
case 0x42a555:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a558;}
case 0x42a558:{ // JZ 0x0042a562
if(r<1>(c,0x206)){return 0x42a562;}
return 0x42a55a;}
case 0x42a55a:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a55aull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a55c;}
case 0x42a55c:{ // FLD float ptr [0x00783c4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a55cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783c4c),4,0x0ull,4,10));
return 0x42a562;}
case 0x42a562:{ // MOV BL,byte ptr [ESI + 0x3ec]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3ecull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0xc,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42a568;}
case 0x42a568:{ // FLD float ptr [0x00783c50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a568ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783c50),4,0x0ull,4,10));
return 0x42a56e;}
case 0x42a56e:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a570;}
case 0x42a570:{ // FADD ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a570ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x42a572;}
case 0x42a572:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a573;}
case 0x42a573:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a575;}
case 0x42a575:{ // SETZ AL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x206)));
return 0x42a578;}
case 0x42a578:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a578ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a57b;}
case 0x42a57b:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a57bull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a57d;}
case 0x42a57d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a57e;}
case 0x42a57e:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a57f;}
case 0x42a57f:{ // MOV ECX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a583;}
case 0x42a583:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a584;}
case 0x42a584:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a585;}
case 0x42a585:{ // LEA ECX,[ESI + 0x4b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4b0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a58b;}
case 0x42a58b:{ // CALL 0x00428030
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a590ull);
return 0x428030;
return 0x42a590;}
case 0x42a590:{ // MOV ECX,0x81e388
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e388ull));
return 0x42a595;}
case 0x42a595:{ // CALL 0x0040f150
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a59aull);
return 0x40f150;
return 0x42a59a;}
case 0x42a59a:{ // MOV dword ptr [ESI + 0x3e4],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a5a4;}
case 0x42a5a4:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5a5;}
case 0x42a5a5:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5a6;}
case 0x42a5a6:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5a7;}
case 0x42a5a7:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a5a9;}
case 0x42a5a9:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5aa;}
case 0x42a5aa:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a5ab;}
case 0x42a5ab:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a5ad;}
case 0x42a5ad:{ // CALL 0x004188c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a5b2ull);
return 0x4188c0;
return 0x42a5b2;}
case 0x42a5b2:{ // LEA ECX,[ESI + 0x4b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4b0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a5b8;}
case 0x42a5b8:{ // CALL 0x00411be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a5bdull);
return 0x411be0;
return 0x42a5bd;}
case 0x42a5bd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5be;}
case 0x42a5be:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5bf;}
case 0x42a5bf:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5c0;}
case 0x42a5c0:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a5c2;}
case 0x42a5c2:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5c3;}
case 0x42a5c3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a5c4;}
case 0x42a5c4:{ // MOV dword ptr [ESI + 0x3e8],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3e8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a5ca;}
case 0x42a5ca:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5cb;}
case 0x42a5cb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5cc;}
case 0x42a5cc:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5cd;}
case 0x42a5cd:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a5cf;}
case 0x42a5cf:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a5d0;}
case 0x42a5d0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a5d1;}
case 0x42a5e0:{ // SUB ESP,0x30
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a5e3;}
case 0x42a5e3:{ // MOV EDX,dword ptr [ECX + 0x1b10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a5e9;}
case 0x42a5e9:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a5eb;}
case 0x42a5eb:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a5ed;}
case 0x42a5ed:{ // MOV dword ptr [ESP + 0x14],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a5f1;}
case 0x42a5f1:{ // JLE 0x0042a5f5
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x42a5f5;}
return 0x42a5f3;}
case 0x42a5f3:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x42a5f5;}
case 0x42a5f5:{ // MOV EDX,dword ptr [ECX + 0x1b20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a5fb;}
case 0x42a5fb:{ // CMP EDX,EAX
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
return 0x42a5fd;}
case 0x42a5fd:{ // JLE 0x0042a601
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x42a601;}
return 0x42a5ff;}
case 0x42a5ff:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x42a601;}
case 0x42a601:{ // MOV EDX,dword ptr [ECX + 0x1b30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a607;}
case 0x42a607:{ // CMP EDX,EAX
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
return 0x42a609;}
case 0x42a609:{ // JLE 0x0042a60d
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x42a60d;}
return 0x42a60b;}
case 0x42a60b:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x42a60d;}
case 0x42a60d:{ // MOV EDX,dword ptr [0x0086518c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x86518c)));
return 0x42a613;}
case 0x42a613:{ // SUB EDX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a615;}
case 0x42a615:{ // MOV dword ptr [ESP + 0xc],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a619;}
case 0x42a619:{ // FILD dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a619ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x42a61d;}
case 0x42a61d:{ // FMUL float ptr [0x00784268]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a61dull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784268),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a623;}
case 0x42a623:{ // FCOMP float ptr [0x00783d38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a623ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783d38),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a629;}
case 0x42a629:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a62b;}
case 0x42a62b:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a62e;}
case 0x42a62e:{ // JNZ 0x0042a852
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a852;}
return 0x42a634;}
case 0x42a634:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a635;}
case 0x42a635:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a636;}
case 0x42a636:{ // ADD ECX,0x1b1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x1b1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1b1cull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a63c;}
case 0x42a63c:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a63d;}
case 0x42a63d:{ // MOV dword ptr [ESP + 0x14],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a645;}
case 0x42a645:{ // MOV dword ptr [ESP + 0x18],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a649;}
case 0x42a649:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a64a;}
case 0x42a64a:{ // LEA EBX,[EBX]
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x42a650;}
case 0x42a650:{ // MOV ECX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a652;}
case 0x42a652:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a654;}
case 0x42a654:{ // MOV dword ptr [ESP + 0x10],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a658;}
case 0x42a658:{ // JZ 0x0042a767
if(r<1>(c,0x206)){return 0x42a767;}
return 0x42a65e;}
case 0x42a65e:{ // CALL 0x005ed430
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a663ull);
return 0x5ed430;
return 0x42a663;}
case 0x42a663:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a665;}
case 0x42a665:{ // JNZ 0x0042a767
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a767;}
return 0x42a66b;}
case 0x42a66b:{ // MOV EAX,[0x008900b4]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8900b4)));
return 0x42a670;}
case 0x42a670:{ // MOV EBP,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a673;}
case 0x42a673:{ // MOV ECX,EBP
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a675;}
case 0x42a675:{ // CALL 0x005ec0a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a67aull);
return 0x5ec0a0;
return 0x42a67a;}
case 0x42a67a:{ // MOV ECX,EBP
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42a67c;}
case 0x42a67c:{ // CALL 0x005ec0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a681ull);
return 0x5ec0b0;
return 0x42a681;}
case 0x42a681:{ // MOV ECX,dword ptr [EBP + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a684;}
case 0x42a684:{ // MOV DL,byte ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42a687;}
case 0x42a687:{ // TEST DL,DL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),r<1>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a689;}
case 0x42a689:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x42a68c;}
case 0x42a68c:{ // MOV byte ptr [ESP + 0x20],DL
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x7600),u<1>(c,0xa100));
return 0x42a690;}
case 0x42a690:{ // MOV ECX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a694;}
case 0x42a694:{ // MOV EDX,dword ptr [0x00783d08]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x783d08)));
return 0x42a69a;}
case 0x42a69a:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a69c;}
case 0x42a69c:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a69d;}
case 0x42a69d:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a69e;}
case 0x42a69e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a69f;}
case 0x42a69f:{ // LEA EAX,[ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a6a3;}
case 0x42a6a3:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a6a5;}
case 0x42a6a5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a6a6;}
case 0x42a6a6:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a6a8;}
case 0x42a6a8:{ // CALL 0x00415130
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a6adull);
return 0x415130;
return 0x42a6ad;}
case 0x42a6ad:{ // MOV ECX,dword ptr [0x00783d08]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x783d08)));
return 0x42a6b3;}
case 0x42a6b3:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a6b6;}
case 0x42a6b6:{ // CMP EAX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a6b9;}
case 0x42a6b9:{ // MOV dword ptr [ESP + 0x14],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a6bd;}
case 0x42a6bd:{ // JNZ 0x0042a767
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a767;}
return 0x42a6c3;}
case 0x42a6c3:{ // MOV ESI,dword ptr [ESP + 0x2c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a6c7;}
case 0x42a6c7:{ // CMP ESI,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a6c9;}
case 0x42a6c9:{ // JZ 0x0042a767
if(r<1>(c,0x206)){return 0x42a767;}
return 0x42a6cf;}
case 0x42a6cf:{ // FLD float ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a6cfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a6d3;}
case 0x42a6d3:{ // FCOMP float ptr [0x00783d10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a6d3ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783d10),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a6d9;}
case 0x42a6d9:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a6db;}
case 0x42a6db:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a6de;}
case 0x42a6de:{ // JP 0x0042a767
if(r<1>(c,0x202)){return 0x42a767;}
return 0x42a6e4;}
case 0x42a6e4:{ // MOV EDX,dword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a6e8;}
case 0x42a6e8:{ // MOV EBX,dword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a6ec;}
case 0x42a6ec:{ // MOV ECX,dword ptr [0x00890080]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x890080)));
return 0x42a6f2;}
case 0x42a6f2:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a6f3;}
case 0x42a6f3:{ // MOV dword ptr [ESP + 0x38],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a6f7;}
case 0x42a6f7:{ // MOV EDI,ESI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a6f9;}
case 0x42a6f9:{ // MOV dword ptr [ESP + 0x40],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a6fd;}
case 0x42a6fd:{ // CALL 0x005f0fb0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a702ull);
return 0x5f0fb0;
return 0x42a702;}
case 0x42a702:{ // FCOMP float ptr [0x0078429c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a702ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x78429c),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a708;}
case 0x42a708:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a70a;}
case 0x42a70a:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a70d;}
case 0x42a70d:{ // JNP 0x0042a737
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x42a737;}
return 0x42a70f;}
case 0x42a70f:{ // MOV EAX,dword ptr [ESI + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a712;}
case 0x42a712:{ // TEST AH,0x8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a715;}
case 0x42a715:{ // JZ 0x0042a737
if(r<1>(c,0x206)){return 0x42a737;}
return 0x42a717;}
case 0x42a717:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a71b;}
case 0x42a71b:{ // MOV ECX,dword ptr [0x00783d18]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x783d18)));
return 0x42a721;}
case 0x42a721:{ // MOV EDX,dword ptr [0x00783d14]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x783d14)));
return 0x42a727;}
case 0x42a727:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a728;}
case 0x42a728:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a729;}
case 0x42a729:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a72a;}
case 0x42a72a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a72b;}
case 0x42a72b:{ // CALL 0x00410fc0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a730ull);
return 0x410fc0;
return 0x42a730;}
case 0x42a730:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a733;}
case 0x42a733:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a735;}
case 0x42a735:{ // JZ 0x0042a78c
if(r<1>(c,0x206)){return 0x42a78c;}
return 0x42a737;}
case 0x42a737:{ // MOV EAX,[0x00783d0c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x783d0c)));
return 0x42a73c;}
case 0x42a73c:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a73e;}
case 0x42a73e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a73f;}
case 0x42a73f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a740;}
case 0x42a740:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a741;}
case 0x42a741:{ // LEA ECX,[ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a745;}
case 0x42a745:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a747;}
case 0x42a747:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a748;}
case 0x42a748:{ // CALL 0x00415130
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a74dull);
return 0x415130;
return 0x42a74d;}
case 0x42a74d:{ // FLD float ptr [0x00783d0c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a74dull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783d0c),4,0x0ull,4,10));
return 0x42a753;}
case 0x42a753:{ // FADD float ptr [ESP + 0x2c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a753ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x42a757;}
case 0x42a757:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a75a;}
case 0x42a75a:{ // CMP EAX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a75d;}
case 0x42a75d:{ // FSTP float ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a75dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a761;}
case 0x42a761:{ // JZ 0x0042a6c3
if(r<1>(c,0x206)){return 0x42a6c3;}
return 0x42a767;}
case 0x42a767:{ // MOV EAX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a76b;}
case 0x42a76b:{ // MOV ECX,dword ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a76f;}
case 0x42a76f:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a770;}
case 0x42a770:{ // ADD ECX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a773;}
case 0x42a773:{ // CMP EAX,0x3
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
return 0x42a776;}
case 0x42a776:{ // MOV dword ptr [ESP + 0x18],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a77a;}
case 0x42a77a:{ // MOV dword ptr [ESP + 0x1c],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a77e;}
case 0x42a77e:{ // JL 0x0042a650
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x42a650;}
return 0x42a784;}
case 0x42a784:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a785;}
case 0x42a785:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a786;}
case 0x42a786:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a787;}
case 0x42a787:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a788;}
case 0x42a788:{ // ADD ESP,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a78b;}
case 0x42a78b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a78c;}
case 0x42a78c:{ // MOV EDI,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a790;}
case 0x42a790:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a792;}
case 0x42a792:{ // CALL 0x005f6d50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a797ull);
return 0x5f6d50;
return 0x42a797;}
case 0x42a797:{ // MOV EDX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a79b;}
case 0x42a79b:{ // MOV ECX,dword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a79e;}
case 0x42a79e:{ // MOV EDI,dword ptr [EDI + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a7a1;}
case 0x42a7a1:{ // ADD ECX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a7a4;}
case 0x42a7a4:{ // CALL 0x005b5330
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a7a9ull);
return 0x5b5330;
return 0x42a7a9;}
case 0x42a7a9:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a7ab;}
case 0x42a7ab:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a7ad;}
case 0x42a7ad:{ // SETZ AL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x206)));
return 0x42a7b0;}
case 0x42a7b0:{ // MOV dword ptr [ESP + 0x1c],0x3f800000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3f800000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a7b8;}
case 0x42a7b8:{ // MOVZX ECX,byte ptr [EAX + ESI*0x1 + 0x2c]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7400)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x42a7bd;}
case 0x42a7bd:{ // SHL ECX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x42a7c0;}
case 0x42a7c0:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a7c2;}
case 0x42a7c2:{ // MOV dword ptr [ESP + 0x20],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a7c6;}
case 0x42a7c6:{ // FILD dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a7c6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x42a7ca;}
case 0x42a7ca:{ // FMUL float ptr [0x00784278]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a7caull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784278),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a7d0;}
case 0x42a7d0:{ // FSTP float ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a7d0ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a7d4;}
case 0x42a7d4:{ // JNZ 0x0042a7de
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a7de;}
return 0x42a7d6;}
case 0x42a7d6:{ // MOV dword ptr [ESP + 0x1c],0xbf800000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xbf800000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a7de;}
case 0x42a7de:{ // MOV EDX,dword ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a7e2;}
case 0x42a7e2:{ // MOV EAX,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a7e6;}
case 0x42a7e6:{ // MOV ECX,dword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a7ea;}
case 0x42a7ea:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a7ec;}
case 0x42a7ec:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a7ee;}
case 0x42a7ee:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a7f0;}
case 0x42a7f0:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a7f1;}
case 0x42a7f1:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a7f3;}
case 0x42a7f3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a7f4;}
case 0x42a7f4:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a7f5;}
case 0x42a7f5:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a7f6;}
case 0x42a7f6:{ // MOV ECX,dword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a7fa;}
case 0x42a7fa:{ // CALL 0x005fbed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a7ffull);
return 0x5fbed0;
return 0x42a7ff;}
case 0x42a7ff:{ // MOV EAX,[0x00783d30]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x783d30)));
return 0x42a804;}
case 0x42a804:{ // MOV ECX,dword ptr [0x00783d28]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x783d28)));
return 0x42a80a;}
case 0x42a80a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a80b;}
case 0x42a80b:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42a80d;}
case 0x42a80d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a80e;}
case 0x42a80e:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a810;}
case 0x42a810:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x42a813;}
case 0x42a813:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a814;}
case 0x42a814:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a816;}
case 0x42a816:{ // MOV byte ptr [EDI + 0x10],DL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x42a819;}
case 0x42a819:{ // CALL 0x00428630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a81eull);
return 0x428630;
return 0x42a81e;}
case 0x42a81e:{ // MOV EAX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a822;}
case 0x42a822:{ // MOV ESI,dword ptr [0x0086518c]
wr<4>(c,0x18,eval<Op::COPY,4,4>(m<4>(c,0x86518c)));
return 0x42a828;}
case 0x42a828:{ // MOV ECX,dword ptr [ESP + 0x24]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a82c;}
case 0x42a82c:{ // LEA EDX,[EAX + 0x1b1]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b1ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a832;}
case 0x42a832:{ // SHL EDX,0x4
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
return 0x42a835;}
case 0x42a835:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a836;}
case 0x42a836:{ // MOV dword ptr [EDX + ECX*0x1],ESI
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa300));
return 0x42a839;}
case 0x42a839:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a83a;}
case 0x42a83a:{ // SHL EAX,0x4
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
return 0x42a83d;}
case 0x42a83d:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a83f;}
case 0x42a83f:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a840;}
case 0x42a840:{ // MOV dword ptr [EAX + 0x1b14],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42a84a;}
case 0x42a84a:{ // MOV byte ptr [EAX + 0x1b18],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b18ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42a851;}
case 0x42a851:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a852;}
case 0x42a852:{ // ADD ESP,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a855;}
case 0x42a855:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a856;}
case 0x42a860:{ // MOV EAX,[0x008900b4]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8900b4)));
return 0x42a865;}
case 0x42a865:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a868;}
case 0x42a868:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a869;}
case 0x42a869:{ // MOV EBX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a86c;}
case 0x42a86c:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a86d;}
case 0x42a86d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a86e;}
case 0x42a86e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a86f;}
case 0x42a86f:{ // LEA ESI,[ECX + 0x1b14]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b14ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42a875;}
case 0x42a875:{ // MOV EBP,0x3
wr<4>(c,0x14,eval<Op::COPY,4,4>(0x3ull));
return 0x42a87a;}
case 0x42a87a:{ // LEA EBX,[EBX]
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x42a880;}
case 0x42a880:{ // MOV EDI,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a883;}
case 0x42a883:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a885;}
case 0x42a885:{ // JZ 0x0042a925
if(r<1>(c,0x206)){return 0x42a925;}
return 0x42a88b;}
case 0x42a88b:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a88d;}
case 0x42a88d:{ // CALL 0x005ed430
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a892ull);
return 0x5ed430;
return 0x42a892;}
case 0x42a892:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a894;}
case 0x42a894:{ // JZ 0x0042a925
if(r<1>(c,0x206)){return 0x42a925;}
return 0x42a89a;}
case 0x42a89a:{ // MOV EDI,dword ptr [EDI + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a89d;}
case 0x42a89d:{ // LEA ECX,[ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a8a1;}
case 0x42a8a1:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a8a2;}
case 0x42a8a2:{ // LEA EDX,[ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42a8a6;}
case 0x42a8a6:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a8a7;}
case 0x42a8a7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a8a8;}
case 0x42a8a8:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a8aa;}
case 0x42a8aa:{ // MOV dword ptr [ESP + 0x24],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a8b2;}
case 0x42a8b2:{ // MOV dword ptr [ESP + 0x20],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a8ba;}
case 0x42a8ba:{ // CALL 0x0041c100
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a8bfull);
return 0x41c100;
return 0x42a8bf;}
case 0x42a8bf:{ // FLD float ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a8bfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a8c3;}
case 0x42a8c3:{ // MOV ECX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a8c5;}
case 0x42a8c5:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a8c5ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a8c7;}
case 0x42a8c7:{ // CMP ECX,0x1
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
return 0x42a8ca;}
case 0x42a8ca:{ // MOV dword ptr [ESP + 0x10],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a8d2;}
case 0x42a8d2:{ // JNZ 0x0042a937
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a937;}
return 0x42a8d4;}
case 0x42a8d4:{ // FLD float ptr [0x00783d20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a8d4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783d20),4,0x0ull,4,10));
return 0x42a8da;}
case 0x42a8da:{ // FADD float ptr [0x00783d1c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a8daull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x783d1c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x42a8e0;}
case 0x42a8e0:{ // FCOMPP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a8e0ull));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",r<10>(c,0x1110),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,r<10>(c,0x1110),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a8e2;}
case 0x42a8e2:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a8e4;}
case 0x42a8e4:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a8e7;}
case 0x42a8e7:{ // JZ 0x0042a944
if(r<1>(c,0x206)){return 0x42a944;}
return 0x42a8e9;}
case 0x42a8e9:{ // MOV dword ptr [ESI],0x1
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x42a8ef;}
case 0x42a8ef:{ // MOV ECX,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a8f2;}
case 0x42a8f2:{ // MOV EAX,[0x0086518c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x86518c)));
return 0x42a8f7;}
case 0x42a8f7:{ // MOV EDX,dword ptr [0x00783d28]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x783d28)));
return 0x42a8fd;}
case 0x42a8fd:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a8ff;}
case 0x42a8ff:{ // MOV dword ptr [ESP + 0x1c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a903;}
case 0x42a903:{ // FILD dword ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a903ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x42a907;}
case 0x42a907:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a908;}
case 0x42a908:{ // MOV ECX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a90c;}
case 0x42a90c:{ // FMUL float ptr [0x00784268]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a90cull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784268),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42a912;}
case 0x42a912:{ // FSUBR float ptr [0x00783d30]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a912ull));
wu<10>(c,0xb8700,float_op("FLOAT2FLOAT",m<4>(c,0x783d30),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",u<10>(c,0xb8700),10,r<10>(c,0x1100),10,10));
return 0x42a918;}
case 0x42a918:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a918ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a91b;}
case 0x42a91b:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a91c;}
case 0x42a91c:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a91d;}
case 0x42a91d:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a91e;}
case 0x42a91e:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42a920;}
case 0x42a920:{ // CALL 0x00428630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a925ull);
return 0x428630;
return 0x42a925;}
case 0x42a925:{ // ADD ESI,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x10ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a928;}
case 0x42a928:{ // DEC EBP
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a929;}
case 0x42a929:{ // JNZ 0x0042a880
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a880;}
return 0x42a92f;}
case 0x42a92f:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a930;}
case 0x42a930:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a931;}
case 0x42a931:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a932;}
case 0x42a932:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42a933;}
case 0x42a933:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a936;}
case 0x42a936:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42a937;}
case 0x42a937:{ // FCOMP float ptr [0x00783d1c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a937ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783d1c),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a93d;}
case 0x42a93d:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a93f;}
case 0x42a93f:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a942;}
case 0x42a942:{ // JP 0x0042a8e9
if(r<1>(c,0x202)){return 0x42a8e9;}
return 0x42a944;}
case 0x42a944:{ // CMP ECX,0x1
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
return 0x42a947;}
case 0x42a947:{ // JNZ 0x0042a982
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a982;}
return 0x42a949;}
case 0x42a949:{ // FLD float ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a949ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a94d;}
case 0x42a94d:{ // FCOMP float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a94dull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a953;}
case 0x42a953:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a955;}
case 0x42a955:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a958;}
case 0x42a958:{ // JP 0x0042a96e
if(r<1>(c,0x202)){return 0x42a96e;}
return 0x42a95a;}
case 0x42a95a:{ // FLD float ptr [0x00783d2c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a95aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783d2c),4,0x0ull,4,10));
return 0x42a960;}
case 0x42a960:{ // MOV dword ptr [ESI],0x2
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x42a966;}
case 0x42a966:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a966ull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a968;}
case 0x42a968:{ // FSTP float ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a968ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a96c;}
case 0x42a96c:{ // JMP 0x0042a8ef
return 0x42a8ef;
return 0x42a96e;}
case 0x42a96e:{ // MOV EAX,[0x00783d2c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x783d2c)));
return 0x42a973;}
case 0x42a973:{ // MOV dword ptr [ESP + 0x10],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a977;}
case 0x42a977:{ // MOV dword ptr [ESI],0x3
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x42a97d;}
case 0x42a97d:{ // JMP 0x0042a8ef
return 0x42a8ef;
return 0x42a982;}
case 0x42a982:{ // CMP ECX,0x3
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a985;}
case 0x42a985:{ // JNZ 0x0042a9a9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a9a9;}
return 0x42a987;}
case 0x42a987:{ // FLD float ptr [0x00783d24]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a987ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783d24),4,0x0ull,4,10));
return 0x42a98d;}
case 0x42a98d:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a98dull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a98f;}
case 0x42a98f:{ // FCOMP float ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a98full));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a993;}
case 0x42a993:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a995;}
case 0x42a995:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a998;}
case 0x42a998:{ // JZ 0x0042a95a
if(r<1>(c,0x206)){return 0x42a95a;}
return 0x42a99a;}
case 0x42a99a:{ // MOV ECX,dword ptr [0x00783d2c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x783d2c)));
return 0x42a9a0;}
case 0x42a9a0:{ // MOV dword ptr [ESP + 0x10],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a9a4;}
case 0x42a9a4:{ // JMP 0x0042a8ef
return 0x42a8ef;
return 0x42a9a9;}
case 0x42a9a9:{ // FLD float ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a9a9ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42a9ad;}
case 0x42a9ad:{ // FCOMP float ptr [0x00783d24]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a9adull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x783d24),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a9b3;}
case 0x42a9b3:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42a9b5;}
case 0x42a9b5:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a9b8;}
case 0x42a9b8:{ // JNZ 0x0042a9cf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42a9cf;}
return 0x42a9ba;}
case 0x42a9ba:{ // MOV EDX,dword ptr [0x00783d2c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x783d2c)));
return 0x42a9c0;}
case 0x42a9c0:{ // MOV dword ptr [ESP + 0x10],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42a9c4;}
case 0x42a9c4:{ // MOV dword ptr [ESI],0x3
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x42a9ca;}
case 0x42a9ca:{ // JMP 0x0042a8ef
return 0x42a8ef;
return 0x42a9cf;}
case 0x42a9cf:{ // FLD float ptr [0x00783d2c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a9cfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783d2c),4,0x0ull,4,10));
return 0x42a9d5;}
case 0x42a9d5:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a9d5ull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x42a9d7;}
case 0x42a9d7:{ // FSTP float ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42a9d7ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42a9db;}
case 0x42a9db:{ // JMP 0x0042a8ef
return 0x42a8ef;
return 0x42a9e0;}
case 0x42a9e0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42a9e1;}
case 0x42a9e1:{ // MOV ESI,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a9e5;}
case 0x42a9e5:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42a9e7;}
case 0x42a9e7:{ // CALL 0x005ed430
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42a9ecull);
return 0x5ed430;
return 0x42a9ec;}
case 0x42a9ec:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a9ee;}
case 0x42a9ee:{ // JZ 0x0042aa0f
if(r<1>(c,0x206)){return 0x42aa0f;}
return 0x42a9f0;}
case 0x42a9f0:{ // MOV EAX,dword ptr [ESI + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42a9f3;}
case 0x42a9f3:{ // CMP EAX,0x3
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
return 0x42a9f6;}
case 0x42a9f6:{ // JZ 0x0042aa02
if(r<1>(c,0x206)){return 0x42aa02;}
return 0x42a9f8;}
case 0x42a9f8:{ // CMP EAX,0x2
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42a9fb;}
case 0x42a9fb:{ // JZ 0x0042aa02
if(r<1>(c,0x206)){return 0x42aa02;}
return 0x42a9fd;}
case 0x42a9fd:{ // CMP EAX,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa00;}
case 0x42aa00:{ // JNZ 0x0042aa0f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42aa0f;}
return 0x42aa02;}
case 0x42aa02:{ // MOV EAX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aa06;}
case 0x42aa06:{ // MOV ECX,dword ptr [ESI + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aa09;}
case 0x42aa09:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aa0a;}
case 0x42aa0a:{ // CALL 0x00428510
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa0full);
return 0x428510;
return 0x42aa0f;}
case 0x42aa0f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42aa10;}
case 0x42aa10:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x42aa13;}
case 0x42aa20:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aa21;}
case 0x42aa21:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x42aa23;}
case 0x42aa23:{ // CALL 0x00402070
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa28ull);
return 0x402070;
return 0x42aa28;}
case 0x42aa28:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aa2c;}
case 0x42aa2c:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa2d;}
case 0x42aa2d:{ // CMP EAX,0xa
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xaull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xaull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xaull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa30;}
case 0x42aa30:{ // JA 0x0042ab40
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x42ab40;}
return 0x42aa36;}
case 0x42aa36:{ // JMP dword ptr [EAX*0x4 + 0x42aba0]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x42aba0ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x42aa3d;}
case 0x42aa3d:{ // MOV EAX,[0x0081cb70]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aa42;}
case 0x42aa42:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aa43;}
case 0x42aa43:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa48ull);
return 0x440e50;
return 0x42aa48;}
case 0x42aa48:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa4b;}
case 0x42aa4b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa4d;}
case 0x42aa4d:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42aa53;}
case 0x42aa53:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42aa58;}
case 0x42aa58:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42aa5a;}
case 0x42aa5a:{ // CALL 0x0040ca20
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa5full);
return 0x40ca20;
return 0x42aa5f;}
case 0x42aa5f:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42aa64;}
case 0x42aa64:{ // MOV ECX,dword ptr [0x0081cb70]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aa6a;}
case 0x42aa6a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aa6b;}
case 0x42aa6b:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa70ull);
return 0x440e50;
return 0x42aa70;}
case 0x42aa70:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa73;}
case 0x42aa73:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa75;}
case 0x42aa75:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42aa7b;}
case 0x42aa7b:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42aa80;}
case 0x42aa80:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42aa82;}
case 0x42aa82:{ // CALL 0x0040ca70
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa87ull);
return 0x40ca70;
return 0x42aa87;}
case 0x42aa87:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42aa8c;}
case 0x42aa8c:{ // MOV EDX,dword ptr [0x0081cb70]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aa92;}
case 0x42aa92:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aa93;}
case 0x42aa93:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aa98ull);
return 0x440e50;
return 0x42aa98;}
case 0x42aa98:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa9b;}
case 0x42aa9b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aa9d;}
case 0x42aa9d:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42aaa3;}
case 0x42aaa3:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42aaa8;}
case 0x42aaa8:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42aaaa;}
case 0x42aaaa:{ // CALL 0x0040cab0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aaafull);
return 0x40cab0;
return 0x42aaaf;}
case 0x42aaaf:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42aab4;}
case 0x42aab4:{ // MOV EAX,[0x0081cb70]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aab9;}
case 0x42aab9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aaba;}
case 0x42aaba:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aabfull);
return 0x440e50;
return 0x42aabf;}
case 0x42aabf:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aac2;}
case 0x42aac2:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aac4;}
case 0x42aac4:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42aac6;}
case 0x42aac6:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42aacb;}
case 0x42aacb:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42aacd;}
case 0x42aacd:{ // CALL 0x0040caf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aad2ull);
return 0x40caf0;
return 0x42aad2;}
case 0x42aad2:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42aad4;}
case 0x42aad4:{ // MOV ECX,dword ptr [0x0081cb70]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aada;}
case 0x42aada:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aadb;}
case 0x42aadb:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aae0ull);
return 0x440e50;
return 0x42aae0;}
case 0x42aae0:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aae3;}
case 0x42aae3:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aae5;}
case 0x42aae5:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42aae7;}
case 0x42aae7:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42aaec;}
case 0x42aaec:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42aaee;}
case 0x42aaee:{ // CALL 0x0040cb30
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aaf3ull);
return 0x40cb30;
return 0x42aaf3;}
case 0x42aaf3:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42aaf5;}
case 0x42aaf5:{ // MOV EDX,dword ptr [0x0081cb70]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42aafb;}
case 0x42aafb:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aafc;}
case 0x42aafc:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab01ull);
return 0x440e50;
return 0x42ab01;}
case 0x42ab01:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab04;}
case 0x42ab04:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab06;}
case 0x42ab06:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42ab08;}
case 0x42ab08:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42ab0d;}
case 0x42ab0d:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42ab0f;}
case 0x42ab0f:{ // CALL 0x0040cb80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab14ull);
return 0x40cb80;
return 0x42ab14;}
case 0x42ab14:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42ab16;}
case 0x42ab16:{ // MOV EAX,[0x0081cb70]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42ab1b;}
case 0x42ab1b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ab1c;}
case 0x42ab1c:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab21ull);
return 0x440e50;
return 0x42ab21;}
case 0x42ab21:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab24;}
case 0x42ab24:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab26;}
case 0x42ab26:{ // JZ 0x0042ab38
if(r<1>(c,0x206)){return 0x42ab38;}
return 0x42ab28;}
case 0x42ab28:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42ab2a;}
case 0x42ab2a:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42ab2f;}
case 0x42ab2f:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42ab31;}
case 0x42ab31:{ // CALL 0x0040daf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab36ull);
return 0x40daf0;
return 0x42ab36;}
case 0x42ab36:{ // JMP 0x0042ab3a
return 0x42ab3a;
return 0x42ab38;}
case 0x42ab38:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab3a;}
case 0x42ab3a:{ // MOV dword ptr [EDI + 0x6fc],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6fcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42ab40;}
case 0x42ab40:{ // MOV EAX,dword ptr [EDI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ab46;}
case 0x42ab46:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab48;}
case 0x42ab48:{ // JNZ 0x0042ab94
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ab94;}
return 0x42ab4a;}
case 0x42ab4a:{ // MOV ECX,dword ptr [0x0081cb70]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x81cb70)));
return 0x42ab50;}
case 0x42ab50:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ab51;}
case 0x42ab51:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ab52;}
case 0x42ab52:{ // CALL 0x00440e50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab57ull);
return 0x440e50;
return 0x42ab57;}
case 0x42ab57:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42ab59;}
case 0x42ab59:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab5c;}
case 0x42ab5c:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab5e;}
case 0x42ab5e:{ // JZ 0x0042ab8b
if(r<1>(c,0x206)){return 0x42ab8b;}
return 0x42ab60;}
case 0x42ab60:{ // PUSH 0xbf800000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbf800000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42ab65;}
case 0x42ab65:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42ab67;}
case 0x42ab67:{ // CALL 0x0040c960
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab6cull);
return 0x40c960;
return 0x42ab6c;}
case 0x42ab6c:{ // MOV dword ptr [ESI + 0x14],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x8ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x42ab73;}
case 0x42ab73:{ // MOV dword ptr [ESI],0x784900
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x784900ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x42ab79;}
case 0x42ab79:{ // MOV dword ptr [EDI + 0x6fc],ESI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6fcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42ab7f;}
case 0x42ab7f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42ab80;}
case 0x42ab80:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42ab82;}
case 0x42ab82:{ // CALL 0x00428490
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab87ull);
return 0x428490;
return 0x42ab87;}
case 0x42ab87:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42ab88;}
case 0x42ab88:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42ab8b;}
case 0x42ab8b:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ab8d;}
case 0x42ab8d:{ // MOV dword ptr [EDI + 0x6fc],ESI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6fcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42ab93;}
case 0x42ab93:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42ab94;}
case 0x42ab94:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42ab96;}
case 0x42ab96:{ // CALL 0x00428490
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ab9bull);
return 0x428490;
return 0x42ab9b;}
case 0x42ab9b:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42ab9c;}
case 0x42ab9c:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42ab9f;}
case 0x42abd0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42abd1;}
case 0x42abd1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x42abd3;}
case 0x42abd3:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42abd6;}
case 0x42abd6:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42abd8;}
case 0x42abd8:{ // PUSH 0x771b1e
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x771b1eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x42abdd;}
case 0x42abdd:{ // MOV EAX,FS:[0x0]
wu<4>(c,0x12000,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0x12100,m<4>(c,u<4>(c,0x12000)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x12100)));
return 0x42abe3;}
case 0x42abe3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42abe4;}
case 0x42abe4:{ // MOV dword ptr FS:[0x0],ESP
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x10)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x42abeb;}
case 0x42abeb:{ // SUB ESP,0x1e8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1e8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1e8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42abf1;}
case 0x42abf1:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42abf2;}
case 0x42abf2:{ // MOV EBX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42abf5;}
case 0x42abf5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42abf6;}
case 0x42abf6:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x42abf8;}
case 0x42abf8:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42abfb;}
case 0x42abfb:{ // MOV ECX,dword ptr [EAX + 0x5cc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5ccull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac01;}
case 0x42ac01:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ac02;}
case 0x42ac02:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac04;}
case 0x42ac04:{ // MOV ECX,dword ptr [ESI + 0x730]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x730ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac0a;}
case 0x42ac0a:{ // LEA EDI,[ESI + 0x730]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x730ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42ac10;}
case 0x42ac10:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x42ac13;}
case 0x42ac13:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac15;}
case 0x42ac15:{ // MOV byte ptr [ESP + 0x1b],DL
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1bull,r<4>(c,0x10)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x7600),u<1>(c,0xa100));
return 0x42ac19;}
case 0x42ac19:{ // JZ 0x0042ac47
if(r<1>(c,0x206)){return 0x42ac47;}
return 0x42ac1b;}
case 0x42ac1b:{ // CMP ECX,0x7fffffff
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x7fffffffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x7fffffffull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac21;}
case 0x42ac21:{ // JZ 0x0042ac47
if(r<1>(c,0x206)){return 0x42ac47;}
return 0x42ac23;}
case 0x42ac23:{ // TEST DL,DL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),r<1>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac25;}
case 0x42ac25:{ // JZ 0x0042ac3f
if(r<1>(c,0x206)){return 0x42ac3f;}
return 0x42ac27;}
case 0x42ac27:{ // CMP dword ptr [EAX + 0x28],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
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
return 0x42ac2b;}
case 0x42ac2b:{ // JNZ 0x0042ac3f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ac3f;}
return 0x42ac2d;}
case 0x42ac2d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ac2e;}
case 0x42ac2e:{ // CALL 0x005f4400
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ac33ull);
return 0x5f4400;
return 0x42ac33;}
case 0x42ac33:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac36;}
case 0x42ac36:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac39;}
case 0x42ac39:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ac3a;}
case 0x42ac3a:{ // CALL 0x005f46a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ac3full);
return 0x5f46a0;
return 0x42ac3f;}
case 0x42ac3f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ac40;}
case 0x42ac40:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42ac42;}
case 0x42ac42:{ // CALL 0x00577310
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ac47ull);
return 0x577310;
return 0x42ac47;}
case 0x42ac47:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ac48;}
case 0x42ac48:{ // LEA ECX,[ESI + 0x754]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x754ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42ac4e;}
case 0x42ac4e:{ // CALL 0x00577310
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ac53ull);
return 0x577310;
return 0x42ac53;}
case 0x42ac53:{ // FLD float ptr [ESI + 0x6f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ac53ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42ac59;}
case 0x42ac59:{ // FSUB float ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ac59ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x42ac5c;}
case 0x42ac5c:{ // MOV EAX,dword ptr [ESI + 0x6e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6e4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac62;}
case 0x42ac62:{ // FSTP float ptr [ESI + 0x6f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ac62ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42ac68;}
case 0x42ac68:{ // MOV dword ptr [EAX + 0x4],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x42ac6f;}
case 0x42ac6f:{ // MOV byte ptr [EAX + 0x308],0xff
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x308ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0xffull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42ac76;}
case 0x42ac76:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac79;}
case 0x42ac79:{ // MOV EDX,dword ptr [ECX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac7c;}
case 0x42ac7c:{ // MOV EDI,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ac7f;}
case 0x42ac7f:{ // MOV EAX,0x2
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x2ull));
return 0x42ac84;}
case 0x42ac84:{ // CMP EDI,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac86;}
case 0x42ac86:{ // MOV EDI,dword ptr [0x0086518c]
wr<4>(c,0x1c,eval<Op::COPY,4,4>(m<4>(c,0x86518c)));
return 0x42ac8c;}
case 0x42ac8c:{ // MOV dword ptr [ESP + 0x1c],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42ac90;}
case 0x42ac90:{ // JNZ 0x0042adce
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42adce;}
return 0x42ac96;}
case 0x42ac96:{ // MOV AL,[0x0089e7d8]
wr<1>(c,0x0,eval<Op::COPY,1,1>(m<1>(c,0x89e7d8)));
return 0x42ac9b;}
case 0x42ac9b:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ac9d;}
case 0x42ac9d:{ // MOV EDI,0x8
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ull));
return 0x42aca2;}
case 0x42aca2:{ // JNZ 0x0042acad
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42acad;}
return 0x42aca4;}
case 0x42aca4:{ // MOV EAX,[0x00890108]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x890108)));
return 0x42aca9;}
case 0x42aca9:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42acab;}
case 0x42acab:{ // JZ 0x0042acb8
if(r<1>(c,0x206)){return 0x42acb8;}
return 0x42acad;}
case 0x42acad:{ // CMP dword ptr [ECX + 0x28],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
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
return 0x42acb1;}
case 0x42acb1:{ // JZ 0x0042acb8
if(r<1>(c,0x206)){return 0x42acb8;}
return 0x42acb3;}
case 0x42acb3:{ // MOV EDI,0x4
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x4ull));
return 0x42acb8;}
case 0x42acb8:{ // MOV EAX,[0x007fb724]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fb724)));
return 0x42acbd;}
case 0x42acbd:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x42acbe;}
case 0x42acbe:{ // IDIV EDI
wu<8>(c,0x72900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wu<8>(c,0x72a00,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x8)));
wu<8>(c,0x72b00,eval<Op::INT_LEFT,8,8,4>(u<8>(c,0x72a00),0x20ull));
wu<8>(c,0x72c00,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x72e00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x72b00),u<8>(c,0x72c00)));
wu<8>(c,0x73000,eval<Op::INT_SDIV,8,8,8>(u<8>(c,0x72e00),u<8>(c,0x72900)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x73000),0x0ull));
wu<8>(c,0x73300,eval<Op::INT_SREM,8,8,8>(u<8>(c,0x72e00),u<8>(c,0x72900)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x73300),0x0ull));
return 0x42acc0;}
case 0x42acc0:{ // MOV EAX,[0x00890080]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x890080)));
return 0x42acc5;}
case 0x42acc5:{ // MOV EDI,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42acc8;}
case 0x42acc8:{ // MOV EBX,dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42accb;}
case 0x42accb:{ // SUB EBX,EDI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42accd;}
case 0x42accd:{ // CMP EDX,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42accf;}
case 0x42accf:{ // JGE 0x0042acdd
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x42acdd;}
return 0x42acd1;}
case 0x42acd1:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42acd3;}
case 0x42acd3:{ // CMP ECX,dword ptr [EAX + EDI*0x4 + 0x1c]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
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
return 0x42acd7;}
case 0x42acd7:{ // JNZ 0x0042acdd
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42acdd;}
return 0x42acd9;}
case 0x42acd9:{ // MOV BL,0x1
wr<1>(c,0xc,eval<Op::COPY,1,1>(0x1ull));
return 0x42acdb;}
case 0x42acdb:{ // JMP 0x0042acdf
return 0x42acdf;
return 0x42acdd;}
case 0x42acdd:{ // XOR BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xc,eval<Op::INT_XOR,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xc),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42acdf;}
case 0x42acdf:{ // MOV EDI,dword ptr [0x0086518c]
wr<4>(c,0x1c,eval<Op::COPY,4,4>(m<4>(c,0x86518c)));
return 0x42ace5;}
case 0x42ace5:{ // MOV EDX,dword ptr [ESI + 0x778]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x778ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aceb;}
case 0x42aceb:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42aced;}
case 0x42aced:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42acef;}
case 0x42acef:{ // MOV EDX,dword ptr [ESP + 0x1c]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42acf3;}
case 0x42acf3:{ // MOV dword ptr [ESP + 0x14],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42acf7;}
case 0x42acf7:{ // FILD dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42acf7ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x42acfb;}
case 0x42acfb:{ // FMUL float ptr [0x00784268]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42acfbull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784268),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42ad01;}
case 0x42ad01:{ // FCOMP float ptr [0x00784554]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ad01ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x784554),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42ad07;}
case 0x42ad07:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42ad09;}
case 0x42ad09:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad0c;}
case 0x42ad0c:{ // JNP 0x0042ad16
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x42ad16;}
return 0x42ad0e;}
case 0x42ad0e:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad10;}
case 0x42ad10:{ // JNZ 0x0042ae2f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ae2f;}
return 0x42ad16;}
case 0x42ad16:{ // MOV EAX,dword ptr [ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad1c;}
case 0x42ad1c:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad1e;}
case 0x42ad1e:{ // JZ 0x0042ae2f
if(r<1>(c,0x206)){return 0x42ae2f;}
return 0x42ad24;}
case 0x42ad24:{ // CMP dword ptr [EDX + 0x4],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad28;}
case 0x42ad28:{ // JNZ 0x0042ad64
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ad64;}
return 0x42ad2a;}
case 0x42ad2a:{ // ADD ECX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad2d;}
case 0x42ad2d:{ // CALL 0x0059fa30
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad32ull);
return 0x59fa30;
return 0x42ad32;}
case 0x42ad32:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad34;}
case 0x42ad34:{ // JZ 0x0042ad64
if(r<1>(c,0x206)){return 0x42ad64;}
return 0x42ad36;}
case 0x42ad36:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42ad38;}
case 0x42ad38:{ // CALL 0x0040d850
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad3dull);
return 0x40d850;
return 0x42ad3d;}
case 0x42ad3d:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad3f;}
case 0x42ad3f:{ // JNZ 0x0042ad64
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ad64;}
return 0x42ad41;}
case 0x42ad41:{ // MOV EDX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad43;}
case 0x42ad43:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42ad45;}
case 0x42ad45:{ // CALL dword ptr [EDX + 0xb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad4bull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42ad4b;}
case 0x42ad4b:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad4d;}
case 0x42ad4d:{ // JZ 0x0042ad64
if(r<1>(c,0x206)){return 0x42ad64;}
return 0x42ad4f;}
case 0x42ad4f:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad52;}
case 0x42ad52:{ // ADD ECX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad55;}
case 0x42ad55:{ // CALL 0x00592500
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad5aull);
return 0x592500;
return 0x42ad5a;}
case 0x42ad5a:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad5c;}
case 0x42ad5c:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42ad5e;}
case 0x42ad5e:{ // CALL dword ptr [EAX + 0xa8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad64ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42ad64;}
case 0x42ad64:{ // MOV AL,byte ptr [ESI + 0x710]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42ad6a;}
case 0x42ad6a:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad6c;}
case 0x42ad6c:{ // JNZ 0x0042b2c1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42b2c1;}
return 0x42ad72;}
case 0x42ad72:{ // MOV ECX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad78;}
case 0x42ad78:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad7a;}
case 0x42ad7a:{ // LEA EDI,[ESI + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x54ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42ad7d;}
case 0x42ad7d:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ad7e;}
case 0x42ad7e:{ // CALL dword ptr [EDX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x34ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad81ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42ad81;}
case 0x42ad81:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad84;}
case 0x42ad84:{ // CMP dword ptr [EAX + 0x28],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
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
return 0x42ad88;}
case 0x42ad88:{ // JZ 0x0042b2c1
if(r<1>(c,0x206)){return 0x42b2c1;}
return 0x42ad8e;}
case 0x42ad8e:{ // MOV ECX,dword ptr [ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad94;}
case 0x42ad94:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ad96;}
case 0x42ad96:{ // CALL dword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ad99ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42ad99;}
case 0x42ad99:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ad9b;}
case 0x42ad9b:{ // JZ 0x0042b2c1
if(r<1>(c,0x206)){return 0x42b2c1;}
return 0x42ada1;}
case 0x42ada1:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ada2;}
case 0x42ada2:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42ada4;}
case 0x42ada4:{ // CALL 0x00428720
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ada9ull);
return 0x428720;
return 0x42ada9;}
case 0x42ada9:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adab;}
case 0x42adab:{ // JZ 0x0042ae74
if(r<1>(c,0x206)){return 0x42ae74;}
return 0x42adb1;}
case 0x42adb1:{ // MOV ECX,dword ptr [ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42adb7;}
case 0x42adb7:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42adb9;}
case 0x42adb9:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42adba;}
case 0x42adba:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42adbc;}
case 0x42adbc:{ // CALL dword ptr [EAX + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42adc2ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42adc2;}
case 0x42adc2:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42adc4;}
case 0x42adc4:{ // CALL 0x00420810
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42adc9ull);
return 0x420810;
return 0x42adc9;}
case 0x42adc9:{ // JMP 0x0042b2ba
return 0x42b2ba;
return 0x42adce;}
case 0x42adce:{ // CMP dword ptr [EDX + 0x4],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42add2;}
case 0x42add2:{ // JNZ 0x0042ae18
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ae18;}
return 0x42add4;}
case 0x42add4:{ // CMP dword ptr [ECX + 0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
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
return 0x42add7;}
case 0x42add7:{ // JZ 0x0042ae2f
if(r<1>(c,0x206)){return 0x42ae2f;}
return 0x42add9;}
case 0x42add9:{ // MOV EBX,dword ptr [0x007fb724]
wr<4>(c,0xc,eval<Op::COPY,4,4>(m<4>(c,0x7fb724)));
return 0x42addf;}
case 0x42addf:{ // AND EBX,0x80000007
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0x80000007ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ade5;}
case 0x42ade5:{ // MOVSX EAX,word ptr [ECX + 0xa]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x42ade9;}
case 0x42ade9:{ // JNS 0x0042adf0
wu<1>(c,0x18300,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x207)));
if(u<1>(c,0x18300)){return 0x42adf0;}
return 0x42adeb;}
case 0x42adeb:{ // DEC EBX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adec;}
case 0x42adec:{ // OR EBX,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_OR,4,4,4>(r<4>(c,0xc),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adef;}
case 0x42adef:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adf0;}
case 0x42adf0:{ // CMP EBX,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adf2;}
case 0x42adf2:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x42adf4;}
case 0x42adf4:{ // SETZ BL
wr<1>(c,0xc,eval<Op::COPY,1,1>(r<1>(c,0x206)));
return 0x42adf7;}
case 0x42adf7:{ // SUB EAX,dword ptr [ESI + 0x778]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x778ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42adfd;}
case 0x42adfd:{ // MOV dword ptr [ESP + 0x14],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x42ae01;}
case 0x42ae01:{ // FILD dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae01ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x42ae05;}
case 0x42ae05:{ // FMUL float ptr [0x00784268]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae05ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784268),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x42ae0b;}
case 0x42ae0b:{ // FCOMP float ptr [0x00784554]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae0bull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x784554),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42ae11;}
case 0x42ae11:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42ae13;}
case 0x42ae13:{ // JMP 0x0042ad09
return 0x42ad09;
return 0x42ae18;}
case 0x42ae18:{ // FLD float ptr [ESI + 0x6f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae18ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x42ae1e;}
case 0x42ae1e:{ // FCOMP float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae1eull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42ae24;}
case 0x42ae24:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x42ae26;}
case 0x42ae26:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae29;}
case 0x42ae29:{ // JP 0x0042ad16
if(r<1>(c,0x202)){return 0x42ad16;}
return 0x42ae2f;}
case 0x42ae2f:{ // FLD float ptr [0x00783494]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae2full));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x783494),4,0x0ull,4,10));
return 0x42ae35;}
case 0x42ae35:{ // MOV dword ptr [ESI + 0x778],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x778ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x42ae3b;}
case 0x42ae3b:{ // MOV EDX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ae3e;}
case 0x42ae3e:{ // FADD float ptr [ESI + 0x6f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae3eull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x42ae44;}
case 0x42ae44:{ // ADD EDX,0x8d8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x8d8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x8d8ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8d8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae4a;}
case 0x42ae4a:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42ae4b;}
case 0x42ae4b:{ // MOV ECX,0x88f298
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f298ull));
return 0x42ae50;}
case 0x42ae50:{ // FSTP float ptr [ESI + 0x6f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x42ae50ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x42ae56;}
case 0x42ae56:{ // CALL 0x005ded60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ae5bull);
return 0x5ded60;
return 0x42ae5b;}
case 0x42ae5b:{ // MOV ECX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ae61;}
case 0x42ae61:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae63;}
case 0x42ae63:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x42ae65;}
case 0x42ae65:{ // JZ 0x0042ae82
if(r<1>(c,0x206)){return 0x42ae82;}
return 0x42ae67;}
case 0x42ae67:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42ae69;}
case 0x42ae69:{ // CALL dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ae6cull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42ae6c;}
case 0x42ae6c:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae6e;}
case 0x42ae6e:{ // JZ 0x0042ae82
if(r<1>(c,0x206)){return 0x42ae82;}
return 0x42ae70;}
case 0x42ae70:{ // MOV CL,0x1
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x1ull));
return 0x42ae72;}
case 0x42ae72:{ // JMP 0x0042ae84
return 0x42ae84;
return 0x42ae74;}
case 0x42ae74:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42ae76;}
case 0x42ae76:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42ae78;}
case 0x42ae78:{ // CALL 0x00402530
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42ae7dull);
return 0x402530;
return 0x42ae7d;}
case 0x42ae7d:{ // JMP 0x0042b2ba
return 0x42b2ba;
return 0x42ae82;}
case 0x42ae82:{ // XOR CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x4,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae84;}
case 0x42ae84:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae86;}
case 0x42ae86:{ // JZ 0x0042ae91
if(r<1>(c,0x206)){return 0x42ae91;}
return 0x42ae88;}
case 0x42ae88:{ // CMP dword ptr [EDI],0x2
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x2ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae8b;}
case 0x42ae8b:{ // JNZ 0x0042ae91
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42ae91;}
return 0x42ae8d;}
case 0x42ae8d:{ // MOV AL,0x1
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x1ull));
return 0x42ae8f;}
case 0x42ae8f:{ // JMP 0x0042ae93
return 0x42ae93;
return 0x42ae91;}
case 0x42ae91:{ // XOR AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae93;}
case 0x42ae93:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae95;}
case 0x42ae95:{ // JZ 0x0042aea8
if(r<1>(c,0x206)){return 0x42aea8;}
return 0x42ae97;}
case 0x42ae97:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae99;}
case 0x42ae99:{ // JZ 0x0042ae9f
if(r<1>(c,0x206)){return 0x42ae9f;}
return 0x42ae9b;}
case 0x42ae9b:{ // TEST CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42ae9d;}
case 0x42ae9d:{ // JNZ 0x0042aea8
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42aea8;}
return 0x42ae9f;}
case 0x42ae9f:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aea2;}
case 0x42aea2:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aea3;}
case 0x42aea3:{ // CALL 0x005fbe00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aea8ull);
return 0x5fbe00;
return 0x42aea8;}
case 0x42aea8:{ // MOV ECX,dword ptr [ESI + 0x6e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6e0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aeae;}
case 0x42aeae:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42aeaf;}
case 0x42aeaf:{ // LEA ECX,[ESI + 0x760]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x760ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42aeb5;}
case 0x42aeb5:{ // CALL 0x0040fbe0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aebaull);
return 0x40fbe0;
return 0x42aeba;}
case 0x42aeba:{ // MOV AL,byte ptr [ESI + 0x710]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42aec0;}
case 0x42aec0:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aec2;}
case 0x42aec2:{ // JNZ 0x0042b02f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42b02f;}
return 0x42aec8;}
case 0x42aec8:{ // MOV EAX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aece;}
case 0x42aece:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aed0;}
case 0x42aed0:{ // JNZ 0x0042aedc
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42aedc;}
return 0x42aed2;}
case 0x42aed2:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aed4;}
case 0x42aed4:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42aed6;}
case 0x42aed6:{ // CALL dword ptr [EAX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x88ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aedcull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42aedc;}
case 0x42aedc:{ // MOV EAX,dword ptr [ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aee2;}
case 0x42aee2:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42aee4;}
case 0x42aee4:{ // LEA EDI,[ESI + 0x6f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6f8ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x42aeea;}
case 0x42aeea:{ // JNZ 0x0042af30
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42af30;}
return 0x42aeec;}
case 0x42aeec:{ // MOV ECX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aef2;}
case 0x42aef2:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aef4;}
case 0x42aef4:{ // CALL dword ptr [EDX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42aef7ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42aef7;}
case 0x42aef7:{ // MOV dword ptr [EDI],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x42aef9;}
case 0x42aef9:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aefc;}
case 0x42aefc:{ // MOV EAX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aeff;}
case 0x42aeff:{ // MOV CL,byte ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42af02;}
case 0x42af02:{ // TEST CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af04;}
case 0x42af04:{ // JNZ 0x0042af30
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42af30;}
return 0x42af06;}
case 0x42af06:{ // LEA ECX,[ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42af0a;}
case 0x42af0a:{ // CALL 0x00420b40
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af0full);
return 0x420b40;
return 0x42af0f;}
case 0x42af0f:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af12;}
case 0x42af12:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42af13;}
case 0x42af13:{ // LEA EDX,[ESP + 0x24]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42af17;}
case 0x42af17:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42af18;}
case 0x42af18:{ // CALL 0x00425910
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af1dull);
return 0x425910;
return 0x42af1d;}
case 0x42af1d:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af20;}
case 0x42af20:{ // MOV ECX,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af23;}
case 0x42af23:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af25;}
case 0x42af25:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af28;}
case 0x42af28:{ // LEA EAX,[ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x42af2c;}
case 0x42af2c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42af2d;}
case 0x42af2d:{ // CALL dword ptr [EDX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af30ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42af30;}
case 0x42af30:{ // MOV ECX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af36;}
case 0x42af36:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af38;}
case 0x42af38:{ // JZ 0x0042af43
if(r<1>(c,0x206)){return 0x42af43;}
return 0x42af3a;}
case 0x42af3a:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af3c;}
case 0x42af3c:{ // LEA EAX,[ESI + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x54ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42af3f;}
case 0x42af3f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42af40;}
case 0x42af40:{ // CALL dword ptr [EDX + 0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x44ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af43ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42af43;}
case 0x42af43:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42af45;}
case 0x42af45:{ // CALL 0x0041d0e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af4aull);
return 0x41d0e0;
return 0x42af4a;}
case 0x42af4a:{ // LEA ECX,[ESI + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x54ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x42af4d;}
case 0x42af4d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x42af4e;}
case 0x42af4e:{ // CALL 0x00428720
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af53ull);
return 0x428720;
return 0x42af53;}
case 0x42af53:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af55;}
case 0x42af55:{ // JNZ 0x0042afef
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42afef;}
return 0x42af5b;}
case 0x42af5b:{ // MOV ECX,dword ptr [ESI + 0x6fc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6fcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af61;}
case 0x42af61:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af63;}
case 0x42af63:{ // JZ 0x0042af9d
if(r<1>(c,0x206)){return 0x42af9d;}
return 0x42af65;}
case 0x42af65:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af67;}
case 0x42af67:{ // CALL dword ptr [EDX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af6aull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42af6a;}
case 0x42af6a:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af6c;}
case 0x42af6c:{ // JZ 0x0042af9d
if(r<1>(c,0x206)){return 0x42af9d;}
return 0x42af6e;}
case 0x42af6e:{ // CMP dword ptr [0x0089e7b0],0x7
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(m<4>(c,0x89e7b0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x7ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x7ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42af75;}
case 0x42af75:{ // JZ 0x0042afd1
if(r<1>(c,0x206)){return 0x42afd1;}
return 0x42af77;}
case 0x42af77:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af7a;}
case 0x42af7a:{ // CALL 0x005ebf60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af7full);
return 0x5ebf60;
return 0x42af7f;}
case 0x42af7f:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42af81;}
case 0x42af81:{ // CALL 0x0041bf80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42af86ull);
return 0x41bf80;
return 0x42af86;}
case 0x42af86:{ // MOV ECX,dword ptr [ESP + 0x1f4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x1f4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42af8d;}
case 0x42af8d:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x42af94;}
case 0x42af94:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42af95;}
case 0x42af95:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42af96;}
case 0x42af96:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42af97;}
case 0x42af97:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42af99;}
case 0x42af99:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42af9a;}
case 0x42af9a:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42af9d;}
case 0x42af9d:{ // MOV AL,byte ptr [ESI + 0x710]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x42afa3;}
case 0x42afa3:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x42afa5;}
case 0x42afa5:{ // JNZ 0x0042afb3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x42afb3;}
return 0x42afa7;}
case 0x42afa7:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42afa9;}
case 0x42afa9:{ // MOV ECX,0x88a320
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a320ull));
return 0x42afae;}
case 0x42afae:{ // CALL 0x0043be80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42afb3ull);
return 0x43be80;
return 0x42afb3;}
case 0x42afb3:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42afb5;}
case 0x42afb5:{ // CALL 0x004023e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42afbaull);
return 0x4023e0;
return 0x42afba;}
case 0x42afba:{ // MOV ECX,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42afbd;}
case 0x42afbd:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42afbf;}
case 0x42afbf:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42afc1;}
case 0x42afc1:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42afc3;}
case 0x42afc3:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42afc5;}
case 0x42afc5:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x42afc7;}
case 0x42afc7:{ // CALL dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42afcaull);
return uint32_t(u<4>(c,0x5ef00));
return 0x42afca;}
case 0x42afca:{ // MOV byte ptr [ESI + 0x710],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x710ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x42afd1;}
case 0x42afd1:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x42afd3;}
case 0x42afd3:{ // CALL 0x0041bf80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x42afd8ull);
return 0x41bf80;
return 0x42afd8;}
case 0x42afd8:{ // MOV ECX,dword ptr [ESP + 0x1f4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x1f4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42afdf;}
case 0x42afdf:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x42afe6;}
case 0x42afe6:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42afe7;}
case 0x42afe7:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42afe8;}
case 0x42afe8:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42afe9;}
case 0x42afe9:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x42afeb;}
case 0x42afeb:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x42afec;}
case 0x42afec:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x42afef;}
case 0x42afef:{ // MOV EDX,dword ptr [ESI + 0x6e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x6e4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x42aff5;}
case 0x42aff5:{ // MOVSX EAX,byte ptr [EDX + 0x308]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x308ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(u<1>(c,0x17000)));
return 0x42affc;}
case 0x42affc:{ // LEA ECX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x42afff;}
case 0x42afff:{ // SHL ECX,0x4
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
return 0x42b002;}
default:missing_instruction(c.pc);}}
}
