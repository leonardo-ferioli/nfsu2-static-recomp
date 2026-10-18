#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_77a(Cpu& c){switch(c.pc){
case 0x77a000:{ // LEA ECX,[EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x77a003;}
case 0x77a003:{ // JMP 0x004022c0
return 0x4022c0;
return 0x77a008;}
case 0x77a008:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a00a;}
case 0x77a00a:{ // PUSH 0x785bc0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785bc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a00f;}
case 0x77a00f:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a012;}
case 0x77a012:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a013;}
case 0x77a013:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a018ull);
return 0x6d7120;
return 0x77a018;}
case 0x77a018:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a01b;}
case 0x77a01b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a01c;}
case 0x77a01c:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a01e;}
case 0x77a01e:{ // PUSH 0x785bc0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785bc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a023;}
case 0x77a023:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a026;}
case 0x77a026:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a027;}
case 0x77a027:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a02cull);
return 0x6d7120;
return 0x77a02c;}
case 0x77a02c:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a02f;}
case 0x77a02f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a030;}
case 0x77a030:{ // MOV EAX,0x7e55cc
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e55ccull));
return 0x77a035;}
case 0x77a035:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a03a;}
case 0x77a040:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a042;}
case 0x77a042:{ // PUSH 0x785b84
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785b84ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a047;}
case 0x77a047:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a04a;}
case 0x77a04a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a04b;}
case 0x77a04b:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a050ull);
return 0x6d7120;
return 0x77a050;}
case 0x77a050:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a053;}
case 0x77a053:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a054;}
case 0x77a054:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a056;}
case 0x77a056:{ // PUSH 0x785b84
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785b84ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a05b;}
case 0x77a05b:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a05e;}
case 0x77a05e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a05f;}
case 0x77a05f:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a064ull);
return 0x6d7120;
return 0x77a064;}
case 0x77a064:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a067;}
case 0x77a067:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a068;}
case 0x77a068:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a06a;}
case 0x77a06a:{ // PUSH 0x785b84
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785b84ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a06f;}
case 0x77a06f:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a072;}
case 0x77a072:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a073;}
case 0x77a073:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a078ull);
return 0x6d7120;
return 0x77a078;}
case 0x77a078:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a07b;}
case 0x77a07b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a07c;}
case 0x77a07c:{ // LEA ECX,[EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x77a07f;}
case 0x77a07f:{ // JMP 0x004def30
return 0x4def30;
return 0x77a084;}
case 0x77a084:{ // MOV EAX,0x7e5680
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5680ull));
return 0x77a089;}
case 0x77a089:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a08e;}
case 0x77a090:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a093;}
case 0x77a093:{ // ADD ECX,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a096;}
case 0x77a096:{ // JMP 0x004358e0
return 0x4358e0;
return 0x77a09b;}
case 0x77a09b:{ // MOV EAX,0x7e56a4
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e56a4ull));
return 0x77a0a0;}
case 0x77a0a0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a0a5;}
case 0x77a0b0:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a0b2;}
case 0x77a0b2:{ // PUSH 0x7a08b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a08b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a0b7;}
case 0x77a0b7:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a0ba;}
case 0x77a0ba:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a0bb;}
case 0x77a0bb:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a0c0ull);
return 0x6d7120;
return 0x77a0c0;}
case 0x77a0c0:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a0c3;}
case 0x77a0c3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a0c4;}
case 0x77a0c4:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a0c6;}
case 0x77a0c6:{ // PUSH 0x7a5ec8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a5ec8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a0cb;}
case 0x77a0cb:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a0ce;}
case 0x77a0ce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a0cf;}
case 0x77a0cf:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a0d4ull);
return 0x6d7120;
return 0x77a0d4;}
case 0x77a0d4:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a0d7;}
case 0x77a0d7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a0d8;}
case 0x77a0d8:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a0da;}
case 0x77a0da:{ // PUSH 0x7873e8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7873e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a0df;}
case 0x77a0df:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a0e2;}
case 0x77a0e2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a0e3;}
case 0x77a0e3:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a0e8ull);
return 0x6d7120;
return 0x77a0e8;}
case 0x77a0e8:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a0eb;}
case 0x77a0eb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a0ec;}
case 0x77a0ec:{ // MOV EAX,0x7e56d8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e56d8ull));
return 0x77a0f1;}
case 0x77a0f1:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a0f6;}
case 0x77a100:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a103;}
case 0x77a103:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a104;}
case 0x77a104:{ // CALL 0x00575630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a109ull);
return 0x575630;
return 0x77a109;}
case 0x77a109:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a10a;}
case 0x77a10a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a10b;}
case 0x77a10b:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a10d;}
case 0x77a10d:{ // PUSH 0x7a6590
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a6590ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a112;}
case 0x77a112:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a115;}
case 0x77a115:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a116;}
case 0x77a116:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a11bull);
return 0x6d7120;
return 0x77a11b;}
case 0x77a11b:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a11e;}
case 0x77a11e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a11f;}
case 0x77a11f:{ // MOV EAX,0x7e5704
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5704ull));
return 0x77a124;}
case 0x77a124:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a129;}
case 0x77a130:{ // MOV ECX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a133;}
case 0x77a133:{ // JMP 0x00609ca0
return 0x609ca0;
return 0x77a138;}
case 0x77a138:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a13b;}
case 0x77a13b:{ // ADD ECX,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a13e;}
case 0x77a13e:{ // JMP 0x004358e0
return 0x4358e0;
return 0x77a143;}
case 0x77a143:{ // MOV EAX,0x7e5730
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5730ull));
return 0x77a148;}
case 0x77a148:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a14d;}
case 0x77a150:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a152;}
case 0x77a152:{ // PUSH 0x7a51c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a51c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a157;}
case 0x77a157:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a15a;}
case 0x77a15a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a15b;}
case 0x77a15b:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a160ull);
return 0x6d7120;
return 0x77a160;}
case 0x77a160:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a163;}
case 0x77a163:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a164;}
case 0x77a164:{ // MOV EAX,0x7e5754
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5754ull));
return 0x77a169;}
case 0x77a169:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a16e;}
case 0x77a170:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a175;}
case 0x77a175:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a177;}
case 0x77a177:{ // PUSH 0x30
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a179;}
case 0x77a179:{ // LEA EAX,[EBP + 0xfffffcf0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffcf0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x77a17f;}
case 0x77a17f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a180;}
case 0x77a180:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a185ull);
return 0x75c401;
return 0x77a185;}
case 0x77a185:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a186;}
case 0x77a186:{ // MOV EAX,0x7e5778
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5778ull));
return 0x77a18b;}
case 0x77a18b:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a190;}
case 0x77a190:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a193;}
case 0x77a193:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a194;}
case 0x77a194:{ // CALL 0x00486ef0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a199ull);
return 0x486ef0;
return 0x77a199;}
case 0x77a199:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a19a;}
case 0x77a19a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a19b;}
case 0x77a19b:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a19e;}
case 0x77a19e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a19f;}
case 0x77a19f:{ // CALL 0x00486ef0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a1a4ull);
return 0x486ef0;
return 0x77a1a4;}
case 0x77a1a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a1a5;}
case 0x77a1a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a1a6;}
case 0x77a1a6:{ // MOV EAX,0x7e57a4
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e57a4ull));
return 0x77a1ab;}
case 0x77a1ab:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a1b0;}
case 0x77a1b0:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a1b3;}
case 0x77a1b3:{ // ADD ECX,0x374
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x374ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x374ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x374ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a1b9;}
case 0x77a1b9:{ // JMP 0x004022c0
return 0x4022c0;
return 0x77a1be;}
case 0x77a1be:{ // MOV EAX,0x7e57c8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e57c8ull));
return 0x77a1c3;}
case 0x77a1c3:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a1c8;}
case 0x77a1d0:{ // MOV EAX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a1d3;}
case 0x77a1d3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a1d4;}
case 0x77a1d4:{ // CALL 0x00610660
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a1d9ull);
return 0x610660;
return 0x77a1d9;}
case 0x77a1d9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a1da;}
case 0x77a1da:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a1db;}
case 0x77a1db:{ // MOV EAX,0x7e57ec
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e57ecull));
return 0x77a1e0;}
case 0x77a1e0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a1e5;}
case 0x77a1f0:{ // MOV EAX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a1f3;}
case 0x77a1f3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a1f4;}
case 0x77a1f4:{ // CALL 0x00610640
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a1f9ull);
return 0x610640;
return 0x77a1f9;}
case 0x77a1f9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a1fa;}
case 0x77a1fa:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a1fb;}
case 0x77a1fb:{ // MOV EAX,0x7e5810
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5810ull));
return 0x77a200;}
case 0x77a200:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a205;}
case 0x77a210:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a213;}
case 0x77a213:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a216;}
case 0x77a216:{ // JMP 0x00637ed0
return 0x637ed0;
return 0x77a21b;}
case 0x77a21b:{ // MOV EAX,0x7e5834
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5834ull));
return 0x77a220;}
case 0x77a220:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a225;}
case 0x77a230:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a233;}
case 0x77a233:{ // ADD ECX,0x3f0
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x3f0ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x3f0ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3f0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a239;}
case 0x77a239:{ // JMP 0x004def30
return 0x4def30;
return 0x77a23e;}
case 0x77a23e:{ // PUSH 0x4367c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4367c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a243;}
case 0x77a243:{ // PUSH 0x1e
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a245;}
case 0x77a245:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a247;}
case 0x77a247:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a24a;}
case 0x77a24a:{ // ADD EAX,0x458
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x458ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x458ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x458ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a24f;}
case 0x77a24f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a250;}
case 0x77a250:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a255ull);
return 0x75c401;
return 0x77a255;}
case 0x77a255:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a256;}
case 0x77a256:{ // PUSH 0x61f470
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x61f470ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a25b;}
case 0x77a25b:{ // PUSH 0x1e
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a25d;}
case 0x77a25d:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a25f;}
case 0x77a25f:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a262;}
case 0x77a262:{ // ADD EAX,0x548
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x548ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x548ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x548ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a267;}
case 0x77a267:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a268;}
case 0x77a268:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a26dull);
return 0x75c401;
return 0x77a26d;}
case 0x77a26d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a26e;}
case 0x77a26e:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a271;}
case 0x77a271:{ // ADD ECX,0x1f88
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x1f88ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1f88ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f88ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a277;}
case 0x77a277:{ // JMP 0x00437ad0
return 0x437ad0;
return 0x77a27c;}
case 0x77a27c:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a281;}
case 0x77a281:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a283;}
case 0x77a283:{ // PUSH 0x68
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x68ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a285;}
case 0x77a285:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a288;}
case 0x77a288:{ // ADD EAX,0x1fbc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1fbcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1fbcull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1fbcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a28d;}
case 0x77a28d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a28e;}
case 0x77a28e:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a293ull);
return 0x75c401;
return 0x77a293;}
case 0x77a293:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a294;}
case 0x77a294:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a299;}
case 0x77a299:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a29b;}
case 0x77a29b:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a29d;}
case 0x77a29d:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a2a0;}
case 0x77a2a0:{ // ADD EAX,0x21b4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x21b4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x21b4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x21b4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a2a5;}
case 0x77a2a5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a2a6;}
case 0x77a2a6:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a2abull);
return 0x75c401;
return 0x77a2ab;}
case 0x77a2ab:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a2ac;}
case 0x77a2ac:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a2b1;}
case 0x77a2b1:{ // PUSH 0x60
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a2b3;}
case 0x77a2b3:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a2b5;}
case 0x77a2b5:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a2b8;}
case 0x77a2b8:{ // ADD EAX,0x2274
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x2274ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x2274ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2274ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a2bd;}
case 0x77a2bd:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a2be;}
case 0x77a2be:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a2c3ull);
return 0x75c401;
return 0x77a2c3;}
case 0x77a2c3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a2c4;}
case 0x77a2c4:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a2c9;}
case 0x77a2c9:{ // PUSH 0x6
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x6ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a2cb;}
case 0x77a2cb:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a2cd;}
case 0x77a2cd:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a2d0;}
case 0x77a2d0:{ // ADD EAX,0x2b74
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x2b74ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x2b74ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2b74ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a2d5;}
case 0x77a2d5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a2d6;}
case 0x77a2d6:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a2dbull);
return 0x75c401;
return 0x77a2db;}
case 0x77a2db:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a2dc;}
case 0x77a2dc:{ // MOV EAX,0x7e5890
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5890ull));
return 0x77a2e1;}
case 0x77a2e1:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a2e6;}
case 0x77a2f0:{ // MOV EAX,[0x008a4514]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8a4514)));
return 0x77a2f5;}
case 0x77a2f5:{ // AND EAX,0xfffffffe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xfffffffeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a2f8;}
case 0x77a2f8:{ // MOV [0x008a4514],EAX
wm<4>(c,0x8a4514,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77a2fd;}
case 0x77a2fd:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a2fe;}
case 0x77a2fe:{ // MOV EAX,0x7e58b4
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e58b4ull));
return 0x77a303;}
case 0x77a303:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a308;}
case 0x77a310:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a313;}
case 0x77a313:{ // ADD ECX,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a316;}
case 0x77a316:{ // JMP 0x00401800
return 0x401800;
return 0x77a31b;}
case 0x77a31b:{ // MOV EAX,0x7e58d8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e58d8ull));
return 0x77a320;}
case 0x77a320:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a325;}
case 0x77a330:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a333;}
case 0x77a333:{ // ADD ECX,0x28
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x28ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x28ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a336;}
case 0x77a336:{ // JMP 0x00634420
return 0x634420;
return 0x77a33b;}
case 0x77a33b:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a33e;}
case 0x77a33e:{ // ADD ECX,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x30ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a341;}
case 0x77a341:{ // JMP 0x00634460
return 0x634460;
return 0x77a346;}
case 0x77a346:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a349;}
case 0x77a349:{ // ADD ECX,0x38
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x38ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x38ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a34c;}
case 0x77a34c:{ // JMP 0x006344a0
return 0x6344a0;
return 0x77a351;}
case 0x77a351:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a354;}
case 0x77a354:{ // ADD ECX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a357;}
case 0x77a357:{ // JMP 0x004def30
return 0x4def30;
return 0x77a35c;}
case 0x77a35c:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a35f;}
case 0x77a35f:{ // ADD ECX,0x48
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x48ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x48ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a362;}
case 0x77a362:{ // JMP 0x004def30
return 0x4def30;
return 0x77a367;}
case 0x77a367:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a36a;}
case 0x77a36a:{ // ADD ECX,0x50
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x50ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x50ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a36d;}
case 0x77a36d:{ // JMP 0x004def30
return 0x4def30;
return 0x77a372;}
case 0x77a372:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a375;}
case 0x77a375:{ // ADD ECX,0x58
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x58ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x58ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a378;}
case 0x77a378:{ // JMP 0x006344e0
return 0x6344e0;
return 0x77a37d;}
case 0x77a37d:{ // MOV EAX,0x7e592c
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e592cull));
return 0x77a382;}
case 0x77a382:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a387;}
case 0x77a390:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a393;}
case 0x77a393:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a394;}
case 0x77a394:{ // CALL 0x00486ef0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a399ull);
return 0x486ef0;
return 0x77a399;}
case 0x77a399:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a39a;}
case 0x77a39a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a39b;}
case 0x77a39b:{ // MOV EAX,0x7e5950
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5950ull));
return 0x77a3a0;}
case 0x77a3a0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a3a5;}
case 0x77a3b0:{ // MOV ECX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a3b3;}
case 0x77a3b3:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a3b6;}
case 0x77a3b6:{ // JMP 0x00637ed0
return 0x637ed0;
return 0x77a3bb;}
case 0x77a3bb:{ // MOV EAX,0x7e5974
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5974ull));
return 0x77a3c0;}
case 0x77a3c0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a3c5;}
case 0x77a3d0:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a3d3;}
case 0x77a3d3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a3d4;}
case 0x77a3d4:{ // CALL 0x0060baf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a3d9ull);
return 0x60baf0;
return 0x77a3d9;}
case 0x77a3d9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a3da;}
case 0x77a3da:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a3db;}
case 0x77a3db:{ // MOV EAX,0x7e5998
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5998ull));
return 0x77a3e0;}
case 0x77a3e0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a3e5;}
case 0x77a3f0:{ // MOV ECX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a3f6;}
case 0x77a3f6:{ // ADD ECX,0x3f0
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x3f0ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x3f0ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3f0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a3fc;}
case 0x77a3fc:{ // JMP 0x004def30
return 0x4def30;
return 0x77a401;}
case 0x77a401:{ // PUSH 0x4367c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4367c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a406;}
case 0x77a406:{ // PUSH 0x1e
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a408;}
case 0x77a408:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a40a;}
case 0x77a40a:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a410;}
case 0x77a410:{ // ADD EAX,0x458
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x458ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x458ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x458ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a415;}
case 0x77a415:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a416;}
case 0x77a416:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a41bull);
return 0x75c401;
return 0x77a41b;}
case 0x77a41b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a41c;}
case 0x77a41c:{ // PUSH 0x61f470
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x61f470ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a421;}
case 0x77a421:{ // PUSH 0x1e
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1eull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a423;}
case 0x77a423:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a425;}
case 0x77a425:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a42b;}
case 0x77a42b:{ // ADD EAX,0x548
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x548ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x548ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x548ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a430;}
case 0x77a430:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a431;}
case 0x77a431:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a436ull);
return 0x75c401;
return 0x77a436;}
case 0x77a436:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a437;}
case 0x77a437:{ // MOV ECX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a43d;}
case 0x77a43d:{ // ADD ECX,0x1f88
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x1f88ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1f88ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f88ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a443;}
case 0x77a443:{ // JMP 0x00437ad0
return 0x437ad0;
return 0x77a448;}
case 0x77a448:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a44d;}
case 0x77a44d:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a44f;}
case 0x77a44f:{ // PUSH 0x68
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x68ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a451;}
case 0x77a451:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a457;}
case 0x77a457:{ // ADD EAX,0x1fbc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1fbcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1fbcull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1fbcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a45c;}
case 0x77a45c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a45d;}
case 0x77a45d:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a462ull);
return 0x75c401;
return 0x77a462;}
case 0x77a462:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a463;}
case 0x77a463:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a468;}
case 0x77a468:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a46a;}
case 0x77a46a:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a46c;}
case 0x77a46c:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a472;}
case 0x77a472:{ // ADD EAX,0x21b4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x21b4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x21b4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x21b4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a477;}
case 0x77a477:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a478;}
case 0x77a478:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a47dull);
return 0x75c401;
return 0x77a47d;}
case 0x77a47d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a47e;}
case 0x77a47e:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a483;}
case 0x77a483:{ // PUSH 0x60
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a485;}
case 0x77a485:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a487;}
case 0x77a487:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a48d;}
case 0x77a48d:{ // ADD EAX,0x2274
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x2274ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x2274ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2274ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a492;}
case 0x77a492:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a493;}
case 0x77a493:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a498ull);
return 0x75c401;
return 0x77a498;}
case 0x77a498:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a499;}
case 0x77a499:{ // PUSH 0x4903b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4903b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a49e;}
case 0x77a49e:{ // PUSH 0x6
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x6ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a4a0;}
case 0x77a4a0:{ // PUSH 0x18
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a4a2;}
case 0x77a4a2:{ // MOV EAX,dword ptr [EBP + 0xfffffdb4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a4a8;}
case 0x77a4a8:{ // ADD EAX,0x2b74
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x2b74ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x2b74ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2b74ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a4ad;}
case 0x77a4ad:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a4ae;}
case 0x77a4ae:{ // CALL 0x0075c401
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a4b3ull);
return 0x75c401;
return 0x77a4b3;}
case 0x77a4b3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a4b4;}
case 0x77a4b4:{ // MOV EAX,0x7e59f4
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e59f4ull));
return 0x77a4b9;}
case 0x77a4b9:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a4be;}
case 0x77a4c0:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a4c3;}
case 0x77a4c3:{ // ADD ECX,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0xcull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a4c6;}
case 0x77a4c6:{ // JMP 0x0063a320
return 0x63a320;
return 0x77a4cb;}
case 0x77a4cb:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a4ce;}
case 0x77a4ce:{ // ADD ECX,0x100
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x100ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x100ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x100ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a4d4;}
case 0x77a4d4:{ // JMP 0x00610c40
return 0x610c40;
return 0x77a4d9;}
case 0x77a4d9:{ // MOV EAX,0x7e5a20
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5a20ull));
return 0x77a4de;}
case 0x77a4de:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a4e3;}
case 0x77a4f0:{ // MOV ECX,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a4f3;}
case 0x77a4f3:{ // ADD ECX,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a4f6;}
case 0x77a4f6:{ // JMP 0x0063a510
return 0x63a510;
return 0x77a4fb;}
case 0x77a4fb:{ // MOV EAX,0x7e5a44
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5a44ull));
return 0x77a500;}
case 0x77a500:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a505;}
case 0x77a510:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a512;}
case 0x77a512:{ // PUSH 0x7a8d54
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a8d54ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a517;}
case 0x77a517:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a51a;}
case 0x77a51a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a51b;}
case 0x77a51b:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a520ull);
return 0x6d7120;
return 0x77a520;}
case 0x77a520:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a523;}
case 0x77a523:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a524;}
case 0x77a524:{ // MOV EAX,0x7e5a68
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5a68ull));
return 0x77a529;}
case 0x77a529:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a52e;}
case 0x77a530:{ // MOV EAX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a533;}
case 0x77a533:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a534;}
case 0x77a534:{ // CALL 0x00575630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a539ull);
return 0x575630;
return 0x77a539;}
case 0x77a539:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a53a;}
case 0x77a53a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a53b;}
case 0x77a53b:{ // MOV EAX,0x7e5a8c
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5a8cull));
return 0x77a540;}
case 0x77a540:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a545;}
case 0x77a550:{ // MOV EAX,dword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a556;}
case 0x77a556:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a557;}
case 0x77a557:{ // CALL 0x006106b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a55cull);
return 0x6106b0;
return 0x77a55c;}
case 0x77a55c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a55d;}
case 0x77a55d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a55e;}
case 0x77a55e:{ // MOV EAX,0x7e5ab0
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5ab0ull));
return 0x77a563;}
case 0x77a563:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a568;}
case 0x77a570:{ // MOV ECX,dword ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a573;}
case 0x77a573:{ // ADD ECX,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a576;}
case 0x77a576:{ // JMP 0x0063a510
return 0x63a510;
return 0x77a57b;}
case 0x77a57b:{ // MOV EAX,0x7e5adc
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5adcull));
return 0x77a580;}
case 0x77a580:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a585;}
case 0x77a590:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a593;}
case 0x77a593:{ // ADD ECX,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a596;}
case 0x77a596:{ // JMP 0x0063a510
return 0x63a510;
return 0x77a59b;}
case 0x77a59b:{ // MOV EAX,0x7e5b00
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5b00ull));
return 0x77a5a0;}
case 0x77a5a0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a5a5;}
case 0x77a5b0:{ // MOV ECX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a5b3;}
case 0x77a5b3:{ // ADD ECX,0x24
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x24ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a5b6;}
case 0x77a5b6:{ // JMP 0x0063a510
return 0x63a510;
return 0x77a5bb;}
case 0x77a5bb:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a5bd;}
case 0x77a5bd:{ // PUSH 0x7a6498
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a6498ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a5c2;}
case 0x77a5c2:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a5c5;}
case 0x77a5c5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77a5c6;}
case 0x77a5c6:{ // CALL 0x006d7120
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a5cbull);
return 0x6d7120;
return 0x77a5cb;}
case 0x77a5cb:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a5ce;}
case 0x77a5ce:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a5cf;}
case 0x77a5cf:{ // MOV EAX,0x7e5b2c
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5b2cull));
return 0x77a5d4;}
case 0x77a5d4:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a5d9;}
case 0x77a5e0:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x77a5e3;}
case 0x77a5e3:{ // ADD ECX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a5e6;}
case 0x77a5e6:{ // JMP 0x00401800
return 0x401800;
return 0x77a5eb;}
case 0x77a5eb:{ // MOV EAX,0x7e5b50
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5b50ull));
return 0x77a5f0;}
case 0x77a5f0:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a5f5;}
case 0x77a5f5:{ // MOV EAX,0x7e5ba0
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5ba0ull));
return 0x77a5fa;}
case 0x77a5fa:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a5ff;}
case 0x77a5ff:{ // LEA ECX,[EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x77a602;}
case 0x77a602:{ // JMP 0x005cf000
return 0x5cf000;
return 0x77a607;}
case 0x77a607:{ // MOV EAX,0x7e5c00
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7e5c00ull));
return 0x77a60c;}
case 0x77a60c:{ // JMP 0x0075bfd2
return 0x75bfd2;
return 0x77a611;}
case 0x77a620:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a620ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x784250),4,0x0ull,4,10));
return 0x77a626;}
case 0x77a626:{ // FDIV float ptr [0x00783490]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a626ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x783490),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77a62c;}
case 0x77a62c:{ // FSTP float ptr [0x0081e7fc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a62cull));
wm<4>(c,0x81e7fc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77a632;}
case 0x77a632:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a633;}
case 0x77a640:{ // PUSH 0x5
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a642;}
case 0x77a642:{ // PUSH 0x7e9bc8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9bc8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a647;}
case 0x77a647:{ // MOV ECX,0x81e378
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e378ull));
return 0x77a64c;}
case 0x77a64c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a651ull);
return 0x576770;
return 0x77a651;}
case 0x77a651:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a652;}
case 0x77a660:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a662;}
case 0x77a662:{ // PUSH 0x7e9bf0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9bf0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a667;}
case 0x77a667:{ // MOV ECX,0x81e7dc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e7dcull));
return 0x77a66c;}
case 0x77a66c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a671ull);
return 0x576770;
return 0x77a671;}
case 0x77a671:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a672;}
case 0x77a680:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a682;}
case 0x77a682:{ // PUSH 0x7e9c00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9c00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a687;}
case 0x77a687:{ // MOV ECX,0x827a10
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827a10ull));
return 0x77a68c;}
case 0x77a68c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a691ull);
return 0x576770;
return 0x77a691;}
case 0x77a691:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a692;}
case 0x77a6a0:{ // MOV ECX,0x81e5b8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e5b8ull));
return 0x77a6a5;}
case 0x77a6a5:{ // CALL 0x00414cf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a6aaull);
return 0x414cf0;
return 0x77a6aa;}
case 0x77a6aa:{ // PUSH 0x781980
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781980ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a6af;}
case 0x77a6af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a6b4ull);
return 0x75c5ed;
return 0x77a6b4;}
case 0x77a6b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a6b5;}
case 0x77a6b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a6b6;}
case 0x77a6c0:{ // MOV ECX,0x81e388
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e388ull));
return 0x77a6c5;}
case 0x77a6c5:{ // CALL 0x00414cf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a6caull);
return 0x414cf0;
return 0x77a6ca;}
case 0x77a6ca:{ // PUSH 0x781990
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781990ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a6cf;}
case 0x77a6cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a6d4ull);
return 0x75c5ed;
return 0x77a6d4;}
case 0x77a6d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a6d5;}
case 0x77a6d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a6d6;}
case 0x77a6e0:{ // PUSH 0x781940
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781940ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a6e5;}
case 0x77a6e5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a6eaull);
return 0x75c5ed;
return 0x77a6ea;}
case 0x77a6ea:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a6eb;}
case 0x77a6eb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a6ec;}
case 0x77a6f0:{ // FLD float ptr [0x0081cb84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a6f0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x81cb84),4,0x0ull,4,10));
return 0x77a6f6;}
case 0x77a6f6:{ // FMUL float ptr [0x0081cb84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a6f6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x81cb84),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77a6fc;}
case 0x77a6fc:{ // FSTP float ptr [0x00827a20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a6fcull));
wm<4>(c,0x827a20,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77a702;}
case 0x77a702:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a703;}
case 0x77a710:{ // PUSH 0xb
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xbull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a712;}
case 0x77a712:{ // PUSH 0x7e9c10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9c10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a717;}
case 0x77a717:{ // MOV ECX,0x81e380
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e380ull));
return 0x77a71c;}
case 0x77a71c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a721ull);
return 0x576770;
return 0x77a721;}
case 0x77a721:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a722;}
case 0x77a730:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a732;}
case 0x77a732:{ // PUSH 0x7e9c68
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9c68ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a737;}
case 0x77a737:{ // MOV ECX,0x81e370
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e370ull));
return 0x77a73c;}
case 0x77a73c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a741ull);
return 0x576770;
return 0x77a741;}
case 0x77a741:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a742;}
case 0x77a750:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a752;}
case 0x77a752:{ // PUSH 0x7e9c78
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9c78ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a757;}
case 0x77a757:{ // MOV ECX,0x827a18
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827a18ull));
return 0x77a75c;}
case 0x77a75c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a761ull);
return 0x576770;
return 0x77a761;}
case 0x77a761:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a762;}
case 0x77a770:{ // PUSH 0x9
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x9ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a772;}
case 0x77a772:{ // PUSH 0x7e9cc8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9cc8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a777;}
case 0x77a777:{ // MOV ECX,0x81e7f4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e7f4ull));
return 0x77a77c;}
case 0x77a77c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a781ull);
return 0x576770;
return 0x77a781;}
case 0x77a781:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a782;}
case 0x77a790:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a792;}
case 0x77a792:{ // PUSH 0x7e9d24
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9d24ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a797;}
case 0x77a797:{ // MOV ECX,0x81e800
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e800ull));
return 0x77a79c;}
case 0x77a79c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a7a1ull);
return 0x576770;
return 0x77a7a1;}
case 0x77a7a1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a7a2;}
case 0x77a7b0:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a7b2;}
case 0x77a7b2:{ // PUSH 0x7e9d34
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9d34ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a7b7;}
case 0x77a7b7:{ // MOV ECX,0x81e7e4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e7e4ull));
return 0x77a7bc;}
case 0x77a7bc:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a7c1ull);
return 0x576770;
return 0x77a7c1;}
case 0x77a7c1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a7c2;}
case 0x77a7d0:{ // MOV dword ptr [0x0081e5ac],0x3dd67750
wm<4>(c,0x81e5ac,eval<Op::COPY,4,4>(0x3dd67750ull));
return 0x77a7da;}
case 0x77a7da:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a7db;}
case 0x77a7e0:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77a7e2;}
case 0x77a7e2:{ // PUSH 0x7e9f58
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7e9f58ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a7e7;}
case 0x77a7e7:{ // MOV ECX,0x81e5b0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e5b0ull));
return 0x77a7ec;}
case 0x77a7ec:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a7f1ull);
return 0x576770;
return 0x77a7f1;}
case 0x77a7f1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a7f2;}
case 0x77a800:{ // MOV ECX,0x81e7ec
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e7ecull));
return 0x77a805;}
case 0x77a805:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a80aull);
return 0x598750;
return 0x77a80a;}
case 0x77a80a:{ // PUSH 0x781960
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781960ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a80f;}
case 0x77a80f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a814ull);
return 0x75c5ed;
return 0x77a814;}
case 0x77a814:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a815;}
case 0x77a815:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a816;}
case 0x77a820:{ // MOV EAX,[0x00783c30]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x783c30)));
return 0x77a825;}
case 0x77a825:{ // MOV EDX,dword ptr [0x00783c28]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x783c28)));
return 0x77a82b;}
case 0x77a82b:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77a82d;}
case 0x77a82d:{ // MOV [0x007ea088],EAX
wm<4>(c,0x7ea088,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77a832;}
case 0x77a832:{ // MOV dword ptr [0x007ea08c],ECX
wm<4>(c,0x7ea08c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77a838;}
case 0x77a838:{ // MOV ECX,dword ptr [0x00783c2c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x783c2c)));
return 0x77a83e;}
case 0x77a83e:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77a840;}
case 0x77a840:{ // MOV dword ptr [0x007ea0c0],EDX
wm<4>(c,0x7ea0c0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77a846;}
case 0x77a846:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77a848;}
case 0x77a848:{ // MOV [0x007ea0c4],EAX
wm<4>(c,0x7ea0c4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77a84d;}
case 0x77a84d:{ // MOV dword ptr [0x007ea0c8],ECX
wm<4>(c,0x7ea0c8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77a853;}
case 0x77a853:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77a855;}
case 0x77a855:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77a857;}
case 0x77a857:{ // MOV [0x007ea0e8],AL
wm<1>(c,0x7ea0e8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a85c;}
case 0x77a85c:{ // MOV [0x007ea0e9],AL
wm<1>(c,0x7ea0e9,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a861;}
case 0x77a861:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77a863;}
case 0x77a863:{ // MOV byte ptr [0x007ea0ee],CL
wm<1>(c,0x7ea0ee,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a869;}
case 0x77a869:{ // MOV byte ptr [0x007ea0ef],CL
wm<1>(c,0x7ea0ef,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a86f;}
case 0x77a86f:{ // MOV byte ptr [0x007ea0f0],CL
wm<1>(c,0x7ea0f0,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a875;}
case 0x77a875:{ // MOV byte ptr [0x007ea0f1],CL
wm<1>(c,0x7ea0f1,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a87b;}
case 0x77a87b:{ // MOV byte ptr [0x007ea0f2],CL
wm<1>(c,0x7ea0f2,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a881;}
case 0x77a881:{ // MOV byte ptr [0x007ea0f3],CL
wm<1>(c,0x7ea0f3,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a887;}
case 0x77a887:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77a889;}
case 0x77a889:{ // MOV dword ptr [0x007ea090],0x0
wm<4>(c,0x7ea090,eval<Op::COPY,4,4>(0x0ull));
return 0x77a893;}
case 0x77a893:{ // MOV dword ptr [0x007ea094],0x41200000
wm<4>(c,0x7ea094,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77a89d;}
case 0x77a89d:{ // MOV dword ptr [0x007ea098],0x40000000
wm<4>(c,0x7ea098,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77a8a7;}
case 0x77a8a7:{ // MOV dword ptr [0x007ea09c],0x0
wm<4>(c,0x7ea09c,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8b1;}
case 0x77a8b1:{ // MOV dword ptr [0x007ea0a0],0x41200000
wm<4>(c,0x7ea0a0,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77a8bb;}
case 0x77a8bb:{ // MOV dword ptr [0x007ea0a4],0x40000000
wm<4>(c,0x7ea0a4,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77a8c5;}
case 0x77a8c5:{ // MOV dword ptr [0x007ea0a8],0x0
wm<4>(c,0x7ea0a8,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8cf;}
case 0x77a8cf:{ // MOV dword ptr [0x007ea0ac],0x0
wm<4>(c,0x7ea0ac,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8d9;}
case 0x77a8d9:{ // MOV dword ptr [0x007ea0b0],0x0
wm<4>(c,0x7ea0b0,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8e3;}
case 0x77a8e3:{ // MOV dword ptr [0x007ea0b4],0x0
wm<4>(c,0x7ea0b4,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8ed;}
case 0x77a8ed:{ // MOV dword ptr [0x007ea0b8],0x0
wm<4>(c,0x7ea0b8,eval<Op::COPY,4,4>(0x0ull));
return 0x77a8f7;}
case 0x77a8f7:{ // MOV dword ptr [0x007ea0bc],0x0
wm<4>(c,0x7ea0bc,eval<Op::COPY,4,4>(0x0ull));
return 0x77a901;}
case 0x77a901:{ // MOV dword ptr [0x007ea0cc],EDX
wm<4>(c,0x7ea0cc,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77a907;}
case 0x77a907:{ // MOV dword ptr [0x007ea0d0],0x0
wm<4>(c,0x7ea0d0,eval<Op::COPY,4,4>(0x0ull));
return 0x77a911;}
case 0x77a911:{ // MOV dword ptr [0x007ea0d4],0x0
wm<4>(c,0x7ea0d4,eval<Op::COPY,4,4>(0x0ull));
return 0x77a91b;}
case 0x77a91b:{ // MOV dword ptr [0x007ea0d8],0x0
wm<4>(c,0x7ea0d8,eval<Op::COPY,4,4>(0x0ull));
return 0x77a925;}
case 0x77a925:{ // MOV dword ptr [0x007ea0dc],0x0
wm<4>(c,0x7ea0dc,eval<Op::COPY,4,4>(0x0ull));
return 0x77a92f;}
case 0x77a92f:{ // MOV dword ptr [0x007ea0e0],0x0
wm<4>(c,0x7ea0e0,eval<Op::COPY,4,4>(0x0ull));
return 0x77a939;}
case 0x77a939:{ // MOV dword ptr [0x007ea0e4],0x0
wm<4>(c,0x7ea0e4,eval<Op::COPY,4,4>(0x0ull));
return 0x77a943;}
case 0x77a943:{ // MOV [0x007ea0ea],AL
wm<1>(c,0x7ea0ea,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a948;}
case 0x77a948:{ // MOV [0x007ea0eb],AL
wm<1>(c,0x7ea0eb,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a94d;}
case 0x77a94d:{ // MOV [0x007ea0ec],AL
wm<1>(c,0x7ea0ec,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a952;}
case 0x77a952:{ // MOV [0x007ea0ed],AL
wm<1>(c,0x7ea0ed,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a957;}
case 0x77a957:{ // MOV [0x007ea0f4],AL
wm<1>(c,0x7ea0f4,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a95c;}
case 0x77a95c:{ // MOV byte ptr [0x007ea0f5],CL
wm<1>(c,0x7ea0f5,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a962;}
case 0x77a962:{ // MOV [0x007ea0f6],AL
wm<1>(c,0x7ea0f6,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a967;}
case 0x77a967:{ // MOV byte ptr [0x007ea0f7],CL
wm<1>(c,0x7ea0f7,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77a96d;}
case 0x77a96d:{ // MOV [0x007ea0f8],AL
wm<1>(c,0x7ea0f8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a972;}
case 0x77a972:{ // MOV [0x007ea0f9],AL
wm<1>(c,0x7ea0f9,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77a977;}
case 0x77a977:{ // MOV [0x007ea0fc],EAX
wm<4>(c,0x7ea0fc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77a97c;}
case 0x77a97c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a97d;}
case 0x77a980:{ // PUSH 0x781950
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781950ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a985;}
case 0x77a985:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a98aull);
return 0x75c5ed;
return 0x77a98a;}
case 0x77a98a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a98b;}
case 0x77a98b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a98c;}
case 0x77a990:{ // MOV ECX,0x81e810
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81e810ull));
return 0x77a995;}
case 0x77a995:{ // CALL 0x0041aa60
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a99aull);
return 0x41aa60;
return 0x77a99a;}
case 0x77a99a:{ // PUSH 0x7819a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7819a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a99f;}
case 0x77a99f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a9a4ull);
return 0x75c5ed;
return 0x77a9a4;}
case 0x77a9a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a9a5;}
case 0x77a9a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a9a6;}
case 0x77a9b0:{ // MOV ECX,0x81cbc0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x81cbc0ull));
return 0x77a9b5;}
case 0x77a9b5:{ // CALL 0x004130a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a9baull);
return 0x4130a0;
return 0x77a9ba;}
case 0x77a9ba:{ // PUSH 0x781970
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781970ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77a9bf;}
case 0x77a9bf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77a9c4ull);
return 0x75c5ed;
return 0x77a9c4;}
case 0x77a9c4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77a9c5;}
case 0x77a9c5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a9c6;}
case 0x77a9d0:{ // FLD float ptr [0x00785bc8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9d0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x785bc8),4,0x0ull,4,10));
return 0x77a9d6;}
case 0x77a9d6:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9d6ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77a9d8;}
case 0x77a9d8:{ // FSTP float ptr [0x00827cc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9d8ull));
wm<4>(c,0x827cc4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77a9de;}
case 0x77a9de:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a9df;}
case 0x77a9e0:{ // FLD float ptr [0x00785bc8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9e0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x785bc8),4,0x0ull,4,10));
return 0x77a9e6;}
case 0x77a9e6:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9e6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77a9ec;}
case 0x77a9ec:{ // FSTP float ptr [0x00827cc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77a9ecull));
wm<4>(c,0x827cc0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77a9f2;}
case 0x77a9f2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77a9f3;}
case 0x77aa00:{ // FLD double ptr [0x00785bd0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa00ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x785bd0),8,0x0ull,4,10));
return 0x77aa06;}
case 0x77aa06:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa06ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77aa08;}
case 0x77aa08:{ // FSTP double ptr [0x00827cb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa08ull));
wm<8>(c,0x827cb8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77aa0e;}
case 0x77aa0e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa0f;}
case 0x77aa10:{ // FLD double ptr [0x00785bd0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa10ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x785bd0),8,0x0ull,4,10));
return 0x77aa16;}
case 0x77aa16:{ // FMUL double ptr [0x007864e0]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7864e0),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa16ull));
return 0x77aa1c;}
case 0x77aa1c:{ // FSTP double ptr [0x00827cb0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa1cull));
wm<8>(c,0x827cb0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77aa22;}
case 0x77aa22:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa23;}
case 0x77aa30:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa30ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x784250),4,0x0ull,4,10));
return 0x77aa36;}
case 0x77aa36:{ // FDIV float ptr [0x00785be4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa36ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x785be4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77aa3c;}
case 0x77aa3c:{ // FSTP float ptr [0x00827da0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77aa3cull));
wm<4>(c,0x827da0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77aa42;}
case 0x77aa42:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa43;}
case 0x77aa50:{ // PUSH 0x781a30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aa55;}
case 0x77aa55:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aa5aull);
return 0x75c5ed;
return 0x77aa5a;}
case 0x77aa5a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77aa5b;}
case 0x77aa5b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa5c;}
case 0x77aa60:{ // PUSH 0x7864e8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7864e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aa65;}
case 0x77aa65:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aa6aull);
return 0x43db50;
return 0x77aa6a;}
case 0x77aa6a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aa6d;}
case 0x77aa6d:{ // MOV [0x00827d34],EAX
wm<4>(c,0x827d34,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aa72;}
case 0x77aa72:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa73;}
case 0x77aa80:{ // PUSH 0x7864fc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7864fcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aa85;}
case 0x77aa85:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aa8aull);
return 0x43db50;
return 0x77aa8a;}
case 0x77aa8a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aa8d;}
case 0x77aa8d:{ // MOV [0x00827c5c],EAX
wm<4>(c,0x827c5c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aa92;}
case 0x77aa92:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aa93;}
case 0x77aaa0:{ // PUSH 0x786510
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786510ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aaa5;}
case 0x77aaa5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aaaaull);
return 0x43db50;
return 0x77aaaa;}
case 0x77aaaa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aaad;}
case 0x77aaad:{ // MOV [0x00827c68],EAX
wm<4>(c,0x827c68,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aab2;}
case 0x77aab2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aab3;}
case 0x77aac0:{ // PUSH 0x786520
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786520ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aac5;}
case 0x77aac5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aacaull);
return 0x43db50;
return 0x77aaca;}
case 0x77aaca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aacd;}
case 0x77aacd:{ // MOV [0x00827c98],EAX
wm<4>(c,0x827c98,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aad2;}
case 0x77aad2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aad3;}
case 0x77aae0:{ // PUSH 0x786530
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786530ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aae5;}
case 0x77aae5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aaeaull);
return 0x43db50;
return 0x77aaea;}
case 0x77aaea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aaed;}
case 0x77aaed:{ // MOV [0x00827dac],EAX
wm<4>(c,0x827dac,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aaf2;}
case 0x77aaf2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aaf3;}
case 0x77ab00:{ // PUSH 0x786548
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786548ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ab05;}
case 0x77ab05:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab0aull);
return 0x43db50;
return 0x77ab0a;}
case 0x77ab0a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ab0d;}
case 0x77ab0d:{ // MOV [0x00827c7c],EAX
wm<4>(c,0x827c7c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ab12;}
case 0x77ab12:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ab13;}
case 0x77ab20:{ // PUSH 0x786560
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786560ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ab25;}
case 0x77ab25:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab2aull);
return 0x43db50;
return 0x77ab2a;}
case 0x77ab2a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ab2d;}
case 0x77ab2d:{ // MOV [0x00827f40],EAX
wm<4>(c,0x827f40,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ab32;}
case 0x77ab32:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ab33;}
case 0x77ab40:{ // PUSH 0x78657c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78657cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ab45;}
case 0x77ab45:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab4aull);
return 0x43db50;
return 0x77ab4a;}
case 0x77ab4a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ab4d;}
case 0x77ab4d:{ // MOV [0x00827c8c],EAX
wm<4>(c,0x827c8c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ab52;}
case 0x77ab52:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ab53;}
case 0x77ab60:{ // PUSH 0x786598
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786598ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ab65;}
case 0x77ab65:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab6aull);
return 0x43db50;
return 0x77ab6a;}
case 0x77ab6a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ab6d;}
case 0x77ab6d:{ // MOV [0x00827db0],EAX
wm<4>(c,0x827db0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ab72;}
case 0x77ab72:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ab73;}
case 0x77ab80:{ // MOV ECX,0x827e88
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827e88ull));
return 0x77ab85;}
case 0x77ab85:{ // CALL 0x004301d0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab8aull);
return 0x4301d0;
return 0x77ab8a;}
case 0x77ab8a:{ // PUSH 0x781a40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ab8f;}
case 0x77ab8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ab94ull);
return 0x75c5ed;
return 0x77ab94;}
case 0x77ab94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ab95;}
case 0x77ab95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ab96;}
case 0x77aba0:{ // MOV ECX,0x827c3c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827c3cull));
return 0x77aba5;}
case 0x77aba5:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77abaaull);
return 0x57bcd0;
return 0x77abaa;}
case 0x77abaa:{ // PUSH 0x781b10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77abaf;}
case 0x77abaf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77abb4ull);
return 0x75c5ed;
return 0x77abb4;}
case 0x77abb4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77abb5;}
case 0x77abb5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77abb6;}
case 0x77abc0:{ // MOV ECX,0x827d98
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827d98ull));
return 0x77abc5;}
case 0x77abc5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77abcaull);
return 0x598750;
return 0x77abca;}
case 0x77abca:{ // PUSH 0x781b30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77abcf;}
case 0x77abcf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77abd4ull);
return 0x75c5ed;
return 0x77abd4;}
case 0x77abd4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77abd5;}
case 0x77abd5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77abd6;}
case 0x77abe0:{ // MOV EAX,[0x007faaa8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7faaa8)));
return 0x77abe5;}
case 0x77abe5:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77abe7;}
case 0x77abe7:{ // SETNZ AL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x77abea;}
case 0x77abea:{ // MOV [0x00827c38],AL
wm<1>(c,0x827c38,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77abef;}
case 0x77abef:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77abf0;}
case 0x77abf0:{ // MOV ECX,0x827b88
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827b88ull));
return 0x77abf5;}
case 0x77abf5:{ // CALL 0x00435b80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77abfaull);
return 0x435b80;
return 0x77abfa;}
case 0x77abfa:{ // PUSH 0x781b60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77abff;}
case 0x77abff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ac04ull);
return 0x75c5ed;
return 0x77ac04;}
case 0x77ac04:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ac05;}
case 0x77ac05:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ac06;}
case 0x77ac10:{ // MOV ECX,0x827c60
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827c60ull));
return 0x77ac15;}
case 0x77ac15:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ac1aull);
return 0x598750;
return 0x77ac1a;}
case 0x77ac1a:{ // PUSH 0x781b20
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ac1f;}
case 0x77ac1f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ac24ull);
return 0x75c5ed;
return 0x77ac24;}
case 0x77ac24:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ac25;}
case 0x77ac25:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ac26;}
case 0x77ac30:{ // MOV EAX,[0x00785bf0]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x785bf0)));
return 0x77ac35;}
case 0x77ac35:{ // MOV EDX,dword ptr [0x00785be8]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x785be8)));
return 0x77ac3b;}
case 0x77ac3b:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ac3d;}
case 0x77ac3d:{ // MOV [0x007ea4f0],EAX
wm<4>(c,0x7ea4f0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ac42;}
case 0x77ac42:{ // MOV dword ptr [0x007ea4f4],ECX
wm<4>(c,0x7ea4f4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77ac48;}
case 0x77ac48:{ // MOV ECX,dword ptr [0x00785bec]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x785bec)));
return 0x77ac4e;}
case 0x77ac4e:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77ac50;}
case 0x77ac50:{ // MOV dword ptr [0x007ea528],EDX
wm<4>(c,0x7ea528,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77ac56;}
case 0x77ac56:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77ac58;}
case 0x77ac58:{ // MOV [0x007ea52c],EAX
wm<4>(c,0x7ea52c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ac5d;}
case 0x77ac5d:{ // MOV dword ptr [0x007ea530],ECX
wm<4>(c,0x7ea530,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77ac63;}
case 0x77ac63:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77ac65;}
case 0x77ac65:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77ac67;}
case 0x77ac67:{ // MOV [0x007ea550],AL
wm<1>(c,0x7ea550,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ac6c;}
case 0x77ac6c:{ // MOV [0x007ea551],AL
wm<1>(c,0x7ea551,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ac71;}
case 0x77ac71:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ac73;}
case 0x77ac73:{ // MOV byte ptr [0x007ea556],CL
wm<1>(c,0x7ea556,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac79;}
case 0x77ac79:{ // MOV byte ptr [0x007ea557],CL
wm<1>(c,0x7ea557,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac7f;}
case 0x77ac7f:{ // MOV byte ptr [0x007ea558],CL
wm<1>(c,0x7ea558,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac85;}
case 0x77ac85:{ // MOV byte ptr [0x007ea559],CL
wm<1>(c,0x7ea559,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac8b;}
case 0x77ac8b:{ // MOV byte ptr [0x007ea55a],CL
wm<1>(c,0x7ea55a,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac91;}
case 0x77ac91:{ // MOV byte ptr [0x007ea55b],CL
wm<1>(c,0x7ea55b,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ac97;}
case 0x77ac97:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77ac99;}
case 0x77ac99:{ // MOV dword ptr [0x007ea4f8],0x0
wm<4>(c,0x7ea4f8,eval<Op::COPY,4,4>(0x0ull));
return 0x77aca3;}
case 0x77aca3:{ // MOV dword ptr [0x007ea4fc],0x41200000
wm<4>(c,0x7ea4fc,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77acad;}
case 0x77acad:{ // MOV dword ptr [0x007ea500],0x40000000
wm<4>(c,0x7ea500,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77acb7;}
case 0x77acb7:{ // MOV dword ptr [0x007ea504],0x0
wm<4>(c,0x7ea504,eval<Op::COPY,4,4>(0x0ull));
return 0x77acc1;}
case 0x77acc1:{ // MOV dword ptr [0x007ea508],0x41200000
wm<4>(c,0x7ea508,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77accb;}
case 0x77accb:{ // MOV dword ptr [0x007ea50c],0x40000000
wm<4>(c,0x7ea50c,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77acd5;}
case 0x77acd5:{ // MOV dword ptr [0x007ea510],0x0
wm<4>(c,0x7ea510,eval<Op::COPY,4,4>(0x0ull));
return 0x77acdf;}
case 0x77acdf:{ // MOV dword ptr [0x007ea514],0x0
wm<4>(c,0x7ea514,eval<Op::COPY,4,4>(0x0ull));
return 0x77ace9;}
case 0x77ace9:{ // MOV dword ptr [0x007ea518],0x0
wm<4>(c,0x7ea518,eval<Op::COPY,4,4>(0x0ull));
return 0x77acf3;}
case 0x77acf3:{ // MOV dword ptr [0x007ea51c],0x0
wm<4>(c,0x7ea51c,eval<Op::COPY,4,4>(0x0ull));
return 0x77acfd;}
case 0x77acfd:{ // MOV dword ptr [0x007ea520],0x0
wm<4>(c,0x7ea520,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad07;}
case 0x77ad07:{ // MOV dword ptr [0x007ea524],0x0
wm<4>(c,0x7ea524,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad11;}
case 0x77ad11:{ // MOV dword ptr [0x007ea534],EDX
wm<4>(c,0x7ea534,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77ad17;}
case 0x77ad17:{ // MOV dword ptr [0x007ea538],0x0
wm<4>(c,0x7ea538,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad21;}
case 0x77ad21:{ // MOV dword ptr [0x007ea53c],0x0
wm<4>(c,0x7ea53c,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad2b;}
case 0x77ad2b:{ // MOV dword ptr [0x007ea540],0x0
wm<4>(c,0x7ea540,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad35;}
case 0x77ad35:{ // MOV dword ptr [0x007ea544],0x0
wm<4>(c,0x7ea544,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad3f;}
case 0x77ad3f:{ // MOV dword ptr [0x007ea548],0x0
wm<4>(c,0x7ea548,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad49;}
case 0x77ad49:{ // MOV dword ptr [0x007ea54c],0x0
wm<4>(c,0x7ea54c,eval<Op::COPY,4,4>(0x0ull));
return 0x77ad53;}
case 0x77ad53:{ // MOV [0x007ea552],AL
wm<1>(c,0x7ea552,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad58;}
case 0x77ad58:{ // MOV [0x007ea553],AL
wm<1>(c,0x7ea553,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad5d;}
case 0x77ad5d:{ // MOV [0x007ea554],AL
wm<1>(c,0x7ea554,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad62;}
case 0x77ad62:{ // MOV [0x007ea555],AL
wm<1>(c,0x7ea555,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad67;}
case 0x77ad67:{ // MOV [0x007ea55c],AL
wm<1>(c,0x7ea55c,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad6c;}
case 0x77ad6c:{ // MOV byte ptr [0x007ea55d],CL
wm<1>(c,0x7ea55d,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ad72;}
case 0x77ad72:{ // MOV [0x007ea55e],AL
wm<1>(c,0x7ea55e,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad77;}
case 0x77ad77:{ // MOV byte ptr [0x007ea55f],CL
wm<1>(c,0x7ea55f,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ad7d;}
case 0x77ad7d:{ // MOV [0x007ea560],AL
wm<1>(c,0x7ea560,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad82;}
case 0x77ad82:{ // MOV [0x007ea561],AL
wm<1>(c,0x7ea561,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ad87;}
case 0x77ad87:{ // MOV [0x007ea564],EAX
wm<4>(c,0x7ea564,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ad8c;}
case 0x77ad8c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ad8d;}
case 0x77ad90:{ // PUSH 0x786458
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786458ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ad95;}
case 0x77ad95:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ad9aull);
return 0x43db50;
return 0x77ad9a;}
case 0x77ad9a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ad9d;}
case 0x77ad9d:{ // MOV [0x00827f60],EAX
wm<4>(c,0x827f60,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ada2;}
case 0x77ada2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ada3;}
case 0x77adb0:{ // MOV ECX,0x827b80
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827b80ull));
return 0x77adb5;}
case 0x77adb5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77adbaull);
return 0x598750;
return 0x77adba;}
case 0x77adba:{ // PUSH 0x781ad0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ad0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77adbf;}
case 0x77adbf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77adc4ull);
return 0x75c5ed;
return 0x77adc4;}
case 0x77adc4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77adc5;}
case 0x77adc5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77adc6;}
case 0x77add0:{ // MOV EAX,0x827ba0
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x827ba0ull));
return 0x77add5;}
case 0x77add5:{ // MOV EDX,0x8
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x8ull));
return 0x77adda;}
case 0x77adda:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77addc;}
case 0x77addc:{ // LEA ESP,[ESP]
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x77ade0;}
case 0x77ade0:{ // MOV dword ptr [EAX + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77ade3;}
case 0x77ade3:{ // MOV dword ptr [EAX + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77ade6;}
case 0x77ade6:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x77ade8;}
case 0x77ade8:{ // MOV dword ptr [EAX + 0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77adeb;}
case 0x77adeb:{ // MOV dword ptr [EAX + 0x8],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xffffffffull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77adf2;}
case 0x77adf2:{ // ADD EAX,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77adf5;}
case 0x77adf5:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77adf6;}
case 0x77adf6:{ // JNZ 0x0077ade0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77ade0;}
return 0x77adf8;}
case 0x77adf8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77adf9;}
case 0x77ae00:{ // PUSH 0x78660c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78660cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae05;}
case 0x77ae05:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae0aull);
return 0x43db50;
return 0x77ae0a;}
case 0x77ae0a:{ // PUSH 0x786600
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786600ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae0f;}
case 0x77ae0f:{ // MOV [0x00827fa4],EAX
wm<4>(c,0x827fa4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae14;}
case 0x77ae14:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae19ull);
return 0x43db50;
return 0x77ae19;}
case 0x77ae19:{ // PUSH 0x7865f4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865f4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae1e;}
case 0x77ae1e:{ // MOV [0x00827fa8],EAX
wm<4>(c,0x827fa8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae23;}
case 0x77ae23:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae28ull);
return 0x43db50;
return 0x77ae28;}
case 0x77ae28:{ // PUSH 0x7865e8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae2d;}
case 0x77ae2d:{ // MOV [0x00827fac],EAX
wm<4>(c,0x827fac,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae32;}
case 0x77ae32:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae37ull);
return 0x43db50;
return 0x77ae37;}
case 0x77ae37:{ // PUSH 0x7865dc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865dcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae3c;}
case 0x77ae3c:{ // MOV [0x00827fb0],EAX
wm<4>(c,0x827fb0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae41;}
case 0x77ae41:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae46ull);
return 0x43db50;
return 0x77ae46;}
case 0x77ae46:{ // PUSH 0x7865d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae4b;}
case 0x77ae4b:{ // MOV [0x00827fb4],EAX
wm<4>(c,0x827fb4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae50;}
case 0x77ae50:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae55ull);
return 0x43db50;
return 0x77ae55;}
case 0x77ae55:{ // PUSH 0x7865c4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865c4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae5a;}
case 0x77ae5a:{ // MOV [0x00827fb8],EAX
wm<4>(c,0x827fb8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae5f;}
case 0x77ae5f:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae64ull);
return 0x43db50;
return 0x77ae64;}
case 0x77ae64:{ // PUSH 0x7865b8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7865b8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae69;}
case 0x77ae69:{ // MOV [0x00827fbc],EAX
wm<4>(c,0x827fbc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae6e;}
case 0x77ae6e:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae73ull);
return 0x43db50;
return 0x77ae73;}
case 0x77ae73:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ae76;}
case 0x77ae76:{ // MOV [0x00827fc0],EAX
wm<4>(c,0x827fc0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae7b;}
case 0x77ae7b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ae7c;}
case 0x77ae80:{ // PUSH 0x78666c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78666cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae85;}
case 0x77ae85:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae8aull);
return 0x43db50;
return 0x77ae8a;}
case 0x77ae8a:{ // PUSH 0x786660
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786660ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae8f;}
case 0x77ae8f:{ // MOV [0x00827f64],EAX
wm<4>(c,0x827f64,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ae94;}
case 0x77ae94:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ae99ull);
return 0x43db50;
return 0x77ae99;}
case 0x77ae99:{ // PUSH 0x786654
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786654ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ae9e;}
case 0x77ae9e:{ // MOV [0x00827f68],EAX
wm<4>(c,0x827f68,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aea3;}
case 0x77aea3:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aea8ull);
return 0x43db50;
return 0x77aea8;}
case 0x77aea8:{ // PUSH 0x786648
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786648ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aead;}
case 0x77aead:{ // MOV [0x00827f6c],EAX
wm<4>(c,0x827f6c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aeb2;}
case 0x77aeb2:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aeb7ull);
return 0x43db50;
return 0x77aeb7;}
case 0x77aeb7:{ // PUSH 0x78663c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78663cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aebc;}
case 0x77aebc:{ // MOV [0x00827f70],EAX
wm<4>(c,0x827f70,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aec1;}
case 0x77aec1:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aec6ull);
return 0x43db50;
return 0x77aec6;}
case 0x77aec6:{ // PUSH 0x786630
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786630ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aecb;}
case 0x77aecb:{ // MOV [0x00827f74],EAX
wm<4>(c,0x827f74,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aed0;}
case 0x77aed0:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aed5ull);
return 0x43db50;
return 0x77aed5;}
case 0x77aed5:{ // PUSH 0x786624
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786624ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aeda;}
case 0x77aeda:{ // MOV [0x00827f78],EAX
wm<4>(c,0x827f78,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aedf;}
case 0x77aedf:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aee4ull);
return 0x43db50;
return 0x77aee4;}
case 0x77aee4:{ // PUSH 0x786618
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786618ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77aee9;}
case 0x77aee9:{ // MOV [0x00827f7c],EAX
wm<4>(c,0x827f7c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aeee;}
case 0x77aeee:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aef3ull);
return 0x43db50;
return 0x77aef3;}
case 0x77aef3:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aef6;}
case 0x77aef6:{ // MOV [0x00827f80],EAX
wm<4>(c,0x827f80,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77aefb;}
case 0x77aefb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77aefc;}
case 0x77af00:{ // PUSH 0x7866cc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866ccull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af05;}
case 0x77af05:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af0aull);
return 0x43db50;
return 0x77af0a;}
case 0x77af0a:{ // PUSH 0x7866c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af0f;}
case 0x77af0f:{ // MOV [0x00827fc4],EAX
wm<4>(c,0x827fc4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af14;}
case 0x77af14:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af19ull);
return 0x43db50;
return 0x77af19;}
case 0x77af19:{ // PUSH 0x7866b4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866b4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af1e;}
case 0x77af1e:{ // MOV [0x00827fc8],EAX
wm<4>(c,0x827fc8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af23;}
case 0x77af23:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af28ull);
return 0x43db50;
return 0x77af28;}
case 0x77af28:{ // PUSH 0x7866a8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866a8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af2d;}
case 0x77af2d:{ // MOV [0x00827fcc],EAX
wm<4>(c,0x827fcc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af32;}
case 0x77af32:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af37ull);
return 0x43db50;
return 0x77af37;}
case 0x77af37:{ // PUSH 0x78669c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78669cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af3c;}
case 0x77af3c:{ // MOV [0x00827fd0],EAX
wm<4>(c,0x827fd0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af41;}
case 0x77af41:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af46ull);
return 0x43db50;
return 0x77af46;}
case 0x77af46:{ // PUSH 0x786690
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786690ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af4b;}
case 0x77af4b:{ // MOV [0x00827fd4],EAX
wm<4>(c,0x827fd4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af50;}
case 0x77af50:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af55ull);
return 0x43db50;
return 0x77af55;}
case 0x77af55:{ // PUSH 0x786684
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786684ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af5a;}
case 0x77af5a:{ // MOV [0x00827fd8],EAX
wm<4>(c,0x827fd8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af5f;}
case 0x77af5f:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af64ull);
return 0x43db50;
return 0x77af64;}
case 0x77af64:{ // PUSH 0x786678
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786678ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af69;}
case 0x77af69:{ // MOV [0x00827fdc],EAX
wm<4>(c,0x827fdc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af6e;}
case 0x77af6e:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af73ull);
return 0x43db50;
return 0x77af73;}
case 0x77af73:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77af76;}
case 0x77af76:{ // MOV [0x00827fe0],EAX
wm<4>(c,0x827fe0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af7b;}
case 0x77af7b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77af7c;}
case 0x77af80:{ // PUSH 0x78672c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78672cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af85;}
case 0x77af85:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af8aull);
return 0x43db50;
return 0x77af8a;}
case 0x77af8a:{ // PUSH 0x786720
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786720ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af8f;}
case 0x77af8f:{ // MOV [0x00827f84],EAX
wm<4>(c,0x827f84,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77af94;}
case 0x77af94:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77af99ull);
return 0x43db50;
return 0x77af99;}
case 0x77af99:{ // PUSH 0x786714
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786714ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77af9e;}
case 0x77af9e:{ // MOV [0x00827f88],EAX
wm<4>(c,0x827f88,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afa3;}
case 0x77afa3:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77afa8ull);
return 0x43db50;
return 0x77afa8;}
case 0x77afa8:{ // PUSH 0x786708
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786708ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77afad;}
case 0x77afad:{ // MOV [0x00827f8c],EAX
wm<4>(c,0x827f8c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afb2;}
case 0x77afb2:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77afb7ull);
return 0x43db50;
return 0x77afb7;}
case 0x77afb7:{ // PUSH 0x7866fc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866fcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77afbc;}
case 0x77afbc:{ // MOV [0x00827f90],EAX
wm<4>(c,0x827f90,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afc1;}
case 0x77afc1:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77afc6ull);
return 0x43db50;
return 0x77afc6;}
case 0x77afc6:{ // PUSH 0x7866f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77afcb;}
case 0x77afcb:{ // MOV [0x00827f94],EAX
wm<4>(c,0x827f94,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afd0;}
case 0x77afd0:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77afd5ull);
return 0x43db50;
return 0x77afd5;}
case 0x77afd5:{ // PUSH 0x7866e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77afda;}
case 0x77afda:{ // MOV [0x00827f98],EAX
wm<4>(c,0x827f98,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afdf;}
case 0x77afdf:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77afe4ull);
return 0x43db50;
return 0x77afe4;}
case 0x77afe4:{ // PUSH 0x7866d8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7866d8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77afe9;}
case 0x77afe9:{ // MOV [0x00827f9c],EAX
wm<4>(c,0x827f9c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77afee;}
case 0x77afee:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77aff3ull);
return 0x43db50;
return 0x77aff3;}
case 0x77aff3:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77aff6;}
case 0x77aff6:{ // MOV [0x00827fa0],EAX
wm<4>(c,0x827fa0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77affb;}
case 0x77affb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77affc;}
default:missing_instruction(c.pc);}}
}
