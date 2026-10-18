#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_693(Cpu& c){switch(c.pc){
case 0x693001:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693004;}
case 0x693004:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693007;}
case 0x693007:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69300a;}
case 0x69300a:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69300f;}
case 0x69300f:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693013;}
case 0x693013:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693017;}
case 0x693017:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x69301b;}
case 0x69301b:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x69301f;}
case 0x69301f:{ // MOVQ qword ptr [ESP + 0x18],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693024;}
case 0x693024:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693027;}
case 0x693027:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x69302a;}
case 0x69302a:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69302d;}
case 0x69302d:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693030;}
case 0x693030:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693033;}
case 0x693033:{ // PFMUL MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693038;}
case 0x693038:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x69303c;}
case 0x69303c:{ // PFMUL MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693041;}
case 0x693041:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693045;}
case 0x693045:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x693049;}
case 0x693049:{ // MOVQ qword ptr [ESP + 0x28],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69304e;}
case 0x69304e:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x693051;}
case 0x693051:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693054;}
case 0x693054:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x693058;}
case 0x693058:{ // PFMUL MM5,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69305d;}
case 0x69305d:{ // MOVQ MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693061;}
case 0x693061:{ // PFMUL MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693066;}
case 0x693066:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x69306a;}
case 0x69306a:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x69306e;}
case 0x69306e:{ // MOVQ qword ptr [ESP + 0x38],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693073;}
case 0x693073:{ // MOVQ MM1,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693077;}
case 0x693077:{ // MOVQ MM2,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69307b;}
case 0x69307b:{ // MOVQ MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69307f;}
case 0x69307f:{ // PSWAPD MM5,MM1
wr<8>(c,0x1150,user_op(c,524544,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x693083;}
case 0x693083:{ // PSWAPD MM4,MM2
wr<8>(c,0x1140,user_op(c,524544,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x693087;}
case 0x693087:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x69308b;}
case 0x69308b:{ // PSWAPD MM6,MM3
wr<8>(c,0x1160,user_op(c,524544,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x69308f;}
case 0x69308f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693093;}
case 0x693093:{ // PSWAPD MM7,MM2
wr<8>(c,0x1170,user_op(c,524544,{r<8>(c,0x1170),r<8>(c,0x1120)}));
return 0x693097;}
case 0x693097:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x69309b;}
case 0x69309b:{ // PSWAPD MM0,MM3
wr<8>(c,0x1100,user_op(c,524544,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x69309f;}
case 0x69309f:{ // PFNACC MM5,MM4
wr<8>(c,0x1150,user_op(c,524542,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6930a3;}
case 0x6930a3:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x6930a7;}
case 0x6930a7:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6930ab;}
case 0x6930ab:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6930af;}
case 0x6930af:{ // PFNACC MM6,MM7
wr<8>(c,0x1160,user_op(c,524542,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x6930b3;}
case 0x6930b3:{ // PFNACC MM1,MM2
wr<8>(c,0x1110,user_op(c,524542,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6930b7;}
case 0x6930b7:{ // MOVQ MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6930bb;}
case 0x6930bb:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6930be;}
case 0x6930be:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6930c1;}
case 0x6930c1:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6930c5;}
case 0x6930c5:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6930c8;}
case 0x6930c8:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6930cb;}
case 0x6930cb:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6930ce;}
case 0x6930ce:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6930d1;}
case 0x6930d1:{ // PFMUL MM4,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6930d6;}
case 0x6930d6:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6930da;}
case 0x6930da:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x6930de;}
case 0x6930de:{ // PFADD MM2,MM4
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x6930e2;}
case 0x6930e2:{ // PFSUB MM2,MM3
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x6930e6;}
case 0x6930e6:{ // MOVQ qword ptr [ESP],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x6930ea;}
case 0x6930ea:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6930ed;}
case 0x6930ed:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6930f0;}
case 0x6930f0:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x6930f3;}
case 0x6930f3:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6930f6;}
case 0x6930f6:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6930f9;}
case 0x6930f9:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6930fc;}
case 0x6930fc:{ // PFMUL MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693100;}
case 0x693100:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693104;}
case 0x693104:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693108;}
case 0x693108:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x69310c;}
case 0x69310c:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x693110;}
case 0x693110:{ // MOVQ qword ptr [ESP + 0x10],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693115;}
case 0x693115:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693118;}
case 0x693118:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x69311b;}
case 0x69311b:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x69311e;}
case 0x69311e:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693121;}
case 0x693121:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693124;}
case 0x693124:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693127;}
case 0x693127:{ // PFMUL MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69312b;}
case 0x69312b:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x69312f;}
case 0x69312f:{ // PFMUL MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693134;}
case 0x693134:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693138;}
case 0x693138:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x69313c;}
case 0x69313c:{ // MOVQ qword ptr [ESP + 0x20],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693141;}
case 0x693141:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x693144;}
case 0x693144:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693147;}
case 0x693147:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x69314b;}
case 0x69314b:{ // PFMUL MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x693150;}
case 0x693150:{ // PFMUL MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693154;}
case 0x693154:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x693158;}
case 0x693158:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x69315c;}
case 0x69315c:{ // MOVQ qword ptr [ESP + 0x30],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693161;}
case 0x693161:{ // PUNPCKHDQ MM0,MM2
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693164;}
case 0x693164:{ // PUNPCKLDQ MM7,MM4
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x693167;}
case 0x693167:{ // MOVQ MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69316a;}
case 0x69316a:{ // MOVQ MM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69316e;}
case 0x69316e:{ // PUNPCKLDQ MM3,dword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
return 0x693172;}
case 0x693172:{ // PUNPCKHDQ MM1,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wu<4>(c,0x308e00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7600),0x4ull));
wu<4>(c,0xa404,m<4>(c,u<4>(c,0x308e00)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(u<4>(c,0xa404)));
return 0x693177;}
case 0x693177:{ // PFMUL MM0,MM7
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x69317b;}
case 0x69317b:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x69317f;}
case 0x69317f:{ // PFNACC MM0,MM3
wr<8>(c,0x1100,user_op(c,524542,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x693183;}
case 0x693183:{ // MOV EAX,dword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693187;}
case 0x693187:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x69318b;}
case 0x69318b:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69318d;}
case 0x69318d:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693190;}
case 0x693190:{ // JZ 0x00693195
if(r<1>(c,0x206)){return 0x693195;}
return 0x693192;}
case 0x693192:{ // MOVD dword ptr [EAX],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x0),u<4>(c,0x17200));
return 0x693195;}
case 0x693195:{ // PFRCP MM1,MM0
wr<8>(c,0x1110,user_op(c,524532,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x693199;}
case 0x693199:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x69319c;}
case 0x69319c:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69319f;}
case 0x69319f:{ // PFCMPEQ MM3,MM4
wr<8>(c,0x1130,user_op(c,524524,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x6931a3;}
case 0x6931a3:{ // PFRCPIT1 MM0,MM1
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6931a7;}
case 0x6931a7:{ // PFRCPIT2 MM0,MM1
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6931ab;}
case 0x6931ab:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x6931ae;}
case 0x6931ae:{ // PFMUL MM0,qword ptr [0x007b7148]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7148)}));
return 0x6931b6;}
case 0x6931b6:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6931b8;}
case 0x6931b8:{ // PSWAPD MM1,MM0
wr<8>(c,0x1110,user_op(c,524544,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6931bc;}
case 0x6931bc:{ // JNZ 0x00693250
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x693250;}
return 0x6931c2;}
case 0x6931c2:{ // MOV EAX,dword ptr [ESP + 0x44]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x44ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6931c6;}
case 0x6931c6:{ // MOVQ MM2,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6931ca;}
case 0x6931ca:{ // MOVQ MM5,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6931cf;}
case 0x6931cf:{ // MOVQ MM3,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6931d4;}
case 0x6931d4:{ // MOVQ MM6,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6931d9;}
case 0x6931d9:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6931dd;}
case 0x6931dd:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x6931e1;}
case 0x6931e1:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x6931e5;}
case 0x6931e5:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x6931e9;}
case 0x6931e9:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6931ec;}
case 0x6931ec:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x6931ef;}
case 0x6931ef:{ // PUNPCKHDQ MM2,MM3
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6931f2;}
case 0x6931f2:{ // PUNPCKLDQ MM4,MM3
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6931f5;}
case 0x6931f5:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x6931f8;}
case 0x6931f8:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x6931fb;}
case 0x6931fb:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6931fe;}
case 0x6931fe:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693202;}
case 0x693202:{ // MOVQ qword ptr [EAX + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693206;}
case 0x693206:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69320a;}
case 0x69320a:{ // MOVQ MM2,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69320f;}
case 0x69320f:{ // MOVQ MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693214;}
case 0x693214:{ // MOVQ MM3,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693219;}
case 0x693219:{ // MOVQ MM6,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69321e;}
case 0x69321e:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x693222;}
case 0x693222:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x693226;}
case 0x693226:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x69322a;}
case 0x69322a:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x69322e;}
case 0x69322e:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693231;}
case 0x693231:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693234;}
case 0x693234:{ // PUNPCKHDQ MM2,MM3
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693237;}
case 0x693237:{ // PUNPCKLDQ MM4,MM3
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x69323a;}
case 0x69323a:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x69323d;}
case 0x69323d:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x693240;}
case 0x693240:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693244;}
case 0x693244:{ // MOVQ qword ptr [EAX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693248;}
case 0x693248:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69324c;}
case 0x69324c:{ // MOVQ qword ptr [EAX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693250;}
case 0x693250:{ // FEMMS
user_op(c,251,{});
return 0x693252;}
case 0x693252:{ // ADD ESP,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693255;}
case 0x693255:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693258;}
case 0x693258:{ // FEMMS
user_op(c,251,{});
return 0x69325a;}
case 0x69325a:{ // SUB ESP,0x44
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69325d;}
case 0x69325d:{ // MOV EDX,dword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693261;}
case 0x693261:{ // MOV dword ptr [ESP + 0x40],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x693265;}
case 0x693265:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693267;}
case 0x693267:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69326a;}
case 0x69326a:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69326d;}
case 0x69326d:{ // MOVQ MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693271;}
case 0x693271:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693275;}
case 0x693275:{ // MOVQ MM4,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693279;}
case 0x693279:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69327c;}
case 0x69327c:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69327f;}
case 0x69327f:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693282;}
case 0x693282:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693285;}
case 0x693285:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x693289;}
case 0x693289:{ // MOVQ qword ptr [ESP + 0x10],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69328e;}
case 0x69328e:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693292;}
case 0x693292:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x693295;}
case 0x693295:{ // MOVQ MM7,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693299;}
case 0x693299:{ // MOVQ MM0,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69329d;}
case 0x69329d:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6932a0;}
case 0x6932a0:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6932a3;}
case 0x6932a3:{ // MOVQ qword ptr [ESP + 0x28],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932a8;}
case 0x6932a8:{ // MOVQ qword ptr [ESP + 0x38],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932ad;}
case 0x6932ad:{ // MOV ECX,dword ptr [EBP + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6932b0;}
case 0x6932b0:{ // CMP ECX,dword ptr [EBP + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x48ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6932b3;}
case 0x6932b3:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6932b6;}
case 0x6932b6:{ // MOVQ MM4,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6932ba;}
case 0x6932ba:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6932bd;}
case 0x6932bd:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x6932c0;}
case 0x6932c0:{ // MOVQ qword ptr [ESP + 0x20],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932c5;}
case 0x6932c5:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6932c8;}
case 0x6932c8:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6932cb;}
case 0x6932cb:{ // MOVQ qword ptr [ESP + 0x30],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932d0;}
case 0x6932d0:{ // MOVQ qword ptr [ESP + 0x18],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932d5;}
case 0x6932d5:{ // MOVQ qword ptr [ESP + 0x8],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6932da;}
case 0x6932da:{ // JZ 0x0069347b
if(r<1>(c,0x206)){return 0x69347b;}
return 0x6932e0;}
case 0x6932e0:{ // MOV EAX,dword ptr [EBP + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6932e3;}
case 0x6932e3:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6932e7;}
case 0x6932e7:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6932ec;}
case 0x6932ec:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6932ef;}
case 0x6932ef:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6932f2;}
case 0x6932f2:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6932f5;}
case 0x6932f5:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6932f8;}
case 0x6932f8:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6932fc;}
case 0x6932fc:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693301;}
case 0x693301:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693304;}
case 0x693304:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693307;}
case 0x693307:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69330c;}
case 0x69330c:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693311;}
case 0x693311:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x693316;}
case 0x693316:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69331b;}
case 0x69331b:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693320;}
case 0x693320:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x693325;}
case 0x693325:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693329;}
case 0x693329:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x69332d;}
case 0x69332d:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693331;}
case 0x693331:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693335;}
case 0x693335:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693339;}
case 0x693339:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x69333d;}
case 0x69333d:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693340;}
case 0x693340:{ // MOVQ qword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693344;}
case 0x693344:{ // MOVQ MM0,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693349;}
case 0x693349:{ // MOVQ MM1,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69334e;}
case 0x69334e:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693351;}
case 0x693351:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693354;}
case 0x693354:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693357;}
case 0x693357:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69335a;}
case 0x69335a:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69335e;}
case 0x69335e:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693363;}
case 0x693363:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693366;}
case 0x693366:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693369;}
case 0x693369:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69336e;}
case 0x69336e:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693373;}
case 0x693373:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x693378;}
case 0x693378:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69337d;}
case 0x69337d:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693382;}
case 0x693382:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x693387;}
case 0x693387:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x69338b;}
case 0x69338b:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x69338f;}
case 0x69338f:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693393;}
case 0x693393:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693397;}
case 0x693397:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69339b;}
case 0x69339b:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x69339f;}
case 0x69339f:{ // MOVQ qword ptr [EAX + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6933a3;}
case 0x6933a3:{ // MOVQ qword ptr [EAX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6933a7;}
case 0x6933a7:{ // MOVQ MM0,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6933ac;}
case 0x6933ac:{ // MOVQ MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6933b1;}
case 0x6933b1:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6933b4;}
case 0x6933b4:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6933b7;}
case 0x6933b7:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6933ba;}
case 0x6933ba:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6933bd;}
case 0x6933bd:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6933c1;}
case 0x6933c1:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6933c6;}
case 0x6933c6:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6933c9;}
case 0x6933c9:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6933cc;}
case 0x6933cc:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6933d1;}
case 0x6933d1:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6933d6;}
case 0x6933d6:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6933db;}
case 0x6933db:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x6933e0;}
case 0x6933e0:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x6933e5;}
case 0x6933e5:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x6933ea;}
case 0x6933ea:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6933ee;}
case 0x6933ee:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6933f2;}
case 0x6933f2:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6933f6;}
case 0x6933f6:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x6933fa;}
case 0x6933fa:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6933fe;}
case 0x6933fe:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693402;}
case 0x693402:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693406;}
case 0x693406:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69340a;}
case 0x69340a:{ // MOVQ MM0,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69340f;}
case 0x69340f:{ // MOVQ MM1,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693414;}
case 0x693414:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693417;}
case 0x693417:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69341a;}
case 0x69341a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69341d;}
case 0x69341d:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693420;}
case 0x693420:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693424;}
case 0x693424:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693429;}
case 0x693429:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69342c;}
case 0x69342c:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69342f;}
case 0x69342f:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693434;}
case 0x693434:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693439;}
case 0x693439:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x69343e;}
case 0x69343e:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x693443;}
case 0x693443:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693448;}
case 0x693448:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x69344d;}
case 0x69344d:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693451;}
case 0x693451:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x693455;}
case 0x693455:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693459;}
case 0x693459:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x69345d;}
case 0x69345d:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693461;}
case 0x693461:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693465;}
case 0x693465:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693469;}
case 0x693469:{ // MOVQ qword ptr [EAX + 0x38],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69346d;}
case 0x69346d:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x69346f;}
case 0x69346f:{ // MOV EBP,dword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693473;}
case 0x693473:{ // ADD ESP,0x44
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693476;}
case 0x693476:{ // FEMMS
user_op(c,251,{});
return 0x693478;}
case 0x693478:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x69347b;}
case 0x69347b:{ // MOV EAX,dword ptr [EBP + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69347e;}
case 0x69347e:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693482;}
case 0x693482:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693487;}
case 0x693487:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69348a;}
case 0x69348a:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69348d;}
case 0x69348d:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693490;}
case 0x693490:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693493;}
case 0x693493:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693497;}
case 0x693497:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69349c;}
case 0x69349c:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69349f;}
case 0x69349f:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6934a2;}
case 0x6934a2:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6934a7;}
case 0x6934a7:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6934ac;}
case 0x6934ac:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6934b1;}
case 0x6934b1:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x6934b6;}
case 0x6934b6:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x6934bb;}
case 0x6934bb:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x6934c0;}
case 0x6934c0:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6934c4;}
case 0x6934c4:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6934c8;}
case 0x6934c8:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6934cc;}
case 0x6934cc:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x6934d0;}
case 0x6934d0:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6934d4;}
case 0x6934d4:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x6934d8;}
case 0x6934d8:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x6934dc;}
case 0x6934dc:{ // MOVQ qword ptr [ESP + 0x8],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6934e1;}
case 0x6934e1:{ // MOVQ MM0,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6934e6;}
case 0x6934e6:{ // MOVQ MM1,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6934eb;}
case 0x6934eb:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6934ee;}
case 0x6934ee:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6934f1;}
case 0x6934f1:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6934f4;}
case 0x6934f4:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6934f7;}
case 0x6934f7:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6934fb;}
case 0x6934fb:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693500;}
case 0x693500:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693503;}
case 0x693503:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693506;}
case 0x693506:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69350b;}
case 0x69350b:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693510;}
case 0x693510:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x693515;}
case 0x693515:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69351a;}
case 0x69351a:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x69351f;}
case 0x69351f:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x693524;}
case 0x693524:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693528;}
case 0x693528:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x69352c;}
case 0x69352c:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693530;}
case 0x693530:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693534;}
case 0x693534:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693538;}
case 0x693538:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x69353c;}
case 0x69353c:{ // MOVQ qword ptr [ESP + 0x10],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693541;}
case 0x693541:{ // MOVQ qword ptr [ESP + 0x18],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x693546;}
case 0x693546:{ // MOVQ MM0,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69354b;}
case 0x69354b:{ // MOVQ MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693550;}
case 0x693550:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693553;}
case 0x693553:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693556;}
case 0x693556:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693559;}
case 0x693559:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69355c;}
case 0x69355c:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693560;}
case 0x693560:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693565;}
case 0x693565:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693568;}
case 0x693568:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69356b;}
case 0x69356b:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693570;}
case 0x693570:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693575;}
case 0x693575:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x69357a;}
case 0x69357a:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69357f;}
case 0x69357f:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693584;}
case 0x693584:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x693589;}
case 0x693589:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x69358d;}
case 0x69358d:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x693591;}
case 0x693591:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693595;}
case 0x693595:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693599;}
case 0x693599:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69359d;}
case 0x69359d:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x6935a1;}
case 0x6935a1:{ // MOVQ qword ptr [ESP + 0x20],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6935a6;}
case 0x6935a6:{ // MOVQ qword ptr [ESP + 0x28],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6935ab;}
case 0x6935ab:{ // MOVQ MM0,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6935b0;}
case 0x6935b0:{ // MOVQ MM1,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6935b5;}
case 0x6935b5:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6935b8;}
case 0x6935b8:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6935bb;}
case 0x6935bb:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6935be;}
case 0x6935be:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6935c1;}
case 0x6935c1:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6935c5;}
case 0x6935c5:{ // PFMUL MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6935ca;}
case 0x6935ca:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6935cd;}
case 0x6935cd:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6935d0;}
case 0x6935d0:{ // PFMUL MM2,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6935d5;}
case 0x6935d5:{ // PFMUL MM3,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6935da;}
case 0x6935da:{ // PFMUL MM4,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6935df;}
case 0x6935df:{ // PFMUL MM5,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x6935e4;}
case 0x6935e4:{ // PFMUL MM6,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x6935e9;}
case 0x6935e9:{ // PFMUL MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x6935ee;}
case 0x6935ee:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6935f2;}
case 0x6935f2:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6935f6;}
case 0x6935f6:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6935fa;}
case 0x6935fa:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x6935fe;}
case 0x6935fe:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693602;}
case 0x693602:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693606;}
case 0x693606:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69360a;}
case 0x69360a:{ // MOVQ qword ptr [EAX + 0x38],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69360e;}
case 0x69360e:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693612;}
case 0x693612:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693617;}
case 0x693617:{ // MOVQ MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69361c;}
case 0x69361c:{ // MOVQ MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693621;}
case 0x693621:{ // MOVQ MM4,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693626;}
case 0x693626:{ // MOVQ MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69362b;}
case 0x69362b:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69362e;}
case 0x69362e:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693632;}
case 0x693632:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693636;}
case 0x693636:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69363a;}
case 0x69363a:{ // MOVQ qword ptr [EAX + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69363e;}
case 0x69363e:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693642;}
case 0x693642:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x693644;}
case 0x693644:{ // MOV EBP,dword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693648;}
case 0x693648:{ // ADD ESP,0x44
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69364b;}
case 0x69364b:{ // FEMMS
user_op(c,251,{});
return 0x69364d;}
case 0x69364d:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693650;}
case 0x693650:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693652;}
case 0x693652:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693653;}
case 0x693653:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693655;}
case 0x693655:{ // SUB ESP,0x44
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693658;}
case 0x693658:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69365b;}
case 0x69365b:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69365e;}
case 0x69365e:{ // MOVQ MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693662;}
case 0x693662:{ // MOVQ MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693666;}
case 0x693666:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693669;}
case 0x693669:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69366c;}
case 0x69366c:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69366f;}
case 0x69366f:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693672;}
case 0x693672:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x693675;}
case 0x693675:{ // PUNPCKLDQ MM6,MM2
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693678;}
case 0x693678:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x69367b;}
case 0x69367b:{ // PUNPCKHDQ MM7,MM2
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69367e;}
case 0x69367e:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693682;}
case 0x693682:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693686;}
case 0x693686:{ // MOVQ MM3,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69368a;}
case 0x69368a:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69368d;}
case 0x69368d:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693691;}
case 0x693691:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693694;}
case 0x693694:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693697;}
case 0x693697:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69369a;}
case 0x69369a:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69369d;}
case 0x69369d:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6936a0;}
case 0x6936a0:{ // PUNPCKHDQ MM6,MM2
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6936a3;}
case 0x6936a3:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x6936a6;}
case 0x6936a6:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6936a9;}
case 0x6936a9:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x6936ad;}
case 0x6936ad:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6936b0;}
case 0x6936b0:{ // PFMUL MM7,MM4
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x6936b4;}
case 0x6936b4:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6936b7;}
case 0x6936b7:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6936bb;}
case 0x6936bb:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x6936bf;}
case 0x6936bf:{ // PFSUB MM6,MM7
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x6936c3;}
case 0x6936c3:{ // PFSUBR MM1,MM0
wr<8>(c,0x1110,user_op(c,524528,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6936c7;}
case 0x6936c7:{ // MOVQ MM0,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6936cb;}
case 0x6936cb:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6936ce;}
case 0x6936ce:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6936d1;}
case 0x6936d1:{ // MOVQ MM7,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6936d5;}
case 0x6936d5:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6936d8;}
case 0x6936d8:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6936db;}
case 0x6936db:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6936de;}
case 0x6936de:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6936e2;}
case 0x6936e2:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6936e5;}
case 0x6936e5:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6936ea;}
case 0x6936ea:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x6936ee;}
case 0x6936ee:{ // PFADD MM2,MM4
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x6936f2;}
case 0x6936f2:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6936f5;}
case 0x6936f5:{ // PFSUB MM2,MM3
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x6936f9;}
case 0x6936f9:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6936fc;}
case 0x6936fc:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6936ff;}
case 0x6936ff:{ // MOVQ qword ptr [EBP + -0x3c],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693703;}
case 0x693703:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693706;}
case 0x693706:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693709;}
case 0x693709:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69370c;}
case 0x69370c:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693711;}
case 0x693711:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693715;}
case 0x693715:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693719;}
case 0x693719:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x69371d;}
case 0x69371d:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x693721;}
case 0x693721:{ // MOVQ qword ptr [EBP + -0x2c],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693725;}
case 0x693725:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693728;}
case 0x693728:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x69372b;}
case 0x69372b:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69372e;}
case 0x69372e:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693731;}
case 0x693731:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693734;}
case 0x693734:{ // PFMUL MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693739;}
case 0x693739:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x69373d;}
case 0x69373d:{ // PFMUL MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693742;}
case 0x693742:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693746;}
case 0x693746:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x69374a;}
case 0x69374a:{ // MOVQ qword ptr [EBP + -0x1c],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69374e;}
case 0x69374e:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x693751;}
case 0x693751:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693754;}
case 0x693754:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x693758;}
case 0x693758:{ // PFMUL MM5,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x69375d;}
case 0x69375d:{ // PFMUL MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693762;}
case 0x693762:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x693766;}
case 0x693766:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x69376a;}
case 0x69376a:{ // MOVQ qword ptr [EBP + -0xc],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69376e;}
case 0x69376e:{ // MOVQ MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693772;}
case 0x693772:{ // MOVQ MM1,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693776;}
case 0x693776:{ // MOVQ MM2,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69377a;}
case 0x69377a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69377d;}
case 0x69377d:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693780;}
case 0x693780:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693783;}
case 0x693783:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693786;}
case 0x693786:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x693789;}
case 0x693789:{ // PUNPCKLDQ MM6,MM2
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x69378c;}
case 0x69378c:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x69378f;}
case 0x69378f:{ // PUNPCKHDQ MM7,MM2
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693792;}
case 0x693792:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693796;}
case 0x693796:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x69379a;}
case 0x69379a:{ // MOVQ MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69379e;}
case 0x69379e:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6937a1;}
case 0x6937a1:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6937a5;}
case 0x6937a5:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6937a8;}
case 0x6937a8:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6937ab;}
case 0x6937ab:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6937ae;}
case 0x6937ae:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6937b1;}
case 0x6937b1:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6937b4;}
case 0x6937b4:{ // PUNPCKHDQ MM6,MM2
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6937b7;}
case 0x6937b7:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x6937ba;}
case 0x6937ba:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6937bd;}
case 0x6937bd:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x6937c1;}
case 0x6937c1:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6937c4;}
case 0x6937c4:{ // PFMUL MM7,MM4
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x6937c8;}
case 0x6937c8:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6937cb;}
case 0x6937cb:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6937cf;}
case 0x6937cf:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x6937d3;}
case 0x6937d3:{ // PFSUB MM6,MM7
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x6937d7;}
case 0x6937d7:{ // PFSUBR MM1,MM0
wr<8>(c,0x1110,user_op(c,524528,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6937db;}
case 0x6937db:{ // MOVQ MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6937df;}
case 0x6937df:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6937e2;}
case 0x6937e2:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6937e5;}
case 0x6937e5:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6937e9;}
case 0x6937e9:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x6937ec;}
case 0x6937ec:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6937ef;}
case 0x6937ef:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6937f2;}
case 0x6937f2:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6937f5;}
case 0x6937f5:{ // PFMUL MM4,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6937fa;}
case 0x6937fa:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6937fe;}
case 0x6937fe:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x693802;}
case 0x693802:{ // PFADD MM2,MM4
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x693806;}
case 0x693806:{ // PFSUB MM2,MM3
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x69380a;}
case 0x69380a:{ // MOVQ qword ptr [EBP + -0x44],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69380e;}
case 0x69380e:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693811;}
case 0x693811:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x693814;}
case 0x693814:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693817;}
case 0x693817:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69381a;}
case 0x69381a:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x69381d;}
case 0x69381d:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693820;}
case 0x693820:{ // PFMUL MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693824;}
case 0x693824:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693828;}
case 0x693828:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x69382c;}
case 0x69382c:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x693830;}
case 0x693830:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x693834;}
case 0x693834:{ // MOVQ qword ptr [EBP + -0x34],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693838;}
case 0x693838:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69383b;}
case 0x69383b:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x69383e;}
case 0x69383e:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x693841;}
case 0x693841:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693844;}
case 0x693844:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693847;}
case 0x693847:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x69384a;}
case 0x69384a:{ // PFMUL MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69384e;}
case 0x69384e:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693852;}
case 0x693852:{ // PFMUL MM3,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693857;}
case 0x693857:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69385b;}
case 0x69385b:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x69385f;}
case 0x69385f:{ // MOVQ qword ptr [EBP + -0x24],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693863;}
case 0x693863:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x693866;}
case 0x693866:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693869;}
case 0x693869:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x69386d;}
case 0x69386d:{ // PFMUL MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x693872;}
case 0x693872:{ // PFMUL MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693876;}
case 0x693876:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x69387a;}
case 0x69387a:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x69387e;}
case 0x69387e:{ // MOVQ qword ptr [EBP + -0x14],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693882;}
case 0x693882:{ // PUNPCKLDQ MM7,MM4
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x693885;}
case 0x693885:{ // MOVQ MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693888;}
case 0x693888:{ // PUNPCKHDQ MM0,MM2
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69388b;}
case 0x69388b:{ // PFMUL MM7,qword ptr [0x007b7148]
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),m<8>(c,0x7b7148)}));
return 0x693893;}
case 0x693893:{ // MOVQ MM1,qword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693897;}
case 0x693897:{ // PUNPCKLDQ MM3,dword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
return 0x69389b;}
case 0x69389b:{ // PUNPCKHDQ MM1,qword ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wu<4>(c,0x308e00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x6600),0x4ull));
wu<4>(c,0xa404,m<4>(c,u<4>(c,0x308e00)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(u<4>(c,0xa404)));
return 0x69389f;}
case 0x69389f:{ // PFMUL MM3,qword ptr [0x007b7148]
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),m<8>(c,0x7b7148)}));
return 0x6938a7;}
case 0x6938a7:{ // PFMUL MM0,MM7
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1170)}));
return 0x6938ab;}
case 0x6938ab:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x6938af;}
case 0x6938af:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6938b3;}
case 0x6938b3:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6938b6;}
case 0x6938b6:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x6938ba;}
case 0x6938ba:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6938bc;}
case 0x6938bc:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6938bf;}
case 0x6938bf:{ // JZ 0x006938c4
if(r<1>(c,0x206)){return 0x6938c4;}
return 0x6938c1;}
case 0x6938c1:{ // MOVD dword ptr [EAX],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x0),u<4>(c,0x17200));
return 0x6938c4;}
case 0x6938c4:{ // PFRCP MM1,MM0
wr<8>(c,0x1110,user_op(c,524532,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6938c8;}
case 0x6938c8:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x6938cb;}
case 0x6938cb:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6938ce;}
case 0x6938ce:{ // PFCMPEQ MM3,MM4
wr<8>(c,0x1130,user_op(c,524524,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x6938d2;}
case 0x6938d2:{ // PFRCPIT1 MM0,MM1
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6938d6;}
case 0x6938d6:{ // PFRCPIT2 MM0,MM1
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6938da;}
case 0x6938da:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x6938dd;}
case 0x6938dd:{ // PFMUL MM0,qword ptr [0x007b7148]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7148)}));
return 0x6938e5;}
case 0x6938e5:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6938e7;}
case 0x6938e7:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6938ea;}
case 0x6938ea:{ // PUNPCKLDQ MM2,MM1
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6938ed;}
case 0x6938ed:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6938f0;}
case 0x6938f0:{ // JNZ 0x0069397c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x69397c;}
return 0x6938f6;}
case 0x6938f6:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6938f9;}
case 0x6938f9:{ // MOVQ MM2,qword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6938fd;}
case 0x6938fd:{ // MOVQ MM5,qword ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693901;}
case 0x693901:{ // MOVQ MM3,qword ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693905;}
case 0x693905:{ // MOVQ MM6,qword ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693909;}
case 0x693909:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69390d;}
case 0x69390d:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x693911;}
case 0x693911:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x693915;}
case 0x693915:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x693919;}
case 0x693919:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69391c;}
case 0x69391c:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x69391f;}
case 0x69391f:{ // PUNPCKHDQ MM2,MM3
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693922;}
case 0x693922:{ // PUNPCKLDQ MM4,MM3
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693925;}
case 0x693925:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693928;}
case 0x693928:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x69392b;}
case 0x69392b:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69392e;}
case 0x69392e:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693932;}
case 0x693932:{ // MOVQ qword ptr [EAX + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693936;}
case 0x693936:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69393a;}
case 0x69393a:{ // MOVQ MM2,qword ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69393e;}
case 0x69393e:{ // MOVQ MM5,qword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693942;}
case 0x693942:{ // MOVQ MM3,qword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693946;}
case 0x693946:{ // MOVQ MM6,qword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69394a;}
case 0x69394a:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69394e;}
case 0x69394e:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x693952;}
case 0x693952:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x693956;}
case 0x693956:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x69395a;}
case 0x69395a:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69395d;}
case 0x69395d:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x693960;}
case 0x693960:{ // PUNPCKHDQ MM2,MM3
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693963;}
case 0x693963:{ // PUNPCKLDQ MM4,MM3
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693966;}
case 0x693966:{ // PUNPCKHDQ MM5,MM6
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x693969;}
case 0x693969:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x69396c;}
case 0x69396c:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693970;}
case 0x693970:{ // MOVQ qword ptr [EAX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693974;}
case 0x693974:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693978;}
case 0x693978:{ // MOVQ qword ptr [EAX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69397c;}
case 0x69397c:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x69397f;}
case 0x69397f:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693982;}
case 0x693982:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x693983;}
case 0x693983:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693986;}
case 0x693986:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693988;}
case 0x693988:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693989;}
case 0x693989:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x69398b;}
case 0x69398b:{ // FEMMS
user_op(c,251,{});
return 0x69398d;}
case 0x69398d:{ // PUSH dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693990;}
case 0x693990:{ // PUSH dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693993;}
case 0x693993:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693996;}
case 0x693996:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69399bull);
return 0x693650;
return 0x69399b;}
case 0x69399b:{ // FEMMS
user_op(c,251,{});
return 0x69399d;}
case 0x69399d:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6939a0;}
case 0x6939a0:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6939a1;}
case 0x6939a1:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x6939a4;}
case 0x6939a4:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6939a6;}
case 0x6939a6:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6939a7;}
case 0x6939a7:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x6939a9;}
case 0x6939a9:{ // FEMMS
user_op(c,251,{});
return 0x6939ab;}
case 0x6939ab:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6939ae;}
case 0x6939ae:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6939b1;}
case 0x6939b1:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6939b4;}
case 0x6939b4:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6939b7;}
case 0x6939b7:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6939ba;}
case 0x6939ba:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6939bd;}
case 0x6939bd:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6939c0;}
case 0x6939c0:{ // MOVD MM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6939c4;}
case 0x6939c4:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x6939c7;}
case 0x6939c7:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6939ca;}
case 0x6939ca:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6939ce;}
case 0x6939ce:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6939d1;}
case 0x6939d1:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6939d6;}
case 0x6939d6:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6939d9;}
case 0x6939d9:{ // PFMUL MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6939de;}
case 0x6939de:{ // PFADD MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6939e3;}
case 0x6939e3:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6939e8;}
case 0x6939e8:{ // PFADD MM1,MM2
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6939ec;}
case 0x6939ec:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6939f1;}
case 0x6939f1:{ // PFMUL MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x6939f6;}
case 0x6939f6:{ // PFADD MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6939fb;}
case 0x6939fb:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6939ff;}
case 0x6939ff:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693a03;}
case 0x693a03:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x693a07;}
case 0x693a07:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x693a0a;}
case 0x693a0a:{ // MOVQ qword ptr [ECX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693a0e;}
case 0x693a0e:{ // FEMMS
user_op(c,251,{});
return 0x693a10;}
case 0x693a10:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a13;}
case 0x693a13:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x693a14;}
case 0x693a14:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693a17;}
case 0x693a17:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693a19;}
case 0x693a19:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693a1a;}
case 0x693a1a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693a1c;}
case 0x693a1c:{ // FEMMS
user_op(c,251,{});
return 0x693a1e;}
case 0x693a1e:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a21;}
case 0x693a21:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a24;}
case 0x693a24:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a27;}
case 0x693a27:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693a2a;}
case 0x693a2a:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693a2d;}
case 0x693a2d:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693a30;}
case 0x693a30:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693a33;}
case 0x693a33:{ // MOVD MM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693a37;}
case 0x693a37:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693a3a;}
case 0x693a3a:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693a3d;}
case 0x693a3d:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693a41;}
case 0x693a41:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693a44;}
case 0x693a44:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693a49;}
case 0x693a49:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693a4c;}
case 0x693a4c:{ // PFMUL MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693a51;}
case 0x693a51:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693a56;}
case 0x693a56:{ // PFADD MM1,MM2
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x693a5a;}
case 0x693a5a:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x693a5f;}
case 0x693a5f:{ // PFMUL MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x693a64;}
case 0x693a64:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693a68;}
case 0x693a68:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693a6c;}
case 0x693a6c:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x693a70;}
case 0x693a70:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x693a73;}
case 0x693a73:{ // MOVD dword ptr [ECX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693a77;}
case 0x693a77:{ // FEMMS
user_op(c,251,{});
return 0x693a79;}
case 0x693a79:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a7c;}
case 0x693a7c:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x693a7d;}
case 0x693a7d:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693a80;}
case 0x693a80:{ // FEMMS
user_op(c,251,{});
return 0x693a82;}
case 0x693a82:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693a86;}
case 0x693a86:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693a89;}
case 0x693a89:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693a8c;}
case 0x693a8c:{ // MOVD MM2,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693a90;}
case 0x693a90:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693a93;}
case 0x693a93:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x693a97;}
case 0x693a97:{ // PFMUL MM2,MM2
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x693a9b;}
case 0x693a9b:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693a9f;}
case 0x693a9f:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x693aa3;}
case 0x693aa3:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693aa6;}
case 0x693aa6:{ // PFRSQRT MM4,MM0
wr<8>(c,0x1140,user_op(c,524533,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693aaa;}
case 0x693aaa:{ // PFCMPGT MM5,qword ptr [0x007b71c8]
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),m<8>(c,0x7b71c8)}));
return 0x693ab2;}
case 0x693ab2:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x693ab5;}
case 0x693ab5:{ // PFMUL MM2,MM4
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x693ab9;}
case 0x693ab9:{ // PFRSQIT1 MM0,MM2
wr<8>(c,0x1100,user_op(c,524535,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693abd;}
case 0x693abd:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693ac1;}
case 0x693ac1:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x693ac4;}
case 0x693ac4:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x693ac7;}
case 0x693ac7:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x693acb;}
case 0x693acb:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x693acf;}
case 0x693acf:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x693ad3;}
case 0x693ad3:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693ad6;}
case 0x693ad6:{ // MOVD dword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693ada;}
case 0x693ada:{ // FEMMS
user_op(c,251,{});
return 0x693adc;}
case 0x693adc:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x693adf;}
case 0x693adf:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693ae3;}
case 0x693ae3:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693ae7;}
case 0x693ae7:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693aeb;}
case 0x693aeb:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693aee;}
case 0x693aee:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693af1;}
case 0x693af1:{ // MOVD MM6,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693af6;}
case 0x693af6:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693afa;}
case 0x693afa:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693afd;}
case 0x693afd:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693b01;}
case 0x693b01:{ // MOVD MM5,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693b05;}
case 0x693b05:{ // PFSUB MM0,MM4
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x693b09;}
case 0x693b09:{ // MOVD MM7,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693b0e;}
case 0x693b0e:{ // PFSUB MM1,MM5
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x693b12;}
case 0x693b12:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693b16;}
case 0x693b16:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x693b1a;}
case 0x693b1a:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x693b1d;}
case 0x693b1d:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x693b21;}
case 0x693b21:{ // PFMUL MM0,MM6
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1160)}));
return 0x693b25;}
case 0x693b25:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x693b28;}
case 0x693b28:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x693b2c;}
case 0x693b2c:{ // PFADD MM0,MM4
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x693b30;}
case 0x693b30:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x693b34;}
case 0x693b34:{ // PFADD MM1,MM5
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x693b38;}
case 0x693b38:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x693b3c;}
case 0x693b3c:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693b40;}
case 0x693b40:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x693b44;}
case 0x693b44:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693b47;}
case 0x693b47:{ // MOVD dword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693b4b;}
case 0x693b4b:{ // FEMMS
user_op(c,251,{});
return 0x693b4d;}
case 0x693b4d:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x693b50;}
case 0x693b50:{ // FEMMS
user_op(c,251,{});
return 0x693b52;}
case 0x693b52:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693b57;}
case 0x693b57:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693b5a;}
case 0x693b5a:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x693b5e;}
case 0x693b5e:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693b61;}
case 0x693b61:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693b65;}
case 0x693b65:{ // MOVQ MM3,qword ptr [0x007b71f0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b71f0)));
return 0x693b6c;}
case 0x693b6c:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693b6f;}
case 0x693b6f:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693b72;}
case 0x693b72:{ // PFSUB MM7,MM1
wr<8>(c,0x1170,user_op(c,524527,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x693b76;}
case 0x693b76:{ // PFMUL MM4,MM3
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x693b7a;}
case 0x693b7a:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693b7d;}
case 0x693b7d:{ // PFMUL MM1,qword ptr [0x007b71f8]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7b71f8)}));
return 0x693b85;}
case 0x693b85:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x693b89;}
case 0x693b89:{ // PFSUB MM6,MM4
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x693b8d;}
case 0x693b8d:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693b90;}
case 0x693b90:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x693b94;}
case 0x693b94:{ // PFADD MM6,MM0
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x693b98;}
case 0x693b98:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x693b9c;}
case 0x693b9c:{ // PFADD MM2,qword ptr [0x007b71e0]
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),m<8>(c,0x7b71e0)}));
return 0x693ba4;}
case 0x693ba4:{ // MOV EAX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693ba8;}
case 0x693ba8:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693bac;}
case 0x693bac:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693bb0;}
case 0x693bb0:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x693bb3;}
case 0x693bb3:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693bb6;}
case 0x693bb6:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x693bb9;}
case 0x693bb9:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693bbc;}
case 0x693bbc:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x693bbf;}
case 0x693bbf:{ // PFMUL MM7,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x693bc3;}
case 0x693bc3:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693bc6;}
case 0x693bc6:{ // PFMUL MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693bca;}
case 0x693bca:{ // MOVD MM4,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693bce;}
case 0x693bce:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693bd2;}
case 0x693bd2:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693bd6;}
case 0x693bd6:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x693bda;}
case 0x693bda:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693bde;}
case 0x693bde:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693be2;}
case 0x693be2:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x693be5;}
case 0x693be5:{ // PFMUL MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x693be9;}
case 0x693be9:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693bec;}
case 0x693bec:{ // PFADD MM1,MM7
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x693bf0;}
case 0x693bf0:{ // PFADD MM0,MM5
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x693bf4;}
case 0x693bf4:{ // PFMUL MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693bf8;}
case 0x693bf8:{ // MOVD MM7,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693bfc;}
case 0x693bfc:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693c00;}
case 0x693c00:{ // MOVD MM5,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693c04;}
case 0x693c04:{ // PFMUL MM3,MM5
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x693c08;}
case 0x693c08:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x693c0c;}
case 0x693c0c:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x693c10;}
case 0x693c10:{ // PFADD MM1,MM2
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x693c14;}
case 0x693c14:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x693c18;}
case 0x693c18:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693c1b;}
case 0x693c1b:{ // MOVD dword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693c1f;}
case 0x693c1f:{ // FEMMS
user_op(c,251,{});
return 0x693c21;}
case 0x693c21:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x693c24;}
case 0x693c24:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693c29;}
case 0x693c29:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693c2d;}
case 0x693c2d:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693c30;}
case 0x693c30:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693c33;}
case 0x693c33:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x693c37;}
case 0x693c37:{ // PUNPCKLDQ MM1,dword ptr [0x007b7158]
wr<4>(c,0x1114,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x693c3e;}
case 0x693c3e:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693c42;}
case 0x693c42:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693c45;}
case 0x693c45:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x693c49;}
case 0x693c49:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x693c4c;}
case 0x693c4c:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693c50;}
case 0x693c50:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693c53;}
case 0x693c53:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693c56;}
case 0x693c56:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x693c59;}
case 0x693c59:{ // PFMUL MM0,qword ptr [0x007b7168]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7168)}));
return 0x693c61;}
case 0x693c61:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693c64;}
case 0x693c64:{ // PUNPCKLDQ MM0,MM4
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x693c67;}
case 0x693c67:{ // PXOR MM3,qword ptr [0x007b7178]
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7178)));
return 0x693c6e;}
case 0x693c6e:{ // PUNPCKHDQ MM5,MM7
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x693c71;}
case 0x693c71:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x693c75;}
case 0x693c75:{ // PFSUB MM1,MM0
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x693c79;}
case 0x693c79:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693c7d;}
case 0x693c7d:{ // PFSUB MM0,MM5
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x693c81;}
case 0x693c81:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693c84;}
case 0x693c84:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693c87;}
case 0x693c87:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693c8a;}
case 0x693c8a:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693c8d;}
case 0x693c8d:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693c91;}
case 0x693c91:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693c94;}
case 0x693c94:{ // MOVD MM7,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693c98;}
case 0x693c98:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693c9b;}
case 0x693c9b:{ // PFMUL MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693c9f;}
case 0x693c9f:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693ca2;}
case 0x693ca2:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693ca5;}
case 0x693ca5:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693ca9;}
case 0x693ca9:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693cac;}
case 0x693cac:{ // PFMUL MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693cb0;}
case 0x693cb0:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693cb4;}
case 0x693cb4:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693cb8;}
case 0x693cb8:{ // MOVD MM7,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693cbc;}
case 0x693cbc:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x693cc0;}
case 0x693cc0:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693cc4;}
case 0x693cc4:{ // MOVD MM7,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693cc8;}
case 0x693cc8:{ // PFMUL MM6,MM7
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x693ccc;}
case 0x693ccc:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693cd0;}
case 0x693cd0:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693cd4;}
case 0x693cd4:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693cd7;}
case 0x693cd7:{ // MOVD MM5,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693cdb;}
case 0x693cdb:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x693cdf;}
case 0x693cdf:{ // PFMUL MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693ce3;}
case 0x693ce3:{ // MOVQ MM1,qword ptr [0x007b71c0]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b71c0)));
return 0x693cea;}
case 0x693cea:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x693cee;}
case 0x693cee:{ // PFMUL MM7,MM5
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1150)}));
return 0x693cf2;}
case 0x693cf2:{ // PFADD MM4,MM6
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x693cf6;}
case 0x693cf6:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693cfa;}
case 0x693cfa:{ // PFADD MM4,MM7
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x693cfe;}
case 0x693cfe:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693d01;}
case 0x693d01:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x693d05;}
case 0x693d05:{ // MOVD dword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1140),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693d09;}
case 0x693d09:{ // FEMMS
user_op(c,251,{});
return 0x693d0b;}
case 0x693d0b:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x693d0e;}
case 0x693d0e:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693d10;}
case 0x693d10:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693d11;}
case 0x693d11:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693d13;}
case 0x693d13:{ // FEMMS
user_op(c,251,{});
return 0x693d15;}
case 0x693d15:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693d18;}
case 0x693d18:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693d1b;}
case 0x693d1b:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693d1e;}
case 0x693d1e:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693d21;}
case 0x693d21:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693d24;}
case 0x693d24:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693d27;}
case 0x693d27:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693d2a;}
case 0x693d2a:{ // MOVD MM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x693d2e;}
case 0x693d2e:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x693d31;}
case 0x693d31:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x693d34;}
case 0x693d34:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693d38;}
case 0x693d38:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x693d3b;}
case 0x693d3b:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693d40;}
case 0x693d40:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x693d43;}
case 0x693d43:{ // PFMUL MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693d48;}
case 0x693d48:{ // PFADD MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693d4d;}
case 0x693d4d:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693d52;}
case 0x693d52:{ // PFADD MM1,MM2
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x693d56;}
case 0x693d56:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x693d5b;}
case 0x693d5b:{ // PFMUL MM5,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x693d60;}
case 0x693d60:{ // PFADD MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693d65;}
case 0x693d65:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x693d69;}
case 0x693d69:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693d6d;}
case 0x693d6d:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x693d71;}
case 0x693d71:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x693d74;}
case 0x693d74:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x693d77;}
case 0x693d77:{ // PFRCP MM4,MM5
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x693d7b;}
case 0x693d7b:{ // PFRCPIT1 MM5,MM4
wr<8>(c,0x1150,user_op(c,524534,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693d7f;}
case 0x693d7f:{ // PFRCPIT2 MM5,MM4
wr<8>(c,0x1150,user_op(c,524536,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693d83;}
case 0x693d83:{ // PFMUL MM0,MM5
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x693d87;}
case 0x693d87:{ // PFMUL MM3,MM5
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x693d8b;}
case 0x693d8b:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x693d8e;}
case 0x693d8e:{ // MOVD dword ptr [ECX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x693d92;}
case 0x693d92:{ // FEMMS
user_op(c,251,{});
return 0x693d94;}
case 0x693d94:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693d97;}
case 0x693d97:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x693d98;}
case 0x693d98:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693d9b;}
case 0x693d9b:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693d9d;}
case 0x693d9d:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693d9e;}
case 0x693d9e:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693da0;}
case 0x693da0:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693da3;}
case 0x693da3:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693da6;}
case 0x693da6:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693da9;}
case 0x693da9:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693dac;}
case 0x693dac:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693db0;}
case 0x693db0:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693db3;}
case 0x693db3:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x693db6;}
case 0x693db6:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693dba;}
case 0x693dba:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693dbd;}
case 0x693dbd:{ // MOVQ MM6,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693dc1;}
case 0x693dc1:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693dc4;}
case 0x693dc4:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693dc7;}
case 0x693dc7:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693dcb;}
case 0x693dcb:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693dce;}
case 0x693dce:{ // PFMUL MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693dd3;}
case 0x693dd3:{ // MOVQ MM7,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693dd7;}
case 0x693dd7:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x693ddb;}
case 0x693ddb:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693dde;}
case 0x693dde:{ // PFMUL MM2,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693de3;}
case 0x693de3:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693de7;}
case 0x693de7:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x693deb;}
case 0x693deb:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693def;}
case 0x693def:{ // PFMUL MM1,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693df4;}
case 0x693df4:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x693df8;}
case 0x693df8:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x693dfc;}
case 0x693dfc:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x693e00;}
case 0x693e00:{ // PFMUL MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693e05;}
case 0x693e05:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x693e09;}
case 0x693e09:{ // MOVQ MM0,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e0d;}
case 0x693e0d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x693e11;}
case 0x693e11:{ // MOVQ MM1,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e15;}
case 0x693e15:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x693e18;}
case 0x693e18:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e1b;}
case 0x693e1b:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693e1f;}
case 0x693e1f:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x693e22;}
case 0x693e22:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e26;}
case 0x693e26:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693e29;}
case 0x693e29:{ // MOVQ MM6,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e2d;}
case 0x693e2d:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693e30;}
case 0x693e30:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693e33;}
case 0x693e33:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693e37;}
case 0x693e37:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693e3a;}
case 0x693e3a:{ // PFMUL MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693e3f;}
case 0x693e3f:{ // MOVQ MM7,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e43;}
case 0x693e43:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x693e47;}
case 0x693e47:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693e4a;}
case 0x693e4a:{ // PFMUL MM2,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693e4f;}
case 0x693e4f:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693e53;}
case 0x693e53:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x693e57;}
case 0x693e57:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693e5b;}
case 0x693e5b:{ // PFMUL MM1,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693e60;}
case 0x693e60:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x693e64;}
case 0x693e64:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x693e68;}
case 0x693e68:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x693e6c;}
case 0x693e6c:{ // PFMUL MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693e71;}
case 0x693e71:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x693e75;}
case 0x693e75:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e79;}
case 0x693e79:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x693e7d;}
case 0x693e7d:{ // MOVQ MM1,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e81;}
case 0x693e81:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693e85;}
case 0x693e85:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e88;}
case 0x693e88:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693e8c;}
case 0x693e8c:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x693e8f;}
case 0x693e8f:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e93;}
case 0x693e93:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693e96;}
case 0x693e96:{ // MOVQ MM6,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693e9a;}
case 0x693e9a:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693e9d;}
case 0x693e9d:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693ea0;}
case 0x693ea0:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693ea4;}
case 0x693ea4:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693ea7;}
case 0x693ea7:{ // PFMUL MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693eac;}
case 0x693eac:{ // MOVQ MM7,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693eb0;}
case 0x693eb0:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x693eb4;}
case 0x693eb4:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693eb7;}
case 0x693eb7:{ // PFMUL MM2,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693ebc;}
case 0x693ebc:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693ec0;}
case 0x693ec0:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x693ec4;}
case 0x693ec4:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693ec8;}
case 0x693ec8:{ // PFMUL MM1,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693ecd;}
case 0x693ecd:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x693ed1;}
case 0x693ed1:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x693ed5;}
case 0x693ed5:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x693ed9;}
case 0x693ed9:{ // PFMUL MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693ede;}
case 0x693ede:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x693ee2;}
case 0x693ee2:{ // MOVQ MM0,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693ee6;}
case 0x693ee6:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x693eea;}
case 0x693eea:{ // MOVQ MM1,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693eee;}
case 0x693eee:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693ef2;}
case 0x693ef2:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693ef5;}
case 0x693ef5:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693ef9;}
case 0x693ef9:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x693efc;}
case 0x693efc:{ // MOVQ MM5,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693f00;}
case 0x693f00:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x693f03;}
case 0x693f03:{ // MOVQ MM6,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693f07;}
case 0x693f07:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x693f0a;}
case 0x693f0a:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x693f0d;}
case 0x693f0d:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x693f11;}
case 0x693f11:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x693f14;}
case 0x693f14:{ // PFMUL MM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x693f19;}
case 0x693f19:{ // MOVQ MM7,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x693f1d;}
case 0x693f1d:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x693f21;}
case 0x693f21:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x693f24;}
case 0x693f24:{ // PFMUL MM2,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x693f29;}
case 0x693f29:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x693f2d;}
case 0x693f2d:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x693f31;}
case 0x693f31:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x693f35;}
case 0x693f35:{ // PFMUL MM1,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x693f3a;}
case 0x693f3a:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x693f3e;}
case 0x693f3e:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x693f42;}
case 0x693f42:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x693f46;}
case 0x693f46:{ // PFMUL MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x693f4b;}
case 0x693f4b:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x693f4f;}
case 0x693f4f:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x693f53;}
case 0x693f53:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693f57;}
case 0x693f57:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x693f5b;}
case 0x693f5b:{ // FEMMS
user_op(c,251,{});
return 0x693f5d;}
case 0x693f5d:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693f60;}
case 0x693f60:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x693f61;}
case 0x693f61:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x693f64;}
case 0x693f64:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693f66;}
case 0x693f66:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693f67;}
case 0x693f67:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693f69;}
case 0x693f69:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x693f6a;}
case 0x693f6a:{ // JMP 0x00693d0e
return 0x693d0e;
return 0x693f6f;}
case 0x693f6f:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x693f71;}
case 0x693f71:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693f72;}
case 0x693f72:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x693f74;}
case 0x693f74:{ // SUB ESP,0x40
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f77;}
case 0x693f77:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f79;}
case 0x693f79:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693f7a;}
case 0x693f7a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x693f7b;}
case 0x693f7b:{ // MOV EDI,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693f7e;}
case 0x693f7e:{ // TEST EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f80;}
case 0x693f80:{ // SETNZ AL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x693f83;}
case 0x693f83:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f85;}
case 0x693f85:{ // LEA ESI,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x693f88;}
case 0x693f88:{ // SHL EAX,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<4>(c,0x0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<1>(c,0x9b900,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9b900)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f8a;}
case 0x693f8a:{ // CMP dword ptr [EBP + 0x18],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f8d;}
case 0x693f8d:{ // SETNZ CL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x693f90;}
case 0x693f90:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f92;}
case 0x693f92:{ // OR EAX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f94;}
case 0x693f94:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x693f97;}
case 0x693f97:{ // SHL EAX,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<4>(c,0x0,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<1>(c,0x9b900,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9b900)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f99;}
case 0x693f99:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693f9b;}
case 0x693f9b:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x693f9e;}
case 0x693f9e:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693fa0;}
case 0x693fa0:{ // CMP EAX,0x7
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x7ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x7ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x693fa3;}
case 0x693fa3:{ // JA 0x00694064
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x694064;}
return 0x693fa9;}
case 0x693fa9:{ // JMP dword ptr [EAX*0x4 + 0x6940db]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x6940dbull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x693fb0;}
case 0x693fb0:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fb0ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fb2;}
case 0x693fb2:{ // FSTP float ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fb2ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fb5;}
case 0x693fb5:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fb5ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fb7;}
case 0x693fb7:{ // FSTP float ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fb7ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fba;}
case 0x693fba:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fbaull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fbc;}
case 0x693fbc:{ // FSTP float ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fbcull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fbf;}
case 0x693fbf:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fbfull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fc1;}
case 0x693fc1:{ // FSTP float ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fc1ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fc4;}
case 0x693fc4:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fc4ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fc6;}
case 0x693fc6:{ // FSTP float ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fc6ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fc9;}
case 0x693fc9:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fc9ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fcb;}
case 0x693fcb:{ // FSTP float ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fcbull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fce;}
case 0x693fce:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fceull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fd0;}
case 0x693fd0:{ // FSTP float ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fd0ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fd3;}
case 0x693fd3:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fd3ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fd5;}
case 0x693fd5:{ // FSTP float ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fd5ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fd8;}
case 0x693fd8:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fd8ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fda;}
case 0x693fda:{ // FSTP float ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fdaull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fdd;}
case 0x693fdd:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fddull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fdf;}
case 0x693fdf:{ // FSTP float ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fdfull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fe2;}
case 0x693fe2:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fe2ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fe4;}
case 0x693fe4:{ // FSTP float ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fe4ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fe7;}
case 0x693fe7:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fe7ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x693fe9;}
case 0x693fe9:{ // FSTP float ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fe9ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693fec;}
case 0x693fec:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693fecull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x693fee;}
case 0x693fee:{ // FSTP float ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693feeull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693ff1;}
case 0x693ff1:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ff1ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x693ff3;}
case 0x693ff3:{ // FSTP float ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ff3ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693ff6;}
case 0x693ff6:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ff6ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x693ff8;}
case 0x693ff8:{ // FSTP float ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ff8ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x693ffb;}
case 0x693ffb:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ffbull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x693ffd;}
case 0x693ffd:{ // FSTP float ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x693ffdull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694000;}
default:missing_instruction(c.pc);}}
}
