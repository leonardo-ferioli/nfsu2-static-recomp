#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_711(Cpu& c){switch(c.pc){
case 0x711001:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711005;}
case 0x711005:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711008;}
case 0x711008:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71100c;}
case 0x71100c:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71100f;}
case 0x71100f:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711012;}
case 0x711012:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711015;}
case 0x711015:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711019;}
case 0x711019:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71101d;}
case 0x71101d:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711021;}
case 0x711021:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711024;}
case 0x711024:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711027;}
case 0x711027:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71102a;}
case 0x71102a:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71102e;}
case 0x71102e:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711032;}
case 0x711032:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711035;}
case 0x711035:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711039;}
case 0x711039:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71103c;}
case 0x71103c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71103f;}
case 0x71103f:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711042;}
case 0x711042:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x711045;}
case 0x711045:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711049;}
case 0x711049:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71104d;}
case 0x71104d:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711054;}
case 0x711054:{ // MOVQ MM5,qword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71105b;}
case 0x71105b:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71105f;}
case 0x71105f:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711062;}
case 0x711062:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711065;}
case 0x711065:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711068;}
case 0x711068:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71106c;}
case 0x71106c:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711070;}
case 0x711070:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711074;}
case 0x711074:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71107b;}
case 0x71107b:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71107e;}
case 0x71107e:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711081;}
case 0x711081:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711084;}
case 0x711084:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711088;}
case 0x711088:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71108c;}
case 0x71108c:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711093;}
case 0x711093:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x711096;}
case 0x711096:{ // MOVQ MM5,qword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71109d;}
case 0x71109d:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7110a1;}
case 0x7110a1:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7110a4;}
case 0x7110a4:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7110a7;}
case 0x7110a7:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7110aa;}
case 0x7110aa:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7110ae;}
case 0x7110ae:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7110b2;}
case 0x7110b2:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7110b6;}
case 0x7110b6:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7110b9;}
case 0x7110b9:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7110bc;}
case 0x7110bc:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7110bf;}
case 0x7110bf:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7110c2;}
case 0x7110c2:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7110c6;}
case 0x7110c6:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7110ca;}
case 0x7110ca:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7110ce;}
case 0x7110ce:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7110d1;}
case 0x7110d1:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7110d4;}
case 0x7110d4:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7110d7;}
case 0x7110d7:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7110db;}
case 0x7110db:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7110df;}
case 0x7110df:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7110e3;}
case 0x7110e3:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7110e6;}
case 0x7110e6:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7110e9;}
case 0x7110e9:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7110ec;}
case 0x7110ec:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7110ef;}
case 0x7110ef:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7110f3;}
case 0x7110f3:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7110f7;}
case 0x7110f7:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7110fb;}
case 0x7110fb:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7110fe;}
case 0x7110fe:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711101;}
case 0x711101:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711104;}
case 0x711104:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711108;}
case 0x711108:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71110f;}
case 0x71110f:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711113;}
case 0x711113:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711116;}
case 0x711116:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711119;}
case 0x711119:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71111c;}
case 0x71111c:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x71111f;}
case 0x71111f:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711123;}
case 0x711123:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711127;}
case 0x711127:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71112b;}
case 0x71112b:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71112e;}
case 0x71112e:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711131;}
case 0x711131:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711134;}
case 0x711134:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711138;}
case 0x711138:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71113b;}
case 0x71113b:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71113e;}
case 0x71113e:{ // MOVQ MM1,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711142;}
case 0x711142:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711146;}
case 0x711146:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71114a;}
case 0x71114a:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71114e;}
case 0x71114e:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711152;}
case 0x711152:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x711155;}
case 0x711155:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x711158;}
case 0x711158:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71115b;}
case 0x71115b:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711162;}
case 0x711162:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711165;}
case 0x711165:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x711168;}
case 0x711168:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x71116b;}
case 0x71116b:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x71116f;}
case 0x71116f:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711172;}
case 0x711172:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x711176;}
case 0x711176:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x711179;}
case 0x711179:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x71117c;}
case 0x71117c:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x711183;}
case 0x711183:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711186;}
case 0x711186:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x711189;}
case 0x711189:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71118c;}
case 0x71118c:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x711190;}
case 0x711190:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x711193;}
case 0x711193:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x711196;}
case 0x711196:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x711199;}
case 0x711199:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71119c;}
case 0x71119c:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7111a0;}
case 0x7111a0:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7111a4;}
case 0x7111a4:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x7111a7;}
case 0x7111a7:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x7111aa;}
case 0x7111aa:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x7111ad;}
case 0x7111ad:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x7111b0;}
case 0x7111b0:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x7111b3;}
case 0x7111b3:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7111b6;}
case 0x7111b6:{ // MOVQ qword ptr [EBP + 0xffffff30],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7111bd;}
case 0x7111bd:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7111c0;}
case 0x7111c0:{ // MOVQ qword ptr [EBP + 0xffffff20],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7111c7;}
case 0x7111c7:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7111ca;}
case 0x7111ca:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7111ce;}
case 0x7111ce:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7111d1;}
case 0x7111d1:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7111d4;}
case 0x7111d4:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x7111d7;}
case 0x7111d7:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x7111da;}
case 0x7111da:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x7111dd;}
case 0x7111dd:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7111e4;}
case 0x7111e4:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x7111e8;}
case 0x7111e8:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7111eb;}
case 0x7111eb:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x7111ee;}
case 0x7111ee:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x7111f1;}
case 0x7111f1:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x7111f4;}
case 0x7111f4:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7111fb;}
case 0x7111fb:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711202;}
case 0x711202:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711205;}
case 0x711205:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711208;}
case 0x711208:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71120b;}
case 0x71120b:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x71120e;}
case 0x71120e:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x711211;}
case 0x711211:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711218;}
case 0x711218:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x71121c;}
case 0x71121c:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71121f;}
case 0x71121f:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x711222;}
case 0x711222:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x711225;}
case 0x711225:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x711228;}
case 0x711228:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71122b;}
case 0x71122b:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x71122e;}
case 0x71122e:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711231;}
case 0x711231:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711235;}
case 0x711235:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711239;}
case 0x711239:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71123d;}
case 0x71123d:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711241;}
case 0x711241:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711248;}
case 0x711248:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x71124b;}
case 0x71124b:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71124e;}
case 0x71124e:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711252;}
case 0x711252:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711255;}
case 0x711255:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x711259;}
case 0x711259:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71125d;}
case 0x71125d:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711261;}
case 0x711261:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711265;}
case 0x711265:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711268;}
case 0x711268:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x71126b;}
case 0x71126b:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71126e;}
case 0x71126e:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x711271;}
case 0x711271:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711275;}
case 0x711275:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711278;}
case 0x711278:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71127c;}
case 0x71127c:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71127f;}
case 0x71127f:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711282;}
case 0x711282:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711285;}
case 0x711285:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711289;}
case 0x711289:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71128d;}
case 0x71128d:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711291;}
case 0x711291:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711294;}
case 0x711294:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711297;}
case 0x711297:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71129a;}
case 0x71129a:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71129e;}
case 0x71129e:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7112a2;}
case 0x7112a2:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7112a5;}
case 0x7112a5:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7112a9;}
case 0x7112a9:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7112ac;}
case 0x7112ac:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7112af;}
case 0x7112af:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7112b2;}
case 0x7112b2:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7112b6;}
case 0x7112b6:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7112ba;}
case 0x7112ba:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7112be;}
case 0x7112be:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7112c1;}
case 0x7112c1:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7112c4;}
case 0x7112c4:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7112c7;}
case 0x7112c7:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7112cb;}
case 0x7112cb:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7112cf;}
case 0x7112cf:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7112d2;}
case 0x7112d2:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7112d6;}
case 0x7112d6:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7112d9;}
case 0x7112d9:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7112dc;}
case 0x7112dc:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7112df;}
case 0x7112df:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x7112e2;}
case 0x7112e2:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7112e6;}
case 0x7112e6:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7112ea;}
case 0x7112ea:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7112f1;}
case 0x7112f1:{ // MOVQ MM5,qword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7112f8;}
case 0x7112f8:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7112fc;}
case 0x7112fc:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7112ff;}
case 0x7112ff:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711302;}
case 0x711302:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711305;}
case 0x711305:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711309;}
case 0x711309:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71130d;}
case 0x71130d:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711311;}
case 0x711311:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711318;}
case 0x711318:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71131b;}
case 0x71131b:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71131e;}
case 0x71131e:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711321;}
case 0x711321:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711325;}
case 0x711325:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711329;}
case 0x711329:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711330;}
case 0x711330:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x711333;}
case 0x711333:{ // MOVQ MM5,qword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71133a;}
case 0x71133a:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71133e;}
case 0x71133e:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711341;}
case 0x711341:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711344;}
case 0x711344:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711347;}
case 0x711347:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71134b;}
case 0x71134b:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71134f;}
case 0x71134f:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711353;}
case 0x711353:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711356;}
case 0x711356:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711359;}
case 0x711359:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71135c;}
case 0x71135c:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x71135f;}
case 0x71135f:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711363;}
case 0x711363:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711367;}
case 0x711367:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71136b;}
case 0x71136b:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71136e;}
case 0x71136e:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711371;}
case 0x711371:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711374;}
case 0x711374:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711378;}
case 0x711378:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71137c;}
case 0x71137c:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711380;}
case 0x711380:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711383;}
case 0x711383:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711386;}
case 0x711386:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711389;}
case 0x711389:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x71138c;}
case 0x71138c:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711390;}
case 0x711390:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711394;}
case 0x711394:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711398;}
case 0x711398:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71139b;}
case 0x71139b:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x71139e;}
case 0x71139e:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7113a1;}
case 0x7113a1:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7113a5;}
case 0x7113a5:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7113ac;}
case 0x7113ac:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7113b0;}
case 0x7113b0:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7113b3;}
case 0x7113b3:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7113b6;}
case 0x7113b6:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7113b9;}
case 0x7113b9:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7113bc;}
case 0x7113bc:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7113c0;}
case 0x7113c0:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7113c4;}
case 0x7113c4:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7113c8;}
case 0x7113c8:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7113cb;}
case 0x7113cb:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7113ce;}
case 0x7113ce:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7113d1;}
case 0x7113d1:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7113d5;}
case 0x7113d5:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7113d8;}
case 0x7113d8:{ // SUB ESI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7113db;}
case 0x7113db:{ // MOV EBP,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7113de;}
case 0x7113de:{ // LEA EBP,[EBP + EDX*0x4]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x7113e2;}
case 0x7113e2:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7113e5;}
case 0x7113e5:{ // PACKUSWB MM0,qword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x7113e9;}
case 0x7113e9:{ // MOVQ qword ptr [EBP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x14),u<8>(c,0xa400));
return 0x7113ed;}
case 0x7113ed:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7113f1;}
case 0x7113f1:{ // PACKUSWB MM1,qword ptr [ESI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x18ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x7113f5;}
case 0x7113f5:{ // MOVQ qword ptr [EBP + ECX*0x1],MM1
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x7113fa;}
case 0x7113fa:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7113fe;}
case 0x7113fe:{ // PACKUSWB MM2,qword ptr [ESI + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x28ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x711402;}
case 0x711402:{ // MOVQ qword ptr [EBP + ECX*0x2],MM2
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x711407;}
case 0x711407:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71140b;}
case 0x71140b:{ // PACKUSWB MM3,qword ptr [ESI + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x38ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71140f;}
case 0x71140f:{ // LEA EBP,[EBP + ECX*0x4]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x711413;}
case 0x711413:{ // MOVQ qword ptr [EBP + EDX*0x1],MM3
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x711418;}
case 0x711418:{ // MOVQ MM0,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71141c;}
case 0x71141c:{ // PACKUSWB MM0,qword ptr [ESI + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x48ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1100,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x711420;}
case 0x711420:{ // MOVQ qword ptr [EBP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x14),u<8>(c,0xa400));
return 0x711424;}
case 0x711424:{ // MOVQ MM1,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711428;}
case 0x711428:{ // PACKUSWB MM1,qword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x71142c;}
case 0x71142c:{ // MOVQ qword ptr [EBP + ECX*0x1],MM1
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x711431;}
case 0x711431:{ // MOVQ MM2,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711435;}
case 0x711435:{ // PACKUSWB MM2,qword ptr [ESI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x711439;}
case 0x711439:{ // MOVQ qword ptr [EBP + ECX*0x2],MM2
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x71143e;}
case 0x71143e:{ // MOVQ MM3,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711442;}
case 0x711442:{ // PACKUSWB MM3,qword ptr [ESI + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x78ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x711446;}
case 0x711446:{ // LEA EBP,[EBP + ECX*0x2]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x71144a;}
case 0x71144a:{ // MOVQ qword ptr [EBP + ECX*0x1],MM3
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x71144f;}
case 0x71144f:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711450;}
case 0x711450:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711451;}
case 0x711451:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711452;}
case 0x711452:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711453;}
case 0x711453:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711454;}
case 0x711454:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711455;}
case 0x711455:{ // MOVZX EDI,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711459;}
case 0x711459:{ // MOVZX ESI,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71145d;}
case 0x71145d:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71145f;}
case 0x71145f:{ // MOVZX EDI,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711463;}
case 0x711463:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711465;}
case 0x711465:{ // MOVZX EDI,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711469;}
case 0x711469:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71146b;}
case 0x71146b:{ // MOVZX EDI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71146f;}
case 0x71146f:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711472;}
case 0x711472:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711474;}
case 0x711474:{ // MOVZX EDI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711478;}
case 0x711478:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71147b;}
case 0x71147b:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71147e;}
case 0x71147e:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711480;}
case 0x711480:{ // MOVZX EDI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711484;}
case 0x711484:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711486;}
case 0x711486:{ // MOVZX EDI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71148a;}
case 0x71148a:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71148c;}
case 0x71148c:{ // MOVZX EDI,word ptr [EBP + -0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711490;}
case 0x711490:{ // SHL ECX,0x2
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
return 0x711493;}
case 0x711493:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711495;}
case 0x711495:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x711497;}
case 0x711497:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71149a;}
case 0x71149a:{ // MOV ESI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71149d;}
case 0x71149d:{ // ADD EAX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71149f;}
case 0x71149f:{ // MOVZX ESI,word ptr [EBP + -0x5a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114a3;}
case 0x7114a3:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114a5;}
case 0x7114a5:{ // MOVZX EDI,word ptr [EBP + -0x5e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114a9;}
case 0x7114a9:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114ab;}
case 0x7114ab:{ // MOVZX EDI,word ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114af;}
case 0x7114af:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114b1;}
case 0x7114b1:{ // MOVZX EDI,word ptr [EBP + -0x4a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114b5;}
case 0x7114b5:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114b7;}
case 0x7114b7:{ // MOVZX EDI,word ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114bb;}
case 0x7114bb:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114bd;}
case 0x7114bd:{ // MOVZX EDI,word ptr [EBP + -0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114c1;}
case 0x7114c1:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114c3;}
case 0x7114c3:{ // MOVZX EDI,word ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7114c7;}
case 0x7114c7:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114c9;}
case 0x7114c9:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x7114cb;}
case 0x7114cb:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114ce;}
case 0x7114ce:{ // CMP EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114d1;}
case 0x7114d1:{ // MOV dword ptr [EBP + 0xffffff5c],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x7114d7;}
case 0x7114d7:{ // JZ 0x00711f68
if(r<1>(c,0x206)){return 0x711f68;}
return 0x7114dd;}
case 0x7114dd:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114e0;}
case 0x7114e0:{ // MOV dword ptr [EBP + -0x64],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7114e3;}
case 0x7114e3:{ // MOV dword ptr [EBP + -0x68],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7114e6;}
case 0x7114e6:{ // MOV EAX,dword ptr [EDX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114e9;}
case 0x7114e9:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114ec;}
case 0x7114ec:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114ef;}
case 0x7114ef:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114f2;}
case 0x7114f2:{ // MOV dword ptr [EBP + -0x6c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7114f5;}
case 0x7114f5:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7114f8;}
case 0x7114f8:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7114fa;}
case 0x7114fa:{ // MOVZX DX,byte ptr [EAX + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x7114ff;}
case 0x7114ff:{ // MOV word ptr [EBP + ECX*0x2 + 0xfffffe80],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe80ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x711507;}
case 0x711507:{ // MOVZX DX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x71150b;}
case 0x71150b:{ // ADD EAX,dword ptr [EBX + 0x14]
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
return 0x71150e;}
case 0x71150e:{ // MOV word ptr [EBP + ECX*0x2 + 0xffffff10],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xffffff10ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x711516;}
case 0x711516:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711517;}
case 0x711517:{ // CMP ECX,0x8
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
return 0x71151a;}
case 0x71151a:{ // JC 0x007114fa
if(r<1>(c,0x200)){return 0x7114fa;}
return 0x71151c;}
case 0x71151c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71151d;}
case 0x71151d:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71151e;}
case 0x71151e:{ // MOV EAX,dword ptr [EBP + -0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711521;}
case 0x711521:{ // MOVD MM0,EAX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x711524;}
case 0x711524:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711525;}
case 0x711525:{ // PUNPCKLWD MM0,MM0
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1100)));
return 0x711528;}
case 0x711528:{ // MOVQ MM1,qword ptr [0x008175b0]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x8175b0)));
return 0x71152f;}
case 0x71152f:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711530;}
case 0x711530:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x711533;}
case 0x711533:{ // MOVQ qword ptr [EBP + 0xffffff40],MM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71153a;}
case 0x71153a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71153b;}
case 0x71153b:{ // PMULLW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x71153e;}
case 0x71153e:{ // PMULLW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x711541;}
case 0x711541:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711542;}
case 0x711542:{ // PSRLW MM1,0x5
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x5ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x5ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x5ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x5ull));
return 0x711546;}
case 0x711546:{ // MOVQ qword ptr [EBP + 0xffffff60],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71154d;}
case 0x71154d:{ // MOV EAX,dword ptr [EBP + -0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711550;}
case 0x711550:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711552;}
case 0x711552:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711555;}
case 0x711555:{ // LEA ESI,[EBP + 0xfffffe00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe00ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x71155b;}
case 0x71155b:{ // LEA EDI,[EBP + 0xfffffe80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe80ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x711561;}
case 0x711561:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711564;}
case 0x711564:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711566;}
case 0x711566:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711569;}
case 0x711569:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71156d;}
case 0x71156d:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711571;}
case 0x711571:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x711574;}
case 0x711574:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711578;}
case 0x711578:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71157b;}
case 0x71157b:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71157e;}
case 0x71157e:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x711581;}
case 0x711581:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x711584;}
case 0x711584:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x711587;}
case 0x711587:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x71158a;}
case 0x71158a:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71158d;}
case 0x71158d:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x711590;}
case 0x711590:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x711593;}
case 0x711593:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711596;}
case 0x711596:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x711599;}
case 0x711599:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71159c;}
case 0x71159c:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71159f;}
case 0x71159f:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7115a2;}
case 0x7115a2:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7115a5;}
case 0x7115a5:{ // MOVQ qword ptr [EDI + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115a9;}
case 0x7115a9:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7115ac;}
case 0x7115ac:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7115af;}
case 0x7115af:{ // MOVQ qword ptr [EDI + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115b3;}
case 0x7115b3:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7115b6;}
case 0x7115b6:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7115b9;}
case 0x7115b9:{ // MOVQ qword ptr [EDI + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115bd;}
case 0x7115bd:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7115c0;}
case 0x7115c0:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7115c3;}
case 0x7115c3:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115c7;}
case 0x7115c7:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7115ca;}
case 0x7115ca:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7115cd;}
case 0x7115cd:{ // MOVQ qword ptr [EDI + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115d1;}
case 0x7115d1:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7115d4;}
case 0x7115d4:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7115d7;}
case 0x7115d7:{ // MOVQ qword ptr [EDI + 0x60],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115db;}
case 0x7115db:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7115de;}
case 0x7115de:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7115e2;}
case 0x7115e2:{ // MOVQ qword ptr [EDI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7115e6;}
case 0x7115e6:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7115ea;}
case 0x7115ea:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7115ed;}
case 0x7115ed:{ // MOVQ qword ptr [EDI + 0x80],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7115f4;}
case 0x7115f4:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7115f7;}
case 0x7115f7:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7115fb;}
case 0x7115fb:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x7115fe;}
case 0x7115fe:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x711601;}
case 0x711601:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x711604;}
case 0x711604:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x711607;}
case 0x711607:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x71160a;}
case 0x71160a:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71160d;}
case 0x71160d:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x711610;}
case 0x711610:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x711613;}
case 0x711613:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711616;}
case 0x711616:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x711619;}
case 0x711619:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71161c;}
case 0x71161c:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71161f;}
case 0x71161f:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x711622;}
case 0x711622:{ // MOVQ qword ptr [EDI + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711626;}
case 0x711626:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x711629;}
case 0x711629:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71162c;}
case 0x71162c:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711630;}
case 0x711630:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x711633;}
case 0x711633:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x711636;}
case 0x711636:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71163a;}
case 0x71163a:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71163d;}
case 0x71163d:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711640;}
case 0x711640:{ // MOVQ qword ptr [EDI + 0x48],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711644;}
case 0x711644:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x711647;}
case 0x711647:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71164a;}
case 0x71164a:{ // MOVQ qword ptr [EDI + 0x58],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71164e;}
case 0x71164e:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x711651;}
case 0x711651:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x711654;}
case 0x711654:{ // MOVQ qword ptr [EDI + 0x68],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711658;}
case 0x711658:{ // MOVQ qword ptr [EDI + 0x78],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71165c;}
case 0x71165c:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x711663;}
case 0x711663:{ // PCMPEQW MM3,MM3
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x711666;}
case 0x711666:{ // PSLLW MM3,0xf
wr<8>(c,0x1130,user_op(c,524454,{r<8>(c,0x1130),0xfull}));
return 0x71166a;}
case 0x71166a:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x71166e;}
case 0x71166e:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711672;}
case 0x711672:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711676;}
case 0x711676:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x711679;}
case 0x711679:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x71167c;}
case 0x71167c:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71167f;}
case 0x71167f:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x711682;}
case 0x711682:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x711685;}
case 0x711685:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x711688;}
case 0x711688:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71168b;}
case 0x71168b:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71168e;}
case 0x71168e:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711692;}
case 0x711692:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711696;}
case 0x711696:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x711699;}
case 0x711699:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x71169c;}
case 0x71169c:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71169f;}
case 0x71169f:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7116a2;}
case 0x7116a2:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7116a5;}
case 0x7116a5:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7116a8;}
case 0x7116a8:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7116ab;}
case 0x7116ab:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7116ae;}
case 0x7116ae:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7116b2;}
case 0x7116b2:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7116b6;}
case 0x7116b6:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7116b9;}
case 0x7116b9:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7116bc;}
case 0x7116bc:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7116bf;}
case 0x7116bf:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7116c2;}
case 0x7116c2:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7116c5;}
case 0x7116c5:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7116c8;}
case 0x7116c8:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7116cb;}
case 0x7116cb:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7116ce;}
case 0x7116ce:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7116d2;}
case 0x7116d2:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7116d9;}
case 0x7116d9:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7116dc;}
case 0x7116dc:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7116df;}
case 0x7116df:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7116e2;}
case 0x7116e2:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7116e5;}
case 0x7116e5:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7116e8;}
case 0x7116e8:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7116eb;}
case 0x7116eb:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7116ee;}
case 0x7116ee:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7116f1;}
case 0x7116f1:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7116f4;}
case 0x7116f4:{ // PSRLW MM7,0x7
wr<2>(c,0x1170,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1170),0x7ull));
wr<2>(c,0x1172,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1172),0x7ull));
wr<2>(c,0x1174,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1174),0x7ull));
wr<2>(c,0x1176,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1176),0x7ull));
return 0x7116f8;}
case 0x7116f8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7116fb;}
case 0x7116fb:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7116fe;}
case 0x7116fe:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x711701;}
case 0x711701:{ // PADDW MM4,MM7
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1170)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1172)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1174)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1176)));
return 0x711704;}
case 0x711704:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x711708;}
case 0x711708:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x71170c;}
case 0x71170c:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x711710;}
case 0x711710:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x711714;}
case 0x711714:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x711717;}
case 0x711717:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x71171a;}
case 0x71171a:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71171d;}
case 0x71171d:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x711720;}
case 0x711720:{ // MOVQ qword ptr [EBP + -0x40],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711724;}
case 0x711724:{ // MOVQ qword ptr [EBP + -0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711728;}
case 0x711728:{ // MOVQ MM7,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71172f;}
case 0x71172f:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711732;}
case 0x711732:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711735;}
case 0x711735:{ // PSUBW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x711738;}
case 0x711738:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x71173b;}
case 0x71173b:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x71173f;}
case 0x71173f:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x711743;}
case 0x711743:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x711747;}
case 0x711747:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x71174b;}
case 0x71174b:{ // MOVQ MM7,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71174f;}
case 0x71174f:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x711752;}
case 0x711752:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x711755;}
case 0x711755:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711759;}
case 0x711759:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x71175c;}
case 0x71175c:{ // MOVQ MM2,MM7
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x71175f;}
case 0x71175f:{ // PSUBUSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524459,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x711762;}
case 0x711762:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x711765;}
case 0x711765:{ // POR MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x711768;}
case 0x711768:{ // PSUBW MM7,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),u<2>(c,0x132600)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),u<2>(c,0x132602)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),u<2>(c,0x132604)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),u<2>(c,0x132606)));
return 0x71176f;}
case 0x71176f:{ // PSRAW MM7,0xf
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0xfull}));
return 0x711773;}
case 0x711773:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x711776;}
case 0x711776:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711779;}
case 0x711779:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71177d;}
case 0x71177d:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711781;}
case 0x711781:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x711784;}
case 0x711784:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x711787;}
case 0x711787:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71178a;}
case 0x71178a:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71178d;}
case 0x71178d:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x711790;}
case 0x711790:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x711793;}
case 0x711793:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x711796;}
case 0x711796:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x711799;}
case 0x711799:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71179d;}
case 0x71179d:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7117a1;}
case 0x7117a1:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7117a4;}
case 0x7117a4:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7117a7;}
case 0x7117a7:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7117aa;}
case 0x7117aa:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7117ad;}
case 0x7117ad:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7117b0;}
case 0x7117b0:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7117b3;}
case 0x7117b3:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7117b6;}
case 0x7117b6:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7117b9;}
case 0x7117b9:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7117bd;}
case 0x7117bd:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7117c1;}
case 0x7117c1:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7117c4;}
case 0x7117c4:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7117c7;}
case 0x7117c7:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7117ca;}
case 0x7117ca:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7117cd;}
case 0x7117cd:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7117d0;}
case 0x7117d0:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7117d3;}
case 0x7117d3:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7117d6;}
case 0x7117d6:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7117d9;}
case 0x7117d9:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7117dd;}
case 0x7117dd:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7117e4;}
case 0x7117e4:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7117e7;}
case 0x7117e7:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7117ea;}
case 0x7117ea:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x7117ed;}
case 0x7117ed:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x7117f0;}
case 0x7117f0:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x7117f3;}
case 0x7117f3:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x7117f6;}
case 0x7117f6:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7117f9;}
case 0x7117f9:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x7117fc;}
case 0x7117fc:{ // PSRLW MM3,0x7
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x7ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x7ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x7ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x7ull));
return 0x711800;}
case 0x711800:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711803;}
case 0x711803:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711806;}
case 0x711806:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x711809;}
case 0x711809:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71180c;}
case 0x71180c:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x711810;}
case 0x711810:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x711814;}
case 0x711814:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x711818;}
case 0x711818:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x71181c;}
case 0x71181c:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x71181f;}
case 0x71181f:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x711822;}
case 0x711822:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x711825;}
case 0x711825:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x711828;}
case 0x711828:{ // MOVQ qword ptr [EBP + -0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71182c;}
case 0x71182c:{ // MOVQ qword ptr [EBP + -0x60],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711830;}
case 0x711830:{ // MOVQ MM3,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711837;}
case 0x711837:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71183a;}
case 0x71183a:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71183d;}
case 0x71183d:{ // PSUBW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x711840;}
case 0x711840:{ // PSUBW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x711843;}
case 0x711843:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x711847;}
case 0x711847:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x71184b;}
case 0x71184b:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x71184f;}
case 0x71184f:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x711853;}
case 0x711853:{ // MOVQ MM0,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711857;}
case 0x711857:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x71185a;}
case 0x71185a:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x71185d;}
case 0x71185d:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711861;}
case 0x711861:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x711864;}
case 0x711864:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711867;}
case 0x711867:{ // PSUBUSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x71186a;}
case 0x71186a:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x71186d;}
case 0x71186d:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x711870;}
case 0x711870:{ // PSUBW MM0,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),u<2>(c,0x132600)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),u<2>(c,0x132602)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),u<2>(c,0x132604)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),u<2>(c,0x132606)));
return 0x711877;}
case 0x711877:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x71187b;}
case 0x71187b:{ // PAND MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x71187e;}
case 0x71187e:{ // SUB EDI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711881;}
case 0x711881:{ // MOVQ MM1,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711885;}
case 0x711885:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711889;}
case 0x711889:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71188d;}
case 0x71188d:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711891;}
case 0x711891:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711895;}
case 0x711895:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x711898;}
case 0x711898:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x71189b;}
case 0x71189b:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71189e;}
case 0x71189e:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7118a1;}
case 0x7118a1:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7118a8;}
case 0x7118a8:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x7118ab;}
case 0x7118ab:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x7118ae;}
case 0x7118ae:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x7118b2;}
case 0x7118b2:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7118b5;}
case 0x7118b5:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x7118b9;}
case 0x7118b9:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x7118bc;}
case 0x7118bc:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x7118bf;}
case 0x7118bf:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x7118c6;}
case 0x7118c6:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7118c9;}
case 0x7118c9:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x7118cc;}
case 0x7118cc:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7118cf;}
case 0x7118cf:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x7118d3;}
case 0x7118d3:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x7118d6;}
case 0x7118d6:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7118d9;}
case 0x7118d9:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x7118dc;}
case 0x7118dc:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7118df;}
case 0x7118df:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7118e3;}
case 0x7118e3:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7118e7;}
case 0x7118e7:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x7118ea;}
case 0x7118ea:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x7118ed;}
case 0x7118ed:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x7118f0;}
case 0x7118f0:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x7118f3;}
case 0x7118f3:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x7118f6;}
case 0x7118f6:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7118f9;}
case 0x7118f9:{ // MOVQ qword ptr [EBP + 0xffffff30],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x711900;}
case 0x711900:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x711903;}
case 0x711903:{ // MOVQ qword ptr [EBP + 0xffffff20],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x71190a;}
case 0x71190a:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71190d;}
case 0x71190d:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711911;}
case 0x711911:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711914;}
case 0x711914:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711917;}
case 0x711917:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71191a;}
case 0x71191a:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x71191d;}
case 0x71191d:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x711920;}
case 0x711920:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711927;}
case 0x711927:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x71192b;}
case 0x71192b:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71192e;}
case 0x71192e:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x711931;}
case 0x711931:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x711934;}
case 0x711934:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x711937;}
case 0x711937:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71193e;}
case 0x71193e:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711945;}
case 0x711945:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711948;}
case 0x711948:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71194b;}
case 0x71194b:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x71194e;}
case 0x71194e:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x711951;}
case 0x711951:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x711954;}
case 0x711954:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71195b;}
case 0x71195b:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x71195f;}
case 0x71195f:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711962;}
case 0x711962:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x711965;}
case 0x711965:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x711968;}
case 0x711968:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x71196b;}
case 0x71196b:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71196e;}
case 0x71196e:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x711971;}
case 0x711971:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711974;}
case 0x711974:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711978;}
case 0x711978:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71197c;}
case 0x71197c:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711980;}
case 0x711980:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711984;}
case 0x711984:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71198b;}
case 0x71198b:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x71198e;}
case 0x71198e:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711991;}
case 0x711991:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711995;}
case 0x711995:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711998;}
case 0x711998:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x71199c;}
case 0x71199c:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7119a0;}
case 0x7119a0:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7119a4;}
case 0x7119a4:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7119a8;}
case 0x7119a8:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7119ab;}
case 0x7119ab:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7119ae;}
case 0x7119ae:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7119b1;}
case 0x7119b1:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x7119b4;}
case 0x7119b4:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7119b8;}
case 0x7119b8:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7119bb;}
case 0x7119bb:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7119bf;}
case 0x7119bf:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7119c2;}
case 0x7119c2:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7119c5;}
case 0x7119c5:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7119c8;}
case 0x7119c8:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7119cc;}
case 0x7119cc:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7119d0;}
case 0x7119d0:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7119d4;}
case 0x7119d4:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7119d7;}
case 0x7119d7:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7119da;}
case 0x7119da:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7119dd;}
case 0x7119dd:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7119e1;}
case 0x7119e1:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7119e5;}
case 0x7119e5:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7119e8;}
case 0x7119e8:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7119ec;}
case 0x7119ec:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7119ef;}
case 0x7119ef:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7119f2;}
case 0x7119f2:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7119f5;}
case 0x7119f5:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7119f9;}
case 0x7119f9:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7119fd;}
case 0x7119fd:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711a01;}
case 0x711a01:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a04;}
case 0x711a04:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711a07;}
case 0x711a07:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a0a;}
case 0x711a0a:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711a0e;}
case 0x711a0e:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711a12;}
case 0x711a12:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711a15;}
case 0x711a15:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711a19;}
case 0x711a19:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711a1c;}
case 0x711a1c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711a1f;}
case 0x711a1f:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711a22;}
case 0x711a22:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x711a25;}
case 0x711a25:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711a29;}
case 0x711a29:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711a2d;}
case 0x711a2d:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711a34;}
case 0x711a34:{ // MOVQ MM5,qword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711a3b;}
case 0x711a3b:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711a3f;}
case 0x711a3f:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a42;}
case 0x711a42:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711a45;}
case 0x711a45:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a48;}
case 0x711a48:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711a4c;}
case 0x711a4c:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711a50;}
case 0x711a50:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711a54;}
case 0x711a54:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711a5b;}
case 0x711a5b:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711a5e;}
case 0x711a5e:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711a61;}
case 0x711a61:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711a64;}
case 0x711a64:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711a68;}
case 0x711a68:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711a6c;}
case 0x711a6c:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711a73;}
case 0x711a73:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x711a76;}
case 0x711a76:{ // MOVQ MM5,qword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711a7d;}
case 0x711a7d:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711a81;}
case 0x711a81:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a84;}
case 0x711a84:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711a87;}
case 0x711a87:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711a8a;}
case 0x711a8a:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711a8e;}
case 0x711a8e:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711a92;}
case 0x711a92:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711a96;}
case 0x711a96:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711a99;}
case 0x711a99:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711a9c;}
case 0x711a9c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711a9f;}
case 0x711a9f:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711aa2;}
case 0x711aa2:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711aa6;}
case 0x711aa6:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711aaa;}
case 0x711aaa:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711aae;}
case 0x711aae:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ab1;}
case 0x711ab1:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711ab4;}
case 0x711ab4:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ab7;}
case 0x711ab7:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711abb;}
case 0x711abb:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711abf;}
case 0x711abf:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711ac3;}
case 0x711ac3:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711ac6;}
case 0x711ac6:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711ac9;}
case 0x711ac9:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711acc;}
case 0x711acc:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711acf;}
case 0x711acf:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711ad3;}
case 0x711ad3:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711ad7;}
case 0x711ad7:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711adb;}
case 0x711adb:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ade;}
case 0x711ade:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711ae1;}
case 0x711ae1:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ae4;}
case 0x711ae4:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711ae8;}
case 0x711ae8:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711aef;}
case 0x711aef:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711af3;}
case 0x711af3:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711af6;}
case 0x711af6:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711af9;}
case 0x711af9:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711afc;}
case 0x711afc:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711aff;}
case 0x711aff:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711b03;}
case 0x711b03:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711b07;}
case 0x711b07:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711b0b;}
case 0x711b0b:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711b0e;}
case 0x711b0e:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x711b11;}
case 0x711b11:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711b14;}
case 0x711b14:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711b18;}
case 0x711b18:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711b1b;}
case 0x711b1b:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711b1e;}
case 0x711b1e:{ // MOVQ MM1,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b22;}
case 0x711b22:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b26;}
case 0x711b26:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b2a;}
case 0x711b2a:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b2e;}
case 0x711b2e:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b32;}
case 0x711b32:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x711b35;}
case 0x711b35:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x711b38;}
case 0x711b38:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711b3b;}
case 0x711b3b:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711b3e;}
case 0x711b3e:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711b45;}
case 0x711b45:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x711b48;}
case 0x711b48:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x711b4b;}
case 0x711b4b:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x711b4f;}
case 0x711b4f:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711b52;}
case 0x711b52:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x711b56;}
case 0x711b56:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x711b59;}
case 0x711b59:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x711b5c;}
case 0x711b5c:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x711b63;}
case 0x711b63:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711b66;}
case 0x711b66:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x711b69;}
case 0x711b69:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711b6c;}
case 0x711b6c:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x711b70;}
case 0x711b70:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x711b73;}
case 0x711b73:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x711b76;}
case 0x711b76:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x711b79;}
case 0x711b79:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711b7c;}
case 0x711b7c:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b80;}
case 0x711b80:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711b84;}
case 0x711b84:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x711b87;}
case 0x711b87:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x711b8a;}
case 0x711b8a:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x711b8d;}
case 0x711b8d:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x711b90;}
case 0x711b90:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x711b93;}
case 0x711b93:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x711b96;}
case 0x711b96:{ // MOVQ qword ptr [EBP + 0xffffff30],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x711b9d;}
case 0x711b9d:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x711ba0;}
case 0x711ba0:{ // MOVQ qword ptr [EBP + 0xffffff20],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x711ba7;}
case 0x711ba7:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711baa;}
case 0x711baa:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711bae;}
case 0x711bae:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711bb1;}
case 0x711bb1:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711bb4;}
case 0x711bb4:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x711bb7;}
case 0x711bb7:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x711bba;}
case 0x711bba:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x711bbd;}
case 0x711bbd:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711bc4;}
case 0x711bc4:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x711bc8;}
case 0x711bc8:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711bcb;}
case 0x711bcb:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x711bce;}
case 0x711bce:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x711bd1;}
case 0x711bd1:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x711bd4;}
case 0x711bd4:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711bdb;}
case 0x711bdb:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711be2;}
case 0x711be2:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711be5;}
case 0x711be5:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711be8;}
case 0x711be8:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x711beb;}
case 0x711beb:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x711bee;}
case 0x711bee:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x711bf1;}
case 0x711bf1:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711bf8;}
case 0x711bf8:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x711bfc;}
case 0x711bfc:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711bff;}
case 0x711bff:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x711c02;}
case 0x711c02:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x711c05;}
case 0x711c05:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x711c08;}
case 0x711c08:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711c0b;}
case 0x711c0b:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x711c0e;}
case 0x711c0e:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711c11;}
case 0x711c11:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711c15;}
case 0x711c15:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711c19;}
case 0x711c19:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711c1d;}
case 0x711c1d:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711c21;}
case 0x711c21:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711c28;}
case 0x711c28:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x711c2b;}
case 0x711c2b:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711c2e;}
case 0x711c2e:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711c32;}
case 0x711c32:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711c35;}
case 0x711c35:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x711c39;}
case 0x711c39:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711c3d;}
case 0x711c3d:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711c41;}
case 0x711c41:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711c45;}
case 0x711c45:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711c48;}
case 0x711c48:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711c4b;}
case 0x711c4b:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711c4e;}
case 0x711c4e:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x711c51;}
case 0x711c51:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711c55;}
case 0x711c55:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711c58;}
case 0x711c58:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711c5c;}
case 0x711c5c:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711c5f;}
case 0x711c5f:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711c62;}
case 0x711c62:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711c65;}
case 0x711c65:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711c69;}
case 0x711c69:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711c6d;}
case 0x711c6d:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711c71;}
case 0x711c71:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711c74;}
case 0x711c74:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711c77;}
case 0x711c77:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711c7a;}
case 0x711c7a:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711c7e;}
case 0x711c7e:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711c82;}
case 0x711c82:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711c85;}
case 0x711c85:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711c89;}
case 0x711c89:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711c8c;}
case 0x711c8c:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711c8f;}
case 0x711c8f:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711c92;}
case 0x711c92:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711c96;}
case 0x711c96:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711c9a;}
case 0x711c9a:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711c9e;}
case 0x711c9e:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ca1;}
case 0x711ca1:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711ca4;}
case 0x711ca4:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ca7;}
case 0x711ca7:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711cab;}
case 0x711cab:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711caf;}
case 0x711caf:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x711cb2;}
case 0x711cb2:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711cb6;}
case 0x711cb6:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711cb9;}
case 0x711cb9:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711cbc;}
case 0x711cbc:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711cbf;}
case 0x711cbf:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x711cc2;}
case 0x711cc2:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711cc6;}
case 0x711cc6:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711cca;}
case 0x711cca:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711cd1;}
case 0x711cd1:{ // MOVQ MM5,qword ptr [EBP + 0xffffff30]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711cd8;}
case 0x711cd8:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711cdc;}
case 0x711cdc:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711cdf;}
case 0x711cdf:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711ce2;}
case 0x711ce2:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711ce5;}
case 0x711ce5:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711ce9;}
case 0x711ce9:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711ced;}
case 0x711ced:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711cf1;}
case 0x711cf1:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x711cf8;}
case 0x711cf8:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711cfb;}
case 0x711cfb:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711cfe;}
case 0x711cfe:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711d01;}
case 0x711d01:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711d05;}
case 0x711d05:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711d09;}
case 0x711d09:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711d10;}
case 0x711d10:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x711d13;}
case 0x711d13:{ // MOVQ MM5,qword ptr [EBP + 0xffffff20]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711d1a;}
case 0x711d1a:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711d1e;}
case 0x711d1e:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d21;}
case 0x711d21:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711d24;}
case 0x711d24:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d27;}
case 0x711d27:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711d2b;}
case 0x711d2b:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711d2f;}
case 0x711d2f:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711d33;}
case 0x711d33:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711d36;}
case 0x711d36:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711d39;}
case 0x711d39:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711d3c;}
case 0x711d3c:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711d3f;}
case 0x711d3f:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711d43;}
case 0x711d43:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711d47;}
case 0x711d47:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711d4b;}
case 0x711d4b:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d4e;}
case 0x711d4e:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711d51;}
case 0x711d51:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d54;}
case 0x711d54:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711d58;}
case 0x711d58:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711d5c;}
case 0x711d5c:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711d60;}
case 0x711d60:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711d63;}
case 0x711d63:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711d66;}
case 0x711d66:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711d69;}
case 0x711d69:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711d6c;}
case 0x711d6c:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711d70;}
case 0x711d70:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711d74;}
case 0x711d74:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711d78;}
case 0x711d78:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d7b;}
case 0x711d7b:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711d7e;}
case 0x711d7e:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711d81;}
case 0x711d81:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711d85;}
case 0x711d85:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711d8c;}
case 0x711d8c:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x711d90;}
case 0x711d90:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x711d93;}
case 0x711d93:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711d96;}
case 0x711d96:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x711d99;}
case 0x711d99:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x711d9c;}
case 0x711d9c:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x711da0;}
case 0x711da0:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x711da4;}
case 0x711da4:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x711da8;}
case 0x711da8:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711dab;}
case 0x711dab:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x711dae;}
case 0x711dae:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x711db1;}
case 0x711db1:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711db5;}
case 0x711db5:{ // MOV EAX,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711db8;}
case 0x711db8:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711dbb;}
case 0x711dbb:{ // SUB ESI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711dbe;}
case 0x711dbe:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711dc1;}
case 0x711dc1:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711dc4;}
case 0x711dc4:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711dc8;}
case 0x711dc8:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711dcb;}
case 0x711dcb:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x711dce;}
case 0x711dce:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x711dd1;}
case 0x711dd1:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711dd5;}
case 0x711dd5:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711dd9;}
case 0x711dd9:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x711ddc;}
case 0x711ddc:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x711ddf;}
case 0x711ddf:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x711de2;}
case 0x711de2:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711de5;}
case 0x711de5:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x711de8;}
case 0x711de8:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x711deb;}
case 0x711deb:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x711dee;}
case 0x711dee:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711df1;}
case 0x711df1:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711df5;}
case 0x711df5:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x711df8;}
case 0x711df8:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x711dfb;}
case 0x711dfb:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711dff;}
case 0x711dff:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e03;}
case 0x711e03:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e07;}
case 0x711e07:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e0b;}
case 0x711e0b:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711e0e;}
case 0x711e0e:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711e11;}
case 0x711e11:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x711e14;}
case 0x711e14:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x711e17;}
case 0x711e17:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x711e1a;}
case 0x711e1a:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x711e1d;}
case 0x711e1d:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711e20;}
case 0x711e20:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711e23;}
case 0x711e23:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x711e26;}
case 0x711e26:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x711e29;}
case 0x711e29:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x711e2c;}
case 0x711e2c:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x711e2f;}
case 0x711e2f:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e32;}
case 0x711e32:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
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
return 0x711e35;}
case 0x711e35:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x711e38;}
case 0x711e38:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e3c;}
case 0x711e3c:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
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
return 0x711e3f;}
case 0x711e3f:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711e43;}
case 0x711e43:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x711e46;}
case 0x711e46:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
return 0x711e49;}
case 0x711e49:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711e4d;}
case 0x711e4d:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x711e50;}
case 0x711e50:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711e54;}
case 0x711e54:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711e57;}
case 0x711e57:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711e5a;}
case 0x711e5a:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e5d;}
case 0x711e5d:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e61;}
case 0x711e61:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711e64;}
case 0x711e64:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x711e67;}
case 0x711e67:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x711e6a;}
case 0x711e6a:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e6e;}
case 0x711e6e:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e72;}
case 0x711e72:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x711e75;}
case 0x711e75:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x711e78;}
case 0x711e78:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x711e7b;}
case 0x711e7b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x711e7e;}
case 0x711e7e:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x711e81;}
case 0x711e81:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x711e84;}
case 0x711e84:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x711e87;}
case 0x711e87:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x711e8a;}
case 0x711e8a:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711e8e;}
case 0x711e8e:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x711e91;}
case 0x711e91:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x711e94;}
case 0x711e94:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e98;}
case 0x711e98:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711e9c;}
case 0x711e9c:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711ea0;}
case 0x711ea0:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711ea4;}
case 0x711ea4:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711ea7;}
case 0x711ea7:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x711eaa;}
case 0x711eaa:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x711ead;}
case 0x711ead:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x711eb0;}
case 0x711eb0:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x711eb3;}
case 0x711eb3:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x711eb6;}
case 0x711eb6:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x711eb9;}
case 0x711eb9:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x711ebc;}
case 0x711ebc:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x711ebf;}
case 0x711ebf:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x711ec2;}
case 0x711ec2:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x711ec5;}
case 0x711ec5:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x711ec8;}
case 0x711ec8:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711ecb;}
case 0x711ecb:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
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
return 0x711ece;}
case 0x711ece:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x711ed1;}
case 0x711ed1:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x711ed5;}
case 0x711ed5:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
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
return 0x711ed8;}
case 0x711ed8:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711edc;}
case 0x711edc:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x711edf;}
case 0x711edf:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
return 0x711ee2;}
case 0x711ee2:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711ee6;}
case 0x711ee6:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x711ee9;}
case 0x711ee9:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x711eed;}
case 0x711eed:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711eee;}
case 0x711eee:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711eef;}
case 0x711eef:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711ef0;}
case 0x711ef0:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711ef1;}
case 0x711ef1:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711ef2;}
case 0x711ef2:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711ef3;}
case 0x711ef3:{ // MOVZX EDI,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711ef7;}
case 0x711ef7:{ // MOVZX ESI,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711efb;}
case 0x711efb:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711efd;}
case 0x711efd:{ // MOVZX EDI,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f01;}
case 0x711f01:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711f04;}
case 0x711f04:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711f07;}
case 0x711f07:{ // MOV ECX,dword ptr [EBP + 0xffffff5c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711f0d;}
case 0x711f0d:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f0f;}
case 0x711f0f:{ // MOVZX EDI,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f13;}
case 0x711f13:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f15;}
case 0x711f15:{ // MOVZX EDI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f19;}
case 0x711f19:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f1b;}
case 0x711f1b:{ // MOVZX EDI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f1f;}
case 0x711f1f:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f21;}
case 0x711f21:{ // MOVZX EDI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f25;}
case 0x711f25:{ // LEA EAX,[ECX + EAX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x711f29;}
case 0x711f29:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f2b;}
case 0x711f2b:{ // MOVZX EDI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f2f;}
case 0x711f2f:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f31;}
case 0x711f31:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x711f33;}
case 0x711f33:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711f36;}
case 0x711f36:{ // MOVZX EDX,word ptr [EBP + -0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f3a;}
case 0x711f3a:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f3c;}
case 0x711f3c:{ // MOVZX ECX,word ptr [EBP + -0x5a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f40;}
case 0x711f40:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f42;}
case 0x711f42:{ // MOVZX EDX,word ptr [EBP + -0x5e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f46;}
case 0x711f46:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f48;}
case 0x711f48:{ // MOVZX EDX,word ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f4c;}
case 0x711f4c:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f4e;}
case 0x711f4e:{ // MOVZX EDX,word ptr [EBP + -0x4a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f52;}
case 0x711f52:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f54;}
case 0x711f54:{ // MOVZX EDX,word ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f58;}
case 0x711f58:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f5a;}
case 0x711f5a:{ // MOVZX EDX,word ptr [EBP + -0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f5e;}
case 0x711f5e:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f60;}
case 0x711f60:{ // MOVZX EDX,word ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x711f64;}
case 0x711f64:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f66;}
case 0x711f66:{ // ADD dword ptr [EAX],ECX
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
return 0x711f68;}
case 0x711f68:{ // ADD dword ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x711f6c;}
case 0x711f6c:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x711f6e;}
case 0x711f6e:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711f6f;}
case 0x711f6f:{ // ADD dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
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
return 0x711f72;}
case 0x711f72:{ // ADD dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x711f75;}
case 0x711f75:{ // ADD dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
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
return 0x711f78;}
case 0x711f78:{ // ADD dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x711f7b;}
case 0x711f7b:{ // INC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
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
return 0x711f7e;}
case 0x711f7e:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711f81;}
case 0x711f81:{ // CMP EAX,dword ptr [EBP + 0xffffff7c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff7cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6800)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f87;}
case 0x711f87:{ // JC 0x00710b35
if(r<1>(c,0x200)){return 0x710b35;}
return 0x711f8d;}
case 0x711f8d:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711f8e;}
case 0x711f8e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711f8f;}
case 0x711f8f:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x711f91;}
case 0x711f91:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711f92;}
case 0x711f92:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x711f94;}
case 0x711f94:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x711f95;}
case 0x711f95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x711f96;}
case 0x711f96:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711f97;}
case 0x711f97:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x711f99;}
case 0x711f99:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711f9a;}
case 0x711f9a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711f9b;}
case 0x711f9b:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711f9e;}
case 0x711f9e:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711fa1;}
case 0x711fa1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711fa2;}
case 0x711fa2:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fa5;}
case 0x711fa5:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x711fa9;}
case 0x711fa9:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x711fab;}
case 0x711fab:{ // SUB ESP,0x1e8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1e8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1e8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711fb1;}
case 0x711fb1:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711fb2;}
case 0x711fb2:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x711fb3;}
case 0x711fb3:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fb6;}
case 0x711fb6:{ // MOV EAX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fb9;}
case 0x711fb9:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fbc;}
case 0x711fbc:{ // MOV EDX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fbf;}
case 0x711fbf:{ // SHL EAX,0x2
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
return 0x711fc2;}
case 0x711fc2:{ // MOV ECX,dword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fc5;}
case 0x711fc5:{ // MOV dword ptr [EBP + -0x54],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x711fc8;}
case 0x711fc8:{ // MOV word ptr [EBP + -0x50],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fcc;}
case 0x711fcc:{ // MOV word ptr [EBP + -0x4e],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fd0;}
case 0x711fd0:{ // MOV word ptr [EBP + -0x4c],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fd4;}
case 0x711fd4:{ // MOV word ptr [EBP + -0x4a],CX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fd8;}
case 0x711fd8:{ // MOV ECX,dword ptr [0x008b9c4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x8b9c4c)));
return 0x711fde;}
case 0x711fde:{ // MOV EAX,dword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711fe1;}
case 0x711fe1:{ // MOV word ptr [EBP + -0x70],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fe5;}
case 0x711fe5:{ // MOV word ptr [EBP + -0x6e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff92ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fe9;}
case 0x711fe9:{ // MOV word ptr [EBP + -0x6c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711fed;}
case 0x711fed:{ // MOV word ptr [EBP + -0x6a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff96ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x711ff1;}
case 0x711ff1:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x711ff4;}
case 0x711ff4:{ // ADD EAX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x711ff6;}
case 0x711ff6:{ // CMP EDX,EAX
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
return 0x711ff8;}
case 0x711ff8:{ // MOV dword ptr [EBP + -0x28],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x711ffb;}
case 0x711ffb:{ // MOV dword ptr [EBP + 0xffffff4c],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff4cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x712001;}
default:missing_instruction(c.pc);}}
}
