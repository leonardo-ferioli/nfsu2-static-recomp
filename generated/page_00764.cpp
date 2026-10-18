#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_764(Cpu& c){switch(c.pc){
case 0x764000:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764002;}
case 0x764002:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764005;}
case 0x764005:{ // JGE 0x0076465c
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x76465c;}
return 0x76400b;}
case 0x76400b:{ // OR dword ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x76400f;}
case 0x76400f:{ // NEG dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,u<4>(c,0xa300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_2COMP,4,4>(u<4>(c,0xa300)));
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
return 0x764012;}
case 0x764012:{ // JMP 0x0076465c
return 0x76465c;
return 0x764017;}
case 0x764017:{ // MOV EAX,dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76401a;}
case 0x76401a:{ // MOVSX ECX,BL
wr<4>(c,0x4,eval<Op::INT_SEXT,4,1>(r<1>(c,0xc)));
return 0x76401d;}
case 0x76401d:{ // LEA EAX,[EAX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x764020;}
case 0x764020:{ // LEA EAX,[ECX + EAX*0x2 + -0x30]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffd0ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x764024;}
case 0x764024:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764027;}
case 0x764027:{ // JMP 0x0076465c
return 0x76465c;
return 0x76402c;}
case 0x76402c:{ // AND dword ptr [EBP + -0xc],0x0
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
return 0x764030;}
case 0x764030:{ // JMP 0x0076465c
return 0x76465c;
return 0x764035;}
case 0x764035:{ // CMP BL,0x2a
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x2aull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x2aull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x2aull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764038;}
case 0x764038:{ // JNZ 0x00764058
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764058;}
return 0x76403a;}
case 0x76403a:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x76403e;}
case 0x76403e:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764041;}
case 0x764041:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764044;}
case 0x764044:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764046;}
case 0x764046:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764049;}
case 0x764049:{ // JGE 0x0076465c
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x76465c;}
return 0x76404f;}
case 0x76404f:{ // OR dword ptr [EBP + -0xc],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0xffffffffull));
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
return 0x764053;}
case 0x764053:{ // JMP 0x0076465c
return 0x76465c;
return 0x764058;}
case 0x764058:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76405b;}
case 0x76405b:{ // MOVSX ECX,BL
wr<4>(c,0x4,eval<Op::INT_SEXT,4,1>(r<1>(c,0xc)));
return 0x76405e;}
case 0x76405e:{ // LEA EAX,[EAX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x764061;}
case 0x764061:{ // LEA EAX,[ECX + EAX*0x2 + -0x30]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffd0ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x764065;}
case 0x764065:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764068;}
case 0x764068:{ // JMP 0x0076465c
return 0x76465c;
return 0x76406d;}
case 0x76406d:{ // CMP BL,0x49
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x49ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x49ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x49ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764070;}
case 0x764070:{ // JZ 0x007640a0
if(r<1>(c,0x206)){return 0x7640a0;}
return 0x764072;}
case 0x764072:{ // CMP BL,0x68
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x68ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x68ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x68ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764075;}
case 0x764075:{ // JZ 0x00764097
if(r<1>(c,0x206)){return 0x764097;}
return 0x764077;}
case 0x764077:{ // CMP BL,0x6c
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x6cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x6cull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x6cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76407a;}
case 0x76407a:{ // JZ 0x0076408e
if(r<1>(c,0x206)){return 0x76408e;}
return 0x76407c;}
case 0x76407c:{ // CMP BL,0x77
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x77ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x77ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x77ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76407f;}
case 0x76407f:{ // JNZ 0x0076465c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76465c;}
return 0x764085;}
case 0x764085:{ // OR byte ptr [EBP + -0x7],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x8ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764089;}
case 0x764089:{ // JMP 0x0076465c
return 0x76465c;
return 0x76408e;}
case 0x76408e:{ // OR dword ptr [EBP + -0x8],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x764092;}
case 0x764092:{ // JMP 0x0076465c
return 0x76465c;
return 0x764097;}
case 0x764097:{ // OR dword ptr [EBP + -0x8],0x20
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x20ull));
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
return 0x76409b;}
case 0x76409b:{ // JMP 0x0076465c
return 0x76465c;
return 0x7640a0;}
case 0x7640a0:{ // MOV AL,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x7640a2;}
case 0x7640a2:{ // CMP AL,0x36
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x36ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x36ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x36ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640a4;}
case 0x7640a4:{ // JNZ 0x007640ba
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7640ba;}
return 0x7640a6;}
case 0x7640a6:{ // CMP byte ptr [EDI + 0x1],0x34
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x34ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x34ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x34ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640aa;}
case 0x7640aa:{ // JNZ 0x007640ba
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7640ba;}
return 0x7640ac;}
case 0x7640ac:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640ad;}
case 0x7640ad:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640ae;}
case 0x7640ae:{ // OR byte ptr [EBP + -0x7],0x80
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x80ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640b2;}
case 0x7640b2:{ // MOV dword ptr [EBP + 0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7640b5;}
case 0x7640b5:{ // JMP 0x0076465c
return 0x76465c;
return 0x7640ba;}
case 0x7640ba:{ // CMP AL,0x33
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x33ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x33ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x33ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640bc;}
case 0x7640bc:{ // JNZ 0x007640d2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7640d2;}
return 0x7640be;}
case 0x7640be:{ // CMP byte ptr [EDI + 0x1],0x32
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x32ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x32ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x32ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640c2;}
case 0x7640c2:{ // JNZ 0x007640d2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7640d2;}
return 0x7640c4;}
case 0x7640c4:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640c5;}
case 0x7640c5:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640c6;}
case 0x7640c6:{ // AND byte ptr [EBP + -0x7],0x7f
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0x7full));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640ca;}
case 0x7640ca:{ // MOV dword ptr [EBP + 0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7640cd;}
case 0x7640cd:{ // JMP 0x0076465c
return 0x76465c;
return 0x7640d2;}
case 0x7640d2:{ // CMP AL,0x64
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x64ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x64ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x64ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640d4;}
case 0x7640d4:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x7640da;}
case 0x7640da:{ // CMP AL,0x69
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x69ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x69ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x69ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640dc;}
case 0x7640dc:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x7640e2;}
case 0x7640e2:{ // CMP AL,0x6f
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x6full));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x6full));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x6full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640e4;}
case 0x7640e4:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x7640ea;}
case 0x7640ea:{ // CMP AL,0x75
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x75ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x75ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x75ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640ec;}
case 0x7640ec:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x7640f2;}
case 0x7640f2:{ // CMP AL,0x78
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x78ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x78ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x78ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640f4;}
case 0x7640f4:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x7640fa;}
case 0x7640fa:{ // CMP AL,0x58
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x0),0x58ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x58ull));
wu<1>(c,0x60a00,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x58ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x60a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x60a00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x60a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7640fc;}
case 0x7640fc:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x764102;}
case 0x764102:{ // AND dword ptr [EBP + -0x38],0x0
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
return 0x764106;}
case 0x764106:{ // MOV ECX,dword ptr [0x0081aa00]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x81aa00)));
return 0x76410c;}
case 0x76410c:{ // AND dword ptr [EBP + -0x28],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
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
return 0x764110;}
case 0x764110:{ // MOVZX EAX,BL
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(r<1>(c,0xc)));
return 0x764113;}
case 0x764113:{ // TEST byte ptr [ECX + EAX*0x2 + 0x1],0x80
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7400)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764118;}
case 0x764118:{ // JZ 0x0076412d
if(r<1>(c,0x206)){return 0x76412d;}
return 0x76411a;}
case 0x76411a:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76411d;}
case 0x76411d:{ // LEA ESI,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764120;}
case 0x764120:{ // MOV AL,BL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0xc)));
return 0x764122;}
case 0x764122:{ // CALL 0x00763e79
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764127ull);
return 0x763e79;
return 0x764127;}
case 0x764127:{ // MOV BL,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<1>(c,0xc,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x764129;}
case 0x764129:{ // INC EDI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76412a;}
case 0x76412a:{ // MOV dword ptr [EBP + 0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76412d;}
case 0x76412d:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764130;}
case 0x764130:{ // LEA ESI,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764133;}
case 0x764133:{ // MOV AL,BL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0xc)));
return 0x764135;}
case 0x764135:{ // CALL 0x00763e79
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76413aull);
return 0x763e79;
return 0x76413a;}
case 0x76413a:{ // JMP 0x0076465c
return 0x76465c;
return 0x76413f;}
case 0x76413f:{ // MOVSX EAX,BL
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(r<1>(c,0xc)));
return 0x764142;}
case 0x764142:{ // CMP EAX,0x67
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x67ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x67ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x67ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764145;}
case 0x764145:{ // JG 0x00764391
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x764391;}
return 0x76414b;}
case 0x76414b:{ // CMP EAX,0x65
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x65ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x65ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x65ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76414e;}
case 0x76414e:{ // JGE 0x007641d4
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x7641d4;}
return 0x764154;}
case 0x764154:{ // CMP EAX,0x58
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x58ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x58ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x58ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764157;}
case 0x764157:{ // JG 0x00764235
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x764235;}
return 0x76415d;}
case 0x76415d:{ // JZ 0x00764412
if(r<1>(c,0x206)){return 0x764412;}
return 0x764163;}
case 0x764163:{ // SUB EAX,0x43
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x43ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x43ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x43ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764166;}
case 0x764166:{ // JZ 0x007641f7
if(r<1>(c,0x206)){return 0x7641f7;}
return 0x76416c;}
case 0x76416c:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76416d;}
case 0x76416d:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76416e;}
case 0x76416e:{ // JZ 0x007641ca
if(r<1>(c,0x206)){return 0x7641ca;}
return 0x764170;}
case 0x764170:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764171;}
case 0x764171:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764172;}
case 0x764172:{ // JZ 0x007641ca
if(r<1>(c,0x206)){return 0x7641ca;}
return 0x764174;}
case 0x764174:{ // SUB EAX,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xcull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764177;}
case 0x764177:{ // JNZ 0x0076455a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76455a;}
return 0x76417d;}
case 0x76417d:{ // TEST word ptr [EBP + -0x8],0x830
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa3e00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x17100),0x830ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa3e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764183;}
case 0x764183:{ // JNZ 0x00764189
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764189;}
return 0x764185;}
case 0x764185:{ // OR byte ptr [EBP + -0x7],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x8ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764189;}
case 0x764189:{ // MOV ECX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76418c;}
case 0x76418c:{ // CMP ECX,-0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xffffffffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xffffffffull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xffffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76418f;}
case 0x76418f:{ // JNZ 0x00764196
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764196;}
return 0x764191;}
case 0x764191:{ // MOV ECX,0x7fffffff
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x7fffffffull));
return 0x764196;}
case 0x764196:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x76419a;}
case 0x76419a:{ // TEST word ptr [EBP + -0x8],0x810
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa3e00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x17100),0x810ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa3e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7641a0;}
case 0x7641a0:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7641a3;}
case 0x7641a3:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7641a6;}
case 0x7641a6:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641a9;}
case 0x7641a9:{ // JZ 0x007643e7
if(r<1>(c,0x206)){return 0x7643e7;}
return 0x7641af;}
case 0x7641af:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7641b1;}
case 0x7641b1:{ // JNZ 0x007641bb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7641bb;}
return 0x7641b3;}
case 0x7641b3:{ // MOV EAX,[0x0081a464]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81a464)));
return 0x7641b8;}
case 0x7641b8:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641bb;}
case 0x7641bb:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7641be;}
case 0x7641be:{ // MOV dword ptr [EBP + -0x28],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641c5;}
case 0x7641c5:{ // JMP 0x007643d9
return 0x7643d9;
return 0x7641ca;}
case 0x7641ca:{ // MOV dword ptr [EBP + -0x3c],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641d1;}
case 0x7641d1:{ // ADD BL,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0xc),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0xc),0x20ull));
wr<1>(c,0xc,eval<Op::INT_ADD,1,1,1>(r<1>(c,0xc),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xc),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7641d4;}
case 0x7641d4:{ // OR dword ptr [EBP + -0x8],0x40
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x40ull));
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
return 0x7641d8;}
case 0x7641d8:{ // CMP dword ptr [EBP + -0xc],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x7641dc;}
case 0x7641dc:{ // LEA ESI,[EBP + 0xfffffdac]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdacull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x7641e2;}
case 0x7641e2:{ // MOV dword ptr [EBP + -0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641e5;}
case 0x7641e5:{ // JGE 0x007642db
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x7642db;}
return 0x7641eb;}
case 0x7641eb:{ // MOV dword ptr [EBP + -0xc],0x6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x6ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7641f2;}
case 0x7641f2:{ // JMP 0x00764322
return 0x764322;
return 0x7641f7;}
case 0x7641f7:{ // TEST word ptr [EBP + -0x8],0x830
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa3e00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x17100),0x830ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa3e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7641fd;}
case 0x7641fd:{ // JNZ 0x00764203
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764203;}
return 0x7641ff;}
case 0x7641ff:{ // OR byte ptr [EBP + -0x7],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x8ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764203;}
case 0x764203:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x764207;}
case 0x764207:{ // TEST word ptr [EBP + -0x8],0x810
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa3e00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x17100),0x810ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa3e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76420d;}
case 0x76420d:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764210;}
case 0x764210:{ // JZ 0x00764274
if(r<1>(c,0x206)){return 0x764274;}
return 0x764212;}
case 0x764212:{ // MOVSX EAX,word ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x764216;}
case 0x764216:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764217;}
case 0x764217:{ // LEA EAX,[EBP + 0xfffffdac]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdacull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x76421d;}
case 0x76421d:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76421e;}
case 0x76421e:{ // CALL 0x0076cab5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764223ull);
return 0x76cab5;
return 0x764223;}
case 0x764223:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764225;}
case 0x764225:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764226;}
case 0x764226:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764227;}
case 0x764227:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76422a;}
case 0x76422a:{ // JGE 0x00764284
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x764284;}
return 0x76422c;}
case 0x76422c:{ // MOV dword ptr [EBP + -0x34],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764233;}
case 0x764233:{ // JMP 0x00764284
return 0x764284;
return 0x764235;}
case 0x764235:{ // SUB EAX,0x5a
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x5aull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x5aull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x5aull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764238;}
case 0x764238:{ // JZ 0x00764292
if(r<1>(c,0x206)){return 0x764292;}
return 0x76423a;}
case 0x76423a:{ // SUB EAX,0x9
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x9ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x9ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x9ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76423d;}
case 0x76423d:{ // JZ 0x00764203
if(r<1>(c,0x206)){return 0x764203;}
return 0x76423f;}
case 0x76423f:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764240;}
case 0x764240:{ // JNZ 0x0076455a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76455a;}
return 0x764246;}
case 0x764246:{ // OR dword ptr [EBP + -0x8],0x40
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0x40ull));
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
return 0x76424a;}
case 0x76424a:{ // MOV dword ptr [EBP + -0x14],0xa
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0xaull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764251;}
case 0x764251:{ // MOV EBX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764254;}
case 0x764254:{ // MOV ESI,0x8000
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x8000ull));
return 0x764259;}
case 0x764259:{ // TEST ESI,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76425b;}
case 0x76425b:{ // JZ 0x00764482
if(r<1>(c,0x206)){return 0x764482;}
return 0x764261;}
case 0x764261:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764264;}
case 0x764264:{ // MOV EAX,dword ptr [ECX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764266;}
case 0x764266:{ // MOV EDX,dword ptr [ECX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764269;}
case 0x764269:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76426c;}
case 0x76426c:{ // MOV dword ptr [EBP + 0x10],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76426f;}
case 0x76426f:{ // JMP 0x007644aa
return 0x7644aa;
return 0x764274;}
case 0x764274:{ // MOV AL,byte ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x764277;}
case 0x764277:{ // MOV byte ptr [EBP + 0xfffffdac],AL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdacull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x76427d;}
case 0x76427d:{ // MOV dword ptr [EBP + -0x14],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764284;}
case 0x764284:{ // LEA EAX,[EBP + 0xfffffdac]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdacull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x76428a;}
case 0x76428a:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76428d;}
case 0x76428d:{ // JMP 0x0076455a
return 0x76455a;
return 0x764292;}
case 0x764292:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x764296;}
case 0x764296:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764299;}
case 0x764299:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76429c;}
case 0x76429c:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76429e;}
case 0x76429e:{ // JZ 0x007642cd
if(r<1>(c,0x206)){return 0x7642cd;}
return 0x7642a0;}
case 0x7642a0:{ // MOV ECX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7642a3;}
case 0x7642a3:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7642a5;}
case 0x7642a5:{ // JZ 0x007642cd
if(r<1>(c,0x206)){return 0x7642cd;}
return 0x7642a7;}
case 0x7642a7:{ // TEST byte ptr [EBP + -0x7],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
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
return 0x7642ab;}
case 0x7642ab:{ // MOVSX EAX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x7642ae;}
case 0x7642ae:{ // MOV dword ptr [EBP + -0x10],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7642b1;}
case 0x7642b1:{ // JZ 0x007642c4
if(r<1>(c,0x206)){return 0x7642c4;}
return 0x7642b3;}
case 0x7642b3:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x7642b4;}
case 0x7642b4:{ // SUB EAX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7642b6;}
case 0x7642b6:{ // SAR EAX,0x1
wu<4>(c,0x98c00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x98c00),0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7642b8;}
case 0x7642b8:{ // MOV dword ptr [EBP + -0x28],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7642bf;}
case 0x7642bf:{ // JMP 0x00764557
return 0x764557;
return 0x7642c4;}
case 0x7642c4:{ // AND dword ptr [EBP + -0x28],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
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
return 0x7642c8;}
case 0x7642c8:{ // JMP 0x00764557
return 0x764557;
return 0x7642cd;}
case 0x7642cd:{ // MOV EAX,[0x0081a460]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81a460)));
return 0x7642d2;}
case 0x7642d2:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7642d5;}
case 0x7642d5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7642d6;}
case 0x7642d6:{ // JMP 0x00764386
return 0x764386;
return 0x7642db;}
case 0x7642db:{ // JNZ 0x007642eb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7642eb;}
return 0x7642dd;}
case 0x7642dd:{ // CMP BL,0x67
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x67ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x67ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x67ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7642e0;}
case 0x7642e0:{ // JNZ 0x00764322
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764322;}
return 0x7642e2;}
case 0x7642e2:{ // MOV dword ptr [EBP + -0xc],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7642e9;}
case 0x7642e9:{ // JMP 0x00764322
return 0x764322;
return 0x7642eb;}
case 0x7642eb:{ // MOV EAX,0x200
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x200ull));
return 0x7642f0;}
case 0x7642f0:{ // CMP dword ptr [EBP + -0xc],EAX
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
return 0x7642f3;}
case 0x7642f3:{ // JLE 0x007642f8
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x7642f8;}
return 0x7642f5;}
case 0x7642f5:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7642f8;}
case 0x7642f8:{ // MOV EDI,0xa3
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0xa3ull));
return 0x7642fd;}
case 0x7642fd:{ // CMP dword ptr [EBP + -0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
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
return 0x764300;}
case 0x764300:{ // JLE 0x00764322
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x764322;}
return 0x764302;}
case 0x764302:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764305;}
case 0x764305:{ // ADD EAX,0x15d
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x15dull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x15dull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x15dull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76430a;}
case 0x76430a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76430b;}
case 0x76430b:{ // CALL 0x0075c6c8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764310ull);
return 0x75c6c8;
return 0x764310;}
case 0x764310:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764312;}
case 0x764312:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764313;}
case 0x764313:{ // MOV dword ptr [EBP + -0x2c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764316;}
case 0x764316:{ // JZ 0x0076431f
if(r<1>(c,0x206)){return 0x76431f;}
return 0x764318;}
case 0x764318:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76431b;}
case 0x76431b:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x76431d;}
case 0x76431d:{ // JMP 0x00764322
return 0x764322;
return 0x76431f;}
case 0x76431f:{ // MOV dword ptr [EBP + -0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764322;}
case 0x764322:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764325;}
case 0x764325:{ // MOV ECX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764327;}
case 0x764327:{ // PUSH dword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76432a;}
case 0x76432a:{ // ADD EAX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76432d;}
case 0x76432d:{ // PUSH dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764330;}
case 0x764330:{ // MOV dword ptr [EBP + 0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764333;}
case 0x764333:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764336;}
case 0x764336:{ // MOV dword ptr [EBP + -0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764339;}
case 0x764339:{ // MOVSX EAX,BL
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(r<1>(c,0xc)));
return 0x76433c;}
case 0x76433c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76433d;}
case 0x76433d:{ // LEA EAX,[EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764340;}
case 0x764340:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764341;}
case 0x764341:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764342;}
case 0x764342:{ // MOV dword ptr [EBP + -0x4c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764345;}
case 0x764345:{ // CALL dword ptr [0x0081a31c]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x81a31c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76434bull);
return uint32_t(u<4>(c,0x5ef00));
return 0x76434b;}
case 0x76434b:{ // MOV EDI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76434e;}
case 0x76434e:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764351;}
case 0x764351:{ // AND EDI,0x80
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764357;}
case 0x764357:{ // JZ 0x00764367
if(r<1>(c,0x206)){return 0x764367;}
return 0x764359;}
case 0x764359:{ // CMP dword ptr [EBP + -0xc],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x76435d;}
case 0x76435d:{ // JNZ 0x00764367
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764367;}
return 0x76435f;}
case 0x76435f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764360;}
case 0x764360:{ // CALL dword ptr [0x0081a328]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x81a328)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764366ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x764366;}
case 0x764366:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764367;}
case 0x764367:{ // CMP BL,0x67
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(r<1>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x67ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x67ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x67ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76436a;}
case 0x76436a:{ // JNZ 0x00764378
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764378;}
return 0x76436c;}
case 0x76436c:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76436e;}
case 0x76436e:{ // JNZ 0x00764378
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764378;}
return 0x764370;}
case 0x764370:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764371;}
case 0x764371:{ // CALL dword ptr [0x0081a320]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x81a320)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764377ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x764377;}
case 0x764377:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764378;}
case 0x764378:{ // CMP byte ptr [ESI],0x2d
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x2dull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x2dull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x2dull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76437b;}
case 0x76437b:{ // JNZ 0x00764385
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764385;}
return 0x76437d;}
case 0x76437d:{ // OR byte ptr [EBP + -0x7],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x1ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764381;}
case 0x764381:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764382;}
case 0x764382:{ // MOV dword ptr [EBP + -0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764385;}
case 0x764385:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764386;}
case 0x764386:{ // CALL 0x00766bc0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76438bull);
return 0x766bc0;
return 0x76438b;}
case 0x76438b:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76438c;}
case 0x76438c:{ // JMP 0x00764557
return 0x764557;
return 0x764391;}
case 0x764391:{ // SUB EAX,0x69
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x69ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x69ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x69ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764394;}
case 0x764394:{ // JZ 0x00764246
if(r<1>(c,0x206)){return 0x764246;}
return 0x76439a;}
case 0x76439a:{ // SUB EAX,0x5
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x5ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76439d;}
case 0x76439d:{ // JZ 0x00764458
if(r<1>(c,0x206)){return 0x764458;}
return 0x7643a3;}
case 0x7643a3:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643a4;}
case 0x7643a4:{ // JZ 0x0076443e
if(r<1>(c,0x206)){return 0x76443e;}
return 0x7643aa;}
case 0x7643aa:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643ab;}
case 0x7643ab:{ // JZ 0x0076440b
if(r<1>(c,0x206)){return 0x76440b;}
return 0x7643ad;}
case 0x7643ad:{ // SUB EAX,0x3
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643b0;}
case 0x7643b0:{ // JZ 0x00764189
if(r<1>(c,0x206)){return 0x764189;}
return 0x7643b6;}
case 0x7643b6:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643b7;}
case 0x7643b7:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643b8;}
case 0x7643b8:{ // JZ 0x0076424a
if(r<1>(c,0x206)){return 0x76424a;}
return 0x7643be;}
case 0x7643be:{ // SUB EAX,0x3
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643c1;}
case 0x7643c1:{ // JNZ 0x0076455a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76455a;}
return 0x7643c7;}
case 0x7643c7:{ // MOV dword ptr [EBP + -0x30],0x27
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x27ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7643ce;}
case 0x7643ce:{ // JMP 0x00764415
return 0x764415;
return 0x7643d0;}
case 0x7643d0:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643d1;}
case 0x7643d1:{ // CMP word ptr [EAX],0x0
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
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
return 0x7643d5;}
case 0x7643d5:{ // JZ 0x007643dd
if(r<1>(c,0x206)){return 0x7643dd;}
return 0x7643d7;}
case 0x7643d7:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643d8;}
case 0x7643d8:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643d9;}
case 0x7643d9:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643db;}
case 0x7643db:{ // JNZ 0x007643d0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7643d0;}
return 0x7643dd;}
case 0x7643dd:{ // SUB EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x7643e0;}
case 0x7643e0:{ // SAR EAX,0x1
wu<4>(c,0x98c00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x98c00),0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643e2;}
case 0x7643e2:{ // JMP 0x00764557
return 0x764557;
return 0x7643e7;}
case 0x7643e7:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643e9;}
case 0x7643e9:{ // JNZ 0x007643f3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7643f3;}
return 0x7643eb;}
case 0x7643eb:{ // MOV EAX,[0x0081a460]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81a460)));
return 0x7643f0;}
case 0x7643f0:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7643f3;}
case 0x7643f3:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7643f6;}
case 0x7643f6:{ // JMP 0x007643ff
return 0x7643ff;
return 0x7643f8;}
case 0x7643f8:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643f9;}
case 0x7643f9:{ // CMP byte ptr [EAX],0x0
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
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
return 0x7643fc;}
case 0x7643fc:{ // JZ 0x00764403
if(r<1>(c,0x206)){return 0x764403;}
return 0x7643fe;}
case 0x7643fe:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7643ff;}
case 0x7643ff:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764401;}
case 0x764401:{ // JNZ 0x007643f8
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7643f8;}
return 0x764403;}
case 0x764403:{ // SUB EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x764406;}
case 0x764406:{ // JMP 0x00764557
return 0x764557;
return 0x76440b;}
case 0x76440b:{ // MOV dword ptr [EBP + -0xc],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x8ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764412;}
case 0x764412:{ // MOV dword ptr [EBP + -0x30],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764415;}
case 0x764415:{ // TEST byte ptr [EBP + -0x8],0x80
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764419;}
case 0x764419:{ // MOV dword ptr [EBP + -0x14],0x10
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x10ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764420;}
case 0x764420:{ // JZ 0x00764251
if(r<1>(c,0x206)){return 0x764251;}
return 0x764426;}
case 0x764426:{ // MOV AL,byte ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x764429;}
case 0x764429:{ // ADD AL,0x51
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x0),0x51ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x0),0x51ull));
wr<1>(c,0x0,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x0),0x51ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76442b;}
case 0x76442b:{ // MOV byte ptr [EBP + -0x1c],0x30
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x30ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x76442f;}
case 0x76442f:{ // MOV byte ptr [EBP + -0x1b],AL
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe5ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x764432;}
case 0x764432:{ // MOV dword ptr [EBP + -0x20],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x2ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764439;}
case 0x764439:{ // JMP 0x00764251
return 0x764251;
return 0x76443e;}
case 0x76443e:{ // TEST byte ptr [EBP + -0x8],0x80
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764442;}
case 0x764442:{ // MOV dword ptr [EBP + -0x14],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x8ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764449;}
case 0x764449:{ // JZ 0x00764251
if(r<1>(c,0x206)){return 0x764251;}
return 0x76444f;}
case 0x76444f:{ // OR byte ptr [EBP + -0x7],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x2ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764453;}
case 0x764453:{ // JMP 0x00764251
return 0x764251;
return 0x764458;}
case 0x764458:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x76445c;}
case 0x76445c:{ // TEST byte ptr [EBP + -0x8],0x20
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764460;}
case 0x764460:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764463;}
case 0x764463:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764466;}
case 0x764466:{ // JZ 0x00764471
if(r<1>(c,0x206)){return 0x764471;}
return 0x764468;}
case 0x764468:{ // MOV CX,word ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x76446c;}
case 0x76446c:{ // MOV word ptr [EAX],CX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,r<4>(c,0x0),u<2>(c,0xa200));
return 0x76446f;}
case 0x76446f:{ // JMP 0x00764476
return 0x764476;
return 0x764471;}
case 0x764471:{ // MOV ECX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764474;}
case 0x764474:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x764476;}
case 0x764476:{ // MOV dword ptr [EBP + -0x34],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76447d;}
case 0x76447d:{ // JMP 0x00764649
return 0x764649;
return 0x764482;}
case 0x764482:{ // ADD dword ptr [EBP + 0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x764486;}
case 0x764486:{ // TEST BL,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764489;}
case 0x764489:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76448c;}
case 0x76448c:{ // JZ 0x007644a0
if(r<1>(c,0x206)){return 0x7644a0;}
return 0x76448e;}
case 0x76448e:{ // TEST BL,0x40
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764491;}
case 0x764491:{ // JZ 0x0076449a
if(r<1>(c,0x206)){return 0x76449a;}
return 0x764493;}
case 0x764493:{ // MOVSX EAX,word ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x764497;}
case 0x764497:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x764498;}
case 0x764498:{ // JMP 0x007644aa
return 0x7644aa;
return 0x76449a;}
case 0x76449a:{ // MOVZX EAX,word ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x76449e;}
case 0x76449e:{ // JMP 0x00764497
return 0x764497;
return 0x7644a0;}
case 0x7644a0:{ // TEST BL,0x40
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644a3;}
case 0x7644a3:{ // MOV EAX,dword ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7644a6;}
case 0x7644a6:{ // JNZ 0x00764497
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764497;}
return 0x7644a8;}
case 0x7644a8:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644aa;}
case 0x7644aa:{ // TEST BL,0x40
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644ad;}
case 0x7644ad:{ // JZ 0x007644c4
if(r<1>(c,0x206)){return 0x7644c4;}
return 0x7644af;}
case 0x7644af:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644b1;}
case 0x7644b1:{ // JG 0x007644c4
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x7644c4;}
return 0x7644b3;}
case 0x7644b3:{ // JL 0x007644b9
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x7644b9;}
return 0x7644b5;}
case 0x7644b5:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644b7;}
case 0x7644b7:{ // JNC 0x007644c4
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x7644c4;}
return 0x7644b9;}
case 0x7644b9:{ // NEG EAX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_2COMP,4,4>(r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644bb;}
case 0x7644bb:{ // ADC EDX,0x0
wu<4>(c,0x48100,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x48500,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x48600,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0x48500),u<4>(c,0x48100)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x48600)));
wu<1>(c,0x48800,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0x48500),u<4>(c,0x48100)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x48800)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x48500),u<4>(c,0x48100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644be;}
case 0x7644be:{ // NEG EDX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_2COMP,4,4>(r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644c0;}
case 0x7644c0:{ // OR byte ptr [EBP + -0x7],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x1ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644c4;}
case 0x7644c4:{ // TEST dword ptr [EBP + -0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(u<4>(c,0x17200),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644c7;}
case 0x7644c7:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x7644c9;}
case 0x7644c9:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7644cb;}
case 0x7644cb:{ // JNZ 0x007644cf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7644cf;}
return 0x7644cd;}
case 0x7644cd:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644cf;}
case 0x7644cf:{ // CMP dword ptr [EBP + -0xc],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x7644d3;}
case 0x7644d3:{ // JGE 0x007644de
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x7644de;}
return 0x7644d5;}
case 0x7644d5:{ // MOV dword ptr [EBP + -0xc],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7644dc;}
case 0x7644dc:{ // JMP 0x007644ef
return 0x7644ef;
return 0x7644de;}
case 0x7644de:{ // AND dword ptr [EBP + -0x8],0xfffffff7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x7644e2;}
case 0x7644e2:{ // MOV EAX,0x200
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x200ull));
return 0x7644e7;}
case 0x7644e7:{ // CMP dword ptr [EBP + -0xc],EAX
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
return 0x7644ea;}
case 0x7644ea:{ // JLE 0x007644ef
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x7644ef;}
return 0x7644ec;}
case 0x7644ec:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7644ef;}
case 0x7644ef:{ // MOV EAX,EBX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x7644f1;}
case 0x7644f1:{ // OR EAX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7644f3;}
case 0x7644f3:{ // JNZ 0x007644f9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7644f9;}
return 0x7644f5;}
case 0x7644f5:{ // AND dword ptr [EBP + -0x20],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
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
return 0x7644f9;}
case 0x7644f9:{ // LEA ESI,[EBP + -0x55]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffabull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7644fc;}
case 0x7644fc:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7644ff;}
case 0x7644ff:{ // DEC dword ptr [EBP + -0xc]
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
return 0x764502;}
case 0x764502:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764504;}
case 0x764504:{ // JG 0x0076450c
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x76450c;}
return 0x764506;}
case 0x764506:{ // MOV EAX,EBX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x764508;}
case 0x764508:{ // OR EAX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76450a;}
case 0x76450a:{ // JZ 0x00764530
if(r<1>(c,0x206)){return 0x764530;}
return 0x76450c;}
case 0x76450c:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76450f;}
case 0x76450f:{ // CDQ
wu<8>(c,0x60000,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x60000),0x4ull));
return 0x764510;}
case 0x764510:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764511;}
case 0x764511:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764512;}
case 0x764512:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764513;}
case 0x764513:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764514;}
case 0x764514:{ // CALL 0x0076cae0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764519ull);
return 0x76cae0;
return 0x764519;}
case 0x764519:{ // ADD ECX,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x30ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76451c;}
case 0x76451c:{ // CMP ECX,0x39
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x39ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x39ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x39ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76451f;}
case 0x76451f:{ // MOV dword ptr [EBP + -0x40],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764522;}
case 0x764522:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764524;}
case 0x764524:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x764526;}
case 0x764526:{ // JLE 0x0076452b
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x76452b;}
return 0x764528;}
case 0x764528:{ // ADD ECX,dword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
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
return 0x76452b;}
case 0x76452b:{ // MOV byte ptr [ESI],CL
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,r<4>(c,0x18),u<1>(c,0xa100));
return 0x76452d;}
case 0x76452d:{ // DEC ESI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76452e;}
case 0x76452e:{ // JMP 0x007644fc
return 0x7644fc;
return 0x764530;}
case 0x764530:{ // LEA EAX,[EBP + -0x55]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffabull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764533;}
case 0x764533:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764535;}
case 0x764535:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764536;}
case 0x764536:{ // TEST byte ptr [EBP + -0x7],0x2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff9ull));
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
return 0x76453a;}
case 0x76453a:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76453d;}
case 0x76453d:{ // MOV dword ptr [EBP + -0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764540;}
case 0x764540:{ // JZ 0x0076455a
if(r<1>(c,0x206)){return 0x76455a;}
return 0x764542;}
case 0x764542:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x764544;}
case 0x764544:{ // CMP byte ptr [ECX],0x30
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x4)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x30ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764547;}
case 0x764547:{ // JNZ 0x0076454d
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76454d;}
return 0x764549;}
case 0x764549:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76454b;}
case 0x76454b:{ // JNZ 0x0076455a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76455a;}
return 0x76454d;}
case 0x76454d:{ // DEC dword ptr [EBP + -0x10]
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
return 0x764550;}
case 0x764550:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764553;}
case 0x764553:{ // MOV byte ptr [ECX],0x30
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x30ull));
wm<1>(c,r<4>(c,0x4),u<1>(c,0xa100));
return 0x764556;}
case 0x764556:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764557;}
case 0x764557:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76455a;}
case 0x76455a:{ // CMP dword ptr [EBP + -0x34],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
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
return 0x76455e;}
case 0x76455e:{ // JNZ 0x00764649
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764649;}
return 0x764564;}
case 0x764564:{ // MOV EBX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764567;}
case 0x764567:{ // TEST BL,0x40
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76456a;}
case 0x76456a:{ // JZ 0x00764592
if(r<1>(c,0x206)){return 0x764592;}
return 0x76456c;}
case 0x76456c:{ // TEST BH,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76456f;}
case 0x76456f:{ // JZ 0x00764577
if(r<1>(c,0x206)){return 0x764577;}
return 0x764571;}
case 0x764571:{ // MOV byte ptr [EBP + -0x1c],0x2d
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2dull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x764575;}
case 0x764575:{ // JMP 0x0076458b
return 0x76458b;
return 0x764577;}
case 0x764577:{ // TEST BL,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76457a;}
case 0x76457a:{ // JZ 0x00764582
if(r<1>(c,0x206)){return 0x764582;}
return 0x76457c;}
case 0x76457c:{ // MOV byte ptr [EBP + -0x1c],0x2b
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x2bull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x764580;}
case 0x764580:{ // JMP 0x0076458b
return 0x76458b;
return 0x764582;}
case 0x764582:{ // TEST BL,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764585;}
case 0x764585:{ // JZ 0x00764592
if(r<1>(c,0x206)){return 0x764592;}
return 0x764587;}
case 0x764587:{ // MOV byte ptr [EBP + -0x1c],0x20
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x20ull));
wm<1>(c,u<4>(c,0x6600),u<1>(c,0xa100));
return 0x76458b;}
case 0x76458b:{ // MOV dword ptr [EBP + -0x20],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x764592;}
case 0x764592:{ // MOV ESI,dword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764595;}
case 0x764595:{ // SUB ESI,dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764598;}
case 0x764598:{ // SUB ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76459b;}
case 0x76459b:{ // TEST BL,0xc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76459e;}
case 0x76459e:{ // JNZ 0x007645b1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7645b1;}
return 0x7645a0;}
case 0x7645a0:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645a3;}
case 0x7645a3:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7645a6;}
case 0x7645a6:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645a7;}
case 0x7645a7:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x7645a9;}
case 0x7645a9:{ // CALL 0x00763eac
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7645aeull);
return 0x763eac;
return 0x7645ae;}
case 0x7645ae:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7645b1;}
case 0x7645b1:{ // PUSH dword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645b4;}
case 0x7645b4:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7645b7;}
case 0x7645b7:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7645ba;}
case 0x7645ba:{ // LEA ECX,[EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7645bd;}
case 0x7645bd:{ // CALL 0x00763ed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7645c2ull);
return 0x763ed0;
return 0x7645c2;}
case 0x7645c2:{ // TEST BL,0x8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7645c5;}
case 0x7645c5:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7645c6;}
case 0x7645c6:{ // JZ 0x007645dc
if(r<1>(c,0x206)){return 0x7645dc;}
return 0x7645c8;}
case 0x7645c8:{ // TEST BL,0x4
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7645cb;}
case 0x7645cb:{ // JNZ 0x007645dc
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7645dc;}
return 0x7645cd;}
case 0x7645cd:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645ce;}
case 0x7645ce:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645cf;}
case 0x7645cf:{ // PUSH 0x30
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x7645d1;}
case 0x7645d1:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7645d4;}
case 0x7645d4:{ // CALL 0x00763eac
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7645d9ull);
return 0x763eac;
return 0x7645d9;}
case 0x7645d9:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7645dc;}
case 0x7645dc:{ // CMP dword ptr [EBP + -0x28],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
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
return 0x7645e0;}
case 0x7645e0:{ // JZ 0x00764623
if(r<1>(c,0x206)){return 0x764623;}
return 0x7645e2;}
case 0x7645e2:{ // CMP dword ptr [EBP + -0x14],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
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
return 0x7645e6;}
case 0x7645e6:{ // JLE 0x00764623
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x764623;}
return 0x7645e8;}
case 0x7645e8:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7645eb;}
case 0x7645eb:{ // MOV EBX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7645ee;}
case 0x7645ee:{ // MOV dword ptr [EBP + -0x40],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7645f1;}
case 0x7645f1:{ // DEC dword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
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
return 0x7645f4;}
case 0x7645f4:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7645f6;}
case 0x7645f6:{ // MOV AX,word ptr [EBX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0xc)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7645f9;}
case 0x7645f9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645fa;}
case 0x7645fa:{ // LEA EAX,[EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7645fd;}
case 0x7645fd:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7645fe;}
case 0x7645fe:{ // CALL 0x0076cab5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764603ull);
return 0x76cab5;
return 0x764603;}
case 0x764603:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764604;}
case 0x764604:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764605;}
case 0x764605:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764606;}
case 0x764606:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764608;}
case 0x764608:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764609;}
case 0x764609:{ // JLE 0x00764632
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x764632;}
return 0x76460b;}
case 0x76460b:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76460e;}
case 0x76460e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76460f;}
case 0x76460f:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764612;}
case 0x764612:{ // LEA ECX,[EBP + -0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x764615;}
case 0x764615:{ // CALL 0x00763ed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76461aull);
return 0x763ed0;
return 0x76461a;}
case 0x76461a:{ // CMP dword ptr [EBP + -0x40],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
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
return 0x76461e;}
case 0x76461e:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76461f;}
case 0x76461f:{ // JNZ 0x007645f1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7645f1;}
return 0x764621;}
case 0x764621:{ // JMP 0x00764632
return 0x764632;
return 0x764623;}
case 0x764623:{ // PUSH dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764626;}
case 0x764626:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764629;}
case 0x764629:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x76462c;}
case 0x76462c:{ // CALL 0x00763ed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764631ull);
return 0x763ed0;
return 0x764631;}
case 0x764631:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764632;}
case 0x764632:{ // TEST byte ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764636;}
case 0x764636:{ // JZ 0x00764649
if(r<1>(c,0x206)){return 0x764649;}
return 0x764638;}
case 0x764638:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76463b;}
case 0x76463b:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x76463e;}
case 0x76463e:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76463f;}
case 0x76463f:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x764641;}
case 0x764641:{ // CALL 0x00763eac
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764646ull);
return 0x763eac;
return 0x764646;}
case 0x764646:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764649;}
case 0x764649:{ // CMP dword ptr [EBP + -0x2c],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
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
return 0x76464d;}
case 0x76464d:{ // JZ 0x0076465c
if(r<1>(c,0x206)){return 0x76465c;}
return 0x76464f;}
case 0x76464f:{ // PUSH dword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764652;}
case 0x764652:{ // CALL 0x0075c6da
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764657ull);
return 0x75c6da;
return 0x764657;}
case 0x764657:{ // AND dword ptr [EBP + -0x2c],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
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
return 0x76465b;}
case 0x76465b:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76465c;}
case 0x76465c:{ // MOV EDI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76465f;}
case 0x76465f:{ // MOV BL,byte ptr [EDI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x1c)));
wr<1>(c,0xc,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x764661;}
case 0x764661:{ // TEST BL,BL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0xc),r<1>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764663;}
case 0x764663:{ // JNZ 0x00763f3c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x763f3c;}
return 0x764669;}
case 0x764669:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76466a;}
case 0x76466a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76466b;}
case 0x76466b:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76466e;}
case 0x76466e:{ // XOR ECX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
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
return 0x764671;}
case 0x764671:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764674;}
case 0x764674:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764675;}
case 0x764675:{ // CALL 0x0076115e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76467aull);
return 0x76115e;
return 0x76467a;}
case 0x76467a:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x76467b;}
case 0x76467b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x76467c;}
case 0x76469c:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x76469e;}
case 0x76469e:{ // PUSH 0x7d4300
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7d4300ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x7646a3;}
case 0x7646a3:{ // CALL 0x00760da0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7646a8ull);
return 0x760da0;
return 0x7646a8;}
case 0x7646a8:{ // AND dword ptr [EBP + -0x1c],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
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
return 0x7646ac;}
case 0x7646ac:{ // AND dword ptr [EBP + -0x4],0x0
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
return 0x7646b0;}
case 0x7646b0:{ // MOVAPD XMM0,XMM1
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x7646b4;}
case 0x7646b4:{ // MOV dword ptr [EBP + -0x1c],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x1ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7646bb;}
case 0x7646bb:{ // JMP 0x007646c4
return 0x7646c4;
return 0x7646bd;}
case 0x7646bd:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646bf;}
case 0x7646bf:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646c0;}
case 0x7646c0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7646c1;}
case 0x7646c4:{ // OR dword ptr [EBP + -0x4],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0xffffffffull));
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
return 0x7646c8;}
case 0x7646c8:{ // MOV EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7646cb;}
case 0x7646cb:{ // CALL 0x00760ddb
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7646d0ull);
return 0x760ddb;
return 0x7646d0;}
case 0x7646d0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7646d1;}
case 0x7646d1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646d2;}
case 0x7646d2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7646d4;}
case 0x7646d4:{ // SUB ESP,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646d7;}
case 0x7646d7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646d8;}
case 0x7646d8:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646d9;}
case 0x7646d9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646da;}
case 0x7646da:{ // PUSHFD
wu<1>(c,0x44700,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20d),0x1ull));
wu<4>(c,0x44800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44700)));
wu<4>(c,0x44900,eval<Op::INT_MULT,4,4,4>(0x4000ull,u<4>(c,0x44800)));
wu<1>(c,0x44a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20b),0x1ull));
wu<4>(c,0x44b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44a00)));
wu<4>(c,0x44c00,eval<Op::INT_MULT,4,4,4>(0x800ull,u<4>(c,0x44b00)));
wu<4>(c,0x44d00,eval<Op::INT_OR,4,4,4>(u<4>(c,0x44900),u<4>(c,0x44c00)));
wu<1>(c,0x44e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20a),0x1ull));
wu<4>(c,0x44f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44e00)));
wu<4>(c,0x45000,eval<Op::INT_MULT,4,4,4>(0x400ull,u<4>(c,0x44f00)));
wu<4>(c,0x45100,eval<Op::INT_OR,4,4,4>(u<4>(c,0x44d00),u<4>(c,0x45000)));
wu<1>(c,0x45200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x209),0x1ull));
wu<4>(c,0x45300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45200)));
wu<4>(c,0x45400,eval<Op::INT_MULT,4,4,4>(0x200ull,u<4>(c,0x45300)));
wu<4>(c,0x45500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45100),u<4>(c,0x45400)));
wu<1>(c,0x45600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x208),0x1ull));
wu<4>(c,0x45700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45600)));
wu<4>(c,0x45800,eval<Op::INT_MULT,4,4,4>(0x100ull,u<4>(c,0x45700)));
wu<4>(c,0x45900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45500),u<4>(c,0x45800)));
wu<1>(c,0x45a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x207),0x1ull));
wu<4>(c,0x45b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45a00)));
wu<4>(c,0x45c00,eval<Op::INT_MULT,4,4,4>(0x80ull,u<4>(c,0x45b00)));
wu<4>(c,0x45d00,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45900),u<4>(c,0x45c00)));
wu<1>(c,0x45e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x206),0x1ull));
wu<4>(c,0x45f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45e00)));
wu<4>(c,0x46000,eval<Op::INT_MULT,4,4,4>(0x40ull,u<4>(c,0x45f00)));
wu<4>(c,0x46100,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45d00),u<4>(c,0x46000)));
wu<1>(c,0x46200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x204),0x1ull));
wu<4>(c,0x46300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46200)));
wu<4>(c,0x46400,eval<Op::INT_MULT,4,4,4>(0x10ull,u<4>(c,0x46300)));
wu<4>(c,0x46500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46100),u<4>(c,0x46400)));
wu<1>(c,0x46600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x202),0x1ull));
wu<4>(c,0x46700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46600)));
wu<4>(c,0x46800,eval<Op::INT_MULT,4,4,4>(0x4ull,u<4>(c,0x46700)));
wu<4>(c,0x46900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46500),u<4>(c,0x46800)));
wu<1>(c,0x46a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x200),0x1ull));
wu<4>(c,0x46b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46a00)));
wu<4>(c,0x46c00,eval<Op::INT_MULT,4,4,4>(0x1ull,u<4>(c,0x46b00)));
wr<4>(c,0x280,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46900),u<4>(c,0x46c00)));
wu<1>(c,0x46e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x214),0x1ull));
wu<4>(c,0x46f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46e00)));
wu<4>(c,0x47000,eval<Op::INT_MULT,4,4,4>(0x200000ull,u<4>(c,0x46f00)));
wu<4>(c,0x47100,eval<Op::INT_OR,4,4,4>(r<4>(c,0x280),u<4>(c,0x47000)));
wu<1>(c,0x47200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x213),0x1ull));
wu<4>(c,0x47300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47200)));
wu<4>(c,0x47400,eval<Op::INT_MULT,4,4,4>(0x100000ull,u<4>(c,0x47300)));
wu<4>(c,0x47500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47100),u<4>(c,0x47400)));
wu<1>(c,0x47600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x212),0x1ull));
wu<4>(c,0x47700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47600)));
wu<4>(c,0x47800,eval<Op::INT_MULT,4,4,4>(0x80000ull,u<4>(c,0x47700)));
wu<4>(c,0x47900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47500),u<4>(c,0x47800)));
wu<1>(c,0x47a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x211),0x1ull));
wu<4>(c,0x47b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47a00)));
wu<4>(c,0x47c00,eval<Op::INT_MULT,4,4,4>(0x40000ull,u<4>(c,0x47b00)));
wr<4>(c,0x280,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47900),u<4>(c,0x47c00)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),r<4>(c,0x280));
return 0x7646db;}
case 0x7646db:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7646dc;}
case 0x7646dc:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x7646de;}
case 0x7646de:{ // XOR EAX,0x200000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),0x200000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646e3;}
case 0x7646e3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646e4;}
case 0x7646e4:{ // POPFD
wr<4>(c,0x280,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wu<4>(c,0x42f00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x4000ull));
wr<1>(c,0x20d,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x42f00),0x0ull));
wu<4>(c,0x43100,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x800ull));
wr<1>(c,0x20b,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43100),0x0ull));
wu<4>(c,0x43300,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x400ull));
wr<1>(c,0x20a,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43300),0x0ull));
wu<4>(c,0x43500,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x200ull));
wr<1>(c,0x209,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43500),0x0ull));
wu<4>(c,0x43700,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x100ull));
wr<1>(c,0x208,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43700),0x0ull));
wu<4>(c,0x43900,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x80ull));
wr<1>(c,0x207,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43900),0x0ull));
wu<4>(c,0x43b00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x40ull));
wr<1>(c,0x206,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43b00),0x0ull));
wu<4>(c,0x43d00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x10ull));
wr<1>(c,0x204,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43d00),0x0ull));
wu<4>(c,0x43f00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x4ull));
wr<1>(c,0x202,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43f00),0x0ull));
wu<4>(c,0x44100,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44100),0x0ull));
wu<4>(c,0x44300,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x200000ull));
wr<1>(c,0x214,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44300),0x0ull));
wu<4>(c,0x44500,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x40000ull));
wr<1>(c,0x211,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44500),0x0ull));
wr<1>(c,0x213,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x212,eval<Op::COPY,1,1>(0x0ull));
return 0x7646e5;}
case 0x7646e5:{ // PUSHFD
wu<1>(c,0x44700,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20d),0x1ull));
wu<4>(c,0x44800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44700)));
wu<4>(c,0x44900,eval<Op::INT_MULT,4,4,4>(0x4000ull,u<4>(c,0x44800)));
wu<1>(c,0x44a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20b),0x1ull));
wu<4>(c,0x44b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44a00)));
wu<4>(c,0x44c00,eval<Op::INT_MULT,4,4,4>(0x800ull,u<4>(c,0x44b00)));
wu<4>(c,0x44d00,eval<Op::INT_OR,4,4,4>(u<4>(c,0x44900),u<4>(c,0x44c00)));
wu<1>(c,0x44e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x20a),0x1ull));
wu<4>(c,0x44f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x44e00)));
wu<4>(c,0x45000,eval<Op::INT_MULT,4,4,4>(0x400ull,u<4>(c,0x44f00)));
wu<4>(c,0x45100,eval<Op::INT_OR,4,4,4>(u<4>(c,0x44d00),u<4>(c,0x45000)));
wu<1>(c,0x45200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x209),0x1ull));
wu<4>(c,0x45300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45200)));
wu<4>(c,0x45400,eval<Op::INT_MULT,4,4,4>(0x200ull,u<4>(c,0x45300)));
wu<4>(c,0x45500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45100),u<4>(c,0x45400)));
wu<1>(c,0x45600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x208),0x1ull));
wu<4>(c,0x45700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45600)));
wu<4>(c,0x45800,eval<Op::INT_MULT,4,4,4>(0x100ull,u<4>(c,0x45700)));
wu<4>(c,0x45900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45500),u<4>(c,0x45800)));
wu<1>(c,0x45a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x207),0x1ull));
wu<4>(c,0x45b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45a00)));
wu<4>(c,0x45c00,eval<Op::INT_MULT,4,4,4>(0x80ull,u<4>(c,0x45b00)));
wu<4>(c,0x45d00,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45900),u<4>(c,0x45c00)));
wu<1>(c,0x45e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x206),0x1ull));
wu<4>(c,0x45f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x45e00)));
wu<4>(c,0x46000,eval<Op::INT_MULT,4,4,4>(0x40ull,u<4>(c,0x45f00)));
wu<4>(c,0x46100,eval<Op::INT_OR,4,4,4>(u<4>(c,0x45d00),u<4>(c,0x46000)));
wu<1>(c,0x46200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x204),0x1ull));
wu<4>(c,0x46300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46200)));
wu<4>(c,0x46400,eval<Op::INT_MULT,4,4,4>(0x10ull,u<4>(c,0x46300)));
wu<4>(c,0x46500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46100),u<4>(c,0x46400)));
wu<1>(c,0x46600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x202),0x1ull));
wu<4>(c,0x46700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46600)));
wu<4>(c,0x46800,eval<Op::INT_MULT,4,4,4>(0x4ull,u<4>(c,0x46700)));
wu<4>(c,0x46900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46500),u<4>(c,0x46800)));
wu<1>(c,0x46a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x200),0x1ull));
wu<4>(c,0x46b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46a00)));
wu<4>(c,0x46c00,eval<Op::INT_MULT,4,4,4>(0x1ull,u<4>(c,0x46b00)));
wr<4>(c,0x280,eval<Op::INT_OR,4,4,4>(u<4>(c,0x46900),u<4>(c,0x46c00)));
wu<1>(c,0x46e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x214),0x1ull));
wu<4>(c,0x46f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x46e00)));
wu<4>(c,0x47000,eval<Op::INT_MULT,4,4,4>(0x200000ull,u<4>(c,0x46f00)));
wu<4>(c,0x47100,eval<Op::INT_OR,4,4,4>(r<4>(c,0x280),u<4>(c,0x47000)));
wu<1>(c,0x47200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x213),0x1ull));
wu<4>(c,0x47300,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47200)));
wu<4>(c,0x47400,eval<Op::INT_MULT,4,4,4>(0x100000ull,u<4>(c,0x47300)));
wu<4>(c,0x47500,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47100),u<4>(c,0x47400)));
wu<1>(c,0x47600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x212),0x1ull));
wu<4>(c,0x47700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47600)));
wu<4>(c,0x47800,eval<Op::INT_MULT,4,4,4>(0x80000ull,u<4>(c,0x47700)));
wu<4>(c,0x47900,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47500),u<4>(c,0x47800)));
wu<1>(c,0x47a00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x211),0x1ull));
wu<4>(c,0x47b00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x47a00)));
wu<4>(c,0x47c00,eval<Op::INT_MULT,4,4,4>(0x40000ull,u<4>(c,0x47b00)));
wr<4>(c,0x280,eval<Op::INT_OR,4,4,4>(u<4>(c,0x47900),u<4>(c,0x47c00)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),r<4>(c,0x280));
return 0x7646e6;}
case 0x7646e6:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7646e7;}
case 0x7646e7:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646e9;}
case 0x7646e9:{ // JZ 0x007646f4
if(r<1>(c,0x206)){return 0x7646f4;}
return 0x7646eb;}
case 0x7646eb:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7646ec;}
case 0x7646ec:{ // POPFD
wr<4>(c,0x280,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wu<4>(c,0x42f00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x4000ull));
wr<1>(c,0x20d,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x42f00),0x0ull));
wu<4>(c,0x43100,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x800ull));
wr<1>(c,0x20b,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43100),0x0ull));
wu<4>(c,0x43300,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x400ull));
wr<1>(c,0x20a,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43300),0x0ull));
wu<4>(c,0x43500,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x200ull));
wr<1>(c,0x209,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43500),0x0ull));
wu<4>(c,0x43700,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x100ull));
wr<1>(c,0x208,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43700),0x0ull));
wu<4>(c,0x43900,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x80ull));
wr<1>(c,0x207,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43900),0x0ull));
wu<4>(c,0x43b00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x40ull));
wr<1>(c,0x206,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43b00),0x0ull));
wu<4>(c,0x43d00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x10ull));
wr<1>(c,0x204,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43d00),0x0ull));
wu<4>(c,0x43f00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x4ull));
wr<1>(c,0x202,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x43f00),0x0ull));
wu<4>(c,0x44100,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44100),0x0ull));
wu<4>(c,0x44300,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x200000ull));
wr<1>(c,0x214,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44300),0x0ull));
wu<4>(c,0x44500,eval<Op::INT_AND,4,4,4>(r<4>(c,0x280),0x40000ull));
wr<1>(c,0x211,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x44500),0x0ull));
wr<1>(c,0x213,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x212,eval<Op::COPY,1,1>(0x0ull));
return 0x7646ed;}
case 0x7646ed:{ // MOV EAX,0x1
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x1ull));
return 0x7646f2;}
case 0x7646f2:{ // CPUID
wu<4>(c,0x64900,eval<Op::COPY,4,4>(0x0ull));
wu<1>(c,0x64a00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
if(u<1>(c,0x64a00)){goto L_7646f2_35;}
wu<1>(c,0x64b00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x1ull));
if(u<1>(c,0x64b00)){goto L_7646f2_37;}
wu<1>(c,0x64c00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x2ull));
if(u<1>(c,0x64c00)){goto L_7646f2_39;}
wu<1>(c,0x64d00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x3ull));
if(u<1>(c,0x64d00)){goto L_7646f2_41;}
wu<1>(c,0x64e00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x4ull));
if(u<1>(c,0x64e00)){goto L_7646f2_43;}
wu<1>(c,0x64f00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x5ull));
if(u<1>(c,0x64f00)){goto L_7646f2_45;}
wu<1>(c,0x65000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x6ull));
if(u<1>(c,0x65000)){goto L_7646f2_47;}
wu<1>(c,0x65100,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x7ull));
if(u<1>(c,0x65100)){goto L_7646f2_49;}
wu<1>(c,0x65200,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x9ull));
if(u<1>(c,0x65200)){goto L_7646f2_51;}
wu<1>(c,0x65300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0xaull));
if(u<1>(c,0x65300)){goto L_7646f2_53;}
wu<1>(c,0x65400,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0xbull));
if(u<1>(c,0x65400)){goto L_7646f2_55;}
wu<1>(c,0x65500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0xdull));
if(u<1>(c,0x65500)){goto L_7646f2_57;}
wu<1>(c,0x65600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0xfull));
if(u<1>(c,0x65600)){goto L_7646f2_59;}
wu<1>(c,0x65700,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x80000002ull));
if(u<1>(c,0x65700)){goto L_7646f2_61;}
wu<1>(c,0x65800,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x80000003ull));
if(u<1>(c,0x65800)){goto L_7646f2_63;}
wu<1>(c,0x65900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x80000004ull));
if(u<1>(c,0x65900)){goto L_7646f2_65;}
wu<4>(c,0x64900,user_op(c,262189,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_35:;
wu<4>(c,0x64900,user_op(c,262190,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_37:;
wu<4>(c,0x64900,user_op(c,262191,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_39:;
wu<4>(c,0x64900,user_op(c,262192,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_41:;
wu<4>(c,0x64900,user_op(c,262193,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_43:;
wu<4>(c,0x64900,user_op(c,262194,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_45:;
wu<4>(c,0x64900,user_op(c,262195,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_47:;
wu<4>(c,0x64900,user_op(c,262196,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_49:;
wu<4>(c,0x64900,user_op(c,262197,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_51:;
wu<4>(c,0x64900,user_op(c,262198,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_53:;
wu<4>(c,0x64900,user_op(c,262199,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_55:;
wu<4>(c,0x64900,user_op(c,262200,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_57:;
wu<4>(c,0x64900,user_op(c,262201,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_59:;
wu<4>(c,0x64900,user_op(c,262202,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_61:;
wu<4>(c,0x64900,user_op(c,262203,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_63:;
wu<4>(c,0x64900,user_op(c,262204,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_65:;
wu<4>(c,0x64900,user_op(c,262205,{r<4>(c,0x0)}));
goto L_7646f2_67;
L_7646f2_67:;
wr<4>(c,0x0,m<4>(c,u<4>(c,0x64900)));
wu<4>(c,0x66c00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x64900),0x4ull));
wr<4>(c,0xc,m<4>(c,u<4>(c,0x66c00)));
wu<4>(c,0x66e00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x64900),0x8ull));
wr<4>(c,0x8,m<4>(c,u<4>(c,0x66e00)));
wu<4>(c,0x67000,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x64900),0xcull));
wr<4>(c,0x4,m<4>(c,u<4>(c,0x67000)));
return 0x7646f4;}
case 0x7646f4:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7646f7;}
case 0x7646f7:{ // AND dword ptr [0x008ba484],0x0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wm<4>(c,0x8ba484,eval<Op::INT_AND,4,4,4>(m<4>(c,0x8ba484),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(m<4>(c,0x8ba484),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(m<4>(c,0x8ba484),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(m<4>(c,0x8ba484),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7646fe;}
case 0x7646fe:{ // AND dword ptr [0x008ba480],0x0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wm<4>(c,0x8ba480,eval<Op::INT_AND,4,4,4>(m<4>(c,0x8ba480),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(m<4>(c,0x8ba480),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(m<4>(c,0x8ba480),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(m<4>(c,0x8ba480),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764705;}
case 0x764705:{ // TEST byte ptr [EBP + -0x1],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffffull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764709;}
case 0x764709:{ // JZ 0x00764721
if(r<1>(c,0x206)){return 0x764721;}
return 0x76470b;}
case 0x76470b:{ // CALL 0x0076469c
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764710ull);
return 0x76469c;
return 0x764710;}
case 0x764710:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764712;}
case 0x764712:{ // JZ 0x00764721
if(r<1>(c,0x206)){return 0x764721;}
return 0x764714;}
case 0x764714:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764716;}
case 0x764716:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764717;}
case 0x764717:{ // MOV [0x008ba484],EAX
wm<4>(c,0x8ba484,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x76471c;}
case 0x76471c:{ // MOV [0x008ba480],EAX
wm<4>(c,0x8ba480,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764721;}
case 0x764721:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764723;}
case 0x764723:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764724;}
case 0x764724:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764725;}
case 0x764725:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x764726;}
case 0x764726:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x764727;}
case 0x764727:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764728;}
case 0x764730:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764731;}
case 0x764731:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x764733;}
case 0x764733:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764736;}
case 0x764736:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764739;}
case 0x764739:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764739ull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x76473b;}
case 0x76473b:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76473bull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x76473e;}
case 0x76473e:{ // FSTP double ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76473eull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x764742;}
case 0x764742:{ // CALL 0x00764749
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764747ull);
return 0x764749;
return 0x764747;}
case 0x764747:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x764748;}
case 0x764748:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764749;}
case 0x764749:{ // MOVLPD XMM0,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x76474f;}
case 0x76474f:{ // MOVLPD XMM7,qword ptr [0x007d7ba0]
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764757;}
case 0x764757:{ // MOVLPD XMM2,qword ptr [0x007d7bb0]
wr<8>(c,0x1280,eval<Op::COPY,8,8>(m<8>(c,0x7d7bb0)));
return 0x76475f;}
case 0x76475f:{ // ANDPD XMM7,XMM0
wr<8>(c,0x13c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c0),r<8>(c,0x1200)));
wr<8>(c,0x13c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c8),r<8>(c,0x1208)));
return 0x764763;}
case 0x764763:{ // MOVSD XMM4,XMM0
wr<8>(c,0x1300,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x764767;}
case 0x764767:{ // PSRLQ XMM0,0x2c
wr<8>(c,0x1200,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1200),0x2cull));
wr<8>(c,0x1208,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1208),0x2cull));
return 0x76476c;}
case 0x76476c:{ // PEXTRW EAX,XMM0,0x0
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x0ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1200),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1208),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764771;}
case 0x764771:{ // ORPD XMM7,XMM2
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1280)));
return 0x764775;}
case 0x764775:{ // PEXTRW ECX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x76477a;}
case 0x76477a:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76477f;}
case 0x76477f:{ // ADD EAX,0x1
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764782;}
case 0x764782:{ // AND EAX,0x1fe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1feull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764787;}
case 0x764787:{ // MULSD XMM7,qword ptr [EAX*0x4 + 0x7d4310]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4310ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,u<8>(c,0xa400),8,8));
return 0x764790;}
case 0x764790:{ // MOVLPD XMM5,qword ptr [EAX*0x4 + 0x7d4310]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4310ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1340,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764799;}
case 0x764799:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76479b;}
case 0x76479b:{ // MOVAPD XMM6,xmmword ptr [EAX*0x4 + 0x7d4720]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4720ull,u<4>(c,0x6d00)));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6f00)));
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x7647a4;}
case 0x7647a4:{ // MOV EDX,0x7fef
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x7fefull));
return 0x7647a9;}
case 0x7647a9:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647ab;}
case 0x7647ab:{ // SUB ECX,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647ae;}
case 0x7647ae:{ // OR ECX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647b0;}
case 0x7647b0:{ // CMP ECX,0x80000000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647b6;}
case 0x7647b6:{ // JNC 0x00764a97
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x764a97;}
return 0x7647bc;}
case 0x7647bc:{ // MOV ECX,0x0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x0ull));
return 0x7647c1;}
case 0x7647c1:{ // MOV EDX,0x3fe7f
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x3fe7full));
return 0x7647c6;}
case 0x7647c6:{ // MOVD XMM1,EDX
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x8)));
return 0x7647ca;}
case 0x7647ca:{ // PSUBQ XMM0,XMM1
wr<8>(c,0x1200,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x1200),r<8>(c,0x1240)));
wr<8>(c,0x1208,eval<Op::INT_SUB,8,8,8>(r<8>(c,0x1208),r<8>(c,0x1248)));
return 0x7647ce;}
case 0x7647ce:{ // PSRLQ XMM0,0x8
wr<8>(c,0x1200,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1200),0x8ull));
wr<8>(c,0x1208,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1208),0x8ull));
return 0x7647d3;}
case 0x7647d3:{ // CVTDQ2PD XMM0,XMM0
wu<8>(c,0xd0400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wr<8>(c,0x1200,float_op("INT2FLOAT",u<4>(c,0xd0400),4,0x0ull,4,8));
wr<8>(c,0x1208,float_op("INT2FLOAT",u<4>(c,0xd0404),4,0x0ull,4,8));
return 0x7647d7;}
case 0x7647d7:{ // MOVLPD XMM1,qword ptr [0x007d7bf8]
wr<8>(c,0x1240,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf8)));
return 0x7647df;}
case 0x7647df:{ // MOVSD XMM3,XMM7
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x13c0)));
return 0x7647e3;}
case 0x7647e3:{ // PSRLQ XMM7,0x26
wr<8>(c,0x13c0,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x13c0),0x26ull));
wr<8>(c,0x13c8,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x13c8),0x26ull));
return 0x7647e8;}
case 0x7647e8:{ // PEXTRW EAX,XMM7,0x0
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x0ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x13c0),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x13c8),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x7647ed;}
case 0x7647ed:{ // ANDPD XMM4,xmmword ptr [0x007d7ba0]
wu<16>(c,0xbd700,eval<Op::COPY,16,16>(m<16>(c,0x7d7ba0)));
wr<8>(c,0x1300,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1300),u<8>(c,0xbd700)));
wr<8>(c,0x1308,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1308),u<8>(c,0xbd708)));
return 0x7647f5;}
case 0x7647f5:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647fa;}
case 0x7647fa:{ // ADD EAX,0x1
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7647fd;}
case 0x7647fd:{ // AND EAX,0x1fe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1feull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764802;}
case 0x764802:{ // MULSD XMM3,qword ptr [EAX*0x4 + 0x7d4f30]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4f30ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,u<8>(c,0xa400),8,8));
return 0x76480b;}
case 0x76480b:{ // MULSD XMM5,qword ptr [EAX*0x4 + 0x7d4f30]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4f30ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1340,float_op("FLOAT_MULT",r<8>(c,0x1340),8,u<8>(c,0xa400),8,8));
return 0x764814;}
case 0x764814:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764816;}
case 0x764816:{ // ADDPD XMM6,xmmword ptr [EAX*0x4 + 0x7d5340]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d5340ull,u<4>(c,0x6d00)));
wu<8>(c,0xa600,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1380,float_op("FLOAT_ADD",r<8>(c,0x1380),8,u<8>(c,0xa600),8,8));
wu<4>(c,0x308e00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x6f00),0x8ull));
wu<8>(c,0xa608,m<8>(c,u<4>(c,0x308e00)));
wr<8>(c,0x1388,float_op("FLOAT_ADD",r<8>(c,0x1388),8,u<8>(c,0xa608),8,8));
return 0x76481f;}
case 0x76481f:{ // ORPD XMM4,xmmword ptr [0x007d7bb0]
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),m<16>(c,0x7d7bb0)));
return 0x764827;}
case 0x764827:{ // ADDSD XMM6,XMM0
wr<8>(c,0x1380,float_op("FLOAT_ADD",r<8>(c,0x1380),8,r<8>(c,0x1200),8,8));
return 0x76482b;}
case 0x76482b:{ // ANDPD XMM1,XMM4
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),r<8>(c,0x1300)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),r<8>(c,0x1308)));
return 0x76482f;}
case 0x76482f:{ // MOVSD XMM2,XMM3
wr<8>(c,0x1280,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
return 0x764833;}
case 0x764833:{ // PSRLQ XMM3,0x1f
wr<8>(c,0x12c0,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x12c0),0x1full));
wr<8>(c,0x12c8,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x12c8),0x1full));
return 0x764838;}
case 0x764838:{ // PEXTRW EAX,XMM3,0x0
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x0ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x12c0),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x12c8),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x76483d;}
case 0x76483d:{ // MOVLPD XMM0,qword ptr [0x007d7bf8]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf8)));
return 0x764845;}
case 0x764845:{ // SUBSD XMM4,XMM1
wr<8>(c,0x1300,float_op("FLOAT_SUB",r<8>(c,0x1300),8,r<8>(c,0x1240),8,8));
return 0x764849;}
case 0x764849:{ // MOVLPD XMM7,qword ptr [0x007d7c00]
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7c00)));
return 0x764851;}
case 0x764851:{ // AND EAX,0x1ff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764856;}
case 0x764856:{ // ADD EAX,0x1
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764859;}
case 0x764859:{ // AND EAX,0x3fe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x3feull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76485e;}
case 0x76485e:{ // MULSD XMM5,qword ptr [EAX*0x4 + 0x7d5b50]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d5b50ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1340,float_op("FLOAT_MULT",r<8>(c,0x1340),8,u<8>(c,0xa400),8,8));
return 0x764867;}
case 0x764867:{ // MULSD XMM2,qword ptr [EAX*0x4 + 0x7d5b50]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d5b50ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,u<8>(c,0xa400),8,8));
return 0x764870;}
case 0x764870:{ // ADDPD XMM6,xmmword ptr [EAX*0x8 + 0x7d6360]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d6360ull,u<4>(c,0x6d00)));
wu<8>(c,0xa600,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1380,float_op("FLOAT_ADD",r<8>(c,0x1380),8,u<8>(c,0xa600),8,8));
wu<4>(c,0x308e00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x6f00),0x8ull));
wu<8>(c,0xa608,m<8>(c,u<4>(c,0x308e00)));
wr<8>(c,0x1388,float_op("FLOAT_ADD",r<8>(c,0x1388),8,u<8>(c,0xa608),8,8));
return 0x764879;}
case 0x764879:{ // ANDPD XMM0,XMM5
wr<8>(c,0x1200,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1200),r<8>(c,0x1340)));
wr<8>(c,0x1208,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1208),r<8>(c,0x1348)));
return 0x76487d;}
case 0x76487d:{ // SUBSD XMM5,XMM0
wr<8>(c,0x1340,float_op("FLOAT_SUB",r<8>(c,0x1340),8,r<8>(c,0x1200),8,8));
return 0x764881;}
case 0x764881:{ // ADDSD XMM7,XMM2
wr<8>(c,0x13c0,float_op("FLOAT_ADD",r<8>(c,0x13c0),8,r<8>(c,0x1280),8,8));
return 0x764885;}
case 0x764885:{ // MOVSD XMM3,XMM0
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x764889;}
case 0x764889:{ // MULSD XMM0,XMM1
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x1240),8,8));
return 0x76488d;}
case 0x76488d:{ // MULSD XMM1,XMM5
wr<8>(c,0x1240,float_op("FLOAT_MULT",r<8>(c,0x1240),8,r<8>(c,0x1340),8,8));
return 0x764891;}
case 0x764891:{ // MULSD XMM3,XMM4
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,r<8>(c,0x1300),8,8));
return 0x764895;}
case 0x764895:{ // SUBSD XMM2,XMM0
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x1200),8,8));
return 0x764899;}
case 0x764899:{ // MULSD XMM4,XMM5
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x1340),8,8));
return 0x76489d;}
case 0x76489d:{ // MOVSD XMM0,XMM6
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
return 0x7648a1;}
case 0x7648a1:{ // SUBSD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
return 0x7648a5;}
case 0x7648a5:{ // ADDSD XMM6,XMM7
wr<8>(c,0x1380,float_op("FLOAT_ADD",r<8>(c,0x1380),8,r<8>(c,0x13c0),8,8));
return 0x7648a9;}
case 0x7648a9:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7648af;}
case 0x7648af:{ // PEXTRW EAX,XMM1,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1240),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1248),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x7648b4;}
case 0x7648b4:{ // SUBSD XMM2,XMM3
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x12c0),8,8));
return 0x7648b8;}
case 0x7648b8:{ // SUBSD XMM0,XMM6
wr<8>(c,0x1200,float_op("FLOAT_SUB",r<8>(c,0x1200),8,r<8>(c,0x1380),8,8));
return 0x7648bc;}
case 0x7648bc:{ // MOVLPD XMM3,qword ptr [0x007d7bf8]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf8)));
return 0x7648c4;}
case 0x7648c4:{ // PEXTRW EDX,XMM6,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1380),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1388),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x7648c9;}
case 0x7648c9:{ // SUBSD XMM2,XMM4
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x1300),8,8));
return 0x7648cd;}
case 0x7648cd:{ // MOVSD XMM4,XMM6
wr<8>(c,0x1300,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
return 0x7648d1;}
case 0x7648d1:{ // ADDSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x7648d5;}
case 0x7648d5:{ // SUBSD XMM7,XMM2
wr<8>(c,0x13c0,float_op("FLOAT_SUB",r<8>(c,0x13c0),8,r<8>(c,0x1280),8,8));
return 0x7648d9;}
case 0x7648d9:{ // SUBSD XMM6,XMM2
wr<8>(c,0x1380,float_op("FLOAT_SUB",r<8>(c,0x1380),8,r<8>(c,0x1280),8,8));
return 0x7648dd;}
case 0x7648dd:{ // UNPCKLPD XMM7,XMM7
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(r<8>(c,0x13c0)));
return 0x7648e1;}
case 0x7648e1:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7648e6;}
case 0x7648e6:{ // CMP EAX,0x7ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7648eb;}
case 0x7648eb:{ // JNC 0x00764e08
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x764e08;}
return 0x7648f1;}
case 0x7648f1:{ // AND EDX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7648f7;}
case 0x7648f7:{ // SUB EAX,0x3ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7648fc;}
case 0x7648fc:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7648fe;}
case 0x7648fe:{ // MOV EDX,0x40a0
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x40a0ull));
return 0x764903;}
case 0x764903:{ // SUB EDX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764905;}
case 0x764905:{ // SUB EAX,0x3c70
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3c70ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3c70ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3c70ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76490a;}
case 0x76490a:{ // OR EDX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76490c;}
case 0x76490c:{ // CMP EDX,0x80000000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764912;}
case 0x764912:{ // JNC 0x007651f1
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x7651f1;}
return 0x764918;}
case 0x764918:{ // SUBSD XMM4,XMM6
wr<8>(c,0x1300,float_op("FLOAT_SUB",r<8>(c,0x1300),8,r<8>(c,0x1380),8,8));
return 0x76491c;}
case 0x76491c:{ // SUBSD XMM2,XMM4
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x1300),8,8));
return 0x764920;}
case 0x764920:{ // MOVLPD XMM4,qword ptr [0x007d7bf8]
wr<8>(c,0x1300,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf8)));
return 0x764928;}
case 0x764928:{ // ANDPD XMM3,XMM1
wr<8>(c,0x12c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c0),r<8>(c,0x1240)));
wr<8>(c,0x12c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c8),r<8>(c,0x1248)));
return 0x76492c;}
case 0x76492c:{ // ANDPD XMM4,XMM6
wr<8>(c,0x1300,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1300),r<8>(c,0x1380)));
wr<8>(c,0x1308,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1308),r<8>(c,0x1388)));
return 0x764930;}
case 0x764930:{ // SUBSD XMM0,XMM2
wr<8>(c,0x1200,float_op("FLOAT_SUB",r<8>(c,0x1200),8,r<8>(c,0x1280),8,8));
return 0x764934;}
case 0x764934:{ // XORPD XMM2,XMM2
wr<8>(c,0x1280,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1280),r<8>(c,0x1280)));
wr<8>(c,0x1288,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1288),r<8>(c,0x1288)));
return 0x764938;}
case 0x764938:{ // MOV EDX,0x4060
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x4060ull));
return 0x76493d;}
case 0x76493d:{ // PINSRW XMM2,EDX,0x3
wu<1>(c,0x10fc00,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10fe00,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10fc00),0x10ull));
wu<1>(c,0x110000,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110100,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x8)));
wu<8>(c,0x110300,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110100),u<1>(c,0x10fe00)));
wu<8>(c,0x110400,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x10fe00)));
wu<8>(c,0x110500,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110400)));
wu<8>(c,0x110600,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1280),u<8>(c,0x110500)));
wu<8>(c,0x110300,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110600),u<8>(c,0x110300)));
wu<8>(c,0x110800,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x8)));
wu<1>(c,0x110900,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110b00,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110800),u<1>(c,0x110900)));
wu<1>(c,0x110c00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110d00,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x110c00)));
wu<8>(c,0x110e00,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110d00)));
wu<8>(c,0x110f00,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1288),u<8>(c,0x110e00)));
wu<8>(c,0x110b00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110f00),u<8>(c,0x110b00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x110000)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110300)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1280)));
wr<8>(c,0x1280,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wu<1>(c,0x111100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x111100)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110b00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x111100)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1288)));
wr<8>(c,0x1288,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
return 0x764942;}
case 0x764942:{ // MOVSD XMM5,XMM3
wr<8>(c,0x1340,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
return 0x764946;}
case 0x764946:{ // MULSD XMM3,XMM4
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,r<8>(c,0x1300),8,8));
return 0x76494a;}
case 0x76494a:{ // SUBSD XMM6,XMM4
wr<8>(c,0x1380,float_op("FLOAT_SUB",r<8>(c,0x1380),8,r<8>(c,0x1300),8,8));
return 0x76494e;}
case 0x76494e:{ // SUBSD XMM1,XMM5
wr<8>(c,0x1240,float_op("FLOAT_SUB",r<8>(c,0x1240),8,r<8>(c,0x1340),8,8));
return 0x764952;}
case 0x764952:{ // MULSD XMM3,XMM2
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,r<8>(c,0x1280),8,8));
return 0x764956;}
case 0x764956:{ // MULSD XMM5,XMM6
wr<8>(c,0x1340,float_op("FLOAT_MULT",r<8>(c,0x1340),8,r<8>(c,0x1380),8,8));
return 0x76495a;}
case 0x76495a:{ // MOVAPD XMM2,xmmword ptr [0x007d7370]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7370)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x764962;}
case 0x764962:{ // MULSD XMM4,XMM1
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x1240),8,8));
return 0x764966;}
case 0x764966:{ // CVTSD2SI EAX,XMM3
wu<8>(c,0xd3f00,float_op("ROUND",r<8>(c,0x12c0),8,0x0ull,4,8));
wr<4>(c,0x0,float_op("TRUNC",u<8>(c,0xd3f00),8,0x0ull,4,4));
return 0x76496a;}
case 0x76496a:{ // MULSD XMM6,XMM1
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x1240),8,8));
return 0x76496e;}
case 0x76496e:{ // MOVAPD XMM1,xmmword ptr [0x007d7380]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7380)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x764976;}
case 0x764976:{ // ADDSD XMM5,XMM4
wr<8>(c,0x1340,float_op("FLOAT_ADD",r<8>(c,0x1340),8,r<8>(c,0x1300),8,8));
return 0x76497a;}
case 0x76497a:{ // PSHUFD XMM4,XMM6,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x76497f;}
case 0x76497f:{ // ADDSD XMM5,XMM6
wr<8>(c,0x1340,float_op("FLOAT_ADD",r<8>(c,0x1340),8,r<8>(c,0x1380),8,8));
return 0x764983;}
case 0x764983:{ // MOV EDX,0x1ff7f
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1ff7full));
return 0x764988;}
case 0x764988:{ // SUB EDX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76498a;}
case 0x76498a:{ // ADD EAX,0x1e1ff
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76498f;}
case 0x76498f:{ // OR EDX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764991;}
case 0x764991:{ // SUB EAX,0x1e1ff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1e1ffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764996;}
case 0x764996:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764999;}
case 0x764999:{ // JLE 0x00764f81
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x764f81;}
return 0x76499f;}
case 0x76499f:{ // ADD ECX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649a1;}
case 0x7649a1:{ // AND EAX,0x7f
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649a4;}
case 0x7649a4:{ // AND ECX,0xffffff80
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffffff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649a7;}
case 0x7649a7:{ // ADD ECX,0x1ff80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x1ff80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ff80ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649ad;}
case 0x7649ad:{ // ADDSD XMM4,XMM0
wr<8>(c,0x1300,float_op("FLOAT_ADD",r<8>(c,0x1300),8,r<8>(c,0x1200),8,8));
return 0x7649b1;}
case 0x7649b1:{ // MOVSD XMM0,XMM3
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
return 0x7649b5;}
case 0x7649b5:{ // ADDSD XMM3,qword ptr [0x007d7b90]
wr<8>(c,0x12c0,float_op("FLOAT_ADD",r<8>(c,0x12c0),8,m<8>(c,0x7d7b90),8,8));
return 0x7649bd;}
case 0x7649bd:{ // MULPD XMM2,XMM7
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x1288,float_op("FLOAT_MULT",r<8>(c,0x1288),8,r<8>(c,0x13c8),8,8));
return 0x7649c1;}
case 0x7649c1:{ // SUBSD XMM3,qword ptr [0x007d7b90]
wr<8>(c,0x12c0,float_op("FLOAT_SUB",r<8>(c,0x12c0),8,m<8>(c,0x7d7b90),8,8));
return 0x7649c9;}
case 0x7649c9:{ // MULPD XMM7,XMM7
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_MULT",r<8>(c,0x13c8),8,r<8>(c,0x13c8),8,8));
return 0x7649cd;}
case 0x7649cd:{ // SUBSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_SUB",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x7649d1;}
case 0x7649d1:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649d3;}
case 0x7649d3:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649d5;}
case 0x7649d5:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649d7;}
case 0x7649d7:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7649d9;}
case 0x7649d9:{ // MOVAPD XMM3,xmmword ptr [EAX + 0x7d7390]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7d7390ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x7649e1;}
case 0x7649e1:{ // MOVAPD XMM6,xmmword ptr [0x007d7bd0]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7bd0)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x7649e9;}
case 0x7649e9:{ // MULPD XMM1,XMM7
wr<8>(c,0x1240,float_op("FLOAT_MULT",r<8>(c,0x1240),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x1248,float_op("FLOAT_MULT",r<8>(c,0x1248),8,r<8>(c,0x13c8),8,8));
return 0x7649ed;}
case 0x7649ed:{ // ADDPD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
wr<8>(c,0x1288,float_op("FLOAT_ADD",r<8>(c,0x1288),8,r<8>(c,0x1248),8,8));
return 0x7649f1;}
case 0x7649f1:{ // PSHUFD XMM1,XMM2,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x7649f6;}
case 0x7649f6:{ // MULSD XMM2,XMM7
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,r<8>(c,0x13c0),8,8));
return 0x7649fa;}
case 0x7649fa:{ // XORPD XMM7,XMM7
wr<8>(c,0x13c0,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x13c0),r<8>(c,0x13c0)));
wr<8>(c,0x13c8,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x13c8),r<8>(c,0x13c8)));
return 0x7649fe;}
case 0x7649fe:{ // MOV EDX,0x3f80
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x3f80ull));
return 0x764a03;}
case 0x764a03:{ // ADDSD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
return 0x764a07;}
case 0x764a07:{ // PINSRW XMM7,EDX,0x3
wu<1>(c,0x10fc00,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10fe00,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10fc00),0x10ull));
wu<1>(c,0x110000,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110100,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x8)));
wu<8>(c,0x110300,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110100),u<1>(c,0x10fe00)));
wu<8>(c,0x110400,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x10fe00)));
wu<8>(c,0x110500,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110400)));
wu<8>(c,0x110600,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c0),u<8>(c,0x110500)));
wu<8>(c,0x110300,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110600),u<8>(c,0x110300)));
wu<8>(c,0x110800,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x8)));
wu<1>(c,0x110900,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110b00,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110800),u<1>(c,0x110900)));
wu<1>(c,0x110c00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110d00,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x110c00)));
wu<8>(c,0x110e00,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110d00)));
wu<8>(c,0x110f00,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c8),u<8>(c,0x110e00)));
wu<8>(c,0x110b00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110f00),u<8>(c,0x110b00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x110000)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110300)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x13c0)));
wr<8>(c,0x13c0,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wu<1>(c,0x111100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x111100)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110b00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x111100)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x13c8)));
wr<8>(c,0x13c8,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
return 0x764a0c;}
case 0x764a0c:{ // ADDSD XMM2,XMM4
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1300),8,8));
return 0x764a10;}
case 0x764a10:{ // MOVLPD XMM4,qword ptr [0x007d7bf0]
wr<8>(c,0x1300,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf0)));
return 0x764a18;}
case 0x764a18:{ // MOVD XMM1,ECX
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x764a1c;}
case 0x764a1c:{ // MULSD XMM2,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,u<8>(c,0xa400),8,8));
return 0x764a22;}
case 0x764a22:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x764a26;}
case 0x764a26:{ // PSLLQ XMM1,0x2d
wr<8>(c,0x1240,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1240),0x2dull));
wr<8>(c,0x1248,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1248),0x2dull));
return 0x764a2b;}
case 0x764a2b:{ // PSHUFD XMM1,XMM1,0x44
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x764a30;}
case 0x764a30:{ // MOVAPD XMM7,xmmword ptr [0x007d7be0]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7be0)));
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x764a38;}
case 0x764a38:{ // ADDSD XMM5,XMM2
wr<8>(c,0x1340,float_op("FLOAT_ADD",r<8>(c,0x1340),8,r<8>(c,0x1280),8,8));
return 0x764a3c;}
case 0x764a3c:{ // MULPD XMM3,XMM1
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,r<8>(c,0x1240),8,8));
wr<8>(c,0x12c8,float_op("FLOAT_MULT",r<8>(c,0x12c8),8,r<8>(c,0x1248),8,8));
return 0x764a40;}
case 0x764a40:{ // ADDSD XMM0,XMM5
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1340),8,8));
return 0x764a44;}
case 0x764a44:{ // UNPCKLPD XMM0,XMM0
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x764a48;}
case 0x764a48:{ // MULPD XMM6,XMM0
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x1388,float_op("FLOAT_MULT",r<8>(c,0x1388),8,r<8>(c,0x1208),8,8));
return 0x764a4c;}
case 0x764a4c:{ // MULSD XMM4,XMM0
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x1200),8,8));
return 0x764a50;}
case 0x764a50:{ // MULPD XMM0,XMM0
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x1208,float_op("FLOAT_MULT",r<8>(c,0x1208),8,r<8>(c,0x1208),8,8));
return 0x764a54;}
case 0x764a54:{ // ADDPD XMM7,XMM6
wr<8>(c,0x13c0,float_op("FLOAT_ADD",r<8>(c,0x13c0),8,r<8>(c,0x1380),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_ADD",r<8>(c,0x13c8),8,r<8>(c,0x1388),8,8));
return 0x764a58;}
case 0x764a58:{ // MULPD XMM7,XMM0
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_MULT",r<8>(c,0x13c8),8,r<8>(c,0x1208),8,8));
return 0x764a5c;}
case 0x764a5c:{ // MULSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x764a60;}
case 0x764a60:{ // PSHUFD XMM6,XMM7,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x764a65;}
case 0x764a65:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x764a69;}
case 0x764a69:{ // PSHUFD XMM5,XMM3,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x764a6e;}
case 0x764a6e:{ // MULSD XMM6,XMM3
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x12c0),8,8));
return 0x764a72;}
case 0x764a72:{ // MULSD XMM4,XMM3
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x12c0),8,8));
return 0x764a76;}
case 0x764a76:{ // ADDSD XMM0,XMM5
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1340),8,8));
return 0x764a7a;}
case 0x764a7a:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764a7d;}
case 0x764a7d:{ // ADDSD XMM0,XMM6
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1380),8,8));
return 0x764a81;}
case 0x764a81:{ // ADDSD XMM0,XMM4
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1300),8,8));
return 0x764a85;}
case 0x764a85:{ // ADDSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x764a89;}
case 0x764a89:{ // MOVLPD qword ptr [ESP + 0x4],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x764a8f;}
case 0x764a8f:{ // FLD double ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764a8full));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x764a93;}
case 0x764a93:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764a96;}
case 0x764a96:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764a97;}
case 0x764a97:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764a9d;}
case 0x764a9d:{ // MOVLPD XMM3,qword ptr [0x007d7bc0]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7bc0)));
return 0x764aa5;}
case 0x764aa5:{ // MOVD EAX,XMM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1240),0x0ull));
return 0x764aa9;}
case 0x764aa9:{ // MOVSD XMM2,XMM1
wr<8>(c,0x1280,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x764aad;}
case 0x764aad:{ // ANDPD XMM1,XMM3
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),r<8>(c,0x12c0)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),r<8>(c,0x12c8)));
return 0x764ab1;}
case 0x764ab1:{ // PSRLQ XMM1,0x20
wr<8>(c,0x1240,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1240),0x20ull));
wr<8>(c,0x1248,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1248),0x20ull));
return 0x764ab6;}
case 0x764ab6:{ // MOVD ECX,XMM1
wr<4>(c,0x4,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1240),0x0ull));
return 0x764aba;}
case 0x764aba:{ // CMP ECX,0x7ff00000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x7ff00000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ac0;}
case 0x764ac0:{ // JNC 0x00764ba0
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x764ba0;}
return 0x764ac6;}
case 0x764ac6:{ // OR EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ac8;}
case 0x764ac8:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764acb;}
case 0x764acb:{ // JZ 0x00764ee4
if(r<1>(c,0x206)){return 0x764ee4;}
return 0x764ad1;}
case 0x764ad1:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ad4;}
case 0x764ad4:{ // JGE 0x00764bdf
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x764bdf;}
return 0x764ada;}
case 0x764ada:{ // NEG EDX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_2COMP,4,4>(r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764adc;}
case 0x764adc:{ // ADD EDX,0x7fef
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x7fefull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x7fefull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x7fefull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ae2;}
case 0x764ae2:{ // PSLLQ XMM3,0x34
wr<8>(c,0x12c0,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x12c0),0x34ull));
wr<8>(c,0x12c8,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x12c8),0x34ull));
return 0x764ae7;}
case 0x764ae7:{ // ORPD XMM2,XMM3
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x12c0)));
return 0x764aeb;}
case 0x764aeb:{ // MOV ECX,0x3f3
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x3f3ull));
return 0x764af0;}
case 0x764af0:{ // MOVD XMM3,ECX
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x764af4;}
case 0x764af4:{ // PSRLQ XMM1,0x14
wr<8>(c,0x1240,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1240),0x14ull));
wr<8>(c,0x1248,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1248),0x14ull));
return 0x764af9;}
case 0x764af9:{ // PSUBD XMM1,XMM3
wr<4>(c,0x1240,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
return 0x764afd;}
case 0x764afd:{ // PXOR XMM3,XMM3
wr<16>(c,0x12c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x12c0)));
return 0x764b01;}
case 0x764b01:{ // PMAXSW XMM1,XMM3
wu<16>(c,0x113500,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wu<1>(c,0x113600,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1240),u<2>(c,0x113500)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113600)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113500)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113600)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1240)));
wr<2>(c,0x1240,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113700,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1242),u<2>(c,0x113502)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113700)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113502)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113700)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1242)));
wr<2>(c,0x1242,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113800,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1244),u<2>(c,0x113504)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113800)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113504)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113800)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1244)));
wr<2>(c,0x1244,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113900,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1246),u<2>(c,0x113506)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113900)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113506)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113900)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1246)));
wr<2>(c,0x1246,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113a00,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x1248),u<2>(c,0x113508)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113a00)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x113508)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113a00)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x1248)));
wr<2>(c,0x1248,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113b00,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x124a),u<2>(c,0x11350a)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113b00)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x11350a)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113b00)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x124a)));
wr<2>(c,0x124a,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113c00,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x124c),u<2>(c,0x11350c)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113c00)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x11350c)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113c00)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x124c)));
wr<2>(c,0x124c,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
wu<1>(c,0x113d00,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x124e),u<2>(c,0x11350e)));
wu<2>(c,0x0,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x113d00)));
wu<2>(c,0x100,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x0),u<2>(c,0x11350e)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x113d00)));
wu<2>(c,0x300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x200)));
wu<2>(c,0x400,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x300),r<2>(c,0x124e)));
wr<2>(c,0x124e,eval<Op::INT_OR,2,2,2>(u<2>(c,0x100),u<2>(c,0x400)));
return 0x764b05;}
case 0x764b05:{ // PSLLQ XMM2,XMM1
wu<8>(c,0x12b100,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wr<8>(c,0x1280,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1280),u<8>(c,0x12b100)));
wr<8>(c,0x1288,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1288),u<8>(c,0x12b100)));
return 0x764b09;}
case 0x764b09:{ // PCMPEQD XMM2,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1280),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1280,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1284),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1284,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1288),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1288,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x128c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x128c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764b0d;}
case 0x764b0d:{ // PMOVMSKB EAX,XMM2
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764b11;}
case 0x764b11:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x764b13;}
case 0x764b13:{ // AND EDX,0x7fff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7fffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b19;}
case 0x764b19:{ // CMP EDX,0x7ff0
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x7ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x7ff0ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b1f;}
case 0x764b1f:{ // JNC 0x00764cc8
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x764cc8;}
return 0x764b25;}
case 0x764b25:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b2a;}
case 0x764b2a:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b2f;}
case 0x764b2f:{ // JNZ 0x00764dc1
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764dc1;}
return 0x764b35;}
case 0x764b35:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764b3b;}
case 0x764b3b:{ // MOVLPD XMM2,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764b41;}
case 0x764b41:{ // MOV ECX,0x3f4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x3f4ull));
return 0x764b46;}
case 0x764b46:{ // MOVD XMM3,ECX
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x764b4a;}
case 0x764b4a:{ // ANDPD XMM1,xmmword ptr [0x007d7bc0]
wu<16>(c,0xbd700,eval<Op::COPY,16,16>(m<16>(c,0x7d7bc0)));
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),u<8>(c,0xbd700)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),u<8>(c,0xbd708)));
return 0x764b52;}
case 0x764b52:{ // PSRLQ XMM1,0x34
wr<8>(c,0x1240,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1240),0x34ull));
wr<8>(c,0x1248,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1248),0x34ull));
return 0x764b57;}
case 0x764b57:{ // PSUBD XMM1,XMM3
wr<4>(c,0x1240,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
return 0x764b5b;}
case 0x764b5b:{ // MOVLPD XMM3,qword ptr [0x007d7c20]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7c20)));
return 0x764b63;}
case 0x764b63:{ // PSLLQ XMM2,XMM1
wu<8>(c,0x12b100,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wr<8>(c,0x1280,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1280),u<8>(c,0x12b100)));
wr<8>(c,0x1288,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1288),u<8>(c,0x12b100)));
return 0x764b67;}
case 0x764b67:{ // PCMPEQD XMM2,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1280),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1280,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1284),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1284,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1288),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1288,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x128c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x128c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764b6b;}
case 0x764b6b:{ // PMOVMSKB EAX,XMM2
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764b6f;}
case 0x764b6f:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b74;}
case 0x764b74:{ // MOV ECX,0x3ff01
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x3ff01ull));
return 0x764b79;}
case 0x764b79:{ // ADD ECX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b7b;}
case 0x764b7b:{ // AND ECX,0x40000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x40000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b81;}
case 0x764b81:{ // CMP EDX,0x10
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x10ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764b84;}
case 0x764b84:{ // JC 0x00764be4
if(r<1>(c,0x200)){return 0x764be4;}
return 0x764b86;}
case 0x764b86:{ // MOV EDX,0xbfe7f
wr<4>(c,0x8,eval<Op::COPY,4,4>(0xbfe7full));
return 0x764b8b;}
case 0x764b8b:{ // MOVLPD XMM3,qword ptr [0x007d7ba0]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764b93;}
case 0x764b93:{ // MOVLPD XMM2,qword ptr [0x007d7bb0]
wr<8>(c,0x1280,eval<Op::COPY,8,8>(m<8>(c,0x7d7bb0)));
return 0x764b9b;}
case 0x764b9b:{ // JMP 0x007647c6
return 0x7647c6;
return 0x764ba0;}
case 0x764ba0:{ // MOVLPD XMM7,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764ba6;}
case 0x764ba6:{ // MOVLPD XMM4,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764bac;}
case 0x764bac:{ // MOVD EDX,XMM7
wr<4>(c,0x8,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x13c0),0x0ull));
return 0x764bb0;}
case 0x764bb0:{ // PSRLQ XMM7,0x20
wr<8>(c,0x13c0,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x13c0),0x20ull));
wr<8>(c,0x13c8,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x13c8),0x20ull));
return 0x764bb5;}
case 0x764bb5:{ // MOVD EAX,XMM7
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x13c0),0x0ull));
return 0x764bb9;}
case 0x764bb9:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764bbb;}
case 0x764bbb:{ // AND EAX,0x7fffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764bc0;}
case 0x764bc0:{ // CMP EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764bc5;}
case 0x764bc5:{ // JC 0x00764e5c
if(r<1>(c,0x200)){return 0x764e5c;}
return 0x764bcb;}
case 0x764bcb:{ // JA 0x00764daf
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x764daf;}
return 0x764bd1;}
case 0x764bd1:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764bd4;}
case 0x764bd4:{ // JA 0x00764daf
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x764daf;}
return 0x764bda;}
case 0x764bda:{ // JMP 0x00764e5c
return 0x764e5c;
return 0x764bdf;}
case 0x764bdf:{ // MOV ECX,0x0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x0ull));
return 0x764be4;}
case 0x764be4:{ // XORPD XMM0,XMM0
wr<8>(c,0x1200,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1200),r<8>(c,0x1200)));
wr<8>(c,0x1208,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1208),r<8>(c,0x1208)));
return 0x764be8;}
case 0x764be8:{ // MOV EAX,0x43f0
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x43f0ull));
return 0x764bed;}
case 0x764bed:{ // PINSRW XMM0,EAX,0x3
wu<1>(c,0x10fc00,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10fe00,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10fc00),0x10ull));
wu<1>(c,0x110000,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110100,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x0)));
wu<8>(c,0x110300,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110100),u<1>(c,0x10fe00)));
wu<8>(c,0x110400,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x10fe00)));
wu<8>(c,0x110500,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110400)));
wu<8>(c,0x110600,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1200),u<8>(c,0x110500)));
wu<8>(c,0x110300,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110600),u<8>(c,0x110300)));
wu<8>(c,0x110800,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x0)));
wu<1>(c,0x110900,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110b00,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110800),u<1>(c,0x110900)));
wu<1>(c,0x110c00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110d00,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x110c00)));
wu<8>(c,0x110e00,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110d00)));
wu<8>(c,0x110f00,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1208),u<8>(c,0x110e00)));
wu<8>(c,0x110b00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110f00),u<8>(c,0x110b00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x110000)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110300)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1200)));
wr<8>(c,0x1200,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wu<1>(c,0x111100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x111100)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110b00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x111100)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1208)));
wr<8>(c,0x1208,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
return 0x764bf2;}
case 0x764bf2:{ // MOVLPD XMM7,qword ptr [0x007d7ba0]
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764bfa;}
case 0x764bfa:{ // MOVLPD XMM2,qword ptr [0x007d7bb0]
wr<8>(c,0x1280,eval<Op::COPY,8,8>(m<8>(c,0x7d7bb0)));
return 0x764c02;}
case 0x764c02:{ // MULSD XMM0,XMM4
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x1300),8,8));
return 0x764c06;}
case 0x764c06:{ // MOVD EDX,XMM4
wr<4>(c,0x8,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764c0a;}
case 0x764c0a:{ // PSRLQ XMM4,0x20
wr<8>(c,0x1300,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1300),0x20ull));
wr<8>(c,0x1308,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1308),0x20ull));
return 0x764c0f;}
case 0x764c0f:{ // MOVD EAX,XMM4
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764c13;}
case 0x764c13:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c16;}
case 0x764c16:{ // JZ 0x00764c6a
if(r<1>(c,0x206)){return 0x764c6a;}
return 0x764c18;}
case 0x764c18:{ // ANDPD XMM7,XMM0
wr<8>(c,0x13c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c0),r<8>(c,0x1200)));
wr<8>(c,0x13c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c8),r<8>(c,0x1208)));
return 0x764c1c;}
case 0x764c1c:{ // MOVSD XMM4,XMM0
wr<8>(c,0x1300,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x764c20;}
case 0x764c20:{ // ANDPD XMM0,xmmword ptr [0x007d7bc0]
wu<16>(c,0xbd700,eval<Op::COPY,16,16>(m<16>(c,0x7d7bc0)));
wr<8>(c,0x1200,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1200),u<8>(c,0xbd700)));
wr<8>(c,0x1208,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1208),u<8>(c,0xbd708)));
return 0x764c28;}
case 0x764c28:{ // PSRLQ XMM0,0x2c
wr<8>(c,0x1200,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1200),0x2cull));
wr<8>(c,0x1208,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1208),0x2cull));
return 0x764c2d;}
case 0x764c2d:{ // PEXTRW EAX,XMM0,0x0
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x0ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1200),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1208),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764c32;}
case 0x764c32:{ // ORPD XMM7,XMM2
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1280)));
return 0x764c36;}
case 0x764c36:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c3b;}
case 0x764c3b:{ // ADD EAX,0x1
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c3e;}
case 0x764c3e:{ // AND EAX,0x1fe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1feull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c43;}
case 0x764c43:{ // MULSD XMM7,qword ptr [EAX*0x4 + 0x7d4310]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4310ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,u<8>(c,0xa400),8,8));
return 0x764c4c;}
case 0x764c4c:{ // MOVLPD XMM5,qword ptr [EAX*0x4 + 0x7d4310]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4310ull,u<4>(c,0x6d00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6f00)));
wr<8>(c,0x1340,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764c55;}
case 0x764c55:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c57;}
case 0x764c57:{ // MOVAPD XMM6,xmmword ptr [EAX*0x4 + 0x7d4720]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d4720ull,u<4>(c,0x6d00)));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6f00)));
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x764c60;}
case 0x764c60:{ // MOV EDX,0x43e7f
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x43e7full));
return 0x764c65;}
case 0x764c65:{ // JMP 0x007647c6
return 0x7647c6;
return 0x764c6a;}
case 0x764c6a:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764c6c;}
case 0x764c6c:{ // AND EDX,0x7fffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c72;}
case 0x764c72:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c75;}
case 0x764c75:{ // JNZ 0x00764c18
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764c18;}
return 0x764c77;}
case 0x764c77:{ // MOV EDX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x764c7b;}
case 0x764c7b:{ // AND EDX,0x80000000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x80000000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c81;}
case 0x764c81:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c84;}
case 0x764c84:{ // JZ 0x00764cb7
if(r<1>(c,0x206)){return 0x764cb7;}
return 0x764c86;}
case 0x764c86:{ // SHL ECX,0xd
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0xdull,0x1full));
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
return 0x764c89;}
case 0x764c89:{ // AND EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c8b;}
case 0x764c8b:{ // MOV EDX,0x7ff00000
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x7ff00000ull));
return 0x764c90;}
case 0x764c90:{ // OR EDX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764c92;}
case 0x764c92:{ // MOVD XMM0,EDX
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x8)));
return 0x764c96;}
case 0x764c96:{ // PSLLQ XMM0,0x20
wr<8>(c,0x1200,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1200),0x20ull));
wr<8>(c,0x1208,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1208),0x20ull));
return 0x764c9b;}
case 0x764c9b:{ // MOVLPD XMM1,qword ptr [0x007d7bb0]
wr<8>(c,0x1240,eval<Op::COPY,8,8>(m<8>(c,0x7d7bb0)));
return 0x764ca3;}
case 0x764ca3:{ // MOVLPD XMM2,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764ca9;}
case 0x764ca9:{ // DIVSD XMM1,XMM2
wr<8>(c,0x1240,float_op("FLOAT_DIV",r<8>(c,0x1240),8,r<8>(c,0x1280),8,8));
return 0x764cad;}
case 0x764cad:{ // MOV EDX,0x1b
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1bull));
return 0x764cb2;}
case 0x764cb2:{ // JMP 0x00764f51
return 0x764f51;
return 0x764cb7;}
case 0x764cb7:{ // SHL ECX,0xd
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0xdull,0x1full));
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
return 0x764cba;}
case 0x764cba:{ // AND EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764cbc;}
case 0x764cbc:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764cbf;}
case 0x764cbf:{ // JNZ 0x00764d69
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764d69;}
return 0x764cc5;}
case 0x764cc5:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764cc5ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x764cc7;}
case 0x764cc7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764cc8;}
case 0x764cc8:{ // MOVLPD XMM3,qword ptr [0x007d7ba0]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764cd0;}
case 0x764cd0:{ // XORPD XMM1,XMM1
wr<8>(c,0x1240,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1240),r<8>(c,0x1240)));
wr<8>(c,0x1248,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1248),r<8>(c,0x1248)));
return 0x764cd4;}
case 0x764cd4:{ // ANDPD XMM3,XMM4
wr<8>(c,0x12c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c0),r<8>(c,0x1300)));
wr<8>(c,0x12c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c8),r<8>(c,0x1308)));
return 0x764cd8;}
case 0x764cd8:{ // PCMPEQD XMM1,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1240,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1244,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1248,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x124c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764cdc;}
case 0x764cdc:{ // PMOVMSKB ECX,XMM1
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764ce0;}
case 0x764ce0:{ // AND ECX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ce6;}
case 0x764ce6:{ // CMP ECX,0xff
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0xffull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764cec;}
case 0x764cec:{ // JNZ 0x00764daf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764daf;}
return 0x764cf2;}
case 0x764cf2:{ // PEXTRW ECX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764cf7;}
case 0x764cf7:{ // AND ECX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764cfd;}
case 0x764cfd:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d00;}
case 0x764d00:{ // JZ 0x00764d93
if(r<1>(c,0x206)){return 0x764d93;}
return 0x764d06;}
case 0x764d06:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d0b;}
case 0x764d0b:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d10;}
case 0x764d10:{ // JNZ 0x00764d77
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764d77;}
return 0x764d12;}
case 0x764d12:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764d18;}
case 0x764d18:{ // MOVLPD XMM2,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764d1e;}
case 0x764d1e:{ // MOV ECX,0x3f4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x3f4ull));
return 0x764d23;}
case 0x764d23:{ // MOVD XMM3,ECX
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x764d27;}
case 0x764d27:{ // ANDPD XMM1,xmmword ptr [0x007d7bc0]
wu<16>(c,0xbd700,eval<Op::COPY,16,16>(m<16>(c,0x7d7bc0)));
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),u<8>(c,0xbd700)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),u<8>(c,0xbd708)));
return 0x764d2f;}
case 0x764d2f:{ // PSRLQ XMM1,0x34
wr<8>(c,0x1240,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1240),0x34ull));
wr<8>(c,0x1248,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1248),0x34ull));
return 0x764d34;}
case 0x764d34:{ // PSUBD XMM1,XMM3
wr<4>(c,0x1240,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
return 0x764d38;}
case 0x764d38:{ // PXOR XMM3,XMM3
wr<16>(c,0x12c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x12c0)));
return 0x764d3c;}
case 0x764d3c:{ // PSLLQ XMM2,XMM1
wu<8>(c,0x12b100,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wr<8>(c,0x1280,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1280),u<8>(c,0x12b100)));
wr<8>(c,0x1288,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1288),u<8>(c,0x12b100)));
return 0x764d40;}
case 0x764d40:{ // PCMPEQD XMM2,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1280),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1280,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1284),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1284,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1288),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1288,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x128c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x128c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764d44;}
case 0x764d44:{ // PMOVMSKB EAX,XMM2
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764d48;}
case 0x764d48:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d4d;}
case 0x764d4d:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d52;}
case 0x764d52:{ // JZ 0x00764d77
if(r<1>(c,0x206)){return 0x764d77;}
return 0x764d54;}
case 0x764d54:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764d5a;}
case 0x764d5a:{ // PEXTRW EAX,XMM1,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1240),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1248),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764d5f;}
case 0x764d5f:{ // AND EAX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d64;}
case 0x764d64:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d67;}
case 0x764d67:{ // JZ 0x00764d70
if(r<1>(c,0x206)){return 0x764d70;}
return 0x764d69;}
case 0x764d69:{ // FLD double ptr [0x007d7c20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764d69ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c20),8,0x0ull,4,10));
return 0x764d6f;}
case 0x764d6f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764d70;}
case 0x764d70:{ // FLD double ptr [0x007d7c18]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764d70ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c18),8,0x0ull,4,10));
return 0x764d76;}
case 0x764d76:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764d77;}
case 0x764d77:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764d7d;}
case 0x764d7d:{ // PEXTRW EAX,XMM1,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1240),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1248),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764d82;}
case 0x764d82:{ // AND EAX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d87;}
case 0x764d87:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764d8a;}
case 0x764d8a:{ // JZ 0x00764ece
if(r<1>(c,0x206)){return 0x764ece;}
return 0x764d90;}
case 0x764d90:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764d90ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x764d92;}
case 0x764d92:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764d93;}
case 0x764d93:{ // MOVLPD XMM1,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764d99;}
case 0x764d99:{ // PEXTRW EAX,XMM1,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1240),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1248),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764d9e;}
case 0x764d9e:{ // AND EAX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764da3;}
case 0x764da3:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764da6;}
case 0x764da6:{ // JZ 0x00764ece
if(r<1>(c,0x206)){return 0x764ece;}
return 0x764dac;}
case 0x764dac:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764dacull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x764dae;}
case 0x764dae:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764daf;}
case 0x764daf:{ // ADDSD XMM4,XMM4
wr<8>(c,0x1300,float_op("FLOAT_ADD",r<8>(c,0x1300),8,r<8>(c,0x1300),8,8));
return 0x764db3;}
case 0x764db3:{ // MOVSD XMM0,XMM4
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
return 0x764db7;}
case 0x764db7:{ // MOV EDX,0x3ee
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x3eeull));
return 0x764dbc;}
case 0x764dbc:{ // JMP 0x00764f51
return 0x764f51;
return 0x764dc1;}
case 0x764dc1:{ // MOVLPD XMM2,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764dc7;}
case 0x764dc7:{ // MOVD EAX,XMM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1280),0x0ull));
return 0x764dcb;}
case 0x764dcb:{ // PSRLQ XMM2,0x20
wr<8>(c,0x1280,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1280),0x20ull));
wr<8>(c,0x1288,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1288),0x20ull));
return 0x764dd0;}
case 0x764dd0:{ // MOVD EDX,XMM2
wr<4>(c,0x8,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1280),0x0ull));
return 0x764dd4;}
case 0x764dd4:{ // AND EDX,0x7fffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764dda;}
case 0x764dda:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ddc;}
case 0x764ddc:{ // MOV ECX,0x0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x0ull));
return 0x764de1;}
case 0x764de1:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764de4;}
case 0x764de4:{ // JZ 0x00764c6a
if(r<1>(c,0x206)){return 0x764c6a;}
return 0x764dea;}
case 0x764dea:{ // MOVLPD XMM1,qword ptr [0x007d7c08]
wr<8>(c,0x1240,eval<Op::COPY,8,8>(m<8>(c,0x7d7c08)));
return 0x764df2;}
case 0x764df2:{ // MOVLPD XMM0,qword ptr [0x007d7c30]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7c30)));
return 0x764dfa;}
case 0x764dfa:{ // MULSD XMM1,XMM1
wr<8>(c,0x1240,float_op("FLOAT_MULT",r<8>(c,0x1240),8,r<8>(c,0x1240),8,8));
return 0x764dfe;}
case 0x764dfe:{ // MOV EDX,0x1c
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1cull));
return 0x764e03;}
case 0x764e03:{ // JMP 0x00764f51
return 0x764f51;
return 0x764e08;}
case 0x764e08:{ // MOVLPD XMM4,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764e0e;}
case 0x764e0e:{ // MOVLPD XMM2,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764e14;}
case 0x764e14:{ // MOVD EAX,XMM4
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764e18;}
case 0x764e18:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e1b;}
case 0x764e1b:{ // JNZ 0x00764e5c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764e5c;}
return 0x764e1d;}
case 0x764e1d:{ // PSRLQ XMM4,0x20
wr<8>(c,0x1300,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1300),0x20ull));
wr<8>(c,0x1308,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1308),0x20ull));
return 0x764e22;}
case 0x764e22:{ // MOVD EDX,XMM4
wr<4>(c,0x8,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764e26;}
case 0x764e26:{ // CMP EDX,0x3ff00000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x3ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x3ff00000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x3ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e2c;}
case 0x764e2c:{ // JZ 0x00764f3a
if(r<1>(c,0x206)){return 0x764f3a;}
return 0x764e32;}
case 0x764e32:{ // CMP EDX,0xbff00000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0xbff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0xbff00000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0xbff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e38;}
case 0x764e38:{ // JNZ 0x00764e5c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764e5c;}
return 0x764e3a;}
case 0x764e3a:{ // MOVLPD XMM3,qword ptr [0x007d7ba0]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764e42;}
case 0x764e42:{ // XORPD XMM1,XMM1
wr<8>(c,0x1240,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1240),r<8>(c,0x1240)));
wr<8>(c,0x1248,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1248),r<8>(c,0x1248)));
return 0x764e46;}
case 0x764e46:{ // ANDPD XMM3,XMM2
wr<8>(c,0x12c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c0),r<8>(c,0x1280)));
wr<8>(c,0x12c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c8),r<8>(c,0x1288)));
return 0x764e4a;}
case 0x764e4a:{ // PCMPEQD XMM1,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1240,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1244,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1248,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x124c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764e4e;}
case 0x764e4e:{ // PMOVMSKB EAX,XMM1
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764e52;}
case 0x764e52:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e57;}
case 0x764e57:{ // JNZ 0x00764ed5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764ed5;}
return 0x764e59;}
case 0x764e59:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764e59ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x764e5b;}
case 0x764e5b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764e5c;}
case 0x764e5c:{ // MOVLPD XMM3,qword ptr [0x007d7ba0]
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(m<8>(c,0x7d7ba0)));
return 0x764e64;}
case 0x764e64:{ // XORPD XMM1,XMM1
wr<8>(c,0x1240,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1240),r<8>(c,0x1240)));
wr<8>(c,0x1248,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1248),r<8>(c,0x1248)));
return 0x764e68;}
case 0x764e68:{ // ANDPD XMM3,XMM2
wr<8>(c,0x12c0,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c0),r<8>(c,0x1280)));
wr<8>(c,0x12c8,eval<Op::INT_AND,8,8,8>(r<8>(c,0x12c8),r<8>(c,0x1288)));
return 0x764e6c;}
case 0x764e6c:{ // PCMPEQD XMM1,XMM3
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1240),r<4>(c,0x12c0)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1240,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1244),r<4>(c,0x12c4)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1244,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1248),r<4>(c,0x12c8)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1248,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x124c),r<4>(c,0x12cc)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x124c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x764e70;}
case 0x764e70:{ // PMOVMSKB EAX,XMM1
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x764e74;}
case 0x764e74:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e79;}
case 0x764e79:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e7e;}
case 0x764e7e:{ // JNZ 0x00764ed5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x764ed5;}
return 0x764e80;}
case 0x764e80:{ // PEXTRW EAX,XMM2,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1280),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1288),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764e85;}
case 0x764e85:{ // MOVLPD XMM4,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764e8b;}
case 0x764e8b:{ // AND EAX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e90;}
case 0x764e90:{ // XOR ECX,0xbff00000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),0xbff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e96;}
case 0x764e96:{ // OR EDX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e98;}
case 0x764e98:{ // CMP EDX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764e9b;}
case 0x764e9b:{ // JZ 0x00764f3a
if(r<1>(c,0x206)){return 0x764f3a;}
return 0x764ea1;}
case 0x764ea1:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ea4;}
case 0x764ea4:{ // JZ 0x00764eba
if(r<1>(c,0x206)){return 0x764eba;}
return 0x764ea6;}
case 0x764ea6:{ // PEXTRW EAX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764eab;}
case 0x764eab:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764eb0;}
case 0x764eb0:{ // CMP EAX,0x3ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764eb5;}
case 0x764eb5:{ // JC 0x00764ece
if(r<1>(c,0x200)){return 0x764ece;}
return 0x764eb7;}
case 0x764eb7:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764eb7ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x764eb9;}
case 0x764eb9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764eba;}
case 0x764eba:{ // PEXTRW EAX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x764ebf;}
case 0x764ebf:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ec4;}
case 0x764ec4:{ // CMP EAX,0x3ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3ff0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ec9;}
case 0x764ec9:{ // JNC 0x00764ece
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x764ece;}
return 0x764ecb;}
case 0x764ecb:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764ecbull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x764ecd;}
case 0x764ecd:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764ece;}
case 0x764ece:{ // FLD double ptr [0x007d7c10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764eceull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c10),8,0x0ull,4,10));
return 0x764ed4;}
case 0x764ed4:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764ed5;}
case 0x764ed5:{ // ADDSD XMM2,XMM2
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1280),8,8));
return 0x764ed9;}
case 0x764ed9:{ // MOVSD XMM0,XMM2
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
return 0x764edd;}
case 0x764edd:{ // MOV EDX,0x3ee
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x3eeull));
return 0x764ee2;}
case 0x764ee2:{ // JMP 0x00764f51
return 0x764f51;
return 0x764ee4;}
case 0x764ee4:{ // MOVD EAX,XMM4
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764ee8;}
case 0x764ee8:{ // PSRLQ XMM4,0x20
wr<8>(c,0x1300,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1300),0x20ull));
wr<8>(c,0x1308,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1308),0x20ull));
return 0x764eed;}
case 0x764eed:{ // MOVD EDX,XMM4
wr<4>(c,0x8,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764ef1;}
case 0x764ef1:{ // AND EDX,0x7fffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764ef7;}
case 0x764ef7:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764ef9;}
case 0x764ef9:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764efb;}
case 0x764efb:{ // MOVLPD XMM0,qword ptr [0x007d7bb0]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7bb0)));
return 0x764f03;}
case 0x764f03:{ // MOV EDX,0x1a
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1aull));
return 0x764f08;}
case 0x764f08:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f0b;}
case 0x764f0b:{ // JZ 0x00764f51
if(r<1>(c,0x206)){return 0x764f51;}
return 0x764f0d;}
case 0x764f0d:{ // MOVD EAX,XMM4
wr<4>(c,0x0,eval<Op::SUBPIECE,4,16,4>(r<16>(c,0x1300),0x0ull));
return 0x764f11;}
case 0x764f11:{ // MOV EDX,0x1d
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1dull));
return 0x764f16;}
case 0x764f16:{ // AND EAX,0x7fffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7fffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f1b;}
case 0x764f1b:{ // CMP EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f20;}
case 0x764f20:{ // JA 0x00764f51
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x764f51;}
return 0x764f22;}
case 0x764f22:{ // JC 0x00764f29
if(r<1>(c,0x200)){return 0x764f29;}
return 0x764f24;}
case 0x764f24:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f27;}
case 0x764f27:{ // JA 0x00764f51
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x764f51;}
return 0x764f29;}
case 0x764f29:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f2c;}
case 0x764f2c:{ // MOVLPD qword ptr [ESP + 0x4],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x764f32;}
case 0x764f32:{ // FLD double ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764f32ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x764f36;}
case 0x764f36:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f39;}
case 0x764f39:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764f3a;}
case 0x764f3a:{ // MOVLPD XMM1,qword ptr [0x007d7c30]
wr<8>(c,0x1240,eval<Op::COPY,8,8>(m<8>(c,0x7d7c30)));
return 0x764f42;}
case 0x764f42:{ // MOVLPD XMM0,qword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x764f48;}
case 0x764f48:{ // ADDSD XMM0,XMM1
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1240),8,8));
return 0x764f4c;}
case 0x764f4c:{ // MOV EDX,0x1c
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x1cull));
return 0x764f51;}
case 0x764f51:{ // SUB ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f54;}
case 0x764f54:{ // MOVLPD qword ptr [ESP + 0x10],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x764f5a;}
case 0x764f5a:{ // MOV dword ptr [ESP + 0xc],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x764f5e;}
case 0x764f5e:{ // MOV EDX,ESP
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x764f60;}
case 0x764f60:{ // ADD EDX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x10ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f63;}
case 0x764f63:{ // MOV dword ptr [ESP + 0x8],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x764f67;}
case 0x764f67:{ // ADD EDX,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x18ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f6a;}
case 0x764f6a:{ // MOV dword ptr [ESP + 0x4],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x764f6e;}
case 0x764f6e:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f71;}
case 0x764f71:{ // MOV dword ptr [ESP],EDX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x764f74;}
case 0x764f74:{ // CALL 0x007694d0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x764f79ull);
return 0x7694d0;
return 0x764f79;}
case 0x764f79:{ // FLD double ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x764f79ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x764f7d;}
case 0x764f7d:{ // ADD ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f80;}
case 0x764f80:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x764f81;}
case 0x764f81:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f84;}
case 0x764f84:{ // JLE 0x00764fae
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x764fae;}
return 0x764f86;}
case 0x764f86:{ // CMP EAX,0x40000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x40000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x40000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x40000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f8b;}
case 0x764f8b:{ // JNC 0x007651cd
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x7651cd;}
return 0x764f91;}
case 0x764f91:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764f92;}
case 0x764f92:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764f94;}
case 0x764f94:{ // AND EAX,0x7f
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f97;}
case 0x764f97:{ // ADD ECX,0x3ff00
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x3ff00ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x3ff00ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3ff00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764f9d;}
case 0x764f9d:{ // SUB EDX,0x80
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x80ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fa3;}
case 0x764fa3:{ // AND EDX,0xffffff80
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffffff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fa6;}
case 0x764fa6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764fa7;}
case 0x764fa7:{ // MOV EDI,0x3ff0
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x3ff0ull));
return 0x764fac;}
case 0x764fac:{ // JMP 0x00764fd4
return 0x764fd4;
return 0x764fae;}
case 0x764fae:{ // CMP EAX,0xfffc0200
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xfffc0200ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xfffc0200ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xfffc0200ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fb3;}
case 0x764fb3:{ // JLE 0x007651aa
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x7651aa;}
return 0x764fb9;}
case 0x764fb9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764fba;}
case 0x764fba:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x764fbc;}
case 0x764fbc:{ // AND EAX,0x7f
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fbf;}
case 0x764fbf:{ // ADD ECX,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x80ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fc5;}
case 0x764fc5:{ // AND EDX,0xffffff80
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffffff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fc8;}
case 0x764fc8:{ // ADD EDX,0x3fe80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x3fe80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x3fe80ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3fe80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fce;}
case 0x764fce:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x764fcf;}
case 0x764fcf:{ // MOV EDI,0x0
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x0ull));
return 0x764fd4;}
case 0x764fd4:{ // ADDSD XMM4,XMM0
wr<8>(c,0x1300,float_op("FLOAT_ADD",r<8>(c,0x1300),8,r<8>(c,0x1200),8,8));
return 0x764fd8;}
case 0x764fd8:{ // MOVSD XMM0,XMM3
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
return 0x764fdc;}
case 0x764fdc:{ // ADDSD XMM3,qword ptr [0x007d7b90]
wr<8>(c,0x12c0,float_op("FLOAT_ADD",r<8>(c,0x12c0),8,m<8>(c,0x7d7b90),8,8));
return 0x764fe4;}
case 0x764fe4:{ // MOV ESI,EDX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x764fe6;}
case 0x764fe6:{ // SUB ESI,0x1ff80
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x1ff80ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x1ff80ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x1ff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x764fec;}
case 0x764fec:{ // MULPD XMM2,XMM7
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x1288,float_op("FLOAT_MULT",r<8>(c,0x1288),8,r<8>(c,0x13c8),8,8));
return 0x764ff0;}
case 0x764ff0:{ // SUBSD XMM3,qword ptr [0x007d7b90]
wr<8>(c,0x12c0,float_op("FLOAT_SUB",r<8>(c,0x12c0),8,m<8>(c,0x7d7b90),8,8));
return 0x764ff8;}
case 0x764ff8:{ // MULPD XMM7,XMM7
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_MULT",r<8>(c,0x13c8),8,r<8>(c,0x13c8),8,8));
return 0x764ffc;}
case 0x764ffc:{ // SUBSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_SUB",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x765000;}
default:missing_instruction(c.pc);}}
}
