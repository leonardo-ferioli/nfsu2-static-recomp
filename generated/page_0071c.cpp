#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_71c(Cpu& c){switch(c.pc){
case 0x71c001:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c004;}
case 0x71c004:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c007;}
case 0x71c007:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c00a;}
case 0x71c00a:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c00d;}
case 0x71c00d:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c010;}
case 0x71c010:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c013;}
case 0x71c013:{ // PADDW MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71c016;}
case 0x71c016:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c019;}
case 0x71c019:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c01c;}
case 0x71c01c:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c01f;}
case 0x71c01f:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c022;}
case 0x71c022:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c025;}
case 0x71c025:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c029;}
case 0x71c029:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c02c;}
case 0x71c02c:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c02f;}
case 0x71c02f:{ // NOP
return 0x71c030;}
case 0x71c030:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c034;}
case 0x71c034:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c037;}
case 0x71c037:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c03a;}
case 0x71c03a:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71c03e;}
case 0x71c03e:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c041;}
case 0x71c041:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71c045;}
case 0x71c045:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c049;}
case 0x71c049:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c04c;}
case 0x71c04c:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c050;}
case 0x71c050:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c053;}
case 0x71c053:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c057;}
case 0x71c057:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c05a;}
case 0x71c05a:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71c05e;}
case 0x71c05e:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c061;}
case 0x71c061:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c064;}
case 0x71c064:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71c068;}
case 0x71c068:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c06b;}
case 0x71c06b:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71c06f;}
case 0x71c06f:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71c073;}
case 0x71c073:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c076;}
case 0x71c076:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c079;}
case 0x71c079:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71c07d;}
case 0x71c07d:{ // MOVQ qword ptr [EDX + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c081;}
case 0x71c081:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71c085;}
case 0x71c085:{ // MOVQ qword ptr [EDX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c089;}
case 0x71c089:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c08c;}
case 0x71c08c:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c090;}
case 0x71c090:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c093;}
case 0x71c093:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c096;}
case 0x71c096:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71c09a;}
case 0x71c09a:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c09e;}
case 0x71c09e:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71c0a2;}
case 0x71c0a2:{ // MOVQ qword ptr [EDX + 0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c0a6;}
case 0x71c0a6:{ // MOVQ qword ptr [EDX + 0x70],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c0aa;}
case 0x71c0aa:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c0ad;}
case 0x71c0ad:{ // MOVQ MM2,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0b1;}
case 0x71c0b1:{ // NOP
return 0x71c0b2;}
case 0x71c0b2:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0b6;}
case 0x71c0b6:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c0b9;}
case 0x71c0b9:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0bd;}
case 0x71c0bd:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c0c0;}
case 0x71c0c0:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0c4;}
case 0x71c0c4:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c0c7;}
case 0x71c0c7:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0cb;}
case 0x71c0cb:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c0ce;}
case 0x71c0ce:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71c0d1;}
case 0x71c0d1:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c0d4;}
case 0x71c0d4:{ // MOVQ MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0d8;}
case 0x71c0d8:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c0db;}
case 0x71c0db:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c0de;}
case 0x71c0de:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c0e1;}
case 0x71c0e1:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71c0e5;}
case 0x71c0e5:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c0e8;}
case 0x71c0e8:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c0ec;}
case 0x71c0ec:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c0ef;}
case 0x71c0ef:{ // MOVQ MM7,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c0f3;}
case 0x71c0f3:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c0f6;}
case 0x71c0f6:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c0f9;}
case 0x71c0f9:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c0fc;}
case 0x71c0fc:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c100;}
case 0x71c100:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c103;}
case 0x71c103:{ // MOVQ qword ptr [EDX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c107;}
case 0x71c107:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c10a;}
case 0x71c10a:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c10e;}
case 0x71c10e:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c111;}
case 0x71c111:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71c114;}
case 0x71c114:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c117;}
case 0x71c117:{ // MOVQ qword ptr [EDX + 0x28],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c11b;}
case 0x71c11b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c11e;}
case 0x71c11e:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c122;}
case 0x71c122:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c125;}
case 0x71c125:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c128;}
case 0x71c128:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c12b;}
case 0x71c12b:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c12e;}
case 0x71c12e:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c131;}
case 0x71c131:{ // PADDW MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71c135;}
case 0x71c135:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c138;}
case 0x71c138:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c13b;}
case 0x71c13b:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c13e;}
case 0x71c13e:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c141;}
case 0x71c141:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c144;}
case 0x71c144:{ // MOVQ MM0,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c148;}
case 0x71c148:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c14b;}
case 0x71c14b:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c14e;}
case 0x71c14e:{ // NOP
return 0x71c14f;}
case 0x71c14f:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c153;}
case 0x71c153:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c156;}
case 0x71c156:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c159;}
case 0x71c159:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71c15d;}
case 0x71c15d:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c160;}
case 0x71c160:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71c164;}
case 0x71c164:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c168;}
case 0x71c168:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c16b;}
case 0x71c16b:{ // MOVQ qword ptr [EDX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c16f;}
case 0x71c16f:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c172;}
case 0x71c172:{ // MOVQ qword ptr [EDX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c176;}
case 0x71c176:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c179;}
case 0x71c179:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71c17d;}
case 0x71c17d:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c180;}
case 0x71c180:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c183;}
case 0x71c183:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71c187;}
case 0x71c187:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c18a;}
case 0x71c18a:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71c18e;}
case 0x71c18e:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71c192;}
case 0x71c192:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c195;}
case 0x71c195:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c198;}
case 0x71c198:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71c19c;}
case 0x71c19c:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1a0;}
case 0x71c1a0:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71c1a4;}
case 0x71c1a4:{ // MOVQ qword ptr [EDX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1a8;}
case 0x71c1a8:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c1ab;}
case 0x71c1ab:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c1af;}
case 0x71c1af:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c1b2;}
case 0x71c1b2:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c1b5;}
case 0x71c1b5:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71c1b9;}
case 0x71c1b9:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1bd;}
case 0x71c1bd:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71c1c1;}
case 0x71c1c1:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1c5;}
case 0x71c1c5:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1c9;}
case 0x71c1c9:{ // MOVQ qword ptr [EDX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c1cd;}
case 0x71c1cd:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c1ce;}
case 0x71c1ce:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c1cf;}
case 0x71c1cf:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c1d0;}
case 0x71c1d0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71c1d1;}
case 0x71c1d1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c1d2;}
case 0x71c1d2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71c1d4;}
case 0x71c1d4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c1d7;}
case 0x71c1d7:{ // MOV CX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x71c1da;}
case 0x71c1da:{ // TEST CX,CX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa4400,eval<Op::INT_AND,2,2,2>(r<2>(c,0x4),r<2>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa4400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa4400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa4400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c1dd;}
case 0x71c1dd:{ // JZ 0x0071c218
if(r<1>(c,0x206)){return 0x71c218;}
return 0x71c1df;}
case 0x71c1df:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c1e2;}
case 0x71c1e2:{ // MOVSX EAX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x71c1e5;}
case 0x71c1e5:{ // MOVSX ECX,CX
wr<4>(c,0x4,eval<Op::INT_SEXT,4,2>(r<2>(c,0x4)));
return 0x71c1e8;}
case 0x71c1e8:{ // IMUL EAX,ECX
wu<8>(c,0x74b00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x74c00,eval<Op::INT_SEXT,8,4>(r<4>(c,0x4)));
wu<8>(c,0x74e00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x74b00),u<8>(c,0x74c00)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x0ull));
wu<4>(c,0x75100,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x74e00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x74e00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71c1eb;}
case 0x71c1eb:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c1ee;}
case 0x71c1ee:{ // ADD EAX,0xf
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0xfull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0xfull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c1f1;}
case 0x71c1f1:{ // SAR EAX,0x5
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
return 0x71c1f4;}
case 0x71c1f4:{ // AND EAX,0xffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c1f9;}
case 0x71c1f9:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71c1fb;}
case 0x71c1fb:{ // IMUL EAX,EAX,0x10001
wu<8>(c,0x76700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wu<8>(c,0x76800,eval<Op::INT_SEXT,8,4>(0x10001ull));
wu<8>(c,0x76a00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x76700),u<8>(c,0x76800)));
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x0ull));
wu<4>(c,0x76d00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x76a00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x76a00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x71c201;}
case 0x71c201:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c204;}
case 0x71c204:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c205;}
case 0x71c205:{ // MOV dword ptr [ECX + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71c208;}
case 0x71c208:{ // MOV dword ptr [ECX + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71c20b;}
case 0x71c20b:{ // MOV dword ptr [ECX],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
return 0x71c20d;}
case 0x71c20d:{ // MOV dword ptr [ECX + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71c210;}
case 0x71c210:{ // ADD ECX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c213;}
case 0x71c213:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c214;}
case 0x71c214:{ // JNZ 0x0071c205
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x71c205;}
return 0x71c216;}
case 0x71c216:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c217;}
case 0x71c217:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71c218;}
case 0x71c218:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c219;}
case 0x71c219:{ // MOV EDI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c21c;}
case 0x71c21c:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71c21e;}
case 0x71c21e:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c21f;}
case 0x71c21f:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71c221;}
case 0x71c221:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71c223;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71c221;
return 0x71c223;}
case 0x71c223:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c224;}
case 0x71c224:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c225;}
case 0x71c225:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71c226;}
case 0x71c226:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c227;}
case 0x71c227:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c228;}
case 0x71c228:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c229;}
case 0x71c229:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c22d;}
case 0x71c22d:{ // MOV EDX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c231;}
case 0x71c231:{ // MOV ECX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c233;}
case 0x71c233:{ // MOV EBX,dword ptr [EDX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c236;}
case 0x71c236:{ // MOV ECX,dword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c239;}
case 0x71c239:{ // MOV EBX,dword ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c23c;}
case 0x71c23c:{ // MOV ECX,dword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c23f;}
case 0x71c23f:{ // MOV EBX,dword ptr [EDX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x7cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c242;}
case 0x71c242:{ // MOV EBX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c246;}
case 0x71c246:{ // LEA ECX,[0x8b98e0]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b98e0ull));
return 0x71c24c;}
case 0x71c24c:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c24f;}
case 0x71c24f:{ // PMULLW MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71c252;}
case 0x71c252:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c256;}
case 0x71c256:{ // PMULLW MM1,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71c25a;}
case 0x71c25a:{ // MOVQ MM2,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c25e;}
case 0x71c25e:{ // PMULLW MM2,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),u<2>(c,0x121600)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),u<2>(c,0x121602)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),u<2>(c,0x121604)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),u<2>(c,0x121606)));
return 0x71c262;}
case 0x71c262:{ // MOVQ MM3,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c266;}
case 0x71c266:{ // PMULLW MM3,qword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71c26a;}
case 0x71c26a:{ // MOVQ MM4,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c26e;}
case 0x71c26e:{ // PMULLW MM4,qword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71c272;}
case 0x71c272:{ // MOVQ MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c276;}
case 0x71c276:{ // PMULLW MM5,qword ptr [EBX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71c27a;}
case 0x71c27a:{ // MOVQ MM6,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c27e;}
case 0x71c27e:{ // PMULLW MM6,qword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71c282;}
case 0x71c282:{ // MOVQ MM7,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c286;}
case 0x71c286:{ // PMULLW MM7,qword ptr [EBX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71c28a;}
case 0x71c28a:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c28d;}
case 0x71c28d:{ // MOVQ qword ptr [EDX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c291;}
case 0x71c291:{ // MOVQ qword ptr [EDX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c295;}
case 0x71c295:{ // MOVQ qword ptr [EDX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c299;}
case 0x71c299:{ // MOVQ qword ptr [EDX + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c29d;}
case 0x71c29d:{ // MOVQ qword ptr [EDX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2a1;}
case 0x71c2a1:{ // MOVQ qword ptr [EDX + 0x30],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2a5;}
case 0x71c2a5:{ // MOVQ qword ptr [EDX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2a9;}
case 0x71c2a9:{ // MOVQ MM0,qword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2ad;}
case 0x71c2ad:{ // PMULLW MM0,qword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71c2b1;}
case 0x71c2b1:{ // MOVQ MM1,qword ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2b5;}
case 0x71c2b5:{ // PMULLW MM1,qword ptr [EBX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71c2b9;}
case 0x71c2b9:{ // MOVQ MM2,qword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2bd;}
case 0x71c2bd:{ // PMULLW MM2,qword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),u<2>(c,0x121600)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),u<2>(c,0x121602)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),u<2>(c,0x121604)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),u<2>(c,0x121606)));
return 0x71c2c1;}
case 0x71c2c1:{ // MOVQ MM3,qword ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2c5;}
case 0x71c2c5:{ // PMULLW MM3,qword ptr [EBX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71c2c9;}
case 0x71c2c9:{ // MOVQ MM4,qword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2cd;}
case 0x71c2cd:{ // PMULLW MM4,qword ptr [EBX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71c2d1;}
case 0x71c2d1:{ // MOVQ MM5,qword ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2d5;}
case 0x71c2d5:{ // PMULLW MM5,qword ptr [EBX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71c2d9;}
case 0x71c2d9:{ // MOVQ MM6,qword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2dd;}
case 0x71c2dd:{ // PMULLW MM6,qword ptr [EBX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71c2e1;}
case 0x71c2e1:{ // MOVQ MM7,qword ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c2e5;}
case 0x71c2e5:{ // PMULLW MM7,qword ptr [EBX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71c2e9;}
case 0x71c2e9:{ // MOVQ qword ptr [EDX + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2ed;}
case 0x71c2ed:{ // MOVQ qword ptr [EDX + 0x48],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2f1;}
case 0x71c2f1:{ // MOVQ qword ptr [EDX + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2f5;}
case 0x71c2f5:{ // MOVQ qword ptr [EDX + 0x58],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2f9;}
case 0x71c2f9:{ // MOVQ qword ptr [EDX + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c2fd;}
case 0x71c2fd:{ // MOVQ qword ptr [EDX + 0x68],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c301;}
case 0x71c301:{ // MOVQ qword ptr [EDX + 0x70],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c305;}
case 0x71c305:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c309;}
case 0x71c309:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c30d;}
case 0x71c30d:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c311;}
case 0x71c311:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c314;}
case 0x71c314:{ // MOVQ MM7,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c318;}
case 0x71c318:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c31b;}
case 0x71c31b:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c31f;}
case 0x71c31f:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71c322;}
case 0x71c322:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c325;}
case 0x71c325:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c328;}
case 0x71c328:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c32c;}
case 0x71c32c:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71c32f;}
case 0x71c32f:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c333;}
case 0x71c333:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c336;}
case 0x71c336:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71c339;}
case 0x71c339:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c33c;}
case 0x71c33c:{ // MOVQ MM1,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c340;}
case 0x71c340:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c343;}
case 0x71c343:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c346;}
case 0x71c346:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c349;}
case 0x71c349:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c34c;}
case 0x71c34c:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c34f;}
case 0x71c34f:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c353;}
case 0x71c353:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c356;}
case 0x71c356:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c359;}
case 0x71c359:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71c35c;}
case 0x71c35c:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c360;}
case 0x71c360:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71c363;}
case 0x71c363:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71c366;}
case 0x71c366:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c369;}
case 0x71c369:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c36d;}
case 0x71c36d:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71c370;}
case 0x71c370:{ // MOVQ MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c374;}
case 0x71c374:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c377;}
case 0x71c377:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c37a;}
case 0x71c37a:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c37d;}
case 0x71c37d:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c381;}
case 0x71c381:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c384;}
case 0x71c384:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c388;}
case 0x71c388:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c38b;}
case 0x71c38b:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c38e;}
case 0x71c38e:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c391;}
case 0x71c391:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71c394;}
case 0x71c394:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c397;}
case 0x71c397:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c39b;}
case 0x71c39b:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c39e;}
case 0x71c39e:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c3a2;}
case 0x71c3a2:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c3a5;}
case 0x71c3a5:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c3a9;}
case 0x71c3a9:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71c3ac;}
case 0x71c3ac:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c3af;}
case 0x71c3af:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71c3b2;}
case 0x71c3b2:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c3b6;}
case 0x71c3b6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c3b9;}
case 0x71c3b9:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c3bc;}
case 0x71c3bc:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c3bf;}
case 0x71c3bf:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c3c2;}
case 0x71c3c2:{ // MOVQ MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c3c6;}
case 0x71c3c6:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c3c9;}
case 0x71c3c9:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c3cc;}
case 0x71c3cc:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c3cf;}
case 0x71c3cf:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c3d2;}
case 0x71c3d2:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c3d5;}
case 0x71c3d5:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c3d8;}
case 0x71c3d8:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c3db;}
case 0x71c3db:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71c3de;}
case 0x71c3de:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c3e1;}
case 0x71c3e1:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c3e4;}
case 0x71c3e4:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71c3e7;}
case 0x71c3e7:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c3ea;}
case 0x71c3ea:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c3ed;}
case 0x71c3ed:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c3f1;}
case 0x71c3f1:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c3f4;}
case 0x71c3f4:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71c3f7;}
case 0x71c3f7:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c3fa;}
case 0x71c3fa:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c3fe;}
case 0x71c3fe:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c401;}
case 0x71c401:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c404;}
case 0x71c404:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c407;}
case 0x71c407:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c40a;}
case 0x71c40a:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c40d;}
case 0x71c40d:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c410;}
case 0x71c410:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c413;}
case 0x71c413:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c416;}
case 0x71c416:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c419;}
case 0x71c419:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c41c;}
case 0x71c41c:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c41f;}
case 0x71c41f:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c422;}
case 0x71c422:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c425;}
case 0x71c425:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c429;}
case 0x71c429:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c42c;}
case 0x71c42c:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c42f;}
case 0x71c42f:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71c432;}
case 0x71c432:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c435;}
case 0x71c435:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71c438;}
case 0x71c438:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c43b;}
case 0x71c43b:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71c43e;}
case 0x71c43e:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c441;}
case 0x71c441:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71c444;}
case 0x71c444:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71c447;}
case 0x71c447:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c44a;}
case 0x71c44a:{ // MOVQ qword ptr [EDX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c44e;}
case 0x71c44e:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71c451;}
case 0x71c451:{ // MOVQ qword ptr [EDX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c455;}
case 0x71c455:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71c458;}
case 0x71c458:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c45b;}
case 0x71c45b:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71c45e;}
case 0x71c45e:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c462;}
case 0x71c462:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c465;}
case 0x71c465:{ // MOVQ qword ptr [EDX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c469;}
case 0x71c469:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71c46c;}
case 0x71c46c:{ // MOVQ qword ptr [EDX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c470;}
case 0x71c470:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71c473;}
case 0x71c473:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c476;}
case 0x71c476:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71c479;}
case 0x71c479:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c47c;}
case 0x71c47c:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71c47f;}
case 0x71c47f:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71c482;}
case 0x71c482:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c485;}
case 0x71c485:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c488;}
case 0x71c488:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71c48b;}
case 0x71c48b:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c48f;}
case 0x71c48f:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71c492;}
case 0x71c492:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71c495;}
case 0x71c495:{ // MOVQ qword ptr [EDX + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c499;}
case 0x71c499:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c49d;}
case 0x71c49d:{ // MOVQ MM2,qword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4a1;}
case 0x71c4a1:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4a5;}
case 0x71c4a5:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c4a8;}
case 0x71c4a8:{ // MOVQ MM7,qword ptr [EDX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4ac;}
case 0x71c4ac:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c4af;}
case 0x71c4af:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4b3;}
case 0x71c4b3:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71c4b6;}
case 0x71c4b6:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c4b9;}
case 0x71c4b9:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c4bc;}
case 0x71c4bc:{ // MOVQ MM3,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4c0;}
case 0x71c4c0:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71c4c3;}
case 0x71c4c3:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4c7;}
case 0x71c4c7:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c4ca;}
case 0x71c4ca:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71c4cd;}
case 0x71c4cd:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c4d0;}
case 0x71c4d0:{ // MOVQ MM1,qword ptr [EDX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4d4;}
case 0x71c4d4:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c4d7;}
case 0x71c4d7:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c4da;}
case 0x71c4da:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c4dd;}
case 0x71c4dd:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c4e0;}
case 0x71c4e0:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c4e3;}
case 0x71c4e3:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4e7;}
case 0x71c4e7:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c4ea;}
case 0x71c4ea:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c4ed;}
case 0x71c4ed:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71c4f0;}
case 0x71c4f0:{ // MOVQ MM2,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c4f4;}
case 0x71c4f4:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71c4f7;}
case 0x71c4f7:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71c4fa;}
case 0x71c4fa:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c4fd;}
case 0x71c4fd:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c501;}
case 0x71c501:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71c504;}
case 0x71c504:{ // MOVQ MM5,qword ptr [EDX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c508;}
case 0x71c508:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c50b;}
case 0x71c50b:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c50e;}
case 0x71c50e:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c511;}
case 0x71c511:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c515;}
case 0x71c515:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c518;}
case 0x71c518:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c51c;}
case 0x71c51c:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c51f;}
case 0x71c51f:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c522;}
case 0x71c522:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c525;}
case 0x71c525:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71c528;}
case 0x71c528:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c52b;}
case 0x71c52b:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c52f;}
case 0x71c52f:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c532;}
case 0x71c532:{ // MOVQ qword ptr [EDX + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c536;}
case 0x71c536:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c539;}
case 0x71c539:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c53d;}
case 0x71c53d:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71c540;}
case 0x71c540:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c543;}
case 0x71c543:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71c546;}
case 0x71c546:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c54a;}
case 0x71c54a:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c54d;}
case 0x71c54d:{ // MOVQ MM6,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c551;}
case 0x71c551:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c554;}
case 0x71c554:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c557;}
case 0x71c557:{ // MOVQ MM3,qword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c55b;}
case 0x71c55b:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c55e;}
case 0x71c55e:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c561;}
case 0x71c561:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c564;}
case 0x71c564:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c567;}
case 0x71c567:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c56a;}
case 0x71c56a:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c56d;}
case 0x71c56d:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c570;}
case 0x71c570:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71c573;}
case 0x71c573:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c576;}
case 0x71c576:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c579;}
case 0x71c579:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71c57c;}
case 0x71c57c:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c57f;}
case 0x71c57f:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c582;}
case 0x71c582:{ // MOVQ MM0,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c586;}
case 0x71c586:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c589;}
case 0x71c589:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71c58c;}
case 0x71c58c:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c58f;}
case 0x71c58f:{ // MOVQ MM3,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c593;}
case 0x71c593:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c596;}
case 0x71c596:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c599;}
case 0x71c599:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c59c;}
case 0x71c59c:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c59f;}
case 0x71c59f:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c5a2;}
case 0x71c5a2:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c5a5;}
case 0x71c5a5:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c5a8;}
case 0x71c5a8:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c5ab;}
case 0x71c5ab:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c5ae;}
case 0x71c5ae:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c5b1;}
case 0x71c5b1:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c5b4;}
case 0x71c5b4:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c5b7;}
case 0x71c5b7:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c5ba;}
case 0x71c5ba:{ // MOVQ qword ptr [EDX + 0x50],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c5be;}
case 0x71c5be:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c5c1;}
case 0x71c5c1:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c5c4;}
case 0x71c5c4:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71c5c7;}
case 0x71c5c7:{ // MOVQ qword ptr [EDX + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c5cb;}
case 0x71c5cb:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71c5ce;}
case 0x71c5ce:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c5d1;}
case 0x71c5d1:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71c5d4;}
case 0x71c5d4:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c5d7;}
case 0x71c5d7:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71c5da;}
case 0x71c5da:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71c5dd;}
case 0x71c5dd:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c5e0;}
case 0x71c5e0:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c5e4;}
case 0x71c5e4:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71c5e7;}
case 0x71c5e7:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c5eb;}
case 0x71c5eb:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71c5ee;}
case 0x71c5ee:{ // MOVQ MM4,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c5f2;}
case 0x71c5f2:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71c5f5;}
case 0x71c5f5:{ // MOVQ MM5,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c5f9;}
case 0x71c5f9:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c5fc;}
case 0x71c5fc:{ // MOVQ qword ptr [EDX + 0x78],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c600;}
case 0x71c600:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71c603;}
case 0x71c603:{ // MOVQ qword ptr [EDX + 0x68],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c607;}
case 0x71c607:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71c60a;}
case 0x71c60a:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c60d;}
case 0x71c60d:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71c610;}
case 0x71c610:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c613;}
case 0x71c613:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71c616;}
case 0x71c616:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71c619;}
case 0x71c619:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71c61c;}
case 0x71c61c:{ // MOVQ qword ptr [EDX + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c620;}
case 0x71c620:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71c623;}
case 0x71c623:{ // MOVQ qword ptr [EDX + 0x50],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c627;}
case 0x71c627:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71c62a;}
case 0x71c62a:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71c62d;}
case 0x71c62d:{ // MOVQ qword ptr [EDX + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c631;}
case 0x71c631:{ // MOVQ qword ptr [EDX + 0x60],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c635;}
case 0x71c635:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c639;}
case 0x71c639:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c63d;}
case 0x71c63d:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c640;}
case 0x71c640:{ // MOVQ MM7,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c644;}
case 0x71c644:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c647;}
case 0x71c647:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c64b;}
case 0x71c64b:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71c64e;}
case 0x71c64e:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c651;}
case 0x71c651:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c654;}
case 0x71c654:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c658;}
case 0x71c658:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71c65b;}
case 0x71c65b:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c65f;}
case 0x71c65f:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c662;}
case 0x71c662:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71c665;}
case 0x71c665:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c668;}
case 0x71c668:{ // MOVQ MM1,qword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c66c;}
case 0x71c66c:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c66f;}
case 0x71c66f:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c672;}
case 0x71c672:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c675;}
case 0x71c675:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c678;}
case 0x71c678:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c67b;}
case 0x71c67b:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c67f;}
case 0x71c67f:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c682;}
case 0x71c682:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c685;}
case 0x71c685:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71c688;}
case 0x71c688:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c68c;}
case 0x71c68c:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71c68f;}
case 0x71c68f:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71c692;}
case 0x71c692:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c695;}
case 0x71c695:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c699;}
case 0x71c699:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71c69c;}
case 0x71c69c:{ // MOVQ MM5,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c6a0;}
case 0x71c6a0:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c6a3;}
case 0x71c6a3:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c6a6;}
case 0x71c6a6:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c6a9;}
case 0x71c6a9:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c6ad;}
case 0x71c6ad:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c6b0;}
case 0x71c6b0:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c6b4;}
case 0x71c6b4:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c6b7;}
case 0x71c6b7:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c6ba;}
case 0x71c6ba:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c6bd;}
case 0x71c6bd:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71c6c0;}
case 0x71c6c0:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c6c3;}
case 0x71c6c3:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c6c7;}
case 0x71c6c7:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c6ca;}
case 0x71c6ca:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c6ce;}
case 0x71c6ce:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c6d1;}
case 0x71c6d1:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c6d5;}
case 0x71c6d5:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71c6d8;}
case 0x71c6d8:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c6db;}
case 0x71c6db:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71c6de;}
case 0x71c6de:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c6e2;}
case 0x71c6e2:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c6e5;}
case 0x71c6e5:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c6e8;}
case 0x71c6e8:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c6eb;}
case 0x71c6eb:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c6ee;}
case 0x71c6ee:{ // MOVQ MM3,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c6f2;}
case 0x71c6f2:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c6f5;}
case 0x71c6f5:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c6f8;}
case 0x71c6f8:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c6fb;}
case 0x71c6fb:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c6fe;}
case 0x71c6fe:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c701;}
case 0x71c701:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c704;}
case 0x71c704:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c707;}
case 0x71c707:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71c70a;}
case 0x71c70a:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c70d;}
case 0x71c70d:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c710;}
case 0x71c710:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71c713;}
case 0x71c713:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c716;}
case 0x71c716:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c719;}
case 0x71c719:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c71d;}
case 0x71c71d:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c720;}
case 0x71c720:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71c723;}
case 0x71c723:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c726;}
case 0x71c726:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c72a;}
case 0x71c72a:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c72d;}
case 0x71c72d:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c730;}
case 0x71c730:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71c734;}
case 0x71c734:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c737;}
case 0x71c737:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71c73b;}
case 0x71c73b:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c73f;}
case 0x71c73f:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c742;}
case 0x71c742:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c746;}
case 0x71c746:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c749;}
case 0x71c749:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c74d;}
case 0x71c74d:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c750;}
case 0x71c750:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71c754;}
case 0x71c754:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c757;}
case 0x71c757:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c75a;}
case 0x71c75a:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71c75e;}
case 0x71c75e:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c761;}
case 0x71c761:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71c765;}
case 0x71c765:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71c769;}
case 0x71c769:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c76c;}
case 0x71c76c:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c76f;}
case 0x71c76f:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71c773;}
case 0x71c773:{ // MOVQ qword ptr [EDX + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c777;}
case 0x71c777:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71c77b;}
case 0x71c77b:{ // MOVQ qword ptr [EDX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c77f;}
case 0x71c77f:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c782;}
case 0x71c782:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c786;}
case 0x71c786:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c789;}
case 0x71c789:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c78c;}
case 0x71c78c:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71c790;}
case 0x71c790:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c794;}
case 0x71c794:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71c798;}
case 0x71c798:{ // MOVQ qword ptr [EDX + 0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c79c;}
case 0x71c79c:{ // MOVQ qword ptr [EDX + 0x70],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c7a0;}
case 0x71c7a0:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c7a3;}
case 0x71c7a3:{ // MOVQ MM2,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7a7;}
case 0x71c7a7:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7ab;}
case 0x71c7ab:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c7ae;}
case 0x71c7ae:{ // MOVQ MM7,qword ptr [EDX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7b2;}
case 0x71c7b2:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c7b5;}
case 0x71c7b5:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7b9;}
case 0x71c7b9:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71c7bc;}
case 0x71c7bc:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71c7bf;}
case 0x71c7bf:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c7c2;}
case 0x71c7c2:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7c6;}
case 0x71c7c6:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71c7c9;}
case 0x71c7c9:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7cd;}
case 0x71c7cd:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c7d0;}
case 0x71c7d0:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71c7d3;}
case 0x71c7d3:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c7d6;}
case 0x71c7d6:{ // MOVQ MM1,qword ptr [EDX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7da;}
case 0x71c7da:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c7dd;}
case 0x71c7dd:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c7e0;}
case 0x71c7e0:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c7e3;}
case 0x71c7e3:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c7e6;}
case 0x71c7e6:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c7e9;}
case 0x71c7e9:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7ed;}
case 0x71c7ed:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c7f0;}
case 0x71c7f0:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c7f3;}
case 0x71c7f3:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71c7f6;}
case 0x71c7f6:{ // MOVQ MM2,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c7fa;}
case 0x71c7fa:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71c7fd;}
case 0x71c7fd:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71c800;}
case 0x71c800:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c803;}
case 0x71c803:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c807;}
case 0x71c807:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71c80a;}
case 0x71c80a:{ // MOVQ MM5,qword ptr [EDX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c80e;}
case 0x71c80e:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c811;}
case 0x71c811:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c814;}
case 0x71c814:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c817;}
case 0x71c817:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c81b;}
case 0x71c81b:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c81e;}
case 0x71c81e:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c822;}
case 0x71c822:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c825;}
case 0x71c825:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c828;}
case 0x71c828:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c82b;}
case 0x71c82b:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71c82e;}
case 0x71c82e:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c831;}
case 0x71c831:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c835;}
case 0x71c835:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c838;}
case 0x71c838:{ // MOVQ qword ptr [EDX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c83c;}
case 0x71c83c:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c83f;}
case 0x71c83f:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c843;}
case 0x71c843:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71c846;}
case 0x71c846:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c849;}
case 0x71c849:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71c84c;}
case 0x71c84c:{ // MOVQ qword ptr [EDX + 0x28],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c850;}
case 0x71c850:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c853;}
case 0x71c853:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c857;}
case 0x71c857:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c85a;}
case 0x71c85a:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71c85d;}
case 0x71c85d:{ // MOVQ MM3,qword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c861;}
case 0x71c861:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71c864;}
case 0x71c864:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71c867;}
case 0x71c867:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71c86a;}
case 0x71c86a:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71c86d;}
case 0x71c86d:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71c870;}
case 0x71c870:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c873;}
case 0x71c873:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c876;}
case 0x71c876:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71c879;}
case 0x71c879:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71c87c;}
case 0x71c87c:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c87f;}
case 0x71c87f:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71c882;}
case 0x71c882:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c885;}
case 0x71c885:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71c888;}
case 0x71c888:{ // MOVQ MM0,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c88c;}
case 0x71c88c:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71c88f;}
case 0x71c88f:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71c892;}
case 0x71c892:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71c895;}
case 0x71c895:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71c899;}
case 0x71c899:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71c89c;}
case 0x71c89c:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c89f;}
case 0x71c89f:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71c8a3;}
case 0x71c8a3:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71c8a6;}
case 0x71c8a6:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71c8aa;}
case 0x71c8aa:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c8ae;}
case 0x71c8ae:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71c8b1;}
case 0x71c8b1:{ // MOVQ qword ptr [EDX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c8b5;}
case 0x71c8b5:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71c8b8;}
case 0x71c8b8:{ // MOVQ qword ptr [EDX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c8bc;}
case 0x71c8bc:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71c8bf;}
case 0x71c8bf:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71c8c3;}
case 0x71c8c3:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71c8c6;}
case 0x71c8c6:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71c8c9;}
case 0x71c8c9:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71c8cd;}
case 0x71c8cd:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71c8d0;}
case 0x71c8d0:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71c8d4;}
case 0x71c8d4:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71c8d8;}
case 0x71c8d8:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71c8db;}
case 0x71c8db:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71c8de;}
case 0x71c8de:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71c8e2;}
case 0x71c8e2:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c8e6;}
case 0x71c8e6:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71c8ea;}
case 0x71c8ea:{ // MOVQ qword ptr [EDX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c8ee;}
case 0x71c8ee:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71c8f1;}
case 0x71c8f1:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71c8f5;}
case 0x71c8f5:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71c8f8;}
case 0x71c8f8:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71c8fb;}
case 0x71c8fb:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71c8ff;}
case 0x71c8ff:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c903;}
case 0x71c903:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71c907;}
case 0x71c907:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c90b;}
case 0x71c90b:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c90f;}
case 0x71c90f:{ // MOVQ qword ptr [EDX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c913;}
case 0x71c913:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c914;}
case 0x71c914:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c915;}
case 0x71c915:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71c916;}
case 0x71c916:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71c917;}
case 0x71c917:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c918;}
case 0x71c918:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c919;}
case 0x71c919:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71c91a;}
case 0x71c91a:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c91e;}
case 0x71c91e:{ // MOV EDX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c922;}
case 0x71c922:{ // MOV ECX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c924;}
case 0x71c924:{ // MOV EBX,dword ptr [EDX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c927;}
case 0x71c927:{ // MOV ECX,dword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c92a;}
case 0x71c92a:{ // MOV EBX,dword ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c92d;}
case 0x71c92d:{ // MOV ECX,dword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c930;}
case 0x71c930:{ // MOV EBX,dword ptr [EDX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x7cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c933;}
case 0x71c933:{ // MOV EBX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71c937;}
case 0x71c937:{ // LEA ECX,[0x8b98e0]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b98e0ull));
return 0x71c93d;}
case 0x71c93d:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c940;}
case 0x71c940:{ // PMULLW MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71c943;}
case 0x71c943:{ // MOVQ MM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c947;}
case 0x71c947:{ // PMULLW MM1,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71c94b;}
case 0x71c94b:{ // MOVQ MM2,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c94f;}
case 0x71c94f:{ // PMULLW MM2,qword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),u<2>(c,0x121600)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),u<2>(c,0x121602)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),u<2>(c,0x121604)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),u<2>(c,0x121606)));
return 0x71c953;}
case 0x71c953:{ // MOVQ MM3,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c957;}
case 0x71c957:{ // PMULLW MM3,qword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71c95b;}
case 0x71c95b:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71c95e;}
case 0x71c95e:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x71c961;}
case 0x71c961:{ // MOVQ qword ptr [EDX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c965;}
case 0x71c965:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c969;}
case 0x71c969:{ // MOVQ qword ptr [EDX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c96d;}
case 0x71c96d:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c971;}
case 0x71c971:{ // MOVQ qword ptr [EDX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c975;}
case 0x71c975:{ // MOVQ qword ptr [EDX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c979;}
case 0x71c979:{ // MOVQ qword ptr [EDX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c97d;}
case 0x71c97d:{ // MOVQ qword ptr [EDX + 0x40],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c981;}
case 0x71c981:{ // MOVQ qword ptr [EDX + 0x48],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c985;}
case 0x71c985:{ // MOVQ qword ptr [EDX + 0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c989;}
case 0x71c989:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c98d;}
case 0x71c98d:{ // MOVQ qword ptr [EDX + 0x60],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c991;}
case 0x71c991:{ // MOVQ qword ptr [EDX + 0x68],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c995;}
case 0x71c995:{ // MOVQ qword ptr [EDX + 0x70],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c999;}
case 0x71c999:{ // MOVQ qword ptr [EDX + 0x78],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c99d;}
case 0x71c99d:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9a1;}
case 0x71c9a1:{ // NOP
return 0x71c9a2;}
case 0x71c9a2:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9a6;}
case 0x71c9a6:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71c9a9;}
case 0x71c9a9:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9ad;}
case 0x71c9ad:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71c9b0;}
case 0x71c9b0:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9b4;}
case 0x71c9b4:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71c9b7;}
case 0x71c9b7:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9bb;}
case 0x71c9bb:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71c9be;}
case 0x71c9be:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71c9c1;}
case 0x71c9c1:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71c9c4;}
case 0x71c9c4:{ // MOVQ MM5,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9c8;}
case 0x71c9c8:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71c9cb;}
case 0x71c9cb:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71c9ce;}
case 0x71c9ce:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71c9d1;}
case 0x71c9d1:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71c9d5;}
case 0x71c9d5:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71c9d8;}
case 0x71c9d8:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71c9dc;}
case 0x71c9dc:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71c9df;}
case 0x71c9df:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9e3;}
case 0x71c9e3:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71c9e6;}
case 0x71c9e6:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71c9e9;}
case 0x71c9e9:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71c9ec;}
case 0x71c9ec:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71c9f0;}
case 0x71c9f0:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71c9f3;}
case 0x71c9f3:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71c9f7;}
case 0x71c9f7:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71c9fa;}
case 0x71c9fa:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71c9fe;}
case 0x71c9fe:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ca01;}
case 0x71ca01:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71ca04;}
case 0x71ca04:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ca07;}
case 0x71ca07:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ca0b;}
case 0x71ca0b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ca0e;}
case 0x71ca0e:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ca11;}
case 0x71ca11:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71ca14;}
case 0x71ca14:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71ca17;}
case 0x71ca17:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71ca1a;}
case 0x71ca1a:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71ca1d;}
case 0x71ca1d:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71ca20;}
case 0x71ca20:{ // PADDW MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71ca23;}
case 0x71ca23:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71ca26;}
case 0x71ca26:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71ca29;}
case 0x71ca29:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71ca2c;}
case 0x71ca2c:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71ca2f;}
case 0x71ca2f:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71ca32;}
case 0x71ca32:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ca36;}
case 0x71ca36:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71ca39;}
case 0x71ca39:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71ca3c;}
case 0x71ca3c:{ // NOP
return 0x71ca3d;}
case 0x71ca3d:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ca41;}
case 0x71ca41:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71ca44;}
case 0x71ca44:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71ca47;}
case 0x71ca47:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71ca4a;}
case 0x71ca4a:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71ca4d;}
case 0x71ca4d:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71ca50;}
case 0x71ca50:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71ca53;}
case 0x71ca53:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ca56;}
case 0x71ca56:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71ca59;}
case 0x71ca59:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71ca5c;}
case 0x71ca5c:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ca5f;}
case 0x71ca5f:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71ca62;}
case 0x71ca62:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71ca65;}
case 0x71ca65:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71ca68;}
case 0x71ca68:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ca6c;}
case 0x71ca6c:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71ca6f;}
case 0x71ca6f:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71ca72;}
case 0x71ca72:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71ca75;}
case 0x71ca75:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71ca78;}
case 0x71ca78:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71ca7b;}
case 0x71ca7b:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71ca7e;}
case 0x71ca7e:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71ca81;}
case 0x71ca81:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71ca84;}
case 0x71ca84:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71ca87;}
case 0x71ca87:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71ca8a;}
case 0x71ca8a:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71ca8d;}
case 0x71ca8d:{ // MOVQ qword ptr [EDX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ca91;}
case 0x71ca91:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71ca94;}
case 0x71ca94:{ // MOVQ qword ptr [EDX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ca98;}
case 0x71ca98:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71ca9b;}
case 0x71ca9b:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ca9e;}
case 0x71ca9e:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71caa1;}
case 0x71caa1:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71caa5;}
case 0x71caa5:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71caa8;}
case 0x71caa8:{ // MOVQ qword ptr [EDX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71caac;}
case 0x71caac:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71caaf;}
case 0x71caaf:{ // MOVQ qword ptr [EDX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cab3;}
case 0x71cab3:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71cab6;}
case 0x71cab6:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71cab9;}
case 0x71cab9:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71cabc;}
case 0x71cabc:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71cabf;}
case 0x71cabf:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71cac2;}
case 0x71cac2:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71cac5;}
case 0x71cac5:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71cac8;}
case 0x71cac8:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71cacb;}
case 0x71cacb:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71cace;}
case 0x71cace:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cad2;}
case 0x71cad2:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71cad5;}
case 0x71cad5:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71cad8;}
case 0x71cad8:{ // MOVQ qword ptr [EDX + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cadc;}
case 0x71cadc:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cae0;}
case 0x71cae0:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cae4;}
case 0x71cae4:{ // NOP
return 0x71cae5;}
case 0x71cae5:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cae9;}
case 0x71cae9:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71caec;}
case 0x71caec:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71caf0;}
case 0x71caf0:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71caf3;}
case 0x71caf3:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71caf7;}
case 0x71caf7:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71cafa;}
case 0x71cafa:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cafe;}
case 0x71cafe:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71cb01;}
case 0x71cb01:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71cb04;}
case 0x71cb04:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71cb07;}
case 0x71cb07:{ // MOVQ MM5,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb0b;}
case 0x71cb0b:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71cb0e;}
case 0x71cb0e:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71cb11;}
case 0x71cb11:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71cb14;}
case 0x71cb14:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71cb18;}
case 0x71cb18:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71cb1b;}
case 0x71cb1b:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71cb1f;}
case 0x71cb1f:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71cb22;}
case 0x71cb22:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb26;}
case 0x71cb26:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71cb29;}
case 0x71cb29:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71cb2c;}
case 0x71cb2c:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71cb2f;}
case 0x71cb2f:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71cb33;}
case 0x71cb33:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71cb36;}
case 0x71cb36:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cb3a;}
case 0x71cb3a:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71cb3d;}
case 0x71cb3d:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb41;}
case 0x71cb41:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71cb44;}
case 0x71cb44:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71cb47;}
case 0x71cb47:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71cb4a;}
case 0x71cb4a:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cb4e;}
case 0x71cb4e:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71cb51;}
case 0x71cb51:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb54;}
case 0x71cb54:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71cb57;}
case 0x71cb57:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71cb5a;}
case 0x71cb5a:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71cb5d;}
case 0x71cb5d:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71cb60;}
case 0x71cb60:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71cb63;}
case 0x71cb63:{ // PADDW MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71cb66;}
case 0x71cb66:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71cb69;}
case 0x71cb69:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71cb6c;}
case 0x71cb6c:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71cb6f;}
case 0x71cb6f:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71cb72;}
case 0x71cb72:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71cb75;}
case 0x71cb75:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb79;}
case 0x71cb79:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71cb7c;}
case 0x71cb7c:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71cb7f;}
case 0x71cb7f:{ // NOP
return 0x71cb80;}
case 0x71cb80:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71cb84;}
case 0x71cb84:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71cb87;}
case 0x71cb87:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71cb8a;}
case 0x71cb8a:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71cb8e;}
case 0x71cb8e:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71cb91;}
case 0x71cb91:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71cb95;}
case 0x71cb95:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cb99;}
case 0x71cb99:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71cb9c;}
case 0x71cb9c:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cba0;}
case 0x71cba0:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71cba3;}
case 0x71cba3:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cba7;}
case 0x71cba7:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71cbaa;}
case 0x71cbaa:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71cbae;}
case 0x71cbae:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71cbb1;}
case 0x71cbb1:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71cbb4;}
case 0x71cbb4:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71cbb8;}
case 0x71cbb8:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71cbbb;}
case 0x71cbbb:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71cbbf;}
case 0x71cbbf:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71cbc3;}
case 0x71cbc3:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71cbc6;}
case 0x71cbc6:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71cbc9;}
case 0x71cbc9:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71cbcd;}
case 0x71cbcd:{ // MOVQ qword ptr [EDX + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cbd1;}
case 0x71cbd1:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71cbd5;}
case 0x71cbd5:{ // MOVQ qword ptr [EDX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cbd9;}
case 0x71cbd9:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71cbdc;}
case 0x71cbdc:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71cbe0;}
case 0x71cbe0:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71cbe3;}
case 0x71cbe3:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71cbe6;}
case 0x71cbe6:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71cbea;}
case 0x71cbea:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cbee;}
case 0x71cbee:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71cbf2;}
case 0x71cbf2:{ // MOVQ qword ptr [EDX + 0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cbf6;}
case 0x71cbf6:{ // MOVQ qword ptr [EDX + 0x70],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cbfa;}
case 0x71cbfa:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71cbfd;}
case 0x71cbfd:{ // MOVQ MM2,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc01;}
case 0x71cc01:{ // NOP
return 0x71cc02;}
case 0x71cc02:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc06;}
case 0x71cc06:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71cc09;}
case 0x71cc09:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc0d;}
case 0x71cc0d:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71cc10;}
case 0x71cc10:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc14;}
case 0x71cc14:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71cc17;}
case 0x71cc17:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc1b;}
case 0x71cc1b:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71cc1e;}
case 0x71cc1e:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71cc21;}
case 0x71cc21:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71cc24;}
case 0x71cc24:{ // MOVQ MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc28;}
case 0x71cc28:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71cc2b;}
case 0x71cc2b:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71cc2e;}
case 0x71cc2e:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71cc31;}
case 0x71cc31:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71cc35;}
case 0x71cc35:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71cc38;}
case 0x71cc38:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71cc3c;}
case 0x71cc3c:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71cc3f;}
case 0x71cc3f:{ // MOVQ MM7,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc43;}
case 0x71cc43:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71cc46;}
case 0x71cc46:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71cc49;}
case 0x71cc49:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71cc4c;}
case 0x71cc4c:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71cc50;}
case 0x71cc50:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71cc53;}
case 0x71cc53:{ // MOVQ qword ptr [EDX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cc57;}
case 0x71cc57:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71cc5a;}
case 0x71cc5a:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc5e;}
case 0x71cc5e:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71cc61;}
case 0x71cc61:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71cc64;}
case 0x71cc64:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71cc67;}
case 0x71cc67:{ // MOVQ qword ptr [EDX + 0x28],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cc6b;}
case 0x71cc6b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71cc6e;}
case 0x71cc6e:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc72;}
case 0x71cc72:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71cc75;}
case 0x71cc75:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71cc78;}
case 0x71cc78:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71cc7b;}
case 0x71cc7b:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71cc7e;}
case 0x71cc7e:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71cc81;}
case 0x71cc81:{ // PADDW MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71cc85;}
case 0x71cc85:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71cc88;}
case 0x71cc88:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71cc8b;}
case 0x71cc8b:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71cc8e;}
case 0x71cc8e:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71cc91;}
case 0x71cc91:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71cc94;}
case 0x71cc94:{ // MOVQ MM0,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71cc98;}
case 0x71cc98:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71cc9b;}
case 0x71cc9b:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71cc9e;}
case 0x71cc9e:{ // NOP
return 0x71cc9f;}
case 0x71cc9f:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71cca3;}
case 0x71cca3:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71cca6;}
case 0x71cca6:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71cca9;}
case 0x71cca9:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71ccad;}
case 0x71ccad:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71ccb0;}
case 0x71ccb0:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71ccb4;}
case 0x71ccb4:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ccb8;}
case 0x71ccb8:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71ccbb;}
case 0x71ccbb:{ // MOVQ qword ptr [EDX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ccbf;}
case 0x71ccbf:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71ccc2;}
case 0x71ccc2:{ // MOVQ qword ptr [EDX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ccc6;}
case 0x71ccc6:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71ccc9;}
case 0x71ccc9:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71cccd;}
case 0x71cccd:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ccd0;}
case 0x71ccd0:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ccd3;}
case 0x71ccd3:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71ccd7;}
case 0x71ccd7:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71ccda;}
case 0x71ccda:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71ccde;}
case 0x71ccde:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71cce2;}
case 0x71cce2:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71cce5;}
case 0x71cce5:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71cce8;}
case 0x71cce8:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71ccec;}
case 0x71ccec:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ccf0;}
case 0x71ccf0:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71ccf4;}
case 0x71ccf4:{ // MOVQ qword ptr [EDX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ccf8;}
case 0x71ccf8:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71ccfb;}
case 0x71ccfb:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71ccff;}
case 0x71ccff:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71cd02;}
case 0x71cd02:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71cd05;}
case 0x71cd05:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71cd09;}
case 0x71cd09:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cd0d;}
case 0x71cd0d:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71cd11;}
case 0x71cd11:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cd15;}
case 0x71cd15:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cd19;}
case 0x71cd19:{ // MOVQ qword ptr [EDX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71cd1d;}
case 0x71cd1d:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71cd1e;}
case 0x71cd1e:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71cd1f;}
case 0x71cd1f:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71cd20;}
case 0x71cd20:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71cd21;}
default:missing_instruction(c.pc);}}
}
