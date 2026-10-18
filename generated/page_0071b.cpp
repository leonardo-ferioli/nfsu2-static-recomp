#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_71b(Cpu& c){switch(c.pc){
case 0x71b002:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b005;}
case 0x71b005:{ // MOVD EBP,MM3
wr<4>(c,0x14,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x71b008;}
case 0x71b008:{ // PXOR MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x71b00b;}
case 0x71b00b:{ // MOV word ptr [EBX + 0x1],BP
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x14)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71b00f;}
case 0x71b00f:{ // PSUBSW MM1,MM0
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x71b012;}
case 0x71b012:{ // SHR EBP,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x14),u<4>(c,0xa1b00)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71b015;}
case 0x71b015:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b018;}
case 0x71b018:{ // MOV word ptr [EBX + ECX*0x1 + 0x1],BP
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x14)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b01d;}
case 0x71b01d:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x71b021;}
case 0x71b021:{ // POR MM7,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b025;}
case 0x71b025:{ // PSUBW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b028;}
case 0x71b028:{ // MOVD EBP,MM3
wr<4>(c,0x14,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x71b02b;}
case 0x71b02b:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b02e;}
case 0x71b02e:{ // MOV word ptr [EBX + ECX*0x2 + 0x1],BP
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x14)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b033;}
case 0x71b033:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x71b037;}
case 0x71b037:{ // SHR EBP,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x14),u<4>(c,0xa1b00)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x71b03a;}
case 0x71b03a:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71b03d;}
case 0x71b03d:{ // MOV word ptr [EBX + EDX*0x1 + 0x1],BP
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x14)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b042;}
case 0x71b042:{ // PSUBSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71b045;}
case 0x71b045:{ // MOVD MM5,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b049;}
case 0x71b049:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x71b04c;}
case 0x71b04c:{ // PMULLW MM2,MM7
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1170)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1172)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1174)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1176)));
return 0x71b04f;}
case 0x71b04f:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71b052;}
case 0x71b052:{ // MOVD MM3,dword ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b056;}
case 0x71b056:{ // PUNPCKLBW MM5,MM6
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b059;}
case 0x71b059:{ // LEA EBX,[EBX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71b05c;}
case 0x71b05c:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b05f;}
case 0x71b05f:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71b062;}
case 0x71b062:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x71b065;}
case 0x71b065:{ // PACKUSWB MM3,MM3
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
return 0x71b068;}
case 0x71b068:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71b069;}
case 0x71b069:{ // PACKUSWB MM5,MM5
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
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
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x71b06c;}
case 0x71b06c:{ // PUNPCKLBW MM3,MM5
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71b06f;}
case 0x71b06f:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x71b072;}
case 0x71b072:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x71b076;}
case 0x71b076:{ // MOV word ptr [EBX + 0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71b07a;}
case 0x71b07a:{ // SHR EAX,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x0),u<4>(c,0xa1b00)));
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
return 0x71b07d;}
case 0x71b07d:{ // MOV word ptr [EBX + ECX*0x1 + 0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b082;}
case 0x71b082:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x71b085;}
case 0x71b085:{ // MOV word ptr [EBX + ECX*0x2 + 0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b08a;}
case 0x71b08a:{ // SHR EAX,0x10
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x0),u<4>(c,0xa1b00)));
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
return 0x71b08d;}
case 0x71b08d:{ // MOV word ptr [EBX + EDX*0x1 + 0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71b092;}
case 0x71b092:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71b093;}
case 0x71b093:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71b094;}
case 0x71b094:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71b095;}
case 0x71b095:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b096;}
case 0x71b096:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71b098;}
case 0x71b098:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b099;}
case 0x71b099:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b09c;}
case 0x71b09c:{ // NEG EAX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_2COMP,4,4>(r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71b09e;}
case 0x71b09e:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b09f;}
case 0x71b09f:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71b0a2;}
case 0x71b0a2:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b0a5;}
case 0x71b0a5:{ // MOV EBX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b0a8;}
case 0x71b0a8:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b0ab;}
case 0x71b0ab:{ // MOVD MM1,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b0ae;}
case 0x71b0ae:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71b0b1;}
case 0x71b0b1:{ // MOVD MM0,dword ptr [EBX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b0b5;}
case 0x71b0b5:{ // PUNPCKLBW MM1,MM4
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71b0b8;}
case 0x71b0b8:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b0bb;}
case 0x71b0bb:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71b0be;}
case 0x71b0be:{ // MOVD MM6,dword ptr [EBX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b0c2;}
case 0x71b0c2:{ // PSUBW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x71b0c5;}
case 0x71b0c5:{ // MOVQ MM2,qword ptr [EBX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b0c9;}
case 0x71b0c9:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b0cc;}
case 0x71b0cc:{ // PUNPCKLBW MM6,MM4
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71b0cf;}
case 0x71b0cf:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71b0d2;}
case 0x71b0d2:{ // PUNPCKLBW MM2,MM4
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71b0d5;}
case 0x71b0d5:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71b0d8;}
case 0x71b0d8:{ // PADDW MM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x71b0dc;}
case 0x71b0dc:{ // PSUBW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x71b0df;}
case 0x71b0df:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b0e2;}
case 0x71b0e2:{ // PADDW MM6,MM1
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1110)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1112)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1114)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1116)));
return 0x71b0e5;}
case 0x71b0e5:{ // MOVD MM5,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b0e9;}
case 0x71b0e9:{ // PSRAW MM6,0x3
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x3ull}));
return 0x71b0ed;}
case 0x71b0ed:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b0f0;}
case 0x71b0f0:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x71b0f4;}
case 0x71b0f4:{ // MOVD MM7,dword ptr [EBX + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b0f9;}
case 0x71b0f9:{ // PXOR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x71b0fc;}
case 0x71b0fc:{ // PSUBSW MM1,MM6
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x71b0ff;}
case 0x71b0ff:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x71b102;}
case 0x71b102:{ // PUNPCKLBW MM5,MM0
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71b105;}
case 0x71b105:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b108;}
case 0x71b108:{ // POR MM6,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x71b10c;}
case 0x71b10c:{ // PUNPCKLBW MM7,MM0
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1100)));
return 0x71b10f;}
case 0x71b10f:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71b112;}
case 0x71b112:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71b115;}
case 0x71b115:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b118;}
case 0x71b118:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x71b11c;}
case 0x71b11c:{ // MOVD MM0,dword ptr [EBX + ECX*0x2 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b121;}
case 0x71b121:{ // PXOR MM4,MM3
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1130)));
return 0x71b124;}
case 0x71b124:{ // MOVD MM1,dword ptr [EBX + EDX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b129;}
case 0x71b129:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b12c;}
case 0x71b12c:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x71b12f;}
case 0x71b12f:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x71b132;}
case 0x71b132:{ // PUNPCKLBW MM0,MM3
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71b135;}
case 0x71b135:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b138;}
case 0x71b138:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71b13b;}
case 0x71b13b:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71b13e;}
case 0x71b13e:{ // PUNPCKLBW MM1,MM3
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71b141;}
case 0x71b141:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71b144;}
case 0x71b144:{ // PADDW MM5,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x71b148;}
case 0x71b148:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71b14b;}
case 0x71b14b:{ // PADDW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71b14e;}
case 0x71b14e:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71b151;}
case 0x71b151:{ // MOVD MM7,dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b154;}
case 0x71b154:{ // PSRAW MM0,0x3
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x3ull}));
return 0x71b158;}
case 0x71b158:{ // MOVD MM3,dword ptr [EBX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b15c;}
case 0x71b15c:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b15f;}
case 0x71b15f:{ // PSUBW MM7,MM2
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1120)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1124)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1126)));
return 0x71b162;}
case 0x71b162:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b165;}
case 0x71b165:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71b168;}
case 0x71b168:{ // PACKUSWB MM7,MM7
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
return 0x71b16b;}
case 0x71b16b:{ // PACKUSWB MM3,MM3
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
return 0x71b16e;}
case 0x71b16e:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b171;}
case 0x71b171:{ // MOVD dword ptr [EBX],MM7
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1170),0x0ull));
wm<4>(c,r<4>(c,0xc),u<4>(c,0x17200));
return 0x71b174;}
case 0x71b174:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x71b178;}
case 0x71b178:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b17b;}
case 0x71b17b:{ // PXOR MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x71b17e;}
case 0x71b17e:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b181;}
case 0x71b181:{ // PSUBSW MM1,MM0
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x71b184;}
case 0x71b184:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b187;}
case 0x71b187:{ // POR MM7,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b18b;}
case 0x71b18b:{ // PSUBW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b18e;}
case 0x71b18e:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b191;}
case 0x71b191:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x71b195;}
case 0x71b195:{ // MOVD dword ptr [EBX + ECX*0x1],MM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71b199;}
case 0x71b199:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71b19c;}
case 0x71b19c:{ // PSUBSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x71b19f;}
case 0x71b19f:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71b1a2;}
case 0x71b1a2:{ // MOVD MM5,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b1a6;}
case 0x71b1a6:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x71b1a9;}
case 0x71b1a9:{ // MOVD MM3,dword ptr [EBX + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71b1ae;}
case 0x71b1ae:{ // PMULLW MM2,MM7
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1170)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1172)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1174)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1176)));
return 0x71b1b1;}
case 0x71b1b1:{ // PUNPCKLBW MM5,MM6
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b1b4;}
case 0x71b1b4:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x71b1b7;}
case 0x71b1b7:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71b1ba;}
case 0x71b1ba:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x71b1bd;}
case 0x71b1bd:{ // PACKUSWB MM3,MM3
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
return 0x71b1c0;}
case 0x71b1c0:{ // PACKUSWB MM5,MM5
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
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
wr<1>(c,0x1150,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x71b1c3;}
case 0x71b1c3:{ // MOVD dword ptr [EBX + ECX*0x1 + 0x4],MM3
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0xc)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0x17200));
return 0x71b1c8;}
case 0x71b1c8:{ // MOVD dword ptr [EBX + 0x4],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x71b1cc;}
case 0x71b1cc:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71b1cd;}
case 0x71b1cd:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x71b1ce;}
case 0x71b1ce:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71b1cf;}
case 0x71b1cf:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b1d0;}
case 0x71b1d0:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b1d1;}
case 0x71b1d1:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71b1d2;}
case 0x71b1d2:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1d6;}
case 0x71b1d6:{ // MOV EDX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1da;}
case 0x71b1da:{ // MOV ECX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1dc;}
case 0x71b1dc:{ // MOV EBX,dword ptr [EDX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1df;}
case 0x71b1df:{ // MOV ECX,dword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1e2;}
case 0x71b1e2:{ // MOV EBX,dword ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1e5;}
case 0x71b1e5:{ // MOV ECX,dword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1e8;}
case 0x71b1e8:{ // MOV EBX,dword ptr [EDX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x7cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1eb;}
case 0x71b1eb:{ // MOV EBX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71b1ef;}
case 0x71b1ef:{ // LEA ECX,[0x8b98e0]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b98e0ull));
return 0x71b1f5;}
case 0x71b1f5:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b1f8;}
case 0x71b1f8:{ // PMULLW MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71b1fb;}
case 0x71b1fb:{ // MOVQ MM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b1ff;}
case 0x71b1ff:{ // PMULLW MM1,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71b203;}
case 0x71b203:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b206;}
case 0x71b206:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b209;}
case 0x71b209:{ // MOVQ MM4,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b20d;}
case 0x71b20d:{ // PSRLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x10ull));
return 0x71b211;}
case 0x71b211:{ // PMULLW MM4,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71b215;}
case 0x71b215:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71b218;}
case 0x71b218:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b21b;}
case 0x71b21b:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b21e;}
case 0x71b21e:{ // PAND MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71b221;}
case 0x71b221:{ // PSLLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x20ull));
return 0x71b225;}
case 0x71b225:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b229;}
case 0x71b229:{ // PXOR MM0,MM5
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1150)));
return 0x71b22c;}
case 0x71b22c:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71b22f;}
case 0x71b22f:{ // POR MM0,MM3
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1130)));
return 0x71b232;}
case 0x71b232:{ // PXOR MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x71b235;}
case 0x71b235:{ // POR MM0,MM7
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1170)));
return 0x71b238;}
case 0x71b238:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b23c;}
case 0x71b23c:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b23f;}
case 0x71b23f:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71b242;}
case 0x71b242:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71b245;}
case 0x71b245:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b249;}
case 0x71b249:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71b24d;}
case 0x71b24d:{ // PMULLW MM0,qword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71b251;}
case 0x71b251:{ // PAND MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71b254;}
case 0x71b254:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71b257;}
case 0x71b257:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71b25a;}
case 0x71b25a:{ // MOVQ MM3,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b25e;}
case 0x71b25e:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71b261;}
case 0x71b261:{ // PMULLW MM3,qword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71b265;}
case 0x71b265:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71b269;}
case 0x71b269:{ // MOVQ qword ptr [EDX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b26d;}
case 0x71b26d:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b270;}
case 0x71b270:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b273;}
case 0x71b273:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71b277;}
case 0x71b277:{ // PSRLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x30ull));
return 0x71b27b;}
case 0x71b27b:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b27e;}
case 0x71b27e:{ // PAND MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71b281;}
case 0x71b281:{ // PAND MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71b284;}
case 0x71b284:{ // MOVQ qword ptr [EDX + 0x50],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b288;}
case 0x71b288:{ // PXOR MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x71b28b;}
case 0x71b28b:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x71b28f;}
case 0x71b28f:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71b292;}
case 0x71b292:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b296;}
case 0x71b296:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71b299;}
case 0x71b299:{ // MOVQ MM5,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b29d;}
case 0x71b29d:{ // PSLLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x10ull));
return 0x71b2a1;}
case 0x71b2a1:{ // PMULLW MM5,qword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71b2a5;}
case 0x71b2a5:{ // PAND MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71b2a8;}
case 0x71b2a8:{ // MOVQ qword ptr [EDX + 0x40],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b2ac;}
case 0x71b2ac:{ // POR MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x71b2af;}
case 0x71b2af:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b2b2;}
case 0x71b2b2:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71b2b5;}
case 0x71b2b5:{ // MOVQ MM1,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b2b9;}
case 0x71b2b9:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71b2bd;}
case 0x71b2bd:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71b2c0;}
case 0x71b2c0:{ // MOVQ MM3,MM5
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b2c3;}
case 0x71b2c3:{ // PSLLQ MM3,0x30
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x30ull));
return 0x71b2c7;}
case 0x71b2c7:{ // PAND MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x71b2ca;}
case 0x71b2ca:{ // MOVQ qword ptr [EDX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b2ce;}
case 0x71b2ce:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71b2d1;}
case 0x71b2d1:{ // MOVQ MM7,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b2d5;}
case 0x71b2d5:{ // POR MM6,MM1
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1110)));
return 0x71b2d8;}
case 0x71b2d8:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b2dc;}
case 0x71b2dc:{ // PAND MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x71b2df;}
case 0x71b2df:{ // PMULLW MM1,qword ptr [EBX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71b2e3;}
case 0x71b2e3:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71b2e6;}
case 0x71b2e6:{ // PAND MM0,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),u<8>(c,0xa400)));
return 0x71b2ea;}
case 0x71b2ea:{ // PSRLQ MM4,0x20
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x20ull));
return 0x71b2ee;}
case 0x71b2ee:{ // MOVQ qword ptr [EDX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b2f2;}
case 0x71b2f2:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b2f5;}
case 0x71b2f5:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b2f9;}
case 0x71b2f9:{ // PAND MM4,MM2
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1120)));
return 0x71b2fc;}
case 0x71b2fc:{ // MOVQ MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b300;}
case 0x71b300:{ // PAND MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71b303;}
case 0x71b303:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71b306;}
case 0x71b306:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x71b309;}
case 0x71b309:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71b30d;}
case 0x71b30d:{ // POR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71b310;}
case 0x71b310:{ // MOVQ MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b314;}
case 0x71b314:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71b317;}
case 0x71b317:{ // MOVQ MM0,qword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b31b;}
case 0x71b31b:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b31e;}
case 0x71b31e:{ // PMULLW MM0,qword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71b322;}
case 0x71b322:{ // PAND MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71b325;}
case 0x71b325:{ // MOVQ qword ptr [EDX + 0x8],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b329;}
case 0x71b329:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71b32c;}
case 0x71b32c:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b32f;}
case 0x71b32f:{ // PSRLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x10ull));
return 0x71b333;}
case 0x71b333:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b336;}
case 0x71b336:{ // PAND MM4,MM1
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1110)));
return 0x71b339;}
case 0x71b339:{ // PSLLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x30ull));
return 0x71b33d;}
case 0x71b33d:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71b340;}
case 0x71b340:{ // MOVQ MM4,qword ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b344;}
case 0x71b344:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71b347;}
case 0x71b347:{ // PMULLW MM4,qword ptr [EBX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71b34b;}
case 0x71b34b:{ // PSRLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x10ull));
return 0x71b34f;}
case 0x71b34f:{ // MOVQ qword ptr [EDX + 0x18],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b353;}
case 0x71b353:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71b356;}
case 0x71b356:{ // PSRLQ MM5,0x30
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x30ull));
return 0x71b35a;}
case 0x71b35a:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71b35d;}
case 0x71b35d:{ // MOVQ MM6,qword ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b361;}
case 0x71b361:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71b364;}
case 0x71b364:{ // PMULLW MM6,qword ptr [EBX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71b368;}
case 0x71b368:{ // PSRLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x10ull));
return 0x71b36c;}
case 0x71b36c:{ // MOVQ MM7,MM4
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b36f;}
case 0x71b36f:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b372;}
case 0x71b372:{ // PSLLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x30ull));
return 0x71b376;}
case 0x71b376:{ // PAND MM3,MM0
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1100)));
return 0x71b379;}
case 0x71b379:{ // PXOR MM0,MM3
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1130)));
return 0x71b37c;}
case 0x71b37c:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71b380;}
case 0x71b380:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71b383;}
case 0x71b383:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b386;}
case 0x71b386:{ // PAND MM6,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x71b38a;}
case 0x71b38a:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71b38d;}
case 0x71b38d:{ // PSLLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x20ull));
return 0x71b391;}
case 0x71b391:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71b394;}
case 0x71b394:{ // MOVQ qword ptr [EDX + 0x28],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b398;}
case 0x71b398:{ // POR MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x71b39b;}
case 0x71b39b:{ // MOVQ MM7,qword ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b39f;}
case 0x71b39f:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b3a2;}
case 0x71b3a2:{ // PMULLW MM7,qword ptr [EBX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71b3a6;}
case 0x71b3a6:{ // PSRLQ MM5,0x20
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x20ull));
return 0x71b3aa;}
case 0x71b3aa:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71b3ad;}
case 0x71b3ad:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b3b0;}
case 0x71b3b0:{ // MOVQ qword ptr [EDX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b3b4;}
case 0x71b3b4:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71b3b7;}
case 0x71b3b7:{ // MOVQ MM0,qword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b3bb;}
case 0x71b3bb:{ // MOVQ MM3,MM7
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71b3be;}
case 0x71b3be:{ // PMULLW MM0,qword ptr [EBX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71b3c2;}
case 0x71b3c2:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71b3c6;}
case 0x71b3c6:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b3ca;}
case 0x71b3ca:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x71b3cd;}
case 0x71b3cd:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71b3d0;}
case 0x71b3d0:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b3d3;}
case 0x71b3d3:{ // PAND MM5,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),u<8>(c,0xa400)));
return 0x71b3d7;}
case 0x71b3d7:{ // POR MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71b3da;}
case 0x71b3da:{ // MOVQ MM1,qword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b3de;}
case 0x71b3de:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71b3e1;}
case 0x71b3e1:{ // PMULLW MM1,qword ptr [EBX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71b3e5;}
case 0x71b3e5:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71b3e8;}
case 0x71b3e8:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71b3eb;}
case 0x71b3eb:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b3ee;}
case 0x71b3ee:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b3f2;}
case 0x71b3f2:{ // PSRLQ MM5,0x10
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x10ull));
return 0x71b3f6;}
case 0x71b3f6:{ // PAND MM5,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),u<8>(c,0xa400)));
return 0x71b3fa;}
case 0x71b3fa:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b3fd;}
case 0x71b3fd:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71b400;}
case 0x71b400:{ // PAND MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71b403;}
case 0x71b403:{ // PXOR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71b406;}
case 0x71b406:{ // PSLLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x20ull));
return 0x71b40a;}
case 0x71b40a:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b40e;}
case 0x71b40e:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71b412;}
case 0x71b412:{ // MOVQ MM5,qword ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b416;}
case 0x71b416:{ // PSLLQ MM7,0x10
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x10ull));
return 0x71b41a;}
case 0x71b41a:{ // PMULLW MM5,qword ptr [EBX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71b41e;}
case 0x71b41e:{ // MOVQ MM6,MM7
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71b421;}
case 0x71b421:{ // MOVQ MM3,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b425;}
case 0x71b425:{ // PSLLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x10ull));
return 0x71b429;}
case 0x71b429:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b42d;}
case 0x71b42d:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71b430;}
case 0x71b430:{ // POR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71b433;}
case 0x71b433:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b436;}
case 0x71b436:{ // PAND MM1,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x71b43a;}
case 0x71b43a:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71b43d;}
case 0x71b43d:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b440;}
case 0x71b440:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x71b444;}
case 0x71b444:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71b447;}
case 0x71b447:{ // POR MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71b44a;}
case 0x71b44a:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71b44d;}
case 0x71b44d:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b450;}
case 0x71b450:{ // PAND MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x71b454;}
case 0x71b454:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b457;}
case 0x71b457:{ // MOVQ qword ptr [EDX + 0x58],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b45b;}
case 0x71b45b:{ // PSRLQ MM5,0x30
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x30ull));
return 0x71b45f;}
case 0x71b45f:{ // MOVQ MM7,qword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b463;}
case 0x71b463:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71b466;}
case 0x71b466:{ // PMULLW MM7,qword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71b46a;}
case 0x71b46a:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71b46d;}
case 0x71b46d:{ // PAND MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),u<8>(c,0xa400)));
return 0x71b471;}
case 0x71b471:{ // PSLLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x20ull));
return 0x71b475;}
case 0x71b475:{ // MOVQ qword ptr [EDX + 0x48],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b479;}
case 0x71b479:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b47c;}
case 0x71b47c:{ // PAND MM0,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),u<8>(c,0xa400)));
return 0x71b480;}
case 0x71b480:{ // PSLLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x10ull));
return 0x71b484;}
case 0x71b484:{ // MOVQ MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b488;}
case 0x71b488:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b48b;}
case 0x71b48b:{ // PMULLW MM5,qword ptr [EBX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71b48f;}
case 0x71b48f:{ // PSRLQ MM1,0x10
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x10ull));
return 0x71b493;}
case 0x71b493:{ // PAND MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x71b497;}
case 0x71b497:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x71b49a;}
case 0x71b49a:{ // PAND MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x71b49d;}
case 0x71b49d:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71b4a0;}
case 0x71b4a0:{ // POR MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71b4a3;}
case 0x71b4a3:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71b4a7;}
case 0x71b4a7:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b4aa;}
case 0x71b4aa:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b4ad;}
case 0x71b4ad:{ // MOVQ qword ptr [EDX + 0x70],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b4b1;}
case 0x71b4b1:{ // PSRLQ MM2,0x30
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x30ull));
return 0x71b4b5;}
case 0x71b4b5:{ // PAND MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),u<8>(c,0xa400)));
return 0x71b4b9;}
case 0x71b4b9:{ // POR MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71b4bc;}
case 0x71b4bc:{ // MOVQ MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b4c0;}
case 0x71b4c0:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71b4c3;}
case 0x71b4c3:{ // PAND MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x71b4c6;}
case 0x71b4c6:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71b4ca;}
case 0x71b4ca:{ // POR MM3,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x71b4ce;}
case 0x71b4ce:{ // POR MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71b4d1;}
case 0x71b4d1:{ // MOVQ MM2,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b4d5;}
case 0x71b4d5:{ // PSLLQ MM5,0x10
wr<8>(c,0x1150,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1150),0x10ull));
return 0x71b4d9;}
case 0x71b4d9:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b4dd;}
case 0x71b4dd:{ // PAND MM2,MM5
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1150)));
return 0x71b4e0;}
case 0x71b4e0:{ // MOVQ MM6,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b4e4;}
case 0x71b4e4:{ // PXOR MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71b4e7;}
case 0x71b4e7:{ // PAND MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x71b4ea;}
case 0x71b4ea:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x71b4ee;}
case 0x71b4ee:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b4f2;}
case 0x71b4f2:{ // POR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71b4f5;}
case 0x71b4f5:{ // POR MM7,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71b4f9;}
case 0x71b4f9:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71b4fc;}
case 0x71b4fc:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71b4ff;}
case 0x71b4ff:{ // MOVQ qword ptr [EDX + 0x50],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b503;}
case 0x71b503:{ // MOVQ qword ptr [EDX + 0x40],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b507;}
case 0x71b507:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b50b;}
case 0x71b50b:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b50f;}
case 0x71b50f:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b512;}
case 0x71b512:{ // MOVQ MM7,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b516;}
case 0x71b516:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71b519;}
case 0x71b519:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b51d;}
case 0x71b51d:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71b520;}
case 0x71b520:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b523;}
case 0x71b523:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b526;}
case 0x71b526:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b52a;}
case 0x71b52a:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71b52d;}
case 0x71b52d:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b531;}
case 0x71b531:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71b534;}
case 0x71b534:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71b537;}
case 0x71b537:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b53a;}
case 0x71b53a:{ // MOVQ MM1,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b53e;}
case 0x71b53e:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71b541;}
case 0x71b541:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b544;}
case 0x71b544:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71b547;}
case 0x71b547:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b54a;}
case 0x71b54a:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b54d;}
case 0x71b54d:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b551;}
case 0x71b551:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b554;}
case 0x71b554:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71b557;}
case 0x71b557:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71b55a;}
case 0x71b55a:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b55e;}
case 0x71b55e:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71b561;}
case 0x71b561:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b564;}
case 0x71b564:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b567;}
case 0x71b567:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71b56b;}
case 0x71b56b:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71b56e;}
case 0x71b56e:{ // MOVQ MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b572;}
case 0x71b572:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b575;}
case 0x71b575:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b578;}
case 0x71b578:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b57b;}
case 0x71b57b:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71b57f;}
case 0x71b57f:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b582;}
case 0x71b582:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71b586;}
case 0x71b586:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71b589;}
case 0x71b589:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71b58c;}
case 0x71b58c:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71b58f;}
case 0x71b58f:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71b592;}
case 0x71b592:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71b595;}
case 0x71b595:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71b599;}
case 0x71b599:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b59c;}
case 0x71b59c:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b5a0;}
case 0x71b5a0:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b5a3;}
case 0x71b5a3:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b5a7;}
case 0x71b5a7:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b5aa;}
case 0x71b5aa:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b5ad;}
case 0x71b5ad:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71b5b0;}
case 0x71b5b0:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b5b4;}
case 0x71b5b4:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b5b7;}
case 0x71b5b7:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b5ba;}
case 0x71b5ba:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b5bd;}
case 0x71b5bd:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71b5c0;}
case 0x71b5c0:{ // MOVQ MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b5c4;}
case 0x71b5c4:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b5c7;}
case 0x71b5c7:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71b5ca;}
case 0x71b5ca:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b5cd;}
case 0x71b5cd:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b5d0;}
case 0x71b5d0:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71b5d3;}
case 0x71b5d3:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b5d6;}
case 0x71b5d6:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b5d9;}
case 0x71b5d9:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71b5dc;}
case 0x71b5dc:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b5df;}
case 0x71b5df:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b5e2;}
case 0x71b5e2:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71b5e5;}
case 0x71b5e5:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b5e8;}
case 0x71b5e8:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71b5eb;}
case 0x71b5eb:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b5ef;}
case 0x71b5ef:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71b5f2;}
case 0x71b5f2:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71b5f5;}
case 0x71b5f5:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71b5f8;}
case 0x71b5f8:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b5fc;}
case 0x71b5fc:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b5ff;}
case 0x71b5ff:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b602;}
case 0x71b602:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71b605;}
case 0x71b605:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b608;}
case 0x71b608:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71b60b;}
case 0x71b60b:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b60e;}
case 0x71b60e:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b611;}
case 0x71b611:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71b614;}
case 0x71b614:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71b617;}
case 0x71b617:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b61a;}
case 0x71b61a:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71b61d;}
case 0x71b61d:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71b620;}
case 0x71b620:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71b623;}
case 0x71b623:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b627;}
case 0x71b627:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b62a;}
case 0x71b62a:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b62d;}
case 0x71b62d:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71b630;}
case 0x71b630:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71b633;}
case 0x71b633:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71b636;}
case 0x71b636:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b639;}
case 0x71b639:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71b63c;}
case 0x71b63c:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b63f;}
case 0x71b63f:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71b642;}
case 0x71b642:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71b645;}
case 0x71b645:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b648;}
case 0x71b648:{ // MOVQ qword ptr [EDX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b64c;}
case 0x71b64c:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71b64f;}
case 0x71b64f:{ // MOVQ qword ptr [EDX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b653;}
case 0x71b653:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71b656;}
case 0x71b656:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b659;}
case 0x71b659:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71b65c;}
case 0x71b65c:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b660;}
case 0x71b660:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b663;}
case 0x71b663:{ // MOVQ qword ptr [EDX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b667;}
case 0x71b667:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71b66a;}
case 0x71b66a:{ // MOVQ qword ptr [EDX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b66e;}
case 0x71b66e:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71b671;}
case 0x71b671:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b674;}
case 0x71b674:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71b677;}
case 0x71b677:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b67a;}
case 0x71b67a:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71b67d;}
case 0x71b67d:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71b680;}
case 0x71b680:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b683;}
case 0x71b683:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71b686;}
case 0x71b686:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71b689;}
case 0x71b689:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b68d;}
case 0x71b68d:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71b690;}
case 0x71b690:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71b693;}
case 0x71b693:{ // MOVQ qword ptr [EDX + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b697;}
case 0x71b697:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b69b;}
case 0x71b69b:{ // MOVQ MM2,qword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b69f;}
case 0x71b69f:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6a3;}
case 0x71b6a3:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b6a6;}
case 0x71b6a6:{ // MOVQ MM7,qword ptr [EDX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6aa;}
case 0x71b6aa:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71b6ad;}
case 0x71b6ad:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6b1;}
case 0x71b6b1:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71b6b4;}
case 0x71b6b4:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b6b7;}
case 0x71b6b7:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b6ba;}
case 0x71b6ba:{ // MOVQ MM3,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6be;}
case 0x71b6be:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71b6c1;}
case 0x71b6c1:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6c5;}
case 0x71b6c5:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71b6c8;}
case 0x71b6c8:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71b6cb;}
case 0x71b6cb:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b6ce;}
case 0x71b6ce:{ // MOVQ MM1,qword ptr [EDX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6d2;}
case 0x71b6d2:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71b6d5;}
case 0x71b6d5:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b6d8;}
case 0x71b6d8:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71b6db;}
case 0x71b6db:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b6de;}
case 0x71b6de:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b6e1;}
case 0x71b6e1:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6e5;}
case 0x71b6e5:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b6e8;}
case 0x71b6e8:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71b6eb;}
case 0x71b6eb:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71b6ee;}
case 0x71b6ee:{ // MOVQ MM2,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b6f2;}
case 0x71b6f2:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71b6f5;}
case 0x71b6f5:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b6f8;}
case 0x71b6f8:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b6fb;}
case 0x71b6fb:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71b6ff;}
case 0x71b6ff:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71b702;}
case 0x71b702:{ // MOVQ MM5,qword ptr [EDX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b706;}
case 0x71b706:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b709;}
case 0x71b709:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b70c;}
case 0x71b70c:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b70f;}
case 0x71b70f:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71b713;}
case 0x71b713:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b716;}
case 0x71b716:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71b71a;}
case 0x71b71a:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71b71d;}
case 0x71b71d:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71b720;}
case 0x71b720:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71b723;}
case 0x71b723:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71b726;}
case 0x71b726:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71b729;}
case 0x71b729:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71b72d;}
case 0x71b72d:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b730;}
case 0x71b730:{ // MOVQ qword ptr [EDX + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b734;}
case 0x71b734:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b737;}
case 0x71b737:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b73b;}
case 0x71b73b:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b73e;}
case 0x71b73e:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b741;}
case 0x71b741:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71b744;}
case 0x71b744:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b748;}
case 0x71b748:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b74b;}
case 0x71b74b:{ // MOVQ MM6,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b74f;}
case 0x71b74f:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b752;}
case 0x71b752:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71b755;}
case 0x71b755:{ // MOVQ MM3,qword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b759;}
case 0x71b759:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b75c;}
case 0x71b75c:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71b75f;}
case 0x71b75f:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b762;}
case 0x71b762:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b765;}
case 0x71b765:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71b768;}
case 0x71b768:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b76b;}
case 0x71b76b:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b76e;}
case 0x71b76e:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71b771;}
case 0x71b771:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b774;}
case 0x71b774:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b777;}
case 0x71b777:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71b77a;}
case 0x71b77a:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b77d;}
case 0x71b77d:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71b780;}
case 0x71b780:{ // MOVQ MM0,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b784;}
case 0x71b784:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71b787;}
case 0x71b787:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71b78a;}
case 0x71b78a:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71b78d;}
case 0x71b78d:{ // MOVQ MM3,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b791;}
case 0x71b791:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b794;}
case 0x71b794:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b797;}
case 0x71b797:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71b79a;}
case 0x71b79a:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b79d;}
case 0x71b79d:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71b7a0;}
case 0x71b7a0:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b7a3;}
case 0x71b7a3:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b7a6;}
case 0x71b7a6:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71b7a9;}
case 0x71b7a9:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71b7ac;}
case 0x71b7ac:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b7af;}
case 0x71b7af:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71b7b2;}
case 0x71b7b2:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71b7b5;}
case 0x71b7b5:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71b7b8;}
case 0x71b7b8:{ // MOVQ qword ptr [EDX + 0x50],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b7bc;}
case 0x71b7bc:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b7bf;}
case 0x71b7bf:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b7c2;}
case 0x71b7c2:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71b7c5;}
case 0x71b7c5:{ // MOVQ qword ptr [EDX + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b7c9;}
case 0x71b7c9:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71b7cc;}
case 0x71b7cc:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b7cf;}
case 0x71b7cf:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71b7d2;}
case 0x71b7d2:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b7d5;}
case 0x71b7d5:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71b7d8;}
case 0x71b7d8:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71b7db;}
case 0x71b7db:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b7de;}
case 0x71b7de:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b7e2;}
case 0x71b7e2:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71b7e5;}
case 0x71b7e5:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b7e9;}
case 0x71b7e9:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71b7ec;}
case 0x71b7ec:{ // MOVQ MM4,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b7f0;}
case 0x71b7f0:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71b7f3;}
case 0x71b7f3:{ // MOVQ MM5,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b7f7;}
case 0x71b7f7:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b7fa;}
case 0x71b7fa:{ // MOVQ qword ptr [EDX + 0x78],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b7fe;}
case 0x71b7fe:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71b801;}
case 0x71b801:{ // MOVQ qword ptr [EDX + 0x68],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b805;}
case 0x71b805:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71b808;}
case 0x71b808:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b80b;}
case 0x71b80b:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71b80e;}
case 0x71b80e:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b811;}
case 0x71b811:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71b814;}
case 0x71b814:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71b817;}
case 0x71b817:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71b81a;}
case 0x71b81a:{ // MOVQ qword ptr [EDX + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b81e;}
case 0x71b81e:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71b821;}
case 0x71b821:{ // MOVQ qword ptr [EDX + 0x50],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b825;}
case 0x71b825:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71b828;}
case 0x71b828:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71b82b;}
case 0x71b82b:{ // MOVQ qword ptr [EDX + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b82f;}
case 0x71b82f:{ // MOVQ qword ptr [EDX + 0x60],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b833;}
case 0x71b833:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b837;}
case 0x71b837:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b83b;}
case 0x71b83b:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b83e;}
case 0x71b83e:{ // MOVQ MM7,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b842;}
case 0x71b842:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71b845;}
case 0x71b845:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b849;}
case 0x71b849:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71b84c;}
case 0x71b84c:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b84f;}
case 0x71b84f:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b852;}
case 0x71b852:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b856;}
case 0x71b856:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71b859;}
case 0x71b859:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b85d;}
case 0x71b85d:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71b860;}
case 0x71b860:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71b863;}
case 0x71b863:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b866;}
case 0x71b866:{ // MOVQ MM1,qword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b86a;}
case 0x71b86a:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71b86d;}
case 0x71b86d:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b870;}
case 0x71b870:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71b873;}
case 0x71b873:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b876;}
case 0x71b876:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b879;}
case 0x71b879:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b87d;}
case 0x71b87d:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b880;}
case 0x71b880:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71b883;}
case 0x71b883:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71b886;}
case 0x71b886:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b88a;}
case 0x71b88a:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71b88d;}
case 0x71b88d:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b890;}
case 0x71b890:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b893;}
case 0x71b893:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71b897;}
case 0x71b897:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71b89a;}
case 0x71b89a:{ // MOVQ MM5,qword ptr [EDX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b89e;}
case 0x71b89e:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b8a1;}
case 0x71b8a1:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71b8a4;}
case 0x71b8a4:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b8a7;}
case 0x71b8a7:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71b8ab;}
case 0x71b8ab:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b8ae;}
case 0x71b8ae:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71b8b2;}
case 0x71b8b2:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71b8b5;}
case 0x71b8b5:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71b8b8;}
case 0x71b8b8:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71b8bb;}
case 0x71b8bb:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71b8be;}
case 0x71b8be:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71b8c1;}
case 0x71b8c1:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71b8c5;}
case 0x71b8c5:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b8c8;}
case 0x71b8c8:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b8cc;}
case 0x71b8cc:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b8cf;}
case 0x71b8cf:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b8d3;}
case 0x71b8d3:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71b8d6;}
case 0x71b8d6:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b8d9;}
case 0x71b8d9:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71b8dc;}
case 0x71b8dc:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b8e0;}
case 0x71b8e0:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b8e3;}
case 0x71b8e3:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b8e6;}
case 0x71b8e6:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71b8e9;}
case 0x71b8e9:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71b8ec;}
case 0x71b8ec:{ // MOVQ MM3,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b8f0;}
case 0x71b8f0:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b8f3;}
case 0x71b8f3:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71b8f6;}
case 0x71b8f6:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71b8f9;}
case 0x71b8f9:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71b8fc;}
case 0x71b8fc:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71b8ff;}
case 0x71b8ff:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b902;}
case 0x71b902:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b905;}
case 0x71b905:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71b908;}
case 0x71b908:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71b90b;}
case 0x71b90b:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b90e;}
case 0x71b90e:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71b911;}
case 0x71b911:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b914;}
case 0x71b914:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71b917;}
case 0x71b917:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b91b;}
case 0x71b91b:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71b91e;}
case 0x71b91e:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71b921;}
case 0x71b921:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71b924;}
case 0x71b924:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71b928;}
case 0x71b928:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71b92b;}
case 0x71b92b:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b92e;}
case 0x71b92e:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71b932;}
case 0x71b932:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b935;}
case 0x71b935:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71b939;}
case 0x71b939:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b93d;}
case 0x71b93d:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71b940;}
case 0x71b940:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b944;}
case 0x71b944:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71b947;}
case 0x71b947:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b94b;}
case 0x71b94b:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71b94e;}
case 0x71b94e:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71b952;}
case 0x71b952:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71b955;}
case 0x71b955:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71b958;}
case 0x71b958:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71b95c;}
case 0x71b95c:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71b95f;}
case 0x71b95f:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71b963;}
case 0x71b963:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71b967;}
case 0x71b967:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71b96a;}
case 0x71b96a:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71b96d;}
case 0x71b96d:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71b971;}
case 0x71b971:{ // MOVQ qword ptr [EDX + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b975;}
case 0x71b975:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71b979;}
case 0x71b979:{ // MOVQ qword ptr [EDX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b97d;}
case 0x71b97d:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71b980;}
case 0x71b980:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71b984;}
case 0x71b984:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71b987;}
case 0x71b987:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71b98a;}
case 0x71b98a:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71b98e;}
case 0x71b98e:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b992;}
case 0x71b992:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71b996;}
case 0x71b996:{ // MOVQ qword ptr [EDX + 0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b99a;}
case 0x71b99a:{ // MOVQ qword ptr [EDX + 0x70],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71b99e;}
case 0x71b99e:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71b9a1;}
case 0x71b9a1:{ // MOVQ MM2,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9a5;}
case 0x71b9a5:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9a9;}
case 0x71b9a9:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71b9ac;}
case 0x71b9ac:{ // MOVQ MM7,qword ptr [EDX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9b0;}
case 0x71b9b0:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71b9b3;}
case 0x71b9b3:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9b7;}
case 0x71b9b7:{ // PMULHW MM6,MM7
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x71b9ba;}
case 0x71b9ba:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71b9bd;}
case 0x71b9bd:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71b9c0;}
case 0x71b9c0:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9c4;}
case 0x71b9c4:{ // PMULHW MM5,MM7
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x71b9c7;}
case 0x71b9c7:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9cb;}
case 0x71b9cb:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71b9ce;}
case 0x71b9ce:{ // PADDW MM6,MM7
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1170)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1174)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1176)));
return 0x71b9d1;}
case 0x71b9d1:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71b9d4;}
case 0x71b9d4:{ // MOVQ MM1,qword ptr [EDX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9d8;}
case 0x71b9d8:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71b9db;}
case 0x71b9db:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71b9de;}
case 0x71b9de:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71b9e1;}
case 0x71b9e1:{ // PADDSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71b9e4;}
case 0x71b9e4:{ // PMULHW MM5,MM1
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71b9e7;}
case 0x71b9e7:{ // MOVQ MM7,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9eb;}
case 0x71b9eb:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71b9ee;}
case 0x71b9ee:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71b9f1;}
case 0x71b9f1:{ // PMULHW MM3,MM7
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x71b9f4;}
case 0x71b9f4:{ // MOVQ MM2,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71b9f8;}
case 0x71b9f8:{ // PMULHW MM7,MM1
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x71b9fb;}
case 0x71b9fb:{ // PADDW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x71b9fe;}
case 0x71b9fe:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71ba01;}
case 0x71ba01:{ // PMULHW MM2,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71ba05;}
case 0x71ba05:{ // PSUBSW MM3,MM5
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x71ba08;}
case 0x71ba08:{ // MOVQ MM5,qword ptr [EDX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ba0c;}
case 0x71ba0c:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71ba0f;}
case 0x71ba0f:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71ba12;}
case 0x71ba12:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71ba15;}
case 0x71ba15:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71ba19;}
case 0x71ba19:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71ba1c;}
case 0x71ba1c:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71ba20;}
case 0x71ba20:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71ba23;}
case 0x71ba23:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71ba26;}
case 0x71ba26:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71ba29;}
case 0x71ba29:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71ba2c;}
case 0x71ba2c:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71ba2f;}
case 0x71ba2f:{ // PMULHW MM7,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524445,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71ba33;}
case 0x71ba33:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ba36;}
case 0x71ba36:{ // MOVQ qword ptr [EDX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ba3a;}
case 0x71ba3a:{ // PSUBSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71ba3d;}
case 0x71ba3d:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ba41;}
case 0x71ba41:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71ba44;}
case 0x71ba44:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71ba47;}
case 0x71ba47:{ // PADDSW MM7,MM2
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x71ba4a;}
case 0x71ba4a:{ // MOVQ qword ptr [EDX + 0x28],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71ba4e;}
case 0x71ba4e:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71ba51;}
case 0x71ba51:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ba55;}
case 0x71ba55:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71ba58;}
case 0x71ba58:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71ba5b;}
case 0x71ba5b:{ // MOVQ MM3,qword ptr [EDX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ba5f;}
case 0x71ba5f:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71ba62;}
case 0x71ba62:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71ba65;}
case 0x71ba65:{ // PSUBSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71ba68;}
case 0x71ba68:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71ba6b;}
case 0x71ba6b:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71ba6e;}
case 0x71ba6e:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71ba71;}
case 0x71ba71:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71ba74;}
case 0x71ba74:{ // PADDSW MM3,MM0
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x71ba77;}
case 0x71ba77:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71ba7a;}
case 0x71ba7a:{ // PMULHW MM4,MM3
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71ba7d;}
case 0x71ba7d:{ // PADDSW MM6,MM0
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x71ba80;}
case 0x71ba80:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71ba83;}
case 0x71ba83:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71ba86;}
case 0x71ba86:{ // MOVQ MM0,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71ba8a;}
case 0x71ba8a:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71ba8d;}
case 0x71ba8d:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71ba90;}
case 0x71ba90:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71ba93;}
case 0x71ba93:{ // PADDSW MM2,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x71ba97;}
case 0x71ba97:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71ba9a;}
case 0x71ba9a:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71ba9d;}
case 0x71ba9d:{ // PSRAW MM2,0x4
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x4ull}));
return 0x71baa1;}
case 0x71baa1:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71baa4;}
case 0x71baa4:{ // PSRAW MM1,0x4
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0x4ull}));
return 0x71baa8;}
case 0x71baa8:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71baac;}
case 0x71baac:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71baaf;}
case 0x71baaf:{ // MOVQ qword ptr [EDX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bab3;}
case 0x71bab3:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71bab6;}
case 0x71bab6:{ // MOVQ qword ptr [EDX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71baba;}
case 0x71baba:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71babd;}
case 0x71babd:{ // PADDSW MM4,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x71bac1;}
case 0x71bac1:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71bac4;}
case 0x71bac4:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71bac7;}
case 0x71bac7:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71bacb;}
case 0x71bacb:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71bace;}
case 0x71bace:{ // PSRAW MM3,0x4
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x4ull}));
return 0x71bad2;}
case 0x71bad2:{ // PADDSW MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x71bad6;}
case 0x71bad6:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71bad9;}
case 0x71bad9:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71badc;}
case 0x71badc:{ // PSRAW MM6,0x4
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x4ull}));
return 0x71bae0;}
case 0x71bae0:{ // MOVQ qword ptr [EDX + 0x48],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bae4;}
case 0x71bae4:{ // PSRAW MM5,0x4
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0x4ull}));
return 0x71bae8;}
case 0x71bae8:{ // MOVQ qword ptr [EDX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71baec;}
case 0x71baec:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71baef;}
case 0x71baef:{ // PADDSW MM7,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x71baf3;}
case 0x71baf3:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71baf6;}
case 0x71baf6:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71baf9;}
case 0x71baf9:{ // PSRAW MM7,0x4
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0x4ull}));
return 0x71bafd;}
case 0x71bafd:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bb01;}
case 0x71bb01:{ // PSRAW MM0,0x4
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x4ull}));
return 0x71bb05;}
case 0x71bb05:{ // MOVQ qword ptr [EDX + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bb09;}
case 0x71bb09:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bb0d;}
case 0x71bb0d:{ // MOVQ qword ptr [EDX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bb11;}
case 0x71bb11:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71bb12;}
case 0x71bb12:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71bb13;}
case 0x71bb13:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71bb14;}
case 0x71bb14:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x71bb15;}
case 0x71bb15:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71bb16;}
case 0x71bb16:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71bb17;}
case 0x71bb17:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71bb18;}
case 0x71bb18:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb1c;}
case 0x71bb1c:{ // MOV EDX,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb20;}
case 0x71bb20:{ // MOV ECX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb22;}
case 0x71bb22:{ // MOV EBX,dword ptr [EDX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb25;}
case 0x71bb25:{ // MOV ECX,dword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb28;}
case 0x71bb28:{ // MOV EBX,dword ptr [EDX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x54ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb2b;}
case 0x71bb2b:{ // MOV ECX,dword ptr [EDX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb2e;}
case 0x71bb2e:{ // MOV EBX,dword ptr [EDX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x7cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb31;}
case 0x71bb31:{ // MOV EBX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71bb35;}
case 0x71bb35:{ // LEA ECX,[0x8b98e0]
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b98e0ull));
return 0x71bb3b;}
case 0x71bb3b:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb3e;}
case 0x71bb3e:{ // PMULLW MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71bb41;}
case 0x71bb41:{ // MOVQ MM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb45;}
case 0x71bb45:{ // PMULLW MM1,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71bb49;}
case 0x71bb49:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb4c;}
case 0x71bb4c:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bb4f;}
case 0x71bb4f:{ // MOVQ MM4,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb53;}
case 0x71bb53:{ // PSRLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x10ull));
return 0x71bb57;}
case 0x71bb57:{ // PMULLW MM4,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71bb5b;}
case 0x71bb5b:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71bb5e;}
case 0x71bb5e:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bb61;}
case 0x71bb61:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71bb64;}
case 0x71bb64:{ // PAND MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71bb67;}
case 0x71bb67:{ // PSLLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x20ull));
return 0x71bb6b;}
case 0x71bb6b:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb6f;}
case 0x71bb6f:{ // PXOR MM0,MM5
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1150)));
return 0x71bb72;}
case 0x71bb72:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71bb75;}
case 0x71bb75:{ // POR MM0,MM3
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1130)));
return 0x71bb78;}
case 0x71bb78:{ // PXOR MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x71bb7b;}
case 0x71bb7b:{ // POR MM0,MM7
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1170)));
return 0x71bb7e;}
case 0x71bb7e:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb82;}
case 0x71bb82:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bb85;}
case 0x71bb85:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71bb88;}
case 0x71bb88:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71bb8b;}
case 0x71bb8b:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bb8f;}
case 0x71bb8f:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71bb93;}
case 0x71bb93:{ // PMULLW MM0,qword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71bb97;}
case 0x71bb97:{ // PAND MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71bb9a;}
case 0x71bb9a:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71bb9d;}
case 0x71bb9d:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71bba0;}
case 0x71bba0:{ // MOVQ MM3,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bba4;}
case 0x71bba4:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71bba7;}
case 0x71bba7:{ // PMULLW MM3,qword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),u<2>(c,0x121600)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),u<2>(c,0x121602)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),u<2>(c,0x121604)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),u<2>(c,0x121606)));
return 0x71bbab;}
case 0x71bbab:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71bbaf;}
case 0x71bbaf:{ // MOVQ qword ptr [EDX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bbb3;}
case 0x71bbb3:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bbb6;}
case 0x71bbb6:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bbb9;}
case 0x71bbb9:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71bbbd;}
case 0x71bbbd:{ // PSRLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x30ull));
return 0x71bbc1;}
case 0x71bbc1:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71bbc4;}
case 0x71bbc4:{ // PAND MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71bbc7;}
case 0x71bbc7:{ // PAND MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71bbca;}
case 0x71bbca:{ // MOVQ qword ptr [EDX + 0x50],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bbce;}
case 0x71bbce:{ // PXOR MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x71bbd1;}
case 0x71bbd1:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x71bbd5;}
case 0x71bbd5:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71bbd8;}
case 0x71bbd8:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bbdc;}
case 0x71bbdc:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71bbdf;}
case 0x71bbdf:{ // MOVQ MM5,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bbe3;}
case 0x71bbe3:{ // PSLLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x10ull));
return 0x71bbe7;}
case 0x71bbe7:{ // PMULLW MM5,qword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71bbeb;}
case 0x71bbeb:{ // PAND MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71bbee;}
case 0x71bbee:{ // MOVQ qword ptr [EDX + 0x40],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bbf2;}
case 0x71bbf2:{ // POR MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x71bbf5;}
case 0x71bbf5:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71bbf8;}
case 0x71bbf8:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71bbfb;}
case 0x71bbfb:{ // MOVQ MM1,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bbff;}
case 0x71bbff:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71bc03;}
case 0x71bc03:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71bc06;}
case 0x71bc06:{ // MOVQ MM3,MM5
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bc09;}
case 0x71bc09:{ // PSLLQ MM3,0x30
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x30ull));
return 0x71bc0d;}
case 0x71bc0d:{ // PAND MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x71bc10;}
case 0x71bc10:{ // MOVQ qword ptr [EDX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bc14;}
case 0x71bc14:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71bc17;}
case 0x71bc17:{ // MOVQ MM7,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc1b;}
case 0x71bc1b:{ // POR MM6,MM1
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1110)));
return 0x71bc1e;}
case 0x71bc1e:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc22;}
case 0x71bc22:{ // PAND MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x71bc25;}
case 0x71bc25:{ // PMULLW MM1,qword ptr [EBX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71bc29;}
case 0x71bc29:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71bc2c;}
case 0x71bc2c:{ // PAND MM0,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),u<8>(c,0xa400)));
return 0x71bc30;}
case 0x71bc30:{ // PSRLQ MM4,0x20
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x20ull));
return 0x71bc34;}
case 0x71bc34:{ // MOVQ qword ptr [EDX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bc38;}
case 0x71bc38:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bc3b;}
case 0x71bc3b:{ // MOVQ MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc3f;}
case 0x71bc3f:{ // PAND MM4,MM2
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1120)));
return 0x71bc42;}
case 0x71bc42:{ // MOVQ MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc46;}
case 0x71bc46:{ // PAND MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71bc49;}
case 0x71bc49:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71bc4c;}
case 0x71bc4c:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x71bc4f;}
case 0x71bc4f:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71bc53;}
case 0x71bc53:{ // POR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71bc56;}
case 0x71bc56:{ // MOVQ MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc5a;}
case 0x71bc5a:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71bc5d;}
case 0x71bc5d:{ // MOVQ MM0,qword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc61;}
case 0x71bc61:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bc64;}
case 0x71bc64:{ // PMULLW MM0,qword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71bc68;}
case 0x71bc68:{ // PAND MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x71bc6b;}
case 0x71bc6b:{ // MOVQ qword ptr [EDX + 0x8],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bc6f;}
case 0x71bc6f:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71bc72;}
case 0x71bc72:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71bc75;}
case 0x71bc75:{ // PSRLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x10ull));
return 0x71bc79;}
case 0x71bc79:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bc7c;}
case 0x71bc7c:{ // PAND MM4,MM1
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1110)));
return 0x71bc7f;}
case 0x71bc7f:{ // PSLLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x30ull));
return 0x71bc83;}
case 0x71bc83:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71bc86;}
case 0x71bc86:{ // MOVQ MM4,qword ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bc8a;}
case 0x71bc8a:{ // POR MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x71bc8d;}
case 0x71bc8d:{ // PMULLW MM4,qword ptr [EBX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),u<2>(c,0x121600)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),u<2>(c,0x121602)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),u<2>(c,0x121604)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),u<2>(c,0x121606)));
return 0x71bc91;}
case 0x71bc91:{ // PSRLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x10ull));
return 0x71bc95;}
case 0x71bc95:{ // MOVQ qword ptr [EDX + 0x18],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bc99;}
case 0x71bc99:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71bc9c;}
case 0x71bc9c:{ // PSRLQ MM5,0x30
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x30ull));
return 0x71bca0;}
case 0x71bca0:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71bca3;}
case 0x71bca3:{ // MOVQ MM6,qword ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bca7;}
case 0x71bca7:{ // POR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x71bcaa;}
case 0x71bcaa:{ // PMULLW MM6,qword ptr [EBX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),u<2>(c,0x121600)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),u<2>(c,0x121602)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),u<2>(c,0x121604)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),u<2>(c,0x121606)));
return 0x71bcae;}
case 0x71bcae:{ // PSRLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x10ull));
return 0x71bcb2;}
case 0x71bcb2:{ // MOVQ MM7,MM4
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bcb5;}
case 0x71bcb5:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71bcb8;}
case 0x71bcb8:{ // PSLLQ MM7,0x30
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x30ull));
return 0x71bcbc;}
case 0x71bcbc:{ // PAND MM3,MM0
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1100)));
return 0x71bcbf;}
case 0x71bcbf:{ // PXOR MM0,MM3
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1130)));
return 0x71bcc2;}
case 0x71bcc2:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71bcc6;}
case 0x71bcc6:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71bcc9;}
case 0x71bcc9:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71bccc;}
case 0x71bccc:{ // PAND MM6,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x71bcd0;}
case 0x71bcd0:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71bcd3;}
case 0x71bcd3:{ // PSLLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x20ull));
return 0x71bcd7;}
case 0x71bcd7:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71bcda;}
case 0x71bcda:{ // MOVQ qword ptr [EDX + 0x28],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bcde;}
case 0x71bcde:{ // POR MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x71bce1;}
case 0x71bce1:{ // MOVQ MM7,qword ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bce5;}
case 0x71bce5:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bce8;}
case 0x71bce8:{ // PMULLW MM7,qword ptr [EBX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71bcec;}
case 0x71bcec:{ // PSRLQ MM5,0x20
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x20ull));
return 0x71bcf0;}
case 0x71bcf0:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71bcf3;}
case 0x71bcf3:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bcf6;}
case 0x71bcf6:{ // MOVQ qword ptr [EDX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bcfa;}
case 0x71bcfa:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x71bcfd;}
case 0x71bcfd:{ // MOVQ MM0,qword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bd01;}
case 0x71bd01:{ // MOVQ MM3,MM7
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71bd04;}
case 0x71bd04:{ // PMULLW MM0,qword ptr [EBX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),u<2>(c,0x121600)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),u<2>(c,0x121602)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),u<2>(c,0x121604)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),u<2>(c,0x121606)));
return 0x71bd08;}
case 0x71bd08:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71bd0c;}
case 0x71bd0c:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71bd10;}
case 0x71bd10:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x71bd13;}
case 0x71bd13:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71bd16;}
case 0x71bd16:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71bd19;}
case 0x71bd19:{ // PAND MM5,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),u<8>(c,0xa400)));
return 0x71bd1d;}
case 0x71bd1d:{ // POR MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71bd20;}
case 0x71bd20:{ // MOVQ MM1,qword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bd24;}
case 0x71bd24:{ // PXOR MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x71bd27;}
case 0x71bd27:{ // PMULLW MM1,qword ptr [EBX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),u<2>(c,0x121600)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),u<2>(c,0x121602)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),u<2>(c,0x121604)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),u<2>(c,0x121606)));
return 0x71bd2b;}
case 0x71bd2b:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71bd2e;}
case 0x71bd2e:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71bd31;}
case 0x71bd31:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bd34;}
case 0x71bd34:{ // MOVQ qword ptr [EDX + 0x78],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bd38;}
case 0x71bd38:{ // PSRLQ MM5,0x10
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x10ull));
return 0x71bd3c;}
case 0x71bd3c:{ // PAND MM5,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),u<8>(c,0xa400)));
return 0x71bd40;}
case 0x71bd40:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bd43;}
case 0x71bd43:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71bd46;}
case 0x71bd46:{ // PAND MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71bd49;}
case 0x71bd49:{ // PXOR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71bd4c;}
case 0x71bd4c:{ // PSLLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x20ull));
return 0x71bd50;}
case 0x71bd50:{ // MOVQ qword ptr [EDX + 0x68],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bd54;}
case 0x71bd54:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x71bd58;}
case 0x71bd58:{ // MOVQ MM5,qword ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bd5c;}
case 0x71bd5c:{ // PSLLQ MM7,0x10
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x10ull));
return 0x71bd60;}
case 0x71bd60:{ // PMULLW MM5,qword ptr [EBX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71bd64;}
case 0x71bd64:{ // MOVQ MM6,MM7
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71bd67;}
case 0x71bd67:{ // MOVQ MM3,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bd6b;}
case 0x71bd6b:{ // PSLLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x10ull));
return 0x71bd6f;}
case 0x71bd6f:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71bd73;}
case 0x71bd73:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x71bd76;}
case 0x71bd76:{ // POR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x71bd79;}
case 0x71bd79:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71bd7c;}
case 0x71bd7c:{ // PAND MM1,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x71bd80;}
case 0x71bd80:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71bd83;}
case 0x71bd83:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bd86;}
case 0x71bd86:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x71bd8a;}
case 0x71bd8a:{ // PAND MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71bd8d;}
case 0x71bd8d:{ // POR MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x71bd90;}
case 0x71bd90:{ // POR MM7,MM3
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1130)));
return 0x71bd93;}
case 0x71bd93:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bd96;}
case 0x71bd96:{ // PAND MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x71bd9a;}
case 0x71bd9a:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bd9d;}
case 0x71bd9d:{ // MOVQ qword ptr [EDX + 0x58],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bda1;}
case 0x71bda1:{ // PSRLQ MM5,0x30
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x30ull));
return 0x71bda5;}
case 0x71bda5:{ // MOVQ MM7,qword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bda9;}
case 0x71bda9:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71bdac;}
case 0x71bdac:{ // PMULLW MM7,qword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1170),u<2>(c,0x121600)));
wr<2>(c,0x1172,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1172),u<2>(c,0x121602)));
wr<2>(c,0x1174,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1174),u<2>(c,0x121604)));
wr<2>(c,0x1176,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1176),u<2>(c,0x121606)));
return 0x71bdb0;}
case 0x71bdb0:{ // POR MM6,MM5
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1150)));
return 0x71bdb3;}
case 0x71bdb3:{ // PAND MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),u<8>(c,0xa400)));
return 0x71bdb7;}
case 0x71bdb7:{ // PSLLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1100),0x20ull));
return 0x71bdbb;}
case 0x71bdbb:{ // MOVQ qword ptr [EDX + 0x48],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bdbf;}
case 0x71bdbf:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bdc2;}
case 0x71bdc2:{ // PAND MM0,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),u<8>(c,0xa400)));
return 0x71bdc6;}
case 0x71bdc6:{ // PSLLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1160),0x10ull));
return 0x71bdca;}
case 0x71bdca:{ // MOVQ MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bdce;}
case 0x71bdce:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71bdd1;}
case 0x71bdd1:{ // PMULLW MM5,qword ptr [EBX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x121600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),u<2>(c,0x121600)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),u<2>(c,0x121602)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),u<2>(c,0x121604)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),u<2>(c,0x121606)));
return 0x71bdd5;}
case 0x71bdd5:{ // PSRLQ MM1,0x10
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x10ull));
return 0x71bdd9;}
case 0x71bdd9:{ // PAND MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x71bddd;}
case 0x71bddd:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x71bde0;}
case 0x71bde0:{ // PAND MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x71bde3;}
case 0x71bde3:{ // POR MM0,MM1
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1110)));
return 0x71bde6;}
case 0x71bde6:{ // POR MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x71bde9;}
case 0x71bde9:{ // PSLLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x10ull));
return 0x71bded;}
case 0x71bded:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71bdf0;}
case 0x71bdf0:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bdf3;}
case 0x71bdf3:{ // MOVQ qword ptr [EDX + 0x70],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bdf7;}
case 0x71bdf7:{ // PSRLQ MM2,0x30
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x30ull));
return 0x71bdfb;}
case 0x71bdfb:{ // PAND MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),u<8>(c,0xa400)));
return 0x71bdff;}
case 0x71bdff:{ // POR MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71be02;}
case 0x71be02:{ // MOVQ MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be06;}
case 0x71be06:{ // POR MM6,MM4
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1140)));
return 0x71be09;}
case 0x71be09:{ // PAND MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x71be0c;}
case 0x71be0c:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x71be10;}
case 0x71be10:{ // POR MM3,qword ptr [EDX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x71be14;}
case 0x71be14:{ // POR MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71be17;}
case 0x71be17:{ // MOVQ MM2,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be1b;}
case 0x71be1b:{ // PSLLQ MM5,0x10
wr<8>(c,0x1150,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1150),0x10ull));
return 0x71be1f;}
case 0x71be1f:{ // MOVQ qword ptr [EDX + 0x60],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71be23;}
case 0x71be23:{ // PAND MM2,MM5
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1150)));
return 0x71be26;}
case 0x71be26:{ // MOVQ MM6,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be2a;}
case 0x71be2a:{ // PXOR MM5,MM2
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1120)));
return 0x71be2d;}
case 0x71be2d:{ // PAND MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x71be30;}
case 0x71be30:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x71be34;}
case 0x71be34:{ // PAND MM7,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71be38;}
case 0x71be38:{ // POR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x71be3b;}
case 0x71be3b:{ // POR MM7,qword ptr [EDX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71be3f;}
case 0x71be3f:{ // POR MM6,MM3
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1130)));
return 0x71be42;}
case 0x71be42:{ // POR MM7,MM5
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1150)));
return 0x71be45;}
case 0x71be45:{ // MOVQ qword ptr [EDX + 0x50],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71be49;}
case 0x71be49:{ // MOVQ qword ptr [EDX + 0x40],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71be4d;}
case 0x71be4d:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be51;}
case 0x71be51:{ // NOP
return 0x71be52;}
case 0x71be52:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be56;}
case 0x71be56:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71be59;}
case 0x71be59:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be5d;}
case 0x71be5d:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71be60;}
case 0x71be60:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be64;}
case 0x71be64:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71be67;}
case 0x71be67:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be6b;}
case 0x71be6b:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71be6e;}
case 0x71be6e:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71be71;}
case 0x71be71:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71be74;}
case 0x71be74:{ // MOVQ MM5,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be78;}
case 0x71be78:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71be7b;}
case 0x71be7b:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71be7e;}
case 0x71be7e:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71be81;}
case 0x71be81:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71be85;}
case 0x71be85:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71be88;}
case 0x71be88:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71be8c;}
case 0x71be8c:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71be8f;}
case 0x71be8f:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71be93;}
case 0x71be93:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71be96;}
case 0x71be96:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71be99;}
case 0x71be99:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71be9c;}
case 0x71be9c:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71bea0;}
case 0x71bea0:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71bea3;}
case 0x71bea3:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bea7;}
case 0x71bea7:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71beaa;}
case 0x71beaa:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71beae;}
case 0x71beae:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71beb1;}
case 0x71beb1:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71beb4;}
case 0x71beb4:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71beb7;}
case 0x71beb7:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bebb;}
case 0x71bebb:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bebe;}
case 0x71bebe:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bec1;}
case 0x71bec1:{ // PMULHW MM0,MM4
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71bec4;}
case 0x71bec4:{ // PADDW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x71bec7;}
case 0x71bec7:{ // PADDW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71beca;}
case 0x71beca:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x71becd;}
case 0x71becd:{ // PMULHW MM6,MM4
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x71bed0;}
case 0x71bed0:{ // PADDW MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),u<2>(c,0xe3e00)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),u<2>(c,0xe3e02)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),u<2>(c,0xe3e04)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),u<2>(c,0xe3e06)));
return 0x71bed3;}
case 0x71bed3:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71bed6;}
case 0x71bed6:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71bed9;}
case 0x71bed9:{ // PADDSW MM1,MM5
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x71bedc;}
case 0x71bedc:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71bedf;}
case 0x71bedf:{ // PADDSW MM2,MM2
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x71bee2;}
case 0x71bee2:{ // MOVQ MM0,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bee6;}
case 0x71bee6:{ // PADDSW MM2,MM6
wr<8>(c,0x1120,user_op(c,524430,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x71bee9;}
case 0x71bee9:{ // PSUBSW MM2,MM1
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x71beec;}
case 0x71beec:{ // NOP
return 0x71beed;}
case 0x71beed:{ // MOVQ MM3,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bef1;}
case 0x71bef1:{ // PSUBSW MM4,MM7
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x71bef4;}
case 0x71bef4:{ // PADDSW MM1,MM1
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x71bef7;}
case 0x71bef7:{ // PADDSW MM7,MM7
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x71befa;}
case 0x71befa:{ // PADDSW MM1,MM2
wr<8>(c,0x1110,user_op(c,524430,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71befd;}
case 0x71befd:{ // PADDSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524430,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x71bf00;}
case 0x71bf00:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71bf03;}
case 0x71bf03:{ // PADDSW MM3,MM3
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x71bf06;}
case 0x71bf06:{ // PSUBSW MM6,MM5
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x71bf09;}
case 0x71bf09:{ // PADDSW MM5,MM5
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x71bf0c;}
case 0x71bf0c:{ // PADDSW MM3,MM4
wr<8>(c,0x1130,user_op(c,524430,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71bf0f;}
case 0x71bf0f:{ // PADDSW MM5,MM6
wr<8>(c,0x1150,user_op(c,524430,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x71bf12;}
case 0x71bf12:{ // PSUBSW MM7,MM0
wr<8>(c,0x1170,user_op(c,524457,{r<8>(c,0x1170),r<8>(c,0x1100)}));
return 0x71bf15;}
case 0x71bf15:{ // PADDSW MM0,MM0
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x71bf18;}
case 0x71bf18:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf1c;}
case 0x71bf1c:{ // PADDSW MM0,MM7
wr<8>(c,0x1100,user_op(c,524430,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x71bf1f;}
case 0x71bf1f:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bf22;}
case 0x71bf22:{ // PUNPCKLWD MM4,MM5
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71bf25;}
case 0x71bf25:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71bf28;}
case 0x71bf28:{ // PUNPCKHWD MM1,MM5
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71bf2b;}
case 0x71bf2b:{ // MOVQ MM0,MM6
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71bf2e;}
case 0x71bf2e:{ // PUNPCKLWD MM6,MM7
wr<2>(c,0x1166,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1164,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1162,eval<Op::COPY,2,2>(r<2>(c,0x1170)));
return 0x71bf31;}
case 0x71bf31:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bf34;}
case 0x71bf34:{ // PUNPCKLDQ MM4,MM6
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x71bf37;}
case 0x71bf37:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x71bf3a;}
case 0x71bf3a:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71bf3d;}
case 0x71bf3d:{ // MOVQ qword ptr [EDX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf41;}
case 0x71bf41:{ // PUNPCKHWD MM0,MM7
wr<2>(c,0x1100,eval<Op::COPY,2,2>(r<2>(c,0x1104)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1106)));
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
return 0x71bf44;}
case 0x71bf44:{ // MOVQ qword ptr [EDX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf48;}
case 0x71bf48:{ // PUNPCKHDQ MM6,MM0
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x71bf4b;}
case 0x71bf4b:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bf4e;}
case 0x71bf4e:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x71bf51;}
case 0x71bf51:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bf55;}
case 0x71bf55:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bf58;}
case 0x71bf58:{ // MOVQ qword ptr [EDX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf5c;}
case 0x71bf5c:{ // PUNPCKLWD MM0,MM5
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71bf5f;}
case 0x71bf5f:{ // MOVQ qword ptr [EDX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf63;}
case 0x71bf63:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71bf66;}
case 0x71bf66:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71bf69;}
case 0x71bf69:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x71bf6c;}
case 0x71bf6c:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71bf6f;}
case 0x71bf6f:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71bf72;}
case 0x71bf72:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x71bf75;}
case 0x71bf75:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71bf78;}
case 0x71bf78:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x71bf7b;}
case 0x71bf7b:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x71bf7e;}
case 0x71bf7e:{ // MOVQ qword ptr [EDX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf82;}
case 0x71bf82:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x71bf85;}
case 0x71bf85:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71bf88;}
case 0x71bf88:{ // MOVQ qword ptr [EDX + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf8c;}
case 0x71bf8c:{ // MOVQ qword ptr [EDX + 0x20],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bf90;}
case 0x71bf90:{ // MOVQ MM2,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bf94;}
case 0x71bf94:{ // NOP
return 0x71bf95;}
case 0x71bf95:{ // MOVQ MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bf99;}
case 0x71bf99:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71bf9c;}
case 0x71bf9c:{ // MOVQ MM1,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bfa0;}
case 0x71bfa0:{ // PMULHW MM4,MM6
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71bfa3;}
case 0x71bfa3:{ // MOVQ MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bfa7;}
case 0x71bfa7:{ // PMULHW MM1,MM2
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x71bfaa;}
case 0x71bfaa:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bfae;}
case 0x71bfae:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x71bfb1;}
case 0x71bfb1:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x71bfb4;}
case 0x71bfb4:{ // PADDW MM2,MM1
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1110)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1112)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1114)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1116)));
return 0x71bfb7;}
case 0x71bfb7:{ // MOVQ MM5,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bfbb;}
case 0x71bfbb:{ // PMULHW MM0,MM3
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x71bfbe;}
case 0x71bfbe:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71bfc1;}
case 0x71bfc1:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x71bfc4;}
case 0x71bfc4:{ // PMULHW MM3,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x71bfc8;}
case 0x71bfc8:{ // PSUBSW MM6,MM2
wr<8>(c,0x1160,user_op(c,524457,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x71bfcb;}
case 0x71bfcb:{ // PMULHW MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524445,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x71bfcf;}
case 0x71bfcf:{ // PSUBSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524457,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71bfd2;}
case 0x71bfd2:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bfd6;}
case 0x71bfd6:{ // PADDSW MM4,MM4
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x71bfd9;}
case 0x71bfd9:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71bfdc;}
case 0x71bfdc:{ // PADDSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524430,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x71bfdf;}
case 0x71bfdf:{ // PMULHW MM1,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524445,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x71bfe3;}
case 0x71bfe3:{ // PSUBSW MM3,MM6
wr<8>(c,0x1130,user_op(c,524457,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x71bfe6;}
case 0x71bfe6:{ // MOVQ qword ptr [EDX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bfea;}
case 0x71bfea:{ // PADDSW MM6,MM6
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x71bfed;}
case 0x71bfed:{ // MOVQ MM4,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71bff1;}
case 0x71bff1:{ // PADDSW MM6,MM3
wr<8>(c,0x1160,user_op(c,524430,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x71bff4;}
case 0x71bff4:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71bff7;}
case 0x71bff7:{ // PMULHW MM3,MM4
wr<8>(c,0x1130,user_op(c,524445,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x71bffa;}
case 0x71bffa:{ // MOVQ qword ptr [EDX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71bffe;}
case 0x71bffe:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71c001;}
default:missing_instruction(c.pc);}}
}
