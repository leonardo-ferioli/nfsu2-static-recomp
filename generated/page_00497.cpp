#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_497(Cpu& c){switch(c.pc){
case 0x497003:{ // MOV ECX,dword ptr [ESI + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497006;}
case 0x497006:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497008;}
case 0x497008:{ // MOV dword ptr [ESP + 0x10],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497010;}
case 0x497010:{ // JZ 0x00497018
if(r<1>(c,0x206)){return 0x497018;}
return 0x497012;}
case 0x497012:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497014;}
case 0x497014:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497016;}
case 0x497016:{ // CALL dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497018ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497018;}
case 0x497018:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x49701a;}
case 0x49701a:{ // MOV dword ptr [ESP + 0x10],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497022;}
case 0x497022:{ // CALL 0x00510d40
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497027ull);
return 0x510d40;
return 0x497027;}
case 0x497027:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49702b;}
case 0x49702b:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x49702c;}
case 0x49702c:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x497033;}
case 0x497033:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497036;}
case 0x497036:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497037;}
case 0x497040:{ // MOV EAX,FS:[0x0]
wu<4>(c,0x12000,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0x12100,m<4>(c,u<4>(c,0x12000)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x12100)));
return 0x497046;}
case 0x497046:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497048;}
case 0x497048:{ // PUSH 0x7728eb
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7728ebull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49704d;}
case 0x49704d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49704e;}
case 0x49704e:{ // MOV EAX,[0x00862838]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x862838)));
return 0x497053;}
case 0x497053:{ // MOV dword ptr FS:[0x0],ESP
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x10)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x49705a;}
case 0x49705a:{ // SUB ESP,0x38
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x38ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x38ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x38ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49705d;}
case 0x49705d:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49705f;}
case 0x49705f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497060;}
case 0x497060:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497061;}
case 0x497061:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497063;}
case 0x497063:{ // JZ 0x004971e3
if(r<1>(c,0x206)){return 0x4971e3;}
return 0x497069;}
case 0x497069:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49706b;}
case 0x49706b:{ // MOV ECX,0xc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0xcull));
return 0x497070;}
case 0x497070:{ // LEA EDI,[ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497074;}
case 0x497074:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x497076;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x497074;
return 0x497076;}
case 0x497076:{ // MOV ECX,dword ptr [0x00835c98]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x835c98)));
return 0x49707c;}
case 0x49707c:{ // MOV dword ptr [ESP + 0x2c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497080;}
case 0x497080:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497083;}
case 0x497083:{ // PUSH 0x44
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497085;}
case 0x497085:{ // MOV dword ptr [ESP + 0x18],0x78f7bc
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f7bcull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49708d;}
case 0x49708d:{ // MOV dword ptr [ESP + 0x28],0x78f7b0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f7b0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497095;}
case 0x497095:{ // MOV dword ptr [ESP + 0x2c],0x78f7a4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f7a4ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49709d;}
case 0x49709d:{ // MOV dword ptr [ESP + 0x24],0x78f794
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f794ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970a5;}
case 0x4970a5:{ // MOV dword ptr [ESP + 0x34],0x3f800000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3f800000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970ad;}
case 0x4970ad:{ // MOV dword ptr [ESP + 0x40],0x42380000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x42380000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970b5;}
case 0x4970b5:{ // MOV dword ptr [ESP + 0x1c],0x78f784
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f784ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970bd;}
case 0x4970bd:{ // MOV dword ptr [ESP + 0x14],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970c1;}
case 0x4970c1:{ // MOV dword ptr [ESP + 0xc],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970c5;}
case 0x4970c5:{ // CALL 0x00575620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4970caull);
return 0x575620;
return 0x4970ca;}
case 0x4970ca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4970cd;}
case 0x4970cd:{ // MOV dword ptr [ESP + 0xc],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970d1;}
case 0x4970d1:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4970d3;}
case 0x4970d3:{ // MOV dword ptr [ESP + 0x48],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970db;}
case 0x4970db:{ // JZ 0x004970e6
if(r<1>(c,0x206)){return 0x4970e6;}
return 0x4970dd;}
case 0x4970dd:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x4970df;}
case 0x4970df:{ // CALL 0x004ff430
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4970e4ull);
return 0x4ff430;
return 0x4970e4;}
case 0x4970e4:{ // JMP 0x004970e8
return 0x4970e8;
return 0x4970e6;}
case 0x4970e6:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4970e8;}
case 0x4970e8:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4970ea;}
case 0x4970ea:{ // LEA ECX,[ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x4970ee;}
case 0x4970ee:{ // MOV dword ptr [ESI + 0x4c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x4970f1;}
case 0x4970f1:{ // MOV EDX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4970f3;}
case 0x4970f3:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4970f4;}
case 0x4970f4:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x4970f6;}
case 0x4970f6:{ // MOV dword ptr [ESP + 0x50],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4970fe;}
case 0x4970fe:{ // CALL dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497101ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497101;}
case 0x497101:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497105;}
case 0x497105:{ // MOV ECX,dword ptr [ESI + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497108;}
case 0x497108:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497109;}
case 0x497109:{ // CALL 0x004ff550
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49710eull);
return 0x4ff550;
return 0x49710e;}
case 0x49710e:{ // MOV ECX,dword ptr [ESI + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497111;}
case 0x497111:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497113;}
case 0x497113:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497115;}
case 0x497115:{ // CALL dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497118ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497118;}
case 0x497118:{ // MOV ECX,dword ptr [ESI + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49711b;}
case 0x49711b:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49711d;}
case 0x49711d:{ // CALL dword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497120ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497120;}
case 0x497120:{ // FLD float ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497120ull));
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
return 0x497124;}
case 0x497124:{ // FMUL float ptr [0x00784258]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497124ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784258),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x49712a;}
case 0x49712a:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49712d;}
case 0x49712d:{ // SUB ESP,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497130;}
case 0x497130:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497130ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x497133;}
case 0x497133:{ // PUSH 0x78f778
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f778ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497138;}
case 0x497138:{ // PUSH 0x317ad6f2
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x317ad6f2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49713d;}
case 0x49713d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49713e;}
case 0x49713e:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497143ull);
return 0x537b80;
return 0x497143;}
case 0x497143:{ // MOV ECX,dword ptr [0x00835c74]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x835c74)));
return 0x497149;}
case 0x497149:{ // MOV EDX,dword ptr [0x00835c70]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x835c70)));
return 0x49714f;}
case 0x49714f:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497152;}
case 0x497152:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497153;}
case 0x497153:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497154;}
case 0x497154:{ // PUSH 0x78f770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497159;}
case 0x497159:{ // PUSH 0x317ad6f3
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x317ad6f3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49715e;}
case 0x49715e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49715f;}
case 0x49715f:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497164ull);
return 0x537b80;
return 0x497164;}
case 0x497164:{ // ADD ESP,0x28
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x28ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x28ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x28ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497167;}
case 0x497167:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497169;}
case 0x497169:{ // MOV ECX,0x85ad40
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x85ad40ull));
return 0x49716e;}
case 0x49716e:{ // CALL 0x00500c00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497173ull);
return 0x500c00;
return 0x497173;}
case 0x497173:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497175;}
case 0x497175:{ // JZ 0x004972a9
if(r<1>(c,0x206)){return 0x4972a9;}
return 0x49717b;}
case 0x49717b:{ // MOV ECX,dword ptr [0x00835c7c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x835c7c)));
return 0x497181;}
case 0x497181:{ // MOV EDX,dword ptr [0x00835c78]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x835c78)));
return 0x497187;}
case 0x497187:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49718a;}
case 0x49718a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49718b;}
case 0x49718b:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49718c;}
case 0x49718c:{ // PUSH 0x78f770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497191;}
case 0x497191:{ // PUSH 0x317ad6f4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x317ad6f4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497196;}
case 0x497196:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497197;}
case 0x497197:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49719cull);
return 0x537b80;
return 0x49719c;}
case 0x49719c:{ // MOV ECX,dword ptr [0x00835c84]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x835c84)));
return 0x4971a2;}
case 0x4971a2:{ // MOV EDX,dword ptr [0x00835c80]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x835c80)));
return 0x4971a8;}
case 0x4971a8:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4971ab;}
case 0x4971ab:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971ac;}
case 0x4971ac:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971ad;}
case 0x4971ad:{ // PUSH 0x78f770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971b2;}
case 0x4971b2:{ // PUSH 0x317ad6f5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x317ad6f5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971b7;}
case 0x4971b7:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971b8;}
case 0x4971b8:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4971bdull);
return 0x537b80;
return 0x4971bd;}
case 0x4971bd:{ // MOV ECX,dword ptr [0x00835c94]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x835c94)));
return 0x4971c3;}
case 0x4971c3:{ // MOV EDX,dword ptr [0x00835c90]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x835c90)));
return 0x4971c9;}
case 0x4971c9:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4971cc;}
case 0x4971cc:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971cd;}
case 0x4971cd:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971ce;}
case 0x4971ce:{ // PUSH 0x78f770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971d3;}
case 0x4971d3:{ // PUSH 0x317ad6f6
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x317ad6f6ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971d8;}
case 0x4971d8:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971d9;}
case 0x4971d9:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4971deull);
return 0x537b80;
return 0x4971de;}
case 0x4971de:{ // JMP 0x004972a6
return 0x4972a6;
return 0x4971e3;}
case 0x4971e3:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4971e6;}
case 0x4971e6:{ // PUSH 0x2eeeaa14
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x2eeeaa14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971eb;}
case 0x4971eb:{ // PUSH 0x4d2f5c61
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4d2f5c61ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4971f0;}
case 0x4971f0:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971f1;}
case 0x4971f1:{ // CALL 0x00537a10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4971f6ull);
return 0x537a10;
return 0x4971f6;}
case 0x4971f6:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4971f9;}
case 0x4971f9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4971fa;}
case 0x4971fa:{ // CALL 0x0050c900
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4971ffull);
return 0x50c900;
return 0x4971ff;}
case 0x4971ff:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497202;}
case 0x497202:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497205;}
case 0x497205:{ // PUSH 0xfd123b59
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xfd123b59ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49720a;}
case 0x49720a:{ // PUSH 0x4d2f5c62
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4d2f5c62ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49720f;}
case 0x49720f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497210;}
case 0x497210:{ // CALL 0x00537a10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497215ull);
return 0x537a10;
return 0x497215;}
case 0x497215:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497218;}
case 0x497218:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497219;}
case 0x497219:{ // CALL 0x0050c900
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49721eull);
return 0x50c900;
return 0x49721e;}
case 0x49721e:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497221;}
case 0x497221:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497223;}
case 0x497223:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497226;}
case 0x497226:{ // LEA ECX,[EDI + 0x317ad6f2]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x317ad6f2ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x49722c;}
case 0x49722c:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49722d;}
case 0x49722d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49722e;}
case 0x49722e:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497233ull);
return 0x5379c0;
return 0x497233;}
case 0x497233:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497234;}
case 0x497234:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497239ull);
return 0x50ca00;
return 0x497239;}
case 0x497239:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49723c;}
case 0x49723c:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49723d;}
case 0x49723d:{ // CMP EDI,0x2
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
return 0x497240;}
case 0x497240:{ // JL 0x00497223
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x497223;}
return 0x497242;}
case 0x497242:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497245;}
case 0x497245:{ // PUSH 0x7342982d
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7342982dull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49724a;}
case 0x49724a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49724b;}
case 0x49724b:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497250ull);
return 0x5379c0;
return 0x497250;}
case 0x497250:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497251;}
case 0x497251:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497256ull);
return 0x50ca00;
return 0x497256;}
case 0x497256:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497259;}
case 0x497259:{ // PUSH 0xd734d0b8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xd734d0b8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49725e;}
case 0x49725e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49725f;}
case 0x49725f:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497264ull);
return 0x5379c0;
return 0x497264;}
case 0x497264:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497265;}
case 0x497265:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49726aull);
return 0x50ca00;
return 0x49726a;}
case 0x49726a:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49726d;}
case 0x49726d:{ // PUSH 0xbdcd0d7c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xbdcd0d7cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497272;}
case 0x497272:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497273;}
case 0x497273:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497278ull);
return 0x5379c0;
return 0x497278;}
case 0x497278:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497279;}
case 0x497279:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49727eull);
return 0x50ca00;
return 0x49727e;}
case 0x49727e:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497281;}
case 0x497281:{ // PUSH 0xd734c2cf
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xd734c2cfull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497286;}
case 0x497286:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497287;}
case 0x497287:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49728cull);
return 0x5379c0;
return 0x49728c;}
case 0x49728c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49728d;}
case 0x49728d:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497292ull);
return 0x50ca00;
return 0x497292;}
case 0x497292:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497295;}
case 0x497295:{ // PUSH 0x8dafa5e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8dafa5e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49729a;}
case 0x49729a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49729b;}
case 0x49729b:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972a0ull);
return 0x5379c0;
return 0x4972a0;}
case 0x4972a0:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972a1;}
case 0x4972a1:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972a6ull);
return 0x50ca00;
return 0x4972a6;}
case 0x4972a6:{ // ADD ESP,0x3c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x3cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4972a9;}
case 0x4972a9:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4972ab;}
case 0x4972ab:{ // MOV ECX,0x85ad40
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x85ad40ull));
return 0x4972b0;}
case 0x4972b0:{ // CALL 0x00500c00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972b5ull);
return 0x500c00;
return 0x4972b5;}
case 0x4972b5:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4972b7;}
case 0x4972b7:{ // JNZ 0x0049731f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x49731f;}
return 0x4972b9;}
case 0x4972b9:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972ba;}
case 0x4972ba:{ // MOV EDI,0x4d2f5c63
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x4d2f5c63ull));
return 0x4972bf;}
case 0x4972bf:{ // MOV EBX,0x3
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x3ull));
return 0x4972c4;}
case 0x4972c4:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4972c7;}
case 0x4972c7:{ // LEA EDX,[EDI + 0x476fece6]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x476fece6ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4972cd;}
case 0x4972cd:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972ce;}
case 0x4972ce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972cf;}
case 0x4972cf:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972d4ull);
return 0x5379c0;
return 0x4972d4;}
case 0x4972d4:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972d5;}
case 0x4972d5:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972daull);
return 0x50ca00;
return 0x4972da;}
case 0x4972da:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4972dd;}
case 0x4972dd:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972de;}
case 0x4972de:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972df;}
case 0x4972df:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972e4ull);
return 0x5379c0;
return 0x4972e4;}
case 0x4972e4:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4972e5;}
case 0x4972e5:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4972eaull);
return 0x50ca00;
return 0x4972ea;}
case 0x4972ea:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4972ed;}
case 0x4972ed:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4972ee;}
case 0x4972ee:{ // DEC EBX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4972ef;}
case 0x4972ef:{ // JNZ 0x004972c4
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x4972c4;}
return 0x4972f1;}
case 0x4972f1:{ // MOV EDI,0x2
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x2ull));
return 0x4972f6;}
case 0x4972f6:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x4972f7;}
case 0x4972f7:{ // JMP 0x00497300
return 0x497300;
return 0x4972f9;}
case 0x497300:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497303;}
case 0x497303:{ // LEA ECX,[EDI + 0x317ad6f2]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x317ad6f2ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497309;}
case 0x497309:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49730a;}
case 0x49730a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49730b;}
case 0x49730b:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497310ull);
return 0x5379c0;
return 0x497310;}
case 0x497310:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497311;}
case 0x497311:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497316ull);
return 0x50ca00;
return 0x497316;}
case 0x497316:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497319;}
case 0x497319:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49731a;}
case 0x49731a:{ // CMP EDI,0x5
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x5ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49731d;}
case 0x49731d:{ // JL 0x00497300
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x497300;}
return 0x49731f;}
case 0x49731f:{ // MOV ECX,dword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497323;}
case 0x497323:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497324;}
case 0x497324:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497325;}
case 0x497325:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x49732c;}
case 0x49732c:{ // ADD ESP,0x44
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49732f;}
case 0x49732f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497330;}
case 0x497330:{ // SUB ESP,0x14
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497333;}
case 0x497333:{ // MOV EAX,[0x00862838]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x862838)));
return 0x497338;}
case 0x497338:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497339;}
case 0x497339:{ // LEA EBX,[EAX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x49733c;}
case 0x49733c:{ // SHL EBX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0xc),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
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
return 0x49733f;}
case 0x49733f:{ // MOV EAX,dword ptr [EBX + 0x835cbc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x835cbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497345;}
case 0x497345:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497347;}
case 0x497347:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497348;}
case 0x497348:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497349;}
case 0x497349:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x49734b;}
case 0x49734b:{ // MOV dword ptr [ESP + 0x14],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49734f;}
case 0x49734f:{ // JLE 0x0049744d
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x49744d;}
return 0x497355;}
case 0x497355:{ // MOV ESI,0x2734fb0e
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x2734fb0eull));
return 0x49735a;}
case 0x49735a:{ // LEA EBX,[EBX + 0x835ca0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x835ca0ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497360;}
case 0x497360:{ // MOV dword ptr [ESP + 0x10],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497364;}
case 0x497364:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497367;}
case 0x497367:{ // LEA ECX,[ESI + 0xdb74b4df]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xdb74b4dfull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x49736d;}
case 0x49736d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49736e;}
case 0x49736e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49736f;}
case 0x49736f:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497374ull);
return 0x5379c0;
return 0x497374;}
case 0x497374:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497375;}
case 0x497375:{ // CALL 0x0050ca50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49737aull);
return 0x50ca50;
return 0x49737a;}
case 0x49737a:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49737d;}
case 0x49737d:{ // MOV EDX,dword ptr [EBX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497380;}
case 0x497380:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497381;}
case 0x497381:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497382;}
case 0x497382:{ // MOV dword ptr [ESP + 0x20],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497386;}
case 0x497386:{ // CALL 0x00537a10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49738bull);
return 0x537a10;
return 0x49738b;}
case 0x49738b:{ // LEA ECX,[ESI + 0x8ef26ce4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ef26ce4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497391;}
case 0x497391:{ // MOV dword ptr [ESP + 0x2c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497395;}
case 0x497395:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497398;}
case 0x497398:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497399;}
case 0x497399:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49739a;}
case 0x49739a:{ // CALL 0x00537a10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49739full);
return 0x537a10;
return 0x49739f;}
case 0x49739f:{ // FLD float ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x49739full));
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
return 0x4973a3;}
case 0x4973a3:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4973a6;}
case 0x4973a6:{ // LEA EDX,[ESI + 0xd8cb04f3]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xd8cb04f3ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4973ac;}
case 0x4973ac:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x4973acull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x4973af;}
case 0x4973af:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973b0;}
case 0x4973b0:{ // PUSH 0x35ccc129
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x35ccc129ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4973b5;}
case 0x4973b5:{ // MOV dword ptr [ESP + 0x2c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4973b9;}
case 0x4973b9:{ // CALL 0x004ffa80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4973beull);
return 0x4ffa80;
return 0x4973be;}
case 0x4973be:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4973c1;}
case 0x4973c1:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973c2;}
case 0x4973c2:{ // MOV EAX,dword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4973c6;}
case 0x4973c6:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973c7;}
case 0x4973c7:{ // CALL 0x00537be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4973ccull);
return 0x537be0;
return 0x4973cc;}
case 0x4973cc:{ // FLD float ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x4973ccull));
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
return 0x4973d0;}
case 0x4973d0:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4973d3;}
case 0x4973d3:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x4973d3ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x4973d6;}
case 0x4973d6:{ // PUSH 0x30353cd
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x30353cdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4973db;}
case 0x4973db:{ // CALL 0x004ffa80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4973e0ull);
return 0x4ffa80;
return 0x4973e0;}
case 0x4973e0:{ // MOV ECX,dword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4973e4;}
case 0x4973e4:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4973e7;}
case 0x4973e7:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973e8;}
case 0x4973e8:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973e9;}
case 0x4973e9:{ // CALL 0x00537be0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4973eeull);
return 0x537be0;
return 0x4973ee;}
case 0x4973ee:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4973f1;}
case 0x4973f1:{ // LEA EDX,[ESI + 0x1d658262]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1d658262ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4973f7;}
case 0x4973f7:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973f8;}
case 0x4973f8:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4973f9;}
case 0x4973f9:{ // CALL 0x00537a60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4973feull);
return 0x537a60;
return 0x4973fe;}
case 0x4973fe:{ // MOV CL,byte ptr [EBX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0xc)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x497400;}
case 0x497400:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497403;}
case 0x497403:{ // TEST CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497405;}
case 0x497405:{ // JZ 0x0049740e
if(r<1>(c,0x206)){return 0x49740e;}
return 0x497407;}
case 0x497407:{ // PUSH 0x62bc0dfc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x62bc0dfcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49740c;}
case 0x49740c:{ // JMP 0x00497413
return 0x497413;
return 0x49740e;}
case 0x49740e:{ // PUSH 0xb90f50bb
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb90f50bbull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497413;}
case 0x497413:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497414;}
case 0x497414:{ // CALL 0x0050c990
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497419ull);
return 0x50c990;
return 0x497419;}
case 0x497419:{ // MOV EAX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49741d;}
case 0x49741d:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497420;}
case 0x497420:{ // ADD EBX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x8ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497423;}
case 0x497423:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497424;}
case 0x497424:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497425;}
case 0x497425:{ // MOV dword ptr [ESP + 0x10],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497429;}
case 0x497429:{ // JNZ 0x00497364
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x497364;}
return 0x49742f;}
case 0x49742f:{ // MOV EAX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497433;}
case 0x497433:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497435;}
case 0x497435:{ // JLE 0x0049744d
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x49744d;}
return 0x497437;}
case 0x497437:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49743a;}
case 0x49743a:{ // PUSH 0x42e73d71
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x42e73d71ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49743f;}
case 0x49743f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497440;}
case 0x497440:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497445ull);
return 0x5379c0;
return 0x497445;}
case 0x497445:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497446;}
case 0x497446:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49744bull);
return 0x50ca00;
return 0x49744b;}
case 0x49744b:{ // JMP 0x00497461
return 0x497461;
return 0x49744d;}
case 0x49744d:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497450;}
case 0x497450:{ // PUSH 0x42e73d71
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x42e73d71ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497455;}
case 0x497455:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497456;}
case 0x497456:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49745bull);
return 0x5379c0;
return 0x49745b;}
case 0x49745b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49745c;}
case 0x49745c:{ // CALL 0x0050ca50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497461ull);
return 0x50ca50;
return 0x497461;}
case 0x497461:{ // MOV ESI,dword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497465;}
case 0x497465:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497468;}
case 0x497468:{ // CMP ESI,0x4
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
return 0x49746b;}
case 0x49746b:{ // JGE 0x0049748f
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x49748f;}
return 0x49746d;}
case 0x49746d:{ // LEA ECX,[ECX]
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497470;}
case 0x497470:{ // MOV EAX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497473;}
case 0x497473:{ // LEA ECX,[ESI + 0x2a9afed]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x2a9afedull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497479;}
case 0x497479:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49747a;}
case 0x49747a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49747b;}
case 0x49747b:{ // CALL 0x005379c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497480ull);
return 0x5379c0;
return 0x497480;}
case 0x497480:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497481;}
case 0x497481:{ // CALL 0x0050ca00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497486ull);
return 0x50ca00;
return 0x497486;}
case 0x497486:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497489;}
case 0x497489:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49748a;}
case 0x49748a:{ // CMP ESI,0x4
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
return 0x49748d;}
case 0x49748d:{ // JL 0x00497470
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x497470;}
return 0x49748f;}
case 0x49748f:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497490;}
case 0x497490:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497491;}
case 0x497491:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497492;}
case 0x497492:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497495;}
case 0x497495:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497496;}
case 0x4974a0:{ // SUB ESP,0x80
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4974a6;}
case 0x4974a6:{ // MOV EAX,0xff
wr<4>(c,0x0,eval<Op::COPY,4,4>(0xffull));
return 0x4974ab;}
case 0x4974ab:{ // MOV ECX,0x80
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x80ull));
return 0x4974b0;}
case 0x4974b0:{ // MOV dword ptr [ESP + 0xc],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974b4;}
case 0x4974b4:{ // MOV dword ptr [ESP + 0x1c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974b8;}
case 0x4974b8:{ // MOV dword ptr [ESP + 0x2c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974bc;}
case 0x4974bc:{ // MOV dword ptr [ESP + 0x3c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x3cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974c0;}
case 0x4974c0:{ // MOV dword ptr [ESP + 0x40],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974c4;}
case 0x4974c4:{ // MOV dword ptr [ESP + 0x4c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974c8;}
case 0x4974c8:{ // MOV dword ptr [ESP + 0x5c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x5cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974cc;}
case 0x4974cc:{ // MOV dword ptr [ESP + 0x6c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974d0;}
case 0x4974d0:{ // MOV dword ptr [ESP + 0x7c],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x7cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974d4;}
case 0x4974d4:{ // MOV EAX,dword ptr [ESP + 0x84]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x84ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4974db;}
case 0x4974db:{ // MOV EDX,0xc8
wr<4>(c,0x8,eval<Op::COPY,4,4>(0xc8ull));
return 0x4974e0;}
case 0x4974e0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4974e1;}
case 0x4974e1:{ // MOV dword ptr [ESP + 0x18],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974e5;}
case 0x4974e5:{ // MOV ESI,0x30
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x30ull));
return 0x4974ea;}
case 0x4974ea:{ // MOV dword ptr [ESP + 0x48],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974ee;}
case 0x4974ee:{ // MOV dword ptr [ESP + 0x4c],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974f2;}
case 0x4974f2:{ // MOV dword ptr [ESP + 0x6c],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x4974f6;}
case 0x4974f6:{ // MOV ECX,0xe
wr<4>(c,0x4,eval<Op::COPY,4,4>(0xeull));
return 0x4974fb;}
case 0x4974fb:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4974fc;}
case 0x4974fc:{ // CMP EAX,0x6
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x6ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x6ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x6ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4974ff;}
case 0x4974ff:{ // MOV dword ptr [ESP + 0x4],0x2d
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2dull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497507;}
case 0x497507:{ // MOV dword ptr [ESP + 0x8],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49750b;}
case 0x49750b:{ // MOV dword ptr [ESP + 0xc],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49750f;}
case 0x49750f:{ // MOV dword ptr [ESP + 0x14],0x2b
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2bull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497517;}
case 0x497517:{ // MOV dword ptr [ESP + 0x1c],0xd5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xd5ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49751f;}
case 0x49751f:{ // MOV dword ptr [ESP + 0x24],0x8a
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x8aull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497527;}
case 0x497527:{ // MOV dword ptr [ESP + 0x28],0xf4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xf4ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49752f;}
case 0x49752f:{ // MOV dword ptr [ESP + 0x2c],0xca
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xcaull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497537;}
case 0x497537:{ // MOV dword ptr [ESP + 0x34],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49753b;}
case 0x49753b:{ // MOV dword ptr [ESP + 0x38],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49753f;}
case 0x49753f:{ // MOV dword ptr [ESP + 0x3c],0xcf
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x3cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xcfull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497547;}
case 0x497547:{ // MOV dword ptr [ESP + 0x54],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x54ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49754b;}
case 0x49754b:{ // MOV dword ptr [ESP + 0x58],0x82
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x82ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497553;}
case 0x497553:{ // MOV dword ptr [ESP + 0x5c],0x32
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x5cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x32ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49755b;}
case 0x49755b:{ // MOV dword ptr [ESP + 0x64],0xb5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x64ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xb5ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497563;}
case 0x497563:{ // MOV dword ptr [ESP + 0x68],0x4a
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x4aull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49756b;}
case 0x49756b:{ // MOV dword ptr [ESP + 0x74],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x74ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49756f;}
case 0x49756f:{ // MOV dword ptr [ESP + 0x78],0x9c
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x9cull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497577;}
case 0x497577:{ // MOV dword ptr [ESP + 0x7c],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x7cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x49757b;}
case 0x49757b:{ // JA 0x00497668
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x497668;}
return 0x497581;}
case 0x497581:{ // JMP dword ptr [EAX*0x4 + 0x497688]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x497688ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x497588;}
case 0x497588:{ // MOV ECX,dword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49758f;}
case 0x49758f:{ // LEA EAX,[ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497593;}
case 0x497593:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497594;}
case 0x497594:{ // MOV ESI,0x88c9990a
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x88c9990aull));
return 0x497599;}
case 0x497599:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49759eull);
return 0x505560;
return 0x49759e;}
case 0x49759e:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x4975a0;}
case 0x4975a0:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x4975a1;}
case 0x4975a1:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4975a7;}
case 0x4975a7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x4975a8;}
case 0x4975a8:{ // LEA ECX,[ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x4975ac;}
case 0x4975ac:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4975ad;}
case 0x4975ad:{ // MOV ECX,dword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4975b4;}
case 0x4975b4:{ // MOV ESI,0x8b2f36ee
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x8b2f36eeull));
return 0x4975b9;}
case 0x4975b9:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4975beull);
return 0x505560;
return 0x4975be;}
case 0x4975be:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x4975c0;}
case 0x4975c0:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x4975c1;}
case 0x4975c1:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4975c7;}
case 0x4975c7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x4975c8;}
case 0x4975c8:{ // MOV ECX,dword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4975cf;}
case 0x4975cf:{ // LEA EDX,[ESP + 0x24]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x24ull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x4975d3;}
case 0x4975d3:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4975d4;}
case 0x4975d4:{ // MOV ESI,0x470222fd
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x470222fdull));
return 0x4975d9;}
case 0x4975d9:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4975deull);
return 0x505560;
return 0x4975de;}
case 0x4975de:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x4975e0;}
case 0x4975e0:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x4975e1;}
case 0x4975e1:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4975e7;}
case 0x4975e7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x4975e8;}
case 0x4975e8:{ // MOV ECX,dword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4975ef;}
case 0x4975ef:{ // LEA EAX,[ESP + 0x34]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x4975f3;}
case 0x4975f3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4975f4;}
case 0x4975f4:{ // MOV ESI,0xa9dfe648
wr<4>(c,0x18,eval<Op::COPY,4,4>(0xa9dfe648ull));
return 0x4975f9;}
case 0x4975f9:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4975feull);
return 0x505560;
return 0x4975fe;}
case 0x4975fe:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497600;}
case 0x497600:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497601;}
case 0x497601:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497607;}
case 0x497607:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497608;}
case 0x497608:{ // LEA ECX,[ESP + 0x44]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x44ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x49760c;}
case 0x49760c:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49760d;}
case 0x49760d:{ // MOV ECX,dword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497614;}
case 0x497614:{ // MOV ESI,0x5d9b6555
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x5d9b6555ull));
return 0x497619;}
case 0x497619:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49761eull);
return 0x505560;
return 0x49761e;}
case 0x49761e:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497620;}
case 0x497620:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497621;}
case 0x497621:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497627;}
case 0x497627:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497628;}
case 0x497628:{ // MOV ECX,dword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49762f;}
case 0x49762f:{ // LEA EDX,[ESP + 0x54]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x54ull,r<4>(c,0x10)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497633;}
case 0x497633:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497634;}
case 0x497634:{ // MOV ESI,0x756b5c1b
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x756b5c1bull));
return 0x497639;}
case 0x497639:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49763eull);
return 0x505560;
return 0x49763e;}
case 0x49763e:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497640;}
case 0x497640:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497641;}
case 0x497641:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497647;}
case 0x497647:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497648;}
case 0x497648:{ // MOV ECX,dword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49764f;}
case 0x49764f:{ // LEA EAX,[ESP + 0x64]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x64ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497653;}
case 0x497653:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497654;}
case 0x497654:{ // MOV ESI,0x55476a96
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x55476a96ull));
return 0x497659;}
case 0x497659:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49765eull);
return 0x505560;
return 0x49765e;}
case 0x49765e:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497660;}
case 0x497660:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497661;}
case 0x497661:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497667;}
case 0x497667:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497668;}
case 0x497668:{ // LEA ECX,[ESP + 0x74]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x74ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x49766c;}
case 0x49766c:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49766d;}
case 0x49766d:{ // MOV ECX,dword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497674;}
case 0x497674:{ // MOV ESI,0x4b9b8f5a
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x4b9b8f5aull));
return 0x497679;}
case 0x497679:{ // CALL 0x00505560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49767eull);
return 0x505560;
return 0x49767e;}
case 0x49767e:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497680;}
case 0x497680:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497681;}
case 0x497681:{ // ADD ESP,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x80ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497687;}
case 0x497687:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497688;}
case 0x4976b0:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4976b2;}
case 0x4976b2:{ // MOV ECX,0x860a60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x860a60ull));
return 0x4976b7;}
case 0x4976b7:{ // CALL 0x00514d30
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4976bcull);
return 0x514d30;
return 0x4976bc;}
case 0x4976bc:{ // MOV ECX,0x1
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x1ull));
return 0x4976c1;}
case 0x4976c1:{ // CMP EAX,ECX
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
return 0x4976c3;}
case 0x4976c3:{ // JNZ 0x004976f4
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x4976f4;}
return 0x4976c5;}
case 0x4976c5:{ // MOV dword ptr [0x0083632c],ECX
wm<4>(c,0x83632c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x4976cb;}
case 0x4976cb:{ // MOV ECX,0x860a60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x860a60ull));
return 0x4976d0;}
case 0x4976d0:{ // MOV dword ptr [0x00836330],0x78f7c8
wm<4>(c,0x836330,eval<Op::COPY,4,4>(0x78f7c8ull));
return 0x4976da;}
case 0x4976da:{ // CALL 0x00514cf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4976dfull);
return 0x514cf0;
return 0x4976df;}
case 0x4976df:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4976e0;}
case 0x4976e0:{ // MOV [0x00836334],EAX
wm<4>(c,0x836334,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x4976e5;}
case 0x4976e5:{ // MOV EAX,[0x00836330]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x836330)));
return 0x4976ea;}
case 0x4976ea:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4976eb;}
case 0x4976eb:{ // CALL 0x00555e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4976f0ull);
return 0x555e80;
return 0x4976f0;}
case 0x4976f0:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4976f3;}
case 0x4976f3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x4976f4;}
case 0x4976f4:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4976f6;}
case 0x4976f6:{ // PUSH 0x78f7e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4976fb;}
case 0x4976fb:{ // MOV dword ptr [0x0083632c],0x2
wm<4>(c,0x83632c,eval<Op::COPY,4,4>(0x2ull));
return 0x497705;}
case 0x497705:{ // MOV dword ptr [0x00836330],0x78f7e4
wm<4>(c,0x836330,eval<Op::COPY,4,4>(0x78f7e4ull));
return 0x49770f;}
case 0x49770f:{ // MOV dword ptr [0x007f4434],ECX
wm<4>(c,0x7f4434,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497715;}
case 0x497715:{ // MOV dword ptr [0x00836334],0x0
wm<4>(c,0x836334,eval<Op::COPY,4,4>(0x0ull));
return 0x49771f;}
case 0x49771f:{ // CALL 0x00555e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497724ull);
return 0x555e80;
return 0x497724;}
case 0x497724:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497727;}
case 0x497727:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497728;}
case 0x497730:{ // MOV ECX,0x861e7c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x861e7cull));
return 0x497735;}
case 0x497735:{ // CALL 0x00502420
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49773aull);
return 0x502420;
return 0x49773a;}
case 0x49773a:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49773c;}
case 0x49773c:{ // JZ 0x00497748
if(r<1>(c,0x206)){return 0x497748;}
return 0x49773e;}
case 0x49773e:{ // MOV ECX,0x861e7c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x861e7cull));
return 0x497743;}
case 0x497743:{ // CALL 0x005024f0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497748ull);
return 0x5024f0;
return 0x497748;}
case 0x497748:{ // PUSH 0x78f7e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49774d;}
case 0x49774d:{ // CALL 0x00558f00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497752ull);
return 0x558f00;
return 0x497752;}
case 0x497752:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497753;}
case 0x497753:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497754;}
case 0x497760:{ // SUB ESP,0x100
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x100ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x100ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497766;}
case 0x497766:{ // PUSH 0x4b5de3e9
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4b5de3e9ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49776b;}
case 0x49776b:{ // LEA EAX,[ESP + 0x84]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x84ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7f00)));
return 0x497772;}
case 0x497772:{ // PUSH 0x80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497777;}
case 0x497777:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497778;}
case 0x497778:{ // CALL 0x004ffa50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49777dull);
return 0x4ffa50;
return 0x49777d;}
case 0x49777d:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497780;}
case 0x497780:{ // PUSH 0x80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497785;}
case 0x497785:{ // LEA ECX,[ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497789;}
case 0x497789:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49778a;}
case 0x49778a:{ // MOV ECX,dword ptr [ESP + 0x10c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x10cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497791;}
case 0x497791:{ // CALL 0x005149c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497796ull);
return 0x5149c0;
return 0x497796;}
case 0x497796:{ // MOV ECX,dword ptr [ESP + 0x10c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x10cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49779d;}
case 0x49779d:{ // LEA EDX,[ESP]
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x4977a1;}
case 0x4977a1:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4977a2;}
case 0x4977a2:{ // MOV EDX,dword ptr [ESP + 0x10c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x10cull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4977a9;}
case 0x4977a9:{ // LEA EAX,[ESP + 0x84]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x84ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7f00)));
return 0x4977b0;}
case 0x4977b0:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4977b1;}
case 0x4977b1:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4977b2;}
case 0x4977b2:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4977b3;}
case 0x4977b3:{ // CALL 0x0050c960
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4977b8ull);
return 0x50c960;
return 0x4977b8;}
case 0x4977b8:{ // ADD ESP,0x110
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x110ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x110ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x110ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4977be;}
case 0x4977be:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x4977bf;}
case 0x4977c0:{ // MOV ECX,0x860a60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x860a60ull));
return 0x4977c5;}
case 0x4977c5:{ // MOV dword ptr [0x0083632c],0x0
wm<4>(c,0x83632c,eval<Op::COPY,4,4>(0x0ull));
return 0x4977cf;}
case 0x4977cf:{ // CALL 0x00514d80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4977d4ull);
return 0x514d80;
return 0x4977d4;}
case 0x4977d4:{ // MOV ECX,dword ptr [0x008900d8]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8900d8)));
return 0x4977da;}
case 0x4977da:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4977dc;}
case 0x4977dc:{ // CALL 0x005f4240
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4977e1ull);
return 0x5f4240;
return 0x4977e1;}
case 0x4977e1:{ // PUSH 0x78f7e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4977e6;}
case 0x4977e6:{ // CALL 0x005379a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4977ebull);
return 0x5379a0;
return 0x4977eb;}
case 0x4977eb:{ // PUSH 0x78f7c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4977f0;}
case 0x4977f0:{ // CALL 0x005379a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4977f5ull);
return 0x5379a0;
return 0x4977f5;}
case 0x4977f5:{ // MOV EAX,[0x00836330]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x836330)));
return 0x4977fa;}
case 0x4977fa:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4977fb;}
case 0x4977fb:{ // CALL 0x00558f00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497800ull);
return 0x558f00;
return 0x497800;}
case 0x497800:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497803;}
case 0x497803:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497804;}
case 0x497810:{ // MOV EDX,dword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497813;}
case 0x497813:{ // LEA EAX,[ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497816;}
case 0x497816:{ // CMP EDX,EAX
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
return 0x497818;}
case 0x497818:{ // JZ 0x0049784f
if(r<1>(c,0x206)){return 0x49784f;}
return 0x49781a;}
case 0x49781a:{ // MOV EAX,dword ptr [ECX + 0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x74ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49781d;}
case 0x49781d:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49781f;}
case 0x49781f:{ // JZ 0x0049784f
if(r<1>(c,0x206)){return 0x49784f;}
return 0x497821;}
case 0x497821:{ // MOV EAX,dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497824;}
case 0x497824:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497826;}
case 0x497826:{ // JZ 0x0049784f
if(r<1>(c,0x206)){return 0x49784f;}
return 0x497828;}
case 0x497828:{ // MOV ECX,dword ptr [ECX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x120ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49782e;}
case 0x49782e:{ // MOV EDX,dword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497831;}
case 0x497831:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497832;}
case 0x497832:{ // PUSH 0x78f7c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497837;}
case 0x497837:{ // PUSH 0x78f7e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49783c;}
case 0x49783c:{ // MOV dword ptr [0x007f4434],EDX
wm<4>(c,0x7f4434,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x497842;}
case 0x497842:{ // MOV [0x00836334],EAX
wm<4>(c,0x836334,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x497847;}
case 0x497847:{ // CALL 0x00537980
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49784cull);
return 0x537980;
return 0x49784c;}
case 0x49784c:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49784f;}
case 0x49784f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497850;}
case 0x497850:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497851;}
case 0x497851:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x497853;}
case 0x497853:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497855;}
case 0x497855:{ // PUSH 0x772913
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x772913ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49785a;}
case 0x49785a:{ // MOV EAX,FS:[0x0]
wu<4>(c,0x12000,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0x12100,m<4>(c,u<4>(c,0x12000)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x12100)));
return 0x497860;}
case 0x497860:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497861;}
case 0x497861:{ // MOV dword ptr FS:[0x0],ESP
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x10)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x497868;}
case 0x497868:{ // SUB ESP,0xd0c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xd0cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xd0cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xd0cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49786e;}
case 0x49786e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49786f;}
case 0x49786f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497870;}
case 0x497870:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497871;}
case 0x497871:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497874;}
case 0x497874:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497876;}
case 0x497876:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497877;}
case 0x497877:{ // MOV dword ptr [EBP + -0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x49787a;}
case 0x49787a:{ // CALL 0x00551de0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x49787full);
return 0x551de0;
return 0x49787f;}
case 0x49787f:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497881;}
case 0x497881:{ // LEA EBX,[ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497884;}
case 0x497884:{ // MOV dword ptr [ESI],0x78f824
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f824ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x49788a;}
case 0x49788a:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x49788c;}
case 0x49788c:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x49788f;}
case 0x49788f:{ // MOV dword ptr [ESI + 0x4c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x497892;}
case 0x497892:{ // CALL 0x0050db40
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497897ull);
return 0x50db40;
return 0x497897;}
case 0x497897:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49789a;}
case 0x49789a:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x49789c;}
case 0x49789c:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x49789e;}
case 0x49789e:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4978a0;}
case 0x4978a0:{ // PUSH 0x78f814
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f814ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4978a5;}
case 0x4978a5:{ // LEA ECX,[ESI + 0xa4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xa4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4978ab;}
case 0x4978ab:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4978ac;}
case 0x4978ac:{ // MOV byte ptr [EBP + -0x4],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x4978b0;}
case 0x4978b0:{ // CALL 0x00542ac0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978b5ull);
return 0x542ac0;
return 0x4978b5;}
case 0x4978b5:{ // MOV dword ptr [ESI + 0x100],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x4978bf;}
case 0x4978bf:{ // MOV ECX,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4978c2;}
case 0x4978c2:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4978c4;}
case 0x4978c4:{ // CALL 0x00504820
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978c9ull);
return 0x504820;
return 0x4978c9;}
case 0x4978c9:{ // CALL 0x0050cea0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978ceull);
return 0x50cea0;
return 0x4978ce;}
case 0x4978ce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4978cf;}
case 0x4978cf:{ // CALL 0x0052cf60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978d4ull);
return 0x52cf60;
return 0x4978d4;}
case 0x4978d4:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4978d7;}
case 0x4978d7:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4978d9;}
case 0x4978d9:{ // JNZ 0x004978f4
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x4978f4;}
return 0x4978db;}
case 0x4978db:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4978de;}
case 0x4978de:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x4978e0;}
case 0x4978e0:{ // PUSH 0xff
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4978e5;}
case 0x4978e5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4978e6;}
case 0x4978e6:{ // CALL 0x0050cea0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978ebull);
return 0x50cea0;
return 0x4978eb;}
case 0x4978eb:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4978ec;}
case 0x4978ec:{ // CALL 0x00555f10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978f1ull);
return 0x555f10;
return 0x4978f1;}
case 0x4978f1:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4978f4;}
case 0x4978f4:{ // MOV ECX,dword ptr [0x008384d8]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8384d8)));
return 0x4978fa;}
case 0x4978fa:{ // CALL 0x0054e6a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4978ffull);
return 0x54e6a0;
return 0x4978ff;}
case 0x4978ff:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497902;}
case 0x497902:{ // MOV EDX,dword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497905;}
case 0x497905:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497906;}
case 0x497906:{ // MOV ECX,dword ptr [0x008384d8]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8384d8)));
return 0x49790c;}
case 0x49790c:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49790d;}
case 0x49790d:{ // CALL 0x0054e6e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497912ull);
return 0x54e6e0;
return 0x497912;}
case 0x497912:{ // MOV EAX,[0x0083a9d8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x83a9d8)));
return 0x497917;}
case 0x497917:{ // MOV EDI,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49791a;}
case 0x49791a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49791b;}
case 0x49791b:{ // CALL 0x0050d2d0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497920ull);
return 0x50d2d0;
return 0x497920;}
case 0x497920:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497921;}
case 0x497921:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497922;}
case 0x497922:{ // CALL 0x00537950
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497927ull);
return 0x537950;
return 0x497927;}
case 0x497927:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49792a;}
case 0x49792a:{ // MOV EDX,dword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49792d;}
case 0x49792d:{ // MOV EDI,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497930;}
case 0x497930:{ // PUSH 0x78f808
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f808ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497935;}
case 0x497935:{ // MOV dword ptr [ESI + 0xfc],EDX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x49793b;}
case 0x49793b:{ // CALL 0x00505450
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497940ull);
return 0x505450;
return 0x497940;}
case 0x497940:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497941;}
case 0x497941:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497942;}
case 0x497942:{ // CALL 0x00537a10
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497947ull);
return 0x537a10;
return 0x497947;}
case 0x497947:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x49794a;}
case 0x49794a:{ // PUSH 0xc00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xc00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49794f;}
case 0x49794f:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x497951;}
case 0x497951:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x497953;}
case 0x497953:{ // CALL 0x0050db80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497958ull);
return 0x50db80;
return 0x497958;}
case 0x497958:{ // MOV EAX,dword ptr [EDI + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49795b;}
case 0x49795b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x49795c;}
case 0x49795c:{ // CALL 0x0051bd70
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497961ull);
return 0x51bd70;
return 0x497961;}
case 0x497961:{ // MOV ECX,dword ptr [EDI + 0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x74ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497964;}
case 0x497964:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497967;}
case 0x497967:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497968;}
case 0x497968:{ // PUSH 0x78f7f8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7f8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49796d;}
case 0x49796d:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x49796f;}
case 0x49796f:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497970;}
case 0x497970:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497971;}
case 0x497971:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x497973;}
case 0x497973:{ // CALL 0x0050dbb0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497978ull);
return 0x50dbb0;
return 0x497978;}
case 0x497978:{ // MOV EDX,dword ptr [ESI + 0xfc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x49797e;}
case 0x49797e:{ // LEA EAX,[ESI + 0xa4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xa4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497984;}
case 0x497984:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497985;}
case 0x497985:{ // MOV ECX,0x860a60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x860a60ull));
return 0x49798a;}
case 0x49798a:{ // MOV dword ptr [ESI + 0x58],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x49798d;}
case 0x49798d:{ // CALL 0x00514dc0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497992ull);
return 0x514dc0;
return 0x497992;}
case 0x497992:{ // MOV ECX,dword ptr [ESI + 0xfc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497998;}
case 0x497998:{ // PUSH 0x100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x49799d;}
case 0x49799d:{ // LEA EAX,[EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4979a3;}
case 0x4979a3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979a4;}
case 0x4979a4:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979a5;}
case 0x4979a5:{ // CALL 0x00497760
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979aaull);
return 0x497760;
return 0x4979aa;}
case 0x4979aa:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4979ad;}
case 0x4979ad:{ // LEA EDX,[EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4979b3;}
case 0x4979b3:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979b4;}
case 0x4979b4:{ // PUSH 0x2c167533
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x2c167533ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4979b9;}
case 0x4979b9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979ba;}
case 0x4979ba:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979bfull);
return 0x537b80;
return 0x4979bf;}
case 0x4979bf:{ // PUSH 0x9f29d70d
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x9f29d70dull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4979c4;}
case 0x4979c4:{ // LEA ECX,[EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4979ca;}
case 0x4979ca:{ // PUSH 0x100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4979cf;}
case 0x4979cf:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979d0;}
case 0x4979d0:{ // CALL 0x004ffa50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979d5ull);
return 0x4ffa50;
return 0x4979d5;}
case 0x4979d5:{ // MOV ECX,dword ptr [ESI + 0xfc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4979db;}
case 0x4979db:{ // MOV EDI,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x4979de;}
case 0x4979de:{ // ADD ESP,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x24ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x4979e1;}
case 0x4979e1:{ // CALL 0x00501470
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979e6ull);
return 0x501470;
return 0x4979e6;}
case 0x4979e6:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979e7;}
case 0x4979e7:{ // CALL 0x004ffa80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979ecull);
return 0x4ffa80;
return 0x4979ec;}
case 0x4979ec:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979ed;}
case 0x4979ed:{ // LEA EDX,[EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x4979f3;}
case 0x4979f3:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979f4;}
case 0x4979f4:{ // PUSH 0xfeced617
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xfeced617ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x4979f9;}
case 0x4979f9:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x4979fa;}
case 0x4979fa:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x4979ffull);
return 0x537b80;
return 0x4979ff;}
case 0x4979ff:{ // PUSH 0x604
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x604ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497a04;}
case 0x497a04:{ // CALL 0x00575620
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a09ull);
return 0x575620;
return 0x497a09;}
case 0x497a09:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497a0c;}
case 0x497a0c:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x497a0e;}
case 0x497a0e:{ // PUSH 0x604
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x604ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497a13;}
case 0x497a13:{ // MOV ECX,dword ptr [ESI + 0xfc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497a19;}
case 0x497a19:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a1a;}
case 0x497a1a:{ // CALL 0x00514b00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a1full);
return 0x514b00;
return 0x497a1f;}
case 0x497a1f:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a20;}
case 0x497a20:{ // LEA EAX,[EBP + 0xfffff2e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff2e8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497a26;}
case 0x497a26:{ // PUSH 0x604
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x604ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497a2b;}
case 0x497a2b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a2c;}
case 0x497a2c:{ // CALL 0x00512530
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a31ull);
return 0x512530;
return 0x497a31;}
case 0x497a31:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a32;}
case 0x497a32:{ // CALL 0x00575630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a37ull);
return 0x575630;
return 0x497a37;}
case 0x497a37:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497a3a;}
case 0x497a3a:{ // LEA ECX,[EBP + 0xfffff2e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffff2e8ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497a40;}
case 0x497a40:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a41;}
case 0x497a41:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x497a43;}
case 0x497a43:{ // CALL 0x005446f0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a48ull);
return 0x5446f0;
return 0x497a48;}
case 0x497a48:{ // MOV EDX,dword ptr [ESI + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x98ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497a4e;}
case 0x497a4e:{ // MOV EAX,dword ptr [ESI + 0x84]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x84ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497a54;}
case 0x497a54:{ // MOV ECX,dword ptr [ESI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x80ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497a5a;}
case 0x497a5a:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497a5b;}
case 0x497a5b:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a5c;}
case 0x497a5c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a5d;}
case 0x497a5d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a5e;}
case 0x497a5e:{ // LEA ECX,[ESI + 0xa4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xa4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497a64;}
case 0x497a64:{ // CALL 0x00538080
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497a69ull);
return 0x538080;
return 0x497a69;}
case 0x497a69:{ // MOV ECX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497a6c;}
case 0x497a6c:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497a6d;}
case 0x497a6d:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497a6f;}
case 0x497a6f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497a70;}
case 0x497a70:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497a71;}
case 0x497a71:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x497a78;}
case 0x497a78:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x497a7a;}
case 0x497a7a:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497a7b;}
case 0x497a7b:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497a7e;}
case 0x497a80:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497a82;}
case 0x497a82:{ // PUSH 0x772913
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x772913ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497a87;}
case 0x497a87:{ // MOV EAX,FS:[0x0]
wu<4>(c,0x12000,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0x12100,m<4>(c,u<4>(c,0x12000)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x12100)));
return 0x497a8d;}
case 0x497a8d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a8e;}
case 0x497a8e:{ // MOV dword ptr FS:[0x0],ESP
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x10)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x497a95;}
case 0x497a95:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a96;}
case 0x497a96:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497a97;}
case 0x497a97:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497a99;}
case 0x497a99:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497a9d;}
case 0x497a9d:{ // MOV dword ptr [ESI],0x78f824
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f824ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x497aa3;}
case 0x497aa3:{ // MOV dword ptr [ESP + 0x10],0x1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497aab;}
case 0x497aab:{ // CALL 0x0050cea0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ab0ull);
return 0x50cea0;
return 0x497ab0;}
case 0x497ab0:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497ab1;}
case 0x497ab1:{ // CALL 0x0052cf60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ab6ull);
return 0x52cf60;
return 0x497ab6;}
case 0x497ab6:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497ab9;}
case 0x497ab9:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497abb;}
case 0x497abb:{ // JZ 0x00497acb
if(r<1>(c,0x206)){return 0x497acb;}
return 0x497abd;}
case 0x497abd:{ // CALL 0x0050cea0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ac2ull);
return 0x50cea0;
return 0x497ac2;}
case 0x497ac2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497ac3;}
case 0x497ac3:{ // CALL 0x005379a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ac8ull);
return 0x5379a0;
return 0x497ac8;}
case 0x497ac8:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497acb;}
case 0x497acb:{ // LEA ECX,[ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497ace;}
case 0x497ace:{ // MOV byte ptr [ESP + 0x10],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,u<4>(c,0x7600),u<1>(c,0xa100));
return 0x497ad3;}
case 0x497ad3:{ // CALL 0x0050db70
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ad8ull);
return 0x50db70;
return 0x497ad8;}
case 0x497ad8:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497ada;}
case 0x497ada:{ // MOV dword ptr [ESP + 0x10],0xffffffff
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497ae2;}
case 0x497ae2:{ // CALL 0x00510d40
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ae7ull);
return 0x510d40;
return 0x497ae7;}
case 0x497ae7:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497aeb;}
case 0x497aeb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497aec;}
case 0x497aec:{ // MOV dword ptr FS:[0x0],ECX
wu<4>(c,0x9d00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x110),0x0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x9d00),u<4>(c,0xa300));
return 0x497af3;}
case 0x497af3:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497af6;}
case 0x497af6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497af7;}
case 0x497b00:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497b01;}
case 0x497b01:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x497b03;}
case 0x497b03:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497b04;}
case 0x497b04:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497b05;}
case 0x497b05:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497b08;}
case 0x497b08:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497b0a;}
case 0x497b0a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497b0b;}
case 0x497b0b:{ // LEA ECX,[ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497b0e;}
case 0x497b0e:{ // CALL 0x005448f0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497b13ull);
return 0x5448f0;
return 0x497b13;}
case 0x497b13:{ // CMP EDI,0x911ab364
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x911ab364ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x911ab364ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x911ab364ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b19;}
case 0x497b19:{ // JA 0x00497b94
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x497b94;}
return 0x497b1b;}
case 0x497b1b:{ // JZ 0x00497b5f
if(r<1>(c,0x206)){return 0x497b5f;}
return 0x497b1d;}
case 0x497b1d:{ // CMP EDI,0x35f8620b
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x35f8620bull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x35f8620bull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x35f8620bull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b23;}
case 0x497b23:{ // JZ 0x00497b4f
if(r<1>(c,0x206)){return 0x497b4f;}
return 0x497b25;}
case 0x497b25:{ // CMP EDI,0x406415e3
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x406415e3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x406415e3ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x406415e3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b2b;}
case 0x497b2b:{ // JNZ 0x00497bdb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x497bdb;}
return 0x497b31;}
case 0x497b31:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497b34;}
case 0x497b34:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497b36;}
case 0x497b36:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497b37;}
case 0x497b37:{ // MOV dword ptr [ESI + 0x100],0x2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x497b41;}
case 0x497b41:{ // CALL 0x0051de60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497b46ull);
return 0x51de60;
return 0x497b46;}
case 0x497b46:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b49;}
case 0x497b49:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b4a;}
case 0x497b4a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b4b;}
case 0x497b4b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b4c;}
case 0x497b4c:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x497b4f;}
case 0x497b4f:{ // PUSH 0xf
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xfull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497b51;}
case 0x497b51:{ // CALL 0x0050d180
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497b56ull);
return 0x50d180;
return 0x497b56;}
case 0x497b56:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b59;}
case 0x497b59:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b5a;}
case 0x497b5a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b5b;}
case 0x497b5b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b5c;}
case 0x497b5c:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x497b5f;}
case 0x497b5f:{ // MOV EAX,[0x0083632c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x83632c)));
return 0x497b64;}
case 0x497b64:{ // MOV EDI,0x1
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x1ull));
return 0x497b69;}
case 0x497b69:{ // CMP EAX,EDI
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
return 0x497b6b;}
case 0x497b6b:{ // JNZ 0x00497b88
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x497b88;}
return 0x497b6d;}
case 0x497b6d:{ // MOV ECX,0x860a60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x860a60ull));
return 0x497b72;}
case 0x497b72:{ // CALL 0x00514d80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497b77ull);
return 0x514d80;
return 0x497b77;}
case 0x497b77:{ // MOV ECX,dword ptr [ESI + 0xfc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497b7d;}
case 0x497b7d:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497b7f;}
case 0x497b7f:{ // MOVSX EAX,byte ptr [EDX + 0x3]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(u<1>(c,0x17000)));
return 0x497b83;}
case 0x497b83:{ // MOV [0x007f4434],EAX
wm<4>(c,0x7f4434,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x497b88;}
case 0x497b88:{ // MOV dword ptr [ESI + 0x100],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x497b8e;}
case 0x497b8e:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b8f;}
case 0x497b8f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b90;}
case 0x497b90:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497b91;}
case 0x497b91:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x497b94;}
case 0x497b94:{ // CMP EDI,0xc98356ba
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0xc98356baull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0xc98356baull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0xc98356baull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497b9a;}
case 0x497b9a:{ // JNZ 0x00497bdb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x497bdb;}
return 0x497b9c;}
case 0x497b9c:{ // MOV EAX,dword ptr [ESI + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497ba2;}
case 0x497ba2:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497ba3;}
case 0x497ba3:{ // JZ 0x00497bbd
if(r<1>(c,0x206)){return 0x497bbd;}
return 0x497ba5;}
case 0x497ba5:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497ba6;}
case 0x497ba6:{ // JNZ 0x00497bdb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x497bdb;}
return 0x497ba8;}
case 0x497ba8:{ // MOV dword ptr [ESI + 0x100],0x3
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x497bb2;}
case 0x497bb2:{ // CALL 0x004977c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497bb7ull);
return 0x4977c0;
return 0x497bb7;}
case 0x497bb7:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bb8;}
case 0x497bb8:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bb9;}
case 0x497bb9:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bba;}
case 0x497bba:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x497bbd;}
case 0x497bbd:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497bbf;}
case 0x497bbf:{ // PUSH 0x78f7e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497bc4;}
case 0x497bc4:{ // PUSH 0x78f7c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f7c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497bc9;}
case 0x497bc9:{ // MOV dword ptr [ESI + 0x100],0x3
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x100ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3ull));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x497bd3;}
case 0x497bd3:{ // CALL 0x00537980
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497bd8ull);
return 0x537980;
return 0x497bd8;}
case 0x497bd8:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497bdb;}
case 0x497bdb:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bdc;}
case 0x497bdc:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bdd;}
case 0x497bdd:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497bde;}
case 0x497bde:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x497be1;}
case 0x497bf0:{ // SUB ESP,0x30
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497bf3;}
case 0x497bf3:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497bf4;}
case 0x497bf4:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497bf5;}
case 0x497bf5:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497bf7;}
case 0x497bf7:{ // MOV EDX,dword ptr [ESI + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xd8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497bfd;}
case 0x497bfd:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497bff;}
case 0x497bff:{ // MOV ECX,0xc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0xcull));
return 0x497c04;}
case 0x497c04:{ // LEA EDI,[ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497c08;}
case 0x497c08:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x497c0a;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x497c08;
return 0x497c0a;}
case 0x497c0a:{ // MOV EAX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497c0d;}
case 0x497c0d:{ // MOV dword ptr [ESP + 0x8],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c11;}
case 0x497c11:{ // LEA ECX,[ESI + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xd8ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497c17;}
case 0x497c17:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497c19;}
case 0x497c19:{ // LEA EAX,[ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497c1d;}
case 0x497c1d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497c1e;}
case 0x497c1e:{ // MOV dword ptr [ESP + 0x14],0x78f6a4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f6a4ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c26;}
case 0x497c26:{ // MOV dword ptr [ESP + 0x18],0x78f694
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f694ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c2e;}
case 0x497c2e:{ // MOV dword ptr [ESP + 0x20],0x78f688
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f688ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c36;}
case 0x497c36:{ // MOV dword ptr [ESP + 0x38],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c3e;}
case 0x497c3e:{ // MOV dword ptr [ESP + 0x2c],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x2cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c46;}
case 0x497c46:{ // MOV dword ptr [ESP + 0x30],0x3f800000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x3f800000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c4e;}
case 0x497c4e:{ // MOV dword ptr [ESP + 0x34],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x34ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c56;}
case 0x497c56:{ // MOV dword ptr [ESP + 0x3c],0x42380000
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x3cull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x42380000ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c5e;}
case 0x497c5e:{ // CALL dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497c61ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497c61;}
case 0x497c61:{ // MOV EDX,dword ptr [ESI + 0x11c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x11cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497c67;}
case 0x497c67:{ // LEA ECX,[ESI + 0x11c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x11cull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497c6d;}
case 0x497c6d:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497c6f;}
case 0x497c6f:{ // LEA EAX,[ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497c73;}
case 0x497c73:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497c74;}
case 0x497c74:{ // MOV dword ptr [ESP + 0x14],0x78f674
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f674ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c7c;}
case 0x497c7c:{ // MOV dword ptr [ESP + 0x18],0x78f660
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f660ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c84;}
case 0x497c84:{ // MOV dword ptr [ESP + 0x20],0x78f650
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f650ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497c8c;}
case 0x497c8c:{ // CALL dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497c8full);
return uint32_t(u<4>(c,0x5ef00));
return 0x497c8f;}
case 0x497c8f:{ // MOV EDX,dword ptr [ESI + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x160ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497c95;}
case 0x497c95:{ // LEA ECX,[ESI + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x160ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497c9b;}
case 0x497c9b:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497c9d;}
case 0x497c9d:{ // LEA EAX,[ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x497ca1;}
case 0x497ca1:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497ca2;}
case 0x497ca2:{ // MOV dword ptr [ESP + 0x14],0x78f63c
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f63cull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497caa;}
case 0x497caa:{ // MOV dword ptr [ESP + 0x18],0x78f62c
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f62cull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497cb2;}
case 0x497cb2:{ // MOV dword ptr [ESP + 0x20],0x78f61c
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x78f61cull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x497cba;}
case 0x497cba:{ // CALL dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497cbdull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497cbd;}
case 0x497cbd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497cbe;}
case 0x497cbe:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497cbf;}
case 0x497cbf:{ // ADD ESP,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497cc2;}
case 0x497cc2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497cc3;}
case 0x497cd0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497cd1;}
case 0x497cd1:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497cd3;}
case 0x497cd3:{ // MOV ECX,dword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497cd6;}
case 0x497cd6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497cd7;}
case 0x497cd7:{ // CALL 0x00511e00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497cdcull);
return 0x511e00;
return 0x497cdc;}
case 0x497cdc:{ // LEA ECX,[EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497cdf;}
case 0x497cdf:{ // LEA EDI,[ESI + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xd8ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497ce5;}
case 0x497ce5:{ // CALL 0x005b53a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ceaull);
return 0x5b53a0;
return 0x497cea;}
case 0x497cea:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497ceb;}
case 0x497ceb:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x497ced;}
case 0x497ced:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497cedull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x497cf0;}
case 0x497cf0:{ // CALL 0x004ff550
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497cf5ull);
return 0x4ff550;
return 0x497cf5;}
case 0x497cf5:{ // MOV EAX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497cf7;}
case 0x497cf7:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x497cf9;}
case 0x497cf9:{ // CALL dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497cfcull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497cfc;}
case 0x497cfc:{ // MOV ECX,dword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497cff;}
case 0x497cff:{ // CALL 0x00511e00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d04ull);
return 0x511e00;
return 0x497d04;}
case 0x497d04:{ // LEA ECX,[EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497d07;}
case 0x497d07:{ // LEA EDI,[ESI + 0x11c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x11cull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x497d0d;}
case 0x497d0d:{ // CALL 0x005b6a20
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d12ull);
return 0x5b6a20;
return 0x497d12;}
case 0x497d12:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497d13;}
case 0x497d13:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x497d15;}
case 0x497d15:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497d15ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x497d18;}
case 0x497d18:{ // CALL 0x004ff550
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d1dull);
return 0x4ff550;
return 0x497d1d;}
case 0x497d1d:{ // MOV EDX,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497d1f;}
case 0x497d1f:{ // MOV ECX,EDI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x497d21;}
case 0x497d21:{ // CALL dword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d24ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x497d24;}
case 0x497d24:{ // MOV ECX,dword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497d27;}
case 0x497d27:{ // CALL 0x00511e00
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d2cull);
return 0x511e00;
return 0x497d2c;}
case 0x497d2c:{ // LEA ECX,[EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x497d2f;}
case 0x497d2f:{ // ADD ESI,0x160
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x160ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x160ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x160ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497d35;}
case 0x497d35:{ // CALL 0x005b5490
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d3aull);
return 0x5b5490;
return 0x497d3a;}
case 0x497d3a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497d3b;}
case 0x497d3b:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497d3d;}
case 0x497d3d:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x497d3dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x497d40;}
case 0x497d40:{ // CALL 0x004ff550
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d45ull);
return 0x4ff550;
return 0x497d45;}
case 0x497d45:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497d47;}
case 0x497d47:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497d48;}
case 0x497d48:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x497d4a;}
case 0x497d4a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497d4b;}
case 0x497d4b:{ // JMP dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
return uint32_t(u<4>(c,0x17200));
return 0x497d4e;}
case 0x497d50:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497d51;}
case 0x497d51:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497d53;}
case 0x497d53:{ // MOV EAX,dword ptr [ESI + 0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x5cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497d56;}
case 0x497d56:{ // LEA EAX,[EAX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x497d59;}
case 0x497d59:{ // MOV DL,byte ptr [EAX*0x8 + 0x83aa79]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x83aa79ull,u<4>(c,0x6d00)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6f00)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x497d60;}
case 0x497d60:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497d62;}
case 0x497d62:{ // TEST DL,DL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),r<1>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497d64;}
case 0x497d64:{ // SETNZ CL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x497d67;}
case 0x497d67:{ // PUSH 0x30003d27
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x30003d27ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d6c;}
case 0x497d6c:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497d6e;}
case 0x497d6e:{ // MOV ECX,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497d71;}
case 0x497d71:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497d72;}
case 0x497d72:{ // PUSH 0x1fab5998
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x1fab5998ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d77;}
case 0x497d77:{ // PUSH 0x1a2826e1
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x1a2826e1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d7c;}
case 0x497d7c:{ // PUSH 0x5f5e3886
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5f5e3886ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d81;}
case 0x497d81:{ // PUSH 0x61cb0720
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x61cb0720ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d86;}
case 0x497d86:{ // PUSH 0x1b3a2485
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x1b3a2485ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d8b;}
case 0x497d8b:{ // PUSH 0x783fe5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x783fe5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497d90;}
case 0x497d90:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497d91;}
case 0x497d91:{ // CALL 0x00558790
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497d96ull);
return 0x558790;
return 0x497d96;}
case 0x497d96:{ // ADD ESP,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x24ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497d99;}
case 0x497d99:{ // MOV dword ptr [ESI + 0x68],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x497d9c;}
case 0x497d9c:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497d9d;}
case 0x497d9d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497d9e;}
case 0x497da0:{ // MOV ECX,dword ptr [0x00850078]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x850078)));
return 0x497da6;}
case 0x497da6:{ // ADD ECX,-0x2
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0xfffffffeull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0xfffffffeull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffffeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497da9;}
case 0x497da9:{ // CMP ECX,0xfe
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0xfeull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0xfeull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0xfeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497daf;}
case 0x497daf:{ // MOV EAX,0x1
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x1ull));
return 0x497db4;}
case 0x497db4:{ // JA 0x00497dcf
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x497dcf;}
return 0x497db6;}
case 0x497db6:{ // MOVZX ECX,byte ptr [ECX + 0x497ddc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x497ddcull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x497dbd;}
case 0x497dbd:{ // JMP dword ptr [ECX*0x4 + 0x497dd0]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x497dd0ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x497dc4;}
case 0x497dc4:{ // MOV EAX,0x1
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x1ull));
return 0x497dc9;}
case 0x497dc9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497dca;}
case 0x497dca:{ // MOV EAX,0x1f8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x1f8ull));
return 0x497dcf;}
case 0x497dcf:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497dd0;}
case 0x497ee0:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x497ee2;}
case 0x497ee2:{ // CALL 0x00497da0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ee7ull);
return 0x497da0;
return 0x497ee7;}
case 0x497ee7:{ // MOV ECX,dword ptr [EDX + 0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x5cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497eea;}
case 0x497eea:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497eec;}
case 0x497eec:{ // JL 0x00497f0d
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x497f0d;}
return 0x497eee;}
case 0x497eee:{ // CMP ECX,0x2
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
return 0x497ef1;}
case 0x497ef1:{ // JGE 0x00497f0d
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x497f0d;}
return 0x497ef3;}
case 0x497ef3:{ // IMUL ECX,ECX,0xab4c
wu<8>(c,0x76700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x76800,eval<Op::INT_SEXT,8,4>(0xab4cull));
wu<8>(c,0x76a00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x76700),u<8>(c,0x76800)));
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x0ull));
wu<4>(c,0x76d00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x76a00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x497ef9;}
case 0x497ef9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497efa;}
case 0x497efa:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497efe;}
case 0x497efe:{ // ADD ECX,0x83ad90
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x83ad90ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x83ad90ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x83ad90ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497f04;}
case 0x497f04:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f05;}
case 0x497f05:{ // CALL 0x00534850
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497f0aull);
return 0x534850;
return 0x497f0a;}
case 0x497f0a:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497f0d;}
case 0x497f0d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f0e;}
case 0x497f0e:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497f12;}
case 0x497f12:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497f14;}
case 0x497f14:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f15;}
case 0x497f15:{ // CALL 0x00534850
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497f1aull);
return 0x534850;
return 0x497f1a;}
case 0x497f1a:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497f1d;}
case 0x497f20:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497f24;}
case 0x497f24:{ // MOV EAX,dword ptr [EAX + 0x434]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x434ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497f2a;}
case 0x497f2a:{ // CMP EAX,0xa
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
return 0x497f2d;}
case 0x497f2d:{ // JA 0x00497f83
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x497f83;}
return 0x497f2f;}
case 0x497f2f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f30;}
case 0x497f30:{ // JMP dword ptr [EAX*0x4 + 0x497f88]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x497f88ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x497f37;}
case 0x497f37:{ // PUSH 0x93fdee74
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x93fdee74ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f3c;}
case 0x497f3c:{ // JMP 0x00497f5f
return 0x497f5f;
return 0x497f3e;}
case 0x497f3e:{ // PUSH 0xdcb9f861
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xdcb9f861ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f43;}
case 0x497f43:{ // JMP 0x00497f5f
return 0x497f5f;
return 0x497f45;}
case 0x497f45:{ // PUSH 0x35102edf
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x35102edfull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f4a;}
case 0x497f4a:{ // JMP 0x00497f5f
return 0x497f5f;
return 0x497f4c;}
case 0x497f4c:{ // PUSH 0xd7162cfa
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xd7162cfaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f51;}
case 0x497f51:{ // JMP 0x00497f5f
return 0x497f5f;
return 0x497f53;}
case 0x497f53:{ // PUSH 0xb46377bc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb46377bcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f58;}
case 0x497f58:{ // JMP 0x00497f5f
return 0x497f5f;
return 0x497f5a;}
case 0x497f5a:{ // PUSH 0x30da61e1
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x30da61e1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f5f;}
case 0x497f5f:{ // MOV ESI,dword ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497f62;}
case 0x497f62:{ // CALL 0x004ffa80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497f67ull);
return 0x4ffa80;
return 0x497f67;}
case 0x497f67:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497f6a;}
case 0x497f6a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f6b;}
case 0x497f6b:{ // PUSH 0x78f834
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78f834ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497f70;}
case 0x497f70:{ // CALL 0x0050b9c0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497f75ull);
return 0x50b9c0;
return 0x497f75;}
case 0x497f75:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497f78;}
case 0x497f78:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f79;}
case 0x497f79:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497f7a;}
case 0x497f7a:{ // CALL 0x00537b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497f7full);
return 0x537b80;
return 0x497f7f;}
case 0x497f7f:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497f82;}
case 0x497f82:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497f83;}
case 0x497f83:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497f86;}
case 0x497fc0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497fc1;}
case 0x497fc1:{ // MOV ESI,dword ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x497fc4;}
case 0x497fc4:{ // PUSH 0xc4f4678e
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xc4f4678eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fc9;}
case 0x497fc9:{ // CALL 0x004ffa80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497fceull);
return 0x4ffa80;
return 0x497fce;}
case 0x497fce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497fcf;}
case 0x497fcf:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497fd1;}
case 0x497fd1:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x497fd3;}
case 0x497fd3:{ // PUSH 0x1190b316
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x1190b316ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fd8;}
case 0x497fd8:{ // PUSH 0x43a743aa
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x43a743aaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fdd;}
case 0x497fdd:{ // PUSH 0x61c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x61cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fe2;}
case 0x497fe2:{ // PUSH 0xf770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xf770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fe7;}
case 0x497fe7:{ // PUSH 0x783fe5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x783fe5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x497fec;}
case 0x497fec:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x497fed;}
case 0x497fed:{ // CALL 0x00558750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x497ff2ull);
return 0x558750;
return 0x497ff2;}
case 0x497ff2:{ // ADD ESP,0x28
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x28ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x28ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x28ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x497ff5;}
case 0x497ff5:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x497ff6;}
case 0x497ff6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x497ff7;}
default:missing_instruction(c.pc);}}
}
