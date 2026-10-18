#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_731(Cpu& c){switch(c.pc){
case 0x731000:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731003;}
case 0x731003:{ // MOVQ MM4,qword ptr [EBX + 0x290]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x290ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73100a;}
case 0x73100a:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x73100d;}
case 0x73100d:{ // MOVQ MM6,qword ptr [EBX + 0x298]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x298ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731014;}
case 0x731014:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x731018;}
case 0x731018:{ // PMADDWD MM0,qword ptr [ECX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x73101f;}
case 0x73101f:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x731022;}
case 0x731022:{ // PMADDWD MM2,qword ptr [ECX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x731029;}
case 0x731029:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x73102d;}
case 0x73102d:{ // PMADDWD MM4,qword ptr [ECX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731034;}
case 0x731034:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x731037;}
case 0x731037:{ // PMADDWD MM6,qword ptr [ECX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x73103e;}
case 0x73103e:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x731041;}
case 0x731041:{ // MOV word ptr [EDX + 0x12],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x12ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731045;}
case 0x731045:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731048;}
case 0x731048:{ // MOVQ MM1,qword ptr [EBX + 0x2c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73104f;}
case 0x73104f:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731052;}
case 0x731052:{ // MOVQ MM3,qword ptr [EBX + 0x2c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731059;}
case 0x731059:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73105c;}
case 0x73105c:{ // MOVQ MM5,qword ptr [EBX + 0x2d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731063;}
case 0x731063:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731066;}
case 0x731066:{ // MOVQ MM7,qword ptr [EBX + 0x2d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73106d;}
case 0x73106d:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x731071;}
case 0x731071:{ // PMADDWD MM1,qword ptr [ECX + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x160ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x731078;}
case 0x731078:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x73107b;}
case 0x73107b:{ // PMADDWD MM3,qword ptr [ECX + 0x168]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x168ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x731082;}
case 0x731082:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x731086;}
case 0x731086:{ // PMADDWD MM5,qword ptr [ECX + 0x170]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x170ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x73108d;}
case 0x73108d:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x731090;}
case 0x731090:{ // PMADDWD MM7,qword ptr [ECX + 0x178]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x178ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x731097;}
case 0x731097:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x73109a;}
case 0x73109a:{ // MOV word ptr [EDX + 0x14],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x14ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73109e;}
case 0x73109e:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7310a1;}
case 0x7310a1:{ // MOVQ MM0,qword ptr [EBX + 0x300]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x300ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7310a8;}
case 0x7310a8:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x7310ab;}
case 0x7310ab:{ // MOVQ MM2,qword ptr [EBX + 0x308]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x308ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7310b2;}
case 0x7310b2:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x7310b5;}
case 0x7310b5:{ // MOVQ MM4,qword ptr [EBX + 0x310]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x310ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7310bc;}
case 0x7310bc:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7310bf;}
case 0x7310bf:{ // MOVQ MM6,qword ptr [EBX + 0x318]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x318ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7310c6;}
case 0x7310c6:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x7310ca;}
case 0x7310ca:{ // PMADDWD MM0,qword ptr [ECX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x7310d1;}
case 0x7310d1:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x7310d4;}
case 0x7310d4:{ // PMADDWD MM2,qword ptr [ECX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x7310db;}
case 0x7310db:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x7310df;}
case 0x7310df:{ // PMADDWD MM4,qword ptr [ECX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x7310e6;}
case 0x7310e6:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x7310e9;}
case 0x7310e9:{ // PMADDWD MM6,qword ptr [ECX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x7310f0;}
case 0x7310f0:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7310f3;}
case 0x7310f3:{ // MOV word ptr [EDX + 0x16],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x16ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7310f7;}
case 0x7310f7:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7310fa;}
case 0x7310fa:{ // MOVQ MM1,qword ptr [EBX + 0x340]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x340ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731101;}
case 0x731101:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731104;}
case 0x731104:{ // MOVQ MM3,qword ptr [EBX + 0x348]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x348ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73110b;}
case 0x73110b:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73110e;}
case 0x73110e:{ // MOVQ MM5,qword ptr [EBX + 0x350]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x350ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731115;}
case 0x731115:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731118;}
case 0x731118:{ // MOVQ MM7,qword ptr [EBX + 0x358]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x358ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73111f;}
case 0x73111f:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x731123;}
case 0x731123:{ // PMADDWD MM1,qword ptr [ECX + 0x1a0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1a0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x73112a;}
case 0x73112a:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x73112d;}
case 0x73112d:{ // PMADDWD MM3,qword ptr [ECX + 0x1a8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1a8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x731134;}
case 0x731134:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x731138;}
case 0x731138:{ // PMADDWD MM5,qword ptr [ECX + 0x1b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x73113f;}
case 0x73113f:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x731142;}
case 0x731142:{ // PMADDWD MM7,qword ptr [ECX + 0x1b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x731149;}
case 0x731149:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x73114c;}
case 0x73114c:{ // MOV word ptr [EDX + 0x18],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731150;}
case 0x731150:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731153;}
case 0x731153:{ // MOVQ MM0,qword ptr [EBX + 0x380]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x380ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73115a;}
case 0x73115a:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x73115d;}
case 0x73115d:{ // MOVQ MM2,qword ptr [EBX + 0x388]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x388ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731164;}
case 0x731164:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731167;}
case 0x731167:{ // MOVQ MM4,qword ptr [EBX + 0x390]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x390ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73116e;}
case 0x73116e:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x731171;}
case 0x731171:{ // MOVQ MM6,qword ptr [EBX + 0x398]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x398ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731178;}
case 0x731178:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x73117c;}
case 0x73117c:{ // PMADDWD MM0,qword ptr [ECX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x731183;}
case 0x731183:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x731186;}
case 0x731186:{ // PMADDWD MM2,qword ptr [ECX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x73118d;}
case 0x73118d:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x731191;}
case 0x731191:{ // PMADDWD MM4,qword ptr [ECX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731198;}
case 0x731198:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x73119b;}
case 0x73119b:{ // PMADDWD MM6,qword ptr [ECX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x7311a2;}
case 0x7311a2:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7311a5;}
case 0x7311a5:{ // MOV word ptr [EDX + 0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7311a9;}
case 0x7311a9:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7311ac;}
case 0x7311ac:{ // MOVQ MM1,qword ptr [EBX + 0x3c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x3c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7311b3;}
case 0x7311b3:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x7311b6;}
case 0x7311b6:{ // MOVQ MM3,qword ptr [EBX + 0x3c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x3c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7311bd;}
case 0x7311bd:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x7311c0;}
case 0x7311c0:{ // MOVQ MM5,qword ptr [EBX + 0x3d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x3d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7311c7;}
case 0x7311c7:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7311ca;}
case 0x7311ca:{ // MOVQ MM7,qword ptr [EBX + 0x3d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x3d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7311d1;}
case 0x7311d1:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x7311d5;}
case 0x7311d5:{ // PMADDWD MM1,qword ptr [ECX + 0x1e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1e0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x7311dc;}
case 0x7311dc:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x7311df;}
case 0x7311df:{ // PMADDWD MM3,qword ptr [ECX + 0x1e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1e8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x7311e6;}
case 0x7311e6:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x7311ea;}
case 0x7311ea:{ // PMADDWD MM5,qword ptr [ECX + 0x1f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x7311f1;}
case 0x7311f1:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x7311f4;}
case 0x7311f4:{ // PMADDWD MM7,qword ptr [ECX + 0x1f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x7311fb;}
case 0x7311fb:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x7311fe;}
case 0x7311fe:{ // MOV word ptr [EDX + 0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731202;}
case 0x731202:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731205;}
case 0x731205:{ // MOVQ MM0,qword ptr [EBX + 0x400]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x400ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73120c;}
case 0x73120c:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x73120f;}
case 0x73120f:{ // MOVQ MM2,qword ptr [EBX + 0x408]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x408ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731216;}
case 0x731216:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731219;}
case 0x731219:{ // MOVQ MM4,qword ptr [EBX + 0x410]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x410ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731220;}
case 0x731220:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x731223;}
case 0x731223:{ // MOVQ MM6,qword ptr [EBX + 0x418]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x418ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73122a;}
case 0x73122a:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x73122e;}
case 0x73122e:{ // PMULHW MM0,qword ptr [ECX + 0x200]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x200ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524445,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x731235;}
case 0x731235:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x731238;}
case 0x731238:{ // PMULHW MM2,qword ptr [ECX + 0x208]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x208ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524445,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x73123f;}
case 0x73123f:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x731243;}
case 0x731243:{ // PMULHW MM4,qword ptr [ECX + 0x210]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x210ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524445,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x73124a;}
case 0x73124a:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x73124d;}
case 0x73124d:{ // PMULHW MM6,qword ptr [ECX + 0x218]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x218ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524445,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x731254;}
case 0x731254:{ // PSLLD MM0,0x10
wr<4>(c,0x1100,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1100),0x10ull));
wr<4>(c,0x1104,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1104),0x10ull));
return 0x731258;}
case 0x731258:{ // PSLLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x73125c;}
case 0x73125c:{ // MOV EBX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73125f;}
case 0x73125f:{ // PSLLD MM4,0x10
wr<4>(c,0x1140,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1140),0x10ull));
wr<4>(c,0x1144,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1144),0x10ull));
return 0x731263;}
case 0x731263:{ // NEG EBX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_2COMP,4,4>(r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x731265;}
case 0x731265:{ // PSLLD MM6,0x10
wr<4>(c,0x1160,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1160),0x10ull));
wr<4>(c,0x1164,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1164),0x10ull));
return 0x731269;}
case 0x731269:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x73126c;}
case 0x73126c:{ // MOV word ptr [EDX + 0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731270;}
case 0x731270:{ // LEA EBX,[EBX*0x2 + 0x7d0de0]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x7d0de0ull,u<4>(c,0x6d00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x731277;}
case 0x731277:{ // MOVQ MM1,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73127a;}
case 0x73127a:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x73127d;}
case 0x73127d:{ // MOVQ MM3,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731281;}
case 0x731281:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731284;}
case 0x731284:{ // MOVQ MM5,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731288;}
case 0x731288:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73128b;}
case 0x73128b:{ // MOVQ MM7,qword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73128f;}
case 0x73128f:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731292;}
case 0x731292:{ // PMADDWD MM1,qword ptr [ECX + 0x1e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1e0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x731299;}
case 0x731299:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x73129d;}
case 0x73129d:{ // PMADDWD MM3,qword ptr [ECX + 0x1e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1e8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x7312a4;}
case 0x7312a4:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7312a7;}
case 0x7312a7:{ // PMADDWD MM5,qword ptr [ECX + 0x1f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x7312ae;}
case 0x7312ae:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x7312b2;}
case 0x7312b2:{ // PMADDWD MM7,qword ptr [ECX + 0x1f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1f8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x7312b9;}
case 0x7312b9:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x7312bc;}
case 0x7312bc:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x7312bf;}
case 0x7312bf:{ // MOV word ptr [EDX + 0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7312c3;}
case 0x7312c3:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7312c6;}
case 0x7312c6:{ // MOVQ MM0,qword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7312ca;}
case 0x7312ca:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x7312cd;}
case 0x7312cd:{ // MOVQ MM2,qword ptr [EBX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7312d1;}
case 0x7312d1:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x7312d4;}
case 0x7312d4:{ // MOVQ MM4,qword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7312d8;}
case 0x7312d8:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7312db;}
case 0x7312db:{ // MOVQ MM6,qword ptr [EBX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7312df;}
case 0x7312df:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7312e3;}
case 0x7312e3:{ // PMADDWD MM0,qword ptr [ECX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x7312ea;}
case 0x7312ea:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7312ed;}
case 0x7312ed:{ // PMADDWD MM2,qword ptr [ECX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x7312f4;}
case 0x7312f4:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x7312f8;}
case 0x7312f8:{ // PMADDWD MM4,qword ptr [ECX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x7312ff;}
case 0x7312ff:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x731302;}
case 0x731302:{ // PMADDWD MM6,qword ptr [ECX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x731309;}
case 0x731309:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x73130c;}
case 0x73130c:{ // MOV word ptr [EDX + 0x22],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x22ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731310;}
case 0x731310:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731313;}
case 0x731313:{ // MOVQ MM1,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73131a;}
case 0x73131a:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x73131d;}
case 0x73131d:{ // MOVQ MM3,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731324;}
case 0x731324:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x731327;}
case 0x731327:{ // MOVQ MM5,qword ptr [EBX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73132e;}
case 0x73132e:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731331;}
case 0x731331:{ // MOVQ MM7,qword ptr [EBX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731338;}
case 0x731338:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x73133c;}
case 0x73133c:{ // PMADDWD MM1,qword ptr [ECX + 0x1a0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1a0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x731343;}
case 0x731343:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731346;}
case 0x731346:{ // PMADDWD MM3,qword ptr [ECX + 0x1a8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1a8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x73134d;}
case 0x73134d:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x731351;}
case 0x731351:{ // PMADDWD MM5,qword ptr [ECX + 0x1b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x731358;}
case 0x731358:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x73135b;}
case 0x73135b:{ // PMADDWD MM7,qword ptr [ECX + 0x1b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1b8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x731362;}
case 0x731362:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x731365;}
case 0x731365:{ // MOV word ptr [EDX + 0x24],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x24ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731369;}
case 0x731369:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x73136c;}
case 0x73136c:{ // MOVQ MM0,qword ptr [EBX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731373;}
case 0x731373:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x731376;}
case 0x731376:{ // MOVQ MM2,qword ptr [EBX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73137d;}
case 0x73137d:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731380;}
case 0x731380:{ // MOVQ MM4,qword ptr [EBX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731387;}
case 0x731387:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x73138a;}
case 0x73138a:{ // MOVQ MM6,qword ptr [EBX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731391;}
case 0x731391:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x731395;}
case 0x731395:{ // PMADDWD MM0,qword ptr [ECX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x73139c;}
case 0x73139c:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x73139f;}
case 0x73139f:{ // PMADDWD MM2,qword ptr [ECX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x7313a6;}
case 0x7313a6:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x7313aa;}
case 0x7313aa:{ // PMADDWD MM4,qword ptr [ECX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x7313b1;}
case 0x7313b1:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x7313b4;}
case 0x7313b4:{ // PMADDWD MM6,qword ptr [ECX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x7313bb;}
case 0x7313bb:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x7313be;}
case 0x7313be:{ // MOV word ptr [EDX + 0x26],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x26ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7313c2;}
case 0x7313c2:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7313c5;}
case 0x7313c5:{ // MOVQ MM1,qword ptr [EBX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7313cc;}
case 0x7313cc:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x7313cf;}
case 0x7313cf:{ // MOVQ MM3,qword ptr [EBX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7313d6;}
case 0x7313d6:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x7313d9;}
case 0x7313d9:{ // MOVQ MM5,qword ptr [EBX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7313e0;}
case 0x7313e0:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7313e3;}
case 0x7313e3:{ // MOVQ MM7,qword ptr [EBX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7313ea;}
case 0x7313ea:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x7313ee;}
case 0x7313ee:{ // PMADDWD MM1,qword ptr [ECX + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x160ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x7313f5;}
case 0x7313f5:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7313f8;}
case 0x7313f8:{ // PMADDWD MM3,qword ptr [ECX + 0x168]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x168ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x7313ff;}
case 0x7313ff:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x731403;}
case 0x731403:{ // PMADDWD MM5,qword ptr [ECX + 0x170]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x170ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x73140a;}
case 0x73140a:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x73140d;}
case 0x73140d:{ // PMADDWD MM7,qword ptr [ECX + 0x178]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x178ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x731414;}
case 0x731414:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x731417;}
case 0x731417:{ // MOV word ptr [EDX + 0x28],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73141b;}
case 0x73141b:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x73141e;}
case 0x73141e:{ // MOVQ MM0,qword ptr [EBX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731425;}
case 0x731425:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x731428;}
case 0x731428:{ // MOVQ MM2,qword ptr [EBX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73142f;}
case 0x73142f:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731432;}
case 0x731432:{ // MOVQ MM4,qword ptr [EBX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731439;}
case 0x731439:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x73143c;}
case 0x73143c:{ // MOVQ MM6,qword ptr [EBX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731443;}
case 0x731443:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x731447;}
case 0x731447:{ // PMADDWD MM0,qword ptr [ECX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x73144e;}
case 0x73144e:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731451;}
case 0x731451:{ // PMADDWD MM2,qword ptr [ECX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x731458;}
case 0x731458:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x73145c;}
case 0x73145c:{ // PMADDWD MM4,qword ptr [ECX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731463;}
case 0x731463:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x731466;}
case 0x731466:{ // PMADDWD MM6,qword ptr [ECX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x73146d;}
case 0x73146d:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x731470;}
case 0x731470:{ // MOV word ptr [EDX + 0x2a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731474;}
case 0x731474:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731477;}
case 0x731477:{ // MOVQ MM1,qword ptr [EBX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73147e;}
case 0x73147e:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731481;}
case 0x731481:{ // MOVQ MM3,qword ptr [EBX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731488;}
case 0x731488:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73148b;}
case 0x73148b:{ // MOVQ MM5,qword ptr [EBX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731492;}
case 0x731492:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731495;}
case 0x731495:{ // MOVQ MM7,qword ptr [EBX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73149c;}
case 0x73149c:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x7314a0;}
case 0x7314a0:{ // PMADDWD MM1,qword ptr [ECX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x120ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x7314a7;}
case 0x7314a7:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7314aa;}
case 0x7314aa:{ // PMADDWD MM3,qword ptr [ECX + 0x128]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x128ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x7314b1;}
case 0x7314b1:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x7314b5;}
case 0x7314b5:{ // PMADDWD MM5,qword ptr [ECX + 0x130]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x130ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x7314bc;}
case 0x7314bc:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x7314bf;}
case 0x7314bf:{ // PMADDWD MM7,qword ptr [ECX + 0x138]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x138ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x7314c6;}
case 0x7314c6:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x7314c9;}
case 0x7314c9:{ // MOV word ptr [EDX + 0x2c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7314cd;}
case 0x7314cd:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7314d0;}
case 0x7314d0:{ // MOVQ MM0,qword ptr [EBX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7314d7;}
case 0x7314d7:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x7314da;}
case 0x7314da:{ // MOVQ MM2,qword ptr [EBX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7314e1;}
case 0x7314e1:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x7314e4;}
case 0x7314e4:{ // MOVQ MM4,qword ptr [EBX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7314eb;}
case 0x7314eb:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7314ee;}
case 0x7314ee:{ // MOVQ MM6,qword ptr [EBX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7314f5;}
case 0x7314f5:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7314f9;}
case 0x7314f9:{ // PMADDWD MM0,qword ptr [ECX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x731500;}
case 0x731500:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731503;}
case 0x731503:{ // PMADDWD MM2,qword ptr [ECX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x73150a;}
case 0x73150a:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x73150e;}
case 0x73150e:{ // PMADDWD MM4,qword ptr [ECX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731515;}
case 0x731515:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x731518;}
case 0x731518:{ // PMADDWD MM6,qword ptr [ECX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x73151f;}
case 0x73151f:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x731522;}
case 0x731522:{ // MOV word ptr [EDX + 0x2e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731526;}
case 0x731526:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731529;}
case 0x731529:{ // MOVQ MM1,qword ptr [EBX + 0x200]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x200ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731530;}
case 0x731530:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731533;}
case 0x731533:{ // MOVQ MM3,qword ptr [EBX + 0x208]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x208ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73153a;}
case 0x73153a:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73153d;}
case 0x73153d:{ // MOVQ MM5,qword ptr [EBX + 0x210]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x210ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731544;}
case 0x731544:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731547;}
case 0x731547:{ // MOVQ MM7,qword ptr [EBX + 0x218]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x218ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73154e;}
case 0x73154e:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x731552;}
case 0x731552:{ // PMADDWD MM1,qword ptr [ECX + 0xe0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x731559;}
case 0x731559:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x73155c;}
case 0x73155c:{ // PMADDWD MM3,qword ptr [ECX + 0xe8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xe8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x731563;}
case 0x731563:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x731567;}
case 0x731567:{ // PMADDWD MM5,qword ptr [ECX + 0xf0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xf0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x73156e;}
case 0x73156e:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x731571;}
case 0x731571:{ // PMADDWD MM7,qword ptr [ECX + 0xf8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xf8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x731578;}
case 0x731578:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x73157b;}
case 0x73157b:{ // MOV word ptr [EDX + 0x30],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73157f;}
case 0x73157f:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731582;}
case 0x731582:{ // MOVQ MM0,qword ptr [EBX + 0x240]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x240ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731589;}
case 0x731589:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x73158c;}
case 0x73158c:{ // MOVQ MM2,qword ptr [EBX + 0x248]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x248ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731593;}
case 0x731593:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731596;}
case 0x731596:{ // MOVQ MM4,qword ptr [EBX + 0x250]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x250ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73159d;}
case 0x73159d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7315a0;}
case 0x7315a0:{ // MOVQ MM6,qword ptr [EBX + 0x258]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x258ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7315a7;}
case 0x7315a7:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7315ab;}
case 0x7315ab:{ // PMADDWD MM0,qword ptr [ECX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x7315b2;}
case 0x7315b2:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7315b5;}
case 0x7315b5:{ // PMADDWD MM2,qword ptr [ECX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x7315bc;}
case 0x7315bc:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x7315c0;}
case 0x7315c0:{ // PMADDWD MM4,qword ptr [ECX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x7315c7;}
case 0x7315c7:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x7315ca;}
case 0x7315ca:{ // PMADDWD MM6,qword ptr [ECX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x7315d1;}
case 0x7315d1:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x7315d4;}
case 0x7315d4:{ // MOV word ptr [EDX + 0x32],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x32ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7315d8;}
case 0x7315d8:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7315db;}
case 0x7315db:{ // MOVQ MM1,qword ptr [EBX + 0x280]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x280ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7315e2;}
case 0x7315e2:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x7315e5;}
case 0x7315e5:{ // MOVQ MM3,qword ptr [EBX + 0x288]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x288ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7315ec;}
case 0x7315ec:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x7315ef;}
case 0x7315ef:{ // MOVQ MM5,qword ptr [EBX + 0x290]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x290ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7315f6;}
case 0x7315f6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7315f9;}
case 0x7315f9:{ // MOVQ MM7,qword ptr [EBX + 0x298]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x298ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731600;}
case 0x731600:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x731604;}
case 0x731604:{ // PMADDWD MM1,qword ptr [ECX + 0xa0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x73160b;}
case 0x73160b:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x73160e;}
case 0x73160e:{ // PMADDWD MM3,qword ptr [ECX + 0xa8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xa8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x731615;}
case 0x731615:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x731619;}
case 0x731619:{ // PMADDWD MM5,qword ptr [ECX + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x731620;}
case 0x731620:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x731623;}
case 0x731623:{ // PMADDWD MM7,qword ptr [ECX + 0xb8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xb8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x73162a;}
case 0x73162a:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x73162d;}
case 0x73162d:{ // MOV word ptr [EDX + 0x34],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x34ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731631;}
case 0x731631:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731634;}
case 0x731634:{ // MOVQ MM0,qword ptr [EBX + 0x2c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73163b;}
case 0x73163b:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x73163e;}
case 0x73163e:{ // MOVQ MM2,qword ptr [EBX + 0x2c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731645;}
case 0x731645:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x731648;}
case 0x731648:{ // MOVQ MM4,qword ptr [EBX + 0x2d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73164f;}
case 0x73164f:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x731652;}
case 0x731652:{ // MOVQ MM6,qword ptr [EBX + 0x2d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x2d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731659;}
case 0x731659:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x73165d;}
case 0x73165d:{ // PMADDWD MM0,qword ptr [ECX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x731664;}
case 0x731664:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731667;}
case 0x731667:{ // PMADDWD MM2,qword ptr [ECX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x73166e;}
case 0x73166e:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x731672;}
case 0x731672:{ // PMADDWD MM4,qword ptr [ECX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731679;}
case 0x731679:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x73167c;}
case 0x73167c:{ // PMADDWD MM6,qword ptr [ECX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x731683;}
case 0x731683:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x731686;}
case 0x731686:{ // MOV word ptr [EDX + 0x36],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73168a;}
case 0x73168a:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x73168d;}
case 0x73168d:{ // MOVQ MM1,qword ptr [EBX + 0x300]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x300ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731694;}
case 0x731694:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731697;}
case 0x731697:{ // MOVQ MM3,qword ptr [EBX + 0x308]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x308ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73169e;}
case 0x73169e:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x7316a1;}
case 0x7316a1:{ // MOVQ MM5,qword ptr [EBX + 0x310]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x310ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316a8;}
case 0x7316a8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7316ab;}
case 0x7316ab:{ // MOVQ MM7,qword ptr [EBX + 0x318]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x318ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316b2;}
case 0x7316b2:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x7316b6;}
case 0x7316b6:{ // PMADDWD MM1,qword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x7316ba;}
case 0x7316ba:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x7316bd;}
case 0x7316bd:{ // PMADDWD MM3,qword ptr [ECX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x7316c1;}
case 0x7316c1:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x7316c5;}
case 0x7316c5:{ // PMADDWD MM5,qword ptr [ECX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x7316c9;}
case 0x7316c9:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x7316cc;}
case 0x7316cc:{ // PMADDWD MM7,qword ptr [ECX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x7316d0;}
case 0x7316d0:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x7316d3;}
case 0x7316d3:{ // MOV word ptr [EDX + 0x38],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7316d7;}
case 0x7316d7:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x7316da;}
case 0x7316da:{ // MOVQ MM0,qword ptr [EBX + 0x340]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x340ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316e1;}
case 0x7316e1:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x7316e4;}
case 0x7316e4:{ // MOVQ MM2,qword ptr [EBX + 0x348]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x348ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316eb;}
case 0x7316eb:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x7316ee;}
case 0x7316ee:{ // MOVQ MM4,qword ptr [EBX + 0x350]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x350ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316f5;}
case 0x7316f5:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7316f8;}
case 0x7316f8:{ // MOVQ MM6,qword ptr [EBX + 0x358]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x358ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7316ff;}
case 0x7316ff:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x731703;}
case 0x731703:{ // PMADDWD MM0,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x731707;}
case 0x731707:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x73170a;}
case 0x73170a:{ // PMADDWD MM2,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x73170e;}
case 0x73170e:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x731712;}
case 0x731712:{ // PMADDWD MM4,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x731716;}
case 0x731716:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x731719;}
case 0x731719:{ // PMADDWD MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x73171d;}
case 0x73171d:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x731720;}
case 0x731720:{ // MOV word ptr [EDX + 0x3a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731724;}
case 0x731724:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731727;}
case 0x731727:{ // MOVQ MM1,qword ptr [EBX + 0x380]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x380ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73172e;}
case 0x73172e:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x731731;}
case 0x731731:{ // MOVQ MM3,qword ptr [EBX + 0x388]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x388ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731738;}
case 0x731738:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x73173b;}
case 0x73173b:{ // MOVQ MM5,qword ptr [EBX + 0x390]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x390ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731742;}
case 0x731742:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x731745;}
case 0x731745:{ // MOVQ MM7,qword ptr [EBX + 0x398]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x398ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73174c;}
case 0x73174c:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x731750;}
case 0x731750:{ // PMADDWD MM1,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x731754;}
case 0x731754:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x731757;}
case 0x731757:{ // PMADDWD MM3,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x73175b;}
case 0x73175b:{ // PSRAD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x73175f;}
case 0x73175f:{ // PMADDWD MM5,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x731763;}
case 0x731763:{ // PACKSSDW MM0,MM0
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x731766;}
case 0x731766:{ // PMADDWD MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x73176a;}
case 0x73176a:{ // MOVD EAX,MM0
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x73176d;}
case 0x73176d:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731770;}
case 0x731770:{ // MOV word ptr [EDX + 0x3c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731774;}
case 0x731774:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x731777;}
case 0x731777:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x73177a;}
case 0x73177a:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x73177d;}
case 0x73177d:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x731781;}
case 0x731781:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x731784;}
case 0x731784:{ // PSRAD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x731788;}
case 0x731788:{ // PACKSSDW MM1,MM1
wr<8>(c,0x1110,user_op(c,524425,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x73178b;}
case 0x73178b:{ // MOVD EAX,MM1
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
return 0x73178e;}
case 0x73178e:{ // MOV word ptr [EDX + 0x3e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x3eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x731792;}
case 0x731792:{ // EMMS
wr<2>(c,0x10a4,eval<Op::COPY,2,2>(0xffffull));
return 0x731794;}
case 0x731794:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x731795;}
case 0x731795:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x731796;}
case 0x731796:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x731798;}
case 0x731798:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x731799;}
case 0x731799:{ // MOVSX ECX,word ptr [EBP + EAX*0x2 + -0x48]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffb8ull,r<4>(c,0x14)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7400)));
wr<4>(c,0x4,eval<Op::INT_SEXT,4,2>(u<2>(c,0x17100)));
return 0x73179e;}
case 0x73179e:{ // MOV dword ptr [EBP + 0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7317a1;}
case 0x7317a1:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7317a4;}
case 0x7317a4:{ // FILD dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317a4ull));
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
return 0x7317a7;}
case 0x7317a7:{ // FSTP float ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317a7ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7317aa;}
case 0x7317aa:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7317ab;}
case 0x7317ab:{ // CMP EAX,0x20
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x20ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7317ae;}
case 0x7317ae:{ // JL 0x00731799
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x731799;}
return 0x7317b0;}
case 0x7317b0:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x7317b1;}
case 0x7317b1:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x7317b4;}
case 0x7317b4:{ // FLD float ptr [EAX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317b4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,r<4>(c,0x0)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317b6;}
case 0x7317b6:{ // FADD float ptr [EAX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317b6ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7317b9;}
case 0x7317b9:{ // FSTP float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317b9ull));
wm<4>(c,0x8b4a38,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7317bf;}
case 0x7317bf:{ // FLD float ptr [EAX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317bfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,r<4>(c,0x0)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317c1;}
case 0x7317c1:{ // FSUB float ptr [EAX + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317c1ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7317c4;}
case 0x7317c4:{ // FMUL float ptr [0x007d1e80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317c4ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e80),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7317ca;}
case 0x7317ca:{ // FST float ptr [0x008b4ab4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317caull));
wm<4>(c,0x8b4ab4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x7317d0;}
case 0x7317d0:{ // FLD float ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317d0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317d3;}
case 0x7317d3:{ // FADD float ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317d3ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7317d6;}
case 0x7317d6:{ // FSTP float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317d6ull));
wm<4>(c,0x8b4a3c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7317dc;}
case 0x7317dc:{ // FLD float ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317dcull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317df;}
case 0x7317df:{ // FSUB float ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317dfull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7317e2;}
case 0x7317e2:{ // FMUL float ptr [0x007d1e84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317e2ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e84),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7317e8;}
case 0x7317e8:{ // FSTP float ptr [0x008b4ab0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317e8ull));
wm<4>(c,0x8b4ab0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7317ee;}
case 0x7317ee:{ // FLD float ptr [EAX + 0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x74ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317eeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317f1;}
case 0x7317f1:{ // FADD float ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317f1ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7317f4;}
case 0x7317f4:{ // FSTP float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317f4ull));
wm<4>(c,0x8b4a40,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7317fa;}
case 0x7317fa:{ // FLD float ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317faull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7317fd;}
case 0x7317fd:{ // FSUB float ptr [EAX + 0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x74ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7317fdull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731800;}
case 0x731800:{ // FMUL float ptr [0x007d1e88]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731800ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e88),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731806;}
case 0x731806:{ // FSTP float ptr [0x008b4aac]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731806ull));
wm<4>(c,0x8b4aac,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73180c;}
case 0x73180c:{ // FLD float ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73180cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73180f;}
case 0x73180f:{ // FADD float ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73180full));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731812;}
case 0x731812:{ // FSTP float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731812ull));
wm<4>(c,0x8b4a44,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731818;}
case 0x731818:{ // FLD float ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731818ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73181b;}
case 0x73181b:{ // FSUB float ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73181bull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73181e;}
case 0x73181e:{ // FMUL float ptr [0x007d1e8c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73181eull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e8c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731824;}
case 0x731824:{ // FSTP float ptr [0x008b4aa8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731824ull));
wm<4>(c,0x8b4aa8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73182a;}
case 0x73182a:{ // FLD float ptr [EAX + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73182aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73182d;}
case 0x73182d:{ // FADD float ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73182dull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731830;}
case 0x731830:{ // FSTP float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731830ull));
wm<4>(c,0x8b4a48,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731836;}
case 0x731836:{ // FLD float ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731836ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731839;}
case 0x731839:{ // FSUB float ptr [EAX + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731839ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73183c;}
case 0x73183c:{ // FMUL float ptr [0x007d1e90]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73183cull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e90),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731842;}
case 0x731842:{ // FSTP float ptr [0x008b4aa4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731842ull));
wm<4>(c,0x8b4aa4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731848;}
case 0x731848:{ // FLD float ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731848ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73184b;}
case 0x73184b:{ // FADD float ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73184bull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73184e;}
case 0x73184e:{ // FSTP float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73184eull));
wm<4>(c,0x8b4a4c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731854;}
case 0x731854:{ // FLD float ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731854ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731857;}
case 0x731857:{ // FSUB float ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731857ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73185a;}
case 0x73185a:{ // FMUL float ptr [0x007d1e94]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73185aull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e94),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731860;}
case 0x731860:{ // FSTP float ptr [0x008b4aa0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731860ull));
wm<4>(c,0x8b4aa0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731866;}
case 0x731866:{ // FLD float ptr [EAX + 0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x64ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731866ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731869;}
case 0x731869:{ // FADD float ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731869ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73186c;}
case 0x73186c:{ // FSTP float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73186cull));
wm<4>(c,0x8b4a50,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731872;}
case 0x731872:{ // FLD float ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731872ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731875;}
case 0x731875:{ // FSUB float ptr [EAX + 0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x64ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731875ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731878;}
case 0x731878:{ // FMUL float ptr [0x007d1e98]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731878ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e98),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x73187e;}
case 0x73187e:{ // FSTP float ptr [0x008b4a9c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73187eull));
wm<4>(c,0x8b4a9c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731884;}
case 0x731884:{ // FLD float ptr [EAX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731884ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731887;}
case 0x731887:{ // FADD float ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731887ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73188a;}
case 0x73188a:{ // FSTP float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73188aull));
wm<4>(c,0x8b4a54,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731890;}
case 0x731890:{ // FLD float ptr [EAX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731890ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731893;}
case 0x731893:{ // FSUB float ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731893ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731896;}
case 0x731896:{ // FMUL float ptr [0x007d1e9c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731896ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1e9c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x73189c;}
case 0x73189c:{ // FSTP float ptr [0x008b4a98]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73189cull));
wm<4>(c,0x8b4a98,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318a2;}
case 0x7318a2:{ // FLD float ptr [EAX + 0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318a2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318a5;}
case 0x7318a5:{ // FADD float ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318a5ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7318a8;}
case 0x7318a8:{ // FSTP float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318a8ull));
wm<4>(c,0x8b4a58,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318ae;}
case 0x7318ae:{ // FLD float ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318aeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318b1;}
case 0x7318b1:{ // FSUB float ptr [EAX + 0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318b1ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7318b4;}
case 0x7318b4:{ // FMUL float ptr [0x007d1ea0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318b4ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ea0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7318ba;}
case 0x7318ba:{ // FSTP float ptr [0x008b4a94]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318baull));
wm<4>(c,0x8b4a94,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318c0;}
case 0x7318c0:{ // FLD float ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318c0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318c3;}
case 0x7318c3:{ // FADD float ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318c3ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7318c6;}
case 0x7318c6:{ // FSTP float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318c6ull));
wm<4>(c,0x8b4a5c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318cc;}
case 0x7318cc:{ // FLD float ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318ccull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318cf;}
case 0x7318cf:{ // FSUB float ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318cfull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7318d2;}
case 0x7318d2:{ // FMUL float ptr [0x007d1ea4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318d2ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ea4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7318d8;}
case 0x7318d8:{ // FSTP float ptr [0x008b4a90]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318d8ull));
wm<4>(c,0x8b4a90,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318de;}
case 0x7318de:{ // FLD float ptr [EAX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318deull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318e1;}
case 0x7318e1:{ // FADD float ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318e1ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7318e4;}
case 0x7318e4:{ // FSTP float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318e4ull));
wm<4>(c,0x8b4a60,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318ea;}
case 0x7318ea:{ // FLD float ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318eaull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318ed;}
case 0x7318ed:{ // FSUB float ptr [EAX + 0x54]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x54ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318edull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7318f0;}
case 0x7318f0:{ // FMUL float ptr [0x007d1ea8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318f0ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ea8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7318f6;}
case 0x7318f6:{ // FSTP float ptr [0x008b4a8c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318f6ull));
wm<4>(c,0x8b4a8c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7318fc;}
case 0x7318fc:{ // FLD float ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318fcull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7318ff;}
case 0x7318ff:{ // FADD float ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7318ffull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731902;}
case 0x731902:{ // FSTP float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731902ull));
wm<4>(c,0x8b4a64,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731908;}
case 0x731908:{ // FLD float ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731908ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73190b;}
case 0x73190b:{ // FSUB float ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73190bull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73190e;}
case 0x73190e:{ // FMUL float ptr [0x007d1eac]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73190eull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eac),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731914;}
case 0x731914:{ // FSTP float ptr [0x008b4a88]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731914ull));
wm<4>(c,0x8b4a88,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73191a;}
case 0x73191a:{ // FLD float ptr [EAX + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73191aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73191d;}
case 0x73191d:{ // FADD float ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73191dull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731920;}
case 0x731920:{ // FSTP float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731920ull));
wm<4>(c,0x8b4a68,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731926;}
case 0x731926:{ // FLD float ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731926ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731929;}
case 0x731929:{ // FSUB float ptr [EAX + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731929ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73192c;}
case 0x73192c:{ // FMUL float ptr [0x007d1eb0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73192cull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eb0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731932;}
case 0x731932:{ // FSTP float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731932ull));
wm<4>(c,0x8b4a84,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731938;}
case 0x731938:{ // FLD float ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731938ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73193b;}
case 0x73193b:{ // FADD float ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73193bull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73193e;}
case 0x73193e:{ // FSTP float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73193eull));
wm<4>(c,0x8b4a6c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731944;}
case 0x731944:{ // FLD float ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731944ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731947;}
case 0x731947:{ // FSUB float ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731947ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x73194a;}
case 0x73194a:{ // FMUL float ptr [0x007d1eb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73194aull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eb4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731950;}
case 0x731950:{ // FSTP float ptr [0x008b4a80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731950ull));
wm<4>(c,0x8b4a80,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731956;}
case 0x731956:{ // FLD float ptr [EAX + 0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x44ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731956ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731959;}
case 0x731959:{ // FADD float ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731959ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73195c;}
case 0x73195c:{ // FSTP float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73195cull));
wm<4>(c,0x8b4a70,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731962;}
case 0x731962:{ // FLD float ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731962ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731965;}
case 0x731965:{ // FSUB float ptr [EAX + 0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x44ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731965ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731968;}
case 0x731968:{ // FMUL float ptr [0x007d1eb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731968ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eb8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x73196e;}
case 0x73196e:{ // FSTP float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73196eull));
wm<4>(c,0x8b4a7c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731974;}
case 0x731974:{ // FLD float ptr [EAX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731974ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731977;}
case 0x731977:{ // FADD float ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731977ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x73197a;}
case 0x73197a:{ // FSTP float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73197aull));
wm<4>(c,0x8b4a74,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731980;}
case 0x731980:{ // FLD float ptr [EAX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731980ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x731983;}
case 0x731983:{ // FSUB float ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731983ull));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6600)));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731986;}
case 0x731986:{ // FMUL float ptr [0x007d1ebc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731986ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ebc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x73198c;}
case 0x73198c:{ // FLD float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73198cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a74),4,0x0ull,4,10));
return 0x731992;}
case 0x731992:{ // FADD float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731992ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a38),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731998;}
case 0x731998:{ // FLD float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731998ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a38),4,0x0ull,4,10));
return 0x73199e;}
case 0x73199e:{ // FSUB float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73199eull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a74),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7319a4;}
case 0x7319a4:{ // FMUL float ptr [0x007d1ec0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319a4ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7319aa;}
case 0x7319aa:{ // FSTP float ptr [0x008b4af4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319aaull));
wm<4>(c,0x8b4af4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7319b0;}
case 0x7319b0:{ // FLD float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319b0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a70),4,0x0ull,4,10));
return 0x7319b6;}
case 0x7319b6:{ // FADD float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319b6ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a3c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7319bc;}
case 0x7319bc:{ // FSTP float ptr [0x008b4abc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319bcull));
wm<4>(c,0x8b4abc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7319c2;}
case 0x7319c2:{ // FLD float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319c2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a3c),4,0x0ull,4,10));
return 0x7319c8;}
case 0x7319c8:{ // FSUB float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319c8ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a70),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7319ce;}
case 0x7319ce:{ // FMUL float ptr [0x007d1ec4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319ceull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7319d4;}
case 0x7319d4:{ // FSTP float ptr [0x008b4af0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319d4ull));
wm<4>(c,0x8b4af0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7319da;}
case 0x7319da:{ // FLD float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319daull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a6c),4,0x0ull,4,10));
return 0x7319e0;}
case 0x7319e0:{ // FADD float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319e0ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a40),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x7319e6;}
case 0x7319e6:{ // FSTP float ptr [0x008b4ac0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319e6ull));
wm<4>(c,0x8b4ac0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7319ec;}
case 0x7319ec:{ // FLD float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319ecull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a40),4,0x0ull,4,10));
return 0x7319f2;}
case 0x7319f2:{ // FSUB float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319f2ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a6c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x7319f8;}
case 0x7319f8:{ // FMUL float ptr [0x007d1ec8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319f8ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x7319fe;}
case 0x7319fe:{ // FSTP float ptr [0x008b4aec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7319feull));
wm<4>(c,0x8b4aec,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a04;}
case 0x731a04:{ // FLD float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a04ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a68),4,0x0ull,4,10));
return 0x731a0a;}
case 0x731a0a:{ // FADD float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a0aull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a44),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731a10;}
case 0x731a10:{ // FSTP float ptr [0x008b4ac4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a10ull));
wm<4>(c,0x8b4ac4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a16;}
case 0x731a16:{ // FLD float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a16ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a44),4,0x0ull,4,10));
return 0x731a1c;}
case 0x731a1c:{ // FSUB float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a1cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a68),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731a22;}
case 0x731a22:{ // FMUL float ptr [0x007d1ecc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a22ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ecc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731a28;}
case 0x731a28:{ // FSTP float ptr [0x008b4ae8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a28ull));
wm<4>(c,0x8b4ae8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a2e;}
case 0x731a2e:{ // FLD float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a2eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a64),4,0x0ull,4,10));
return 0x731a34;}
case 0x731a34:{ // FADD float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a34ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a48),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731a3a;}
case 0x731a3a:{ // FSTP float ptr [0x008b4ac8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a3aull));
wm<4>(c,0x8b4ac8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a40;}
case 0x731a40:{ // FLD float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a48),4,0x0ull,4,10));
return 0x731a46;}
case 0x731a46:{ // FSUB float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a46ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a64),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731a4c;}
case 0x731a4c:{ // FMUL float ptr [0x007d1ed0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a4cull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731a52;}
case 0x731a52:{ // FSTP float ptr [0x008b4ae4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a52ull));
wm<4>(c,0x8b4ae4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a58;}
case 0x731a58:{ // FLD float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a58ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a60),4,0x0ull,4,10));
return 0x731a5e;}
case 0x731a5e:{ // FADD float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a5eull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a4c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731a64;}
case 0x731a64:{ // FSTP float ptr [0x008b4acc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a64ull));
wm<4>(c,0x8b4acc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a6a;}
case 0x731a6a:{ // FLD float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a6aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a4c),4,0x0ull,4,10));
return 0x731a70;}
case 0x731a70:{ // FSUB float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a70ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a60),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731a76;}
case 0x731a76:{ // FMUL float ptr [0x007d1ed4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a76ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731a7c;}
case 0x731a7c:{ // FSTP float ptr [0x008b4ae0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a7cull));
wm<4>(c,0x8b4ae0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a82;}
case 0x731a82:{ // FLD float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a82ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a5c),4,0x0ull,4,10));
return 0x731a88;}
case 0x731a88:{ // FADD float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a88ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a50),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731a8e;}
case 0x731a8e:{ // FSTP float ptr [0x008b4ad0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a8eull));
wm<4>(c,0x8b4ad0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731a94;}
case 0x731a94:{ // FLD float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a94ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a50),4,0x0ull,4,10));
return 0x731a9a;}
case 0x731a9a:{ // FSUB float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731a9aull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a5c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731aa0;}
case 0x731aa0:{ // FMUL float ptr [0x007d1ed8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731aa0ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731aa6;}
case 0x731aa6:{ // FSTP float ptr [0x008b4adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731aa6ull));
wm<4>(c,0x8b4adc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731aac;}
case 0x731aac:{ // FLD float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731aacull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a58),4,0x0ull,4,10));
return 0x731ab2;}
case 0x731ab2:{ // FADD float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ab2ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a54),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731ab8;}
case 0x731ab8:{ // FLD float ptr [0x007d1edc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ab8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1edc),4,0x0ull,4,10));
return 0x731abe;}
case 0x731abe:{ // FLD float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731abeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a54),4,0x0ull,4,10));
return 0x731ac4;}
case 0x731ac4:{ // FSUB float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ac4ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a58),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731aca;}
case 0x731aca:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731acaull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731acc;}
case 0x731acc:{ // FSTP float ptr [0x008b4ad8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731accull));
wm<4>(c,0x8b4ad8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ad2;}
case 0x731ad2:{ // FLD ST3
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x731ad4;}
case 0x731ad4:{ // FADD ST0,ST5
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ad4ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1150),10,10));
return 0x731ad6;}
case 0x731ad6:{ // FSTP float ptr [0x008b4af8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ad6ull));
wm<4>(c,0x8b4af8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731adc;}
case 0x731adc:{ // FLD ST4
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x731ade;}
case 0x731ade:{ // FSUB ST0,ST4
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731adeull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,r<10>(c,0x1140),10,10));
return 0x731ae0;}
case 0x731ae0:{ // FMUL float ptr [0x007d1ec0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ae0ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731ae6;}
case 0x731ae6:{ // FSTP float ptr [0x008b4b34]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ae6ull));
wm<4>(c,0x8b4b34,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731aec;}
case 0x731aec:{ // FLD float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731aecull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a7c),4,0x0ull,4,10));
return 0x731af2;}
case 0x731af2:{ // FADD float ptr [0x008b4ab0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731af2ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ab0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731af8;}
case 0x731af8:{ // FSTP float ptr [0x008b4afc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731af8ull));
wm<4>(c,0x8b4afc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731afe;}
case 0x731afe:{ // FLD float ptr [0x008b4ab0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731afeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ab0),4,0x0ull,4,10));
return 0x731b04;}
case 0x731b04:{ // FSUB float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b04ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a7c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731b0a;}
case 0x731b0a:{ // FMUL float ptr [0x007d1ec4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b0aull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731b10;}
case 0x731b10:{ // FSTP float ptr [0x008b4b30]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b10ull));
wm<4>(c,0x8b4b30,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b16;}
case 0x731b16:{ // FLD float ptr [0x008b4a80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b16ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a80),4,0x0ull,4,10));
return 0x731b1c;}
case 0x731b1c:{ // FADD float ptr [0x008b4aac]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b1cull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aac),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731b22;}
case 0x731b22:{ // FSTP float ptr [0x008b4b00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b22ull));
wm<4>(c,0x8b4b00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b28;}
case 0x731b28:{ // FLD float ptr [0x008b4aac]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b28ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aac),4,0x0ull,4,10));
return 0x731b2e;}
case 0x731b2e:{ // FSUB float ptr [0x008b4a80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b2eull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a80),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731b34;}
case 0x731b34:{ // FMUL float ptr [0x007d1ec8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b34ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ec8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731b3a;}
case 0x731b3a:{ // FSTP float ptr [0x008b4b2c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b3aull));
wm<4>(c,0x8b4b2c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b40;}
case 0x731b40:{ // FLD float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a84),4,0x0ull,4,10));
return 0x731b46;}
case 0x731b46:{ // FADD float ptr [0x008b4aa8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b46ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731b4c;}
case 0x731b4c:{ // FSTP float ptr [0x008b4b04]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b4cull));
wm<4>(c,0x8b4b04,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b52;}
case 0x731b52:{ // FLD float ptr [0x008b4aa8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b52ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa8),4,0x0ull,4,10));
return 0x731b58;}
case 0x731b58:{ // FSUB float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b58ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a84),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731b5e;}
case 0x731b5e:{ // FMUL float ptr [0x007d1ecc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b5eull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ecc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731b64;}
case 0x731b64:{ // FSTP float ptr [0x008b4b28]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b64ull));
wm<4>(c,0x8b4b28,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b6a;}
case 0x731b6a:{ // FLD float ptr [0x008b4a88]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b6aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a88),4,0x0ull,4,10));
return 0x731b70;}
case 0x731b70:{ // FADD float ptr [0x008b4aa4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b70ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731b76;}
case 0x731b76:{ // FSTP float ptr [0x008b4b08]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b76ull));
wm<4>(c,0x8b4b08,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b7c;}
case 0x731b7c:{ // FLD float ptr [0x008b4aa4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b7cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa4),4,0x0ull,4,10));
return 0x731b82;}
case 0x731b82:{ // FSUB float ptr [0x008b4a88]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b82ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a88),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731b88;}
case 0x731b88:{ // FMUL float ptr [0x007d1ed0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b88ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731b8e;}
case 0x731b8e:{ // FSTP float ptr [0x008b4b24]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b8eull));
wm<4>(c,0x8b4b24,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731b94;}
case 0x731b94:{ // FLD float ptr [0x008b4a8c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b94ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a8c),4,0x0ull,4,10));
return 0x731b9a;}
case 0x731b9a:{ // FADD float ptr [0x008b4aa0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731b9aull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731ba0;}
case 0x731ba0:{ // FSTP float ptr [0x008b4b0c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ba0ull));
wm<4>(c,0x8b4b0c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ba6;}
case 0x731ba6:{ // FLD float ptr [0x008b4aa0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ba6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aa0),4,0x0ull,4,10));
return 0x731bac;}
case 0x731bac:{ // FSUB float ptr [0x008b4a8c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bacull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a8c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731bb2;}
case 0x731bb2:{ // FMUL float ptr [0x007d1ed4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bb2ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731bb8;}
case 0x731bb8:{ // FSTP float ptr [0x008b4b20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bb8ull));
wm<4>(c,0x8b4b20,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731bbe;}
case 0x731bbe:{ // FLD float ptr [0x008b4a90]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bbeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a90),4,0x0ull,4,10));
return 0x731bc4;}
case 0x731bc4:{ // FADD float ptr [0x008b4a9c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bc4ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a9c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731bca;}
case 0x731bca:{ // FSTP float ptr [0x008b4b10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bcaull));
wm<4>(c,0x8b4b10,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731bd0;}
case 0x731bd0:{ // FLD float ptr [0x008b4a9c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bd0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a9c),4,0x0ull,4,10));
return 0x731bd6;}
case 0x731bd6:{ // FSUB float ptr [0x008b4a90]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bd6ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a90),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731bdc;}
case 0x731bdc:{ // FMUL float ptr [0x007d1ed8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bdcull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ed8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731be2;}
case 0x731be2:{ // FSTP float ptr [0x008b4b1c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731be2ull));
wm<4>(c,0x8b4b1c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731be8;}
case 0x731be8:{ // FLD float ptr [0x008b4a94]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731be8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a94),4,0x0ull,4,10));
return 0x731bee;}
case 0x731bee:{ // FADD float ptr [0x008b4a98]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731beeull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a98),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731bf4;}
case 0x731bf4:{ // FSTP float ptr [0x008b4b14]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bf4ull));
wm<4>(c,0x8b4b14,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731bfa;}
case 0x731bfa:{ // FLD float ptr [0x008b4a98]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731bfaull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a98),4,0x0ull,4,10));
return 0x731c00;}
case 0x731c00:{ // FSUB float ptr [0x008b4a94]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c00ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a94),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731c06;}
case 0x731c06:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c06ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731c08;}
case 0x731c08:{ // FSTP float ptr [0x008b4b18]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c08ull));
wm<4>(c,0x8b4b18,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c0e;}
case 0x731c0e:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c0eull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c10;}
case 0x731c10:{ // FLD ST0
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x731c12;}
case 0x731c12:{ // FADD ST0,ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c12ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731c14;}
case 0x731c14:{ // FSTP float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c14ull));
wm<4>(c,0x8b4a38,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c1a;}
case 0x731c1a:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x731c1c;}
case 0x731c1c:{ // FSUB ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c1cull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731c1e;}
case 0x731c1e:{ // FMUL float ptr [0x007d1ee0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c1eull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ee0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731c24;}
case 0x731c24:{ // FSTP float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c24ull));
wm<4>(c,0x8b4a54,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c2a;}
case 0x731c2a:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c2aull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c2c;}
case 0x731c2c:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c2cull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c2e;}
case 0x731c2e:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c2eull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c30;}
case 0x731c30:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c30ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c32;}
case 0x731c32:{ // FLD float ptr [0x008b4ad0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c32ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ad0),4,0x0ull,4,10));
return 0x731c38;}
case 0x731c38:{ // FADD float ptr [0x008b4abc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c38ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4abc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731c3e;}
case 0x731c3e:{ // FSTP float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c3eull));
wm<4>(c,0x8b4a3c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c44;}
case 0x731c44:{ // FLD float ptr [0x007d1ee4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c44ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ee4),4,0x0ull,4,10));
return 0x731c4a;}
case 0x731c4a:{ // FLD float ptr [0x008b4abc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c4aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4abc),4,0x0ull,4,10));
return 0x731c50;}
case 0x731c50:{ // FSUB float ptr [0x008b4ad0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c50ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ad0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731c56;}
case 0x731c56:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c56ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731c58;}
case 0x731c58:{ // FSTP float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c58ull));
wm<4>(c,0x8b4a50,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c5e;}
case 0x731c5e:{ // FLD float ptr [0x008b4acc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c5eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4acc),4,0x0ull,4,10));
return 0x731c64;}
case 0x731c64:{ // FADD float ptr [0x008b4ac0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c64ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731c6a;}
case 0x731c6a:{ // FSTP float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c6aull));
wm<4>(c,0x8b4a40,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c70;}
case 0x731c70:{ // FLD float ptr [0x007d1ee8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c70ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ee8),4,0x0ull,4,10));
return 0x731c76;}
case 0x731c76:{ // FLD float ptr [0x008b4ac0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c76ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac0),4,0x0ull,4,10));
return 0x731c7c;}
case 0x731c7c:{ // FSUB float ptr [0x008b4acc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c7cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4acc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731c82;}
case 0x731c82:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c82ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731c84;}
case 0x731c84:{ // FSTP float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c84ull));
wm<4>(c,0x8b4a4c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c8a;}
case 0x731c8a:{ // FLD float ptr [0x008b4ac8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c8aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac8),4,0x0ull,4,10));
return 0x731c90;}
case 0x731c90:{ // FADD float ptr [0x008b4ac4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c90ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731c96;}
case 0x731c96:{ // FSTP float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c96ull));
wm<4>(c,0x8b4a44,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731c9c;}
case 0x731c9c:{ // FLD float ptr [0x007d1eec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731c9cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eec),4,0x0ull,4,10));
return 0x731ca2;}
case 0x731ca2:{ // FLD float ptr [0x008b4ac4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ca2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac4),4,0x0ull,4,10));
return 0x731ca8;}
case 0x731ca8:{ // FSUB float ptr [0x008b4ac8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ca8ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ac8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731cae;}
case 0x731cae:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731caeull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731cb0;}
case 0x731cb0:{ // FSTP float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cb0ull));
wm<4>(c,0x8b4a48,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731cb6;}
case 0x731cb6:{ // FLD float ptr [0x008b4ad8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cb6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ad8),4,0x0ull,4,10));
return 0x731cbc;}
case 0x731cbc:{ // FADD float ptr [0x008b4af4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cbcull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731cc2;}
case 0x731cc2:{ // FSTP float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cc2ull));
wm<4>(c,0x8b4a58,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731cc8;}
case 0x731cc8:{ // FLD float ptr [0x007d1ee0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cc8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ee0),4,0x0ull,4,10));
return 0x731cce;}
case 0x731cce:{ // FLD float ptr [0x008b4af4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cceull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af4),4,0x0ull,4,10));
return 0x731cd4;}
case 0x731cd4:{ // FSUB float ptr [0x008b4ad8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cd4ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ad8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731cda;}
case 0x731cda:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cdaull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731cdc;}
case 0x731cdc:{ // FSTP float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cdcull));
wm<4>(c,0x8b4a74,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ce2;}
case 0x731ce2:{ // FLD float ptr [0x008b4adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ce2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4adc),4,0x0ull,4,10));
return 0x731ce8;}
case 0x731ce8:{ // FADD float ptr [0x008b4af0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ce8ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731cee;}
case 0x731cee:{ // FSTP float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ceeull));
wm<4>(c,0x8b4a5c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731cf4;}
case 0x731cf4:{ // FLD float ptr [0x008b4af0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cf4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af0),4,0x0ull,4,10));
return 0x731cfa;}
case 0x731cfa:{ // FSUB float ptr [0x008b4adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731cfaull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4adc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731d00;}
case 0x731d00:{ // FMUL ST4
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d00ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1140),10,10));
return 0x731d02;}
case 0x731d02:{ // FSTP float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d02ull));
wm<4>(c,0x8b4a70,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d08;}
case 0x731d08:{ // FLD float ptr [0x008b4ae0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d08ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae0),4,0x0ull,4,10));
return 0x731d0e;}
case 0x731d0e:{ // FADD float ptr [0x008b4aec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d0eull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aec),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731d14;}
case 0x731d14:{ // FSTP float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d14ull));
wm<4>(c,0x8b4a60,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d1a;}
case 0x731d1a:{ // FLD float ptr [0x008b4aec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d1aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4aec),4,0x0ull,4,10));
return 0x731d20;}
case 0x731d20:{ // FSUB float ptr [0x008b4ae0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d20ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731d26;}
case 0x731d26:{ // FMUL ST3
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d26ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1130),10,10));
return 0x731d28;}
case 0x731d28:{ // FSTP float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d28ull));
wm<4>(c,0x8b4a6c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d2e;}
case 0x731d2e:{ // FLD float ptr [0x008b4ae4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d2eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae4),4,0x0ull,4,10));
return 0x731d34;}
case 0x731d34:{ // FADD float ptr [0x008b4ae8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d34ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731d3a;}
case 0x731d3a:{ // FSTP float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d3aull));
wm<4>(c,0x8b4a64,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d40;}
case 0x731d40:{ // FLD float ptr [0x008b4ae8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae8),4,0x0ull,4,10));
return 0x731d46;}
case 0x731d46:{ // FSUB float ptr [0x008b4ae4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d46ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4ae4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731d4c;}
case 0x731d4c:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d4cull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731d4e;}
case 0x731d4e:{ // FSTP float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d4eull));
wm<4>(c,0x8b4a68,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d54;}
case 0x731d54:{ // FLD float ptr [0x008b4b14]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d54ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b14),4,0x0ull,4,10));
return 0x731d5a;}
case 0x731d5a:{ // FADD float ptr [0x008b4af8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d5aull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731d60;}
case 0x731d60:{ // FSTP float ptr [0x008b4a78]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d60ull));
wm<4>(c,0x8b4a78,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d66;}
case 0x731d66:{ // FLD float ptr [0x008b4af8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d66ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4af8),4,0x0ull,4,10));
return 0x731d6c;}
case 0x731d6c:{ // FSUB float ptr [0x008b4b14]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d6cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b14),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731d72;}
case 0x731d72:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d72ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731d74;}
case 0x731d74:{ // FSTP float ptr [0x008b4a94]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d74ull));
wm<4>(c,0x8b4a94,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d7a;}
case 0x731d7a:{ // FLD float ptr [0x008b4b10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d7aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b10),4,0x0ull,4,10));
return 0x731d80;}
case 0x731d80:{ // FADD float ptr [0x008b4afc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d80ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4afc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731d86;}
case 0x731d86:{ // FSTP float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d86ull));
wm<4>(c,0x8b4a7c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731d8c;}
case 0x731d8c:{ // FLD float ptr [0x008b4afc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d8cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4afc),4,0x0ull,4,10));
return 0x731d92;}
case 0x731d92:{ // FSUB float ptr [0x008b4b10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d92ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b10),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731d98;}
case 0x731d98:{ // FMUL ST4
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d98ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1140),10,10));
return 0x731d9a;}
case 0x731d9a:{ // FSTP float ptr [0x008b4a90]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731d9aull));
wm<4>(c,0x8b4a90,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731da0;}
case 0x731da0:{ // FLD float ptr [0x008b4b0c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731da0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b0c),4,0x0ull,4,10));
return 0x731da6;}
case 0x731da6:{ // FADD float ptr [0x008b4b00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731da6ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b00),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731dac;}
case 0x731dac:{ // FSTP float ptr [0x008b4a80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dacull));
wm<4>(c,0x8b4a80,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731db2;}
case 0x731db2:{ // FLD float ptr [0x008b4b00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731db2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b00),4,0x0ull,4,10));
return 0x731db8;}
case 0x731db8:{ // FSUB float ptr [0x008b4b0c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731db8ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b0c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731dbe;}
case 0x731dbe:{ // FMUL ST3
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dbeull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1130),10,10));
return 0x731dc0;}
case 0x731dc0:{ // FSTP float ptr [0x008b4a8c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dc0ull));
wm<4>(c,0x8b4a8c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731dc6;}
case 0x731dc6:{ // FLD float ptr [0x008b4b08]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dc6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b08),4,0x0ull,4,10));
return 0x731dcc;}
case 0x731dcc:{ // FADD float ptr [0x008b4b04]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dccull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b04),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731dd2;}
case 0x731dd2:{ // FSTP float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dd2ull));
wm<4>(c,0x8b4a84,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731dd8;}
case 0x731dd8:{ // FLD float ptr [0x008b4b04]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dd8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b04),4,0x0ull,4,10));
return 0x731dde;}
case 0x731dde:{ // FSUB float ptr [0x008b4b08]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ddeull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b08),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731de4;}
case 0x731de4:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731de4ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731de6;}
case 0x731de6:{ // FSTP float ptr [0x008b4a88]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731de6ull));
wm<4>(c,0x8b4a88,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731dec;}
case 0x731dec:{ // FLD float ptr [0x008b4b18]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731decull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b18),4,0x0ull,4,10));
return 0x731df2;}
case 0x731df2:{ // FADD float ptr [0x008b4b34]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731df2ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b34),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731df8;}
case 0x731df8:{ // FSTP float ptr [0x008b4a98]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731df8ull));
wm<4>(c,0x8b4a98,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731dfe;}
case 0x731dfe:{ // FLD float ptr [0x008b4b34]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731dfeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b34),4,0x0ull,4,10));
return 0x731e04;}
case 0x731e04:{ // FSUB float ptr [0x008b4b18]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e04ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b18),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731e0a;}
case 0x731e0a:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e0aull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731e0c;}
case 0x731e0c:{ // FSTP float ptr [0x008b4ab4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e0cull));
wm<4>(c,0x8b4ab4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e12;}
case 0x731e12:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e12ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e14;}
case 0x731e14:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e14ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e16;}
case 0x731e16:{ // FLD float ptr [0x008b4b1c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e16ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b1c),4,0x0ull,4,10));
return 0x731e1c;}
case 0x731e1c:{ // FADD float ptr [0x008b4b30]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e1cull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b30),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731e22;}
case 0x731e22:{ // FSTP float ptr [0x008b4a9c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e22ull));
wm<4>(c,0x8b4a9c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e28;}
case 0x731e28:{ // FLD float ptr [0x008b4b30]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e28ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b30),4,0x0ull,4,10));
return 0x731e2e;}
case 0x731e2e:{ // FSUB float ptr [0x008b4b1c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e2eull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b1c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731e34;}
case 0x731e34:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e34ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731e36;}
case 0x731e36:{ // FSTP float ptr [0x008b4ab0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e36ull));
wm<4>(c,0x8b4ab0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e3c;}
case 0x731e3c:{ // FLD float ptr [0x008b4b20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e3cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b20),4,0x0ull,4,10));
return 0x731e42;}
case 0x731e42:{ // FADD float ptr [0x008b4b2c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e42ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b2c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731e48;}
case 0x731e48:{ // FSTP float ptr [0x008b4aa0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e48ull));
wm<4>(c,0x8b4aa0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e4e;}
case 0x731e4e:{ // FLD float ptr [0x008b4b2c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e4eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b2c),4,0x0ull,4,10));
return 0x731e54;}
case 0x731e54:{ // FSUB float ptr [0x008b4b20]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e54ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b20),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731e5a;}
case 0x731e5a:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e5aull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731e5c;}
case 0x731e5c:{ // FSTP ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e5cull));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e5e;}
case 0x731e5e:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e5eull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e60;}
case 0x731e60:{ // FLD float ptr [0x008b4b24]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e60ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b24),4,0x0ull,4,10));
return 0x731e66;}
case 0x731e66:{ // FADD float ptr [0x008b4b28]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e66ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b28),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731e6c;}
case 0x731e6c:{ // FSTP float ptr [0x008b4aa4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e6cull));
wm<4>(c,0x8b4aa4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e72;}
case 0x731e72:{ // FLD float ptr [0x008b4b28]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e72ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b28),4,0x0ull,4,10));
return 0x731e78;}
case 0x731e78:{ // FSUB float ptr [0x008b4b24]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e78ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4b24),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731e7e;}
case 0x731e7e:{ // FMUL float ptr [0x007d1eec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e7eull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d1eec),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x731e84;}
case 0x731e84:{ // FSTP float ptr [0x008b4aa8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e84ull));
wm<4>(c,0x8b4aa8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e8a;}
case 0x731e8a:{ // FLD float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e8aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a44),4,0x0ull,4,10));
return 0x731e90;}
case 0x731e90:{ // FADD float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e90ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a38),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731e96;}
case 0x731e96:{ // FSTP float ptr [0x008b4ab8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e96ull));
wm<4>(c,0x8b4ab8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731e9c;}
case 0x731e9c:{ // FLD float ptr [0x007d1ef0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731e9cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ef0),4,0x0ull,4,10));
return 0x731ea2;}
case 0x731ea2:{ // FLD float ptr [0x008b4a38]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ea2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a38),4,0x0ull,4,10));
return 0x731ea8;}
case 0x731ea8:{ // FSUB float ptr [0x008b4a44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ea8ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a44),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731eae;}
case 0x731eae:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731eaeull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731eb0;}
case 0x731eb0:{ // FSTP float ptr [0x008b4ac4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731eb0ull));
wm<4>(c,0x8b4ac4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731eb6;}
case 0x731eb6:{ // FLD float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731eb6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a40),4,0x0ull,4,10));
return 0x731ebc;}
case 0x731ebc:{ // FADD float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ebcull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a3c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731ec2;}
case 0x731ec2:{ // FSTP float ptr [0x008b4abc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ec2ull));
wm<4>(c,0x8b4abc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ec8;}
case 0x731ec8:{ // FLD float ptr [0x007d1ef4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ec8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7d1ef4),4,0x0ull,4,10));
return 0x731ece;}
case 0x731ece:{ // FLD float ptr [0x008b4a3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731eceull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a3c),4,0x0ull,4,10));
return 0x731ed4;}
case 0x731ed4:{ // FSUB float ptr [0x008b4a40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ed4ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a40),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731eda;}
case 0x731eda:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731edaull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731edc;}
case 0x731edc:{ // FSTP float ptr [0x008b4ac0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731edcull));
wm<4>(c,0x8b4ac0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ee2;}
case 0x731ee2:{ // FLD float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ee2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a54),4,0x0ull,4,10));
return 0x731ee8;}
case 0x731ee8:{ // FADD float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ee8ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a48),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731eee;}
case 0x731eee:{ // FSTP float ptr [0x008b4ac8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731eeeull));
wm<4>(c,0x8b4ac8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ef4;}
case 0x731ef4:{ // FLD float ptr [0x008b4a54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ef4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a54),4,0x0ull,4,10));
return 0x731efa;}
case 0x731efa:{ // FSUB float ptr [0x008b4a48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731efaull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a48),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731f00;}
case 0x731f00:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f00ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731f02;}
case 0x731f02:{ // FSTP float ptr [0x008b4ad4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f02ull));
wm<4>(c,0x8b4ad4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f08;}
case 0x731f08:{ // FLD float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f08ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a50),4,0x0ull,4,10));
return 0x731f0e;}
case 0x731f0e:{ // FADD float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f0eull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a4c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731f14;}
case 0x731f14:{ // FSTP float ptr [0x008b4acc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f14ull));
wm<4>(c,0x8b4acc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f1a;}
case 0x731f1a:{ // FLD float ptr [0x008b4a50]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f1aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a50),4,0x0ull,4,10));
return 0x731f20;}
case 0x731f20:{ // FSUB float ptr [0x008b4a4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f20ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a4c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731f26;}
case 0x731f26:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f26ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731f28;}
case 0x731f28:{ // FSTP float ptr [0x008b4ad0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f28ull));
wm<4>(c,0x8b4ad0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f2e;}
case 0x731f2e:{ // FLD float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f2eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a64),4,0x0ull,4,10));
return 0x731f34;}
case 0x731f34:{ // FADD float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f34ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a58),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731f3a;}
case 0x731f3a:{ // FSTP float ptr [0x008b4ad8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f3aull));
wm<4>(c,0x8b4ad8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f40;}
case 0x731f40:{ // FLD float ptr [0x008b4a58]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a58),4,0x0ull,4,10));
return 0x731f46;}
case 0x731f46:{ // FSUB float ptr [0x008b4a64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f46ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a64),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731f4c;}
case 0x731f4c:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f4cull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731f4e;}
case 0x731f4e:{ // FSTP float ptr [0x008b4ae4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f4eull));
wm<4>(c,0x8b4ae4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f54;}
case 0x731f54:{ // FLD float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f54ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a60),4,0x0ull,4,10));
return 0x731f5a;}
case 0x731f5a:{ // FADD float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f5aull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a5c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731f60;}
case 0x731f60:{ // FSTP float ptr [0x008b4adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f60ull));
wm<4>(c,0x8b4adc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f66;}
case 0x731f66:{ // FLD float ptr [0x008b4a5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f66ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a5c),4,0x0ull,4,10));
return 0x731f6c;}
case 0x731f6c:{ // FSUB float ptr [0x008b4a60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f6cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a60),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731f72;}
case 0x731f72:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f72ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731f74;}
case 0x731f74:{ // FSTP float ptr [0x008b4ae0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f74ull));
wm<4>(c,0x8b4ae0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f7a;}
case 0x731f7a:{ // FLD float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f7aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a74),4,0x0ull,4,10));
return 0x731f80;}
case 0x731f80:{ // FADD float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f80ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a68),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731f86;}
case 0x731f86:{ // FSTP float ptr [0x008b4ae8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f86ull));
wm<4>(c,0x8b4ae8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731f8c;}
case 0x731f8c:{ // FLD float ptr [0x008b4a74]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f8cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a74),4,0x0ull,4,10));
return 0x731f92;}
case 0x731f92:{ // FSUB float ptr [0x008b4a68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f92ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a68),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731f98;}
case 0x731f98:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f98ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731f9a;}
case 0x731f9a:{ // FSTP float ptr [0x008b4af4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731f9aull));
wm<4>(c,0x8b4af4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731fa0;}
case 0x731fa0:{ // FLD float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fa0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a70),4,0x0ull,4,10));
return 0x731fa6;}
case 0x731fa6:{ // FADD float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fa6ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a6c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731fac;}
case 0x731fac:{ // FSTP float ptr [0x008b4aec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731facull));
wm<4>(c,0x8b4aec,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731fb2;}
case 0x731fb2:{ // FLD float ptr [0x008b4a70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fb2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a70),4,0x0ull,4,10));
return 0x731fb8;}
case 0x731fb8:{ // FSUB float ptr [0x008b4a6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fb8ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a6c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731fbe;}
case 0x731fbe:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fbeull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x731fc0;}
case 0x731fc0:{ // FSTP float ptr [0x008b4af0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fc0ull));
wm<4>(c,0x8b4af0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731fc6;}
case 0x731fc6:{ // FLD float ptr [0x008b4a78]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fc6ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a78),4,0x0ull,4,10));
return 0x731fcc;}
case 0x731fcc:{ // FADD float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fccull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a84),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731fd2;}
case 0x731fd2:{ // FSTP float ptr [0x008b4af8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fd2ull));
wm<4>(c,0x8b4af8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731fd8;}
case 0x731fd8:{ // FLD float ptr [0x008b4a78]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fd8ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a78),4,0x0ull,4,10));
return 0x731fde;}
case 0x731fde:{ // FSUB float ptr [0x008b4a84]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fdeull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a84),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x731fe4;}
case 0x731fe4:{ // FMUL ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fe4ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1120),10,10));
return 0x731fe6;}
case 0x731fe6:{ // FSTP float ptr [0x008b4b04]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fe6ull));
wm<4>(c,0x8b4b04,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731fec;}
case 0x731fec:{ // FLD float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731fecull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a7c),4,0x0ull,4,10));
return 0x731ff2;}
case 0x731ff2:{ // FADD float ptr [0x008b4a80]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ff2ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a80),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x731ff8;}
case 0x731ff8:{ // FSTP float ptr [0x008b4afc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ff8ull));
wm<4>(c,0x8b4afc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x731ffe;}
case 0x731ffe:{ // FLD float ptr [0x008b4a7c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x731ffeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8b4a7c),4,0x0ull,4,10));
return 0x732004;}
default:missing_instruction(c.pc);}}
}
