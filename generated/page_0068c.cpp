#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_68c(Cpu& c){switch(c.pc){
case 0x68c001:{ // MOV dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c004;}
case 0x68c004:{ // LEA EAX,[EDI + ESI*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c007;}
case 0x68c007:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c00a;}
case 0x68c00a:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c00c;}
case 0x68c00c:{ // CMP dword ptr [EBP + 0x10],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x68c00f;}
case 0x68c00f:{ // JBE 0x0068c073
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c073;}
return 0x68c011;}
case 0x68c011:{ // MOV EDI,0x400
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x400ull));
return 0x68c016;}
case 0x68c016:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c019;}
case 0x68c019:{ // MOVZX ECX,word ptr [EAX + EBX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x68c01d;}
case 0x68c01d:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c01f;}
case 0x68c01f:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c021;}
case 0x68c021:{ // AND EDX,0x7c00
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7c00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c027;}
case 0x68c027:{ // AND ESI,0xffff8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffff8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c02d;}
case 0x68c02d:{ // SHL ESI,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x68c030;}
case 0x68c030:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x68c032;}
case 0x68c032:{ // NEG EAX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_2COMP,4,4>(r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c034;}
case 0x68c034:{ // SBB EAX,EAX
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c036;}
case 0x68c036:{ // AND EAX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c038;}
case 0x68c038:{ // AND ECX,0x3ff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c03e;}
case 0x68c03e:{ // OR EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c040;}
case 0x68c040:{ // CMP EDX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c042;}
case 0x68c042:{ // JA 0x0068c046
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x68c046;}
return 0x68c044;}
case 0x68c044:{ // MOV EDX,EDI
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c046;}
case 0x68c046:{ // ADD EDX,0x19800
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x19800ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x19800ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x19800ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c04c;}
case 0x68c04c:{ // SHL EDX,0xd
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0xdull,0x1full));
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
return 0x68c04f;}
case 0x68c04f:{ // OR EDX,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c051;}
case 0x68c051:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c053;}
case 0x68c053:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c056;}
case 0x68c056:{ // FILD dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68c056ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x68c059;}
case 0x68c059:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c05c;}
case 0x68c05c:{ // JGE 0x0068c064
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x68c064;}
return 0x68c05e;}
case 0x68c05e:{ // FADD float ptr [0x0078454c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68c05eull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x78454c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x68c064;}
case 0x68c064:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c067;}
case 0x68c067:{ // FMUL float ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68c067ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x68c06a;}
case 0x68c06a:{ // FSTP float ptr [EAX + EBX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68c06aull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x68c06d;}
case 0x68c06d:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c06e;}
case 0x68c06e:{ // CMP EBX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x68c071;}
case 0x68c071:{ // JC 0x0068c016
if(r<1>(c,0x200)){return 0x68c016;}
return 0x68c073;}
case 0x68c073:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c076;}
case 0x68c076:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c077;}
case 0x68c077:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c078;}
case 0x68c078:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c079;}
case 0x68c079:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x68c07a;}
case 0x68c07a:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68c07d;}
case 0x68c07d:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c07f;}
case 0x68c07f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c080;}
case 0x68c080:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c082;}
case 0x68c082:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c083;}
case 0x68c083:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c086;}
case 0x68c086:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c089;}
case 0x68c089:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c08a;}
case 0x68c08a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c08c;}
case 0x68c08c:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c092;}
case 0x68c092:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c095;}
case 0x68c095:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c096;}
case 0x68c096:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c097;}
case 0x68c097:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c09a;}
case 0x68c09a:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c09c;}
case 0x68c09c:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c09e;}
case 0x68c09e:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c0a1;}
case 0x68c0a1:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c0a2;}
case 0x68c0a2:{ // CMP ECX,EAX
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
return 0x68c0a4;}
case 0x68c0a4:{ // SBB ESI,ESI
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
return 0x68c0a6;}
case 0x68c0a6:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c0a8;}
case 0x68c0a8:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c0aa;}
case 0x68c0aa:{ // SHR ESI,0x2
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
return 0x68c0ad;}
case 0x68c0ad:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c0b0;}
case 0x68c0b0:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c0b3;}
case 0x68c0b3:{ // JZ 0x0068c220
if(r<1>(c,0x206)){return 0x68c220;}
return 0x68c0b9;}
case 0x68c0b9:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c0bc;}
case 0x68c0bc:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c0c2;}
case 0x68c0c2:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c0c7ull);
return 0x68b19f;
return 0x68c0c7;}
case 0x68c0c7:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c0c9;}
case 0x68c0c9:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c0cc;}
case 0x68c0cc:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c0cf;}
case 0x68c0cf:{ // JBE 0x0068c220
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c220;}
return 0x68c0d5;}
case 0x68c0d5:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c0d9;}
case 0x68c0d9:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c0dd;}
case 0x68c0dd:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c0e0;}
case 0x68c0e0:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c0e3;}
case 0x68c0e3:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c0e7;}
case 0x68c0e7:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c0ea;}
case 0x68c0ea:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c0ed;}
case 0x68c0ed:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c0f1;}
case 0x68c0f1:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c0f4;}
case 0x68c0f4:{ // MOVSS XMM3,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68c0f9;}
case 0x68c0f9:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c0fc;}
case 0x68c0fc:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c0ff;}
case 0x68c0ff:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c103;}
case 0x68c103:{ // SHUFPS XMM1,XMM2,0xdd
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
return 0x68c107;}
case 0x68c107:{ // SHUFPS XMM0,XMM2,0x88
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
return 0x68c10b;}
case 0x68c10b:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c111;}
case 0x68c111:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c114;}
case 0x68c114:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c11a;}
case 0x68c11a:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68c11d;}
case 0x68c11d:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c123;}
case 0x68c123:{ // MOVLHPS XMM3,XMM1
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68c126;}
case 0x68c126:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c129;}
case 0x68c129:{ // SHUFPS XMM1,XMM2,0x88
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
return 0x68c12d;}
case 0x68c12d:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c130;}
case 0x68c130:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c137;}
case 0x68c137:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c13a;}
case 0x68c13a:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c141;}
case 0x68c141:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68c144;}
case 0x68c144:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c147;}
case 0x68c147:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c14a;}
case 0x68c14a:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c151;}
case 0x68c151:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68c154;}
case 0x68c154:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c157;}
case 0x68c157:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c15b;}
case 0x68c15b:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c15e;}
case 0x68c15e:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c165;}
case 0x68c165:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c168;}
case 0x68c168:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c16f;}
case 0x68c16f:{ // ADDPS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x134c),4,4));
return 0x68c172;}
case 0x68c172:{ // MOVAPS XMM5,XMM6
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c175;}
case 0x68c175:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c178;}
case 0x68c178:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c17f;}
case 0x68c17f:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68c182;}
case 0x68c182:{ // ADDPS XMM5,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c186;}
case 0x68c186:{ // MOVAPS XMM6,XMM4
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c189;}
case 0x68c189:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c190;}
case 0x68c190:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c197;}
case 0x68c197:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c19a;}
case 0x68c19a:{ // MULPS XMM7,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c1a1;}
case 0x68c1a1:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c1a8;}
case 0x68c1a8:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c1ab;}
case 0x68c1ab:{ // MULPS XMM3,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c1af;}
case 0x68c1af:{ // MULPS XMM1,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c1b3;}
case 0x68c1b3:{ // ADDPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68c1b6;}
case 0x68c1b6:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68c1b9;}
case 0x68c1b9:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68c1bc;}
case 0x68c1bc:{ // ADDPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68c1bf;}
case 0x68c1bf:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c1c2;}
case 0x68c1c2:{ // ADDPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68c1c5;}
case 0x68c1c5:{ // ADDPS XMM4,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c1c9;}
case 0x68c1c9:{ // MOVAPS XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c1cc;}
case 0x68c1cc:{ // ADDPS XMM3,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,u<4>(c,0xbbc0c),4,4));
return 0x68c1d0;}
case 0x68c1d0:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c1d3;}
case 0x68c1d3:{ // UNPCKLPS XMM0,XMM5
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68c1d6;}
case 0x68c1d6:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68c1d9;}
case 0x68c1d9:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c1dc;}
case 0x68c1dc:{ // UNPCKLPS XMM1,XMM4
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68c1df;}
case 0x68c1df:{ // MOVLPS qword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68c1e3;}
case 0x68c1e3:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c1e7;}
case 0x68c1e7:{ // MOVHPS qword ptr [ECX + EDI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c1ec;}
case 0x68c1ec:{ // UNPCKHPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c1ef;}
case 0x68c1ef:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c1f3;}
case 0x68c1f3:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c1f6;}
case 0x68c1f6:{ // UNPCKHPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c1f9;}
case 0x68c1f9:{ // MOVLPS qword ptr [EDI + ECX*0x2 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c1fe;}
case 0x68c1fe:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c202;}
case 0x68c202:{ // MOVHPS qword ptr [EDX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c207;}
case 0x68c207:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c209;}
case 0x68c209:{ // SHL EDX,0x2
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
return 0x68c20c;}
case 0x68c20c:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c20e;}
case 0x68c20e:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c210;}
case 0x68c210:{ // SHL EDX,0x2
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
return 0x68c213;}
case 0x68c213:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c215;}
case 0x68c215:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c218;}
case 0x68c218:{ // JNZ 0x0068c0e3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c0e3;}
return 0x68c21e;}
case 0x68c21e:{ // JMP 0x0068c223
return 0x68c223;
return 0x68c220;}
case 0x68c220:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c223;}
case 0x68c223:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c226;}
case 0x68c226:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c228;}
case 0x68c228:{ // JBE 0x0068c242
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c242;}
return 0x68c22a;}
case 0x68c22a:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c22d;}
case 0x68c22d:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c230;}
case 0x68c230:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c231;}
case 0x68c231:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c232;}
case 0x68c232:{ // CALL 0x0068b0d8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c237ull);
return 0x68b0d8;
return 0x68c237;}
case 0x68c237:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68c23a;}
case 0x68c23a:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68c23d;}
case 0x68c23d:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c240;}
case 0x68c240:{ // JNZ 0x0068c22d
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c22d;}
return 0x68c242;}
case 0x68c242:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c245;}
case 0x68c245:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c246;}
case 0x68c246:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c247;}
case 0x68c247:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c249;}
case 0x68c249:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c24a;}
case 0x68c24a:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c24c;}
case 0x68c24c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c24d;}
case 0x68c24d:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c250;}
case 0x68c250:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c252;}
case 0x68c252:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c253;}
case 0x68c253:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c255;}
case 0x68c255:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c256;}
case 0x68c256:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c259;}
case 0x68c259:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c25c;}
case 0x68c25c:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c25d;}
case 0x68c25d:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c25f;}
case 0x68c25f:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c265;}
case 0x68c265:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c268;}
case 0x68c268:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c269;}
case 0x68c269:{ // MOV ESI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c26c;}
case 0x68c26c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c26d;}
case 0x68c26d:{ // MOV EDI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c270;}
case 0x68c270:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c272;}
case 0x68c272:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c274;}
case 0x68c274:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c275;}
case 0x68c275:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c278;}
case 0x68c278:{ // CMP ECX,EAX
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
return 0x68c27a;}
case 0x68c27a:{ // SBB ECX,ECX
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
return 0x68c27c;}
case 0x68c27c:{ // AND ECX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c27e;}
case 0x68c27e:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c280;}
case 0x68c280:{ // SHR ECX,0x2
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
return 0x68c283;}
case 0x68c283:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c286;}
case 0x68c286:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c289;}
case 0x68c289:{ // MOV dword ptr [EBP + -0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c28c;}
case 0x68c28c:{ // JZ 0x0068c39f
if(r<1>(c,0x206)){return 0x68c39f;}
return 0x68c292;}
case 0x68c292:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c295;}
case 0x68c295:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c29b;}
case 0x68c29b:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c2a0ull);
return 0x68b19f;
return 0x68c2a0;}
case 0x68c2a0:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c2a3;}
case 0x68c2a3:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c2a5;}
case 0x68c2a5:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c2a8;}
case 0x68c2a8:{ // JBE 0x0068c39f
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c39f;}
return 0x68c2ae;}
case 0x68c2ae:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c2b2;}
case 0x68c2b2:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c2b6;}
case 0x68c2b6:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c2b9;}
case 0x68c2b9:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c2bc;}
case 0x68c2bc:{ // MOVLPS XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c2c0;}
case 0x68c2c0:{ // MOVLPS XMM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c2c3;}
case 0x68c2c3:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c2c6;}
case 0x68c2c6:{ // MOVHPS XMM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c2ca;}
case 0x68c2ca:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c2cd;}
case 0x68c2cd:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c2d0;}
case 0x68c2d0:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c2d3;}
case 0x68c2d3:{ // MOVHPS XMM2,qword ptr [EDX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c2d7;}
case 0x68c2d7:{ // SHUFPS XMM0,XMM2,0x88
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
return 0x68c2db;}
case 0x68c2db:{ // SHUFPS XMM1,XMM2,0xdd
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
return 0x68c2df;}
case 0x68c2df:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c2e2;}
case 0x68c2e2:{ // MULPS XMM3,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c2e9;}
case 0x68c2e9:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c2ec;}
case 0x68c2ec:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c2f3;}
case 0x68c2f3:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68c2f6;}
case 0x68c2f6:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c2f9;}
case 0x68c2f9:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c2fd;}
case 0x68c2fd:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c300;}
case 0x68c300:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c307;}
case 0x68c307:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c30a;}
case 0x68c30a:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c311;}
case 0x68c311:{ // ADDPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68c314;}
case 0x68c314:{ // ADDPS XMM4,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c318;}
case 0x68c318:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c31b;}
case 0x68c31b:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c322;}
case 0x68c322:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c329;}
case 0x68c329:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c32c;}
case 0x68c32c:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c333;}
case 0x68c333:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c33a;}
case 0x68c33a:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68c33d;}
case 0x68c33d:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68c340;}
case 0x68c340:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c343;}
case 0x68c343:{ // ADDPS XMM3,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,u<4>(c,0xbbc0c),4,4));
return 0x68c347;}
case 0x68c347:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c34a;}
case 0x68c34a:{ // ADDPS XMM5,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c34e;}
case 0x68c34e:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c351;}
case 0x68c351:{ // UNPCKLPS XMM0,XMM4
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68c354;}
case 0x68c354:{ // MOVLPS qword ptr [ESI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x68c357;}
case 0x68c357:{ // MOVAPS XMM1,XMM3
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c35a;}
case 0x68c35a:{ // UNPCKLPS XMM1,XMM5
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68c35d;}
case 0x68c35d:{ // MOVLPS qword ptr [ESI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68c361;}
case 0x68c361:{ // MOVHPS qword ptr [ESI + EDI*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c365;}
case 0x68c365:{ // MOVHPS qword ptr [EDI + ESI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c36a;}
case 0x68c36a:{ // UNPCKHPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c36d;}
case 0x68c36d:{ // MOVLPS qword ptr [ESI + EDI*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c371;}
case 0x68c371:{ // LEA EDX,[EDI + EDI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c374;}
case 0x68c374:{ // UNPCKHPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c377;}
case 0x68c377:{ // MOVLPS qword ptr [ESI + EDI*0x2 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c37c;}
case 0x68c37c:{ // MOVHPS qword ptr [EDX + ESI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c380;}
case 0x68c380:{ // MOVHPS qword ptr [EDX + ESI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c385;}
case 0x68c385:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c387;}
case 0x68c387:{ // SHL EDX,0x2
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
return 0x68c38a;}
case 0x68c38a:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c38c;}
case 0x68c38c:{ // MOV dword ptr [EBX + 0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c38f;}
case 0x68c38f:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c391;}
case 0x68c391:{ // SHL EAX,0x2
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
return 0x68c394;}
case 0x68c394:{ // ADD ESI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c396;}
case 0x68c396:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c399;}
case 0x68c399:{ // JNZ 0x0068c2b9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c2b9;}
return 0x68c39f;}
case 0x68c39f:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c3a2;}
case 0x68c3a2:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3a4;}
case 0x68c3a4:{ // JBE 0x0068c3c2
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c3c2;}
return 0x68c3a6;}
case 0x68c3a6:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c3a9;}
case 0x68c3a9:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3ac;}
case 0x68c3ac:{ // PUSH dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3af;}
case 0x68c3af:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3b0;}
case 0x68c3b0:{ // CALL 0x0063c10e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c3b5ull);
return 0x63c10e;
return 0x68c3b5;}
case 0x68c3b5:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c3b8;}
case 0x68c3b8:{ // ADD dword ptr [EBX + 0x10],EAX
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
return 0x68c3bb;}
case 0x68c3bb:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3bd;}
case 0x68c3bd:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c3c0;}
case 0x68c3c0:{ // JNZ 0x0068c3a9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c3a9;}
return 0x68c3c2;}
case 0x68c3c2:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c3c5;}
case 0x68c3c5:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c3c6;}
case 0x68c3c6:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c3c7;}
case 0x68c3c7:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c3c9;}
case 0x68c3c9:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c3ca;}
case 0x68c3ca:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c3cc;}
case 0x68c3cc:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c3cd;}
case 0x68c3cd:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c3d0;}
case 0x68c3d0:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c3d2;}
case 0x68c3d2:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3d3;}
case 0x68c3d3:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c3d5;}
case 0x68c3d5:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3d6;}
case 0x68c3d6:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3d9;}
case 0x68c3d9:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3dc;}
case 0x68c3dc:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3dd;}
case 0x68c3dd:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c3df;}
case 0x68c3df:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3e5;}
case 0x68c3e5:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c3e8;}
case 0x68c3e8:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3e9;}
case 0x68c3e9:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c3ea;}
case 0x68c3ea:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c3ed;}
case 0x68c3ed:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c3ef;}
case 0x68c3ef:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c3f1;}
case 0x68c3f1:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3f4;}
case 0x68c3f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c3f5;}
case 0x68c3f5:{ // CMP ECX,EAX
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
return 0x68c3f7;}
case 0x68c3f7:{ // SBB ESI,ESI
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
return 0x68c3f9;}
case 0x68c3f9:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3fb;}
case 0x68c3fb:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c3fd;}
case 0x68c3fd:{ // SHR ESI,0x2
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
return 0x68c400;}
case 0x68c400:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c403;}
case 0x68c403:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c406;}
case 0x68c406:{ // JZ 0x0068c4fc
if(r<1>(c,0x206)){return 0x68c4fc;}
return 0x68c40c;}
case 0x68c40c:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c40f;}
case 0x68c40f:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c415;}
case 0x68c415:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c41aull);
return 0x68b19f;
return 0x68c41a;}
case 0x68c41a:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c41c;}
case 0x68c41c:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c41f;}
case 0x68c41f:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c422;}
case 0x68c422:{ // JBE 0x0068c4fc
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c4fc;}
return 0x68c428;}
case 0x68c428:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c42c;}
case 0x68c42c:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c430;}
case 0x68c430:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c433;}
case 0x68c433:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c436;}
case 0x68c436:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c439;}
case 0x68c439:{ // MOVLPS XMM4,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c43d;}
case 0x68c43d:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c440;}
case 0x68c440:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c444;}
case 0x68c444:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c447;}
case 0x68c447:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c44a;}
case 0x68c44a:{ // MOVHPS XMM4,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c44e;}
case 0x68c44e:{ // SHUFPS XMM0,XMM4,0x88
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
return 0x68c452;}
case 0x68c452:{ // SHUFPS XMM1,XMM4,0xdd
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
return 0x68c456;}
case 0x68c456:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c459;}
case 0x68c459:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c460;}
case 0x68c460:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c463;}
case 0x68c463:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c46a;}
case 0x68c46a:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68c46d;}
case 0x68c46d:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c470;}
case 0x68c470:{ // ADDPS XMM2,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c474;}
case 0x68c474:{ // RCPPS XMM3,XMM2
wr<16>(c,0x12c0,user_op(c,1048749,{r<16>(c,0x12c0),r<16>(c,0x1280)}));
return 0x68c477;}
case 0x68c477:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c47a;}
case 0x68c47a:{ // MULPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68c47d;}
case 0x68c47d:{ // MULPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68c480;}
case 0x68c480:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c483;}
case 0x68c483:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68c486;}
case 0x68c486:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c489;}
case 0x68c489:{ // SUBPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68c48c;}
case 0x68c48c:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c48f;}
case 0x68c48f:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c496;}
case 0x68c496:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c49d;}
case 0x68c49d:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c4a0;}
case 0x68c4a0:{ // MULPS XMM0,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c4a7;}
case 0x68c4a7:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c4ae;}
case 0x68c4ae:{ // ADDPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68c4b1;}
case 0x68c4b1:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68c4b4;}
case 0x68c4b4:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c4b7;}
case 0x68c4b7:{ // ADDPS XMM1,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c4bb;}
case 0x68c4bb:{ // MOVAPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c4be;}
case 0x68c4be:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68c4c2;}
case 0x68c4c2:{ // MULPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68c4c5;}
case 0x68c4c5:{ // MULPS XMM1,XMM3
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x12cc),4,4));
return 0x68c4c8;}
case 0x68c4c8:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c4cb;}
case 0x68c4cb:{ // UNPCKLPS XMM0,XMM1
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x68c4ce;}
case 0x68c4ce:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68c4d1;}
case 0x68c4d1:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c4d5;}
case 0x68c4d5:{ // UNPCKHPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c4d8;}
case 0x68c4d8:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c4db;}
case 0x68c4db:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c4df;}
case 0x68c4df:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c4e3;}
case 0x68c4e3:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c4e5;}
case 0x68c4e5:{ // SHL EDX,0x2
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
return 0x68c4e8;}
case 0x68c4e8:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c4ea;}
case 0x68c4ea:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c4ec;}
case 0x68c4ec:{ // SHL EDX,0x2
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
return 0x68c4ef;}
case 0x68c4ef:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c4f1;}
case 0x68c4f1:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c4f4;}
case 0x68c4f4:{ // JNZ 0x0068c436
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c436;}
return 0x68c4fa;}
case 0x68c4fa:{ // JMP 0x0068c4ff
return 0x68c4ff;
return 0x68c4fc;}
case 0x68c4fc:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c4ff;}
case 0x68c4ff:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c502;}
case 0x68c502:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c504;}
case 0x68c504:{ // JBE 0x0068c51e
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c51e;}
return 0x68c506;}
case 0x68c506:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c509;}
case 0x68c509:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c50c;}
case 0x68c50c:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c50d;}
case 0x68c50d:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c50e;}
case 0x68c50e:{ // CALL 0x0063c13a
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c513ull);
return 0x63c13a;
return 0x68c513;}
case 0x68c513:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68c516;}
case 0x68c516:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68c519;}
case 0x68c519:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c51c;}
case 0x68c51c:{ // JNZ 0x0068c509
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c509;}
return 0x68c51e;}
case 0x68c51e:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c521;}
case 0x68c521:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c522;}
case 0x68c522:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c523;}
case 0x68c523:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c525;}
case 0x68c525:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c526;}
case 0x68c526:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c528;}
case 0x68c528:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c529;}
case 0x68c529:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c52c;}
case 0x68c52c:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c52e;}
case 0x68c52e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c52f;}
case 0x68c52f:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c531;}
case 0x68c531:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c532;}
case 0x68c532:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c535;}
case 0x68c535:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c538;}
case 0x68c538:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c539;}
case 0x68c539:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c53b;}
case 0x68c53b:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c541;}
case 0x68c541:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c544;}
case 0x68c544:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c545;}
case 0x68c545:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c546;}
case 0x68c546:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c549;}
case 0x68c549:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c54b;}
case 0x68c54b:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c54d;}
case 0x68c54d:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c550;}
case 0x68c550:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c551;}
case 0x68c551:{ // CMP ECX,EAX
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
return 0x68c553;}
case 0x68c553:{ // SBB ESI,ESI
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
return 0x68c555;}
case 0x68c555:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c557;}
case 0x68c557:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c559;}
case 0x68c559:{ // SHR ESI,0x2
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
return 0x68c55c;}
case 0x68c55c:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c55f;}
case 0x68c55f:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c562;}
case 0x68c562:{ // JZ 0x0068c60d
if(r<1>(c,0x206)){return 0x68c60d;}
return 0x68c568;}
case 0x68c568:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c56b;}
case 0x68c56b:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c571;}
case 0x68c571:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c576ull);
return 0x68b19f;
return 0x68c576;}
case 0x68c576:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c578;}
case 0x68c578:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c57b;}
case 0x68c57b:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c57e;}
case 0x68c57e:{ // JBE 0x0068c60d
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c60d;}
return 0x68c584;}
case 0x68c584:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c588;}
case 0x68c588:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c58c;}
case 0x68c58c:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c58f;}
case 0x68c58f:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c592;}
case 0x68c592:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c595;}
case 0x68c595:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c599;}
case 0x68c599:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c59c;}
case 0x68c59c:{ // MOVHPS XMM0,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c5a0;}
case 0x68c5a0:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c5a3;}
case 0x68c5a3:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c5a6;}
case 0x68c5a6:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c5aa;}
case 0x68c5aa:{ // SHUFPS XMM0,XMM3,0xdd
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
return 0x68c5ae;}
case 0x68c5ae:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c5b1;}
case 0x68c5b1:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c5b8;}
case 0x68c5b8:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c5bf;}
case 0x68c5bf:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c5c2;}
case 0x68c5c2:{ // SHUFPS XMM1,XMM3,0x88
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
return 0x68c5c6;}
case 0x68c5c6:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c5c9;}
case 0x68c5c9:{ // MULPS XMM2,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c5d0;}
case 0x68c5d0:{ // MULPS XMM1,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c5d7;}
case 0x68c5d7:{ // ADDPS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x120c),4,4));
return 0x68c5da;}
case 0x68c5da:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68c5dd;}
case 0x68c5dd:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c5e0;}
case 0x68c5e0:{ // UNPCKLPS XMM0,XMM1
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x68c5e3;}
case 0x68c5e3:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68c5e6;}
case 0x68c5e6:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c5ea;}
case 0x68c5ea:{ // UNPCKHPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c5ed;}
case 0x68c5ed:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c5f0;}
case 0x68c5f0:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c5f4;}
case 0x68c5f4:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c5f8;}
case 0x68c5f8:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c5fa;}
case 0x68c5fa:{ // SHL EDX,0x2
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
return 0x68c5fd;}
case 0x68c5fd:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c5ff;}
case 0x68c5ff:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c601;}
case 0x68c601:{ // SHL EDX,0x2
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
return 0x68c604;}
case 0x68c604:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c606;}
case 0x68c606:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c609;}
case 0x68c609:{ // JNZ 0x0068c592
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c592;}
return 0x68c60b;}
case 0x68c60b:{ // JMP 0x0068c610
return 0x68c610;
return 0x68c60d;}
case 0x68c60d:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c610;}
case 0x68c610:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c613;}
case 0x68c613:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c615;}
case 0x68c615:{ // JBE 0x0068c62f
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c62f;}
return 0x68c617;}
case 0x68c617:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c61a;}
case 0x68c61a:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c61d;}
case 0x68c61d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c61e;}
case 0x68c61e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c61f;}
case 0x68c61f:{ // CALL 0x0063c166
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c624ull);
return 0x63c166;
return 0x68c624;}
case 0x68c624:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68c627;}
case 0x68c627:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68c62a;}
case 0x68c62a:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c62d;}
case 0x68c62d:{ // JNZ 0x0068c61a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c61a;}
return 0x68c62f;}
case 0x68c62f:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c632;}
case 0x68c632:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c633;}
case 0x68c633:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c634;}
case 0x68c634:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c636;}
case 0x68c636:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c637;}
case 0x68c637:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c639;}
case 0x68c639:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c63a;}
case 0x68c63a:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c63d;}
case 0x68c63d:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c63f;}
case 0x68c63f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c640;}
case 0x68c640:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c642;}
case 0x68c642:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c643;}
case 0x68c643:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c646;}
case 0x68c646:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c649;}
case 0x68c649:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c64a;}
case 0x68c64a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c64c;}
case 0x68c64c:{ // SUB ESP,0x138
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x138ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x138ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x138ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c652;}
case 0x68c652:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c655;}
case 0x68c655:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c656;}
case 0x68c656:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c657;}
case 0x68c657:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c65a;}
case 0x68c65a:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c65c;}
case 0x68c65c:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c65e;}
case 0x68c65e:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c661;}
case 0x68c661:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c662;}
case 0x68c662:{ // CMP ECX,EAX
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
return 0x68c664;}
case 0x68c664:{ // SBB ESI,ESI
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
return 0x68c666;}
case 0x68c666:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c668;}
case 0x68c668:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c66a;}
case 0x68c66a:{ // SHR ESI,0x2
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
return 0x68c66d;}
case 0x68c66d:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c670;}
case 0x68c670:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c673;}
case 0x68c673:{ // JZ 0x0068c80d
if(r<1>(c,0x206)){return 0x68c80d;}
return 0x68c679;}
case 0x68c679:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c67c;}
case 0x68c67c:{ // LEA ECX,[EBP + 0xfffffed0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffed0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c682;}
case 0x68c682:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c687ull);
return 0x68b19f;
return 0x68c687;}
case 0x68c687:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c689;}
case 0x68c689:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c68c;}
case 0x68c68c:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c68f;}
case 0x68c68f:{ // JBE 0x0068c80d
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c80d;}
return 0x68c695;}
case 0x68c695:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c699;}
case 0x68c699:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c69d;}
case 0x68c69d:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c6a0;}
case 0x68c6a0:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c6a3;}
case 0x68c6a3:{ // MOVLPS XMM4,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6a7;}
case 0x68c6a7:{ // MOVLPS XMM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6aa;}
case 0x68c6aa:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c6ad;}
case 0x68c6ad:{ // MOVHPS XMM2,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6b1;}
case 0x68c6b1:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c6b4;}
case 0x68c6b4:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c6b7;}
case 0x68c6b7:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c6ba;}
case 0x68c6ba:{ // MOVLPS XMM2,qword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6be;}
case 0x68c6be:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c6c1;}
case 0x68c6c1:{ // MOVHPS XMM4,qword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6c6;}
case 0x68c6c6:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c6c9;}
case 0x68c6c9:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c6cc;}
case 0x68c6cc:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6d0;}
case 0x68c6d0:{ // SHUFPS XMM0,XMM3,0x88
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
return 0x68c6d4;}
case 0x68c6d4:{ // SHUFPS XMM1,XMM3,0xdd
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
return 0x68c6d8;}
case 0x68c6d8:{ // MOVLPS XMM3,qword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6dd;}
case 0x68c6dd:{ // MOVHPS XMM3,qword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c6e2;}
case 0x68c6e2:{ // SHUFPS XMM4,XMM3,0xdd
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
return 0x68c6e6;}
case 0x68c6e6:{ // SHUFPS XMM2,XMM3,0x88
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
return 0x68c6ea;}
case 0x68c6ea:{ // MOVAPS XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c6ed;}
case 0x68c6ed:{ // MULPS XMM3,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c6f1;}
case 0x68c6f1:{ // MOVAPS xmmword ptr [EBP + -0x30],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68c6f5;}
case 0x68c6f5:{ // MULPS XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c6f9;}
case 0x68c6f9:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c6fc;}
case 0x68c6fc:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffed0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffed0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c703;}
case 0x68c703:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c706;}
case 0x68c706:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c709;}
case 0x68c709:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c710;}
case 0x68c710:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68c713;}
case 0x68c713:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68c716;}
case 0x68c716:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c719;}
case 0x68c719:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c720;}
case 0x68c720:{ // ADDPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68c723;}
case 0x68c723:{ // MOVAPS XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c726;}
case 0x68c726:{ // ADDPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68c729;}
case 0x68c729:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c72c;}
case 0x68c72c:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c72f;}
case 0x68c72f:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c736;}
case 0x68c736:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c739;}
case 0x68c739:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c740;}
case 0x68c740:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68c743;}
case 0x68c743:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c746;}
case 0x68c746:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c74d;}
case 0x68c74d:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68c750;}
case 0x68c750:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68c753;}
case 0x68c753:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c756;}
case 0x68c756:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68c759;}
case 0x68c759:{ // MOVAPS xmmword ptr [EBP + -0x20],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68c75d;}
case 0x68c75d:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c761;}
case 0x68c761:{ // MULPS XMM4,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c765;}
case 0x68c765:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c768;}
case 0x68c768:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c76f;}
case 0x68c76f:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c776;}
case 0x68c776:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c779;}
case 0x68c779:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c77c;}
case 0x68c77c:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c783;}
case 0x68c783:{ // MULPS XMM1,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c78a;}
case 0x68c78a:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c78d;}
case 0x68c78d:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c794;}
case 0x68c794:{ // MULPS XMM2,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c798;}
case 0x68c798:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68c79b;}
case 0x68c79b:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68c79e;}
case 0x68c79e:{ // MOVAPS XMM6,XMM7
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68c7a1;}
case 0x68c7a1:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68c7a4;}
case 0x68c7a4:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68c7a7;}
case 0x68c7a7:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c7aa;}
case 0x68c7aa:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68c7ad;}
case 0x68c7ad:{ // MOVAPS XMM5,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c7b1;}
case 0x68c7b1:{ // MULPS XMM5,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c7b5;}
case 0x68c7b5:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c7b8;}
case 0x68c7b8:{ // MOVAPS XMM0,XMM3
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c7bb;}
case 0x68c7bb:{ // UNPCKLPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13c000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0x13c000)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0x13c004)));
return 0x68c7bf;}
case 0x68c7bf:{ // UNPCKHPS XMM3,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13bf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0x13bf08)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0x13bf0c)));
return 0x68c7c3;}
case 0x68c7c3:{ // ADDPS XMM2,XMM5
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x134c),4,4));
return 0x68c7c6;}
case 0x68c7c6:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c7c9;}
case 0x68c7c9:{ // MOVLPS qword ptr [EDI],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68c7cc;}
case 0x68c7cc:{ // UNPCKLPS XMM1,XMM2
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
return 0x68c7cf;}
case 0x68c7cf:{ // MOVLPS qword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68c7d3;}
case 0x68c7d3:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c7d7;}
case 0x68c7d7:{ // MOVHPS qword ptr [ECX + EDI*0x1 + 0x8],XMM1
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c7dc;}
case 0x68c7dc:{ // UNPCKHPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c7df;}
case 0x68c7df:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c7e3;}
case 0x68c7e3:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c7e6;}
case 0x68c7e6:{ // MOVLPS qword ptr [EDI + ECX*0x2 + 0x8],XMM4
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c7eb;}
case 0x68c7eb:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c7ef;}
case 0x68c7ef:{ // MOVHPS qword ptr [EDX + EDI*0x1 + 0x8],XMM4
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,u<4>(c,0x7400),u<8>(c,0xa400));
return 0x68c7f4;}
case 0x68c7f4:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c7f6;}
case 0x68c7f6:{ // SHL EDX,0x2
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
return 0x68c7f9;}
case 0x68c7f9:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c7fb;}
case 0x68c7fb:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c7fd;}
case 0x68c7fd:{ // SHL EDX,0x2
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
return 0x68c800;}
case 0x68c800:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c802;}
case 0x68c802:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c805;}
case 0x68c805:{ // JNZ 0x0068c6a3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c6a3;}
return 0x68c80b;}
case 0x68c80b:{ // JMP 0x0068c810
return 0x68c810;
return 0x68c80d;}
case 0x68c80d:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c810;}
case 0x68c810:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c813;}
case 0x68c813:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c815;}
case 0x68c815:{ // JBE 0x0068c82f
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c82f;}
return 0x68c817;}
case 0x68c817:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c81a;}
case 0x68c81a:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c81d;}
case 0x68c81d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c81e;}
case 0x68c81e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c81f;}
case 0x68c81f:{ // CALL 0x0068cdbc
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c824ull);
return 0x68cdbc;
return 0x68c824;}
case 0x68c824:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68c827;}
case 0x68c827:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68c82a;}
case 0x68c82a:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c82d;}
case 0x68c82d:{ // JNZ 0x0068c81a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c81a;}
return 0x68c82f;}
case 0x68c82f:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c832;}
case 0x68c832:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c833;}
case 0x68c833:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c834;}
case 0x68c834:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c836;}
case 0x68c836:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c837;}
case 0x68c837:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c839;}
case 0x68c839:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c83a;}
case 0x68c83a:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c83d;}
case 0x68c83d:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c83f;}
case 0x68c83f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c840;}
case 0x68c840:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c842;}
case 0x68c842:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c843;}
case 0x68c843:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c846;}
case 0x68c846:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c849;}
case 0x68c849:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c84a;}
case 0x68c84a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c84c;}
case 0x68c84c:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c852;}
case 0x68c852:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c855;}
case 0x68c855:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c856;}
case 0x68c856:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c857;}
case 0x68c857:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c85a;}
case 0x68c85a:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68c85c;}
case 0x68c85c:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c85e;}
case 0x68c85e:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c861;}
case 0x68c861:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c862;}
case 0x68c862:{ // CMP ECX,EAX
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
return 0x68c864;}
case 0x68c864:{ // SBB ESI,ESI
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
return 0x68c866;}
case 0x68c866:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c868;}
case 0x68c868:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c86a;}
case 0x68c86a:{ // SHR ESI,0x2
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
return 0x68c86d;}
case 0x68c86d:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c870;}
case 0x68c870:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c873;}
case 0x68c873:{ // JZ 0x0068c9c1
if(r<1>(c,0x206)){return 0x68c9c1;}
return 0x68c879;}
case 0x68c879:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c87c;}
case 0x68c87c:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68c882;}
case 0x68c882:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c887ull);
return 0x68b19f;
return 0x68c887;}
case 0x68c887:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c889;}
case 0x68c889:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c88c;}
case 0x68c88c:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c88f;}
case 0x68c88f:{ // JBE 0x0068c9c1
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c9c1;}
return 0x68c895;}
case 0x68c895:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c899;}
case 0x68c899:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68c89d;}
case 0x68c89d:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c8a0;}
case 0x68c8a0:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c8a3;}
case 0x68c8a3:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c8a6;}
case 0x68c8a6:{ // MOVLPS XMM0,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c8aa;}
case 0x68c8aa:{ // MOVSS XMM4,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c8af;}
case 0x68c8af:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c8b2;}
case 0x68c8b2:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c8b6;}
case 0x68c8b6:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c8b9;}
case 0x68c8b9:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c8bc;}
case 0x68c8bc:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c8bf;}
case 0x68c8bf:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68c8c3;}
case 0x68c8c3:{ // SHUFPS XMM1,XMM2,0xdd
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
return 0x68c8c7;}
case 0x68c8c7:{ // SHUFPS XMM0,XMM2,0x88
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
return 0x68c8cb;}
case 0x68c8cb:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c8d1;}
case 0x68c8d1:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c8d4;}
case 0x68c8d4:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c8da;}
case 0x68c8da:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68c8dd;}
case 0x68c8dd:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68c8e3;}
case 0x68c8e3:{ // MOVLHPS XMM4,XMM1
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68c8e6;}
case 0x68c8e6:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c8e9;}
case 0x68c8e9:{ // SHUFPS XMM1,XMM2,0x88
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
return 0x68c8ed;}
case 0x68c8ed:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c8f0;}
case 0x68c8f0:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c8f7;}
case 0x68c8f7:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c8fa;}
case 0x68c8fa:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c8fd;}
case 0x68c8fd:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68c904;}
case 0x68c904:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c907;}
case 0x68c907:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68c90e;}
case 0x68c90e:{ // ADDPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68c911;}
case 0x68c911:{ // MOVAPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68c914;}
case 0x68c914:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68c917;}
case 0x68c917:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c91a;}
case 0x68c91a:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c921;}
case 0x68c921:{ // MULPS XMM1,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68c925;}
case 0x68c925:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c928;}
case 0x68c928:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68c92f;}
case 0x68c92f:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68c936;}
case 0x68c936:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c939;}
case 0x68c939:{ // MOVAPS XMM4,XMM3
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68c93c;}
case 0x68c93c:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68c943;}
case 0x68c943:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68c94a;}
case 0x68c94a:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68c94d;}
case 0x68c94d:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68c950;}
case 0x68c950:{ // ADDPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68c953;}
case 0x68c953:{ // MOVAPS XMM4,XMM6
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68c956;}
case 0x68c956:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68c959;}
case 0x68c959:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68c95c;}
case 0x68c95c:{ // UNPCKLPS XMM3,XMM4
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68c95f;}
case 0x68c95f:{ // MOVLPS qword ptr [EDI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68c962;}
case 0x68c962:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c966;}
case 0x68c966:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c969;}
case 0x68c969:{ // UNPCKLPS XMM1,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13c000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0x13c000)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0x13c004)));
return 0x68c96d;}
case 0x68c96d:{ // UNPCKHPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13bf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0x13bf08)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0x13bf0c)));
return 0x68c971;}
case 0x68c971:{ // MOVSS dword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c976;}
case 0x68c976:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c979;}
case 0x68c979:{ // MOVHLPS XMM3,XMM1
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x68c97c;}
case 0x68c97c:{ // MOVSS dword ptr [ECX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68c982;}
case 0x68c982:{ // UNPCKHPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68c985;}
case 0x68c985:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c989;}
case 0x68c989:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c98c;}
case 0x68c98c:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68c990;}
case 0x68c990:{ // MOVSS dword ptr [EDI + ECX*0x2 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68c996;}
case 0x68c996:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68c999;}
case 0x68c999:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68c99c;}
case 0x68c99c:{ // MOVHLPS XMM1,XMM0
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68c99f;}
case 0x68c99f:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68c9a2;}
case 0x68c9a2:{ // MOVSS dword ptr [EDX + EDI*0x1 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68c9a8;}
case 0x68c9a8:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68c9aa;}
case 0x68c9aa:{ // SHL EDX,0x2
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
return 0x68c9ad;}
case 0x68c9ad:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c9af;}
case 0x68c9af:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68c9b1;}
case 0x68c9b1:{ // SHL EDX,0x2
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
return 0x68c9b4;}
case 0x68c9b4:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c9b6;}
case 0x68c9b6:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c9b9;}
case 0x68c9b9:{ // JNZ 0x0068c8a3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c8a3;}
return 0x68c9bf;}
case 0x68c9bf:{ // JMP 0x0068c9c4
return 0x68c9c4;
return 0x68c9c1;}
case 0x68c9c1:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c9c4;}
case 0x68c9c4:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c9c7;}
case 0x68c9c7:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c9c9;}
case 0x68c9c9:{ // JBE 0x0068c9e3
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68c9e3;}
return 0x68c9cb;}
case 0x68c9cb:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68c9ce;}
case 0x68c9ce:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9d1;}
case 0x68c9d1:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9d2;}
case 0x68c9d2:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9d3;}
case 0x68c9d3:{ // CALL 0x0068d465
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68c9d8ull);
return 0x68d465;
return 0x68c9d8;}
case 0x68c9d8:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68c9db;}
case 0x68c9db:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68c9de;}
case 0x68c9de:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68c9e1;}
case 0x68c9e1:{ // JNZ 0x0068c9ce
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68c9ce;}
return 0x68c9e3;}
case 0x68c9e3:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68c9e6;}
case 0x68c9e6:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c9e7;}
case 0x68c9e7:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c9e8;}
case 0x68c9e8:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68c9ea;}
case 0x68c9ea:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c9eb;}
case 0x68c9eb:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68c9ed;}
case 0x68c9ed:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68c9ee;}
case 0x68c9ee:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68c9f1;}
case 0x68c9f1:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68c9f3;}
case 0x68c9f3:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9f4;}
case 0x68c9f4:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68c9f6;}
case 0x68c9f6:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9f7;}
case 0x68c9f7:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c9fa;}
case 0x68c9fa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68c9fd;}
case 0x68c9fd:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68c9fe;}
case 0x68c9fe:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ca00;}
case 0x68ca00:{ // SUB ESP,0x128
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x128ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x128ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ca06;}
case 0x68ca06:{ // MOV EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ca09;}
case 0x68ca09:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ca0a;}
case 0x68ca0a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ca0b;}
case 0x68ca0b:{ // MOV EDI,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ca0e;}
case 0x68ca0e:{ // PUSH 0xa
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x68ca10;}
case 0x68ca10:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68ca12;}
case 0x68ca12:{ // AND EDX,0xfffffffc
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ca15;}
case 0x68ca15:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68ca16;}
case 0x68ca16:{ // CMP ECX,EAX
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
return 0x68ca18;}
case 0x68ca18:{ // SBB ESI,ESI
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
return 0x68ca1a;}
case 0x68ca1a:{ // AND ESI,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ca1c;}
case 0x68ca1c:{ // SUB EAX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ca1e;}
case 0x68ca1e:{ // SHR ESI,0x2
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
return 0x68ca21;}
case 0x68ca21:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68ca24;}
case 0x68ca24:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68ca27;}
case 0x68ca27:{ // JZ 0x0068cbc5
if(r<1>(c,0x206)){return 0x68cbc5;}
return 0x68ca2d;}
case 0x68ca2d:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ca30;}
case 0x68ca30:{ // LEA ECX,[EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x68ca36;}
case 0x68ca36:{ // CALL 0x0068b19f
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68ca3bull);
return 0x68b19f;
return 0x68ca3b;}
case 0x68ca3b:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ca3d;}
case 0x68ca3d:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ca40;}
case 0x68ca40:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ca43;}
case 0x68ca43:{ // JBE 0x0068cbc5
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68cbc5;}
return 0x68ca49;}
case 0x68ca49:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ca4d;}
case 0x68ca4d:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ca51;}
case 0x68ca51:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68ca54;}
case 0x68ca54:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ca57;}
case 0x68ca57:{ // MOVLPS XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ca5a;}
case 0x68ca5a:{ // MOVLPS XMM0,qword ptr [ESI + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ca5e;}
case 0x68ca5e:{ // MOVSS XMM4,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ca63;}
case 0x68ca63:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68ca66;}
case 0x68ca66:{ // MOVHPS XMM1,qword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ca6a;}
case 0x68ca6a:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ca6d;}
case 0x68ca6d:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ca70;}
case 0x68ca70:{ // LEA EDX,[EAX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68ca73;}
case 0x68ca73:{ // MOVHPS XMM2,qword ptr [EDX + ESI*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ca77;}
case 0x68ca77:{ // SHUFPS XMM0,XMM2,0x88
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
return 0x68ca7b;}
case 0x68ca7b:{ // SHUFPS XMM1,XMM2,0xdd
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
return 0x68ca7f;}
case 0x68ca7f:{ // MOVSS XMM2,dword ptr [ESI + EAX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ca85;}
case 0x68ca85:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ca88;}
case 0x68ca88:{ // MOVSS XMM1,dword ptr [EDX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ca8e;}
case 0x68ca8e:{ // MOVLHPS XMM2,XMM1
wr<8>(c,0x1288,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68ca91;}
case 0x68ca91:{ // MOVSS XMM1,dword ptr [EAX + ESI*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ca97;}
case 0x68ca97:{ // MOVLHPS XMM4,XMM1
wr<8>(c,0x1308,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68ca9a;}
case 0x68ca9a:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68ca9d;}
case 0x68ca9d:{ // SHUFPS XMM1,XMM2,0x88
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
return 0x68caa1;}
case 0x68caa1:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68caa4;}
case 0x68caa4:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff10]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68caab;}
case 0x68caab:{ // MOVAPS XMM4,XMM3
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68caae;}
case 0x68caae:{ // MULPS XMM4,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68cab5;}
case 0x68cab5:{ // ADDPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68cab8;}
case 0x68cab8:{ // MOVAPS XMM4,XMM5
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68cabb;}
case 0x68cabb:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cabe;}
case 0x68cabe:{ // MULPS XMM2,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68cac2;}
case 0x68cac2:{ // ADDPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68cac5;}
case 0x68cac5:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68cac8;}
case 0x68cac8:{ // ADDPS XMM2,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68cacc;}
case 0x68cacc:{ // RCPPS XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048749,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x68cacf;}
case 0x68cacf:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68cad2;}
case 0x68cad2:{ // MULPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68cad5;}
case 0x68cad5:{ // MULPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68cad8;}
case 0x68cad8:{ // MOVAPS XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68cadb;}
case 0x68cadb:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68cade;}
case 0x68cade:{ // MOVAPS XMM4,XMM2
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68cae1;}
case 0x68cae1:{ // SUBPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68cae4;}
case 0x68cae4:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cae7;}
case 0x68cae7:{ // MULPS XMM6,xmmword ptr [EBP + 0xfffffee0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68caee;}
case 0x68caee:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68caf1;}
case 0x68caf1:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68caf8;}
case 0x68caf8:{ // ADDPS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x134c),4,4));
return 0x68cafb;}
case 0x68cafb:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cafe;}
case 0x68cafe:{ // MULPS XMM2,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68cb05;}
case 0x68cb05:{ // ADDPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68cb08;}
case 0x68cb08:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cb0b;}
case 0x68cb0b:{ // MULPS XMM0,xmmword ptr [EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68cb12;}
case 0x68cb12:{ // MULPS XMM7,xmmword ptr [EBP + 0xfffffef0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffef0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68cb19;}
case 0x68cb19:{ // MOVAPS XMM2,XMM6
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68cb1c;}
case 0x68cb1c:{ // ADDPS XMM2,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68cb20;}
case 0x68cb20:{ // MOVAPS XMM6,XMM3
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68cb23;}
case 0x68cb23:{ // MULPS XMM3,xmmword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68cb2a;}
case 0x68cb2a:{ // MULPS XMM6,xmmword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68cb31;}
case 0x68cb31:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68cb34;}
case 0x68cb34:{ // MOVAPS XMM5,XMM1
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cb37;}
case 0x68cb37:{ // MULPS XMM5,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68cb3e;}
case 0x68cb3e:{ // MULPS XMM1,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68cb42;}
case 0x68cb42:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68cb45;}
case 0x68cb45:{ // ADDPS XMM0,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68cb49;}
case 0x68cb49:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68cb4c;}
case 0x68cb4c:{ // ADDPS XMM7,XMM5
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x134c),4,4));
return 0x68cb4f;}
case 0x68cb4f:{ // MULPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68cb52;}
case 0x68cb52:{ // MOVAPS XMM5,XMM7
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68cb55;}
case 0x68cb55:{ // ADDPS XMM5,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,u<4>(c,0xbbc0c),4,4));
return 0x68cb59;}
case 0x68cb59:{ // MULPS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x130c),4,4));
return 0x68cb5c;}
case 0x68cb5c:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68cb5f;}
case 0x68cb5f:{ // UNPCKLPS XMM3,XMM5
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68cb62;}
case 0x68cb62:{ // MOVLPS qword ptr [EDI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x68cb65;}
case 0x68cb65:{ // MOVHPS qword ptr [EDI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68cb69;}
case 0x68cb69:{ // MULPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68cb6c;}
case 0x68cb6c:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cb6f;}
case 0x68cb6f:{ // UNPCKLPS XMM1,XMM4
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x68cb72;}
case 0x68cb72:{ // MOVSS dword ptr [EDI + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cb77;}
case 0x68cb77:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cb7a;}
case 0x68cb7a:{ // MOVHLPS XMM3,XMM1
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x68cb7d;}
case 0x68cb7d:{ // MOVSS dword ptr [ECX + EDI*0x1 + 0x8],XMM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68cb83;}
case 0x68cb83:{ // UNPCKHPS XMM2,XMM5
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68cb86;}
case 0x68cb86:{ // UNPCKHPS XMM0,XMM4
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68cb89;}
case 0x68cb89:{ // MOVLPS qword ptr [EDI + ECX*0x2],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68cb8d;}
case 0x68cb8d:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68cb90;}
case 0x68cb90:{ // MOVHPS qword ptr [EDX + EDI*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x68cb94;}
case 0x68cb94:{ // MOVSS dword ptr [EDI + ECX*0x2 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x1c)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68cb9a;}
case 0x68cb9a:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cb9d;}
case 0x68cb9d:{ // LEA EDX,[ECX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68cba0;}
case 0x68cba0:{ // MOVHLPS XMM1,XMM0
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68cba3;}
case 0x68cba3:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cba6;}
case 0x68cba6:{ // MOVSS dword ptr [EDX + EDI*0x1 + 0x8],XMM0
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x8)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0xa300));
return 0x68cbac;}
case 0x68cbac:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x68cbae;}
case 0x68cbae:{ // SHL EDX,0x2
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
return 0x68cbb1;}
case 0x68cbb1:{ // ADD ESI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cbb3;}
case 0x68cbb3:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68cbb5;}
case 0x68cbb5:{ // SHL EDX,0x2
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
return 0x68cbb8;}
case 0x68cbb8:{ // ADD EDI,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cbba;}
case 0x68cbba:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68cbbd;}
case 0x68cbbd:{ // JNZ 0x0068ca57
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68ca57;}
return 0x68cbc3;}
case 0x68cbc3:{ // JMP 0x0068cbc8
return 0x68cbc8;
return 0x68cbc5;}
case 0x68cbc5:{ // MOV ESI,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cbc8;}
case 0x68cbc8:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cbcb;}
case 0x68cbcb:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cbcd;}
case 0x68cbcd:{ // JBE 0x0068cbe7
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68cbe7;}
return 0x68cbcf;}
case 0x68cbcf:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cbd2;}
case 0x68cbd2:{ // PUSH dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cbd5;}
case 0x68cbd5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cbd6;}
case 0x68cbd6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cbd7;}
case 0x68cbd7:{ // CALL 0x0068d531
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68cbdcull);
return 0x68d531;
return 0x68cbdc;}
case 0x68cbdc:{ // ADD ESI,dword ptr [EBX + 0x14]
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
return 0x68cbdf;}
case 0x68cbdf:{ // ADD EDI,dword ptr [EBX + 0xc]
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
return 0x68cbe2;}
case 0x68cbe2:{ // DEC dword ptr [EBP + -0x4]
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
return 0x68cbe5;}
case 0x68cbe5:{ // JNZ 0x0068cbd2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68cbd2;}
return 0x68cbe7;}
case 0x68cbe7:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cbea;}
case 0x68cbea:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cbeb;}
case 0x68cbeb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cbec;}
case 0x68cbec:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68cbee;}
case 0x68cbee:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cbef;}
case 0x68cbef:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68cbf1;}
case 0x68cbf1:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cbf2;}
case 0x68cbf2:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68cbf5;}
case 0x68cbf5:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68cbf7;}
case 0x68cbf7:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cbf8;}
case 0x68cbf8:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x68cbfc;}
case 0x68cbfc:{ // MOVDQA XMM1,xmmword ptr [0x0080ad40]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x80ad40)));
return 0x68cc04;}
case 0x68cc04:{ // MOVDQA XMM2,xmmword ptr [0x0080ad50]
wr<16>(c,0x1280,eval<Op::COPY,16,16>(m<16>(c,0x80ad50)));
return 0x68cc0c;}
case 0x68cc0c:{ // PAND XMM1,XMM0
wr<16>(c,0x1240,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1200)));
return 0x68cc10;}
case 0x68cc10:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x68cc14;}
case 0x68cc14:{ // PAND XMM2,XMM0
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1200)));
return 0x68cc18;}
case 0x68cc18:{ // PAND XMM0,xmmword ptr [0x0080ad30]
wr<16>(c,0x1200,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1200),m<16>(c,0x80ad30)));
return 0x68cc20;}
case 0x68cc20:{ // PCMPEQW XMM3,XMM7
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c0),r<2>(c,0x13c0)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c2),r<2>(c,0x13c2)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c4),r<2>(c,0x13c4)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c6),r<2>(c,0x13c6)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c8),r<2>(c,0x13c8)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ca),r<2>(c,0x13ca)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12cc),r<2>(c,0x13cc)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ce),r<2>(c,0x13ce)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x68cc24;}
case 0x68cc24:{ // PMOVMSKB ECX,XMM3
wu<2>(c,0x11a900,eval<Op::COPY,2,2>(0x0ull));
wu<2>(c,0x11ad00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffeull));
wu<16>(c,0x11aa00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x7ull));
wu<1>(c,0x11ab00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11aa00),0x0ull));
wu<1>(c,0x11ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ab00),0x1ull));
wu<2>(c,0x11ae00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ac00)));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ad00),u<2>(c,0x11ae00)));
wu<2>(c,0x11b200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffdull));
wu<16>(c,0x11af00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0xfull));
wu<1>(c,0x11b000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11af00),0x0ull));
wu<1>(c,0x11b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b000),0x1ull));
wu<2>(c,0x11b300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b100)));
wu<2>(c,0x11b400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b300),0x1ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b200),u<2>(c,0x11b400)));
wu<2>(c,0x11b800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfffbull));
wu<16>(c,0x11b500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x17ull));
wu<1>(c,0x11b600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11b500),0x0ull));
wu<1>(c,0x11b700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11b600),0x1ull));
wu<2>(c,0x11b900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11b700)));
wu<2>(c,0x11ba00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11b900),0x2ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11b800),u<2>(c,0x11ba00)));
wu<2>(c,0x11be00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfff7ull));
wu<16>(c,0x11bb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x1full));
wu<1>(c,0x11bc00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11bb00),0x0ull));
wu<1>(c,0x11bd00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11bc00),0x1ull));
wu<2>(c,0x11bf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11bd00)));
wu<2>(c,0x11c000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11bf00),0x3ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11be00),u<2>(c,0x11c000)));
wu<2>(c,0x11c400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffefull));
wu<16>(c,0x11c100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x27ull));
wu<1>(c,0x11c200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c100),0x0ull));
wu<1>(c,0x11c300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c200),0x1ull));
wu<2>(c,0x11c500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c300)));
wu<2>(c,0x11c600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11c500),0x4ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11c400),u<2>(c,0x11c600)));
wu<2>(c,0x11ca00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffdfull));
wu<16>(c,0x11c700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x2full));
wu<1>(c,0x11c800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11c700),0x0ull));
wu<1>(c,0x11c900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11c800),0x1ull));
wu<2>(c,0x11cb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11c900)));
wu<2>(c,0x11cc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11cb00),0x5ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ca00),u<2>(c,0x11cc00)));
wu<2>(c,0x11d000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xffbfull));
wu<16>(c,0x11cd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x37ull));
wu<1>(c,0x11ce00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11cd00),0x0ull));
wu<1>(c,0x11cf00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ce00),0x1ull));
wu<2>(c,0x11d100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11cf00)));
wu<2>(c,0x11d200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d100),0x6ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d000),u<2>(c,0x11d200)));
wu<2>(c,0x11d600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xff7full));
wu<16>(c,0x11d300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x3full));
wu<1>(c,0x11d400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d300),0x0ull));
wu<1>(c,0x11d500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11d400),0x1ull));
wu<2>(c,0x11d700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11d500)));
wu<2>(c,0x11d800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11d700),0x7ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11d600),u<2>(c,0x11d800)));
wu<2>(c,0x11dc00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfeffull));
wu<16>(c,0x11d900,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x47ull));
wu<1>(c,0x11da00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11d900),0x0ull));
wu<1>(c,0x11db00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11da00),0x1ull));
wu<2>(c,0x11dd00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11db00)));
wu<2>(c,0x11de00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11dd00),0x8ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11dc00),u<2>(c,0x11de00)));
wu<2>(c,0x11e200,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfdffull));
wu<16>(c,0x11df00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x4full));
wu<1>(c,0x11e000,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11df00),0x0ull));
wu<1>(c,0x11e100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e000),0x1ull));
wu<2>(c,0x11e300,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e100)));
wu<2>(c,0x11e400,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e300),0x9ull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e200),u<2>(c,0x11e400)));
wu<2>(c,0x11e800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xfbffull));
wu<16>(c,0x11e500,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x57ull));
wu<1>(c,0x11e600,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11e500),0x0ull));
wu<1>(c,0x11e700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11e600),0x1ull));
wu<2>(c,0x11e900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11e700)));
wu<2>(c,0x11ea00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11e900),0xaull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11e800),u<2>(c,0x11ea00)));
wu<2>(c,0x11ee00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xf7ffull));
wu<16>(c,0x11eb00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x5full));
wu<1>(c,0x11ec00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11eb00),0x0ull));
wu<1>(c,0x11ed00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11ec00),0x1ull));
wu<2>(c,0x11ef00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ed00)));
wu<2>(c,0x11f000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11ef00),0xbull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11ee00),u<2>(c,0x11f000)));
wu<2>(c,0x11f400,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xefffull));
wu<16>(c,0x11f100,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x67ull));
wu<1>(c,0x11f200,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f100),0x0ull));
wu<1>(c,0x11f300,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f200),0x1ull));
wu<2>(c,0x11f500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f300)));
wu<2>(c,0x11f600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11f500),0xcull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11f400),u<2>(c,0x11f600)));
wu<2>(c,0x11fa00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xdfffull));
wu<16>(c,0x11f700,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x6full));
wu<1>(c,0x11f800,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11f700),0x0ull));
wu<1>(c,0x11f900,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11f800),0x1ull));
wu<2>(c,0x11fb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11f900)));
wu<2>(c,0x11fc00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x11fb00),0xdull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x11fa00),u<2>(c,0x11fc00)));
wu<2>(c,0x120000,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0xbfffull));
wu<16>(c,0x11fd00,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x77ull));
wu<1>(c,0x11fe00,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x11fd00),0x0ull));
wu<1>(c,0x11ff00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x11fe00),0x1ull));
wu<2>(c,0x120100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x11ff00)));
wu<2>(c,0x120200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120100),0xeull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120000),u<2>(c,0x120200)));
wu<2>(c,0x120600,eval<Op::INT_AND,2,2,2>(u<2>(c,0x11a900),0x7fffull));
wu<16>(c,0x120300,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),0x7full));
wu<1>(c,0x120400,eval<Op::SUBPIECE,1,16,4>(u<16>(c,0x120300),0x0ull));
wu<1>(c,0x120500,eval<Op::INT_AND,1,1,1>(u<1>(c,0x120400),0x1ull));
wu<2>(c,0x120700,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x120500)));
wu<2>(c,0x120800,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x120700),0xfull));
wu<2>(c,0x11a900,eval<Op::INT_OR,2,2,2>(u<2>(c,0x120600),u<2>(c,0x120800)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x11a900)));
return 0x68cc28;}
case 0x68cc28:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cc2a;}
case 0x68cc2a:{ // JZ 0x0068cc98
if(r<1>(c,0x206)){return 0x68cc98;}
return 0x68cc2c;}
case 0x68cc2c:{ // PANDN XMM3,xmmword ptr [0x0080ad20]
wu<16>(c,0xeba00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x12c0)));
wr<16>(c,0x12c0,eval<Op::INT_AND,16,16,16>(u<16>(c,0xeba00),m<16>(c,0x80ad20)));
return 0x68cc34;}
case 0x68cc34:{ // POR XMM2,XMM3
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x12c0)));
return 0x68cc38;}
case 0x68cc38:{ // PMAXSW XMM1,xmmword ptr [0x0080ad60]
wu<16>(c,0x113500,eval<Op::COPY,16,16>(m<16>(c,0x80ad60)));
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
return 0x68cc40;}
case 0x68cc40:{ // MOVDQA XMM4,xmmword ptr [0x0080ad70]
wr<16>(c,0x1300,eval<Op::COPY,16,16>(m<16>(c,0x80ad70)));
return 0x68cc48;}
case 0x68cc48:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x68cc4c;}
case 0x68cc4c:{ // PUNPCKLWD XMM1,XMM7
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x13c6)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x1246)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x13c4)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x1244)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x1242)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x13c0)));
return 0x68cc50;}
case 0x68cc50:{ // PUNPCKHWD XMM3,XMM7
wr<2>(c,0x12c0,eval<Op::COPY,2,2>(r<2>(c,0x12c8)));
wr<2>(c,0x12c2,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x12c4,eval<Op::COPY,2,2>(r<2>(c,0x12ca)));
wr<2>(c,0x12c6,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x12c8,eval<Op::COPY,2,2>(r<2>(c,0x12cc)));
wr<2>(c,0x12ca,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x12cc,eval<Op::COPY,2,2>(r<2>(c,0x12ce)));
wr<2>(c,0x12ce,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
return 0x68cc54;}
case 0x68cc54:{ // MOVDQA XMM5,XMM7
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x68cc58;}
case 0x68cc58:{ // PUNPCKLWD XMM5,XMM0
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x1346)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x1344)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x1342)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x68cc5c;}
case 0x68cc5c:{ // PUNPCKHWD XMM7,XMM0
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x68cc60;}
case 0x68cc60:{ // PADDD XMM1,XMM4
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1240),r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1244),r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1248),r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x124c),r<4>(c,0x130c)));
return 0x68cc64;}
case 0x68cc64:{ // PADDD XMM3,XMM4
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c0),r<4>(c,0x1300)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c4),r<4>(c,0x1304)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c8),r<4>(c,0x1308)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12cc),r<4>(c,0x130c)));
return 0x68cc68;}
case 0x68cc68:{ // PSLLD XMM1,0xd
wr<4>(c,0x1240,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1240),0xdull));
wr<4>(c,0x1244,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1244),0xdull));
wr<4>(c,0x1248,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1248),0xdull));
wr<4>(c,0x124c,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x124c),0xdull));
return 0x68cc6d;}
case 0x68cc6d:{ // PSLLD XMM3,0xd
wr<4>(c,0x12c0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c0),0xdull));
wr<4>(c,0x12c4,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c4),0xdull));
wr<4>(c,0x12c8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c8),0xdull));
wr<4>(c,0x12cc,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12cc),0xdull));
return 0x68cc72;}
case 0x68cc72:{ // POR XMM1,XMM5
wr<16>(c,0x1240,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1340)));
return 0x68cc76;}
case 0x68cc76:{ // POR XMM3,XMM7
wr<16>(c,0x12c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x13c0)));
return 0x68cc7a;}
case 0x68cc7a:{ // PXOR XMM5,XMM5
wr<16>(c,0x1340,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1340),r<16>(c,0x1340)));
return 0x68cc7e;}
case 0x68cc7e:{ // MOVDQA XMM7,XMM2
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x68cc82;}
case 0x68cc82:{ // PUNPCKLWD XMM2,XMM5
wr<2>(c,0x128e,eval<Op::COPY,2,2>(r<2>(c,0x1346)));
wr<2>(c,0x128c,eval<Op::COPY,2,2>(r<2>(c,0x1286)));
wr<2>(c,0x128a,eval<Op::COPY,2,2>(r<2>(c,0x1344)));
wr<2>(c,0x1288,eval<Op::COPY,2,2>(r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::COPY,2,2>(r<2>(c,0x1342)));
wr<2>(c,0x1284,eval<Op::COPY,2,2>(r<2>(c,0x1282)));
wr<2>(c,0x1282,eval<Op::COPY,2,2>(r<2>(c,0x1340)));
return 0x68cc86;}
case 0x68cc86:{ // PUNPCKHWD XMM7,XMM5
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1348)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x134a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x134c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x134e)));
return 0x68cc8a;}
case 0x68cc8a:{ // CVTDQ2PS XMM0,XMM2
wr<4>(c,0x1200,float_op("INT2FLOAT",r<4>(c,0x1280),4,0x0ull,4,4));
wr<4>(c,0x1204,float_op("INT2FLOAT",r<4>(c,0x1284),4,0x0ull,4,4));
wr<4>(c,0x1208,float_op("INT2FLOAT",r<4>(c,0x1288),4,0x0ull,4,4));
wr<4>(c,0x120c,float_op("INT2FLOAT",r<4>(c,0x128c),4,0x0ull,4,4));
return 0x68cc8d;}
case 0x68cc8d:{ // CVTDQ2PS XMM2,XMM7
wr<4>(c,0x1280,float_op("INT2FLOAT",r<4>(c,0x13c0),4,0x0ull,4,4));
wr<4>(c,0x1284,float_op("INT2FLOAT",r<4>(c,0x13c4),4,0x0ull,4,4));
wr<4>(c,0x1288,float_op("INT2FLOAT",r<4>(c,0x13c8),4,0x0ull,4,4));
wr<4>(c,0x128c,float_op("INT2FLOAT",r<4>(c,0x13cc),4,0x0ull,4,4));
return 0x68cc90;}
case 0x68cc90:{ // MULPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68cc93;}
case 0x68cc93:{ // MULPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68cc96;}
case 0x68cc96:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cc97;}
case 0x68cc97:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68cc98;}
case 0x68cc98:{ // MOVDQA XMM6,xmmword ptr [0x0080ad80]
wr<16>(c,0x1380,eval<Op::COPY,16,16>(m<16>(c,0x80ad80)));
return 0x68cca0;}
case 0x68cca0:{ // MOVDQA XMM5,XMM7
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x68cca4;}
case 0x68cca4:{ // PUNPCKLWD XMM5,XMM0
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x1346)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x1344)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x1342)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1200)));
return 0x68cca8;}
case 0x68cca8:{ // PUNPCKHWD XMM7,XMM0
wr<2>(c,0x13c0,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x13c2,eval<Op::COPY,2,2>(r<2>(c,0x1208)));
wr<2>(c,0x13c4,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x13c6,eval<Op::COPY,2,2>(r<2>(c,0x120a)));
wr<2>(c,0x13c8,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x13ca,eval<Op::COPY,2,2>(r<2>(c,0x120c)));
wr<2>(c,0x13cc,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
wr<2>(c,0x13ce,eval<Op::COPY,2,2>(r<2>(c,0x120e)));
return 0x68ccac;}
case 0x68ccac:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x68ccb0;}
case 0x68ccb0:{ // PUNPCKLWD XMM1,XMM7
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x13c6)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x1246)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x13c4)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x1244)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x1242)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x13c0)));
return 0x68ccb4;}
case 0x68ccb4:{ // PUNPCKHWD XMM3,XMM7
wr<2>(c,0x12c0,eval<Op::COPY,2,2>(r<2>(c,0x12c8)));
wr<2>(c,0x12c2,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x12c4,eval<Op::COPY,2,2>(r<2>(c,0x12ca)));
wr<2>(c,0x12c6,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x12c8,eval<Op::COPY,2,2>(r<2>(c,0x12cc)));
wr<2>(c,0x12ca,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x12cc,eval<Op::COPY,2,2>(r<2>(c,0x12ce)));
wr<2>(c,0x12ce,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
return 0x68ccb8;}
case 0x68ccb8:{ // PADDD XMM1,XMM6
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1240),r<4>(c,0x1380)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1244),r<4>(c,0x1384)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1248),r<4>(c,0x1388)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x124c),r<4>(c,0x138c)));
return 0x68ccbc;}
case 0x68ccbc:{ // PADDD XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c0),r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c4),r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12c8),r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x12cc),r<4>(c,0x138c)));
return 0x68ccc0;}
case 0x68ccc0:{ // MOVDQA XMM0,XMM2
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x68ccc4;}
case 0x68ccc4:{ // PUNPCKLWD XMM0,XMM7
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x13c6)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x13c4)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x13c0)));
return 0x68ccc8;}
case 0x68ccc8:{ // PUNPCKHWD XMM2,XMM7
wr<2>(c,0x1280,eval<Op::COPY,2,2>(r<2>(c,0x1288)));
wr<2>(c,0x1282,eval<Op::COPY,2,2>(r<2>(c,0x13c8)));
wr<2>(c,0x1284,eval<Op::COPY,2,2>(r<2>(c,0x128a)));
wr<2>(c,0x1286,eval<Op::COPY,2,2>(r<2>(c,0x13ca)));
wr<2>(c,0x1288,eval<Op::COPY,2,2>(r<2>(c,0x128c)));
wr<2>(c,0x128a,eval<Op::COPY,2,2>(r<2>(c,0x13cc)));
wr<2>(c,0x128c,eval<Op::COPY,2,2>(r<2>(c,0x128e)));
wr<2>(c,0x128e,eval<Op::COPY,2,2>(r<2>(c,0x13ce)));
return 0x68cccc;}
case 0x68cccc:{ // POR XMM0,XMM1
wr<16>(c,0x1200,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1240)));
return 0x68ccd0;}
case 0x68ccd0:{ // POR XMM3,XMM2
wr<16>(c,0x12c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x1280)));
return 0x68ccd4;}
case 0x68ccd4:{ // PSLLD XMM0,0xd
wr<4>(c,0x1200,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1200),0xdull));
wr<4>(c,0x1204,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1204),0xdull));
wr<4>(c,0x1208,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1208),0xdull));
wr<4>(c,0x120c,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x120c),0xdull));
return 0x68ccd9;}
case 0x68ccd9:{ // PSLLD XMM3,0xd
wr<4>(c,0x12c0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c0),0xdull));
wr<4>(c,0x12c4,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c4),0xdull));
wr<4>(c,0x12c8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12c8),0xdull));
wr<4>(c,0x12cc,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x12cc),0xdull));
return 0x68ccde;}
case 0x68ccde:{ // POR XMM0,XMM5
wr<16>(c,0x1200,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1340)));
return 0x68cce2;}
case 0x68cce2:{ // POR XMM3,XMM7
wr<16>(c,0x12c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x12c0),r<16>(c,0x13c0)));
return 0x68cce6;}
case 0x68cce6:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cce7;}
case 0x68cce7:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68cce8;}
case 0x68cce8:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68ccea;}
case 0x68ccea:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cceb;}
case 0x68cceb:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68cced;}
case 0x68cced:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ccf0;}
case 0x68ccf0:{ // CMP dword ptr [EBP + 0x10],0x8
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
return 0x68ccf4;}
case 0x68ccf4:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ccf5;}
case 0x68ccf5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ccf6;}
case 0x68ccf6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ccf7;}
case 0x68ccf7:{ // MOV EDI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ccfa;}
case 0x68ccfa:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68ccfd;}
case 0x68ccfd:{ // JC 0x0068cd49
if(r<1>(c,0x200)){return 0x68cd49;}
return 0x68ccff;}
case 0x68ccff:{ // MOV ESI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd02;}
case 0x68cd02:{ // AND ESI,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd05;}
case 0x68cd05:{ // MOV dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cd08;}
case 0x68cd08:{ // MOV EDX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd0b;}
case 0x68cd0b:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd0e;}
case 0x68cd0e:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd11;}
case 0x68cd11:{ // MOVLPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68cd14;}
case 0x68cd14:{ // MOVHPS XMM0,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68cd18;}
case 0x68cd18:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd1b;}
case 0x68cd1b:{ // CALL 0x0068cbf5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68cd20ull);
return 0x68cbf5;
return 0x68cd20;}
case 0x68cd20:{ // MOVLPS qword ptr [ECX],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68cd23;}
case 0x68cd23:{ // MOVHPS qword ptr [ECX + 0x8],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cd27;}
case 0x68cd27:{ // MOVLPS qword ptr [ECX + 0x10],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cd2b;}
case 0x68cd2b:{ // MOVHPS qword ptr [ECX + 0x18],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cd2f;}
case 0x68cd2f:{ // ADD ECX,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd32;}
case 0x68cd32:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd35;}
case 0x68cd35:{ // JNZ 0x0068cd11
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68cd11;}
return 0x68cd37;}
case 0x68cd37:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd3a;}
case 0x68cd3a:{ // SUB dword ptr [EBP + 0x10],ESI
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
return 0x68cd3d;}
case 0x68cd3d:{ // LEA EAX,[EAX + ESI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68cd40;}
case 0x68cd40:{ // MOV dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cd43;}
case 0x68cd43:{ // LEA EAX,[EDI + ESI*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68cd46;}
case 0x68cd46:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cd49;}
case 0x68cd49:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd4b;}
case 0x68cd4b:{ // CMP dword ptr [EBP + 0x10],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x68cd4e;}
case 0x68cd4e:{ // JBE 0x0068cdb2
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68cdb2;}
return 0x68cd50;}
case 0x68cd50:{ // MOV EDI,0x400
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x400ull));
return 0x68cd55;}
case 0x68cd55:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cd58;}
case 0x68cd58:{ // MOVZX ECX,word ptr [EAX + EBX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x68cd5c;}
case 0x68cd5c:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68cd5e;}
case 0x68cd5e:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x68cd60;}
case 0x68cd60:{ // AND EDX,0x7c00
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7c00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd66;}
case 0x68cd66:{ // AND ESI,0xffff8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffff8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd6c;}
case 0x68cd6c:{ // SHL ESI,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x68cd6f;}
case 0x68cd6f:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x68cd71;}
case 0x68cd71:{ // NEG EAX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_2COMP,4,4>(r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd73;}
case 0x68cd73:{ // SBB EAX,EAX
wu<4>(c,0x48c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wu<4>(c,0x49000,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wu<1>(c,0x49100,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x200,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),u<1>(c,0x49100)));
wu<1>(c,0x49300,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x20b,eval<Op::BOOL_XOR,1,1,1>(r<1>(c,0x20b),u<1>(c,0x49300)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x49000),u<4>(c,0x48c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd75;}
case 0x68cd75:{ // AND EAX,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd77;}
case 0x68cd77:{ // AND ECX,0x3ff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd7d;}
case 0x68cd7d:{ // OR EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd7f;}
case 0x68cd7f:{ // CMP EDX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd81;}
case 0x68cd81:{ // JA 0x0068cd85
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x68cd85;}
return 0x68cd83;}
case 0x68cd83:{ // MOV EDX,EDI
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68cd85;}
case 0x68cd85:{ // ADD EDX,0x19800
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x19800ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x19800ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x19800ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd8b;}
case 0x68cd8b:{ // SHL EDX,0xd
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0xdull,0x1full));
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
return 0x68cd8e;}
case 0x68cd8e:{ // OR EDX,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd90;}
case 0x68cd90:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cd92;}
case 0x68cd92:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cd95;}
case 0x68cd95:{ // FILD dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68cd95ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("INT2FLOAT",u<4>(c,0xa300),4,0x0ull,4,10));
return 0x68cd98;}
case 0x68cd98:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cd9b;}
case 0x68cd9b:{ // JGE 0x0068cda3
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x68cda3;}
return 0x68cd9d;}
case 0x68cd9d:{ // FADD float ptr [0x0078454c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68cd9dull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x78454c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x68cda3;}
case 0x68cda3:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cda6;}
case 0x68cda6:{ // FMUL float ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68cda6ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x68cda9;}
case 0x68cda9:{ // FSTP float ptr [EAX + EBX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68cda9ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x68cdac;}
case 0x68cdac:{ // INC EBX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cdad;}
case 0x68cdad:{ // CMP EBX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
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
return 0x68cdb0;}
case 0x68cdb0:{ // JC 0x0068cd55
if(r<1>(c,0x200)){return 0x68cd55;}
return 0x68cdb2;}
case 0x68cdb2:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cdb5;}
case 0x68cdb5:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cdb6;}
case 0x68cdb6:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cdb7;}
case 0x68cdb7:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cdb8;}
case 0x68cdb8:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x68cdb9;}
case 0x68cdb9:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68cdbc;}
case 0x68cdbc:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68cdbe;}
case 0x68cdbe:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cdbf;}
case 0x68cdbf:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68cdc1;}
case 0x68cdc1:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cdc2;}
case 0x68cdc2:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cdc5;}
case 0x68cdc5:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cdc8;}
case 0x68cdc8:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cdc9;}
case 0x68cdc9:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68cdcb;}
case 0x68cdcb:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cdce;}
case 0x68cdce:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cdd1;}
case 0x68cdd1:{ // MOVUPS XMM0,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68cdd4;}
case 0x68cdd4:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cdd7;}
case 0x68cdd7:{ // TEST AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3600),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cdd9;}
case 0x68cdd9:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cddc;}
case 0x68cddc:{ // SHUFPS XMM1,XMM0,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
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
return 0x68cde0;}
case 0x68cde0:{ // JNZ 0x0068ce14
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68ce14;}
return 0x68cde2;}
case 0x68cde2:{ // MOVAPS XMM2,xmmword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68cde6;}
case 0x68cde6:{ // MOVAPS XMM3,xmmword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68cdea;}
case 0x68cdea:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68cded;}
case 0x68cded:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cdf0;}
case 0x68cdf0:{ // SHUFPS XMM1,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
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
return 0x68cdf4;}
case 0x68cdf4:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68cdf7;}
case 0x68cdf7:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68cdfa;}
case 0x68cdfa:{ // MOVAPS XMM2,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68cdfe;}
case 0x68cdfe:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ce01;}
case 0x68ce01:{ // SHUFPS XMM1,XMM0,0x55
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
return 0x68ce05;}
case 0x68ce05:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68ce08;}
case 0x68ce08:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ce0b;}
case 0x68ce0b:{ // SHUFPS XMM1,XMM0,0x0
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
return 0x68ce0f;}
case 0x68ce0f:{ // MOVAPS XMM0,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ce12;}
case 0x68ce12:{ // JMP 0x0068ce64
return 0x68ce64;
return 0x68ce14;}
case 0x68ce14:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ce18;}
case 0x68ce18:{ // MOVLPS XMM2,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce1c;}
case 0x68ce1c:{ // MOVHPS XMM2,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce20;}
case 0x68ce20:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ce24;}
case 0x68ce24:{ // MOVLPS XMM3,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce28;}
case 0x68ce28:{ // MOVHPS XMM3,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce2c;}
case 0x68ce2c:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68ce2f;}
case 0x68ce2f:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ce32;}
case 0x68ce32:{ // SHUFPS XMM1,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
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
return 0x68ce36;}
case 0x68ce36:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68ce39;}
case 0x68ce39:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68ce3c;}
case 0x68ce3c:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ce40;}
case 0x68ce40:{ // MOVLPS XMM2,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce44;}
case 0x68ce44:{ // MOVHPS XMM2,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce48;}
case 0x68ce48:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ce4b;}
case 0x68ce4b:{ // SHUFPS XMM1,XMM0,0x55
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
return 0x68ce4f;}
case 0x68ce4f:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68ce52;}
case 0x68ce52:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ce55;}
case 0x68ce55:{ // SHUFPS XMM1,XMM0,0x0
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
return 0x68ce59;}
case 0x68ce59:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ce5d;}
case 0x68ce5d:{ // MOVLPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce60;}
case 0x68ce60:{ // MOVHPS XMM0,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce64;}
case 0x68ce64:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ce67;}
case 0x68ce67:{ // MULPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68ce6a;}
case 0x68ce6a:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68ce6d;}
case 0x68ce6d:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68ce70;}
case 0x68ce70:{ // MOVUPS xmmword ptr [EAX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68ce73;}
case 0x68ce73:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68ce75;}
case 0x68ce75:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68ce76;}
case 0x68ce76:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68ce78;}
case 0x68ce78:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68ce79;}
case 0x68ce79:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68ce7c;}
case 0x68ce7c:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68ce7e;}
case 0x68ce7e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ce7f;}
case 0x68ce7f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ce81;}
case 0x68ce81:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ce84;}
case 0x68ce84:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ce87;}
case 0x68ce87:{ // MOV EDX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ce8a;}
case 0x68ce8a:{ // MOVLPS XMM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce8d;}
case 0x68ce8d:{ // MOVHPS XMM0,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce91;}
case 0x68ce91:{ // MOVLPS XMM1,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce95;}
case 0x68ce95:{ // MOVHPS XMM1,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce99;}
case 0x68ce99:{ // MOVLPS XMM2,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ce9d;}
case 0x68ce9d:{ // MOVHPS XMM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68cea1;}
case 0x68cea1:{ // MOVLPS XMM3,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68cea5;}
case 0x68cea5:{ // MOVHPS XMM3,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68cea9;}
case 0x68cea9:{ // MOVSS XMM4,dword ptr [EAX]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cead;}
case 0x68cead:{ // MOVSS XMM5,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ceb2;}
case 0x68ceb2:{ // MOVSS XMM6,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ceb7;}
case 0x68ceb7:{ // MOVSS XMM7,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cebc;}
case 0x68cebc:{ // SHUFPS XMM4,XMM4,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
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
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cec0;}
case 0x68cec0:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
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
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cec4;}
case 0x68cec4:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
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
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cec8;}
case 0x68cec8:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cecc;}
case 0x68cecc:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68cecf;}
case 0x68cecf:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68ced2;}
case 0x68ced2:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68ced5;}
case 0x68ced5:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68ced8;}
case 0x68ced8:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68cedb;}
case 0x68cedb:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68cede;}
case 0x68cede:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68cee1;}
case 0x68cee1:{ // MOVSS XMM5,dword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cee6;}
case 0x68cee6:{ // MOVSS XMM6,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ceeb;}
case 0x68ceeb:{ // MOVSS XMM7,dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cef0;}
case 0x68cef0:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
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
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cef4;}
case 0x68cef4:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
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
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cef8;}
case 0x68cef8:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cefc;}
case 0x68cefc:{ // MULPS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x120c),4,4));
return 0x68ceff;}
case 0x68ceff:{ // MULPS XMM6,XMM1
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x124c),4,4));
return 0x68cf02;}
case 0x68cf02:{ // MULPS XMM7,XMM2
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x128c),4,4));
return 0x68cf05;}
case 0x68cf05:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68cf08;}
case 0x68cf08:{ // ADDPS XMM5,XMM7
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x13cc),4,4));
return 0x68cf0b;}
case 0x68cf0b:{ // MOVSS XMM6,dword ptr [EAX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf10;}
case 0x68cf10:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
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
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf14;}
case 0x68cf14:{ // MULPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68cf17;}
case 0x68cf17:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68cf1a;}
case 0x68cf1a:{ // MOVSS XMM6,dword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf1f;}
case 0x68cf1f:{ // MOVSS XMM7,dword ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf24;}
case 0x68cf24:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
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
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf28;}
case 0x68cf28:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf2c;}
case 0x68cf2c:{ // MULPS XMM6,XMM0
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x120c),4,4));
return 0x68cf2f;}
case 0x68cf2f:{ // MULPS XMM7,XMM1
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x124c),4,4));
return 0x68cf32;}
case 0x68cf32:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68cf35;}
case 0x68cf35:{ // MOVSS XMM7,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf3a;}
case 0x68cf3a:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf3e;}
case 0x68cf3e:{ // MULPS XMM7,XMM2
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x128c),4,4));
return 0x68cf41;}
case 0x68cf41:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68cf44;}
case 0x68cf44:{ // MOVSS XMM7,dword ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf49;}
case 0x68cf49:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf4d;}
case 0x68cf4d:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68cf50;}
case 0x68cf50:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68cf53;}
case 0x68cf53:{ // MOVSS XMM7,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf58;}
case 0x68cf58:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf5c;}
case 0x68cf5c:{ // MULPS XMM0,XMM7
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x13cc),4,4));
return 0x68cf5f;}
case 0x68cf5f:{ // MOVSS XMM7,dword ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf64;}
case 0x68cf64:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf68;}
case 0x68cf68:{ // MULPS XMM1,XMM7
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x13cc),4,4));
return 0x68cf6b;}
case 0x68cf6b:{ // MOVSS XMM7,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf70;}
case 0x68cf70:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf74;}
case 0x68cf74:{ // MULPS XMM2,XMM7
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x13cc),4,4));
return 0x68cf77;}
case 0x68cf77:{ // MOVSS XMM7,dword ptr [EAX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68cf7c;}
case 0x68cf7c:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
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
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
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
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68cf80;}
case 0x68cf80:{ // MULPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68cf83;}
case 0x68cf83:{ // MOVLPS qword ptr [EDX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x68cf86;}
case 0x68cf86:{ // MOVHPS qword ptr [EDX + 0x8],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cf8a;}
case 0x68cf8a:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68cf8d;}
case 0x68cf8d:{ // MOVLPS qword ptr [EDX + 0x10],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1340)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cf91;}
case 0x68cf91:{ // MOVHPS qword ptr [EDX + 0x18],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1348)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cf95;}
case 0x68cf95:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68cf98;}
case 0x68cf98:{ // MOVLPS qword ptr [EDX + 0x20],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cf9c;}
case 0x68cf9c:{ // MOVHPS qword ptr [EDX + 0x28],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cfa0;}
case 0x68cfa0:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68cfa3;}
case 0x68cfa3:{ // MOVLPS qword ptr [EDX + 0x30],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cfa7;}
case 0x68cfa7:{ // MOVHPS qword ptr [EDX + 0x38],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68cfab;}
case 0x68cfab:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cfae;}
case 0x68cfae:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68cfaf;}
case 0x68cfaf:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68cfb2;}
case 0x68cfb2:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68cfb4;}
case 0x68cfb4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68cfb5;}
case 0x68cfb5:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68cfb7;}
case 0x68cfb7:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cfba;}
case 0x68cfba:{ // MOVSS XMM0,dword ptr [EAX]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cfbe;}
case 0x68cfbe:{ // MOVSS XMM1,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cfc3;}
case 0x68cfc3:{ // MOVSS XMM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68cfc8;}
case 0x68cfc8:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68cfcb;}
case 0x68cfcb:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68cfce;}
case 0x68cfce:{ // MOVAPS XMM5,XMM2
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68cfd1;}
case 0x68cfd1:{ // MULSS XMM0,XMM0
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1200),4,4));
return 0x68cfd5;}
case 0x68cfd5:{ // MULSS XMM1,XMM1
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1240),4,4));
return 0x68cfd9;}
case 0x68cfd9:{ // MULSS XMM2,XMM2
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1280),4,4));
return 0x68cfdd;}
case 0x68cfdd:{ // ADDSS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
return 0x68cfe1;}
case 0x68cfe1:{ // ADDSS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
return 0x68cfe5;}
case 0x68cfe5:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68cfe8;}
case 0x68cfe8:{ // COMISS XMM0,dword ptr [0x007bab10]
wu<1>(c,0x4ff00,float_op("FLOAT_NAN",r<4>(c,0x1200),4,0x0ull,4,1));
wu<1>(c,0x50000,float_op("FLOAT_NAN",m<4>(c,0x7bab10),4,0x0ull,4,1));
wr<1>(c,0x202,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4ff00),u<1>(c,0x50000)));
wu<1>(c,0x50200,float_op("FLOAT_EQUAL",r<4>(c,0x1200),4,m<4>(c,0x7bab10),4,1));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50200)));
wu<1>(c,0x50400,float_op("FLOAT_LESS",r<4>(c,0x1200),4,m<4>(c,0x7bab10),4,1));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50400)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x204,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x207,eval<Op::COPY,1,1>(0x0ull));
return 0x68cfef;}
case 0x68cfef:{ // JNC 0x0068cffe
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x68cffe;}
return 0x68cff1;}
case 0x68cff1:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68cff3;}
case 0x68cff3:{ // MOV dword ptr [ECX],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x68cff5;}
case 0x68cff5:{ // MOV dword ptr [ECX + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cff8;}
case 0x68cff8:{ // MOV dword ptr [ECX + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68cffb;}
case 0x68cffb:{ // JMP 0x0068d03f
return 0x68d03f;
return 0x68cffd;}
case 0x68cffe:{ // RSQRTSS XMM6,XMM0
wr<16>(c,0x1380,user_op(c,1048752,{r<16>(c,0x1380),r<16>(c,0x1200)}));
return 0x68d002;}
default:missing_instruction(c.pc);}}
}
