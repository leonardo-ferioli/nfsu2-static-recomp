#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_691(Cpu& c){switch(c.pc){
case 0x691001:{ // MOVQ MM1,qword ptr [0x007b7158]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7158)));
return 0x691008;}
case 0x691008:{ // MOVQ MM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69100b;}
case 0x69100b:{ // MOVD MM5,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69100f;}
case 0x69100f:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691012;}
case 0x691012:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691016;}
case 0x691016:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x691019;}
case 0x691019:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69101c;}
case 0x69101c:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69101f;}
case 0x69101f:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x691023;}
case 0x691023:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691027;}
case 0x691027:{ // PFSUB MM6,MM3
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1130)}));
return 0x69102b;}
case 0x69102b:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69102f;}
case 0x69102f:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691033;}
case 0x691033:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691037;}
case 0x691037:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x69103b;}
case 0x69103b:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69103e;}
case 0x69103e:{ // PFMUL MM6,MM5
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691042;}
case 0x691042:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691045;}
case 0x691045:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x691048;}
case 0x691048:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69104b;}
case 0x69104b:{ // MOVQ qword ptr [EAX + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69104f;}
case 0x69104f:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691053;}
case 0x691053:{ // MOVQ qword ptr [EAX + 0x38],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691057;}
case 0x691057:{ // JMP 0x006910c9
return 0x6910c9;
return 0x691059;}
case 0x691059:{ // MOVQ MM1,qword ptr [0x007b7138]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7138)));
return 0x691060;}
case 0x691060:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691063;}
case 0x691063:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691067;}
case 0x691067:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x69106a;}
case 0x69106a:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69106d;}
case 0x69106d:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x691070;}
case 0x691070:{ // MOVQ MM0,MM5
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x691073;}
case 0x691073:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691076;}
case 0x691076:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691079;}
case 0x691079:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69107d;}
case 0x69107d:{ // MOVQ qword ptr [EAX + 0x10],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691081;}
case 0x691081:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691085;}
case 0x691085:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691089;}
case 0x691089:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69108d;}
case 0x69108d:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691091;}
case 0x691091:{ // MOVQ qword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691095;}
case 0x691095:{ // JMP 0x006910c9
return 0x6910c9;
return 0x691097;}
case 0x691097:{ // MOVD MM1,dword ptr [0x007b7148]
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(m<4>(c,0x7b7148)));
return 0x69109e;}
case 0x69109e:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6910a1;}
case 0x6910a1:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6910a4;}
case 0x6910a4:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6910a7;}
case 0x6910a7:{ // PUNPCKLDQ MM2,MM1
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6910aa;}
case 0x6910aa:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6910ad;}
case 0x6910ad:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910b1;}
case 0x6910b1:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910b5;}
case 0x6910b5:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910b9;}
case 0x6910b9:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910bd;}
case 0x6910bd:{ // MOVQ qword ptr [EAX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910c1;}
case 0x6910c1:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910c5;}
case 0x6910c5:{ // MOVQ qword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6910c9;}
case 0x6910c9:{ // MOV ECX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6910cc;}
case 0x6910cc:{ // MOV EDX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6910cf;}
case 0x6910cf:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6910d1;}
case 0x6910d1:{ // JZ 0x0069159c
if(r<1>(c,0x206)){return 0x69159c;}
return 0x6910d7;}
case 0x6910d7:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6910da;}
case 0x6910da:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6910de;}
case 0x6910de:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6910e1;}
case 0x6910e1:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6910e4;}
case 0x6910e4:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x6910e8;}
case 0x6910e8:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6910eb;}
case 0x6910eb:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6910ee;}
case 0x6910ee:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x6910f2;}
case 0x6910f2:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6910f5;}
case 0x6910f5:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6910f8;}
case 0x6910f8:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6910fb;}
case 0x6910fb:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x6910ff;}
case 0x6910ff:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691102;}
case 0x691102:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691105;}
case 0x691105:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691109;}
case 0x691109:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69110c;}
case 0x69110c:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x691110;}
case 0x691110:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x691114;}
case 0x691114:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x691117;}
case 0x691117:{ // PFMUL MM6,MM4
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x69111b;}
case 0x69111b:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69111e;}
case 0x69111e:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691121;}
case 0x691121:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691124;}
case 0x691124:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x691127;}
case 0x691127:{ // MOVQ qword ptr [ESP + 0x70],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69112c;}
case 0x69112c:{ // PFADD MM7,MM3
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691130;}
case 0x691130:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x691134;}
case 0x691134:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x691137;}
case 0x691137:{ // PUNPCKHDQ MM6,MM5
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x69113a;}
case 0x69113a:{ // PFSUBR MM3,qword ptr [0x007b7158]
wr<8>(c,0x1130,user_op(c,524528,{r<8>(c,0x1130),m<8>(c,0x7b7158)}));
return 0x691142;}
case 0x691142:{ // PFSUBR MM7,qword ptr [0x007b7158]
wr<8>(c,0x1170,user_op(c,524528,{r<8>(c,0x1170),m<8>(c,0x7b7158)}));
return 0x69114a;}
case 0x69114a:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69114d;}
case 0x69114d:{ // PFADD MM1,MM6
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x691151;}
case 0x691151:{ // MOVQ qword ptr [ESP + 0x68],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691156;}
case 0x691156:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x69115a;}
case 0x69115a:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69115d;}
case 0x69115d:{ // PFADD MM2,MM5
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x691161;}
case 0x691161:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x691165;}
case 0x691165:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x691168;}
case 0x691168:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69116b;}
case 0x69116b:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69116e;}
case 0x69116e:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691171;}
case 0x691171:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691174;}
case 0x691174:{ // MOVQ qword ptr [ESP + 0x58],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691179;}
case 0x691179:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69117c;}
case 0x69117c:{ // PUNPCKLDQ MM0,dword ptr [0x007b7158]
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x691183;}
case 0x691183:{ // MOVQ qword ptr [ESP + 0x48],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691188;}
case 0x691188:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x69118b;}
case 0x69118b:{ // MOVQ qword ptr [ESP + 0x50],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691190;}
case 0x691190:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691193;}
case 0x691193:{ // PUNPCKLDQ MM6,MM3
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x691196;}
case 0x691196:{ // MOVQ qword ptr [ESP + 0x40],MM7
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69119b;}
case 0x69119b:{ // MOVQ qword ptr [ESP + 0x60],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6911a0;}
case 0x6911a0:{ // MOVQ qword ptr [ESP + 0x78],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6911a5;}
case 0x6911a5:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6911a7;}
case 0x6911a7:{ // JZ 0x006913c6
if(r<1>(c,0x206)){return 0x6913c6;}
return 0x6911ad;}
case 0x6911ad:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911b1;}
case 0x6911b1:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6911b5;}
case 0x6911b5:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911b8;}
case 0x6911b8:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6911bc;}
case 0x6911bc:{ // PFSUB MM0,MM2
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6911c0;}
case 0x6911c0:{ // PFSUB MM1,MM3
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6911c4;}
case 0x6911c4:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6911c8;}
case 0x6911c8:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6911cc;}
case 0x6911cc:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911cf;}
case 0x6911cf:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911d3;}
case 0x6911d3:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911d8;}
case 0x6911d8:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6911db;}
case 0x6911db:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911e0;}
case 0x6911e0:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6911e3;}
case 0x6911e3:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6911e8;}
case 0x6911e8:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6911eb;}
case 0x6911eb:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6911ee;}
case 0x6911ee:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6911f2;}
case 0x6911f2:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6911f5;}
case 0x6911f5:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6911fb;}
case 0x6911fb:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691200;}
case 0x691200:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691204;}
case 0x691204:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691207;}
case 0x691207:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69120d;}
case 0x69120d:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691211;}
case 0x691211:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691215;}
case 0x691215:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691219;}
case 0x691219:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69121f;}
case 0x69121f:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691223;}
case 0x691223:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691227;}
case 0x691227:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69122b;}
case 0x69122b:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691231;}
case 0x691231:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691235;}
case 0x691235:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691239;}
case 0x691239:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69123d;}
case 0x69123d:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691241;}
case 0x691241:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691244;}
case 0x691244:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691249;}
case 0x691249:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69124d;}
case 0x69124d:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691250;}
case 0x691250:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691255;}
case 0x691255:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691258;}
case 0x691258:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69125d;}
case 0x69125d:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691260;}
case 0x691260:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691263;}
case 0x691263:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691267;}
case 0x691267:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69126a;}
case 0x69126a:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691270;}
case 0x691270:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691275;}
case 0x691275:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691279;}
case 0x691279:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69127c;}
case 0x69127c:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691282;}
case 0x691282:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691286;}
case 0x691286:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69128a;}
case 0x69128a:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69128e;}
case 0x69128e:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691294;}
case 0x691294:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691298;}
case 0x691298:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69129c;}
case 0x69129c:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6912a0;}
case 0x6912a0:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6912a6;}
case 0x6912a6:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6912aa;}
case 0x6912aa:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912ae;}
case 0x6912ae:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6912b2;}
case 0x6912b2:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912b6;}
case 0x6912b6:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6912ba;}
case 0x6912ba:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912bf;}
case 0x6912bf:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6912c3;}
case 0x6912c3:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6912c6;}
case 0x6912c6:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912cb;}
case 0x6912cb:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6912ce;}
case 0x6912ce:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912d3;}
case 0x6912d3:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6912d6;}
case 0x6912d6:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6912d9;}
case 0x6912d9:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6912dd;}
case 0x6912dd:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6912e0;}
case 0x6912e0:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6912e6;}
case 0x6912e6:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6912eb;}
case 0x6912eb:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6912ef;}
case 0x6912ef:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6912f2;}
case 0x6912f2:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6912f8;}
case 0x6912f8:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6912fc;}
case 0x6912fc:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691300;}
case 0x691300:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691304;}
case 0x691304:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69130a;}
case 0x69130a:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69130e;}
case 0x69130e:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691312;}
case 0x691312:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691316;}
case 0x691316:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69131c;}
case 0x69131c:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691320;}
case 0x691320:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691324;}
case 0x691324:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691328;}
case 0x691328:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69132c;}
case 0x69132c:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691330;}
case 0x691330:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691335;}
case 0x691335:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691339;}
case 0x691339:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69133c;}
case 0x69133c:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691341;}
case 0x691341:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691344;}
case 0x691344:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691349;}
case 0x691349:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69134c;}
case 0x69134c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69134f;}
case 0x69134f:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691353;}
case 0x691353:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691356;}
case 0x691356:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69135c;}
case 0x69135c:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691361;}
case 0x691361:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691365;}
case 0x691365:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691368;}
case 0x691368:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69136e;}
case 0x69136e:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691372;}
case 0x691372:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691376;}
case 0x691376:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69137a;}
case 0x69137a:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691380;}
case 0x691380:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691384;}
case 0x691384:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691388;}
case 0x691388:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69138c;}
case 0x69138c:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691392;}
case 0x691392:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691396;}
case 0x691396:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69139a;}
case 0x69139a:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69139e;}
case 0x69139e:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6913a2;}
case 0x6913a2:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913a6;}
case 0x6913a6:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6913aa;}
case 0x6913aa:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913ad;}
case 0x6913ad:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6913b1;}
case 0x6913b1:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6913b5;}
case 0x6913b5:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6913b9;}
case 0x6913b9:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6913bd;}
case 0x6913bd:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6913c1;}
case 0x6913c1:{ // JMP 0x0069159c
return 0x69159c;
return 0x6913c6;}
case 0x6913c6:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913c9;}
case 0x6913c9:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913cd;}
case 0x6913cd:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913d2;}
case 0x6913d2:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6913d5;}
case 0x6913d5:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913da;}
case 0x6913da:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6913dd;}
case 0x6913dd:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913e2;}
case 0x6913e2:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6913e5;}
case 0x6913e5:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6913e8;}
case 0x6913e8:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6913ec;}
case 0x6913ec:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6913ef;}
case 0x6913ef:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6913f5;}
case 0x6913f5:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6913fa;}
case 0x6913fa:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6913fe;}
case 0x6913fe:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691401;}
case 0x691401:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691407;}
case 0x691407:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69140b;}
case 0x69140b:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69140f;}
case 0x69140f:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691413;}
case 0x691413:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691419;}
case 0x691419:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69141d;}
case 0x69141d:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691421;}
case 0x691421:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691425;}
case 0x691425:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69142b;}
case 0x69142b:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69142f;}
case 0x69142f:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691433;}
case 0x691433:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691437;}
case 0x691437:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69143b;}
case 0x69143b:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69143e;}
case 0x69143e:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691443;}
case 0x691443:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691447;}
case 0x691447:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69144a;}
case 0x69144a:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69144f;}
case 0x69144f:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691452;}
case 0x691452:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691457;}
case 0x691457:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69145a;}
case 0x69145a:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69145d;}
case 0x69145d:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691461;}
case 0x691461:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691464;}
case 0x691464:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69146a;}
case 0x69146a:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69146f;}
case 0x69146f:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691473;}
case 0x691473:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691476;}
case 0x691476:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69147c;}
case 0x69147c:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691480;}
case 0x691480:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691484;}
case 0x691484:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691488;}
case 0x691488:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69148e;}
case 0x69148e:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691492;}
case 0x691492:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691496;}
case 0x691496:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69149a;}
case 0x69149a:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6914a0;}
case 0x6914a0:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6914a4;}
case 0x6914a4:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914a8;}
case 0x6914a8:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6914ac;}
case 0x6914ac:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914b0;}
case 0x6914b0:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6914b4;}
case 0x6914b4:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914b9;}
case 0x6914b9:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6914bd;}
case 0x6914bd:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6914c0;}
case 0x6914c0:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914c5;}
case 0x6914c5:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6914c8;}
case 0x6914c8:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914cd;}
case 0x6914cd:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6914d0;}
case 0x6914d0:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6914d3;}
case 0x6914d3:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6914d7;}
case 0x6914d7:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6914da;}
case 0x6914da:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6914e0;}
case 0x6914e0:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6914e5;}
case 0x6914e5:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6914e9;}
case 0x6914e9:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6914ec;}
case 0x6914ec:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6914f2;}
case 0x6914f2:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6914f6;}
case 0x6914f6:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6914fa;}
case 0x6914fa:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6914fe;}
case 0x6914fe:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691504;}
case 0x691504:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691508;}
case 0x691508:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69150c;}
case 0x69150c:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691510;}
case 0x691510:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691516;}
case 0x691516:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69151a;}
case 0x69151a:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69151e;}
case 0x69151e:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691522;}
case 0x691522:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691526;}
case 0x691526:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69152a;}
case 0x69152a:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69152f;}
case 0x69152f:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691533;}
case 0x691533:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691536;}
case 0x691536:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69153b;}
case 0x69153b:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69153e;}
case 0x69153e:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691543;}
case 0x691543:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691546;}
case 0x691546:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691549;}
case 0x691549:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69154d;}
case 0x69154d:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691550;}
case 0x691550:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691556;}
case 0x691556:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69155b;}
case 0x69155b:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69155f;}
case 0x69155f:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691562;}
case 0x691562:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691568;}
case 0x691568:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69156c;}
case 0x69156c:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691570;}
case 0x691570:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691574;}
case 0x691574:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69157a;}
case 0x69157a:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69157e;}
case 0x69157e:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691582;}
case 0x691582:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691586;}
case 0x691586:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69158c;}
case 0x69158c:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691590;}
case 0x691590:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691594;}
case 0x691594:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691598;}
case 0x691598:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69159c;}
case 0x69159c:{ // MOV ECX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69159f;}
case 0x69159f:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6915a1;}
case 0x6915a1:{ // JZ 0x006915c2
if(r<1>(c,0x206)){return 0x6915c2;}
return 0x6915a3;}
case 0x6915a3:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6915a7;}
case 0x6915a7:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6915ab;}
case 0x6915ab:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6915ae;}
case 0x6915ae:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6915b2;}
case 0x6915b2:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6915b6;}
case 0x6915b6:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6915ba;}
case 0x6915ba:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6915be;}
case 0x6915be:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6915c2;}
case 0x6915c2:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x6915c4;}
case 0x6915c4:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6915c5;}
case 0x6915c5:{ // FEMMS
user_op(c,251,{});
return 0x6915c7;}
case 0x6915c7:{ // RET 0x1c
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
return uint32_t(r<4>(c,0x284));
return 0x6915ca;}
case 0x6915ca:{ // SUB ESP,0x14
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6915cd;}
case 0x6915cd:{ // MOV dword ptr [ESP + 0x10],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6915d1;}
case 0x6915d1:{ // LEA EBP,[ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x6915d5;}
case 0x6915d5:{ // MOVQ MM0,qword ptr [0x007b71e8]
wr<8>(c,0x1100,eval<Op::COPY,8,8>(m<8>(c,0x7b71e8)));
return 0x6915dc;}
case 0x6915dc:{ // SUB ESP,0x20
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6915df;}
case 0x6915df:{ // MOV dword ptr [ESP + 0x4],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6915e3;}
case 0x6915e3:{ // MOV dword ptr [ESP],ESI
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x6915e6;}
case 0x6915e6:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6915e9;}
case 0x6915e9:{ // PFMUL MM0,qword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6915ee;}
case 0x6915ee:{ // PFMUL MM1,qword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6915f3;}
case 0x6915f3:{ // MOVQ qword ptr [ESP + 0x18],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x6915f8;}
case 0x6915f8:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6915fdull);
return 0x6d4460;
return 0x6915fd;}
case 0x6915fd:{ // MOVQ qword ptr [ESP + 0x8],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691602;}
case 0x691602:{ // MOVQ MM0,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691607;}
case 0x691607:{ // PUNPCKHDQ MM0,MM0
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69160a;}
case 0x69160a:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69160full);
return 0x6d4460;
return 0x69160f;}
case 0x69160f:{ // MOVQ qword ptr [ESP + 0x10],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691614;}
case 0x691614:{ // MOVQ MM0,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691619;}
case 0x691619:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69161eull);
return 0x6d4460;
return 0x69161e;}
case 0x69161e:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691623;}
case 0x691623:{ // MOVQ MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691628;}
case 0x691628:{ // MOVQ MM7,qword ptr [0x007b7178]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7b7178)));
return 0x69162f;}
case 0x69162f:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691632;}
case 0x691632:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691635;}
case 0x691635:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691638;}
case 0x691638:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69163b;}
case 0x69163b:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x69163e;}
case 0x69163e:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x691641;}
case 0x691641:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x691644;}
case 0x691644:{ // PXOR MM0,MM7
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1170)));
return 0x691647;}
case 0x691647:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x69164b;}
case 0x69164b:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69164e;}
case 0x69164e:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x691651;}
case 0x691651:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x691654;}
case 0x691654:{ // PXOR MM5,MM7
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1170)));
return 0x691657;}
case 0x691657:{ // PFMUL MM0,MM6
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1160)}));
return 0x69165b;}
case 0x69165b:{ // PFMUL MM3,MM2
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69165f;}
case 0x69165f:{ // PFMUL MM4,MM2
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x691663;}
case 0x691663:{ // PFMUL MM5,MM6
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x691667;}
case 0x691667:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69166a;}
case 0x69166a:{ // PUNPCKHDQ MM7,MM7
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x69166d;}
case 0x69166d:{ // PUNPCKLDQ MM7,MM1
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691670;}
case 0x691670:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x691674;}
case 0x691674:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x691678;}
case 0x691678:{ // PFMUL MM4,MM7
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x69167c;}
case 0x69167c:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x691680;}
case 0x691680:{ // PFADD MM0,MM4
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x691684;}
case 0x691684:{ // PFADD MM3,MM5
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x691688;}
case 0x691688:{ // MOVQ qword ptr [EBP + -0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69168c;}
case 0x69168c:{ // MOVQ qword ptr [EBP + -0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691690;}
case 0x691690:{ // MOV ESI,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691693;}
case 0x691693:{ // MOV EBX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691697;}
case 0x691697:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69169a;}
case 0x69169a:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69169d;}
case 0x69169d:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6916a1;}
case 0x6916a1:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6916a6;}
case 0x6916a6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6916a9;}
case 0x6916a9:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6916ac;}
case 0x6916ac:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x6916b0;}
case 0x6916b0:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6916b3;}
case 0x6916b3:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6916b6;}
case 0x6916b6:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x6916ba;}
case 0x6916ba:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6916bd;}
case 0x6916bd:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6916c0;}
case 0x6916c0:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6916c3;}
case 0x6916c3:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x6916c7;}
case 0x6916c7:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6916ca;}
case 0x6916ca:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6916cd;}
case 0x6916cd:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6916d1;}
case 0x6916d1:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6916d4;}
case 0x6916d4:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x6916d8;}
case 0x6916d8:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6916dc;}
case 0x6916dc:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6916df;}
case 0x6916df:{ // PFMUL MM6,MM4
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x6916e3;}
case 0x6916e3:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6916e6;}
case 0x6916e6:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x6916e9;}
case 0x6916e9:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6916ec;}
case 0x6916ec:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x6916ef;}
case 0x6916ef:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6916f3;}
case 0x6916f3:{ // PFADD MM7,MM3
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6916f7;}
case 0x6916f7:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x6916fb;}
case 0x6916fb:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6916fe;}
case 0x6916fe:{ // PUNPCKHDQ MM6,MM5
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x691701;}
case 0x691701:{ // PFSUBR MM3,qword ptr [0x007b7158]
wr<8>(c,0x1130,user_op(c,524528,{r<8>(c,0x1130),m<8>(c,0x7b7158)}));
return 0x691709;}
case 0x691709:{ // PFSUBR MM7,qword ptr [0x007b7158]
wr<8>(c,0x1170,user_op(c,524528,{r<8>(c,0x1170),m<8>(c,0x7b7158)}));
return 0x691711;}
case 0x691711:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691714;}
case 0x691714:{ // PFADD MM1,MM6
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x691718;}
case 0x691718:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69171c;}
case 0x69171c:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x691720;}
case 0x691720:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x691723;}
case 0x691723:{ // PFADD MM2,MM5
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x691727;}
case 0x691727:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x69172b;}
case 0x69172b:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x69172e;}
case 0x69172e:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691731;}
case 0x691731:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x691734;}
case 0x691734:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691737;}
case 0x691737:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69173a;}
case 0x69173a:{ // MOVQ qword ptr [EAX + 0x18],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69173e;}
case 0x69173e:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691741;}
case 0x691741:{ // PUNPCKLDQ MM0,dword ptr [0x007b7158]
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x691748;}
case 0x691748:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69174c;}
case 0x69174c:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x69174f;}
case 0x69174f:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691753;}
case 0x691753:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691756;}
case 0x691756:{ // PUNPCKLDQ MM6,MM3
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x691759;}
case 0x691759:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69175c;}
case 0x69175c:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691760;}
case 0x691760:{ // MOVQ qword ptr [EAX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691764;}
case 0x691764:{ // LEA ESP,[EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wr<4>(c,0x10,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x691767;}
case 0x691767:{ // MOV EBP,dword ptr [EBP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x14)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69176a;}
case 0x69176a:{ // FEMMS
user_op(c,251,{});
return 0x69176c;}
case 0x69176c:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x69176f;}
case 0x69176f:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691773;}
case 0x691773:{ // MOVD MM6,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691778;}
case 0x691778:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x69177b;}
case 0x69177b:{ // MOV EDX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69177f;}
case 0x69177f:{ // MOVQ MM5,qword ptr [0x007b7138]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7b7138)));
return 0x691786;}
case 0x691786:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69178a;}
case 0x69178a:{ // MOVQ qword ptr [EAX],MM6
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69178d;}
case 0x69178d:{ // MOVQ qword ptr [EAX + 0x8],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691791;}
case 0x691791:{ // MOVD dword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1170),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x691795;}
case 0x691795:{ // SUB ESP,0x40
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691798;}
case 0x691798:{ // MOVD dword ptr [EAX + 0x14],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x69179c;}
case 0x69179c:{ // MOVQ qword ptr [EAX + 0x18],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6917a0;}
case 0x6917a0:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6917a2;}
case 0x6917a2:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6917a6;}
case 0x6917a6:{ // MOVQ qword ptr [EAX + 0x28],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6917aa;}
case 0x6917aa:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6917ae;}
case 0x6917ae:{ // MOVQ qword ptr [EAX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6917b2;}
case 0x6917b2:{ // JZ 0x00691c74
if(r<1>(c,0x206)){return 0x691c74;}
return 0x6917b8;}
case 0x6917b8:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6917bb;}
case 0x6917bb:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6917bf;}
case 0x6917bf:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6917c2;}
case 0x6917c2:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6917c5;}
case 0x6917c5:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x6917c9;}
case 0x6917c9:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6917cc;}
case 0x6917cc:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6917cf;}
case 0x6917cf:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x6917d3;}
case 0x6917d3:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6917d6;}
case 0x6917d6:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6917d9;}
case 0x6917d9:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x6917dc;}
case 0x6917dc:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x6917e0;}
case 0x6917e0:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6917e3;}
case 0x6917e3:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6917e6;}
case 0x6917e6:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6917ea;}
case 0x6917ea:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6917ed;}
case 0x6917ed:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x6917f1;}
case 0x6917f1:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6917f5;}
case 0x6917f5:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6917f8;}
case 0x6917f8:{ // PFMUL MM6,MM4
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x6917fc;}
case 0x6917fc:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6917ff;}
case 0x6917ff:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691802;}
case 0x691802:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691805;}
case 0x691805:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x691808;}
case 0x691808:{ // MOVQ qword ptr [ESP + 0x30],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69180d;}
case 0x69180d:{ // PFADD MM7,MM3
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691811;}
case 0x691811:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x691815;}
case 0x691815:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x691818;}
case 0x691818:{ // PUNPCKHDQ MM6,MM5
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x69181b;}
case 0x69181b:{ // PFSUBR MM3,qword ptr [0x007b7158]
wr<8>(c,0x1130,user_op(c,524528,{r<8>(c,0x1130),m<8>(c,0x7b7158)}));
return 0x691823;}
case 0x691823:{ // PFSUBR MM7,qword ptr [0x007b7158]
wr<8>(c,0x1170,user_op(c,524528,{r<8>(c,0x1170),m<8>(c,0x7b7158)}));
return 0x69182b;}
case 0x69182b:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69182e;}
case 0x69182e:{ // PFADD MM1,MM6
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x691832;}
case 0x691832:{ // MOVQ qword ptr [ESP + 0x28],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691837;}
case 0x691837:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x69183b;}
case 0x69183b:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69183e;}
case 0x69183e:{ // PFADD MM2,MM5
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x691842;}
case 0x691842:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x691846;}
case 0x691846:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x691849;}
case 0x691849:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69184c;}
case 0x69184c:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69184f;}
case 0x69184f:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691852;}
case 0x691852:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691855;}
case 0x691855:{ // MOVQ qword ptr [ESP + 0x18],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69185a;}
case 0x69185a:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69185d;}
case 0x69185d:{ // PUNPCKLDQ MM0,dword ptr [0x007b7158]
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x691864;}
case 0x691864:{ // MOVQ qword ptr [ESP + 0x8],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691869;}
case 0x691869:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x69186c;}
case 0x69186c:{ // MOVQ qword ptr [ESP + 0x10],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691871;}
case 0x691871:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691874;}
case 0x691874:{ // PUNPCKLDQ MM6,MM3
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x691877;}
case 0x691877:{ // MOVQ qword ptr [ESP],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x69187b;}
case 0x69187b:{ // MOVQ qword ptr [ESP + 0x20],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691880;}
case 0x691880:{ // MOVQ qword ptr [ESP + 0x38],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691885;}
case 0x691885:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691887;}
case 0x691887:{ // JZ 0x00691aa2
if(r<1>(c,0x206)){return 0x691aa2;}
return 0x69188d;}
case 0x69188d:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691891;}
case 0x691891:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691895;}
case 0x691895:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691898;}
case 0x691898:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69189c;}
case 0x69189c:{ // PFSUB MM0,MM2
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6918a0;}
case 0x6918a0:{ // PFSUB MM1,MM3
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6918a4;}
case 0x6918a4:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6918a8;}
case 0x6918a8:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6918ac;}
case 0x6918ac:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918af;}
case 0x6918af:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918b3;}
case 0x6918b3:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918b7;}
case 0x6918b7:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6918ba;}
case 0x6918ba:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918bf;}
case 0x6918bf:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6918c2;}
case 0x6918c2:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918c7;}
case 0x6918c7:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6918ca;}
case 0x6918ca:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6918cd;}
case 0x6918cd:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6918d1;}
case 0x6918d1:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6918d4;}
case 0x6918d4:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6918da;}
case 0x6918da:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6918df;}
case 0x6918df:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6918e3;}
case 0x6918e3:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6918e6;}
case 0x6918e6:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6918ec;}
case 0x6918ec:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6918f0;}
case 0x6918f0:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6918f4;}
case 0x6918f4:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6918f8;}
case 0x6918f8:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6918fe;}
case 0x6918fe:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691902;}
case 0x691902:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691906;}
case 0x691906:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69190a;}
case 0x69190a:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691910;}
case 0x691910:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691914;}
case 0x691914:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691918;}
case 0x691918:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69191c;}
case 0x69191c:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691920;}
case 0x691920:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691923;}
case 0x691923:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691927;}
case 0x691927:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69192b;}
case 0x69192b:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69192e;}
case 0x69192e:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691933;}
case 0x691933:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691936;}
case 0x691936:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69193b;}
case 0x69193b:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69193e;}
case 0x69193e:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691941;}
case 0x691941:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691945;}
case 0x691945:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691948;}
case 0x691948:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69194e;}
case 0x69194e:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691953;}
case 0x691953:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691957;}
case 0x691957:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69195a;}
case 0x69195a:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691960;}
case 0x691960:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691964;}
case 0x691964:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691968;}
case 0x691968:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69196c;}
case 0x69196c:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691972;}
case 0x691972:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691976;}
case 0x691976:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69197a;}
case 0x69197a:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69197e;}
case 0x69197e:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691984;}
case 0x691984:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691988;}
case 0x691988:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69198c;}
case 0x69198c:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691990;}
case 0x691990:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691994;}
case 0x691994:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691998;}
case 0x691998:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69199c;}
case 0x69199c:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6919a0;}
case 0x6919a0:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6919a3;}
case 0x6919a3:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6919a8;}
case 0x6919a8:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6919ab;}
case 0x6919ab:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6919b0;}
case 0x6919b0:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6919b3;}
case 0x6919b3:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6919b6;}
case 0x6919b6:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6919ba;}
case 0x6919ba:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6919bd;}
case 0x6919bd:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6919c3;}
case 0x6919c3:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6919c8;}
case 0x6919c8:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6919cc;}
case 0x6919cc:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6919cf;}
case 0x6919cf:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6919d5;}
case 0x6919d5:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6919d9;}
case 0x6919d9:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6919dd;}
case 0x6919dd:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6919e1;}
case 0x6919e1:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6919e7;}
case 0x6919e7:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6919eb;}
case 0x6919eb:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6919ef;}
case 0x6919ef:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6919f3;}
case 0x6919f3:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6919f9;}
case 0x6919f9:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6919fd;}
case 0x6919fd:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a01;}
case 0x691a01:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691a05;}
case 0x691a05:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a09;}
case 0x691a09:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691a0d;}
case 0x691a0d:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a11;}
case 0x691a11:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691a15;}
case 0x691a15:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691a18;}
case 0x691a18:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a1d;}
case 0x691a1d:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691a20;}
case 0x691a20:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a25;}
case 0x691a25:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691a28;}
case 0x691a28:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691a2b;}
case 0x691a2b:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691a2f;}
case 0x691a2f:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691a32;}
case 0x691a32:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691a38;}
case 0x691a38:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a3d;}
case 0x691a3d:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691a41;}
case 0x691a41:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691a44;}
case 0x691a44:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691a4a;}
case 0x691a4a:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691a4e;}
case 0x691a4e:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691a52;}
case 0x691a52:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691a56;}
case 0x691a56:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691a5c;}
case 0x691a5c:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691a60;}
case 0x691a60:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691a64;}
case 0x691a64:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691a68;}
case 0x691a68:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691a6e;}
case 0x691a6e:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691a72;}
case 0x691a72:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691a76;}
case 0x691a76:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691a7a;}
case 0x691a7a:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691a7e;}
case 0x691a7e:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a82;}
case 0x691a82:{ // MOVD MM1,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691a86;}
case 0x691a86:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691a89;}
case 0x691a89:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691a8d;}
case 0x691a8d:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x691a91;}
case 0x691a91:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x691a95;}
case 0x691a95:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691a99;}
case 0x691a99:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x691a9d;}
case 0x691a9d:{ // JMP 0x00691c74
return 0x691c74;
return 0x691aa2;}
case 0x691aa2:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691aa5;}
case 0x691aa5:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691aa9;}
case 0x691aa9:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691aad;}
case 0x691aad:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691ab0;}
case 0x691ab0:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691ab5;}
case 0x691ab5:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691ab8;}
case 0x691ab8:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691abd;}
case 0x691abd:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691ac0;}
case 0x691ac0:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691ac3;}
case 0x691ac3:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691ac7;}
case 0x691ac7:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691aca;}
case 0x691aca:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691ad0;}
case 0x691ad0:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691ad5;}
case 0x691ad5:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691ad9;}
case 0x691ad9:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691adc;}
case 0x691adc:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691ae2;}
case 0x691ae2:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691ae6;}
case 0x691ae6:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691aea;}
case 0x691aea:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691aee;}
case 0x691aee:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691af4;}
case 0x691af4:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691af8;}
case 0x691af8:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691afc;}
case 0x691afc:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691b00;}
case 0x691b00:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691b06;}
case 0x691b06:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691b0a;}
case 0x691b0a:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b0e;}
case 0x691b0e:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691b12;}
case 0x691b12:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b16;}
case 0x691b16:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691b19;}
case 0x691b19:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b1d;}
case 0x691b1d:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691b21;}
case 0x691b21:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691b24;}
case 0x691b24:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b29;}
case 0x691b29:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691b2c;}
case 0x691b2c:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b31;}
case 0x691b31:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691b34;}
case 0x691b34:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691b37;}
case 0x691b37:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691b3b;}
case 0x691b3b:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691b3e;}
case 0x691b3e:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691b44;}
case 0x691b44:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b49;}
case 0x691b49:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691b4d;}
case 0x691b4d:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691b50;}
case 0x691b50:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691b56;}
case 0x691b56:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691b5a;}
case 0x691b5a:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691b5e;}
case 0x691b5e:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691b62;}
case 0x691b62:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691b68;}
case 0x691b68:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691b6c;}
case 0x691b6c:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691b70;}
case 0x691b70:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691b74;}
case 0x691b74:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691b7a;}
case 0x691b7a:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691b7e;}
case 0x691b7e:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b82;}
case 0x691b82:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691b86;}
case 0x691b86:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b8a;}
case 0x691b8a:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691b8e;}
case 0x691b8e:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b92;}
case 0x691b92:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691b96;}
case 0x691b96:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691b99;}
case 0x691b99:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691b9e;}
case 0x691b9e:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691ba1;}
case 0x691ba1:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691ba6;}
case 0x691ba6:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691ba9;}
case 0x691ba9:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691bac;}
case 0x691bac:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691bb0;}
case 0x691bb0:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691bb3;}
case 0x691bb3:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691bb9;}
case 0x691bb9:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691bbe;}
case 0x691bbe:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691bc2;}
case 0x691bc2:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691bc5;}
case 0x691bc5:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691bcb;}
case 0x691bcb:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691bcf;}
case 0x691bcf:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691bd3;}
case 0x691bd3:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691bd7;}
case 0x691bd7:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691bdd;}
case 0x691bdd:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691be1;}
case 0x691be1:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691be5;}
case 0x691be5:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691be9;}
case 0x691be9:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691bef;}
case 0x691bef:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691bf3;}
case 0x691bf3:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691bf7;}
case 0x691bf7:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691bfb;}
case 0x691bfb:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691bff;}
case 0x691bff:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691c03;}
case 0x691c03:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c07;}
case 0x691c07:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691c0b;}
case 0x691c0b:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691c0e;}
case 0x691c0e:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c13;}
case 0x691c13:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691c16;}
case 0x691c16:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c1b;}
case 0x691c1b:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691c1e;}
case 0x691c1e:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691c21;}
case 0x691c21:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691c25;}
case 0x691c25:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691c28;}
case 0x691c28:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691c2e;}
case 0x691c2e:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c33;}
case 0x691c33:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691c37;}
case 0x691c37:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691c3a;}
case 0x691c3a:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691c40;}
case 0x691c40:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x691c44;}
case 0x691c44:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691c48;}
case 0x691c48:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691c4c;}
case 0x691c4c:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x691c52;}
case 0x691c52:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691c56;}
case 0x691c56:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x691c5a;}
case 0x691c5a:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691c5e;}
case 0x691c5e:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x691c64;}
case 0x691c64:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691c68;}
case 0x691c68:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x691c6c;}
case 0x691c6c:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691c70;}
case 0x691c70:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691c74;}
case 0x691c74:{ // MOV EDX,dword ptr [ESP + 0x54]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x54ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691c78;}
case 0x691c78:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691c7a;}
case 0x691c7a:{ // JZ 0x00691c9b
if(r<1>(c,0x206)){return 0x691c9b;}
return 0x691c7c;}
case 0x691c7c:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c7f;}
case 0x691c7f:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691c83;}
case 0x691c83:{ // MOVQ MM2,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691c87;}
case 0x691c87:{ // MOVD MM3,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691c8b;}
case 0x691c8b:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x691c8f;}
case 0x691c8f:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x691c93;}
case 0x691c93:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691c97;}
case 0x691c97:{ // MOVD dword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x691c9b;}
case 0x691c9b:{ // ADD ESP,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691c9e;}
case 0x691c9e:{ // FEMMS
user_op(c,251,{});
return 0x691ca0;}
case 0x691ca0:{ // RET 0x14
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
return uint32_t(r<4>(c,0x284));
return 0x691ca3;}
case 0x691ca3:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x691ca5;}
case 0x691ca5:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x691ca6;}
case 0x691ca6:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x691ca8;}
case 0x691ca8:{ // SUB ESP,0x18
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691cab;}
case 0x691cab:{ // MOV EDX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691cae;}
case 0x691cae:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691cb1;}
case 0x691cb1:{ // LEA EAX,[ESP]
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x691cb4;}
case 0x691cb4:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691cb7;}
case 0x691cb7:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691cbb;}
case 0x691cbb:{ // MOV dword ptr [ESP + 0x10],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x691cbf;}
case 0x691cbf:{ // MOV dword ptr [ESP + 0x14],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x691cc3;}
case 0x691cc3:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x691cc7;}
case 0x691cc7:{ // MOVD dword ptr [ESP + 0x8],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0x17200));
return 0x691ccc;}
case 0x691ccc:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x691ccd;}
case 0x691ccd:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x691cce;}
case 0x691cce:{ // CALL 0x00693a80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x691cd3ull);
return 0x693a80;
return 0x691cd3;}
case 0x691cd3:{ // MOVD MM0,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691cd7;}
case 0x691cd7:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x691cdcull);
return 0x6d4460;
return 0x691cdc;}
case 0x691cdc:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691cdf;}
case 0x691cdf:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691ce2;}
case 0x691ce2:{ // PFSUBR MM0,qword ptr [0x007b7158]
wr<8>(c,0x1100,user_op(c,524528,{r<8>(c,0x1100),m<8>(c,0x7b7158)}));
return 0x691cea;}
case 0x691cea:{ // PUNPCKHDQ MM7,MM7
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691ced;}
case 0x691ced:{ // MOVQ MM2,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691cf1;}
case 0x691cf1:{ // MOVD MM3,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691cf6;}
case 0x691cf6:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x691cf9;}
case 0x691cf9:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x691cfc;}
case 0x691cfc:{ // MOVD dword ptr [ESP + 0xc],MM7
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1170),0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0x17200));
return 0x691d01;}
case 0x691d01:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x691d04;}
case 0x691d04:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x691d07;}
case 0x691d07:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x691d0a;}
case 0x691d0a:{ // MOV ESI,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691d0e;}
case 0x691d0e:{ // PUNPCKHDQ MM2,MM3
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691d11;}
case 0x691d11:{ // PFMUL MM3,MM4
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x691d15;}
case 0x691d15:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691d18;}
case 0x691d18:{ // PFMUL MM2,MM4
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x691d1c;}
case 0x691d1c:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691d1f;}
case 0x691d1f:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x691d23;}
case 0x691d23:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691d26;}
case 0x691d26:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x691d2a;}
case 0x691d2a:{ // PFMUL MM4,MM4
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x691d2e;}
case 0x691d2e:{ // PFMUL MM5,MM5
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x691d32;}
case 0x691d32:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691d36;}
case 0x691d36:{ // MOV EBX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691d3a;}
case 0x691d3a:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x691d3e;}
case 0x691d3e:{ // PFADD MM4,MM1
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x691d42;}
case 0x691d42:{ // PFADD MM5,MM1
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x691d46;}
case 0x691d46:{ // MOVD MM1,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691d4b;}
case 0x691d4b:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x691d4e;}
case 0x691d4e:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691d51;}
case 0x691d51:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x691d55;}
case 0x691d55:{ // PUNPCKLDQ MM5,MM0
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691d58;}
case 0x691d58:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x691d5c;}
case 0x691d5c:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691d60;}
case 0x691d60:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x691d63;}
case 0x691d63:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x691d66;}
case 0x691d66:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x691d69;}
case 0x691d69:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691d6d;}
case 0x691d6d:{ // PFSUB MM2,MM7
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x691d71;}
case 0x691d71:{ // PFADD MM1,MM7
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x691d75;}
case 0x691d75:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x691d78;}
case 0x691d78:{ // PFSUB MM3,MM6
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x691d7c;}
case 0x691d7c:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x691d7f;}
case 0x691d7f:{ // PUNPCKLDQ MM4,MM1
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691d82;}
case 0x691d82:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691d85;}
case 0x691d85:{ // PUNPCKHDQ MM1,MM0
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691d88;}
case 0x691d88:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691d8b;}
case 0x691d8b:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691d8e;}
case 0x691d8e:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691d92;}
case 0x691d92:{ // PUNPCKHDQ MM0,qword ptr [0x007b7158]
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b715c)));
return 0x691d99;}
case 0x691d99:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x691d9d;}
case 0x691d9d:{ // MOVQ qword ptr [EAX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691da1;}
case 0x691da1:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x691da4;}
case 0x691da4:{ // MOVQ qword ptr [EAX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691da8;}
case 0x691da8:{ // PUNPCKHDQ MM7,MM2
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691dab;}
case 0x691dab:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x691dae;}
case 0x691dae:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691db2;}
case 0x691db2:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691db6;}
case 0x691db6:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x691db8;}
case 0x691db8:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x691db9;}
case 0x691db9:{ // FEMMS
user_op(c,251,{});
return 0x691dbb;}
case 0x691dbb:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x691dbe;}
case 0x691dbe:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x691dc0;}
case 0x691dc0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x691dc1;}
case 0x691dc1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x691dc3;}
case 0x691dc3:{ // SUB ESP,0xc0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xc0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xc0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691dc9;}
case 0x691dc9:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691dcc;}
case 0x691dcc:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691dcf;}
case 0x691dcf:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691dd2;}
case 0x691dd2:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691dd4;}
case 0x691dd4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691dd7;}
case 0x691dd7:{ // JZ 0x00692a65
if(r<1>(c,0x206)){return 0x692a65;}
return 0x691ddd;}
case 0x691ddd:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691ddf;}
case 0x691ddf:{ // JZ 0x006929c8
if(r<1>(c,0x206)){return 0x6929c8;}
return 0x691de5;}
case 0x691de5:{ // MOVQ MM1,qword ptr [0x007b7138]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7138)));
return 0x691dec;}
case 0x691dec:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691def;}
case 0x691def:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691df3;}
case 0x691df3:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x691df6;}
case 0x691df6:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x691df9;}
case 0x691df9:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x691dfc;}
case 0x691dfc:{ // MOVQ MM0,MM5
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x691dff;}
case 0x691dff:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691e02;}
case 0x691e02:{ // MOVQ qword ptr [ESP],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x691e06;}
case 0x691e06:{ // MOVQ qword ptr [ESP + 0x8],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e0b;}
case 0x691e0b:{ // MOVQ qword ptr [ESP + 0x10],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e10;}
case 0x691e10:{ // MOVQ qword ptr [ESP + 0x18],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e15;}
case 0x691e15:{ // MOVQ qword ptr [ESP + 0x20],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e1a;}
case 0x691e1a:{ // MOVQ qword ptr [ESP + 0x28],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e1f;}
case 0x691e1f:{ // MOVQ qword ptr [ESP + 0x30],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e24;}
case 0x691e24:{ // MOVQ qword ptr [ESP + 0x38],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x691e29;}
case 0x691e29:{ // LEA EAX,[ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x691e2d;}
case 0x691e2d:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691e30;}
case 0x691e30:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691e34;}
case 0x691e34:{ // PSWAPD MM3,MM0
wr<8>(c,0x1130,user_op(c,524544,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x691e38;}
case 0x691e38:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691e3b;}
case 0x691e3b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691e3e;}
case 0x691e3e:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x691e42;}
case 0x691e42:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x691e45;}
case 0x691e45:{ // PUNPCKHDQ MM6,MM1
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691e48;}
case 0x691e48:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x691e4c;}
case 0x691e4c:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691e4f;}
case 0x691e4f:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x691e53;}
case 0x691e53:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691e56;}
case 0x691e56:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691e5a;}
case 0x691e5a:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x691e5e;}
case 0x691e5e:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x691e62;}
case 0x691e62:{ // PFMUL MM6,MM5
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x691e66;}
case 0x691e66:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691e69;}
case 0x691e69:{ // PFSUBR MM0,qword ptr [0x007b7158]
wr<8>(c,0x1100,user_op(c,524528,{r<8>(c,0x1100),m<8>(c,0x7b7158)}));
return 0x691e71;}
case 0x691e71:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x691e74;}
case 0x691e74:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691e77;}
case 0x691e77:{ // PFPNACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524543,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x691e7b;}
case 0x691e7b:{ // PFACC MM4,MM4
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x691e7f;}
case 0x691e7f:{ // PFPNACC MM6,MM6
wr<8>(c,0x1160,user_op(c,524543,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x691e83;}
case 0x691e83:{ // PFPNACC MM2,MM2
wr<8>(c,0x1120,user_op(c,524543,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x691e87;}
case 0x691e87:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x691e8b;}
case 0x691e8b:{ // PSWAPD MM5,MM2
wr<8>(c,0x1150,user_op(c,524544,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691e8f;}
case 0x691e8f:{ // PFSUBR MM4,qword ptr [0x007b7158]
wr<8>(c,0x1140,user_op(c,524528,{r<8>(c,0x1140),m<8>(c,0x7b7158)}));
return 0x691e97;}
case 0x691e97:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x691e9a;}
case 0x691e9a:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691e9d;}
case 0x691e9d:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691ea1;}
case 0x691ea1:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x691ea4;}
case 0x691ea4:{ // PUNPCKLDQ MM2,MM7
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691ea7;}
case 0x691ea7:{ // PUNPCKHDQ MM4,MM7
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691eaa;}
case 0x691eaa:{ // PUNPCKHDQ MM0,MM6
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x691ead;}
case 0x691ead:{ // MOVQ qword ptr [EAX + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691eb1;}
case 0x691eb1:{ // PUNPCKHDQ MM3,MM7
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691eb4;}
case 0x691eb4:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691eb8;}
case 0x691eb8:{ // PUNPCKLDQ MM6,MM1
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691ebb;}
case 0x691ebb:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691ebf;}
case 0x691ebf:{ // PUNPCKLDQ MM7,dword ptr [0x007b7158]
wr<4>(c,0x1174,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x691ec6;}
case 0x691ec6:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691ec9;}
case 0x691ec9:{ // MOVQ qword ptr [EAX + 0x10],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691ecd;}
case 0x691ecd:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691ed1;}
case 0x691ed1:{ // MOVQ qword ptr [EAX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691ed5;}
case 0x691ed5:{ // MOV EDX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691ed8;}
case 0x691ed8:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x691eda;}
case 0x691eda:{ // JZ 0x006925ad
if(r<1>(c,0x206)){return 0x6925ad;}
return 0x691ee0;}
case 0x691ee0:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691ee5;}
case 0x691ee5:{ // MOVQ MM1,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691eea;}
case 0x691eea:{ // MOVQ MM3,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691eef;}
case 0x691eef:{ // MOVQ MM4,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691ef4;}
case 0x691ef4:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691ef7;}
case 0x691ef7:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691efa;}
case 0x691efa:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691efd;}
case 0x691efd:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x691f00;}
case 0x691f00:{ // MOVQ qword ptr [ESP + 0x80],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f08;}
case 0x691f08:{ // MOVQ qword ptr [ESP + 0x90],MM2
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f10;}
case 0x691f10:{ // MOVQ MM6,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691f15;}
case 0x691f15:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x691f18;}
case 0x691f18:{ // MOVQ MM7,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691f1d;}
case 0x691f1d:{ // MOVQ MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691f22;}
case 0x691f22:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x691f25;}
case 0x691f25:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x691f28;}
case 0x691f28:{ // MOVQ qword ptr [ESP + 0xa8],MM3
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f30;}
case 0x691f30:{ // MOVQ qword ptr [ESP + 0xb8],MM5
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f38;}
case 0x691f38:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x691f3b;}
case 0x691f3b:{ // MOVQ MM4,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691f40;}
case 0x691f40:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x691f43;}
case 0x691f43:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x691f46;}
case 0x691f46:{ // MOVQ qword ptr [ESP + 0xa0],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f4e;}
case 0x691f4e:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x691f51;}
case 0x691f51:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x691f54;}
case 0x691f54:{ // MOVQ qword ptr [ESP + 0xb0],MM1
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f5c;}
case 0x691f5c:{ // MOVQ qword ptr [ESP + 0x98],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f64;}
case 0x691f64:{ // MOVQ qword ptr [ESP + 0x88],MM2
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x691f6c;}
case 0x691f6c:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x691f6f;}
case 0x691f6f:{ // MOVQ MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691f72;}
case 0x691f72:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x691f76;}
case 0x691f76:{ // MOVD MM1,dword ptr [0x007b7148]
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(m<4>(c,0x7b7148)));
return 0x691f7d;}
case 0x691f7d:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x691f80;}
case 0x691f80:{ // PSWAPD MM2,MM1
wr<8>(c,0x1120,user_op(c,524544,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x691f84;}
case 0x691f84:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x691f87;}
case 0x691f87:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691f8b;}
case 0x691f8b:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691f8f;}
case 0x691f8f:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691f93;}
case 0x691f93:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691f97;}
case 0x691f97:{ // MOVQ qword ptr [EAX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691f9b;}
case 0x691f9b:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x691f9f;}
case 0x691f9f:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x691fa3;}
case 0x691fa3:{ // MOVQ qword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691fa7;}
case 0x691fa7:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x691fab;}
case 0x691fab:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fae;}
case 0x691fae:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fb2;}
case 0x691fb2:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fba;}
case 0x691fba:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x691fbd;}
case 0x691fbd:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fc5;}
case 0x691fc5:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x691fc8;}
case 0x691fc8:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fd0;}
case 0x691fd0:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x691fd3;}
case 0x691fd3:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x691fd6;}
case 0x691fd6:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x691fda;}
case 0x691fda:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x691fdd;}
case 0x691fdd:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x691fe6;}
case 0x691fe6:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x691fee;}
case 0x691fee:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x691ff2;}
case 0x691ff2:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x691ff5;}
case 0x691ff5:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x691ffe;}
case 0x691ffe:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x692002;}
default:missing_instruction(c.pc);}}
}
