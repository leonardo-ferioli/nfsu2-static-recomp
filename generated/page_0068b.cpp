#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_68b(Cpu& c){switch(c.pc){
case 0x68b000:{ // MOV EAX,0x3
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x3ull));
return 0x68b005;}
case 0x68b005:{ // CMP EDX,0x3
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
return 0x68b008;}
case 0x68b008:{ // JBE 0x0068b076
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b076;}
return 0x68b00a;}
case 0x68b00a:{ // MOV ESI,dword ptr [EBP + 0xffffff6c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff6cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b010;}
case 0x68b010:{ // MOV EDI,dword ptr [EBP + 0xffffff68]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff68ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b016;}
case 0x68b016:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b018;}
case 0x68b018:{ // MOV EDX,dword ptr [EBP + 0xffffff5c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b01e;}
case 0x68b01e:{ // MOVAPS XMM0,xmmword ptr [EBP + 0xfffffe20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b025;}
case 0x68b025:{ // MOVSS XMM1,dword ptr [EDX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b02a;}
case 0x68b02a:{ // MOVAPS XMM2,xmmword ptr [EBP + 0xfffffe30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b031;}
case 0x68b031:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68b035;}
case 0x68b035:{ // MOVSS XMM0,dword ptr [EDI + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b03a;}
case 0x68b03a:{ // MOVAPS XMM3,xmmword ptr [EBP + 0xfffffe10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b041;}
case 0x68b041:{ // MULSS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
return 0x68b045;}
case 0x68b045:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b04a;}
case 0x68b04a:{ // ADDSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68b04e;}
case 0x68b04e:{ // MULSS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
return 0x68b052;}
case 0x68b052:{ // ADDSS XMM1,XMM2
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1280),4,4));
return 0x68b056;}
case 0x68b056:{ // MOVSS dword ptr [EBP + EAX*0x4 + 0xfffffe40],XMM1
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe40ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x7d00),u<4>(c,0xa300));
return 0x68b05f;}
case 0x68b05f:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b060;}
case 0x68b060:{ // MOV EDX,dword ptr [EBP + 0xffffff58]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b066;}
case 0x68b066:{ // CMP EAX,EDX
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
return 0x68b068;}
case 0x68b068:{ // JC 0x0068b018
if(r<1>(c,0x200)){return 0x68b018;}
return 0x68b06a;}
case 0x68b06a:{ // MOV dword ptr [EBP + 0xffffff68],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff68ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68b070;}
case 0x68b070:{ // MOV dword ptr [EBP + 0xffffff6c],ESI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff6cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68b076;}
case 0x68b076:{ // MOV EDI,dword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b07c;}
case 0x68b07c:{ // LEA ESI,[EBP + 0xfffffe40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe40ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b082;}
case 0x68b082:{ // MOV ECX,dword ptr [EBP + 0xffffff64]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff64ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b088;}
case 0x68b088:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b089;}
case 0x68b089:{ // SHR ECX,0x2
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
return 0x68b08c;}
case 0x68b08c:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x68b08e;}
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
return 0x68b08c;
return 0x68b08e;}
case 0x68b08e:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b08f;}
case 0x68b08f:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b092;}
case 0x68b092:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x68b094;}
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
return 0x68b092;
return 0x68b094;}
case 0x68b094:{ // MOV EAX,dword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b09a;}
case 0x68b09a:{ // MOV EDX,dword ptr [EBP + 0xffffff58]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0a0;}
case 0x68b0a0:{ // MOV ECX,dword ptr [EBP + 0xffffff74]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff74ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0a6;}
case 0x68b0a6:{ // LEA EAX,[EAX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b0a9;}
case 0x68b0a9:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b0ac;}
case 0x68b0ac:{ // MOV dword ptr [EBP + 0xffffff70],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68b0b2;}
case 0x68b0b2:{ // MOV EAX,dword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0b8;}
case 0x68b0b8:{ // MOV dword ptr [EBP + 0xffffff74],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff74ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68b0be;}
case 0x68b0be:{ // CMP ECX,EAX
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
return 0x68b0c0;}
case 0x68b0c0:{ // JC 0x0068aeb9
if(r<1>(c,0x200)){return 0x68aeb9;}
return 0x68b0c6;}
case 0x68b0c6:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0ca;}
case 0x68b0ca:{ // MOV EDI,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0ce;}
case 0x68b0ce:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b0d0;}
case 0x68b0d0:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b0d1;}
case 0x68b0d1:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b0d3;}
case 0x68b0d3:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b0d4;}
case 0x68b0d4:{ // RET 0x20
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
return uint32_t(r<4>(c,0x284));
return 0x68b0d7;}
case 0x68b0d8:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b0da;}
case 0x68b0da:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b0db;}
case 0x68b0db:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b0dd;}
case 0x68b0dd:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b0de;}
case 0x68b0de:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b0e1;}
case 0x68b0e1:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b0e4;}
case 0x68b0e4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b0e5;}
case 0x68b0e5:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b0e7;}
case 0x68b0e7:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0ea;}
case 0x68b0ea:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0ed;}
case 0x68b0ed:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b0f1;}
case 0x68b0f1:{ // MOVLPS XMM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b0f4;}
case 0x68b0f4:{ // MOV ECX,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b0f7;}
case 0x68b0f7:{ // SUB ESP,0x20
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b0fa;}
case 0x68b0fa:{ // TEST AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3600),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b0fc;}
case 0x68b0fc:{ // JNZ 0x0068b132
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b132;}
return 0x68b0fe;}
case 0x68b0fe:{ // MOVAPS XMM2,xmmword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b102;}
case 0x68b102:{ // MOVAPS XMM3,xmmword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b106;}
case 0x68b106:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b109;}
case 0x68b109:{ // MOVSS XMM1,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b10e;}
case 0x68b10e:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b112;}
case 0x68b112:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68b115;}
case 0x68b115:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68b118;}
case 0x68b118:{ // MOVAPS XMM2,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b11c;}
case 0x68b11c:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b11f;}
case 0x68b11f:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b123;}
case 0x68b123:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68b126;}
case 0x68b126:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b129;}
case 0x68b129:{ // SHUFPS XMM1,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b12d;}
case 0x68b12d:{ // MOVAPS XMM0,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b130;}
case 0x68b130:{ // JMP 0x0068b187
return 0x68b187;
return 0x68b132;}
case 0x68b132:{ // MOVAPS XMM1,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b136;}
case 0x68b136:{ // MOVLPS XMM1,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b13a;}
case 0x68b13a:{ // MOVHPS XMM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b13e;}
case 0x68b13e:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b142;}
case 0x68b142:{ // MOVLPS XMM3,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b146;}
case 0x68b146:{ // MOVHPS XMM3,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b14a;}
case 0x68b14a:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b14d;}
case 0x68b14d:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b150;}
case 0x68b150:{ // MOVSS XMM1,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b155;}
case 0x68b155:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b159;}
case 0x68b159:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68b15c;}
case 0x68b15c:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68b15f;}
case 0x68b15f:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b163;}
case 0x68b163:{ // MOVLPS XMM2,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b167;}
case 0x68b167:{ // MOVHPS XMM2,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b16b;}
case 0x68b16b:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b16e;}
case 0x68b16e:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b172;}
case 0x68b172:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68b175;}
case 0x68b175:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b178;}
case 0x68b178:{ // SHUFPS XMM1,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b17c;}
case 0x68b17c:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b180;}
case 0x68b180:{ // MOVLPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b183;}
case 0x68b183:{ // MOVHPS XMM0,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b187;}
case 0x68b187:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b18a;}
case 0x68b18a:{ // MULPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68b18d;}
case 0x68b18d:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68b190;}
case 0x68b190:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68b193;}
case 0x68b193:{ // MOVUPS xmmword ptr [EAX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68b196;}
case 0x68b196:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b198;}
case 0x68b198:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b199;}
case 0x68b199:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b19b;}
case 0x68b19b:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b19c;}
case 0x68b19c:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68b19f;}
case 0x68b19f:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b1a1;}
case 0x68b1a1:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b1a2;}
case 0x68b1a2:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b1a4;}
case 0x68b1a4:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b1a5;}
case 0x68b1a5:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b1a8;}
case 0x68b1a8:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b1ab;}
case 0x68b1ab:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b1ac;}
case 0x68b1ac:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b1ae;}
case 0x68b1ae:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b1b1;}
case 0x68b1b1:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68b1b3;}
case 0x68b1b3:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b1b6;}
case 0x68b1b6:{ // MOV EDX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b1b8;}
case 0x68b1b8:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b1bb;}
case 0x68b1bb:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b1c0;}
case 0x68b1c0:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b1c4;}
case 0x68b1c4:{ // MOVAPS xmmword ptr [EAX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68b1c7;}
case 0x68b1c7:{ // MOV EDX,dword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b1ca;}
case 0x68b1ca:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b1cd;}
case 0x68b1cd:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b1d2;}
case 0x68b1d2:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b1d6;}
case 0x68b1d6:{ // MOVAPS xmmword ptr [EAX + 0x40],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b1da;}
case 0x68b1da:{ // MOV EDX,dword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b1dd;}
case 0x68b1dd:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b1e0;}
case 0x68b1e0:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b1e5;}
case 0x68b1e5:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b1e9;}
case 0x68b1e9:{ // MOVAPS xmmword ptr [EAX + 0x80],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b1f0;}
case 0x68b1f0:{ // MOV EDX,dword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b1f3;}
case 0x68b1f3:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b1f6;}
case 0x68b1f6:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b1fb;}
case 0x68b1fb:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b1ff;}
case 0x68b1ff:{ // MOVAPS xmmword ptr [EAX + 0xc0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b206;}
case 0x68b206:{ // MOV EDX,dword ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b209;}
case 0x68b209:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b20c;}
case 0x68b20c:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b211;}
case 0x68b211:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b215;}
case 0x68b215:{ // MOVAPS xmmword ptr [EAX + 0x10],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b219;}
case 0x68b219:{ // MOV EDX,dword ptr [ECX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b21c;}
case 0x68b21c:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b21f;}
case 0x68b21f:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b224;}
case 0x68b224:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b228;}
case 0x68b228:{ // MOVAPS xmmword ptr [EAX + 0x50],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b22c;}
case 0x68b22c:{ // MOV EDX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b22f;}
case 0x68b22f:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b232;}
case 0x68b232:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b237;}
case 0x68b237:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b23b;}
case 0x68b23b:{ // MOVAPS xmmword ptr [EAX + 0x90],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x90ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b242;}
case 0x68b242:{ // MOV EDX,dword ptr [ECX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x34ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b245;}
case 0x68b245:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b248;}
case 0x68b248:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b24d;}
case 0x68b24d:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b251;}
case 0x68b251:{ // MOVAPS xmmword ptr [EAX + 0xd0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b258;}
case 0x68b258:{ // MOV EDX,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b25b;}
case 0x68b25b:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b25e;}
case 0x68b25e:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b263;}
case 0x68b263:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b267;}
case 0x68b267:{ // MOVAPS xmmword ptr [EAX + 0x20],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b26b;}
case 0x68b26b:{ // MOV EDX,dword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b26e;}
case 0x68b26e:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b271;}
case 0x68b271:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b276;}
case 0x68b276:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b27a;}
case 0x68b27a:{ // MOVAPS xmmword ptr [EAX + 0x60],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b27e;}
case 0x68b27e:{ // MOV EDX,dword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b281;}
case 0x68b281:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b284;}
case 0x68b284:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b289;}
case 0x68b289:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b28d;}
case 0x68b28d:{ // MOVAPS xmmword ptr [EAX + 0xa0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b294;}
case 0x68b294:{ // MOV EDX,dword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b297;}
case 0x68b297:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b29a;}
case 0x68b29a:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b29f;}
case 0x68b29f:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b2a3;}
case 0x68b2a3:{ // MOVAPS xmmword ptr [EAX + 0xe0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xe0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b2aa;}
case 0x68b2aa:{ // MOV EDX,dword ptr [ECX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b2ad;}
case 0x68b2ad:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b2b0;}
case 0x68b2b0:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b2b5;}
case 0x68b2b5:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b2b9;}
case 0x68b2b9:{ // MOVAPS xmmword ptr [EAX + 0x30],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b2bd;}
case 0x68b2bd:{ // MOV EDX,dword ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b2c0;}
case 0x68b2c0:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b2c3;}
case 0x68b2c3:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b2c8;}
case 0x68b2c8:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b2cc;}
case 0x68b2cc:{ // MOVAPS xmmword ptr [EAX + 0x70],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b2d0;}
case 0x68b2d0:{ // MOV EDX,dword ptr [ECX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b2d3;}
case 0x68b2d3:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b2d6;}
case 0x68b2d6:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b2db;}
case 0x68b2db:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b2df;}
case 0x68b2df:{ // MOVAPS xmmword ptr [EAX + 0xb0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b2e6;}
case 0x68b2e6:{ // MOV ECX,dword ptr [ECX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b2e9;}
case 0x68b2e9:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b2ec;}
case 0x68b2ec:{ // MOVSS XMM0,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b2f1;}
case 0x68b2f1:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b2f5;}
case 0x68b2f5:{ // MOVAPS xmmword ptr [EAX + 0xf0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xf0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68b2fc;}
case 0x68b2fc:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b2fe;}
case 0x68b2fe:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b2ff;}
case 0x68b2ff:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b301;}
case 0x68b301:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b302;}
case 0x68b302:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68b305;}
case 0x68b305:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b307;}
case 0x68b307:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b308;}
case 0x68b308:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b30a;}
case 0x68b30a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b30b;}
case 0x68b30b:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b30e;}
case 0x68b30e:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b311;}
case 0x68b311:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b312;}
case 0x68b312:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b314;}
case 0x68b314:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b31a;}
case 0x68b31a:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b31d;}
case 0x68b31d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b31e;}
case 0x68b31e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b31f;}
case 0x68b31f:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b322;}
case 0x68b322:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68b324;}
case 0x68b324:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b326;}
case 0x68b326:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b329;}
case 0x68b329:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b32a;}
case 0x68b32a:{ // CMP ECX,EAX
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
return 0x68b32c;}
case 0x68b32c:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b32e;}
case 0x68b32e:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b330;}
case 0x68b330:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b332;}
case 0x68b332:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68b335;}
case 0x68b335:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b338;}
case 0x68b338:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b33b;}
case 0x68b33b:{ // JZ 0x0068b4a8
if(r<1>(c,0x206)){return 0x68b4a8;}
return 0x68b341;}
case 0x68b341:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b344;}
case 0x68b344:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b34a;}
case 0x68b34a:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b34full);
return 0x68b19f;
return 0x68b34f;}
case 0x68b34f:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b351;}
case 0x68b351:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b354;}
case 0x68b354:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b357;}
case 0x68b357:{ // JBE 0x0068b4a8
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b4a8;}
return 0x68b35d;}
case 0x68b35d:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b361;}
case 0x68b361:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b365;}
case 0x68b365:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b368;}
case 0x68b368:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b36b;}
case 0x68b36b:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b36f;}
case 0x68b36f:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b372;}
case 0x68b372:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b375;}
case 0x68b375:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b379;}
case 0x68b379:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b37c;}
case 0x68b37c:{ // MOVSS XMM3,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68b381;}
case 0x68b381:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b384;}
case 0x68b384:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b387;}
case 0x68b387:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b38b;}
case 0x68b38b:{ // SHUFPS XMM1,XMM2,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b38f;}
case 0x68b38f:{ // SHUFPS XMM0,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b393;}
case 0x68b393:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b399;}
case 0x68b399:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b39c;}
case 0x68b39c:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b3a2;}
case 0x68b3a2:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68b3a5;}
case 0x68b3a5:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68b3ab;}
case 0x68b3ab:{ // MOVLHPS XMM3,XMM1
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68b3ae;}
case 0x68b3ae:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b3b1;}
case 0x68b3b1:{ // SHUFPS XMM1,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b3b5;}
case 0x68b3b5:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b3b8;}
case 0x68b3b8:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b3bf;}
case 0x68b3bf:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b3c2;}
case 0x68b3c2:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68b3c9;}
case 0x68b3c9:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68b3cc;}
case 0x68b3cc:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68b3cf;}
case 0x68b3cf:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b3d2;}
case 0x68b3d2:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b3d9;}
case 0x68b3d9:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68b3dc;}
case 0x68b3dc:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b3df;}
case 0x68b3df:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b3e3;}
case 0x68b3e3:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b3e6;}
case 0x68b3e6:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68b3ed;}
case 0x68b3ed:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b3f0;}
case 0x68b3f0:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68b3f7;}
case 0x68b3f7:{ // ADDPS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x134c),4,4));
return 0x68b3fa;}
case 0x68b3fa:{ // MOVAPS XMM5,XMM6
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68b3fd;}
case 0x68b3fd:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b400;}
case 0x68b400:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b407;}
case 0x68b407:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68b40a;}
case 0x68b40a:{ // ADDPS XMM5,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b40e;}
case 0x68b40e:{ // MOVAPS XMM6,XMM4
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b411;}
case 0x68b411:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68b418;}
case 0x68b418:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68b41f;}
case 0x68b41f:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b422;}
case 0x68b422:{ // MULPS XMM7,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b429;}
case 0x68b429:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68b430;}
case 0x68b430:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b433;}
case 0x68b433:{ // MULPS XMM3,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b437;}
case 0x68b437:{ // MULPS XMM1,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68b43b;}
case 0x68b43b:{ // ADDPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68b43e;}
case 0x68b43e:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68b441;}
case 0x68b441:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68b444;}
case 0x68b444:{ // ADDPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68b447;}
case 0x68b447:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b44a;}
case 0x68b44a:{ // ADDPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68b44d;}
case 0x68b44d:{ // ADDPS XMM4,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b451;}
case 0x68b451:{ // MOVAPS XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68b454;}
case 0x68b454:{ // ADDPS XMM3,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,u<4>(c,0xbbc0c),4,4));
return 0x68b458;}
case 0x68b458:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b45b;}
case 0x68b45b:{ // UNPCKLPS XMM0,XMM5
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68b45e;}
case 0x68b45e:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68b461;}
case 0x68b461:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b464;}
case 0x68b464:{ // UNPCKLPS XMM1,XMM4
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68b467;}
case 0x68b467:{ // MOVLPS qword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68b46b;}
case 0x68b46b:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b46f;}
case 0x68b46f:{ // MOVHPS qword ptr [ECX + EDI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b474;}
case 0x68b474:{ // UNPCKHPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68b477;}
case 0x68b477:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b47b;}
case 0x68b47b:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b47e;}
case 0x68b47e:{ // UNPCKHPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b481;}
case 0x68b481:{ // MOVLPS qword ptr [EDI + ECX*0x2 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b486;}
case 0x68b486:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b48a;}
case 0x68b48a:{ // MOVHPS qword ptr [EDX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b48f;}
case 0x68b48f:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b491;}
case 0x68b491:{ // SHL EDX,0x2
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
return 0x68b494;}
case 0x68b494:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b496;}
case 0x68b496:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68b498;}
case 0x68b498:{ // SHL EDX,0x2
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
return 0x68b49b;}
case 0x68b49b:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b49d;}
case 0x68b49d:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b4a0;}
case 0x68b4a0:{ // JNZ 0x0068b36b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b36b;}
return 0x68b4a6;}
case 0x68b4a6:{ // JMP 0x0068b4ab
return 0x68b4ab;
return 0x68b4a8;}
case 0x68b4a8:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4ab;}
case 0x68b4ab:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4ae;}
case 0x68b4ae:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b4b0;}
case 0x68b4b0:{ // JBE 0x0068b4ca
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b4ca;}
return 0x68b4b2;}
case 0x68b4b2:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b4b5;}
case 0x68b4b5:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4b8;}
case 0x68b4b8:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4b9;}
case 0x68b4b9:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4ba;}
case 0x68b4ba:{ // CALL 0x0068b0d8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b4bfull);
return 0x68b0d8;
return 0x68b4bf;}
case 0x68b4bf:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68b4c2;}
case 0x68b4c2:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68b4c5;}
case 0x68b4c5:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b4c8;}
case 0x68b4c8:{ // JNZ 0x0068b4b5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b4b5;}
return 0x68b4ca;}
case 0x68b4ca:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4cd;}
case 0x68b4cd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b4ce;}
case 0x68b4ce:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b4cf;}
case 0x68b4cf:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b4d1;}
case 0x68b4d1:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b4d2;}
case 0x68b4d2:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b4d4;}
case 0x68b4d4:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b4d5;}
case 0x68b4d5:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68b4d8;}
case 0x68b4d8:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b4da;}
case 0x68b4da:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4db;}
case 0x68b4db:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b4dd;}
case 0x68b4dd:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4de;}
case 0x68b4de:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b4e1;}
case 0x68b4e1:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b4e4;}
case 0x68b4e4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4e5;}
case 0x68b4e5:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b4e7;}
case 0x68b4e7:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b4ed;}
case 0x68b4ed:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4f0;}
case 0x68b4f0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4f1;}
case 0x68b4f1:{ // MOV ESI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4f4;}
case 0x68b4f4:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b4f5;}
case 0x68b4f5:{ // MOV EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b4f8;}
case 0x68b4f8:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68b4fa;}
case 0x68b4fa:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b4fc;}
case 0x68b4fc:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b4fd;}
case 0x68b4fd:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b500;}
case 0x68b500:{ // CMP ECX,EAX
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
return 0x68b502;}
case 0x68b502:{ // SBB ECX,ECX
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b504;}
case 0x68b504:{ // AND ECX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b506;}
case 0x68b506:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b508;}
case 0x68b508:{ // SHR ECX,0x2
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
return 0x68b50b;}
case 0x68b50b:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b50e;}
case 0x68b50e:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b511;}
case 0x68b511:{ // MOV dword ptr [EBP + -0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b514;}
case 0x68b514:{ // JZ 0x0068b627
if(r<1>(c,0x206)){return 0x68b627;}
return 0x68b51a;}
case 0x68b51a:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b51d;}
case 0x68b51d:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b523;}
case 0x68b523:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b528ull);
return 0x68b19f;
return 0x68b528;}
case 0x68b528:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b52b;}
case 0x68b52b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b52d;}
case 0x68b52d:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b530;}
case 0x68b530:{ // JBE 0x0068b627
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b627;}
return 0x68b536;}
case 0x68b536:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b53a;}
case 0x68b53a:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b53e;}
case 0x68b53e:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b541;}
case 0x68b541:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b544;}
case 0x68b544:{ // MOVLPS XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b548;}
case 0x68b548:{ // MOVLPS XMM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b54b;}
case 0x68b54b:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b54e;}
case 0x68b54e:{ // MOVHPS XMM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b552;}
case 0x68b552:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b555;}
case 0x68b555:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b558;}
case 0x68b558:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b55b;}
case 0x68b55b:{ // MOVHPS XMM2,qword ptr [EDX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b55f;}
case 0x68b55f:{ // SHUFPS XMM0,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b563;}
case 0x68b563:{ // SHUFPS XMM1,XMM2,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b567;}
case 0x68b567:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b56a;}
case 0x68b56a:{ // MULPS XMM3,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b571;}
case 0x68b571:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b574;}
case 0x68b574:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b57b;}
case 0x68b57b:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68b57e;}
case 0x68b57e:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b581;}
case 0x68b581:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b585;}
case 0x68b585:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b588;}
case 0x68b588:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68b58f;}
case 0x68b58f:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b592;}
case 0x68b592:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b599;}
case 0x68b599:{ // ADDPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68b59c;}
case 0x68b59c:{ // ADDPS XMM4,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b5a0;}
case 0x68b5a0:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b5a3;}
case 0x68b5a3:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68b5aa;}
case 0x68b5aa:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68b5b1;}
case 0x68b5b1:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b5b4;}
case 0x68b5b4:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b5bb;}
case 0x68b5bb:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68b5c2;}
case 0x68b5c2:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68b5c5;}
case 0x68b5c5:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68b5c8;}
case 0x68b5c8:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68b5cb;}
case 0x68b5cb:{ // ADDPS XMM3,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,u<4>(c,0xbbc0c),4,4));
return 0x68b5cf;}
case 0x68b5cf:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b5d2;}
case 0x68b5d2:{ // ADDPS XMM5,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b5d6;}
case 0x68b5d6:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b5d9;}
case 0x68b5d9:{ // UNPCKLPS XMM0,XMM4
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68b5dc;}
case 0x68b5dc:{ // MOVLPS qword ptr [ESI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x68b5df;}
case 0x68b5df:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b5e2;}
case 0x68b5e2:{ // UNPCKLPS XMM1,XMM5
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68b5e5;}
case 0x68b5e5:{ // MOVLPS qword ptr [ESI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68b5e9;}
case 0x68b5e9:{ // MOVHPS qword ptr [ESI + EDI*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b5ed;}
case 0x68b5ed:{ // MOVHPS qword ptr [EDI + ESI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b5f2;}
case 0x68b5f2:{ // UNPCKHPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b5f5;}
case 0x68b5f5:{ // MOVLPS qword ptr [ESI + EDI*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b5f9;}
case 0x68b5f9:{ // LEA EDX,[EDI + EDI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b5fc;}
case 0x68b5fc:{ // UNPCKHPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68b5ff;}
case 0x68b5ff:{ // MOVLPS qword ptr [ESI + EDI*0x2 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b604;}
case 0x68b604:{ // MOVHPS qword ptr [EDX + ESI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b608;}
case 0x68b608:{ // MOVHPS qword ptr [EDX + ESI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68b60d;}
case 0x68b60d:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68b60f;}
case 0x68b60f:{ // SHL EDX,0x2
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
return 0x68b612;}
case 0x68b612:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b614;}
case 0x68b614:{ // MOV dword ptr [EBX + 0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b617;}
case 0x68b617:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b619;}
case 0x68b619:{ // SHL EAX,0x2
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
return 0x68b61c;}
case 0x68b61c:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b61e;}
case 0x68b61e:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b621;}
case 0x68b621:{ // JNZ 0x0068b541
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b541;}
return 0x68b627;}
case 0x68b627:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b62a;}
case 0x68b62a:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b62c;}
case 0x68b62c:{ // JBE 0x0068b64a
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b64a;}
return 0x68b62e;}
case 0x68b62e:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b631;}
case 0x68b631:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b634;}
case 0x68b634:{ // PUSH dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b637;}
case 0x68b637:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b638;}
case 0x68b638:{ // CALL 0x0063c10e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b63dull);
return 0x63c10e;
return 0x68b63d;}
case 0x68b63d:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b640;}
case 0x68b640:{ // ADD dword ptr [EBX + 0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
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
return 0x68b643;}
case 0x68b643:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b645;}
case 0x68b645:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b648;}
case 0x68b648:{ // JNZ 0x0068b631
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b631;}
return 0x68b64a;}
case 0x68b64a:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b64d;}
case 0x68b64d:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b64e;}
case 0x68b64e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b64f;}
case 0x68b64f:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b651;}
case 0x68b651:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b652;}
case 0x68b652:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b654;}
case 0x68b654:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b655;}
case 0x68b655:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68b658;}
case 0x68b658:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b65a;}
case 0x68b65a:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b65b;}
case 0x68b65b:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b65d;}
case 0x68b65d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b65e;}
case 0x68b65e:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b661;}
case 0x68b661:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b664;}
case 0x68b664:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b665;}
case 0x68b665:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b667;}
case 0x68b667:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b66d;}
case 0x68b66d:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b670;}
case 0x68b670:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b671;}
case 0x68b671:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b672;}
case 0x68b672:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b675;}
case 0x68b675:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68b677;}
case 0x68b677:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b679;}
case 0x68b679:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b67c;}
case 0x68b67c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b67d;}
case 0x68b67d:{ // CMP ECX,EAX
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
return 0x68b67f;}
case 0x68b67f:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b681;}
case 0x68b681:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b683;}
case 0x68b683:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b685;}
case 0x68b685:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68b688;}
case 0x68b688:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b68b;}
case 0x68b68b:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b68e;}
case 0x68b68e:{ // JZ 0x0068b784
if(r<1>(c,0x206)){return 0x68b784;}
return 0x68b694;}
case 0x68b694:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b697;}
case 0x68b697:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b69d;}
case 0x68b69d:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b6a2ull);
return 0x68b19f;
return 0x68b6a2;}
case 0x68b6a2:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b6a4;}
case 0x68b6a4:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b6a7;}
case 0x68b6a7:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b6aa;}
case 0x68b6aa:{ // JBE 0x0068b784
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b784;}
return 0x68b6b0;}
case 0x68b6b0:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b6b4;}
case 0x68b6b4:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b6b8;}
case 0x68b6b8:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b6bb;}
case 0x68b6bb:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b6be;}
case 0x68b6be:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b6c1;}
case 0x68b6c1:{ // MOVLPS XMM4,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b6c5;}
case 0x68b6c5:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b6c8;}
case 0x68b6c8:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b6cc;}
case 0x68b6cc:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b6cf;}
case 0x68b6cf:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b6d2;}
case 0x68b6d2:{ // MOVHPS XMM4,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b6d6;}
case 0x68b6d6:{ // SHUFPS XMM0,XMM4,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b6da;}
case 0x68b6da:{ // SHUFPS XMM1,XMM4,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b6de;}
case 0x68b6de:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b6e1;}
case 0x68b6e1:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b6e8;}
case 0x68b6e8:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b6eb;}
case 0x68b6eb:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b6f2;}
case 0x68b6f2:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68b6f5;}
case 0x68b6f5:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b6f8;}
case 0x68b6f8:{ // ADDPS XMM2,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b6fc;}
case 0x68b6fc:{ // RCPPS XMM3,XMM2
wr<16>(c,0x12c0,user_op(c,1048749,{r<16>(c,0x12c0),r<16>(c,0x1280)}));
return 0x68b6ff;}
case 0x68b6ff:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b702;}
case 0x68b702:{ // MULPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68b705;}
case 0x68b705:{ // MULPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68b708;}
case 0x68b708:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b70b;}
case 0x68b70b:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68b70e;}
case 0x68b70e:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b711;}
case 0x68b711:{ // SUBPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68b714;}
case 0x68b714:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b717;}
case 0x68b717:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b71e;}
case 0x68b71e:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68b725;}
case 0x68b725:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b728;}
case 0x68b728:{ // MULPS XMM0,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68b72f;}
case 0x68b72f:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68b736;}
case 0x68b736:{ // ADDPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68b739;}
case 0x68b739:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68b73c;}
case 0x68b73c:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b73f;}
case 0x68b73f:{ // ADDPS XMM1,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b743;}
case 0x68b743:{ // MOVAPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68b746;}
case 0x68b746:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68b74a;}
case 0x68b74a:{ // MULPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68b74d;}
case 0x68b74d:{ // MULPS XMM1,XMM3
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x12cc),4,4));
return 0x68b750;}
case 0x68b750:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b753;}
case 0x68b753:{ // UNPCKLPS XMM0,XMM1
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x68b756;}
case 0x68b756:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68b759;}
case 0x68b759:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b75d;}
case 0x68b75d:{ // UNPCKHPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b760;}
case 0x68b760:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b763;}
case 0x68b763:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b767;}
case 0x68b767:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b76b;}
case 0x68b76b:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b76d;}
case 0x68b76d:{ // SHL EDX,0x2
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
return 0x68b770;}
case 0x68b770:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b772;}
case 0x68b772:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68b774;}
case 0x68b774:{ // SHL EDX,0x2
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
return 0x68b777;}
case 0x68b777:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b779;}
case 0x68b779:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b77c;}
case 0x68b77c:{ // JNZ 0x0068b6be
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b6be;}
return 0x68b782;}
case 0x68b782:{ // JMP 0x0068b787
return 0x68b787;
return 0x68b784;}
case 0x68b784:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b787;}
case 0x68b787:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b78a;}
case 0x68b78a:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b78c;}
case 0x68b78c:{ // JBE 0x0068b7a6
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b7a6;}
return 0x68b78e;}
case 0x68b78e:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b791;}
case 0x68b791:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b794;}
case 0x68b794:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b795;}
case 0x68b795:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b796;}
case 0x68b796:{ // CALL 0x0063c13a
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b79bull);
return 0x63c13a;
return 0x68b79b;}
case 0x68b79b:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68b79e;}
case 0x68b79e:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68b7a1;}
case 0x68b7a1:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b7a4;}
case 0x68b7a4:{ // JNZ 0x0068b791
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b791;}
return 0x68b7a6;}
case 0x68b7a6:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b7a9;}
case 0x68b7a9:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b7aa;}
case 0x68b7aa:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b7ab;}
case 0x68b7ab:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b7ad;}
case 0x68b7ad:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b7ae;}
case 0x68b7ae:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b7b0;}
case 0x68b7b0:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b7b1;}
case 0x68b7b1:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68b7b4;}
case 0x68b7b4:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b7b6;}
case 0x68b7b6:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7b7;}
case 0x68b7b7:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b7b9;}
case 0x68b7b9:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7ba;}
case 0x68b7ba:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7bd;}
case 0x68b7bd:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7c0;}
case 0x68b7c0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7c1;}
case 0x68b7c1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b7c3;}
case 0x68b7c3:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7c9;}
case 0x68b7c9:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b7cc;}
case 0x68b7cc:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7cd;}
case 0x68b7cd:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7ce;}
case 0x68b7ce:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b7d1;}
case 0x68b7d1:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68b7d3;}
case 0x68b7d3:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b7d5;}
case 0x68b7d5:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7d8;}
case 0x68b7d8:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b7d9;}
case 0x68b7d9:{ // CMP ECX,EAX
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
return 0x68b7db;}
case 0x68b7db:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7dd;}
case 0x68b7dd:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7df;}
case 0x68b7df:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b7e1;}
case 0x68b7e1:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68b7e4;}
case 0x68b7e4:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b7e7;}
case 0x68b7e7:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b7ea;}
case 0x68b7ea:{ // JZ 0x0068b895
if(r<1>(c,0x206)){return 0x68b895;}
return 0x68b7f0;}
case 0x68b7f0:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b7f3;}
case 0x68b7f3:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b7f9;}
case 0x68b7f9:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b7feull);
return 0x68b19f;
return 0x68b7fe;}
case 0x68b7fe:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b800;}
case 0x68b800:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b803;}
case 0x68b803:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b806;}
case 0x68b806:{ // JBE 0x0068b895
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b895;}
return 0x68b80c;}
case 0x68b80c:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b810;}
case 0x68b810:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b814;}
case 0x68b814:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b817;}
case 0x68b817:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b81a;}
case 0x68b81a:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b81d;}
case 0x68b81d:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b821;}
case 0x68b821:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b824;}
case 0x68b824:{ // MOVHPS XMM0,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b828;}
case 0x68b828:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b82b;}
case 0x68b82b:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b82e;}
case 0x68b82e:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b832;}
case 0x68b832:{ // SHUFPS XMM0,XMM3,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b836;}
case 0x68b836:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b839;}
case 0x68b839:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b840;}
case 0x68b840:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68b847;}
case 0x68b847:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b84a;}
case 0x68b84a:{ // SHUFPS XMM1,XMM3,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b84e;}
case 0x68b84e:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b851;}
case 0x68b851:{ // MULPS XMM2,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68b858;}
case 0x68b858:{ // MULPS XMM1,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68b85f;}
case 0x68b85f:{ // ADDPS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x120c),4,4));
return 0x68b862;}
case 0x68b862:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68b865;}
case 0x68b865:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b868;}
case 0x68b868:{ // UNPCKLPS XMM0,XMM1
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x68b86b;}
case 0x68b86b:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68b86e;}
case 0x68b86e:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b872;}
case 0x68b872:{ // UNPCKHPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b875;}
case 0x68b875:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b878;}
case 0x68b878:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b87c;}
case 0x68b87c:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68b880;}
case 0x68b880:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b882;}
case 0x68b882:{ // SHL EDX,0x2
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
return 0x68b885;}
case 0x68b885:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b887;}
case 0x68b887:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68b889;}
case 0x68b889:{ // SHL EDX,0x2
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
return 0x68b88c;}
case 0x68b88c:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b88e;}
case 0x68b88e:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b891;}
case 0x68b891:{ // JNZ 0x0068b81a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b81a;}
return 0x68b893;}
case 0x68b893:{ // JMP 0x0068b898
return 0x68b898;
return 0x68b895;}
case 0x68b895:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b898;}
case 0x68b898:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b89b;}
case 0x68b89b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b89d;}
case 0x68b89d:{ // JBE 0x0068b8b7
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b8b7;}
return 0x68b89f;}
case 0x68b89f:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b8a2;}
case 0x68b8a2:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8a5;}
case 0x68b8a5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8a6;}
case 0x68b8a6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8a7;}
case 0x68b8a7:{ // CALL 0x0063c166
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b8acull);
return 0x63c166;
return 0x68b8ac;}
case 0x68b8ac:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68b8af;}
case 0x68b8af:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68b8b2;}
case 0x68b8b2:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68b8b5;}
case 0x68b8b5:{ // JNZ 0x0068b8a2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b8a2;}
return 0x68b8b7;}
case 0x68b8b7:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b8ba;}
case 0x68b8ba:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b8bb;}
case 0x68b8bb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b8bc;}
case 0x68b8bc:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68b8be;}
case 0x68b8be:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b8bf;}
case 0x68b8bf:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68b8c1;}
case 0x68b8c1:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b8c2;}
case 0x68b8c2:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68b8c5;}
case 0x68b8c5:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68b8c7;}
case 0x68b8c7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8c8;}
case 0x68b8c8:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b8ca;}
case 0x68b8ca:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8cb;}
case 0x68b8cb:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8ce;}
case 0x68b8ce:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8d1;}
case 0x68b8d1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8d2;}
case 0x68b8d2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68b8d4;}
case 0x68b8d4:{ // SUB ESP,0x138
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x138ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x138ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x138ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8da;}
case 0x68b8da:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b8dd;}
case 0x68b8dd:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8de;}
case 0x68b8de:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b8df;}
case 0x68b8df:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b8e2;}
case 0x68b8e2:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68b8e4;}
case 0x68b8e4:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68b8e6;}
case 0x68b8e6:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8e9;}
case 0x68b8e9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68b8ea;}
case 0x68b8ea:{ // CMP ECX,EAX
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
return 0x68b8ec;}
case 0x68b8ec:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8ee;}
case 0x68b8ee:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8f0;}
case 0x68b8f0:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b8f2;}
case 0x68b8f2:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68b8f5;}
case 0x68b8f5:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b8f8;}
case 0x68b8f8:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b8fb;}
case 0x68b8fb:{ // JZ 0x0068ba95
if(r<1>(c,0x206)){return 0x68ba95;}
return 0x68b901;}
case 0x68b901:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68b904;}
case 0x68b904:{ // LEA ECX,[EBP + 0xfffffed0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffed0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68b90a;}
case 0x68b90a:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68b90full);
return 0x68b19f;
return 0x68b90f;}
case 0x68b90f:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68b911;}
case 0x68b911:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b914;}
case 0x68b914:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b917;}
case 0x68b917:{ // JBE 0x0068ba95
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68ba95;}
return 0x68b91d;}
case 0x68b91d:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b921;}
case 0x68b921:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b925;}
case 0x68b925:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68b928;}
case 0x68b928:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b92b;}
case 0x68b92b:{ // MOVLPS XMM4,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b92f;}
case 0x68b92f:{ // MOVLPS XMM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b932;}
case 0x68b932:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b935;}
case 0x68b935:{ // MOVHPS XMM2,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b939;}
case 0x68b939:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b93c;}
case 0x68b93c:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b93f;}
case 0x68b93f:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b942;}
case 0x68b942:{ // MOVLPS XMM2,qword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b946;}
case 0x68b946:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b949;}
case 0x68b949:{ // MOVHPS XMM4,qword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b94e;}
case 0x68b94e:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b951;}
case 0x68b951:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68b954;}
case 0x68b954:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b958;}
case 0x68b958:{ // SHUFPS XMM0,XMM3,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b95c;}
case 0x68b95c:{ // SHUFPS XMM1,XMM3,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b960;}
case 0x68b960:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b965;}
case 0x68b965:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68b96a;}
case 0x68b96a:{ // SHUFPS XMM4,XMM3,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b96e;}
case 0x68b96e:{ // SHUFPS XMM2,XMM3,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68b972;}
case 0x68b972:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b975;}
case 0x68b975:{ // MULPS XMM3,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b979;}
case 0x68b979:{ // MOVAPS xmmword ptr [EBP + -0x30],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b97d;}
case 0x68b97d:{ // MULPS XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68b981;}
case 0x68b981:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b984;}
case 0x68b984:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffed0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffed0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b98b;}
case 0x68b98b:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68b98e;}
case 0x68b98e:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b991;}
case 0x68b991:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68b998;}
case 0x68b998:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68b99b;}
case 0x68b99b:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68b99e;}
case 0x68b99e:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b9a1;}
case 0x68b9a1:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b9a8;}
case 0x68b9a8:{ // ADDPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68b9ab;}
case 0x68b9ab:{ // MOVAPS XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68b9ae;}
case 0x68b9ae:{ // ADDPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68b9b1;}
case 0x68b9b1:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68b9b4;}
case 0x68b9b4:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b9b7;}
case 0x68b9b7:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b9be;}
case 0x68b9be:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68b9c1;}
case 0x68b9c1:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68b9c8;}
case 0x68b9c8:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68b9cb;}
case 0x68b9cb:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68b9ce;}
case 0x68b9ce:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68b9d5;}
case 0x68b9d5:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68b9d8;}
case 0x68b9d8:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68b9db;}
case 0x68b9db:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68b9de;}
case 0x68b9de:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68b9e1;}
case 0x68b9e1:{ // MOVAPS xmmword ptr [EBP + -0x20],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68b9e5;}
case 0x68b9e5:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68b9e9;}
case 0x68b9e9:{ // MULPS XMM4,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68b9ed;}
case 0x68b9ed:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68b9f0;}
case 0x68b9f0:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68b9f7;}
case 0x68b9f7:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68b9fe;}
case 0x68b9fe:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68ba01;}
case 0x68ba01:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ba04;}
case 0x68ba04:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68ba0b;}
case 0x68ba0b:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68ba12;}
case 0x68ba12:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68ba15;}
case 0x68ba15:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68ba1c;}
case 0x68ba1c:{ // MULPS XMM2,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68ba20;}
case 0x68ba20:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68ba23;}
case 0x68ba23:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68ba26;}
case 0x68ba26:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68ba29;}
case 0x68ba29:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68ba2c;}
case 0x68ba2c:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68ba2f;}
case 0x68ba2f:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68ba32;}
case 0x68ba32:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68ba35;}
case 0x68ba35:{ // MOVAPS XMM5,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ba39;}
case 0x68ba39:{ // MULPS XMM5,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68ba3d;}
case 0x68ba3d:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ba40;}
case 0x68ba40:{ // MOVAPS XMM0,XMM3
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68ba43;}
case 0x68ba43:{ // UNPCKLPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13c000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0x13c000)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0x13c004)));
return 0x68ba47;}
case 0x68ba47:{ // UNPCKHPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13bf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0x13bf08)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0x13bf0c)));
return 0x68ba4b;}
case 0x68ba4b:{ // ADDPS XMM2,XMM5
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x134c),4,4));
return 0x68ba4e;}
case 0x68ba4e:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68ba51;}
case 0x68ba51:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68ba54;}
case 0x68ba54:{ // UNPCKLPS XMM1,XMM2
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
return 0x68ba57;}
case 0x68ba57:{ // MOVLPS qword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ba5b;}
case 0x68ba5b:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68ba5f;}
case 0x68ba5f:{ // MOVHPS qword ptr [ECX + EDI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68ba64;}
case 0x68ba64:{ // UNPCKHPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68ba67;}
case 0x68ba67:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68ba6b;}
case 0x68ba6b:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68ba6e;}
case 0x68ba6e:{ // MOVLPS qword ptr [EDI + ECX*0x2 + 0x8],XMM4
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68ba73;}
case 0x68ba73:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68ba77;}
case 0x68ba77:{ // MOVHPS qword ptr [EDX + EDI*0x1 + 0x8],XMM4
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68ba7c;}
case 0x68ba7c:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68ba7e;}
case 0x68ba7e:{ // SHL EDX,0x2
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
return 0x68ba81;}
case 0x68ba81:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ba83;}
case 0x68ba83:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68ba85;}
case 0x68ba85:{ // SHL EDX,0x2
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
return 0x68ba88;}
case 0x68ba88:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ba8a;}
case 0x68ba8a:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68ba8d;}
case 0x68ba8d:{ // JNZ 0x0068b92b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68b92b;}
return 0x68ba93;}
case 0x68ba93:{ // JMP 0x0068ba98
return 0x68ba98;
return 0x68ba95;}
case 0x68ba95:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ba98;}
case 0x68ba98:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ba9b;}
case 0x68ba9b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ba9d;}
case 0x68ba9d:{ // JBE 0x0068bab7
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68bab7;}
return 0x68ba9f;}
case 0x68ba9f:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68baa2;}
case 0x68baa2:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68baa5;}
case 0x68baa5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68baa6;}
case 0x68baa6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68baa7;}
case 0x68baa7:{ // CALL 0x0068cdbc
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68baacull);
return 0x68cdbc;
return 0x68baac;}
case 0x68baac:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68baaf;}
case 0x68baaf:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68bab2;}
case 0x68bab2:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68bab5;}
case 0x68bab5:{ // JNZ 0x0068baa2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68baa2;}
return 0x68bab7;}
case 0x68bab7:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68baba;}
case 0x68baba:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68babb;}
case 0x68babb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68babc;}
case 0x68babc:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68babe;}
case 0x68babe:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68babf;}
case 0x68babf:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68bac1;}
case 0x68bac1:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bac2;}
case 0x68bac2:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68bac5;}
case 0x68bac5:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68bac7;}
case 0x68bac7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bac8;}
case 0x68bac8:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68baca;}
case 0x68baca:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bacb;}
case 0x68bacb:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bace;}
case 0x68bace:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bad1;}
case 0x68bad1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bad2;}
case 0x68bad2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68bad4;}
case 0x68bad4:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bada;}
case 0x68bada:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68badd;}
case 0x68badd:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bade;}
case 0x68bade:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68badf;}
case 0x68badf:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bae2;}
case 0x68bae2:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68bae4;}
case 0x68bae4:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68bae6;}
case 0x68bae6:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bae9;}
case 0x68bae9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68baea;}
case 0x68baea:{ // CMP ECX,EAX
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
return 0x68baec;}
case 0x68baec:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68baee;}
case 0x68baee:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68baf0;}
case 0x68baf0:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68baf2;}
case 0x68baf2:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68baf5;}
case 0x68baf5:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68baf8;}
case 0x68baf8:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bafb;}
case 0x68bafb:{ // JZ 0x0068bc49
if(r<1>(c,0x206)){return 0x68bc49;}
return 0x68bb01;}
case 0x68bb01:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bb04;}
case 0x68bb04:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68bb0a;}
case 0x68bb0a:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68bb0full);
return 0x68b19f;
return 0x68bb0f;}
case 0x68bb0f:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bb11;}
case 0x68bb11:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bb14;}
case 0x68bb14:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bb17;}
case 0x68bb17:{ // JBE 0x0068bc49
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68bc49;}
return 0x68bb1d;}
case 0x68bb1d:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68bb21;}
case 0x68bb21:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68bb25;}
case 0x68bb25:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bb28;}
case 0x68bb28:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bb2b;}
case 0x68bb2b:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bb2e;}
case 0x68bb2e:{ // MOVLPS XMM0,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bb32;}
case 0x68bb32:{ // MOVSS XMM4,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bb37;}
case 0x68bb37:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bb3a;}
case 0x68bb3a:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bb3e;}
case 0x68bb3e:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bb41;}
case 0x68bb41:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bb44;}
case 0x68bb44:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68bb47;}
case 0x68bb47:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bb4b;}
case 0x68bb4b:{ // SHUFPS XMM1,XMM2,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bb4f;}
case 0x68bb4f:{ // SHUFPS XMM0,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bb53;}
case 0x68bb53:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bb59;}
case 0x68bb59:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bb5c;}
case 0x68bb5c:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bb62;}
case 0x68bb62:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68bb65;}
case 0x68bb65:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bb6b;}
case 0x68bb6b:{ // MOVLHPS XMM4,XMM1
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68bb6e;}
case 0x68bb6e:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bb71;}
case 0x68bb71:{ // SHUFPS XMM1,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bb75;}
case 0x68bb75:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bb78;}
case 0x68bb78:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68bb7f;}
case 0x68bb7f:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bb82;}
case 0x68bb82:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68bb85;}
case 0x68bb85:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68bb8c;}
case 0x68bb8c:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bb8f;}
case 0x68bb8f:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68bb96;}
case 0x68bb96:{ // ADDPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68bb99;}
case 0x68bb99:{ // MOVAPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68bb9c;}
case 0x68bb9c:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68bb9f;}
case 0x68bb9f:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bba2;}
case 0x68bba2:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68bba9;}
case 0x68bba9:{ // MULPS XMM1,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68bbad;}
case 0x68bbad:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bbb0;}
case 0x68bbb0:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68bbb7;}
case 0x68bbb7:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68bbbe;}
case 0x68bbbe:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bbc1;}
case 0x68bbc1:{ // MOVAPS XMM4,XMM3
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68bbc4;}
case 0x68bbc4:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68bbcb;}
case 0x68bbcb:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68bbd2;}
case 0x68bbd2:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68bbd5;}
case 0x68bbd5:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68bbd8;}
case 0x68bbd8:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68bbdb;}
case 0x68bbdb:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68bbde;}
case 0x68bbde:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68bbe1;}
case 0x68bbe1:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bbe4;}
case 0x68bbe4:{ // UNPCKLPS XMM3,XMM4
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68bbe7;}
case 0x68bbe7:{ // MOVLPS qword ptr [EDI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68bbea;}
case 0x68bbea:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68bbee;}
case 0x68bbee:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bbf1;}
case 0x68bbf1:{ // UNPCKLPS XMM1,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13c000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0x13c000)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0x13c004)));
return 0x68bbf5;}
case 0x68bbf5:{ // UNPCKHPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13bf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0x13bf08)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0x13bf0c)));
return 0x68bbf9;}
case 0x68bbf9:{ // MOVSS dword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bbfe;}
case 0x68bbfe:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bc01;}
case 0x68bc01:{ // MOVHLPS XMM3,XMM1
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x68bc04;}
case 0x68bc04:{ // MOVSS dword ptr [ECX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68bc0a;}
case 0x68bc0a:{ // UNPCKHPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bc0d;}
case 0x68bc0d:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68bc11;}
case 0x68bc11:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68bc14;}
case 0x68bc14:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68bc18;}
case 0x68bc18:{ // MOVSS dword ptr [EDI + ECX*0x2 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68bc1e;}
case 0x68bc1e:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bc21;}
case 0x68bc21:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68bc24;}
case 0x68bc24:{ // MOVHLPS XMM1,XMM0
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68bc27;}
case 0x68bc27:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bc2a;}
case 0x68bc2a:{ // MOVSS dword ptr [EDX + EDI*0x1 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68bc30;}
case 0x68bc30:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68bc32;}
case 0x68bc32:{ // SHL EDX,0x2
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
return 0x68bc35;}
case 0x68bc35:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc37;}
case 0x68bc37:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68bc39;}
case 0x68bc39:{ // SHL EDX,0x2
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
return 0x68bc3c;}
case 0x68bc3c:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc3e;}
case 0x68bc3e:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68bc41;}
case 0x68bc41:{ // JNZ 0x0068bb2b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68bb2b;}
return 0x68bc47;}
case 0x68bc47:{ // JMP 0x0068bc4c
return 0x68bc4c;
return 0x68bc49;}
case 0x68bc49:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bc4c;}
case 0x68bc4c:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bc4f;}
case 0x68bc4f:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc51;}
case 0x68bc51:{ // JBE 0x0068bc6b
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68bc6b;}
return 0x68bc53;}
case 0x68bc53:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bc56;}
case 0x68bc56:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc59;}
case 0x68bc59:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc5a;}
case 0x68bc5a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc5b;}
case 0x68bc5b:{ // CALL 0x0068d465
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68bc60ull);
return 0x68d465;
return 0x68bc60;}
case 0x68bc60:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68bc63;}
case 0x68bc63:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68bc66;}
case 0x68bc66:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68bc69;}
case 0x68bc69:{ // JNZ 0x0068bc56
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68bc56;}
return 0x68bc6b;}
case 0x68bc6b:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bc6e;}
case 0x68bc6e:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bc6f;}
case 0x68bc6f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bc70;}
case 0x68bc70:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68bc72;}
case 0x68bc72:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bc73;}
case 0x68bc73:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68bc75;}
case 0x68bc75:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bc76;}
case 0x68bc76:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68bc79;}
case 0x68bc79:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68bc7b;}
case 0x68bc7b:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc7c;}
case 0x68bc7c:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68bc7e;}
case 0x68bc7e:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc7f;}
case 0x68bc7f:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc82;}
case 0x68bc82:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc85;}
case 0x68bc85:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc86;}
case 0x68bc86:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68bc88;}
case 0x68bc88:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc8e;}
case 0x68bc8e:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bc91;}
case 0x68bc91:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc92;}
case 0x68bc92:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bc93;}
case 0x68bc93:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bc96;}
case 0x68bc96:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68bc98;}
case 0x68bc98:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68bc9a;}
case 0x68bc9a:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bc9d;}
case 0x68bc9d:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68bc9e;}
case 0x68bc9e:{ // CMP ECX,EAX
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
return 0x68bca0;}
case 0x68bca0:{ // SBB ESI,ESI
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bca2;}
case 0x68bca2:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bca4;}
case 0x68bca4:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bca6;}
case 0x68bca6:{ // SHR ESI,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x68bca9;}
case 0x68bca9:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bcac;}
case 0x68bcac:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bcaf;}
case 0x68bcaf:{ // JZ 0x0068be4d
if(r<1>(c,0x206)){return 0x68be4d;}
return 0x68bcb5;}
case 0x68bcb5:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bcb8;}
case 0x68bcb8:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68bcbe;}
case 0x68bcbe:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68bcc3ull);
return 0x68b19f;
return 0x68bcc3;}
case 0x68bcc3:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bcc5;}
case 0x68bcc5:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bcc8;}
case 0x68bcc8:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bccb;}
case 0x68bccb:{ // JBE 0x0068be4d
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68be4d;}
return 0x68bcd1;}
case 0x68bcd1:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68bcd5;}
case 0x68bcd5:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68bcd9;}
case 0x68bcd9:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bcdc;}
case 0x68bcdc:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bcdf;}
case 0x68bcdf:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bce2;}
case 0x68bce2:{ // MOVLPS XMM0,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bce6;}
case 0x68bce6:{ // MOVSS XMM4,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bceb;}
case 0x68bceb:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bcee;}
case 0x68bcee:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bcf2;}
case 0x68bcf2:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bcf5;}
case 0x68bcf5:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bcf8;}
case 0x68bcf8:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68bcfb;}
case 0x68bcfb:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bcff;}
case 0x68bcff:{ // SHUFPS XMM0,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bd03;}
case 0x68bd03:{ // SHUFPS XMM1,XMM2,0xdd
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bd07;}
case 0x68bd07:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bd0d;}
case 0x68bd0d:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bd10;}
case 0x68bd10:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bd16;}
case 0x68bd16:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68bd19;}
case 0x68bd19:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68bd1f;}
case 0x68bd1f:{ // MOVLHPS XMM4,XMM1
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68bd22;}
case 0x68bd22:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bd25;}
case 0x68bd25:{ // SHUFPS XMM1,XMM2,0x88
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68bd29;}
case 0x68bd29:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bd2c;}
case 0x68bd2c:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd33;}
case 0x68bd33:{ // MOVAPS XMM4,XMM3
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68bd36;}
case 0x68bd36:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd3d;}
case 0x68bd3d:{ // ADDPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68bd40;}
case 0x68bd40:{ // MOVAPS XMM4,XMM5
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68bd43;}
case 0x68bd43:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bd46;}
case 0x68bd46:{ // MULPS XMM2,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd4a;}
case 0x68bd4a:{ // ADDPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68bd4d;}
case 0x68bd4d:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bd50;}
case 0x68bd50:{ // ADDPS XMM2,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68bd54;}
case 0x68bd54:{ // RCPPS XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048749,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x68bd57;}
case 0x68bd57:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bd5a;}
case 0x68bd5a:{ // MULPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68bd5d;}
case 0x68bd5d:{ // MULPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68bd60;}
case 0x68bd60:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68bd63;}
case 0x68bd63:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68bd66;}
case 0x68bd66:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bd69;}
case 0x68bd69:{ // SUBPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68bd6c;}
case 0x68bd6c:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bd6f;}
case 0x68bd6f:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd76;}
case 0x68bd76:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68bd79;}
case 0x68bd79:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd80;}
case 0x68bd80:{ // ADDPS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x134c),4,4));
return 0x68bd83;}
case 0x68bd83:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bd86;}
case 0x68bd86:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd8d;}
case 0x68bd8d:{ // ADDPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68bd90;}
case 0x68bd90:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bd93;}
case 0x68bd93:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68bd9a;}
case 0x68bd9a:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68bda1;}
case 0x68bda1:{ // MOVAPS XMM2,XMM6
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68bda4;}
case 0x68bda4:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68bda8;}
case 0x68bda8:{ // MOVAPS XMM6,XMM3
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68bdab;}
case 0x68bdab:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68bdb2;}
case 0x68bdb2:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68bdb9;}
case 0x68bdb9:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68bdbc;}
case 0x68bdbc:{ // MOVAPS XMM5,XMM1
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68bdbf;}
case 0x68bdbf:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68bdc6;}
case 0x68bdc6:{ // MULPS XMM1,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68bdca;}
case 0x68bdca:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68bdcd;}
case 0x68bdcd:{ // ADDPS XMM0,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68bdd1;}
case 0x68bdd1:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68bdd4;}
case 0x68bdd4:{ // ADDPS XMM7,XMM5
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x134c),4,4));
return 0x68bdd7;}
case 0x68bdd7:{ // MULPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68bdda;}
case 0x68bdda:{ // MOVAPS XMM5,XMM7
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68bddd;}
case 0x68bddd:{ // ADDPS XMM5,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68bde1;}
case 0x68bde1:{ // MULPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68bde4;}
case 0x68bde4:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68bde7;}
case 0x68bde7:{ // UNPCKLPS XMM3,XMM5
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68bdea;}
case 0x68bdea:{ // MOVLPS qword ptr [EDI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68bded;}
case 0x68bded:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68bdf1;}
case 0x68bdf1:{ // MULPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68bdf4;}
case 0x68bdf4:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68bdf7;}
case 0x68bdf7:{ // UNPCKLPS XMM1,XMM4
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68bdfa;}
case 0x68bdfa:{ // MOVSS dword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bdff;}
case 0x68bdff:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68be02;}
case 0x68be02:{ // MOVHLPS XMM3,XMM1
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x68be05;}
case 0x68be05:{ // MOVSS dword ptr [ECX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68be0b;}
case 0x68be0b:{ // UNPCKHPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68be0e;}
case 0x68be0e:{ // UNPCKHPS XMM0,XMM4
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68be11;}
case 0x68be11:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68be15;}
case 0x68be15:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68be18;}
case 0x68be18:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68be1c;}
case 0x68be1c:{ // MOVSS dword ptr [EDI + ECX*0x2 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68be22;}
case 0x68be22:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68be25;}
case 0x68be25:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68be28;}
case 0x68be28:{ // MOVHLPS XMM1,XMM0
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68be2b;}
case 0x68be2b:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68be2e;}
case 0x68be2e:{ // MOVSS dword ptr [EDX + EDI*0x1 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68be34;}
case 0x68be34:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68be36;}
case 0x68be36:{ // SHL EDX,0x2
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
return 0x68be39;}
case 0x68be39:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68be3b;}
case 0x68be3b:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68be3d;}
case 0x68be3d:{ // SHL EDX,0x2
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
return 0x68be40;}
case 0x68be40:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68be42;}
case 0x68be42:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68be45;}
case 0x68be45:{ // JNZ 0x0068bcdf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68bcdf;}
return 0x68be4b;}
case 0x68be4b:{ // JMP 0x0068be50
return 0x68be50;
return 0x68be4d;}
case 0x68be4d:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68be50;}
case 0x68be50:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68be53;}
case 0x68be53:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68be55;}
case 0x68be55:{ // JBE 0x0068be6f
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68be6f;}
return 0x68be57;}
case 0x68be57:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68be5a;}
case 0x68be5a:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68be5d;}
case 0x68be5d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68be5e;}
case 0x68be5e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68be5f;}
case 0x68be5f:{ // CALL 0x0068d531
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68be64ull);
return 0x68d531;
return 0x68be64;}
case 0x68be64:{ // ADD ESI,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
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
return 0x68be67;}
case 0x68be67:{ // ADD EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
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
return 0x68be6a;}
case 0x68be6a:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x68be6d;}
case 0x68be6d:{ // JNZ 0x0068be5a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68be5a;}
return 0x68be6f;}
case 0x68be6f:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68be72;}
case 0x68be72:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68be73;}
case 0x68be73:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68be74;}
case 0x68be74:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68be76;}
case 0x68be76:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68be77;}
case 0x68be77:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68be79;}
case 0x68be79:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68be7a;}
case 0x68be7a:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68be7d;}
case 0x68be7d:{ // SUB ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68be80;}
case 0x68be80:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x68be83;}
case 0x68be83:{ // MOVQ MM6,qword ptr [0x0080acd0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x80acd0)));
return 0x68be8a;}
case 0x68be8a:{ // MOVQ MM2,qword ptr [0x0080ace0]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x80ace0)));
return 0x68be91;}
case 0x68be91:{ // PAND MM6,MM0
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1100)));
return 0x68be94;}
case 0x68be94:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68be97;}
case 0x68be97:{ // PAND MM2,MM0
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1100)));
return 0x68be9a;}
case 0x68be9a:{ // PAND MM0,qword ptr [0x0080acc0]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x80acc0)));
return 0x68bea1;}
case 0x68bea1:{ // PCMPEQW MM3,MM7
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x68bea4;}
case 0x68bea4:{ // PANDN MM3,qword ptr [0x0080acb0]
wu<8>(c,0xeb600,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1130)));
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb600),m<8>(c,0x80acb0)));
return 0x68beab;}
case 0x68beab:{ // POR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x68beae;}
case 0x68beae:{ // MOVQ MM3,MM7
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x68beb1;}
case 0x68beb1:{ // PMAXSW MM6,qword ptr [0x0080acf0]
wu<8>(c,0x113000,eval<Op::COPY,8,8>(m<8>(c,0x80acf0)));
wu<1>(c,0x113100,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1160),u<2>(c,0x113000)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113100)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113000)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113100)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1160)));
wr<2>(c,0x1160,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113200,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1162),u<2>(c,0x113002)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113200)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113002)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113200)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113300,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1164),u<2>(c,0x113004)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113300)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113004)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113300)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1164)));
wr<2>(c,0x1164,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1166),u<2>(c,0x113006)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113400)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113006)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113400)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1166)));
wr<2>(c,0x1166,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
return 0x68beb8;}
case 0x68beb8:{ // MOVQ MM4,qword ptr [0x0080ad00]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x80ad00)));
return 0x68bebf;}
case 0x68bebf:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68bec2;}
case 0x68bec2:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x68bec5;}
case 0x68bec5:{ // PUNPCKHWD MM3,MM7
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x68bec8;}
case 0x68bec8:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x68becb;}
case 0x68becb:{ // PUNPCKLWD MM5,MM0
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1100)));
return 0x68bece;}
case 0x68bece:{ // PUNPCKHWD MM7,MM0
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
return 0x68bed1;}
case 0x68bed1:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x68bed4;}
case 0x68bed4:{ // PADDD MM3,MM4
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1140)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1144)));
return 0x68bed7;}
case 0x68bed7:{ // PSLLD MM6,0xd
wr<4>(c,0x1160,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1160),0xdull));
wr<4>(c,0x1164,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1164),0xdull));
return 0x68bedb;}
case 0x68bedb:{ // PSLLD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x68bedf;}
case 0x68bedf:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x68bee2;}
case 0x68bee2:{ // POR MM3,MM7
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1170)));
return 0x68bee5;}
case 0x68bee5:{ // MOVQ qword ptr [ESP],MM6
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x68bee9;}
case 0x68bee9:{ // MOVQ qword ptr [ESP + 0x8],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68beee;}
case 0x68beee:{ // MOVLPS XMM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bef2;}
case 0x68bef2:{ // MOVHPS XMM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bef7;}
case 0x68bef7:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x68befa;}
case 0x68befa:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68befd;}
case 0x68befd:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x68bf00;}
case 0x68bf00:{ // PUNPCKHWD MM7,MM3
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x68bf03;}
case 0x68bf03:{ // CVTPI2PS XMM0,MM2
wr<4>(c,0x1200,float_op("INT2FLOAT",r<4>(c,0x1120),4,0x0ull,4,4));
wr<4>(c,0x1204,float_op("INT2FLOAT",r<4>(c,0x1124),4,0x0ull,4,4));
return 0x68bf06;}
case 0x68bf06:{ // CVTPI2PS XMM2,MM7
wr<4>(c,0x1280,float_op("INT2FLOAT",r<4>(c,0x1170),4,0x0ull,4,4));
wr<4>(c,0x1284,float_op("INT2FLOAT",r<4>(c,0x1174),4,0x0ull,4,4));
return 0x68bf09;}
case 0x68bf09:{ // MOVLHPS XMM0,XMM2
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
return 0x68bf0c;}
case 0x68bf0c:{ // MULPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68bf0f;}
case 0x68bf0f:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68bf12;}
case 0x68bf12:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68bf15;}
case 0x68bf15:{ // MOVQ MM6,qword ptr [0x0080acd0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x80acd0)));
return 0x68bf1c;}
case 0x68bf1c:{ // MOVQ MM2,qword ptr [0x0080ace0]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x80ace0)));
return 0x68bf23;}
case 0x68bf23:{ // PAND MM6,MM0
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1100)));
return 0x68bf26;}
case 0x68bf26:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68bf29;}
case 0x68bf29:{ // PAND MM2,MM0
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1100)));
return 0x68bf2c;}
case 0x68bf2c:{ // PAND MM0,qword ptr [0x0080acc0]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x80acc0)));
return 0x68bf33;}
case 0x68bf33:{ // PCMPEQW MM3,MM7
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x68bf36;}
case 0x68bf36:{ // PANDN MM3,qword ptr [0x0080acb0]
wu<8>(c,0xeb600,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1130)));
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb600),m<8>(c,0x80acb0)));
return 0x68bf3d;}
case 0x68bf3d:{ // POR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x68bf40;}
case 0x68bf40:{ // MOVQ MM3,MM7
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x68bf43;}
case 0x68bf43:{ // PMAXSW MM6,qword ptr [0x0080acf0]
wu<8>(c,0x113000,eval<Op::COPY,8,8>(m<8>(c,0x80acf0)));
wu<1>(c,0x113100,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1160),u<2>(c,0x113000)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113100)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113000)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113100)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1160)));
wr<2>(c,0x1160,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113200,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1162),u<2>(c,0x113002)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113200)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113002)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113200)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113300,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1164),u<2>(c,0x113004)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113300)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113004)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113300)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1164)));
wr<2>(c,0x1164,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113400,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1166),u<2>(c,0x113006)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113400)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113006)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113400)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1166)));
wr<2>(c,0x1166,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
return 0x68bf4a;}
case 0x68bf4a:{ // MOVQ MM4,qword ptr [0x0080ad00]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x80ad00)));
return 0x68bf51;}
case 0x68bf51:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68bf54;}
case 0x68bf54:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x68bf57;}
case 0x68bf57:{ // PUNPCKHWD MM3,MM7
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x68bf5a;}
case 0x68bf5a:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x68bf5d;}
case 0x68bf5d:{ // PUNPCKLWD MM5,MM0
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1100)));
return 0x68bf60;}
case 0x68bf60:{ // PUNPCKHWD MM7,MM0
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
return 0x68bf63;}
case 0x68bf63:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x68bf66;}
case 0x68bf66:{ // PADDD MM3,MM4
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1140)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1144)));
return 0x68bf69;}
case 0x68bf69:{ // PSLLD MM6,0xd
wr<4>(c,0x1160,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1160),0xdull));
wr<4>(c,0x1164,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1164),0xdull));
return 0x68bf6d;}
case 0x68bf6d:{ // PSLLD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x68bf71;}
case 0x68bf71:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x68bf74;}
case 0x68bf74:{ // POR MM3,MM7
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1170)));
return 0x68bf77;}
case 0x68bf77:{ // MOVQ qword ptr [ESP],MM6
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x68bf7b;}
case 0x68bf7b:{ // MOVQ qword ptr [ESP + 0x8],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68bf80;}
case 0x68bf80:{ // MOVLPS XMM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bf84;}
case 0x68bf84:{ // MOVHPS XMM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bf89;}
case 0x68bf89:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x68bf8c;}
case 0x68bf8c:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68bf8f;}
case 0x68bf8f:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x68bf92;}
case 0x68bf92:{ // PUNPCKHWD MM7,MM3
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x68bf95;}
case 0x68bf95:{ // CVTPI2PS XMM3,MM2
wr<4>(c,0x12c0,float_op("INT2FLOAT",r<4>(c,0x1120),4,0x0ull,4,4));
wr<4>(c,0x12c4,float_op("INT2FLOAT",r<4>(c,0x1124),4,0x0ull,4,4));
return 0x68bf98;}
case 0x68bf98:{ // CVTPI2PS XMM2,MM7
wr<4>(c,0x1280,float_op("INT2FLOAT",r<4>(c,0x1170),4,0x0ull,4,4));
wr<4>(c,0x1284,float_op("INT2FLOAT",r<4>(c,0x1174),4,0x0ull,4,4));
return 0x68bf9b;}
case 0x68bf9b:{ // MOVLHPS XMM3,XMM2
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
return 0x68bf9e;}
case 0x68bf9e:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68bfa1;}
case 0x68bfa1:{ // ADD ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bfa4;}
case 0x68bfa4:{ // EMMS
wr<2>(c,0x10a4,eval<Op::COPY,2,2>(0xffffull));
return 0x68bfa6;}
case 0x68bfa6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68bfa7;}
case 0x68bfa7:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68bfa9;}
case 0x68bfa9:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bfaa;}
case 0x68bfaa:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68bfac;}
case 0x68bfac:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bfaf;}
case 0x68bfaf:{ // CMP dword ptr [EBP + 0x10],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x8ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bfb3;}
case 0x68bfb3:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bfb4;}
case 0x68bfb4:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bfb5;}
case 0x68bfb5:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68bfb6;}
case 0x68bfb6:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bfb9;}
case 0x68bfb9:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bfbc;}
case 0x68bfbc:{ // JC 0x0068c00a
if(r<1>(c,0x200)){return 0x68c00a;}
return 0x68bfbe;}
case 0x68bfbe:{ // MOV ESI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bfc1;}
case 0x68bfc1:{ // AND ESI,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bfc4;}
case 0x68bfc4:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68bfc7;}
case 0x68bfc7:{ // MOV EDX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bfca;}
case 0x68bfca:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bfcd;}
case 0x68bfcd:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bfd0;}
case 0x68bfd0:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bfd3;}
case 0x68bfd3:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68bfd7;}
case 0x68bfd7:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bfda;}
case 0x68bfda:{ // CALL 0x0068be7d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68bfdfull);
return 0x68be7d;
return 0x68bfdf;}
case 0x68bfdf:{ // MOVLPS qword ptr [ECX],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68bfe2;}
case 0x68bfe2:{ // MOVHPS qword ptr [ECX + 0x8],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68bfe6;}
case 0x68bfe6:{ // MOVLPS qword ptr [ECX + 0x10],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68bfea;}
case 0x68bfea:{ // MOVHPS qword ptr [ECX + 0x18],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68bfee;}
case 0x68bfee:{ // ADD ECX,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bff1;}
case 0x68bff1:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68bff4;}
case 0x68bff4:{ // JNZ 0x0068bfd0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68bfd0;}
return 0x68bff6;}
case 0x68bff6:{ // EMMS
wr<2>(c,0x10a4,eval<Op::COPY,2,2>(0xffffull));
return 0x68bff8;}
case 0x68bff8:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68bffb;}
case 0x68bffb:{ // SUB dword ptr [EBP + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x68bffe;}
case 0x68bffe:{ // LEA EAX,[EAX + ESI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c001;}
default:missing_instruction(c.pc);}}
}
