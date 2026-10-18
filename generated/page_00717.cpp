#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_717(Cpu& c){switch(c.pc){
case 0x717000:{ // PSUBUSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x717003;}
case 0x717003:{ // PSUBUSW MM1,MM7
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x717006;}
case 0x717006:{ // PSRLW MM0,0x7
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x7ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x7ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x7ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x7ull));
return 0x71700a;}
case 0x71700a:{ // PSRLW MM1,0x7
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x7ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x7ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x7ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x7ull));
return 0x71700e;}
case 0x71700e:{ // PACKUSWB MM0,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x717011;}
case 0x717011:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x717014;}
case 0x717014:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717016;}
case 0x717016:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717018;}
case 0x717018:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71701b;}
case 0x71701b:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71701e;}
case 0x71701e:{ // MOVQ MM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717022;}
case 0x717022:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x717025;}
case 0x717025:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717028;}
case 0x717028:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71702b;}
case 0x71702b:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71702e;}
case 0x71702e:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717031;}
case 0x717031:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717035;}
case 0x717035:{ // PMULLW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x717038;}
case 0x717038:{ // MOVQ MM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71703c;}
case 0x71703c:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x71703f;}
case 0x71703f:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717042;}
case 0x717042:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717045;}
case 0x717045:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717049;}
case 0x717049:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71704c;}
case 0x71704c:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71704f;}
case 0x71704f:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717052;}
case 0x717052:{ // MOVQ MM6,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717056;}
case 0x717056:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x717059;}
case 0x717059:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71705c;}
case 0x71705c:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71705f;}
case 0x71705f:{ // MOVQ MM2,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717063;}
case 0x717063:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x717066;}
case 0x717066:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717069;}
case 0x717069:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71706c;}
case 0x71706c:{ // MOVQ MM6,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71706f;}
case 0x71706f:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717072;}
case 0x717072:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717075;}
case 0x717075:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717078;}
case 0x717078:{ // MOVQ MM6,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71707c;}
case 0x71707c:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71707f;}
case 0x71707f:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x717082;}
case 0x717082:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x717085;}
case 0x717085:{ // MOVQ MM2,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717089;}
case 0x717089:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71708c;}
case 0x71708c:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71708f;}
case 0x71708f:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717092;}
case 0x717092:{ // MOVQ MM6,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717099;}
case 0x717099:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71709c;}
case 0x71709c:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71709f;}
case 0x71709f:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7170a2;}
case 0x7170a2:{ // MOVQ MM6,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7170a9;}
case 0x7170a9:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7170ac;}
case 0x7170ac:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7170af;}
case 0x7170af:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7170b2;}
case 0x7170b2:{ // MOVQ MM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7170b5;}
case 0x7170b5:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7170b8;}
case 0x7170b8:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7170bb;}
case 0x7170bb:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7170be;}
case 0x7170be:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7170c5;}
case 0x7170c5:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7170c8;}
case 0x7170c8:{ // PSUBW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x7170cb;}
case 0x7170cb:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7170ce;}
case 0x7170ce:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7170d5;}
case 0x7170d5:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7170d8;}
case 0x7170d8:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x7170db;}
case 0x7170db:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7170de;}
case 0x7170de:{ // MOVQ MM6,qword ptr [0x00817620]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817620)));
return 0x7170e5;}
case 0x7170e5:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7170e8;}
case 0x7170e8:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x7170eb;}
case 0x7170eb:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7170ee;}
case 0x7170ee:{ // PSLLW MM7,0x8
wr<8>(c,0x1170,user_op(c,524454,{r<8>(c,0x1170),0x8ull}));
return 0x7170f2;}
case 0x7170f2:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x7170f5;}
case 0x7170f5:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x7170f8;}
case 0x7170f8:{ // PADDW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x7170fb;}
case 0x7170fb:{ // PSUBUSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x7170fe;}
case 0x7170fe:{ // PSUBUSW MM1,MM7
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x717101;}
case 0x717101:{ // PSRLW MM0,0x7
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x7ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x7ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x7ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x7ull));
return 0x717105;}
case 0x717105:{ // PSRLW MM1,0x7
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x7ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x7ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x7ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x7ull));
return 0x717109;}
case 0x717109:{ // PACKUSWB MM0,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71710c;}
case 0x71710c:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71710f;}
case 0x71710f:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717111;}
case 0x717111:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717113;}
case 0x717113:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717116;}
case 0x717116:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717119;}
case 0x717119:{ // MOVQ MM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71711d;}
case 0x71711d:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x717120;}
case 0x717120:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717123;}
case 0x717123:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717126;}
case 0x717126:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717129;}
case 0x717129:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71712c;}
case 0x71712c:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717130;}
case 0x717130:{ // PMULLW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x717133;}
case 0x717133:{ // MOVQ MM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717137;}
case 0x717137:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x71713a;}
case 0x71713a:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71713d;}
case 0x71713d:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717140;}
case 0x717140:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717144;}
case 0x717144:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717147;}
case 0x717147:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71714a;}
case 0x71714a:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71714d;}
case 0x71714d:{ // MOVQ MM6,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717151;}
case 0x717151:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x717154;}
case 0x717154:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x717157;}
case 0x717157:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71715a;}
case 0x71715a:{ // MOVQ MM2,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71715e;}
case 0x71715e:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x717161;}
case 0x717161:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717164;}
case 0x717164:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717167;}
case 0x717167:{ // MOVQ MM6,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71716a;}
case 0x71716a:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71716d;}
case 0x71716d:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717170;}
case 0x717170:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717173;}
case 0x717173:{ // MOVQ MM6,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717177;}
case 0x717177:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71717a;}
case 0x71717a:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71717d;}
case 0x71717d:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x717180;}
case 0x717180:{ // MOVQ MM2,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717184;}
case 0x717184:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x717187;}
case 0x717187:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71718a;}
case 0x71718a:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71718d;}
case 0x71718d:{ // MOVQ MM6,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717194;}
case 0x717194:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717197;}
case 0x717197:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71719a;}
case 0x71719a:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71719d;}
case 0x71719d:{ // MOVQ MM6,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7171a4;}
case 0x7171a4:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7171a7;}
case 0x7171a7:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7171aa;}
case 0x7171aa:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7171ad;}
case 0x7171ad:{ // MOVQ MM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7171b0;}
case 0x7171b0:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7171b3;}
case 0x7171b3:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7171b6;}
case 0x7171b6:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7171b9;}
case 0x7171b9:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7171c0;}
case 0x7171c0:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7171c3;}
case 0x7171c3:{ // PSUBW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x7171c6;}
case 0x7171c6:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7171c9;}
case 0x7171c9:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7171d0;}
case 0x7171d0:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7171d3;}
case 0x7171d3:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x7171d6;}
case 0x7171d6:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7171d9;}
case 0x7171d9:{ // MOVQ MM6,qword ptr [0x00817620]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817620)));
return 0x7171e0;}
case 0x7171e0:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7171e3;}
case 0x7171e3:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x7171e6;}
case 0x7171e6:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7171e9;}
case 0x7171e9:{ // PSLLW MM7,0x8
wr<8>(c,0x1170,user_op(c,524454,{r<8>(c,0x1170),0x8ull}));
return 0x7171ed;}
case 0x7171ed:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x7171f0;}
case 0x7171f0:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x7171f3;}
case 0x7171f3:{ // PADDW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x7171f6;}
case 0x7171f6:{ // PSUBUSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x7171f9;}
case 0x7171f9:{ // PSUBUSW MM1,MM7
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x7171fc;}
case 0x7171fc:{ // PSRLW MM0,0x7
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x7ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x7ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x7ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x7ull));
return 0x717200;}
case 0x717200:{ // PSRLW MM1,0x7
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x7ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x7ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x7ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x7ull));
return 0x717204;}
case 0x717204:{ // PACKUSWB MM0,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x717207;}
case 0x717207:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71720a;}
case 0x71720a:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71720c;}
case 0x71720c:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71720e;}
case 0x71720e:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717211;}
case 0x717211:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717214;}
case 0x717214:{ // MOVQ MM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717218;}
case 0x717218:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71721b;}
case 0x71721b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71721e;}
case 0x71721e:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717221;}
case 0x717221:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717224;}
case 0x717224:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717227;}
case 0x717227:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71722b;}
case 0x71722b:{ // PMULLW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x71722e;}
case 0x71722e:{ // MOVQ MM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717232;}
case 0x717232:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x717235;}
case 0x717235:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717238;}
case 0x717238:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71723b;}
case 0x71723b:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71723f;}
case 0x71723f:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717242;}
case 0x717242:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717245;}
case 0x717245:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717248;}
case 0x717248:{ // MOVQ MM6,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71724c;}
case 0x71724c:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71724f;}
case 0x71724f:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x717252;}
case 0x717252:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x717255;}
case 0x717255:{ // MOVQ MM2,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717259;}
case 0x717259:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71725c;}
case 0x71725c:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71725f;}
case 0x71725f:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717262;}
case 0x717262:{ // MOVQ MM6,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717265;}
case 0x717265:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717268;}
case 0x717268:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71726b;}
case 0x71726b:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71726e;}
case 0x71726e:{ // MOVQ MM6,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717272;}
case 0x717272:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x717275;}
case 0x717275:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x717278;}
case 0x717278:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71727b;}
case 0x71727b:{ // MOVQ MM2,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71727f;}
case 0x71727f:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x717282;}
case 0x717282:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717285;}
case 0x717285:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717288;}
case 0x717288:{ // MOVQ MM6,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71728f;}
case 0x71728f:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717292;}
case 0x717292:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717295;}
case 0x717295:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717298;}
case 0x717298:{ // MOVQ MM6,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71729f;}
case 0x71729f:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7172a2;}
case 0x7172a2:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7172a5;}
case 0x7172a5:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7172a8;}
case 0x7172a8:{ // MOVQ MM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7172ab;}
case 0x7172ab:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7172ae;}
case 0x7172ae:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7172b1;}
case 0x7172b1:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7172b4;}
case 0x7172b4:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7172bb;}
case 0x7172bb:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7172be;}
case 0x7172be:{ // PSUBW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x7172c1;}
case 0x7172c1:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7172c4;}
case 0x7172c4:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7172cb;}
case 0x7172cb:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7172ce;}
case 0x7172ce:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x7172d1;}
case 0x7172d1:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7172d4;}
case 0x7172d4:{ // MOVQ MM6,qword ptr [0x00817620]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817620)));
return 0x7172db;}
case 0x7172db:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7172de;}
case 0x7172de:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x7172e1;}
case 0x7172e1:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7172e4;}
case 0x7172e4:{ // PSLLW MM7,0x8
wr<8>(c,0x1170,user_op(c,524454,{r<8>(c,0x1170),0x8ull}));
return 0x7172e8;}
case 0x7172e8:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x7172eb;}
case 0x7172eb:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x7172ee;}
case 0x7172ee:{ // PADDW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x7172f1;}
case 0x7172f1:{ // PSUBUSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x7172f4;}
case 0x7172f4:{ // PSUBUSW MM1,MM7
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x7172f7;}
case 0x7172f7:{ // PSRLW MM0,0x7
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x7ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x7ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x7ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x7ull));
return 0x7172fb;}
case 0x7172fb:{ // PSRLW MM1,0x7
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x7ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x7ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x7ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x7ull));
return 0x7172ff;}
case 0x7172ff:{ // PACKUSWB MM0,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x717302;}
case 0x717302:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x717305;}
case 0x717305:{ // ADD ESI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717307;}
case 0x717307:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717309;}
case 0x717309:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71730c;}
case 0x71730c:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71730f;}
case 0x71730f:{ // MOVQ MM0,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717313;}
case 0x717313:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x717316;}
case 0x717316:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717319;}
case 0x717319:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71731c;}
case 0x71731c:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71731f;}
case 0x71731f:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717322;}
case 0x717322:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717326;}
case 0x717326:{ // PMULLW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x717329;}
case 0x717329:{ // MOVQ MM2,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71732d;}
case 0x71732d:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x717330;}
case 0x717330:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717333;}
case 0x717333:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717336;}
case 0x717336:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71733a;}
case 0x71733a:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71733d;}
case 0x71733d:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717340;}
case 0x717340:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717343;}
case 0x717343:{ // MOVQ MM6,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717347;}
case 0x717347:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71734a;}
case 0x71734a:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71734d;}
case 0x71734d:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x717350;}
case 0x717350:{ // MOVQ MM2,qword ptr [ESI + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717354;}
case 0x717354:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x717357;}
case 0x717357:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71735a;}
case 0x71735a:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71735d;}
case 0x71735d:{ // MOVQ MM6,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717360;}
case 0x717360:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717363;}
case 0x717363:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717366;}
case 0x717366:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717369;}
case 0x717369:{ // MOVQ MM6,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71736d;}
case 0x71736d:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x717370;}
case 0x717370:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x717373;}
case 0x717373:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x717376;}
case 0x717376:{ // MOVQ MM2,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71737a;}
case 0x71737a:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71737d;}
case 0x71737d:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717380;}
case 0x717380:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717383;}
case 0x717383:{ // MOVQ MM6,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71738a;}
case 0x71738a:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71738d;}
case 0x71738d:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x717390;}
case 0x717390:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x717393;}
case 0x717393:{ // MOVQ MM6,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71739a;}
case 0x71739a:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71739d;}
case 0x71739d:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7173a0;}
case 0x7173a0:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7173a3;}
case 0x7173a3:{ // MOVQ MM2,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7173a6;}
case 0x7173a6:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7173a9;}
case 0x7173a9:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7173ac;}
case 0x7173ac:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7173af;}
case 0x7173af:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7173b6;}
case 0x7173b6:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7173b9;}
case 0x7173b9:{ // PSUBW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x7173bc;}
case 0x7173bc:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7173bf;}
case 0x7173bf:{ // MOVQ MM6,qword ptr [0x00817610]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817610)));
return 0x7173c6;}
case 0x7173c6:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7173c9;}
case 0x7173c9:{ // PSUBW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x7173cc;}
case 0x7173cc:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x7173cf;}
case 0x7173cf:{ // MOVQ MM6,qword ptr [0x00817620]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x817620)));
return 0x7173d6;}
case 0x7173d6:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7173d9;}
case 0x7173d9:{ // PADDW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x7173dc;}
case 0x7173dc:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7173df;}
case 0x7173df:{ // PSLLW MM7,0x8
wr<8>(c,0x1170,user_op(c,524454,{r<8>(c,0x1170),0x8ull}));
return 0x7173e3;}
case 0x7173e3:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x7173e6;}
case 0x7173e6:{ // PADDW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x7173e9;}
case 0x7173e9:{ // PADDW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x7173ec;}
case 0x7173ec:{ // PSUBUSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x7173ef;}
case 0x7173ef:{ // PSUBUSW MM1,MM7
wr<8>(c,0x1110,user_op(c,524459,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x7173f2;}
case 0x7173f2:{ // PSRLW MM0,0x7
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x7ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x7ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x7ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x7ull));
return 0x7173f6;}
case 0x7173f6:{ // PSRLW MM1,0x7
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x7ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x7ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x7ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x7ull));
return 0x7173fa;}
case 0x7173fa:{ // PACKUSWB MM0,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x7173fd;}
case 0x7173fd:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x717400;}
case 0x717400:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717401;}
case 0x717401:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717402;}
case 0x717402:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717403;}
case 0x717403:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717404;}
case 0x717404:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717405;}
case 0x717405:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717406;}
case 0x717406:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717407;}
case 0x717407:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717408;}
case 0x717408:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717409;}
case 0x717409:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x71740b;}
case 0x71740b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71740c;}
case 0x71740c:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x71740e;}
case 0x71740e:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71740f;}
case 0x71740f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x717410;}
case 0x717410:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717411;}
case 0x717411:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x717413;}
case 0x717413:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717414;}
case 0x717414:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717415;}
case 0x717415:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717418;}
case 0x717418:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71741b;}
case 0x71741b:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71741c;}
case 0x71741c:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71741f;}
case 0x71741f:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x717423;}
case 0x717423:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x717425;}
case 0x717425:{ // SUB ESP,0x108
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x108ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x108ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x108ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71742b;}
case 0x71742b:{ // MOV EAX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71742e;}
case 0x71742e:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717431;}
case 0x717431:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717434;}
case 0x717434:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717437;}
case 0x717437:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71743a;}
case 0x71743a:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71743d;}
case 0x71743d:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71743f;}
case 0x71743f:{ // CMP ECX,EAX
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
return 0x717441;}
case 0x717441:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717442;}
case 0x717442:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717443;}
case 0x717443:{ // MOV dword ptr [EBP + -0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717446;}
case 0x717446:{ // MOV dword ptr [EBP + -0x44],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717449;}
case 0x717449:{ // JNC 0x00717a6e
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x717a6e;}
return 0x71744f;}
case 0x71744f:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x717451;}
case 0x717451:{ // SHL ECX,0x2
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
return 0x717454;}
case 0x717454:{ // MOV dword ptr [EBP + -0x10],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717457;}
case 0x717457:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71745a;}
case 0x71745a:{ // MOV ECX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71745d;}
case 0x71745d:{ // MOV EDX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717460;}
case 0x717460:{ // MOV ECX,dword ptr [EDX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717463;}
case 0x717463:{ // MOV EDX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717466;}
case 0x717466:{ // MOV ECX,dword ptr [EDX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717469;}
case 0x717469:{ // CMP ECX,0x3
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
return 0x71746c;}
case 0x71746c:{ // JBE 0x007179ef
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x7179ef;}
return 0x717472;}
case 0x717472:{ // MOV word ptr [EBP + -0x20],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717476;}
case 0x717476:{ // MOV word ptr [EBP + -0x1e],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71747a;}
case 0x71747a:{ // MOV word ptr [EBP + -0x1c],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71747e;}
case 0x71747e:{ // MOV word ptr [EBP + -0x1a],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717482;}
case 0x717482:{ // MOV word ptr [EBP + -0x18],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717486;}
case 0x717486:{ // MOV word ptr [EBP + -0x16],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeaull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71748a;}
case 0x71748a:{ // MOV word ptr [EBP + -0x14],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71748e;}
case 0x71748e:{ // MOV word ptr [EBP + -0x12],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeeull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717492;}
case 0x717492:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717493;}
case 0x717493:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717494;}
case 0x717494:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717495;}
case 0x717495:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717496;}
case 0x717496:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717497;}
case 0x717497:{ // MOVDQA XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71749c;}
case 0x71749c:{ // MOVDQA XMM1,xmmword ptr [0x008176b0]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x8176b0)));
return 0x7174a4;}
case 0x7174a4:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x7174a8;}
case 0x7174a8:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x7174ac;}
case 0x7174ac:{ // PSRLW XMM1,0x5
wr<2>(c,0x1240,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1240),0x5ull));
wr<2>(c,0x1242,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1242),0x5ull));
wr<2>(c,0x1244,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1244),0x5ull));
wr<2>(c,0x1246,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1246),0x5ull));
wr<2>(c,0x1248,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1248),0x5ull));
wr<2>(c,0x124a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124a),0x5ull));
wr<2>(c,0x124c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124c),0x5ull));
wr<2>(c,0x124e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124e),0x5ull));
return 0x7174b1;}
case 0x7174b1:{ // MOVDQA xmmword ptr [EBP + -0x60],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7174b6;}
case 0x7174b6:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7174b9;}
case 0x7174b9:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7174bb;}
case 0x7174bb:{ // MOV ESI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7174be;}
case 0x7174be:{ // LEA EDI,[EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x7174c4;}
case 0x7174c4:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7174c7;}
case 0x7174c7:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x7174cb;}
case 0x7174cb:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7174cd;}
case 0x7174cd:{ // LEA EAX,[EAX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7174d0;}
case 0x7174d0:{ // LEA ESI,[ESI + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7174d3;}
case 0x7174d3:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7174d8;}
case 0x7174d8:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7174dc;}
case 0x7174dc:{ // PUNPCKLBW XMM0,XMM7
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
return 0x7174e0;}
case 0x7174e0:{ // PUNPCKLBW XMM1,XMM7
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
return 0x7174e4;}
case 0x7174e4:{ // MOVDQA xmmword ptr [EDI],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x7174e8;}
case 0x7174e8:{ // MOVDQA xmmword ptr [EDI + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7174ed;}
case 0x7174ed:{ // MOVQ XMM2,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7174f2;}
case 0x7174f2:{ // MOVQ XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7174f7;}
case 0x7174f7:{ // PUNPCKLBW XMM2,XMM7
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
return 0x7174fb;}
case 0x7174fb:{ // PUNPCKLBW XMM3,XMM7
wr<1>(c,0x12cf,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x12ce,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x12cd,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x12cc,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x12cb,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x12ca,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x12c9,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x12c8,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x12c7,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x12c6,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x12c5,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x12c4,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x12c3,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x12c2,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x12c1,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x7174ff;}
case 0x7174ff:{ // MOVDQA xmmword ptr [EDI + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717504;}
case 0x717504:{ // MOVDQA xmmword ptr [EDI + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717509;}
case 0x717509:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71750c;}
case 0x71750c:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x717511;}
case 0x717511:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x717515;}
case 0x717515:{ // PUNPCKLBW XMM0,XMM7
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
return 0x717519;}
case 0x717519:{ // PUNPCKLBW XMM1,XMM7
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
return 0x71751d;}
case 0x71751d:{ // MOVDQA xmmword ptr [EDI + 0x40],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717522;}
case 0x717522:{ // MOVDQA xmmword ptr [EDI + 0x50],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717527;}
case 0x717527:{ // MOVQ XMM2,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71752c;}
case 0x71752c:{ // MOVQ XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x717531;}
case 0x717531:{ // PUNPCKLBW XMM2,XMM7
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
return 0x717535;}
case 0x717535:{ // PUNPCKLBW XMM3,XMM7
wr<1>(c,0x12cf,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x12ce,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x12cd,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x12cc,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x12cb,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x12ca,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x12c9,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x12c8,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x12c7,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x12c6,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x12c5,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x12c4,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x12c3,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x12c2,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x12c1,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x717539;}
case 0x717539:{ // MOVDQA xmmword ptr [EDI + 0x60],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71753e;}
case 0x71753e:{ // MOVDQA xmmword ptr [EDI + 0x70],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717543;}
case 0x717543:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717546;}
case 0x717546:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71754b;}
case 0x71754b:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71754f;}
case 0x71754f:{ // PUNPCKLBW XMM0,XMM7
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
return 0x717553;}
case 0x717553:{ // PUNPCKLBW XMM1,XMM7
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
return 0x717557;}
case 0x717557:{ // MOVDQA xmmword ptr [EDI + 0x80],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x71755f;}
case 0x71755f:{ // MOVDQA xmmword ptr [EDI + 0x90],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x717567;}
case 0x717567:{ // PCMPEQW XMM3,XMM3
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x71756b;}
case 0x71756b:{ // PSLLW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048742,{r<16>(c,0x12c0),0xfull}));
return 0x717570;}
case 0x717570:{ // PSRLW XMM3,0x8
wr<2>(c,0x12c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c0),0x8ull));
wr<2>(c,0x12c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c2),0x8ull));
wr<2>(c,0x12c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c4),0x8ull));
wr<2>(c,0x12c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c6),0x8ull));
wr<2>(c,0x12c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c8),0x8ull));
wr<2>(c,0x12ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ca),0x8ull));
wr<2>(c,0x12cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12cc),0x8ull));
wr<2>(c,0x12ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ce),0x8ull));
return 0x717575;}
case 0x717575:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71757a;}
case 0x71757a:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71757f;}
case 0x71757f:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717583;}
case 0x717583:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717587;}
case 0x717587:{ // MOVDQA XMM0,XMM2
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71758b;}
case 0x71758b:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71758f;}
case 0x71758f:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717593;}
case 0x717593:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717597;}
case 0x717597:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x71759b;}
case 0x71759b:{ // MOVDQA XMM5,XMM6
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71759f;}
case 0x71759f:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7175a4;}
case 0x7175a4:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7175a9;}
case 0x7175a9:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x7175ad;}
case 0x7175ad:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x7175b1;}
case 0x7175b1:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x7175b5;}
case 0x7175b5:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x7175b9;}
case 0x7175b9:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x7175bd;}
case 0x7175bd:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x7175c1;}
case 0x7175c1:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x7175c5;}
case 0x7175c5:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x7175c9;}
case 0x7175c9:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7175ce;}
case 0x7175ce:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7175d3;}
case 0x7175d3:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x7175d7;}
case 0x7175d7:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x7175db;}
case 0x7175db:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x7175df;}
case 0x7175df:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x7175e3;}
case 0x7175e3:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x7175e7;}
case 0x7175e7:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x7175eb;}
case 0x7175eb:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x7175ef;}
case 0x7175ef:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x7175f3;}
case 0x7175f3:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7175f8;}
case 0x7175f8:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717600;}
case 0x717600:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717604;}
case 0x717604:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717608;}
case 0x717608:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71760c;}
case 0x71760c:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x717610;}
case 0x717610:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717614;}
case 0x717614:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717618;}
case 0x717618:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x71761c;}
case 0x71761c:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x717620;}
case 0x717620:{ // MOVDQA XMM7,XMM3
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x717624;}
case 0x717624:{ // PSRLW XMM7,0x7
wr<2>(c,0x13c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c0),0x7ull));
wr<2>(c,0x13c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c2),0x7ull));
wr<2>(c,0x13c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c4),0x7ull));
wr<2>(c,0x13c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c6),0x7ull));
wr<2>(c,0x13c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c8),0x7ull));
wr<2>(c,0x13ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ca),0x7ull));
wr<2>(c,0x13cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13cc),0x7ull));
wr<2>(c,0x13ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ce),0x7ull));
return 0x717629;}
case 0x717629:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x71762d;}
case 0x71762d:{ // MOVDQA XMM6,XMM4
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717631;}
case 0x717631:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x717635;}
case 0x717635:{ // PADDW XMM4,XMM7
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x13c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x13c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x13c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x13c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x13c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x13ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x13cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x13ce)));
return 0x717639;}
case 0x717639:{ // PSRAW XMM2,0x1
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x1ull}));
return 0x71763e;}
case 0x71763e:{ // PSRAW XMM6,0x1
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x1ull}));
return 0x717643;}
case 0x717643:{ // PSRAW XMM0,0x1
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x1ull}));
return 0x717648;}
case 0x717648:{ // PSRAW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x1ull}));
return 0x71764d;}
case 0x71764d:{ // PMULLW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x717651;}
case 0x717651:{ // PMULLW XMM6,XMM4
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1300)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1302)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1304)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1306)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1308)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x130a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x130c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x130e)));
return 0x717655;}
case 0x717655:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x717659;}
case 0x717659:{ // PSUBW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x71765d;}
case 0x71765d:{ // MOVDQA XMM7,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717662;}
case 0x717662:{ // MOVDQA XMM2,XMM1
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x717666;}
case 0x717666:{ // MOVDQA xmmword ptr [EBP + -0x40],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71766b;}
case 0x71766b:{ // MOVDQA xmmword ptr [EBP + -0x30],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717670;}
case 0x717670:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717674;}
case 0x717674:{ // PSUBW XMM1,XMM7
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x13c0)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x13c4)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x13c6)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x13c8)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x13ca)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x13cc)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x13ce)));
return 0x717678;}
case 0x717678:{ // PSUBW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x71767c;}
case 0x71767c:{ // PSRAW XMM2,0xf
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0xfull}));
return 0x717681;}
case 0x717681:{ // PSRAW XMM6,0xf
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0xfull}));
return 0x717686;}
case 0x717686:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x71768b;}
case 0x71768b:{ // PSRAW XMM5,0xf
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0xfull}));
return 0x717690;}
case 0x717690:{ // MOVDQA XMM7,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717695;}
case 0x717695:{ // PANDN XMM2,XMM1
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1240)));
return 0x717699;}
case 0x717699:{ // PANDN XMM6,XMM5
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1380)));
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1340)));
return 0x71769d;}
case 0x71769d:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7176a2;}
case 0x7176a2:{ // PAND XMM6,XMM2
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1280)));
return 0x7176a6;}
case 0x7176a6:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x7176aa;}
case 0x7176aa:{ // PSUBUSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048747,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x7176ae;}
case 0x7176ae:{ // PSUBUSW XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x7176b2;}
case 0x7176b2:{ // POR XMM7,XMM4
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1300)));
return 0x7176b6;}
case 0x7176b6:{ // PSUBW XMM7,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x13c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c0),u<2>(c,0x135c00)));
wr<2>(c,0x13c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c2),u<2>(c,0x135c02)));
wr<2>(c,0x13c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c4),u<2>(c,0x135c04)));
wr<2>(c,0x13c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c6),u<2>(c,0x135c06)));
wr<2>(c,0x13c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c8),u<2>(c,0x135c08)));
wr<2>(c,0x13ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ca),u<2>(c,0x135c0a)));
wr<2>(c,0x13cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13cc),u<2>(c,0x135c0c)));
wr<2>(c,0x13ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ce),u<2>(c,0x135c0e)));
return 0x7176bb;}
case 0x7176bb:{ // PSRAW XMM7,0xf
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0xfull}));
return 0x7176c0;}
case 0x7176c0:{ // PAND XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::INT_AND,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1380)));
return 0x7176c4;}
case 0x7176c4:{ // MOVDQA XMM5,xmmword ptr [EDI]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x1c)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7176c8;}
case 0x7176c8:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7176cd;}
case 0x7176cd:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x7176d1;}
case 0x7176d1:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7176d5;}
case 0x7176d5:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x7176d9;}
case 0x7176d9:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x7176dd;}
case 0x7176dd:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x7176e1;}
case 0x7176e1:{ // PSUBW XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7176e6;}
case 0x7176e6:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x7176eb;}
case 0x7176eb:{ // MOVDQA XMM1,XMM4
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x7176ef;}
case 0x7176ef:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x7176f3;}
case 0x7176f3:{ // PANDN XMM1,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1240)));
wr<16>(c,0x1240,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x7176f7;}
case 0x7176f7:{ // POR XMM1,XMM4
wr<16>(c,0x1240,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1300)));
return 0x7176fb;}
case 0x7176fb:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717703;}
case 0x717703:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71770b;}
case 0x71770b:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71770f;}
case 0x71770f:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717713;}
case 0x717713:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x717717;}
case 0x717717:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x71771b;}
case 0x71771b:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x71771f;}
case 0x71771f:{ // PSUBW XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717724;}
case 0x717724:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x717729;}
case 0x717729:{ // MOVDQA XMM2,XMM4
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71772d;}
case 0x71772d:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x717731;}
case 0x717731:{ // PANDN XMM2,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x717735;}
case 0x717735:{ // POR XMM2,XMM4
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1300)));
return 0x717739;}
case 0x717739:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x71773d;}
case 0x71773d:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x717741;}
case 0x717741:{ // PADDW XMM3,XMM3
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
return 0x717745;}
case 0x717745:{ // PADDW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717749;}
case 0x717749:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71774e;}
case 0x71774e:{ // PADDW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717753;}
case 0x717753:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717758;}
case 0x717758:{ // PADDW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x71775d;}
case 0x71775d:{ // PADDW XMM4,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717765;}
case 0x717765:{ // PADDW XMM3,XMM4
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1300)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1302)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1304)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1306)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1308)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x130a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x130c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x130e)));
return 0x717769;}
case 0x717769:{ // MOVDQA XMM4,XMM3
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x71776d;}
case 0x71776d:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717772;}
case 0x717772:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717776;}
case 0x717776:{ // PSLLW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048742,{r<16>(c,0x1300),0x1ull}));
return 0x71777b;}
case 0x71777b:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717780;}
case 0x717780:{ // PADDW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717785;}
case 0x717785:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71778a;}
case 0x71778a:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71778e;}
case 0x71778e:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717792;}
case 0x717792:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717796;}
case 0x717796:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71779a;}
case 0x71779a:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71779f;}
case 0x71779f:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7177a4;}
case 0x7177a4:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x7177a8;}
case 0x7177a8:{ // PADDW XMM3,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7177ad;}
case 0x7177ad:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7177b1;}
case 0x7177b1:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7177b5;}
case 0x7177b5:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x7177b9;}
case 0x7177b9:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7177be;}
case 0x7177be:{ // PADDW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7177c3;}
case 0x7177c3:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7177c8;}
case 0x7177c8:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7177cc;}
case 0x7177cc:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7177d0;}
case 0x7177d0:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7177d4;}
case 0x7177d4:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7177d8;}
case 0x7177d8:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7177dd;}
case 0x7177dd:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7177e2;}
case 0x7177e2:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x7177e6;}
case 0x7177e6:{ // PADDW XMM3,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7177eb;}
case 0x7177eb:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7177ef;}
case 0x7177ef:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7177f3;}
case 0x7177f3:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x7177f7;}
case 0x7177f7:{ // PSUBW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7177fc;}
case 0x7177fc:{ // PADDW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717801;}
case 0x717801:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717806;}
case 0x717806:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71780a;}
case 0x71780a:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x71780e;}
case 0x71780e:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717812;}
case 0x717812:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717816;}
case 0x717816:{ // MOVQ qword ptr [ESI],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x71781a;}
case 0x71781a:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71781f;}
case 0x71781f:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717823;}
case 0x717823:{ // PADDW XMM3,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717828;}
case 0x717828:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71782c;}
case 0x71782c:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717830;}
case 0x717830:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717834;}
case 0x717834:{ // PADDW XMM4,XMM1
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1240)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1242)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1244)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1246)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1248)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x124a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x124c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x124e)));
return 0x717838;}
case 0x717838:{ // PSUBW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x71783d;}
case 0x71783d:{ // PSUBW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717842;}
case 0x717842:{ // PADDW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x71784a;}
case 0x71784a:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71784f;}
case 0x71784f:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717853;}
case 0x717853:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717857;}
case 0x717857:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71785b;}
case 0x71785b:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71785f;}
case 0x71785f:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717864;}
case 0x717864:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717869;}
case 0x717869:{ // PSUBW XMM3,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71786e;}
case 0x71786e:{ // PADDW XMM3,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717876;}
case 0x717876:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71787a;}
case 0x71787a:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71787e;}
case 0x71787e:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717882;}
case 0x717882:{ // PADDW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717887;}
case 0x717887:{ // PSUBW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x71788c;}
case 0x71788c:{ // PSUBW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717894;}
case 0x717894:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x717898;}
case 0x717898:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71789d;}
case 0x71789d:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7178a1;}
case 0x7178a1:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7178a5;}
case 0x7178a5:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7178a9;}
case 0x7178a9:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7178ac;}
case 0x7178ac:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7178b0;}
case 0x7178b0:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7178b5;}
case 0x7178b5:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7178ba;}
case 0x7178ba:{ // PSUBW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x7178bf;}
case 0x7178bf:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x7178c3;}
case 0x7178c3:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7178c7;}
case 0x7178c7:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7178cb;}
case 0x7178cb:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x7178cf;}
case 0x7178cf:{ // PADDW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7178d4;}
case 0x7178d4:{ // PSUBW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7178d9;}
case 0x7178d9:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7178de;}
case 0x7178de:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7178e2;}
case 0x7178e2:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7178e6;}
case 0x7178e6:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7178ea;}
case 0x7178ea:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7178ee;}
case 0x7178ee:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7178f3;}
case 0x7178f3:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7178f8;}
case 0x7178f8:{ // PSUBW XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x7178fd;}
case 0x7178fd:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x717901;}
case 0x717901:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717905;}
case 0x717905:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717909;}
case 0x717909:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x71790d;}
case 0x71790d:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717912;}
case 0x717912:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717917;}
case 0x717917:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71791c;}
case 0x71791c:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717920;}
case 0x717920:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717924;}
case 0x717924:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717928;}
case 0x717928:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71792c;}
case 0x71792c:{ // MOVQ qword ptr [ESI],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x717930;}
case 0x717930:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717938;}
case 0x717938:{ // PSUBW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71793d;}
case 0x71793d:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x717941;}
case 0x717941:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717945;}
case 0x717945:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717949;}
case 0x717949:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x71794d;}
case 0x71794d:{ // PADDW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717952;}
case 0x717952:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717957;}
case 0x717957:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71795c;}
case 0x71795c:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717960;}
case 0x717960:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717964;}
case 0x717964:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717968;}
case 0x717968:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71796c;}
case 0x71796c:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717971;}
case 0x717971:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717972;}
case 0x717972:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717973;}
case 0x717973:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717974;}
case 0x717974:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717975;}
case 0x717975:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717976;}
case 0x717976:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717979;}
case 0x717979:{ // MOV ECX,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71797c;}
case 0x71797c:{ // MOV EDX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71797f;}
case 0x71797f:{ // MOVZX ESI,word ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x717983;}
case 0x717983:{ // LEA ECX,[ECX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717986;}
case 0x717986:{ // MOVZX EDX,word ptr [EBP + -0x32]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffceull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71798a;}
case 0x71798a:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71798c;}
case 0x71798c:{ // MOVZX ESI,word ptr [EBP + -0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffcaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x717990;}
case 0x717990:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717992;}
case 0x717992:{ // MOVZX ESI,word ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x717996;}
case 0x717996:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717998;}
case 0x717998:{ // MOVZX ESI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71799c;}
case 0x71799c:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71799e;}
case 0x71799e:{ // MOVZX ESI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179a2;}
case 0x7179a2:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179a4;}
case 0x7179a4:{ // MOVZX ESI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179a8;}
case 0x7179a8:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179aa;}
case 0x7179aa:{ // MOVZX ESI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179ae;}
case 0x7179ae:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179b0;}
case 0x7179b0:{ // ADD dword ptr [ECX],EDX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
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
return 0x7179b2;}
case 0x7179b2:{ // MOV EAX,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179b5;}
case 0x7179b5:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179b8;}
case 0x7179b8:{ // MOVZX EDX,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179bc;}
case 0x7179bc:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179be;}
case 0x7179be:{ // MOVZX ECX,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179c2;}
case 0x7179c2:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179c4;}
case 0x7179c4:{ // MOVZX EDX,word ptr [EBP + -0x26]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179c8;}
case 0x7179c8:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179ca;}
case 0x7179ca:{ // MOVZX EDX,word ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179ce;}
case 0x7179ce:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179d0;}
case 0x7179d0:{ // MOVZX EDX,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179d4;}
case 0x7179d4:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179d6;}
case 0x7179d6:{ // MOVZX EDX,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179da;}
case 0x7179da:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179dc;}
case 0x7179dc:{ // MOVZX EDX,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179e0;}
case 0x7179e0:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179e2;}
case 0x7179e2:{ // MOVZX EDX,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7179e6;}
case 0x7179e6:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179e8;}
case 0x7179e8:{ // ADD dword ptr [EAX],ECX
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
return 0x7179ea;}
case 0x7179ea:{ // MOV EAX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179ed;}
case 0x7179ed:{ // JMP 0x00717a53
return 0x717a53;
return 0x7179ef;}
case 0x7179ef:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7179f0;}
case 0x7179f0:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7179f1;}
case 0x7179f1:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7179f2;}
case 0x7179f2:{ // MOV ESI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179f5;}
case 0x7179f5:{ // MOV EDI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179f8;}
case 0x7179f8:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7179f9;}
case 0x7179f9:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7179fc;}
case 0x7179fc:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7179fe;}
case 0x7179fe:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717a00;}
case 0x717a00:{ // LEA ESI,[ESI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a03;}
case 0x717a03:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a06;}
case 0x717a06:{ // MOVQ qword ptr [EDI + EDX*0x4],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a0a;}
case 0x717a0a:{ // LEA EDI,[EDI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a0d;}
case 0x717a0d:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a11;}
case 0x717a11:{ // MOVQ qword ptr [EDI + ECX*0x1],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a15;}
case 0x717a15:{ // MOVQ MM2,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a19;}
case 0x717a19:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a1c;}
case 0x717a1c:{ // MOVQ qword ptr [EDI + ECX*0x2],MM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a20;}
case 0x717a20:{ // LEA EDI,[EDI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a23;}
case 0x717a23:{ // MOVQ MM3,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a27;}
case 0x717a27:{ // MOVQ qword ptr [EDI + EDX*0x1],MM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a2b;}
case 0x717a2b:{ // MOVQ MM4,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a2e;}
case 0x717a2e:{ // MOVQ MM5,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a32;}
case 0x717a32:{ // MOVQ qword ptr [EDI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x717a35;}
case 0x717a35:{ // MOVQ MM6,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a39;}
case 0x717a39:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a3c;}
case 0x717a3c:{ // MOVQ qword ptr [EDI + ECX*0x1],MM5
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a40;}
case 0x717a40:{ // MOVQ qword ptr [EDI + ECX*0x2],MM6
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a44;}
case 0x717a44:{ // MOVQ MM7,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717a48;}
case 0x717a48:{ // LEA EDI,[EDI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717a4b;}
case 0x717a4b:{ // MOVQ qword ptr [EDI + EDX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x717a4f;}
case 0x717a4f:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717a50;}
case 0x717a50:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717a51;}
case 0x717a51:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717a52;}
case 0x717a52:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717a53;}
case 0x717a53:{ // ADD dword ptr [EBP + -0x8],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x8ull));
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
return 0x717a57;}
case 0x717a57:{ // ADD dword ptr [EBP + -0x4],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x8ull));
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
return 0x717a5b;}
case 0x717a5b:{ // INC dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x717a5e;}
case 0x717a5e:{ // ADD dword ptr [EBP + -0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x717a62;}
case 0x717a62:{ // CMP dword ptr [EBP + -0xc],EAX
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
return 0x717a65;}
case 0x717a65:{ // JC 0x00717457
if(r<1>(c,0x200)){return 0x717457;}
return 0x717a6b;}
case 0x717a6b:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a6e;}
case 0x717a6e:{ // MOV EDX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a71;}
case 0x717a71:{ // SHL EDX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
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
return 0x717a74;}
case 0x717a74:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x717a76;}
case 0x717a76:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x717a77;}
case 0x717a77:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717a79;}
case 0x717a79:{ // MOV EDX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a7c;}
case 0x717a7c:{ // SHL EDX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
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
return 0x717a7f;}
case 0x717a7f:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717a81;}
case 0x717a81:{ // ADD dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x717a84;}
case 0x717a84:{ // MOV EDX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a87;}
case 0x717a87:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717a88;}
case 0x717a88:{ // MOV dword ptr [EBP + -0x8],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717a8b;}
case 0x717a8b:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x717a8d;}
case 0x717a8d:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717a90;}
case 0x717a90:{ // CMP ECX,EAX
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
return 0x717a92;}
case 0x717a92:{ // JMP 0x00718160
return 0x718160;
return 0x717a97;}
case 0x717a97:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a9a;}
case 0x717a9a:{ // MOV ECX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717a9d;}
case 0x717a9d:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x717a9f;}
case 0x717a9f:{ // SHL EAX,0x2
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
return 0x717aa2;}
case 0x717aa2:{ // MOV dword ptr [EBP + -0x44],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x717aa5;}
case 0x717aa5:{ // MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717aa9;}
case 0x717aa9:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717aac;}
case 0x717aac:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717aaf;}
case 0x717aaf:{ // CMP EAX,0x3
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
return 0x717ab2;}
case 0x717ab2:{ // JBE 0x00718151
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x718151;}
return 0x717ab8;}
case 0x717ab8:{ // MOV word ptr [EBP + -0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717abc;}
case 0x717abc:{ // MOV word ptr [EBP + -0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ac0;}
case 0x717ac0:{ // MOV word ptr [EBP + -0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ac4;}
case 0x717ac4:{ // MOV word ptr [EBP + -0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ac8;}
case 0x717ac8:{ // MOV word ptr [EBP + -0x18],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717acc;}
case 0x717acc:{ // MOV word ptr [EBP + -0x16],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeaull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ad0;}
case 0x717ad0:{ // MOV word ptr [EBP + -0x14],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ad4;}
case 0x717ad4:{ // MOV word ptr [EBP + -0x12],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeeull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x717ad8;}
case 0x717ad8:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717adb;}
case 0x717adb:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717add;}
case 0x717add:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717ae0;}
case 0x717ae0:{ // MOVZX DX,byte ptr [EAX + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x717ae5;}
case 0x717ae5:{ // MOV word ptr [EBP + ECX*0x2 + 0xffffff00],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xffffff00ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x717aed;}
case 0x717aed:{ // MOVZX DX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x717af1;}
case 0x717af1:{ // ADD EAX,dword ptr [EBX + 0x14]
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
return 0x717af4;}
case 0x717af4:{ // MOV word ptr [EBP + ECX*0x2 + -0x70],DX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffff90ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x717af9;}
case 0x717af9:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717afa;}
case 0x717afa:{ // CMP ECX,0x8
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
return 0x717afd;}
case 0x717afd:{ // JC 0x00717ae0
if(r<1>(c,0x200)){return 0x717ae0;}
return 0x717aff;}
case 0x717aff:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717b00;}
case 0x717b00:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717b01;}
case 0x717b01:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717b02;}
case 0x717b02:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717b03;}
case 0x717b03:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x717b04;}
case 0x717b04:{ // MOVDQA XMM0,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717b09;}
case 0x717b09:{ // MOVDQA XMM1,xmmword ptr [0x008176b0]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x8176b0)));
return 0x717b11;}
case 0x717b11:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x717b15;}
case 0x717b15:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x717b19;}
case 0x717b19:{ // PSRLW XMM1,0x5
wr<2>(c,0x1240,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1240),0x5ull));
wr<2>(c,0x1242,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1242),0x5ull));
wr<2>(c,0x1244,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1244),0x5ull));
wr<2>(c,0x1246,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1246),0x5ull));
wr<2>(c,0x1248,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1248),0x5ull));
wr<2>(c,0x124a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124a),0x5ull));
wr<2>(c,0x124c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124c),0x5ull));
wr<2>(c,0x124e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124e),0x5ull));
return 0x717b1e;}
case 0x717b1e:{ // MOVDQA xmmword ptr [EBP + -0x60],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717b23;}
case 0x717b23:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717b26;}
case 0x717b26:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717b28;}
case 0x717b28:{ // MOV ESI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717b2b;}
case 0x717b2b:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717b2e;}
case 0x717b2e:{ // SUB ESI,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x4ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717b31;}
case 0x717b31:{ // LEA EDI,[EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x717b37;}
case 0x717b37:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x717b3a;}
case 0x717b3a:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x717b3c;}
case 0x717b3c:{ // LEA ESI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717b3f;}
case 0x717b3f:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717b42;}
case 0x717b42:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717b46;}
case 0x717b46:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717b4a;}
case 0x717b4a:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717b4d;}
case 0x717b4d:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717b51;}
case 0x717b51:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717b54;}
case 0x717b54:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x717b57;}
case 0x717b57:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x717b5a;}
case 0x717b5a:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717b5d;}
case 0x717b5d:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x717b60;}
case 0x717b60:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x717b63;}
case 0x717b63:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717b66;}
case 0x717b66:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x717b69;}
case 0x717b69:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x717b6c;}
case 0x717b6c:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x717b6f;}
case 0x717b6f:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x717b72;}
case 0x717b72:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x717b75;}
case 0x717b75:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x717b78;}
case 0x717b78:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717b7b;}
case 0x717b7b:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717b7e;}
case 0x717b7e:{ // MOVQ qword ptr [EDI + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717b82;}
case 0x717b82:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717b85;}
case 0x717b85:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x717b88;}
case 0x717b88:{ // MOVQ qword ptr [EDI + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717b8c;}
case 0x717b8c:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717b8f;}
case 0x717b8f:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717b92;}
case 0x717b92:{ // MOVQ qword ptr [EDI + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717b96;}
case 0x717b96:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717b99;}
case 0x717b99:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x717b9c;}
case 0x717b9c:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717ba0;}
case 0x717ba0:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717ba3;}
case 0x717ba3:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717ba6;}
case 0x717ba6:{ // MOVQ qword ptr [EDI + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717baa;}
case 0x717baa:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717bad;}
case 0x717bad:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717bb0;}
case 0x717bb0:{ // MOVQ qword ptr [EDI + 0x60],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717bb4;}
case 0x717bb4:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717bb7;}
case 0x717bb7:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717bbb;}
case 0x717bbb:{ // MOVQ qword ptr [EDI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717bbf;}
case 0x717bbf:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717bc3;}
case 0x717bc3:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x717bc6;}
case 0x717bc6:{ // MOVQ qword ptr [EDI + 0x80],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x717bcd;}
case 0x717bcd:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717bd0;}
case 0x717bd0:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x717bd4;}
case 0x717bd4:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x717bd7;}
case 0x717bd7:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x717bda;}
case 0x717bda:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717bdd;}
case 0x717bdd:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x717be0;}
case 0x717be0:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x717be3;}
case 0x717be3:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717be6;}
case 0x717be6:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x717be9;}
case 0x717be9:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x717bec;}
case 0x717bec:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x717bef;}
case 0x717bef:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x717bf2;}
case 0x717bf2:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x717bf5;}
case 0x717bf5:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x717bf8;}
case 0x717bf8:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717bfb;}
case 0x717bfb:{ // MOVQ qword ptr [EDI + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717bff;}
case 0x717bff:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717c02;}
case 0x717c02:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x717c05;}
case 0x717c05:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c09;}
case 0x717c09:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717c0c;}
case 0x717c0c:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717c0f;}
case 0x717c0f:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c13;}
case 0x717c13:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x717c16;}
case 0x717c16:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x717c19;}
case 0x717c19:{ // MOVQ qword ptr [EDI + 0x48],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c1d;}
case 0x717c1d:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717c20;}
case 0x717c20:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717c23;}
case 0x717c23:{ // MOVQ qword ptr [EDI + 0x58],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c27;}
case 0x717c27:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x717c2a;}
case 0x717c2a:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x717c2d;}
case 0x717c2d:{ // MOVQ qword ptr [EDI + 0x68],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c31;}
case 0x717c31:{ // MOVQ qword ptr [EDI + 0x78],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x717c35;}
case 0x717c35:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x717c3c;}
case 0x717c3c:{ // PCMPEQW XMM3,XMM3
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x717c40;}
case 0x717c40:{ // PSLLW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048742,{r<16>(c,0x12c0),0xfull}));
return 0x717c45;}
case 0x717c45:{ // PSRLW XMM3,0x8
wr<2>(c,0x12c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c0),0x8ull));
wr<2>(c,0x12c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c2),0x8ull));
wr<2>(c,0x12c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c4),0x8ull));
wr<2>(c,0x12c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c6),0x8ull));
wr<2>(c,0x12c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c8),0x8ull));
wr<2>(c,0x12ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ca),0x8ull));
wr<2>(c,0x12cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12cc),0x8ull));
wr<2>(c,0x12ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ce),0x8ull));
return 0x717c4a;}
case 0x717c4a:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717c4f;}
case 0x717c4f:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717c54;}
case 0x717c54:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717c58;}
case 0x717c58:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717c5c;}
case 0x717c5c:{ // MOVDQA XMM0,XMM2
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x717c60;}
case 0x717c60:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x717c64;}
case 0x717c64:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717c68;}
case 0x717c68:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717c6c;}
case 0x717c6c:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x717c70;}
case 0x717c70:{ // MOVDQA XMM5,XMM6
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x717c74;}
case 0x717c74:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717c79;}
case 0x717c79:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717c7e;}
case 0x717c7e:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717c82;}
case 0x717c82:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717c86;}
case 0x717c86:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x717c8a;}
case 0x717c8a:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x717c8e;}
case 0x717c8e:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717c92;}
case 0x717c92:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717c96;}
case 0x717c96:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x717c9a;}
case 0x717c9a:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x717c9e;}
case 0x717c9e:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717ca3;}
case 0x717ca3:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717ca8;}
case 0x717ca8:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717cac;}
case 0x717cac:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717cb0;}
case 0x717cb0:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x717cb4;}
case 0x717cb4:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x717cb8;}
case 0x717cb8:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717cbc;}
case 0x717cbc:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717cc0;}
case 0x717cc0:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x717cc4;}
case 0x717cc4:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x717cc8;}
case 0x717cc8:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717ccd;}
case 0x717ccd:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717cd5;}
case 0x717cd5:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x717cd9;}
case 0x717cd9:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x717cdd;}
case 0x717cdd:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x717ce1;}
case 0x717ce1:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x717ce5;}
case 0x717ce5:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x717ce9;}
case 0x717ce9:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x717ced;}
case 0x717ced:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x717cf1;}
case 0x717cf1:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x717cf5;}
case 0x717cf5:{ // MOVDQA XMM7,XMM3
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x717cf9;}
case 0x717cf9:{ // PSRLW XMM7,0x7
wr<2>(c,0x13c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c0),0x7ull));
wr<2>(c,0x13c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c2),0x7ull));
wr<2>(c,0x13c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c4),0x7ull));
wr<2>(c,0x13c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c6),0x7ull));
wr<2>(c,0x13c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c8),0x7ull));
wr<2>(c,0x13ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ca),0x7ull));
wr<2>(c,0x13cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13cc),0x7ull));
wr<2>(c,0x13ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ce),0x7ull));
return 0x717cfe;}
case 0x717cfe:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x717d02;}
case 0x717d02:{ // MOVDQA XMM6,XMM4
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717d06;}
case 0x717d06:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x717d0a;}
case 0x717d0a:{ // PADDW XMM4,XMM7
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x13c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x13c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x13c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x13c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x13c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x13ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x13cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x13ce)));
return 0x717d0e;}
case 0x717d0e:{ // PSRAW XMM2,0x1
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x1ull}));
return 0x717d13;}
case 0x717d13:{ // PSRAW XMM6,0x1
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x1ull}));
return 0x717d18;}
case 0x717d18:{ // PSRAW XMM0,0x1
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x1ull}));
return 0x717d1d;}
case 0x717d1d:{ // PSRAW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x1ull}));
return 0x717d22;}
case 0x717d22:{ // PMULLW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x717d26;}
case 0x717d26:{ // PMULLW XMM6,XMM4
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1300)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1302)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1304)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1306)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1308)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x130a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x130c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x130e)));
return 0x717d2a;}
case 0x717d2a:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x717d2e;}
case 0x717d2e:{ // PSUBW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x717d32;}
case 0x717d32:{ // MOVDQA XMM7,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717d37;}
case 0x717d37:{ // MOVDQA XMM2,XMM1
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x717d3b;}
case 0x717d3b:{ // MOVDQA xmmword ptr [EBP + -0x40],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717d40;}
case 0x717d40:{ // MOVDQA xmmword ptr [EBP + -0x30],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x717d45;}
case 0x717d45:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717d49;}
case 0x717d49:{ // PSUBW XMM1,XMM7
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x13c0)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x13c4)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x13c6)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x13c8)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x13ca)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x13cc)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x13ce)));
return 0x717d4d;}
case 0x717d4d:{ // PSUBW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x717d51;}
case 0x717d51:{ // PSRAW XMM2,0xf
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0xfull}));
return 0x717d56;}
case 0x717d56:{ // PSRAW XMM6,0xf
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0xfull}));
return 0x717d5b;}
case 0x717d5b:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x717d60;}
case 0x717d60:{ // PSRAW XMM5,0xf
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0xfull}));
return 0x717d65;}
case 0x717d65:{ // MOVDQA XMM7,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717d6a;}
case 0x717d6a:{ // PANDN XMM2,XMM1
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1240)));
return 0x717d6e;}
case 0x717d6e:{ // PANDN XMM6,XMM5
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1380)));
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1340)));
return 0x717d72;}
case 0x717d72:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717d77;}
case 0x717d77:{ // PAND XMM6,XMM2
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1280)));
return 0x717d7b;}
case 0x717d7b:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x717d7f;}
case 0x717d7f:{ // PSUBUSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048747,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x717d83;}
case 0x717d83:{ // PSUBUSW XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x717d87;}
case 0x717d87:{ // POR XMM7,XMM4
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1300)));
return 0x717d8b;}
case 0x717d8b:{ // PSUBW XMM7,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x13c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c0),u<2>(c,0x135c00)));
wr<2>(c,0x13c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c2),u<2>(c,0x135c02)));
wr<2>(c,0x13c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c4),u<2>(c,0x135c04)));
wr<2>(c,0x13c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c6),u<2>(c,0x135c06)));
wr<2>(c,0x13c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c8),u<2>(c,0x135c08)));
wr<2>(c,0x13ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ca),u<2>(c,0x135c0a)));
wr<2>(c,0x13cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13cc),u<2>(c,0x135c0c)));
wr<2>(c,0x13ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ce),u<2>(c,0x135c0e)));
return 0x717d90;}
case 0x717d90:{ // PSRAW XMM7,0xf
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0xfull}));
return 0x717d95;}
case 0x717d95:{ // PAND XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::INT_AND,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1380)));
return 0x717d99;}
case 0x717d99:{ // MOVDQA XMM5,xmmword ptr [EDI]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x1c)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717d9d;}
case 0x717d9d:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717da2;}
case 0x717da2:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717da6;}
case 0x717da6:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717daa;}
case 0x717daa:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x717dae;}
case 0x717dae:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x717db2;}
case 0x717db2:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x717db6;}
case 0x717db6:{ // PSUBW XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717dbb;}
case 0x717dbb:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x717dc0;}
case 0x717dc0:{ // MOVDQA XMM1,XMM4
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717dc4;}
case 0x717dc4:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x717dc8;}
case 0x717dc8:{ // PANDN XMM1,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1240)));
wr<16>(c,0x1240,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x717dcc;}
case 0x717dcc:{ // POR XMM1,XMM4
wr<16>(c,0x1240,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1300)));
return 0x717dd0;}
case 0x717dd0:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717dd8;}
case 0x717dd8:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717de0;}
case 0x717de0:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717de4;}
case 0x717de4:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717de8;}
case 0x717de8:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x717dec;}
case 0x717dec:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x717df0;}
case 0x717df0:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x717df4;}
case 0x717df4:{ // PSUBW XMM4,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717df9;}
case 0x717df9:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x717dfe;}
case 0x717dfe:{ // MOVDQA XMM2,XMM4
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x717e02;}
case 0x717e02:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x717e06;}
case 0x717e06:{ // PANDN XMM2,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x717e0a;}
case 0x717e0a:{ // POR XMM2,XMM4
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1300)));
return 0x717e0e;}
case 0x717e0e:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x717e12;}
case 0x717e12:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x717e16;}
case 0x717e16:{ // PADDW XMM3,XMM3
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
return 0x717e1a;}
case 0x717e1a:{ // PADDW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717e1e;}
case 0x717e1e:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717e23;}
case 0x717e23:{ // PADDW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717e28;}
case 0x717e28:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717e2d;}
case 0x717e2d:{ // PADDW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717e32;}
case 0x717e32:{ // PADDW XMM4,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717e3a;}
case 0x717e3a:{ // PADDW XMM3,XMM4
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1300)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1302)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1304)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1306)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1308)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x130a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x130c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x130e)));
return 0x717e3e;}
case 0x717e3e:{ // MOVDQA XMM4,XMM3
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x717e42;}
case 0x717e42:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717e47;}
case 0x717e47:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717e4b;}
case 0x717e4b:{ // PSLLW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048742,{r<16>(c,0x1300),0x1ull}));
return 0x717e50;}
case 0x717e50:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717e55;}
case 0x717e55:{ // PADDW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717e5a;}
case 0x717e5a:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717e5f;}
case 0x717e5f:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717e63;}
case 0x717e63:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717e67;}
case 0x717e67:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717e6b;}
case 0x717e6b:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717e6f;}
case 0x717e6f:{ // MOVDQ2Q MM4,XMM0
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1200)}));
return 0x717e73;}
case 0x717e73:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717e78;}
case 0x717e78:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717e7c;}
case 0x717e7c:{ // PADDW XMM3,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717e81;}
case 0x717e81:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717e85;}
case 0x717e85:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717e89;}
case 0x717e89:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717e8d;}
case 0x717e8d:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717e92;}
case 0x717e92:{ // PADDW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717e97;}
case 0x717e97:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717e9c;}
case 0x717e9c:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717ea0;}
case 0x717ea0:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717ea4;}
case 0x717ea4:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717ea8;}
case 0x717ea8:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717eac;}
case 0x717eac:{ // MOVDQ2Q MM4,XMM1
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1240)}));
return 0x717eb0;}
case 0x717eb0:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717eb5;}
case 0x717eb5:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717eb9;}
case 0x717eb9:{ // PADDW XMM3,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717ebe;}
case 0x717ebe:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717ec2;}
case 0x717ec2:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717ec6;}
case 0x717ec6:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717eca;}
case 0x717eca:{ // PSUBW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717ecf;}
case 0x717ecf:{ // PADDW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717ed4;}
case 0x717ed4:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717ed9;}
case 0x717ed9:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717edd;}
case 0x717edd:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717ee1;}
case 0x717ee1:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717ee5;}
case 0x717ee5:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717ee9;}
case 0x717ee9:{ // MOVDQ2Q MM4,XMM2
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1280)}));
return 0x717eed;}
case 0x717eed:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717ef2;}
case 0x717ef2:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x717ef6;}
case 0x717ef6:{ // PADDW XMM3,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717efb;}
case 0x717efb:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717eff;}
case 0x717eff:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717f03;}
case 0x717f03:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717f07;}
case 0x717f07:{ // PADDW XMM4,XMM1
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1240)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1242)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1244)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1246)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1248)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x124a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x124c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x124e)));
return 0x717f0b;}
case 0x717f0b:{ // PSUBW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717f10;}
case 0x717f10:{ // PSUBW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717f15;}
case 0x717f15:{ // PADDW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717f1d;}
case 0x717f1d:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717f22;}
case 0x717f22:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717f26;}
case 0x717f26:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717f2a;}
case 0x717f2a:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717f2e;}
case 0x717f2e:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717f32;}
case 0x717f32:{ // MOVDQ2Q MM4,XMM3
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x12c0)}));
return 0x717f36;}
case 0x717f36:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717f3b;}
case 0x717f3b:{ // PSUBW XMM3,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x717f40;}
case 0x717f40:{ // PADDW XMM3,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x717f48;}
case 0x717f48:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717f4c;}
case 0x717f4c:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717f50;}
case 0x717f50:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717f54;}
case 0x717f54:{ // PADDW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717f59;}
case 0x717f59:{ // PSUBW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717f5e;}
case 0x717f5e:{ // PSUBW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717f66;}
case 0x717f66:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x717f6a;}
case 0x717f6a:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717f6f;}
case 0x717f6f:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717f73;}
case 0x717f73:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717f77;}
case 0x717f77:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717f7b;}
case 0x717f7b:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717f7f;}
case 0x717f7f:{ // MOVDQ2Q MM4,XMM4
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1300)}));
return 0x717f83;}
case 0x717f83:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717f88;}
case 0x717f88:{ // PSUBW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x717f8d;}
case 0x717f8d:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x717f91;}
case 0x717f91:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717f95;}
case 0x717f95:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717f99;}
case 0x717f99:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717f9d;}
case 0x717f9d:{ // PADDW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717fa2;}
case 0x717fa2:{ // PSUBW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717fa7;}
case 0x717fa7:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717fac;}
case 0x717fac:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717fb0;}
case 0x717fb0:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717fb4;}
case 0x717fb4:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717fb8;}
case 0x717fb8:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717fbc;}
case 0x717fbc:{ // MOVDQ2Q MM4,XMM5
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1340)}));
return 0x717fc0;}
case 0x717fc0:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x717fc5;}
case 0x717fc5:{ // PSUBW XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x717fca;}
case 0x717fca:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x717fce;}
case 0x717fce:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x717fd2;}
case 0x717fd2:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x717fd6;}
case 0x717fd6:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x717fda;}
case 0x717fda:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x717fdf;}
case 0x717fdf:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x717fe4;}
case 0x717fe4:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x717fe9;}
case 0x717fe9:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717fed;}
case 0x717fed:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x717ff1;}
case 0x717ff1:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x717ff5;}
case 0x717ff5:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
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
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x717ff9;}
case 0x717ff9:{ // MOVDQ2Q MM4,XMM6
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1380)}));
return 0x717ffd;}
case 0x717ffd:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718005;}
default:missing_instruction(c.pc);}}
}
