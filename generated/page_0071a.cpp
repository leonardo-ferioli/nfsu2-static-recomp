#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_71a(Cpu& c){switch(c.pc){
case 0x71a001:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x71a005;}
case 0x71a005:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a008;}
case 0x71a008:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a00b;}
case 0x71a00b:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a00e;}
case 0x71a00e:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a011;}
case 0x71a011:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a014;}
case 0x71a014:{ // JG 0x00719f14
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x719f14;}
return 0x71a01a;}
case 0x71a01a:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a01b;}
case 0x71a01b:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a01c;}
case 0x71a01c:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a01d;}
case 0x71a01d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a01e;}
case 0x71a01e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a01f;}
case 0x71a01f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a021;}
case 0x71a021:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a022;}
case 0x71a022:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a023;}
case 0x71a023:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a026;}
case 0x71a026:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a029;}
case 0x71a029:{ // LEA EDI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a02c;}
case 0x71a02c:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a02e;}
case 0x71a02e:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a031;}
case 0x71a031:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a034;}
case 0x71a034:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a037;}
case 0x71a037:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a03b;}
case 0x71a03b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a03e;}
case 0x71a03e:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a041;}
case 0x71a041:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x71a048;}
case 0x71a048:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a04b;}
case 0x71a04b:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71a04e;}
case 0x71a04e:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a051;}
case 0x71a051:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a054;}
case 0x71a054:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x71a057;}
case 0x71a057:{ // MOVQ MM6,qword ptr [0x007c66e0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66e0)));
return 0x71a05e;}
case 0x71a05e:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a061;}
case 0x71a061:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a064;}
case 0x71a064:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a067;}
case 0x71a067:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a06a;}
case 0x71a06a:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71a06d;}
case 0x71a06d:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x71a070;}
case 0x71a070:{ // PADDW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x71a073;}
case 0x71a073:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x71a07a;}
case 0x71a07a:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x71a081;}
case 0x71a081:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x71a085;}
case 0x71a085:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x71a089;}
case 0x71a089:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a08c;}
case 0x71a08c:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a090;}
case 0x71a090:{ // MOVQ MM0,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a094;}
case 0x71a094:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a097;}
case 0x71a097:{ // PMULLW MM1,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71a09e;}
case 0x71a09e:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a0a1;}
case 0x71a0a1:{ // PMULLW MM3,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71a0a8;}
case 0x71a0a8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a0ab;}
case 0x71a0ab:{ // PMULLW MM4,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71a0b2;}
case 0x71a0b2:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a0b5;}
case 0x71a0b5:{ // PMULLW MM5,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71a0bc;}
case 0x71a0bc:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a0bf;}
case 0x71a0bf:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a0c2;}
case 0x71a0c2:{ // PMULLW MM6,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71a0c9;}
case 0x71a0c9:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a0cc;}
case 0x71a0cc:{ // PMULLW MM7,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71a0d3;}
case 0x71a0d3:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x71a0d6;}
case 0x71a0d6:{ // PADDW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x71a0d9;}
case 0x71a0d9:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a0dc;}
case 0x71a0dc:{ // PMULLW MM6,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71a0e3;}
case 0x71a0e3:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a0e6;}
case 0x71a0e6:{ // PMULLW MM7,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71a0ed;}
case 0x71a0ed:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a0f0;}
case 0x71a0f0:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71a0f3;}
case 0x71a0f3:{ // PADDW MM1,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x71a0fa;}
case 0x71a0fa:{ // PADDW MM3,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71a101;}
case 0x71a101:{ // PSRLW MM1,0x8
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x8ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x8ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x8ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x8ull));
return 0x71a105;}
case 0x71a105:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x71a109;}
case 0x71a109:{ // PACKUSWB MM1,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x71a10c;}
case 0x71a10c:{ // MOVQ qword ptr [ESI + ECX*0x2],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a110;}
case 0x71a110:{ // PADDW MM4,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71a117;}
case 0x71a117:{ // PADDW MM5,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x71a11e;}
case 0x71a11e:{ // PSRLW MM4,0x8
wr<2>(c,0x1140,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1140),0x8ull));
wr<2>(c,0x1142,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1142),0x8ull));
wr<2>(c,0x1144,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1144),0x8ull));
wr<2>(c,0x1146,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1146),0x8ull));
return 0x71a122;}
case 0x71a122:{ // PSRLW MM5,0x8
wr<2>(c,0x1150,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1150),0x8ull));
wr<2>(c,0x1152,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1152),0x8ull));
wr<2>(c,0x1154,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1154),0x8ull));
wr<2>(c,0x1156,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1156),0x8ull));
return 0x71a126;}
case 0x71a126:{ // PACKUSWB MM4,MM5
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
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
return 0x71a129;}
case 0x71a129:{ // MOVQ qword ptr [EDI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a12c;}
case 0x71a12c:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a12f;}
case 0x71a12f:{ // MOVQ MM1,qword ptr [EDI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a133;}
case 0x71a133:{ // MOVQ MM5,qword ptr [0x007c66e0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66e0)));
return 0x71a13a;}
case 0x71a13a:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71a13d;}
case 0x71a13d:{ // MOVQ MM6,qword ptr [0x007c66d0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x71a144;}
case 0x71a144:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a147;}
case 0x71a147:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x71a14a;}
case 0x71a14a:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a14d;}
case 0x71a14d:{ // PMULLW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x71a150;}
case 0x71a150:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a153;}
case 0x71a153:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71a156;}
case 0x71a156:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71a159;}
case 0x71a159:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a15c;}
case 0x71a15c:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x71a163;}
case 0x71a163:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x71a16a;}
case 0x71a16a:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x71a16e;}
case 0x71a16e:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x71a172;}
case 0x71a172:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a175;}
case 0x71a175:{ // MOVQ qword ptr [EDI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a179;}
case 0x71a179:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a17c;}
case 0x71a17c:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a17f;}
case 0x71a17f:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a182;}
case 0x71a182:{ // JG 0x0071a034
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71a034;}
return 0x71a188;}
case 0x71a188:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a189;}
case 0x71a189:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a18a;}
case 0x71a18a:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a18b;}
case 0x71a18b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a18c;}
case 0x71a18c:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a18d;}
case 0x71a18d:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a18f;}
case 0x71a18f:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a190;}
case 0x71a190:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a191;}
case 0x71a191:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a194;}
case 0x71a194:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a197;}
case 0x71a197:{ // LEA EDI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a19a;}
case 0x71a19a:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a19c;}
case 0x71a19c:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a19f;}
case 0x71a19f:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a1a2;}
case 0x71a1a2:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a1a5;}
case 0x71a1a5:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a1a9;}
case 0x71a1a9:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a1ac;}
case 0x71a1ac:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a1af;}
case 0x71a1af:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x71a1b6;}
case 0x71a1b6:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a1b9;}
case 0x71a1b9:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71a1bc;}
case 0x71a1bc:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a1bf;}
case 0x71a1bf:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a1c2;}
case 0x71a1c2:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x71a1c5;}
case 0x71a1c5:{ // MOVQ MM6,qword ptr [0x007c66e0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66e0)));
return 0x71a1cc;}
case 0x71a1cc:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a1cf;}
case 0x71a1cf:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a1d2;}
case 0x71a1d2:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a1d5;}
case 0x71a1d5:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a1d8;}
case 0x71a1d8:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71a1db;}
case 0x71a1db:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x71a1de;}
case 0x71a1de:{ // PADDW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x71a1e1;}
case 0x71a1e1:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x71a1e8;}
case 0x71a1e8:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x71a1ef;}
case 0x71a1ef:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x71a1f3;}
case 0x71a1f3:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x71a1f7;}
case 0x71a1f7:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a1fa;}
case 0x71a1fa:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a1fe;}
case 0x71a1fe:{ // MOVQ MM0,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a202;}
case 0x71a202:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a205;}
case 0x71a205:{ // PMULLW MM1,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71a20c;}
case 0x71a20c:{ // MOVQ qword ptr [EDI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a210;}
case 0x71a210:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a213;}
case 0x71a213:{ // PMULLW MM3,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71a21a;}
case 0x71a21a:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a21d;}
case 0x71a21d:{ // PMULLW MM4,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71a224;}
case 0x71a224:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a227;}
case 0x71a227:{ // PMULLW MM5,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71a22e;}
case 0x71a22e:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a231;}
case 0x71a231:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a234;}
case 0x71a234:{ // PMULLW MM6,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71a23b;}
case 0x71a23b:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a23e;}
case 0x71a23e:{ // PMULLW MM7,qword ptr [0x007c66c0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71a245;}
case 0x71a245:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x71a248;}
case 0x71a248:{ // PADDW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x71a24b;}
case 0x71a24b:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a24e;}
case 0x71a24e:{ // PMULLW MM6,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71a255;}
case 0x71a255:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a258;}
case 0x71a258:{ // PMULLW MM7,qword ptr [0x007c66f0]
wu<8>(c,0x121600,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71a25f;}
case 0x71a25f:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a262;}
case 0x71a262:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71a265;}
case 0x71a265:{ // PADDW MM1,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x71a26c;}
case 0x71a26c:{ // PADDW MM3,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71a273;}
case 0x71a273:{ // PSRLW MM1,0x8
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x8ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x8ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x8ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x8ull));
return 0x71a277;}
case 0x71a277:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x71a27b;}
case 0x71a27b:{ // PACKUSWB MM1,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x71a27e;}
case 0x71a27e:{ // MOVQ qword ptr [ESI + ECX*0x2],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a282;}
case 0x71a282:{ // PADDW MM4,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71a289;}
case 0x71a289:{ // PADDW MM5,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x71a290;}
case 0x71a290:{ // PSRLW MM4,0x8
wr<2>(c,0x1140,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1140),0x8ull));
wr<2>(c,0x1142,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1142),0x8ull));
wr<2>(c,0x1144,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1144),0x8ull));
wr<2>(c,0x1146,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1146),0x8ull));
return 0x71a294;}
case 0x71a294:{ // PSRLW MM5,0x8
wr<2>(c,0x1150,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1150),0x8ull));
wr<2>(c,0x1152,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1152),0x8ull));
wr<2>(c,0x1154,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1154),0x8ull));
wr<2>(c,0x1156,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1156),0x8ull));
return 0x71a298;}
case 0x71a298:{ // PACKUSWB MM4,MM5
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
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
return 0x71a29b;}
case 0x71a29b:{ // MOVQ qword ptr [EDI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a29e;}
case 0x71a29e:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a2a1;}
case 0x71a2a1:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a2a4;}
case 0x71a2a4:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a2a7;}
case 0x71a2a7:{ // JG 0x0071a1a2
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71a1a2;}
return 0x71a2ad;}
case 0x71a2ad:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a2ae;}
case 0x71a2ae:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a2af;}
case 0x71a2af:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a2b0;}
case 0x71a2b0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a2b1;}
case 0x71a2b1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a2b2;}
case 0x71a2b2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a2b4;}
case 0x71a2b4:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a2b5;}
case 0x71a2b5:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a2b8;}
case 0x71a2b8:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a2bb;}
case 0x71a2bb:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a2be;}
case 0x71a2be:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a2c1;}
case 0x71a2c1:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a2c4;}
case 0x71a2c4:{ // MOVQ MM1,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a2c8;}
case 0x71a2c8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a2cb;}
case 0x71a2cb:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a2ce;}
case 0x71a2ce:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a2d1;}
case 0x71a2d1:{ // MOVQ MM6,qword ptr [0x007c6710]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c6710)));
return 0x71a2d8;}
case 0x71a2d8:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a2db;}
case 0x71a2db:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71a2de;}
case 0x71a2de:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a2e1;}
case 0x71a2e1:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x71a2e4;}
case 0x71a2e4:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a2e7;}
case 0x71a2e7:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a2ea;}
case 0x71a2ea:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x71a2ee;}
case 0x71a2ee:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71a2f1;}
case 0x71a2f1:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x71a2f5;}
case 0x71a2f5:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a2f8;}
case 0x71a2f8:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a2fc;}
case 0x71a2fc:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a2ff;}
case 0x71a2ff:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a302;}
case 0x71a302:{ // JG 0x0071a2c1
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71a2c1;}
return 0x71a304;}
case 0x71a304:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a305;}
case 0x71a305:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a306;}
case 0x71a306:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a307;}
case 0x71a307:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a308;}
case 0x71a308:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a30a;}
case 0x71a30a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a30b;}
case 0x71a30b:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a30e;}
case 0x71a30e:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a311;}
case 0x71a311:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a314;}
case 0x71a314:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a317;}
case 0x71a317:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a31b;}
case 0x71a31b:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a31e;}
case 0x71a31e:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a321;}
case 0x71a321:{ // JG 0x0071a314
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71a314;}
return 0x71a323;}
case 0x71a323:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a324;}
case 0x71a324:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a325;}
case 0x71a325:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a326;}
case 0x71a326:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a327;}
case 0x71a327:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a329;}
case 0x71a329:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a32a;}
case 0x71a32a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a32b;}
case 0x71a32b:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a32e;}
case 0x71a32e:{ // MOV EDI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a331;}
case 0x71a331:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a334;}
case 0x71a334:{ // MOVQ MM6,qword ptr [0x007c6710]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c6710)));
return 0x71a33b;}
case 0x71a33b:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a33e;}
case 0x71a33e:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a341;}
case 0x71a341:{ // MOVQ MM1,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a345;}
case 0x71a345:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a348;}
case 0x71a348:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a34b;}
case 0x71a34b:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a34e;}
case 0x71a34e:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a351;}
case 0x71a351:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a354;}
case 0x71a354:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71a357;}
case 0x71a357:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x71a35a;}
case 0x71a35a:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a35d;}
case 0x71a35d:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a360;}
case 0x71a360:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a363;}
case 0x71a363:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71a366;}
case 0x71a366:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x71a36a;}
case 0x71a36a:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x71a36e;}
case 0x71a36e:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a371;}
case 0x71a371:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a374;}
case 0x71a374:{ // PUNPCKLBW MM2,MM0
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a377;}
case 0x71a377:{ // MOVQ qword ptr [EDI],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a37a;}
case 0x71a37a:{ // PUNPCKHBW MM4,MM0
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
return 0x71a37d;}
case 0x71a37d:{ // MOVQ qword ptr [EDI + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71a381;}
case 0x71a381:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a384;}
case 0x71a384:{ // ADD EDI,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a387;}
case 0x71a387:{ // SUB ECX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a38a;}
case 0x71a38a:{ // CMP ECX,0x8
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
return 0x71a38d;}
case 0x71a38d:{ // JG 0x0071a33e
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x71a33e;}
return 0x71a38f;}
case 0x71a38f:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a392;}
case 0x71a392:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a395;}
case 0x71a395:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a398;}
case 0x71a398:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a39b;}
case 0x71a39b:{ // PSRLQ MM1,0x8
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x8ull));
return 0x71a39f;}
case 0x71a39f:{ // PSRLQ MM3,0x38
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x38ull));
return 0x71a3a3;}
case 0x71a3a3:{ // PSLLQ MM3,0x38
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x38ull));
return 0x71a3a7;}
case 0x71a3a7:{ // POR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x71a3aa;}
case 0x71a3aa:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a3ad;}
case 0x71a3ad:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a3b0;}
case 0x71a3b0:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a3b3;}
case 0x71a3b3:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a3b6;}
case 0x71a3b6:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71a3b9;}
case 0x71a3b9:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x71a3bc;}
case 0x71a3bc:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a3bf;}
case 0x71a3bf:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a3c2;}
case 0x71a3c2:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a3c5;}
case 0x71a3c5:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71a3c8;}
case 0x71a3c8:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x71a3cc;}
case 0x71a3cc:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x71a3d0;}
case 0x71a3d0:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71a3d3;}
case 0x71a3d3:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a3d6;}
case 0x71a3d6:{ // PUNPCKLBW MM2,MM0
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a3d9;}
case 0x71a3d9:{ // MOVQ qword ptr [EDI],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a3dc;}
case 0x71a3dc:{ // PUNPCKHBW MM4,MM0
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
return 0x71a3df;}
case 0x71a3df:{ // MOVQ qword ptr [EDI + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71a3e3;}
case 0x71a3e3:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a3e4;}
case 0x71a3e4:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a3e5;}
case 0x71a3e5:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a3e6;}
case 0x71a3e6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a3e7;}
case 0x71a3e7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a3e8;}
case 0x71a3e8:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a3ea;}
case 0x71a3ea:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a3eb;}
case 0x71a3eb:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a3ec;}
case 0x71a3ec:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a3ef;}
case 0x71a3ef:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a3f2;}
case 0x71a3f2:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a3f3;}
case 0x71a3f3:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a3f6;}
case 0x71a3f6:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x71a3fa;}
case 0x71a3fa:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a3fc;}
case 0x71a3fc:{ // SUB ESP,0x38
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x38ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x38ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x38ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a3ff;}
case 0x71a3ff:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a402;}
case 0x71a402:{ // MOV EAX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a405;}
case 0x71a405:{ // MOV ECX,dword ptr [0x008b9c4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8b9c4c)));
return 0x71a40b;}
case 0x71a40b:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a40e;}
case 0x71a40e:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a40f;}
case 0x71a40f:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a410;}
case 0x71a410:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a413;}
case 0x71a413:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a416;}
case 0x71a416:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a418;}
case 0x71a418:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a41b;}
case 0x71a41b:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a41e;}
case 0x71a41e:{ // SUB ECX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a420;}
case 0x71a420:{ // LEA ESI,[ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a423;}
case 0x71a423:{ // MOVD MM0,dword ptr [ESI + ECX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a428;}
case 0x71a428:{ // MOVD MM4,dword ptr [ESI + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a42c;}
case 0x71a42c:{ // MOVD MM2,dword ptr [ESI + ECX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a431;}
case 0x71a431:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71a434;}
case 0x71a434:{ // MOVD MM3,dword ptr [ESI + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x2ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a438;}
case 0x71a438:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71a43b;}
case 0x71a43b:{ // MOVD MM1,dword ptr [ESI + EDX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a440;}
case 0x71a440:{ // MOVD MM5,dword ptr [ESI + EDX*0x2 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a445;}
case 0x71a445:{ // MOVD MM6,dword ptr [ESI + EDX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a44a;}
case 0x71a44a:{ // PUNPCKLBW MM1,MM5
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71a44d;}
case 0x71a44d:{ // MOVD MM7,dword ptr [ESI + EDX*0x2 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a452;}
case 0x71a452:{ // PUNPCKHWD MM0,MM1
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x71a455;}
case 0x71a455:{ // PUNPCKLBW MM6,MM7
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a458;}
case 0x71a458:{ // LEA EDI,[EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71a45b;}
case 0x71a45b:{ // PUNPCKLWD MM2,MM6
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x71a45e;}
case 0x71a45e:{ // LEA ESI,[ESI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a461;}
case 0x71a461:{ // MOVD MM4,dword ptr [ESI + ECX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a466;}
case 0x71a466:{ // MOVD MM1,dword ptr [ESI + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a46a;}
case 0x71a46a:{ // MOVD MM3,dword ptr [ESI + ECX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a46f;}
case 0x71a46f:{ // PUNPCKLBW MM4,MM1
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a472;}
case 0x71a472:{ // MOVD MM6,dword ptr [ESI + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x2ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a476;}
case 0x71a476:{ // MOVD MM1,dword ptr [ESI + EDX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71a47b;}
case 0x71a47b:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71a47e;}
case 0x71a47e:{ // MOVQ MM5,qword ptr [ESI + EDX*0x2 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a483;}
case 0x71a483:{ // MOVQ MM6,qword ptr [ESI + EDX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a488;}
case 0x71a488:{ // PUNPCKLBW MM1,MM5
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71a48b;}
case 0x71a48b:{ // MOVQ MM7,qword ptr [ESI + EDX*0x2 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7400)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a490;}
case 0x71a490:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x71a493;}
case 0x71a493:{ // PUNPCKLBW MM6,MM7
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a496;}
case 0x71a496:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a499;}
case 0x71a499:{ // PUNPCKLWD MM3,MM6
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x71a49c;}
case 0x71a49c:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a49f;}
case 0x71a49f:{ // PUNPCKLDQ MM0,MM4
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x71a4a2;}
case 0x71a4a2:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71a4a5;}
case 0x71a4a5:{ // PUNPCKHDQ MM1,MM4
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x71a4a8;}
case 0x71a4a8:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a4ab;}
case 0x71a4ab:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71a4af;}
case 0x71a4af:{ // PUNPCKLDQ MM2,MM3
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x71a4b2;}
case 0x71a4b2:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a4b5;}
case 0x71a4b5:{ // MOVQ qword ptr [EDI + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71a4b9;}
case 0x71a4b9:{ // PUNPCKHDQ MM7,MM3
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x71a4bc;}
case 0x71a4bc:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a4bf;}
case 0x71a4bf:{ // MOVQ qword ptr [EDI + 0x18],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71a4c3;}
case 0x71a4c3:{ // MOVQ MM1,qword ptr [0x007c6770]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7c6770)));
return 0x71a4ca;}
case 0x71a4ca:{ // PSUBB MM0,MM5
wr<1>(c,0x1100,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1150)));
wr<1>(c,0x1101,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1151)));
wr<1>(c,0x1102,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1152)));
wr<1>(c,0x1103,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1153)));
wr<1>(c,0x1104,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1154)));
wr<1>(c,0x1105,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1155)));
wr<1>(c,0x1106,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1156)));
wr<1>(c,0x1107,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1157)));
return 0x71a4cd;}
case 0x71a4cd:{ // MOVQ MM7,qword ptr [0x007c67b0]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7c67b0)));
return 0x71a4d4;}
case 0x71a4d4:{ // PCMPGTB MM1,MM0
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1110)));
wr<1>(c,0x1110,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1112)));
wr<1>(c,0x1112,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1113)));
wr<1>(c,0x1113,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1114)));
wr<1>(c,0x1114,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1115)));
wr<1>(c,0x1115,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1116)));
wr<1>(c,0x1116,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a4d7;}
case 0x71a4d7:{ // PCMPGTB MM0,MM7
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1170),r<1>(c,0x1100)));
wr<1>(c,0x1100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1171),r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1172),r<1>(c,0x1102)));
wr<1>(c,0x1102,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1173),r<1>(c,0x1103)));
wr<1>(c,0x1103,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1174),r<1>(c,0x1104)));
wr<1>(c,0x1104,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1175),r<1>(c,0x1105)));
wr<1>(c,0x1105,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1176),r<1>(c,0x1106)));
wr<1>(c,0x1106,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1177),r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a4da;}
case 0x71a4da:{ // MOVQ MM3,qword ptr [0x007c6770]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7c6770)));
return 0x71a4e1;}
case 0x71a4e1:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71a4e4;}
case 0x71a4e4:{ // MOVQ MM1,MM7
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71a4e7;}
case 0x71a4e7:{ // MOVQ MM7,qword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a4eb;}
case 0x71a4eb:{ // PSUBB MM2,MM7
wr<1>(c,0x1120,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1170)));
wr<1>(c,0x1121,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1172)));
wr<1>(c,0x1123,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1173)));
wr<1>(c,0x1124,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1174)));
wr<1>(c,0x1125,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1175)));
wr<1>(c,0x1126,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1176)));
wr<1>(c,0x1127,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1177)));
return 0x71a4ee;}
case 0x71a4ee:{ // PCMPGTB MM3,MM2
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1130)));
wr<1>(c,0x1130,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1132)));
wr<1>(c,0x1132,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1133)));
wr<1>(c,0x1133,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1134)));
wr<1>(c,0x1134,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1135)));
wr<1>(c,0x1135,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1136)));
wr<1>(c,0x1136,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a4f1;}
case 0x71a4f1:{ // PCMPGTB MM2,MM1
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1120)));
wr<1>(c,0x1120,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1122)));
wr<1>(c,0x1122,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1123)));
wr<1>(c,0x1123,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1124)));
wr<1>(c,0x1124,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1125)));
wr<1>(c,0x1125,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1126)));
wr<1>(c,0x1126,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a4f4;}
case 0x71a4f4:{ // POR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x71a4f7;}
case 0x71a4f7:{ // MOVQ MM3,qword ptr [0x007c67c0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7c67c0)));
return 0x71a4fe;}
case 0x71a4fe:{ // POR MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71a501;}
case 0x71a501:{ // PXOR MM1,MM1
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1110)));
return 0x71a504;}
case 0x71a504:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71a507;}
case 0x71a507:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a50a;}
case 0x71a50a:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a50d;}
case 0x71a50d:{ // PUNPCKLBW MM3,MM1
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a510;}
case 0x71a510:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71a513;}
case 0x71a513:{ // PUNPCKHBW MM5,MM1
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a516;}
case 0x71a516:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a519;}
case 0x71a519:{ // PUNPCKHBW MM6,MM1
wr<1>(c,0x1160,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a51c;}
case 0x71a51c:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x71a51f;}
case 0x71a51f:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x71a522;}
case 0x71a522:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a525;}
case 0x71a525:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a528;}
case 0x71a528:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a52b;}
case 0x71a52b:{ // PADDW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71a52e;}
case 0x71a52e:{ // PUNPCKLBW MM3,MM1
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a531;}
case 0x71a531:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71a534;}
case 0x71a534:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a537;}
case 0x71a537:{ // MOVQ MM6,MM7
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71a53a;}
case 0x71a53a:{ // PUNPCKLBW MM7,MM1
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a53d;}
case 0x71a53d:{ // PUNPCKHBW MM6,MM1
wr<1>(c,0x1160,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a540;}
case 0x71a540:{ // PSUBW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x71a543;}
case 0x71a543:{ // PUNPCKLBW MM1,MM0
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a546;}
case 0x71a546:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a549;}
case 0x71a549:{ // PSRAW MM1,0x8
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x8ull}));
return 0x71a54d;}
case 0x71a54d:{ // PUNPCKHBW MM7,MM0
wr<1>(c,0x1170,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
return 0x71a550;}
case 0x71a550:{ // PSUBW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a553;}
case 0x71a553:{ // PSRAW MM7,0x8
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x8ull}));
return 0x71a557;}
case 0x71a557:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71a55a;}
case 0x71a55a:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71a55d;}
case 0x71a55d:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a560;}
case 0x71a560:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71a563;}
case 0x71a563:{ // PADDW MM2,qword ptr [0x007c6780]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6780)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x71a56a;}
case 0x71a56a:{ // MOVD MM1,EAX
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x71a56d;}
case 0x71a56d:{ // PADDW MM4,qword ptr [0x007c6780]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6780)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71a574;}
case 0x71a574:{ // PSRAW MM2,0x3
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x3ull}));
return 0x71a578;}
case 0x71a578:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x71a57c;}
case 0x71a57c:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a57f;}
case 0x71a57f:{ // PUNPCKLWD MM1,MM1
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x71a582;}
case 0x71a582:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a585;}
case 0x71a585:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x71a588;}
case 0x71a588:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x71a58c;}
case 0x71a58c:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a58f;}
case 0x71a58f:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x71a593;}
case 0x71a593:{ // PXOR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71a596;}
case 0x71a596:{ // PSUBSW MM3,MM2
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x71a599;}
case 0x71a599:{ // PXOR MM5,MM4
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1140)));
return 0x71a59c;}
case 0x71a59c:{ // PSUBSW MM5,MM4
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x71a59f;}
case 0x71a59f:{ // POR MM2,qword ptr [0x007c6790]
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7c6790)));
return 0x71a5a6;}
case 0x71a5a6:{ // POR MM4,qword ptr [0x007c6790]
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),m<8>(c,0x7c6790)));
return 0x71a5ad;}
case 0x71a5ad:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a5b0;}
case 0x71a5b0:{ // PSUBUSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x71a5b3;}
case 0x71a5b3:{ // PSUBUSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71a5b6;}
case 0x71a5b6:{ // POR MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71a5b9;}
case 0x71a5b9:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a5bc;}
case 0x71a5bc:{ // PSUBUSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x71a5bf;}
case 0x71a5bf:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a5c2;}
case 0x71a5c2:{ // PMULLW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71a5c5;}
case 0x71a5c5:{ // PSUBUSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71a5c8;}
case 0x71a5c8:{ // PSUBUSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71a5cb;}
case 0x71a5cb:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71a5ce;}
case 0x71a5ce:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a5d1;}
case 0x71a5d1:{ // PSUBUSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71a5d4;}
case 0x71a5d4:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71a5d7;}
case 0x71a5d7:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a5da;}
case 0x71a5da:{ // MOVQ MM5,qword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a5de;}
case 0x71a5de:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a5e1;}
case 0x71a5e1:{ // MOVQ MM4,qword ptr [0x007c67c0]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x7c67c0)));
return 0x71a5e8;}
case 0x71a5e8:{ // PACKSSWB MM1,MM2
wr<8>(c,0x1110,user_op(c,524424,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71a5eb;}
case 0x71a5eb:{ // MOVQ MM6,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a5ef;}
case 0x71a5ef:{ // PSUBB MM5,MM4
wr<1>(c,0x1150,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1150),r<1>(c,0x1140)));
wr<1>(c,0x1151,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1151),r<1>(c,0x1141)));
wr<1>(c,0x1152,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1152),r<1>(c,0x1142)));
wr<1>(c,0x1153,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1153),r<1>(c,0x1143)));
wr<1>(c,0x1154,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1154),r<1>(c,0x1144)));
wr<1>(c,0x1155,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1155),r<1>(c,0x1145)));
wr<1>(c,0x1156,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1156),r<1>(c,0x1146)));
wr<1>(c,0x1157,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1157),r<1>(c,0x1147)));
return 0x71a5f2;}
case 0x71a5f2:{ // PSUBB MM6,MM4
wr<1>(c,0x1160,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1160),r<1>(c,0x1140)));
wr<1>(c,0x1161,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1161),r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1162),r<1>(c,0x1142)));
wr<1>(c,0x1163,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1163),r<1>(c,0x1143)));
wr<1>(c,0x1164,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1164),r<1>(c,0x1144)));
wr<1>(c,0x1165,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1165),r<1>(c,0x1145)));
wr<1>(c,0x1166,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1166),r<1>(c,0x1146)));
wr<1>(c,0x1167,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1167),r<1>(c,0x1147)));
return 0x71a5f5;}
case 0x71a5f5:{ // PADDSB MM5,MM1
wr<8>(c,0x1150,user_op(c,524429,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71a5f8;}
case 0x71a5f8:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a5fb;}
case 0x71a5fb:{ // PADDB MM5,MM4
wr<1>(c,0x1150,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1150),r<1>(c,0x1140)));
wr<1>(c,0x1151,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1151),r<1>(c,0x1141)));
wr<1>(c,0x1152,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1152),r<1>(c,0x1142)));
wr<1>(c,0x1153,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1153),r<1>(c,0x1143)));
wr<1>(c,0x1154,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1154),r<1>(c,0x1144)));
wr<1>(c,0x1155,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1155),r<1>(c,0x1145)));
wr<1>(c,0x1156,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1156),r<1>(c,0x1146)));
wr<1>(c,0x1157,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1157),r<1>(c,0x1147)));
return 0x71a5fe;}
case 0x71a5fe:{ // PADDB MM6,MM4
wr<1>(c,0x1160,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1160),r<1>(c,0x1140)));
wr<1>(c,0x1161,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1161),r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1162),r<1>(c,0x1142)));
wr<1>(c,0x1163,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1163),r<1>(c,0x1143)));
wr<1>(c,0x1164,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1164),r<1>(c,0x1144)));
wr<1>(c,0x1165,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1165),r<1>(c,0x1145)));
wr<1>(c,0x1166,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1166),r<1>(c,0x1146)));
wr<1>(c,0x1167,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1167),r<1>(c,0x1147)));
return 0x71a601;}
case 0x71a601:{ // MOVQ MM1,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a604;}
case 0x71a604:{ // PSRAW MM3,0x1
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x1ull}));
return 0x71a608;}
case 0x71a608:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x71a60c;}
case 0x71a60c:{ // MOVQ MM7,qword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a610;}
case 0x71a610:{ // PACKSSWB MM3,MM2
wr<8>(c,0x1130,user_op(c,524424,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x71a613;}
case 0x71a613:{ // PSUBB MM1,MM4
wr<1>(c,0x1110,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1140)));
wr<1>(c,0x1111,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1142)));
wr<1>(c,0x1113,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1143)));
wr<1>(c,0x1114,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1144)));
wr<1>(c,0x1115,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1145)));
wr<1>(c,0x1116,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1146)));
wr<1>(c,0x1117,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1147)));
return 0x71a616;}
case 0x71a616:{ // PANDN MM0,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1100)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x71a619;}
case 0x71a619:{ // PSUBB MM7,MM4
wr<1>(c,0x1170,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1170),r<1>(c,0x1140)));
wr<1>(c,0x1171,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1171),r<1>(c,0x1141)));
wr<1>(c,0x1172,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1172),r<1>(c,0x1142)));
wr<1>(c,0x1173,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1173),r<1>(c,0x1143)));
wr<1>(c,0x1174,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1174),r<1>(c,0x1144)));
wr<1>(c,0x1175,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1175),r<1>(c,0x1145)));
wr<1>(c,0x1176,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1176),r<1>(c,0x1146)));
wr<1>(c,0x1177,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1177),r<1>(c,0x1147)));
return 0x71a61c;}
case 0x71a61c:{ // PSUBSB MM7,MM0
wr<8>(c,0x1170,user_op(c,524456,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71a61f;}
case 0x71a61f:{ // PADDSB MM0,MM1
wr<8>(c,0x1100,user_op(c,524429,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x71a622;}
case 0x71a622:{ // PADDB MM7,MM4
wr<1>(c,0x1170,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1170),r<1>(c,0x1140)));
wr<1>(c,0x1171,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1171),r<1>(c,0x1141)));
wr<1>(c,0x1172,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1172),r<1>(c,0x1142)));
wr<1>(c,0x1173,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1173),r<1>(c,0x1143)));
wr<1>(c,0x1174,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1174),r<1>(c,0x1144)));
wr<1>(c,0x1175,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1175),r<1>(c,0x1145)));
wr<1>(c,0x1176,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1176),r<1>(c,0x1146)));
wr<1>(c,0x1177,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1177),r<1>(c,0x1147)));
return 0x71a625;}
case 0x71a625:{ // PADDB MM0,MM4
wr<1>(c,0x1100,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1140)));
wr<1>(c,0x1101,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1142)));
wr<1>(c,0x1103,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1143)));
wr<1>(c,0x1104,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1144)));
wr<1>(c,0x1105,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1145)));
wr<1>(c,0x1106,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1146)));
wr<1>(c,0x1107,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1147)));
return 0x71a628;}
case 0x71a628:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a62b;}
case 0x71a62b:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a62e;}
case 0x71a62e:{ // PUNPCKLBW MM0,MM5
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71a631;}
case 0x71a631:{ // PUNPCKHBW MM4,MM5
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
return 0x71a634;}
case 0x71a634:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a637;}
case 0x71a637:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71a63a;}
case 0x71a63a:{ // PUNPCKHBW MM6,MM7
wr<1>(c,0x1160,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71a63d;}
case 0x71a63d:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a640;}
case 0x71a640:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71a643;}
case 0x71a643:{ // MOVD dword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a647;}
case 0x71a647:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71a64a;}
case 0x71a64a:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x71a64e;}
case 0x71a64e:{ // MOVD dword ptr [ESI],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0x17200));
return 0x71a651;}
case 0x71a651:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a654;}
case 0x71a654:{ // PUNPCKLWD MM4,MM6
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x71a657;}
case 0x71a657:{ // MOVD dword ptr [ESI + EDX*0x1],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a65b;}
case 0x71a65b:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x71a65f;}
case 0x71a65f:{ // PUNPCKHWD MM5,MM6
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x71a662;}
case 0x71a662:{ // MOVD dword ptr [ESI + EDX*0x2],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a666;}
case 0x71a666:{ // LEA ESI,[ESI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a669;}
case 0x71a669:{ // MOVD dword ptr [ESI + ECX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1140),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a66d;}
case 0x71a66d:{ // PSRLQ MM4,0x20
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x20ull));
return 0x71a671;}
case 0x71a671:{ // MOVD dword ptr [ESI],MM4
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1140),0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0x17200));
return 0x71a674;}
case 0x71a674:{ // MOVD dword ptr [ESI + EDX*0x1],MM5
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a678;}
case 0x71a678:{ // PSRLQ MM5,0x20
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x20ull));
return 0x71a67c;}
case 0x71a67c:{ // MOVD dword ptr [ESI + EDX*0x2],MM5
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71a680;}
case 0x71a680:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a681;}
case 0x71a681:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a682;}
case 0x71a682:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x71a684;}
case 0x71a684:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a685;}
case 0x71a685:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71a687;}
case 0x71a687:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a688;}
case 0x71a688:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a689;}
case 0x71a689:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a68a;}
case 0x71a68a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a68c;}
case 0x71a68c:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a68f;}
case 0x71a68f:{ // MOV EAX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a692;}
case 0x71a692:{ // MOV ECX,dword ptr [0x008b9c4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8b9c4c)));
return 0x71a698;}
case 0x71a698:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a69b;}
case 0x71a69b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a69c;}
case 0x71a69c:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a69f;}
case 0x71a69f:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a6a2;}
case 0x71a6a2:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a6a4;}
case 0x71a6a4:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a6a7;}
case 0x71a6a7:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a6aa;}
case 0x71a6aa:{ // SUB ECX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a6ac;}
case 0x71a6ac:{ // MOVQ MM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a6af;}
case 0x71a6af:{ // MOVQ MM7,qword ptr [0x007c67b0]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7c67b0)));
return 0x71a6b6;}
case 0x71a6b6:{ // MOVQ MM0,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a6ba;}
case 0x71a6ba:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a6bd;}
case 0x71a6bd:{ // MOVQ MM5,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a6c1;}
case 0x71a6c1:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a6c4;}
case 0x71a6c4:{ // MOVQ MM1,qword ptr [0x007c6770]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7c6770)));
return 0x71a6cb;}
case 0x71a6cb:{ // PSUBB MM0,MM5
wr<1>(c,0x1100,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1150)));
wr<1>(c,0x1101,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1151)));
wr<1>(c,0x1102,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1152)));
wr<1>(c,0x1103,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1153)));
wr<1>(c,0x1104,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1154)));
wr<1>(c,0x1105,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1155)));
wr<1>(c,0x1106,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1156)));
wr<1>(c,0x1107,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1157)));
return 0x71a6ce;}
case 0x71a6ce:{ // PCMPGTB MM1,MM0
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1100),r<1>(c,0x1110)));
wr<1>(c,0x1110,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1101),r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1102),r<1>(c,0x1112)));
wr<1>(c,0x1112,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1103),r<1>(c,0x1113)));
wr<1>(c,0x1113,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1104),r<1>(c,0x1114)));
wr<1>(c,0x1114,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1105),r<1>(c,0x1115)));
wr<1>(c,0x1115,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1106),r<1>(c,0x1116)));
wr<1>(c,0x1116,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1107),r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a6d1;}
case 0x71a6d1:{ // PCMPGTB MM0,MM7
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1170),r<1>(c,0x1100)));
wr<1>(c,0x1100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1171),r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1172),r<1>(c,0x1102)));
wr<1>(c,0x1102,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1173),r<1>(c,0x1103)));
wr<1>(c,0x1103,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1174),r<1>(c,0x1104)));
wr<1>(c,0x1104,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1175),r<1>(c,0x1105)));
wr<1>(c,0x1105,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1176),r<1>(c,0x1106)));
wr<1>(c,0x1106,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1177),r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a6d4;}
case 0x71a6d4:{ // MOVQ MM3,qword ptr [0x007c6770]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7c6770)));
return 0x71a6db;}
case 0x71a6db:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71a6de;}
case 0x71a6de:{ // MOVQ MM1,MM7
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71a6e1;}
case 0x71a6e1:{ // MOVQ MM7,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a6e5;}
case 0x71a6e5:{ // PSUBB MM2,MM7
wr<1>(c,0x1120,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1170)));
wr<1>(c,0x1121,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1172)));
wr<1>(c,0x1123,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1173)));
wr<1>(c,0x1124,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1174)));
wr<1>(c,0x1125,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1175)));
wr<1>(c,0x1126,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1176)));
wr<1>(c,0x1127,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1177)));
return 0x71a6e8;}
case 0x71a6e8:{ // PCMPGTB MM3,MM2
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1130)));
wr<1>(c,0x1130,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1132)));
wr<1>(c,0x1132,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1133)));
wr<1>(c,0x1133,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1134)));
wr<1>(c,0x1134,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1135)));
wr<1>(c,0x1135,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1136)));
wr<1>(c,0x1136,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a6eb;}
case 0x71a6eb:{ // PCMPGTB MM2,MM1
wu<1>(c,0xfed00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1120)));
wr<1>(c,0x1120,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfed00),0xffull));
wu<1>(c,0xfef00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xfef00),0xffull));
wu<1>(c,0xff100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1122)));
wr<1>(c,0x1122,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff100),0xffull));
wu<1>(c,0xff300,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1123)));
wr<1>(c,0x1123,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff300),0xffull));
wu<1>(c,0xff500,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1124)));
wr<1>(c,0x1124,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff500),0xffull));
wu<1>(c,0xff700,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1125)));
wr<1>(c,0x1125,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff700),0xffull));
wu<1>(c,0xff900,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1126)));
wr<1>(c,0x1126,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xff900),0xffull));
wu<1>(c,0xffb00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xffb00),0xffull));
return 0x71a6ee;}
case 0x71a6ee:{ // POR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x71a6f1;}
case 0x71a6f1:{ // MOVQ MM3,qword ptr [0x007c67c0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7c67c0)));
return 0x71a6f8;}
case 0x71a6f8:{ // POR MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71a6fb;}
case 0x71a6fb:{ // PXOR MM1,MM1
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1110)));
return 0x71a6fe;}
case 0x71a6fe:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71a701;}
case 0x71a701:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a704;}
case 0x71a704:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a707;}
case 0x71a707:{ // PUNPCKLBW MM3,MM1
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a70a;}
case 0x71a70a:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71a70d;}
case 0x71a70d:{ // PUNPCKHBW MM5,MM1
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a710;}
case 0x71a710:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a713;}
case 0x71a713:{ // PUNPCKHBW MM6,MM1
wr<1>(c,0x1160,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a716;}
case 0x71a716:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x71a719;}
case 0x71a719:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x71a71c;}
case 0x71a71c:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a71f;}
case 0x71a71f:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a722;}
case 0x71a722:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a725;}
case 0x71a725:{ // PADDW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71a728;}
case 0x71a728:{ // PUNPCKLBW MM3,MM1
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a72b;}
case 0x71a72b:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71a72e;}
case 0x71a72e:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a731;}
case 0x71a731:{ // MOVQ MM6,MM7
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71a734;}
case 0x71a734:{ // PUNPCKLBW MM7,MM1
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71a737;}
case 0x71a737:{ // PUNPCKHBW MM6,MM1
wr<1>(c,0x1160,eval<Op::COPY,1,1>(r<1>(c,0x1164)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1165)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1166)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1167)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71a73a;}
case 0x71a73a:{ // PSUBW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x71a73d;}
case 0x71a73d:{ // PUNPCKLBW MM1,MM0
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a740;}
case 0x71a740:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a743;}
case 0x71a743:{ // PSRAW MM1,0x8
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x8ull}));
return 0x71a747;}
case 0x71a747:{ // PUNPCKHBW MM7,MM0
wr<1>(c,0x1170,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
return 0x71a74a;}
case 0x71a74a:{ // PSUBW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71a74d;}
case 0x71a74d:{ // PSRAW MM7,0x8
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x8ull}));
return 0x71a751;}
case 0x71a751:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71a754;}
case 0x71a754:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71a757;}
case 0x71a757:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71a75a;}
case 0x71a75a:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71a75d;}
case 0x71a75d:{ // PADDW MM2,qword ptr [0x007c6780]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6780)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x71a764;}
case 0x71a764:{ // PADDW MM4,qword ptr [0x007c6780]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6780)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71a76b;}
case 0x71a76b:{ // MOVD MM1,EAX
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x71a76e;}
case 0x71a76e:{ // PSRAW MM2,0x3
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x3ull}));
return 0x71a772;}
case 0x71a772:{ // PSRAW MM4,0x3
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x3ull}));
return 0x71a776;}
case 0x71a776:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a779;}
case 0x71a779:{ // PUNPCKLWD MM1,MM1
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x71a77c;}
case 0x71a77c:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71a77f;}
case 0x71a77f:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x71a782;}
case 0x71a782:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x71a786;}
case 0x71a786:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a789;}
case 0x71a789:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x71a78d;}
case 0x71a78d:{ // PXOR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71a790;}
case 0x71a790:{ // PSUBSW MM3,MM2
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x71a793;}
case 0x71a793:{ // PXOR MM5,MM4
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1140)));
return 0x71a796;}
case 0x71a796:{ // PSUBSW MM5,MM4
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x71a799;}
case 0x71a799:{ // POR MM2,qword ptr [0x007c6790]
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7c6790)));
return 0x71a7a0;}
case 0x71a7a0:{ // POR MM4,qword ptr [0x007c6790]
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),m<8>(c,0x7c6790)));
return 0x71a7a7;}
case 0x71a7a7:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71a7aa;}
case 0x71a7aa:{ // PSUBUSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x71a7ad;}
case 0x71a7ad:{ // PSUBUSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71a7b0;}
case 0x71a7b0:{ // POR MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71a7b3;}
case 0x71a7b3:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a7b6;}
case 0x71a7b6:{ // PSUBUSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x71a7b9;}
case 0x71a7b9:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a7bc;}
case 0x71a7bc:{ // PMULLW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71a7bf;}
case 0x71a7bf:{ // PSUBUSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71a7c2;}
case 0x71a7c2:{ // PSUBUSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71a7c5;}
case 0x71a7c5:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71a7c8;}
case 0x71a7c8:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71a7cb;}
case 0x71a7cb:{ // PSUBUSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524459,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71a7ce;}
case 0x71a7ce:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71a7d1;}
case 0x71a7d1:{ // MOVQ MM5,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a7d5;}
case 0x71a7d5:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71a7d8;}
case 0x71a7d8:{ // MOVQ MM7,qword ptr [0x007c67c0]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7c67c0)));
return 0x71a7df;}
case 0x71a7df:{ // PACKSSWB MM2,MM4
wr<8>(c,0x1120,user_op(c,524424,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x71a7e2;}
case 0x71a7e2:{ // MOVQ MM6,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a7e5;}
case 0x71a7e5:{ // PSUBB MM5,MM7
wr<1>(c,0x1150,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1150),r<1>(c,0x1170)));
wr<1>(c,0x1151,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1151),r<1>(c,0x1171)));
wr<1>(c,0x1152,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1152),r<1>(c,0x1172)));
wr<1>(c,0x1153,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1153),r<1>(c,0x1173)));
wr<1>(c,0x1154,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1154),r<1>(c,0x1174)));
wr<1>(c,0x1155,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1155),r<1>(c,0x1175)));
wr<1>(c,0x1156,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1156),r<1>(c,0x1176)));
wr<1>(c,0x1157,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1157),r<1>(c,0x1177)));
return 0x71a7e8;}
case 0x71a7e8:{ // PSUBB MM6,MM7
wr<1>(c,0x1160,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1160),r<1>(c,0x1170)));
wr<1>(c,0x1161,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1161),r<1>(c,0x1171)));
wr<1>(c,0x1162,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1162),r<1>(c,0x1172)));
wr<1>(c,0x1163,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1163),r<1>(c,0x1173)));
wr<1>(c,0x1164,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1164),r<1>(c,0x1174)));
wr<1>(c,0x1165,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1165),r<1>(c,0x1175)));
wr<1>(c,0x1166,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1166),r<1>(c,0x1176)));
wr<1>(c,0x1167,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1167),r<1>(c,0x1177)));
return 0x71a7eb;}
case 0x71a7eb:{ // PADDSB MM5,MM2
wr<8>(c,0x1150,user_op(c,524429,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x71a7ee;}
case 0x71a7ee:{ // PSUBSB MM6,MM2
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71a7f1;}
case 0x71a7f1:{ // PADDB MM5,MM7
wr<1>(c,0x1150,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1150),r<1>(c,0x1170)));
wr<1>(c,0x1151,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1151),r<1>(c,0x1171)));
wr<1>(c,0x1152,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1152),r<1>(c,0x1172)));
wr<1>(c,0x1153,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1153),r<1>(c,0x1173)));
wr<1>(c,0x1154,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1154),r<1>(c,0x1174)));
wr<1>(c,0x1155,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1155),r<1>(c,0x1175)));
wr<1>(c,0x1156,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1156),r<1>(c,0x1176)));
wr<1>(c,0x1157,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1157),r<1>(c,0x1177)));
return 0x71a7f4;}
case 0x71a7f4:{ // PADDB MM6,MM7
wr<1>(c,0x1160,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1160),r<1>(c,0x1170)));
wr<1>(c,0x1161,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1161),r<1>(c,0x1171)));
wr<1>(c,0x1162,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1162),r<1>(c,0x1172)));
wr<1>(c,0x1163,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1163),r<1>(c,0x1173)));
wr<1>(c,0x1164,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1164),r<1>(c,0x1174)));
wr<1>(c,0x1165,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1165),r<1>(c,0x1175)));
wr<1>(c,0x1166,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1166),r<1>(c,0x1176)));
wr<1>(c,0x1167,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1167),r<1>(c,0x1177)));
return 0x71a7f7;}
case 0x71a7f7:{ // MOVQ qword ptr [ESI + ECX*0x1],MM5
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a7fb;}
case 0x71a7fb:{ // PSRAW MM1,0x1
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x1ull}));
return 0x71a7ff;}
case 0x71a7ff:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x71a803;}
case 0x71a803:{ // MOVQ qword ptr [ESI],MM6
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x71a806;}
case 0x71a806:{ // MOVQ MM2,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a80a;}
case 0x71a80a:{ // PACKSSWB MM1,MM4
wr<8>(c,0x1110,user_op(c,524424,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x71a80d;}
case 0x71a80d:{ // MOVQ MM3,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a811;}
case 0x71a811:{ // PANDN MM0,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1100)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x71a814;}
case 0x71a814:{ // PSUBB MM2,MM7
wr<1>(c,0x1120,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1170)));
wr<1>(c,0x1121,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1172)));
wr<1>(c,0x1123,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1173)));
wr<1>(c,0x1124,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1174)));
wr<1>(c,0x1125,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1175)));
wr<1>(c,0x1126,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1176)));
wr<1>(c,0x1127,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1177)));
return 0x71a817;}
case 0x71a817:{ // PSUBB MM3,MM7
wr<1>(c,0x1130,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1130),r<1>(c,0x1170)));
wr<1>(c,0x1131,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1131),r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1132),r<1>(c,0x1172)));
wr<1>(c,0x1133,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1133),r<1>(c,0x1173)));
wr<1>(c,0x1134,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1134),r<1>(c,0x1174)));
wr<1>(c,0x1135,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1135),r<1>(c,0x1175)));
wr<1>(c,0x1136,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1136),r<1>(c,0x1176)));
wr<1>(c,0x1137,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x1137),r<1>(c,0x1177)));
return 0x71a81a;}
case 0x71a81a:{ // PADDSB MM2,MM0
wr<8>(c,0x1120,user_op(c,524429,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x71a81d;}
case 0x71a81d:{ // PADDB MM2,MM7
wr<1>(c,0x1120,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1120),r<1>(c,0x1170)));
wr<1>(c,0x1121,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1121),r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1122),r<1>(c,0x1172)));
wr<1>(c,0x1123,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1123),r<1>(c,0x1173)));
wr<1>(c,0x1124,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1124),r<1>(c,0x1174)));
wr<1>(c,0x1125,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1125),r<1>(c,0x1175)));
wr<1>(c,0x1126,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1126),r<1>(c,0x1176)));
wr<1>(c,0x1127,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1127),r<1>(c,0x1177)));
return 0x71a820;}
case 0x71a820:{ // MOVQ qword ptr [ESI + ECX*0x2],MM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a824;}
case 0x71a824:{ // PSUBSB MM3,MM0
wr<8>(c,0x1130,user_op(c,524456,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71a827;}
case 0x71a827:{ // PADDB MM3,MM7
wr<1>(c,0x1130,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1130),r<1>(c,0x1170)));
wr<1>(c,0x1131,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1131),r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1132),r<1>(c,0x1172)));
wr<1>(c,0x1133,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1133),r<1>(c,0x1173)));
wr<1>(c,0x1134,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1134),r<1>(c,0x1174)));
wr<1>(c,0x1135,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1135),r<1>(c,0x1175)));
wr<1>(c,0x1136,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1136),r<1>(c,0x1176)));
wr<1>(c,0x1137,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1137),r<1>(c,0x1177)));
return 0x71a82a;}
case 0x71a82a:{ // MOVQ qword ptr [ESI + EDX*0x1],MM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71a82e;}
case 0x71a82e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a82f;}
case 0x71a82f:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71a830;}
case 0x71a830:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71a831;}
case 0x71a831:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a832;}
case 0x71a832:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a834;}
case 0x71a834:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a835;}
case 0x71a835:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a836;}
case 0x71a836:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a839;}
case 0x71a839:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a83c;}
case 0x71a83c:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a83d;}
case 0x71a83d:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a840;}
case 0x71a840:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x71a844;}
case 0x71a844:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71a846;}
case 0x71a846:{ // SUB ESP,0x1b4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1b4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1b4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1b4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a84c;}
case 0x71a84c:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a84d;}
case 0x71a84d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a84e;}
case 0x71a84e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a84f;}
case 0x71a84f:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a852;}
case 0x71a852:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a855;}
case 0x71a855:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a858;}
case 0x71a858:{ // MOV EAX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a85b;}
case 0x71a85b:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a85e;}
case 0x71a85e:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a861;}
case 0x71a861:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a864;}
case 0x71a864:{ // LEA EAX,[EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71a86a;}
case 0x71a86a:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a86d;}
case 0x71a86d:{ // LEA EAX,[EBP + 0xfffffe50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe50ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71a873;}
case 0x71a873:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a876;}
case 0x71a876:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a879;}
case 0x71a879:{ // SHL EAX,0x2
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
return 0x71a87c;}
case 0x71a87c:{ // MOV ECX,dword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a87f;}
case 0x71a87f:{ // MOV EAX,dword ptr [EAX + 0x817048]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x817048ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a885;}
case 0x71a885:{ // MOV dword ptr [EBP + -0x1c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a888;}
case 0x71a888:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71a88b;}
case 0x71a88b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a88c;}
case 0x71a88c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a88d;}
case 0x71a88d:{ // MOV ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a890;}
case 0x71a890:{ // MOV EDI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a893;}
case 0x71a893:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a894;}
case 0x71a894:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a895;}
case 0x71a895:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a898;}
case 0x71a898:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a89a;}
case 0x71a89a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a89b;}
case 0x71a89b:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a89c;}
case 0x71a89c:{ // MOV EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a89f;}
case 0x71a89f:{ // MOV EBX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a8a2;}
case 0x71a8a2:{ // MOVD MM0,EAX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x71a8a5;}
case 0x71a8a5:{ // MOVD MM2,EBX
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(r<4>(c,0xc)));
return 0x71a8a8;}
case 0x71a8a8:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71a8a9;}
case 0x71a8a9:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a8ac;}
case 0x71a8ac:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a8ae;}
case 0x71a8ae:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71a8b1;}
case 0x71a8b1:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71a8b4;}
case 0x71a8b4:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a8b7;}
case 0x71a8b7:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71a8ba;}
case 0x71a8ba:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71a8bd;}
case 0x71a8bd:{ // LEA EBX,[ESI + ECX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71a8c0;}
case 0x71a8c0:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71a8c3;}
case 0x71a8c3:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a8c6;}
case 0x71a8c6:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71a8c9;}
case 0x71a8c9:{ // PADDB MM1,MM0
wr<1>(c,0x1110,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1100)));
wr<1>(c,0x1111,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1102)));
wr<1>(c,0x1113,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1103)));
wr<1>(c,0x1114,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1104)));
wr<1>(c,0x1115,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1105)));
wr<1>(c,0x1116,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1106)));
wr<1>(c,0x1117,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1107)));
return 0x71a8cc;}
case 0x71a8cc:{ // PADDB MM1,MM0
wr<1>(c,0x1110,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1100)));
wr<1>(c,0x1111,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1102)));
wr<1>(c,0x1113,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1103)));
wr<1>(c,0x1114,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1104)));
wr<1>(c,0x1115,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1105)));
wr<1>(c,0x1116,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1106)));
wr<1>(c,0x1117,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1107)));
return 0x71a8cf;}
case 0x71a8cf:{ // PADDUSB MM1,qword ptr [0x00817790]
wr<8>(c,0x1110,user_op(c,524431,{r<8>(c,0x1110),m<8>(c,0x817790)}));
return 0x71a8d6;}
case 0x71a8d6:{ // PADDB MM0,qword ptr [0x00817760]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817760)));
wr<1>(c,0x1100,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1100),u<1>(c,0xe2d00)));
wr<1>(c,0x1101,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1101),u<1>(c,0xe2d01)));
wr<1>(c,0x1102,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1102),u<1>(c,0xe2d02)));
wr<1>(c,0x1103,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1103),u<1>(c,0xe2d03)));
wr<1>(c,0x1104,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1104),u<1>(c,0xe2d04)));
wr<1>(c,0x1105,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1105),u<1>(c,0xe2d05)));
wr<1>(c,0x1106,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1106),u<1>(c,0xe2d06)));
wr<1>(c,0x1107,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1107),u<1>(c,0xe2d07)));
return 0x71a8dd;}
case 0x71a8dd:{ // PSUBUSB MM1,qword ptr [0x00817790]
wr<8>(c,0x1110,user_op(c,524458,{r<8>(c,0x1110),m<8>(c,0x817790)}));
return 0x71a8e4;}
case 0x71a8e4:{ // MOVQ MM3,qword ptr [0x00817770]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x817770)));
return 0x71a8eb;}
case 0x71a8eb:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x71a8ee;}
case 0x71a8ee:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a8f1;}
case 0x71a8f1:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71a8f5;}
case 0x71a8f5:{ // MOVQ MM4,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a8f9;}
case 0x71a8f9:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a8fc;}
case 0x71a8fc:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71a8ff;}
case 0x71a8ff:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71a902;}
case 0x71a902:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71a905;}
case 0x71a905:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a908;}
case 0x71a908:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a90b;}
case 0x71a90b:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71a90e;}
case 0x71a90e:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71a915;}
case 0x71a915:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71a91c;}
case 0x71a91c:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71a91f;}
case 0x71a91f:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71a922;}
case 0x71a922:{ // PCMPGTB MM3,MM4
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
return 0x71a925;}
case 0x71a925:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71a928;}
case 0x71a928:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a92b;}
case 0x71a92b:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a92e;}
case 0x71a92e:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71a931;}
case 0x71a931:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a934;}
case 0x71a934:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71a938;}
case 0x71a938:{ // MOVQ MM4,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a93c;}
case 0x71a93c:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71a940;}
case 0x71a940:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a943;}
case 0x71a943:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71a948;}
case 0x71a948:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71a94b;}
case 0x71a94b:{ // MOVDQA xmmword ptr [EDI],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x71a94f;}
case 0x71a94f:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71a952;}
case 0x71a952:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71a955;}
case 0x71a955:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a958;}
case 0x71a958:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a95b;}
case 0x71a95b:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71a95e;}
case 0x71a95e:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71a965;}
case 0x71a965:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71a96c;}
case 0x71a96c:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71a96f;}
case 0x71a96f:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71a972;}
case 0x71a972:{ // PCMPGTB MM3,MM4
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
return 0x71a975;}
case 0x71a975:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71a978;}
case 0x71a978:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a97b;}
case 0x71a97b:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a97e;}
case 0x71a97e:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71a981;}
case 0x71a981:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a984;}
case 0x71a984:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71a988;}
case 0x71a988:{ // MOVQ MM4,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a98c;}
case 0x71a98c:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71a990;}
case 0x71a990:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71a993;}
case 0x71a993:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71a997;}
case 0x71a997:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71a99a;}
case 0x71a99a:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71a99f;}
case 0x71a99f:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71a9a2;}
case 0x71a9a2:{ // MOVDQA xmmword ptr [EAX],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x71a9a6;}
case 0x71a9a6:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71a9a9;}
case 0x71a9a9:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a9ac;}
case 0x71a9ac:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71a9b0;}
case 0x71a9b0:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71a9b3;}
case 0x71a9b3:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71a9b6;}
case 0x71a9b6:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71a9bd;}
case 0x71a9bd:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71a9c4;}
case 0x71a9c4:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71a9c7;}
case 0x71a9c7:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71a9ca;}
case 0x71a9ca:{ // PCMPGTB MM3,MM4
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
return 0x71a9cd;}
case 0x71a9cd:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71a9d0;}
case 0x71a9d0:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a9d3;}
case 0x71a9d3:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71a9d6;}
case 0x71a9d6:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71a9d9;}
case 0x71a9d9:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a9db;}
case 0x71a9db:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71a9df;}
case 0x71a9df:{ // ADD EDI,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a9e2;}
case 0x71a9e2:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71a9e6;}
case 0x71a9e6:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a9e9;}
case 0x71a9e9:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71a9ee;}
case 0x71a9ee:{ // CMP ESI,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71a9f0;}
case 0x71a9f0:{ // MOVDQA xmmword ptr [EAX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71a9f5;}
case 0x71a9f5:{ // JNZ 0x0071a8ee
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71a8ee;}
return 0x71a9fb;}
case 0x71a9fb:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71a9fe;}
case 0x71a9fe:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71aa02;}
case 0x71aa02:{ // MOVQ MM4,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71aa06;}
case 0x71aa06:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71aa09;}
case 0x71aa09:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71aa0c;}
case 0x71aa0c:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71aa0f;}
case 0x71aa0f:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71aa12;}
case 0x71aa12:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71aa15;}
case 0x71aa15:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71aa18;}
case 0x71aa18:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71aa1b;}
case 0x71aa1b:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71aa22;}
case 0x71aa22:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71aa29;}
case 0x71aa29:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71aa2c;}
case 0x71aa2c:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71aa2f;}
case 0x71aa2f:{ // PCMPGTB MM3,MM4
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
return 0x71aa32;}
case 0x71aa32:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71aa35;}
case 0x71aa35:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71aa38;}
case 0x71aa38:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71aa3b;}
case 0x71aa3b:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71aa3e;}
case 0x71aa3e:{ // MOVQ2DQ XMM6,MM6
wr<16>(c,0x1380,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71aa42;}
case 0x71aa42:{ // PUNPCKLBW XMM7,XMM6
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x71aa46;}
case 0x71aa46:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71aa4b;}
case 0x71aa4b:{ // MOVDQA xmmword ptr [EDI],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x71aa4f;}
case 0x71aa4f:{ // MOV ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71aa52;}
case 0x71aa52:{ // MOV EDI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71aa55;}
case 0x71aa55:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71aa58;}
case 0x71aa58:{ // MOV EBX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71aa5b;}
case 0x71aa5b:{ // MOV EBP,0x8
wr<4>(c,0x14,eval<Op::COPY,4,4>(0x8ull));
return 0x71aa60;}
case 0x71aa60:{ // MOVQ XMM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71aa65;}
case 0x71aa65:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71aa69;}
case 0x71aa69:{ // MOVDQA XMM4,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71aa6d;}
case 0x71aa6d:{ // PUNPCKLBW XMM0,XMM7
wr<1>(c,0x120f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71aa71;}
case 0x71aa71:{ // MOVQ XMM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71aa76;}
case 0x71aa76:{ // PMULLW XMM0,XMM4
wr<2>(c,0x1200,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1300)));
wr<2>(c,0x1202,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1302)));
wr<2>(c,0x1204,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1304)));
wr<2>(c,0x1206,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1306)));
wr<2>(c,0x1208,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1308)));
wr<2>(c,0x120a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120a),r<2>(c,0x130a)));
wr<2>(c,0x120c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120c),r<2>(c,0x130c)));
wr<2>(c,0x120e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120e),r<2>(c,0x130e)));
return 0x71aa7a;}
case 0x71aa7a:{ // MOVDQA XMM6,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71aa7f;}
case 0x71aa7f:{ // PUNPCKLBW XMM2,XMM7
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71aa83;}
case 0x71aa83:{ // MOVQ XMM1,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71aa88;}
case 0x71aa88:{ // PMULLW XMM2,XMM6
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1380)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1382)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1384)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1386)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1388)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x138a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x138c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x138e)));
return 0x71aa8c;}
case 0x71aa8c:{ // MOVDQA XMM3,xmmword ptr [EBX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0xc)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71aa90;}
case 0x71aa90:{ // PUNPCKLBW XMM1,XMM7
wr<1>(c,0x124f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71aa94;}
case 0x71aa94:{ // MOVQ XMM5,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71aa99;}
case 0x71aa99:{ // PMULLW XMM1,XMM3
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x12c0)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x12c2)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x12c4)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x12c6)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x12c8)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x12ca)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x12cc)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x12ce)));
return 0x71aa9d;}
case 0x71aa9d:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x71aaa1;}
case 0x71aaa1:{ // PUNPCKLBW XMM5,XMM7
wr<1>(c,0x134f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x134e,eval<Op::COPY,1,1>(r<1>(c,0x1347)));
wr<1>(c,0x134d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x134c,eval<Op::COPY,1,1>(r<1>(c,0x1346)));
wr<1>(c,0x134b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x134a,eval<Op::COPY,1,1>(r<1>(c,0x1345)));
wr<1>(c,0x1349,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1348,eval<Op::COPY,1,1>(r<1>(c,0x1344)));
wr<1>(c,0x1347,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1346,eval<Op::COPY,1,1>(r<1>(c,0x1343)));
wr<1>(c,0x1345,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1344,eval<Op::COPY,1,1>(r<1>(c,0x1342)));
wr<1>(c,0x1343,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1342,eval<Op::COPY,1,1>(r<1>(c,0x1341)));
wr<1>(c,0x1341,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71aaa5;}
case 0x71aaa5:{ // MOVDQA XMM6,xmmword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71aaad;}
case 0x71aaad:{ // PMULLW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x71aab1;}
case 0x71aab1:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71aab5;}
case 0x71aab5:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71aab9;}
case 0x71aab9:{ // PADDW XMM0,XMM1
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1240)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1244)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1246)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1248)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x124a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x124c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x124e)));
return 0x71aabd;}
case 0x71aabd:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x71aac1;}
case 0x71aac1:{ // MOVQ XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71aac5;}
case 0x71aac5:{ // PADDW XMM0,XMM5
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1340)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1342)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1344)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1346)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1348)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x134a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x134c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x134e)));
return 0x71aac9;}
case 0x71aac9:{ // MOVDQA XMM1,xmmword ptr [0x00817730]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x817730)));
return 0x71aad1;}
case 0x71aad1:{ // PUNPCKLBW XMM2,XMM7
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71aad5;}
case 0x71aad5:{ // PSUBW XMM1,XMM4
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1300)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1302)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1304)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1306)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1308)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x130a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x130c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x130e)));
return 0x71aad9;}
case 0x71aad9:{ // PMULLW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71aadd;}
case 0x71aadd:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71aadf;}
case 0x71aadf:{ // MOVDQA XMM6,xmmword ptr [0x00817740]
wr<16>(c,0x1380,eval<Op::COPY,16,16>(m<16>(c,0x817740)));
return 0x71aae7;}
case 0x71aae7:{ // MOVDQA XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71aaeb;}
case 0x71aaeb:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71aaee;}
case 0x71aaee:{ // PSLLW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048742,{r<16>(c,0x13c0),0x8ull}));
return 0x71aaf3;}
case 0x71aaf3:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71aaf7;}
case 0x71aaf7:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71aaf9;}
case 0x71aaf9:{ // PADDW XMM0,XMM6
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1380)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1382)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1384)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1386)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1388)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x138a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x138c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x138e)));
return 0x71aafd;}
case 0x71aafd:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab00;}
case 0x71ab00:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x71ab04;}
case 0x71ab04:{ // PSUBUSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048747,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71ab08;}
case 0x71ab08:{ // DEC EBP
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab09;}
case 0x71ab09:{ // PSRLW XMM0,0x7
wr<2>(c,0x1200,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1200),0x7ull));
wr<2>(c,0x1202,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1202),0x7ull));
wr<2>(c,0x1204,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1204),0x7ull));
wr<2>(c,0x1206,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1206),0x7ull));
wr<2>(c,0x1208,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1208),0x7ull));
wr<2>(c,0x120a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120a),0x7ull));
wr<2>(c,0x120c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120c),0x7ull));
wr<2>(c,0x120e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120e),0x7ull));
return 0x71ab0e;}
case 0x71ab0e:{ // PACKUSWB XMM0,XMM7
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1200,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71ab12;}
case 0x71ab12:{ // MOVQ qword ptr [EDI + EDX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71ab17;}
case 0x71ab17:{ // JNZ 0x0071aa60
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71aa60;}
return 0x71ab1d;}
case 0x71ab1d:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab1e;}
case 0x71ab1e:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab1f;}
case 0x71ab1f:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab20;}
case 0x71ab20:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab21;}
case 0x71ab21:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab22;}
case 0x71ab22:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab23;}
case 0x71ab23:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab24;}
case 0x71ab24:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab25;}
case 0x71ab25:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab26;}
case 0x71ab26:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab27;}
case 0x71ab27:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x71ab29;}
case 0x71ab29:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab2a;}
case 0x71ab2a:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71ab2c;}
case 0x71ab2c:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ab2d;}
case 0x71ab2d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ab2e;}
case 0x71ab2e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab2f;}
case 0x71ab2f:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71ab31;}
case 0x71ab31:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab32;}
case 0x71ab32:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab33;}
case 0x71ab33:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab36;}
case 0x71ab36:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab39;}
case 0x71ab39:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab3a;}
case 0x71ab3a:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab3d;}
case 0x71ab3d:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x71ab41;}
case 0x71ab41:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71ab43;}
case 0x71ab43:{ // SUB ESP,0x1b4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1b4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1b4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1b4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab49;}
case 0x71ab49:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab4a;}
case 0x71ab4a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab4b;}
case 0x71ab4b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab4c;}
case 0x71ab4c:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab4f;}
case 0x71ab4f:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab52;}
case 0x71ab52:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab55;}
case 0x71ab55:{ // MOV EAX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab58;}
case 0x71ab58:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab5b;}
case 0x71ab5b:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab5e;}
case 0x71ab5e:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab61;}
case 0x71ab61:{ // LEA EAX,[EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71ab67;}
case 0x71ab67:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab6a;}
case 0x71ab6a:{ // LEA EAX,[EBP + 0xfffffe50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe50ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71ab70;}
case 0x71ab70:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab73;}
case 0x71ab73:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab76;}
case 0x71ab76:{ // SHL EAX,0x2
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
return 0x71ab79;}
case 0x71ab79:{ // MOV ECX,dword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab7c;}
case 0x71ab7c:{ // MOV EAX,dword ptr [EAX + 0x817048]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x817048ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab82;}
case 0x71ab82:{ // MOV dword ptr [EBP + -0x1c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab85;}
case 0x71ab85:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ab88;}
case 0x71ab88:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab89;}
case 0x71ab89:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab8a;}
case 0x71ab8a:{ // MOV ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab8d;}
case 0x71ab8d:{ // MOV EDI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab90;}
case 0x71ab90:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab91;}
case 0x71ab91:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab92;}
case 0x71ab92:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab95;}
case 0x71ab95:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ab97;}
case 0x71ab97:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab98;}
case 0x71ab98:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ab99;}
case 0x71ab99:{ // MOV EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab9c;}
case 0x71ab9c:{ // MOV EBX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ab9f;}
case 0x71ab9f:{ // MOVD MM0,EAX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x71aba2;}
case 0x71aba2:{ // MOVD MM2,EBX
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(r<4>(c,0xc)));
return 0x71aba5;}
case 0x71aba5:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71aba6;}
case 0x71aba6:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71aba9;}
case 0x71aba9:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71abab;}
case 0x71abab:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71abae;}
case 0x71abae:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71abb1;}
case 0x71abb1:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71abb4;}
case 0x71abb4:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71abb7;}
case 0x71abb7:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71abba;}
case 0x71abba:{ // LEA EBX,[ESI + ECX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71abbd;}
case 0x71abbd:{ // PUNPCKLBW MM0,MM0
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71abc0;}
case 0x71abc0:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71abc3;}
case 0x71abc3:{ // PUNPCKLBW MM2,MM2
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1120)));
return 0x71abc6;}
case 0x71abc6:{ // PADDB MM1,MM0
wr<1>(c,0x1110,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1100)));
wr<1>(c,0x1111,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1102)));
wr<1>(c,0x1113,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1103)));
wr<1>(c,0x1114,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1104)));
wr<1>(c,0x1115,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1105)));
wr<1>(c,0x1116,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1106)));
wr<1>(c,0x1117,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1107)));
return 0x71abc9;}
case 0x71abc9:{ // PADDB MM1,MM0
wr<1>(c,0x1110,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1110),r<1>(c,0x1100)));
wr<1>(c,0x1111,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1111),r<1>(c,0x1101)));
wr<1>(c,0x1112,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1112),r<1>(c,0x1102)));
wr<1>(c,0x1113,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1113),r<1>(c,0x1103)));
wr<1>(c,0x1114,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1114),r<1>(c,0x1104)));
wr<1>(c,0x1115,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1115),r<1>(c,0x1105)));
wr<1>(c,0x1116,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1116),r<1>(c,0x1106)));
wr<1>(c,0x1117,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1117),r<1>(c,0x1107)));
return 0x71abcc;}
case 0x71abcc:{ // PADDUSB MM1,qword ptr [0x008177a0]
wr<8>(c,0x1110,user_op(c,524431,{r<8>(c,0x1110),m<8>(c,0x8177a0)}));
return 0x71abd3;}
case 0x71abd3:{ // PADDB MM0,qword ptr [0x00817760]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817760)));
wr<1>(c,0x1100,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1100),u<1>(c,0xe2d00)));
wr<1>(c,0x1101,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1101),u<1>(c,0xe2d01)));
wr<1>(c,0x1102,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1102),u<1>(c,0xe2d02)));
wr<1>(c,0x1103,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1103),u<1>(c,0xe2d03)));
wr<1>(c,0x1104,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1104),u<1>(c,0xe2d04)));
wr<1>(c,0x1105,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1105),u<1>(c,0xe2d05)));
wr<1>(c,0x1106,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1106),u<1>(c,0xe2d06)));
wr<1>(c,0x1107,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1107),u<1>(c,0xe2d07)));
return 0x71abda;}
case 0x71abda:{ // PSUBUSB MM1,qword ptr [0x008177a0]
wr<8>(c,0x1110,user_op(c,524458,{r<8>(c,0x1110),m<8>(c,0x8177a0)}));
return 0x71abe1;}
case 0x71abe1:{ // MOVQ MM3,qword ptr [0x00817770]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x817770)));
return 0x71abe8;}
case 0x71abe8:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x71abeb;}
case 0x71abeb:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71abee;}
case 0x71abee:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71abf2;}
case 0x71abf2:{ // MOVQ MM4,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71abf6;}
case 0x71abf6:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71abf9;}
case 0x71abf9:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71abfc;}
case 0x71abfc:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71abff;}
case 0x71abff:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71ac02;}
case 0x71ac02:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ac05;}
case 0x71ac05:{ // PADDUSB MM3,MM3
wr<8>(c,0x1130,user_op(c,524431,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ac08;}
case 0x71ac08:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ac0b;}
case 0x71ac0b:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ac0e;}
case 0x71ac0e:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71ac15;}
case 0x71ac15:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71ac1c;}
case 0x71ac1c:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71ac1f;}
case 0x71ac1f:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71ac22;}
case 0x71ac22:{ // PCMPGTB MM3,MM4
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
return 0x71ac25;}
case 0x71ac25:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71ac28;}
case 0x71ac28:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ac2b;}
case 0x71ac2b:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ac2e;}
case 0x71ac2e:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71ac31;}
case 0x71ac31:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ac34;}
case 0x71ac34:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71ac38;}
case 0x71ac38:{ // MOVQ MM4,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ac3c;}
case 0x71ac3c:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71ac40;}
case 0x71ac40:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71ac43;}
case 0x71ac43:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71ac48;}
case 0x71ac48:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ac4b;}
case 0x71ac4b:{ // MOVDQA xmmword ptr [EDI],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x71ac4f;}
case 0x71ac4f:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71ac52;}
case 0x71ac52:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71ac55;}
case 0x71ac55:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ac58;}
case 0x71ac58:{ // PADDUSB MM3,MM3
wr<8>(c,0x1130,user_op(c,524431,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ac5b;}
case 0x71ac5b:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ac5e;}
case 0x71ac5e:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ac61;}
case 0x71ac61:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71ac68;}
case 0x71ac68:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71ac6f;}
case 0x71ac6f:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71ac72;}
case 0x71ac72:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71ac75;}
case 0x71ac75:{ // PCMPGTB MM3,MM4
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
return 0x71ac78;}
case 0x71ac78:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71ac7b;}
case 0x71ac7b:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ac7e;}
case 0x71ac7e:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ac81;}
case 0x71ac81:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71ac84;}
case 0x71ac84:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ac87;}
case 0x71ac87:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71ac8b;}
case 0x71ac8b:{ // MOVQ MM4,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ac8f;}
case 0x71ac8f:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71ac93;}
case 0x71ac93:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71ac96;}
case 0x71ac96:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71ac9a;}
case 0x71ac9a:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ac9d;}
case 0x71ac9d:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71aca2;}
case 0x71aca2:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71aca5;}
case 0x71aca5:{ // MOVDQA xmmword ptr [EAX],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x71aca9;}
case 0x71aca9:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71acac;}
case 0x71acac:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71acaf;}
case 0x71acaf:{ // PADDUSB MM3,MM3
wr<8>(c,0x1130,user_op(c,524431,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71acb2;}
case 0x71acb2:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71acb6;}
case 0x71acb6:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71acb9;}
case 0x71acb9:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71acbc;}
case 0x71acbc:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71acc3;}
case 0x71acc3:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71acca;}
case 0x71acca:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71accd;}
case 0x71accd:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71acd0;}
case 0x71acd0:{ // PCMPGTB MM3,MM4
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
return 0x71acd3;}
case 0x71acd3:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71acd6;}
case 0x71acd6:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71acd9;}
case 0x71acd9:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71acdc;}
case 0x71acdc:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71acdf;}
case 0x71acdf:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ace1;}
case 0x71ace1:{ // MOVQ2DQ XMM0,MM6
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71ace5;}
case 0x71ace5:{ // ADD EDI,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x10ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ace8;}
case 0x71ace8:{ // PUNPCKLBW XMM7,XMM0
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1200)));
return 0x71acec;}
case 0x71acec:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71acef;}
case 0x71acef:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71acf4;}
case 0x71acf4:{ // CMP ESI,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71acf6;}
case 0x71acf6:{ // MOVDQA xmmword ptr [EAX + 0x70],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71acfb;}
case 0x71acfb:{ // JNZ 0x0071abeb
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71abeb;}
return 0x71ad01;}
case 0x71ad01:{ // MOVQ MM3,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ad04;}
case 0x71ad04:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71ad08;}
case 0x71ad08:{ // MOVQ MM4,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ad0c;}
case 0x71ad0c:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71ad0f;}
case 0x71ad0f:{ // PSUBUSB MM3,MM4
wr<8>(c,0x1130,user_op(c,524458,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ad12;}
case 0x71ad12:{ // PSUBUSB MM4,MM5
wr<8>(c,0x1140,user_op(c,524458,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71ad15;}
case 0x71ad15:{ // POR MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x71ad18;}
case 0x71ad18:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ad1b;}
case 0x71ad1b:{ // PADDUSB MM3,MM3
wr<8>(c,0x1130,user_op(c,524431,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ad1e;}
case 0x71ad1e:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ad21;}
case 0x71ad21:{ // PSUBUSB MM6,MM3
wr<8>(c,0x1160,user_op(c,524458,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ad24;}
case 0x71ad24:{ // MOVQ MM5,qword ptr [0x00817780]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x817780)));
return 0x71ad2b;}
case 0x71ad2b:{ // PADDB MM4,qword ptr [0x00817750]
wu<8>(c,0xe2d00,eval<Op::COPY,8,8>(m<8>(c,0x817750)));
wr<1>(c,0x1140,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1140),u<1>(c,0xe2d00)));
wr<1>(c,0x1141,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1141),u<1>(c,0xe2d01)));
wr<1>(c,0x1142,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1142),u<1>(c,0xe2d02)));
wr<1>(c,0x1143,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1143),u<1>(c,0xe2d03)));
wr<1>(c,0x1144,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1144),u<1>(c,0xe2d04)));
wr<1>(c,0x1145,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1145),u<1>(c,0xe2d05)));
wr<1>(c,0x1146,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1146),u<1>(c,0xe2d06)));
wr<1>(c,0x1147,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1147),u<1>(c,0xe2d07)));
return 0x71ad32;}
case 0x71ad32:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71ad35;}
case 0x71ad35:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71ad38;}
case 0x71ad38:{ // PCMPGTB MM3,MM4
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
return 0x71ad3b;}
case 0x71ad3b:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71ad3e;}
case 0x71ad3e:{ // PADDSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524429,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ad41;}
case 0x71ad41:{ // PSUBSB MM6,MM1
wr<8>(c,0x1160,user_op(c,524456,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x71ad44;}
case 0x71ad44:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71ad47;}
case 0x71ad47:{ // MOVQ2DQ XMM6,MM6
wr<16>(c,0x1380,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71ad4b;}
case 0x71ad4b:{ // PUNPCKLBW XMM7,XMM6
wr<1>(c,0x13cf,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x13ce,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x13cd,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x13cc,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x13cb,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x13ca,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x13c9,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x13c8,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x13c7,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x13c6,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x13c5,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x13c4,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x13c3,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x13c2,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x13c1,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x71ad4f;}
case 0x71ad4f:{ // PSRAW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0x8ull}));
return 0x71ad54;}
case 0x71ad54:{ // MOVDQA xmmword ptr [EDI],XMM7
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x71ad58;}
case 0x71ad58:{ // MOV ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ad5b;}
case 0x71ad5b:{ // MOV EDI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ad5e;}
case 0x71ad5e:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ad61;}
case 0x71ad61:{ // MOV EBX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ad64;}
case 0x71ad64:{ // MOV EBP,0x8
wr<4>(c,0x14,eval<Op::COPY,4,4>(0x8ull));
return 0x71ad69;}
case 0x71ad69:{ // MOVQ XMM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71ad6e;}
case 0x71ad6e:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x71ad72;}
case 0x71ad72:{ // MOVDQA XMM4,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71ad76;}
case 0x71ad76:{ // PUNPCKLBW XMM0,XMM7
wr<1>(c,0x120f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71ad7a;}
case 0x71ad7a:{ // MOVQ XMM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71ad7f;}
case 0x71ad7f:{ // PMULLW XMM0,XMM4
wr<2>(c,0x1200,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1300)));
wr<2>(c,0x1202,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1302)));
wr<2>(c,0x1204,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1304)));
wr<2>(c,0x1206,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1306)));
wr<2>(c,0x1208,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1308)));
wr<2>(c,0x120a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120a),r<2>(c,0x130a)));
wr<2>(c,0x120c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120c),r<2>(c,0x130c)));
wr<2>(c,0x120e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x120e),r<2>(c,0x130e)));
return 0x71ad83;}
case 0x71ad83:{ // MOVDQA XMM6,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71ad88;}
case 0x71ad88:{ // PUNPCKLBW XMM2,XMM7
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71ad8c;}
case 0x71ad8c:{ // MOVQ XMM1,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71ad91;}
case 0x71ad91:{ // PMULLW XMM2,XMM6
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1380)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1382)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1384)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1386)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1388)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x138a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x138c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x138e)));
return 0x71ad95;}
case 0x71ad95:{ // MOVDQA XMM3,xmmword ptr [EBX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0xc)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71ad99;}
case 0x71ad99:{ // PUNPCKLBW XMM1,XMM7
wr<1>(c,0x124f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71ad9d;}
case 0x71ad9d:{ // MOVQ XMM5,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71ada2;}
case 0x71ada2:{ // PMULLW XMM1,XMM3
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x12c0)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x12c2)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x12c4)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x12c6)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x12c8)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x12ca)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x12cc)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x12ce)));
return 0x71ada6;}
case 0x71ada6:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x71adaa;}
case 0x71adaa:{ // PUNPCKLBW XMM5,XMM7
wr<1>(c,0x134f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x134e,eval<Op::COPY,1,1>(r<1>(c,0x1347)));
wr<1>(c,0x134d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x134c,eval<Op::COPY,1,1>(r<1>(c,0x1346)));
wr<1>(c,0x134b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x134a,eval<Op::COPY,1,1>(r<1>(c,0x1345)));
wr<1>(c,0x1349,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1348,eval<Op::COPY,1,1>(r<1>(c,0x1344)));
wr<1>(c,0x1347,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1346,eval<Op::COPY,1,1>(r<1>(c,0x1343)));
wr<1>(c,0x1345,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1344,eval<Op::COPY,1,1>(r<1>(c,0x1342)));
wr<1>(c,0x1343,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1342,eval<Op::COPY,1,1>(r<1>(c,0x1341)));
wr<1>(c,0x1341,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71adae;}
case 0x71adae:{ // MOVDQA XMM6,xmmword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71adb6;}
case 0x71adb6:{ // PMULLW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x71adba;}
case 0x71adba:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71adbe;}
case 0x71adbe:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71adc2;}
case 0x71adc2:{ // PADDW XMM0,XMM1
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1240)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1244)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1246)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1248)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x124a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x124c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x124e)));
return 0x71adc6;}
case 0x71adc6:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x71adca;}
case 0x71adca:{ // MOVQ XMM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71adce;}
case 0x71adce:{ // PADDW XMM0,XMM5
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1340)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1342)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1344)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1346)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1348)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x134a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x134c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x134e)));
return 0x71add2;}
case 0x71add2:{ // MOVDQA XMM1,xmmword ptr [0x00817730]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x817730)));
return 0x71adda;}
case 0x71adda:{ // PUNPCKLBW XMM2,XMM7
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71adde;}
case 0x71adde:{ // PSUBW XMM1,XMM4
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1300)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1302)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1304)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1306)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1308)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x130a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x130c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x130e)));
return 0x71ade2;}
case 0x71ade2:{ // PMULLW XMM2,XMM1
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1240)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1242)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1244)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1246)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1248)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x124a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x124c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x124e)));
return 0x71ade6;}
case 0x71ade6:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ade8;}
case 0x71ade8:{ // MOVDQA XMM6,xmmword ptr [0x00817740]
wr<16>(c,0x1380,eval<Op::COPY,16,16>(m<16>(c,0x817740)));
return 0x71adf0;}
case 0x71adf0:{ // MOVDQA XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71adf4;}
case 0x71adf4:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71adf7;}
case 0x71adf7:{ // PSLLW XMM7,0x8
wr<16>(c,0x13c0,user_op(c,1048742,{r<16>(c,0x13c0),0x8ull}));
return 0x71adfc;}
case 0x71adfc:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71ae00;}
case 0x71ae00:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ae02;}
case 0x71ae02:{ // PADDW XMM0,XMM6
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1380)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1382)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1384)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1386)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1388)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x138a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x138c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x138e)));
return 0x71ae06;}
case 0x71ae06:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ae09;}
case 0x71ae09:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x71ae0d;}
case 0x71ae0d:{ // PSUBUSW XMM0,XMM7
wr<16>(c,0x1200,user_op(c,1048747,{r<16>(c,0x1200),r<16>(c,0x13c0)}));
return 0x71ae11;}
case 0x71ae11:{ // DEC EBP
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x14),0x1ull));
wr<4>(c,0x14,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x14),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ae12;}
case 0x71ae12:{ // PSRLW XMM0,0x7
wr<2>(c,0x1200,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1200),0x7ull));
wr<2>(c,0x1202,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1202),0x7ull));
wr<2>(c,0x1204,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1204),0x7ull));
wr<2>(c,0x1206,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1206),0x7ull));
wr<2>(c,0x1208,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1208),0x7ull));
wr<2>(c,0x120a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120a),0x7ull));
wr<2>(c,0x120c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120c),0x7ull));
wr<2>(c,0x120e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x120e),0x7ull));
return 0x71ae17;}
case 0x71ae17:{ // PACKUSWB XMM0,XMM7
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1200,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71ae1b;}
case 0x71ae1b:{ // MOVQ qword ptr [EDI + EDX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71ae20;}
case 0x71ae20:{ // JNZ 0x0071ad69
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71ad69;}
return 0x71ae26;}
case 0x71ae26:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae27;}
case 0x71ae27:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae28;}
case 0x71ae28:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae29;}
case 0x71ae29:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2a;}
case 0x71ae2a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2b;}
case 0x71ae2b:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2c;}
case 0x71ae2c:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2d;}
case 0x71ae2d:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2e;}
case 0x71ae2e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae2f;}
case 0x71ae2f:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae30;}
case 0x71ae30:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x71ae32;}
case 0x71ae32:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae33;}
case 0x71ae33:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71ae35;}
case 0x71ae35:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae36;}
case 0x71ae36:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ae37;}
case 0x71ae37:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ae38;}
case 0x71ae38:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71ae3a;}
case 0x71ae3a:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae3d;}
case 0x71ae3d:{ // MOV EAX,dword ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae40;}
case 0x71ae40:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae43;}
case 0x71ae43:{ // ADD EAX,0x400
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x400ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x400ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x400ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ae48;}
case 0x71ae48:{ // AND EAX,0xffffffe0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffffffe0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71ae4b;}
case 0x71ae4b:{ // IMUL ECX,ECX,0x10001
wu<8>(c,0x76700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x76800,eval<Op::INT_SEXT,8,4>(0x10001ull));
wu<8>(c,0x76a00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x76700),u<8>(c,0x76800)));
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x0ull));
wu<4>(c,0x76d00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x76a00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71ae51;}
case 0x71ae51:{ // MOV dword ptr [EAX + 0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ae54;}
case 0x71ae54:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x71ae56;}
case 0x71ae56:{ // MOV ECX,0x10001
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x10001ull));
return 0x71ae5b;}
case 0x71ae5b:{ // MOV dword ptr [EAX + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ae5e;}
case 0x71ae5e:{ // MOV dword ptr [EAX + 0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ae61;}
case 0x71ae61:{ // MOV ECX,0x40004
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x40004ull));
return 0x71ae66;}
case 0x71ae66:{ // MOV dword ptr [EAX + 0x14],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ae69;}
case 0x71ae69:{ // MOV dword ptr [EAX + 0x10],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71ae6c;}
case 0x71ae6c:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71ae6d;}
case 0x71ae6d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71ae6e;}
case 0x71ae6e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ae6f;}
case 0x71ae6f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71ae71;}
case 0x71ae71:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71ae72;}
case 0x71ae72:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae75;}
case 0x71ae75:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae78;}
case 0x71ae78:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae7b;}
case 0x71ae7b:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71ae7e;}
case 0x71ae7e:{ // MOVD MM0,dword ptr [EBX + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xfffffffeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71ae82;}
case 0x71ae82:{ // MOVD MM4,dword ptr [EBX + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71ae86;}
case 0x71ae86:{ // PSRLD MM0,0x10
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0x10ull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0x10ull));
return 0x71ae8a;}
case 0x71ae8a:{ // MOVD MM1,dword ptr [EBX + ECX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71ae8f;}
case 0x71ae8f:{ // PUNPCKLWD MM0,MM4
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71ae92;}
case 0x71ae92:{ // MOVD MM4,dword ptr [EBX + ECX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71ae97;}
case 0x71ae97:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x71ae9b;}
case 0x71ae9b:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71ae9e;}
case 0x71ae9e:{ // LEA EDX,[EDX + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71aea1;}
case 0x71aea1:{ // MOVD MM2,dword ptr [EBX + ECX*0x2 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aea6;}
case 0x71aea6:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71aea9;}
case 0x71aea9:{ // MOVD MM4,dword ptr [EBX + ECX*0x2 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aeae;}
case 0x71aeae:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x71aeb2;}
case 0x71aeb2:{ // MOVD MM1,dword ptr [EBX + EDX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aeb7;}
case 0x71aeb7:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71aeba;}
case 0x71aeba:{ // MOVD MM4,dword ptr [EBX + EDX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aebf;}
case 0x71aebf:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x71aec3;}
case 0x71aec3:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71aec6;}
case 0x71aec6:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71aec9;}
case 0x71aec9:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71aecc;}
case 0x71aecc:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71aecf;}
case 0x71aecf:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71aed2;}
case 0x71aed2:{ // LEA EBX,[EBX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71aed5;}
case 0x71aed5:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71aed8;}
case 0x71aed8:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71aedb;}
case 0x71aedb:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71aedf;}
case 0x71aedf:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71aee2;}
case 0x71aee2:{ // MOVQ qword ptr [EAX + 0x20],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71aee6;}
case 0x71aee6:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x71aeea;}
case 0x71aeea:{ // MOVD MM7,dword ptr [EBX + -0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xfffffffeull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aeee;}
case 0x71aeee:{ // PUNPCKLBW MM1,MM4
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71aef1;}
case 0x71aef1:{ // MOVD MM4,dword ptr [EBX + 0x2]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aef5;}
case 0x71aef5:{ // PSRLD MM7,0x10
wr<4>(c,0x1170,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1170),0x10ull));
wr<4>(c,0x1174,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1174),0x10ull));
return 0x71aef9;}
case 0x71aef9:{ // MOVD MM5,dword ptr [EBX + ECX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71aefe;}
case 0x71aefe:{ // PUNPCKLWD MM7,MM4
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71af01;}
case 0x71af01:{ // MOVD MM4,dword ptr [EBX + ECX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71af06;}
case 0x71af06:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x71af0a;}
case 0x71af0a:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71af0d;}
case 0x71af0d:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71af10;}
case 0x71af10:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71af13;}
case 0x71af13:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x71af17;}
case 0x71af17:{ // PSUBW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x71af1a;}
case 0x71af1a:{ // PUNPCKLBW MM7,MM5
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71af1d;}
case 0x71af1d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71af20;}
case 0x71af20:{ // PUNPCKLBW MM6,MM4
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71af23;}
case 0x71af23:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71af26;}
case 0x71af26:{ // PUNPCKLBW MM2,MM4
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71af29;}
case 0x71af29:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71af2c;}
case 0x71af2c:{ // PADDW MM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x71af30;}
case 0x71af30:{ // PSUBW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x71af33;}
case 0x71af33:{ // MOVD MM2,dword ptr [EBX + ECX*0x2 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71af38;}
case 0x71af38:{ // PADDW MM6,MM1
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1110)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1112)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1114)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1116)));
return 0x71af3b;}
case 0x71af3b:{ // MOVD MM4,dword ptr [EBX + ECX*0x2 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71af40;}
case 0x71af40:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x71af44;}
case 0x71af44:{ // MOVD MM5,dword ptr [EBX + EDX*0x1 + -0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffeull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71af49;}
case 0x71af49:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71af4c;}
case 0x71af4c:{ // MOVD MM4,dword ptr [EBX + EDX*0x1 + 0x2]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x2ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71af51;}
case 0x71af51:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x71af55;}
case 0x71af55:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71af58;}
case 0x71af58:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71af5b;}
case 0x71af5b:{ // PSRAW MM6,0x3
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x3ull}));
return 0x71af5f;}
case 0x71af5f:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71af62;}
case 0x71af62:{ // PUNPCKLBW MM2,MM5
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71af65;}
case 0x71af65:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71af68;}
case 0x71af68:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71af6b;}
case 0x71af6b:{ // PUNPCKHWD MM5,MM2
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71af6e;}
case 0x71af6e:{ // MOVQ qword ptr [EAX + 0x30],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71af72;}
case 0x71af72:{ // PUNPCKLWD MM7,MM2
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71af75;}
case 0x71af75:{ // MOVQ qword ptr [EAX + 0x28],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71af79;}
case 0x71af79:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x71af7d;}
case 0x71af7d:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71af80;}
case 0x71af80:{ // MOVQ MM0,MM7
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71af83;}
case 0x71af83:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x71af87;}
case 0x71af87:{ // PXOR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x71af8a;}
case 0x71af8a:{ // PSUBSW MM1,MM6
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x71af8d;}
case 0x71af8d:{ // PUNPCKLBW MM5,MM4
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71af90;}
case 0x71af90:{ // POR MM6,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x71af94;}
case 0x71af94:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71af97;}
case 0x71af97:{ // PUNPCKLBW MM7,MM4
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71af9a;}
case 0x71af9a:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71af9d;}
case 0x71af9d:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71afa0;}
case 0x71afa0:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x71afa4;}
case 0x71afa4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71afa5;}
case 0x71afa5:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71afa8;}
case 0x71afa8:{ // PXOR MM4,MM3
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1130)));
return 0x71afab;}
case 0x71afab:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71afae;}
case 0x71afae:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x71afb1;}
case 0x71afb1:{ // MOVQ MM1,qword ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71afb5;}
case 0x71afb5:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x71afb8;}
case 0x71afb8:{ // PUNPCKLBW MM0,MM3
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71afbb;}
case 0x71afbb:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71afbe;}
case 0x71afbe:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71afc1;}
case 0x71afc1:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71afc4;}
case 0x71afc4:{ // PUNPCKLBW MM1,MM3
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71afc7;}
case 0x71afc7:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71afca;}
case 0x71afca:{ // PADDW MM5,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x71afce;}
case 0x71afce:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71afd1;}
case 0x71afd1:{ // PADDW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71afd4;}
case 0x71afd4:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71afd7;}
case 0x71afd7:{ // MOVD MM7,dword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71afdb;}
case 0x71afdb:{ // PSRAW MM0,0x3
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x3ull}));
return 0x71afdf;}
case 0x71afdf:{ // MOVD MM3,dword ptr [EAX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71afe3;}
case 0x71afe3:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71afe6;}
case 0x71afe6:{ // PSUBW MM7,MM2
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1120)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1124)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1126)));
return 0x71afe9;}
case 0x71afe9:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71afec;}
case 0x71afec:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71afef;}
case 0x71afef:{ // PACKUSWB MM7,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
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
return 0x71aff2;}
case 0x71aff2:{ // PACKUSWB MM3,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
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
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x71aff5;}
case 0x71aff5:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71aff8;}
case 0x71aff8:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71affb;}
case 0x71affb:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x71afff;}
case 0x71afff:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71b002;}
default:missing_instruction(c.pc);}}
}
