#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_690(Cpu& c){switch(c.pc){
case 0x690002:{ // PFADD MM6,qword ptr [0x007b7218]
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),m<8>(c,0x7b7218)}));
return 0x69000a;}
case 0x69000a:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69000d;}
case 0x69000d:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690011;}
case 0x690011:{ // MOVQ qword ptr [EAX + 0x10],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690015;}
case 0x690015:{ // MOVQ qword ptr [EAX + 0x18],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690019;}
case 0x690019:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69001c;}
case 0x69001c:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69001f;}
case 0x69001f:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690022;}
case 0x690022:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x690025;}
case 0x690025:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x690028;}
case 0x690028:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x69002b;}
case 0x69002b:{ // PSRLQ MM5,0x20
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x20ull));
return 0x69002f;}
case 0x69002f:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x690033;}
case 0x690033:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690037;}
case 0x690037:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x69003b;}
case 0x69003b:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x69003f;}
case 0x69003f:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x690043;}
case 0x690043:{ // PFADD MM5,qword ptr [0x007b7220]
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),m<8>(c,0x7b7220)}));
return 0x69004b;}
case 0x69004b:{ // PFADD MM7,qword ptr [0x007b7218]
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),m<8>(c,0x7b7218)}));
return 0x690053;}
case 0x690053:{ // MOVQ qword ptr [EAX + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690057;}
case 0x690057:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69005b;}
case 0x69005b:{ // MOVQ qword ptr [EAX + 0x30],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69005f;}
case 0x69005f:{ // MOVQ qword ptr [EAX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690063;}
case 0x690063:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x690065;}
case 0x690065:{ // MOV EBP,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690069;}
case 0x690069:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69006c;}
case 0x69006c:{ // FEMMS
user_op(c,251,{});
return 0x69006e;}
case 0x69006e:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x690071;}
case 0x690071:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x690073;}
case 0x690073:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x690074;}
case 0x690074:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x690075;}
case 0x690075:{ // FEMMS
user_op(c,251,{});
return 0x690077;}
case 0x690077:{ // MOVD MM0,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69007c;}
case 0x69007c:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x690081ull);
return 0x6d4460;
return 0x690081;}
case 0x690081:{ // MOV EAX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690085;}
case 0x690085:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690088;}
case 0x690088:{ // PXOR MM1,MM1
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1110)));
return 0x69008b;}
case 0x69008b:{ // MOVQ MM2,qword ptr [0x007b7220]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x7b7220)));
return 0x690092;}
case 0x690092:{ // MOVQ MM3,qword ptr [0x007b7218]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b7218)));
return 0x690099;}
case 0x690099:{ // PSRLQ MM4,0x20
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x20ull));
return 0x69009d;}
case 0x69009d:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6900a0;}
case 0x6900a0:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6900a4;}
case 0x6900a4:{ // MOVD dword ptr [EAX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900a8;}
case 0x6900a8:{ // MOVD dword ptr [EAX + 0x14],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900ac;}
case 0x6900ac:{ // MOVQ qword ptr [EAX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6900b0;}
case 0x6900b0:{ // PXOR MM4,qword ptr [0x007b71d0]
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),m<8>(c,0x7b71d0)));
return 0x6900b7;}
case 0x6900b7:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6900bb;}
case 0x6900bb:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6900bf;}
case 0x6900bf:{ // MOVD dword ptr [EAX + 0x20],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900c3;}
case 0x6900c3:{ // MOVD dword ptr [EAX + 0x24],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1140),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900c7;}
case 0x6900c7:{ // MOVD dword ptr [EAX + 0x28],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900cb;}
case 0x6900cb:{ // MOVD dword ptr [EAX + 0x2c],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6900cf;}
case 0x6900cf:{ // FEMMS
user_op(c,251,{});
return 0x6900d1;}
case 0x6900d1:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6900d2;}
case 0x6900d2:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6900d3;}
case 0x6900d3:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x6900d6;}
case 0x6900d6:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6900d8;}
case 0x6900d8:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6900d9;}
case 0x6900d9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6900da;}
case 0x6900da:{ // FEMMS
user_op(c,251,{});
return 0x6900dc;}
case 0x6900dc:{ // MOVD MM0,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6900e1;}
case 0x6900e1:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6900e6ull);
return 0x6d4460;
return 0x6900e6;}
case 0x6900e6:{ // MOV EAX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6900ea;}
case 0x6900ea:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6900ed;}
case 0x6900ed:{ // PAND MM0,qword ptr [0x007b71a8]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b71a8)));
return 0x6900f4;}
case 0x6900f4:{ // PXOR MM1,MM1
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1110)));
return 0x6900f7;}
case 0x6900f7:{ // MOVQ MM2,qword ptr [0x007b7220]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x7b7220)));
return 0x6900fe;}
case 0x6900fe:{ // MOVQ MM3,qword ptr [0x007b7218]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b7218)));
return 0x690105;}
case 0x690105:{ // PSRLQ MM4,0x20
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x20ull));
return 0x690109;}
case 0x690109:{ // MOVQ qword ptr [EAX + 0x10],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69010d;}
case 0x69010d:{ // MOVQ qword ptr [EAX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690111;}
case 0x690111:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690115;}
case 0x690115:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690119;}
case 0x690119:{ // MOVQ qword ptr [EAX + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69011d;}
case 0x69011d:{ // PXOR MM4,qword ptr [0x007b71d0]
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),m<8>(c,0x7b71d0)));
return 0x690124;}
case 0x690124:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x690127;}
case 0x690127:{ // MOVQ qword ptr [EAX + 0x28],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69012b;}
case 0x69012b:{ // MOVQ qword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69012f;}
case 0x69012f:{ // FEMMS
user_op(c,251,{});
return 0x690131;}
case 0x690131:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x690132;}
case 0x690132:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x690133;}
case 0x690133:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x690136;}
case 0x690136:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x690138;}
case 0x690138:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x690139;}
case 0x690139:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69013a;}
case 0x69013a:{ // FEMMS
user_op(c,251,{});
return 0x69013c;}
case 0x69013c:{ // MOVD MM0,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x690141;}
case 0x690141:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x690146ull);
return 0x6d4460;
return 0x690146;}
case 0x690146:{ // MOV EAX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69014a;}
case 0x69014a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69014d;}
case 0x69014d:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690150;}
case 0x690150:{ // PXOR MM1,MM1
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1110)));
return 0x690153;}
case 0x690153:{ // MOVQ MM2,qword ptr [0x007b7220]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x7b7220)));
return 0x69015a;}
case 0x69015a:{ // MOVQ MM3,qword ptr [0x007b7218]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b7218)));
return 0x690161;}
case 0x690161:{ // PUNPCKLDQ MM4,MM0
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690164;}
case 0x690164:{ // PXOR MM4,qword ptr [0x007b71d0]
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),m<8>(c,0x7b71d0)));
return 0x69016b;}
case 0x69016b:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69016e;}
case 0x69016e:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690172;}
case 0x690172:{ // MOVQ qword ptr [EAX + 0x18],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690176;}
case 0x690176:{ // MOVQ qword ptr [EAX + 0x20],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69017a;}
case 0x69017a:{ // MOVQ qword ptr [EAX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69017e;}
case 0x69017e:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690182;}
case 0x690182:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690186;}
case 0x690186:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69018a;}
case 0x69018a:{ // FEMMS
user_op(c,251,{});
return 0x69018c;}
case 0x69018c:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x69018d;}
case 0x69018d:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x69018e;}
case 0x69018e:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x690191;}
case 0x690191:{ // FEMMS
user_op(c,251,{});
return 0x690193;}
case 0x690193:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690197;}
case 0x690197:{ // MOVD MM3,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69019c;}
case 0x69019c:{ // MOVQ MM1,qword ptr [0x007b7218]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7218)));
return 0x6901a3;}
case 0x6901a3:{ // MOVD MM2,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6901a8;}
case 0x6901a8:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6901ab;}
case 0x6901ab:{ // PSLLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x20ull));
return 0x6901af;}
case 0x6901af:{ // MOVD MM4,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6901b4;}
case 0x6901b4:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6901b7;}
case 0x6901b7:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901bb;}
case 0x6901bb:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901bf;}
case 0x6901bf:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901c3;}
case 0x6901c3:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901c7;}
case 0x6901c7:{ // MOVQ qword ptr [EAX + 0x10],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901cb;}
case 0x6901cb:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901cf;}
case 0x6901cf:{ // MOVQ qword ptr [EAX + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6901d3;}
case 0x6901d3:{ // FEMMS
user_op(c,251,{});
return 0x6901d5;}
case 0x6901d5:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x6901d8;}
case 0x6901d8:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6901dc;}
case 0x6901dc:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6901df;}
case 0x6901df:{ // MOVQ MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6901e3;}
case 0x6901e3:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6901e7;}
case 0x6901e7:{ // MOVQ MM4,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6901eb;}
case 0x6901eb:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6901ee;}
case 0x6901ee:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6901f2;}
case 0x6901f2:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6901f5;}
case 0x6901f5:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6901f8;}
case 0x6901f8:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x6901fb;}
case 0x6901fb:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6901fe;}
case 0x6901fe:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690202;}
case 0x690202:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690206;}
case 0x690206:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690209;}
case 0x690209:{ // MOVQ MM7,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69020d;}
case 0x69020d:{ // MOVQ MM0,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690211;}
case 0x690211:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690214;}
case 0x690214:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x690217;}
case 0x690217:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69021b;}
case 0x69021b:{ // MOVQ qword ptr [EAX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69021f;}
case 0x69021f:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x690222;}
case 0x690222:{ // MOVQ MM4,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690226;}
case 0x690226:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690229;}
case 0x690229:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x69022c;}
case 0x69022c:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690230;}
case 0x690230:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690233;}
case 0x690233:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690236;}
case 0x690236:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69023a;}
case 0x69023a:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69023e;}
case 0x69023e:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690242;}
case 0x690242:{ // FEMMS
user_op(c,251,{});
return 0x690244;}
case 0x690244:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x690247;}
case 0x690247:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69024b;}
case 0x69024b:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69024f;}
case 0x69024f:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690252;}
case 0x690252:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690256;}
case 0x690256:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690259;}
case 0x690259:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69025c;}
case 0x69025c:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x690260;}
case 0x690260:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690263;}
case 0x690263:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690266;}
case 0x690266:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x69026a;}
case 0x69026a:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69026d;}
case 0x69026d:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690270;}
case 0x690270:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690273;}
case 0x690273:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x690277;}
case 0x690277:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69027a;}
case 0x69027a:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x69027d;}
case 0x69027d:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690281;}
case 0x690281:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690284;}
case 0x690284:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x690288;}
case 0x690288:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x69028c;}
case 0x69028c:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x69028f;}
case 0x69028f:{ // PFMUL MM6,MM4
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x690293;}
case 0x690293:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690296;}
case 0x690296:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x690299;}
case 0x690299:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x69029c;}
case 0x69029c:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x69029f;}
case 0x69029f:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6902a3;}
case 0x6902a3:{ // PFADD MM7,MM3
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6902a7;}
case 0x6902a7:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x6902ab;}
case 0x6902ab:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6902ae;}
case 0x6902ae:{ // PUNPCKHDQ MM6,MM5
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x6902b1;}
case 0x6902b1:{ // PFSUBR MM3,qword ptr [0x007b7158]
wr<8>(c,0x1130,user_op(c,524528,{r<8>(c,0x1130),m<8>(c,0x7b7158)}));
return 0x6902b9;}
case 0x6902b9:{ // PFSUBR MM7,qword ptr [0x007b7158]
wr<8>(c,0x1170,user_op(c,524528,{r<8>(c,0x1170),m<8>(c,0x7b7158)}));
return 0x6902c1;}
case 0x6902c1:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6902c4;}
case 0x6902c4:{ // PFADD MM1,MM6
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x6902c8;}
case 0x6902c8:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6902cc;}
case 0x6902cc:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6902d0;}
case 0x6902d0:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6902d3;}
case 0x6902d3:{ // PFADD MM2,MM5
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x6902d7;}
case 0x6902d7:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x6902db;}
case 0x6902db:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x6902de;}
case 0x6902de:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6902e1;}
case 0x6902e1:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6902e4;}
case 0x6902e4:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6902e7;}
case 0x6902e7:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6902ea;}
case 0x6902ea:{ // MOVQ qword ptr [EAX + 0x18],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6902ee;}
case 0x6902ee:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6902f1;}
case 0x6902f1:{ // PUNPCKLDQ MM0,dword ptr [0x007b7158]
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x6902f8;}
case 0x6902f8:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6902fc;}
case 0x6902fc:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x6902ff;}
case 0x6902ff:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690303;}
case 0x690303:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690306;}
case 0x690306:{ // PUNPCKLDQ MM6,MM3
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x690309;}
case 0x690309:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69030c;}
case 0x69030c:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690310;}
case 0x690310:{ // MOVQ qword ptr [EAX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690314;}
case 0x690314:{ // FEMMS
user_op(c,251,{});
return 0x690316;}
case 0x690316:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x690319;}
case 0x690319:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69031d;}
case 0x69031d:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690321;}
case 0x690321:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690324;}
case 0x690324:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690328;}
case 0x690328:{ // PSWAPD MM3,MM0
wr<8>(c,0x1130,user_op(c,524544,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x69032c;}
case 0x69032c:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69032f;}
case 0x69032f:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690332;}
case 0x690332:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x690336;}
case 0x690336:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690339;}
case 0x690339:{ // PUNPCKHDQ MM6,MM1
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69033c;}
case 0x69033c:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x690340;}
case 0x690340:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690343;}
case 0x690343:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x690347;}
case 0x690347:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69034a;}
case 0x69034a:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69034e;}
case 0x69034e:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x690352;}
case 0x690352:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x690356;}
case 0x690356:{ // PFMUL MM6,MM5
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69035a;}
case 0x69035a:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69035d;}
case 0x69035d:{ // PFSUBR MM0,qword ptr [0x007b7158]
wr<8>(c,0x1100,user_op(c,524528,{r<8>(c,0x1100),m<8>(c,0x7b7158)}));
return 0x690365;}
case 0x690365:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690368;}
case 0x690368:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69036b;}
case 0x69036b:{ // PFPNACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524543,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x69036f;}
case 0x69036f:{ // PFACC MM4,MM4
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x690373;}
case 0x690373:{ // PFPNACC MM6,MM6
wr<8>(c,0x1160,user_op(c,524543,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x690377;}
case 0x690377:{ // PFPNACC MM2,MM2
wr<8>(c,0x1120,user_op(c,524543,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x69037b;}
case 0x69037b:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69037f;}
case 0x69037f:{ // PSWAPD MM5,MM2
wr<8>(c,0x1150,user_op(c,524544,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690383;}
case 0x690383:{ // PFSUBR MM4,qword ptr [0x007b7158]
wr<8>(c,0x1140,user_op(c,524528,{r<8>(c,0x1140),m<8>(c,0x7b7158)}));
return 0x69038b;}
case 0x69038b:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x69038e;}
case 0x69038e:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690391;}
case 0x690391:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690395;}
case 0x690395:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x690398;}
case 0x690398:{ // PUNPCKLDQ MM2,MM7
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x69039b;}
case 0x69039b:{ // PUNPCKHDQ MM4,MM7
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x69039e;}
case 0x69039e:{ // PUNPCKHDQ MM0,MM6
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x6903a1;}
case 0x6903a1:{ // MOVQ qword ptr [EAX + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903a5;}
case 0x6903a5:{ // PUNPCKHDQ MM3,MM7
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x6903a8;}
case 0x6903a8:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903ac;}
case 0x6903ac:{ // PUNPCKLDQ MM6,MM1
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6903af;}
case 0x6903af:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903b3;}
case 0x6903b3:{ // PUNPCKLDQ MM7,dword ptr [0x007b7158]
wr<4>(c,0x1174,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x6903ba;}
case 0x6903ba:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6903bd;}
case 0x6903bd:{ // MOVQ qword ptr [EAX + 0x10],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903c1;}
case 0x6903c1:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903c5;}
case 0x6903c5:{ // MOVQ qword ptr [EAX + 0x38],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6903c9;}
case 0x6903c9:{ // FEMMS
user_op(c,251,{});
return 0x6903cb;}
case 0x6903cb:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x6903ce;}
case 0x6903ce:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6903d0;}
case 0x6903d0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6903d1;}
case 0x6903d1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x6903d3;}
case 0x6903d3:{ // SUB ESP,0xc0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xc0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xc0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6903d9;}
case 0x6903d9:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6903dc;}
case 0x6903dc:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6903df;}
case 0x6903df:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6903e2;}
case 0x6903e2:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6903e4;}
case 0x6903e4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6903e7;}
case 0x6903e7:{ // JZ 0x00691097
if(r<1>(c,0x206)){return 0x691097;}
return 0x6903ed;}
case 0x6903ed:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6903ef;}
case 0x6903ef:{ // JZ 0x00690ffa
if(r<1>(c,0x206)){return 0x690ffa;}
return 0x6903f5;}
case 0x6903f5:{ // MOVQ MM1,qword ptr [0x007b7138]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7138)));
return 0x6903fc;}
case 0x6903fc:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6903ff;}
case 0x6903ff:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x690403;}
case 0x690403:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x690406;}
case 0x690406:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x690409;}
case 0x690409:{ // PUNPCKLDQ MM2,MM5
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x69040c;}
case 0x69040c:{ // MOVQ MM0,MM5
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x69040f;}
case 0x69040f:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690412;}
case 0x690412:{ // MOVQ qword ptr [ESP],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x690416;}
case 0x690416:{ // MOVQ qword ptr [ESP + 0x8],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69041b;}
case 0x69041b:{ // MOVQ qword ptr [ESP + 0x10],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x690420;}
case 0x690420:{ // MOVQ qword ptr [ESP + 0x18],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x690425;}
case 0x690425:{ // MOVQ qword ptr [ESP + 0x20],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69042a;}
case 0x69042a:{ // MOVQ qword ptr [ESP + 0x28],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x69042f;}
case 0x69042f:{ // MOVQ qword ptr [ESP + 0x30],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x690434;}
case 0x690434:{ // MOVQ qword ptr [ESP + 0x38],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x690439;}
case 0x690439:{ // LEA EAX,[ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7600)));
return 0x69043d;}
case 0x69043d:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690440;}
case 0x690440:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690444;}
case 0x690444:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690447;}
case 0x690447:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69044a;}
case 0x69044a:{ // PFADD MM0,MM0
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x69044e;}
case 0x69044e:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690451;}
case 0x690451:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690454;}
case 0x690454:{ // PFADD MM1,MM1
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x690458;}
case 0x690458:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69045b;}
case 0x69045b:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69045e;}
case 0x69045e:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690461;}
case 0x690461:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x690465;}
case 0x690465:{ // PUNPCKLDQ MM1,MM0
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690468;}
case 0x690468:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x69046b;}
case 0x69046b:{ // PFMUL MM5,MM4
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69046f;}
case 0x69046f:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690472;}
case 0x690472:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x690476;}
case 0x690476:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x69047a;}
case 0x69047a:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x69047d;}
case 0x69047d:{ // PFMUL MM6,MM4
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x690481;}
case 0x690481:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x690484;}
case 0x690484:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x690487;}
case 0x690487:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x69048a;}
case 0x69048a:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x69048d;}
case 0x69048d:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690491;}
case 0x690491:{ // PFADD MM7,MM3
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690495;}
case 0x690495:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x690499;}
case 0x690499:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69049c;}
case 0x69049c:{ // PUNPCKHDQ MM6,MM5
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x69049f;}
case 0x69049f:{ // PFSUBR MM3,qword ptr [0x007b7158]
wr<8>(c,0x1130,user_op(c,524528,{r<8>(c,0x1130),m<8>(c,0x7b7158)}));
return 0x6904a7;}
case 0x6904a7:{ // PFSUBR MM7,qword ptr [0x007b7158]
wr<8>(c,0x1170,user_op(c,524528,{r<8>(c,0x1170),m<8>(c,0x7b7158)}));
return 0x6904af;}
case 0x6904af:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6904b2;}
case 0x6904b2:{ // PFADD MM1,MM6
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x6904b6;}
case 0x6904b6:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6904ba;}
case 0x6904ba:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6904be;}
case 0x6904be:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6904c1;}
case 0x6904c1:{ // PFADD MM2,MM5
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x6904c5;}
case 0x6904c5:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x6904c9;}
case 0x6904c9:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x6904cc;}
case 0x6904cc:{ // PUNPCKLDQ MM2,MM0
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6904cf;}
case 0x6904cf:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6904d2;}
case 0x6904d2:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6904d5;}
case 0x6904d5:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6904d8;}
case 0x6904d8:{ // MOVQ qword ptr [EAX + 0x18],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6904dc;}
case 0x6904dc:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6904df;}
case 0x6904df:{ // PUNPCKLDQ MM0,dword ptr [0x007b7158]
wr<4>(c,0x1104,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x6904e6;}
case 0x6904e6:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6904ea;}
case 0x6904ea:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x6904ed;}
case 0x6904ed:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6904f1;}
case 0x6904f1:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6904f4;}
case 0x6904f4:{ // PUNPCKLDQ MM6,MM3
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6904f7;}
case 0x6904f7:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6904fa;}
case 0x6904fa:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6904fe;}
case 0x6904fe:{ // MOVQ qword ptr [EAX + 0x38],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690502;}
case 0x690502:{ // MOV EDX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690505;}
case 0x690505:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x690507;}
case 0x690507:{ // JZ 0x00690bdf
if(r<1>(c,0x206)){return 0x690bdf;}
return 0x69050d;}
case 0x69050d:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690512;}
case 0x690512:{ // MOVQ MM1,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690517;}
case 0x690517:{ // MOVQ MM3,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69051c;}
case 0x69051c:{ // MOVQ MM4,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690521;}
case 0x690521:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690524;}
case 0x690524:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690527;}
case 0x690527:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69052a;}
case 0x69052a:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69052d;}
case 0x69052d:{ // MOVQ qword ptr [ESP + 0x80],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x690535;}
case 0x690535:{ // MOVQ qword ptr [ESP + 0x90],MM2
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x69053d;}
case 0x69053d:{ // MOVQ MM6,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690542;}
case 0x690542:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690545;}
case 0x690545:{ // MOVQ MM7,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69054a;}
case 0x69054a:{ // MOVQ MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69054f;}
case 0x69054f:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690552;}
case 0x690552:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x690555;}
case 0x690555:{ // MOVQ qword ptr [ESP + 0xa8],MM3
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x69055d;}
case 0x69055d:{ // MOVQ qword ptr [ESP + 0xb8],MM5
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x690565;}
case 0x690565:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x690568;}
case 0x690568:{ // MOVQ MM4,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69056d;}
case 0x69056d:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690570;}
case 0x690570:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x690573;}
case 0x690573:{ // MOVQ qword ptr [ESP + 0xa0],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x69057b;}
case 0x69057b:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x69057e;}
case 0x69057e:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690581;}
case 0x690581:{ // MOVQ qword ptr [ESP + 0xb0],MM1
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x690589;}
case 0x690589:{ // MOVQ qword ptr [ESP + 0x98],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x690591;}
case 0x690591:{ // MOVQ qword ptr [ESP + 0x88],MM2
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x690599;}
case 0x690599:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69059c;}
case 0x69059c:{ // MOVQ MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69059f;}
case 0x69059f:{ // MOVD MM4,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x6905a3;}
case 0x6905a3:{ // MOVD MM1,dword ptr [0x007b7148]
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(m<4>(c,0x7b7148)));
return 0x6905aa;}
case 0x6905aa:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x6905ad;}
case 0x6905ad:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6905b0;}
case 0x6905b0:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6905b3;}
case 0x6905b3:{ // PUNPCKLDQ MM2,MM1
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6905b6;}
case 0x6905b6:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6905b9;}
case 0x6905b9:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905bd;}
case 0x6905bd:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905c1;}
case 0x6905c1:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905c5;}
case 0x6905c5:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905c9;}
case 0x6905c9:{ // MOVQ qword ptr [EAX + 0x28],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905cd;}
case 0x6905cd:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x6905d1;}
case 0x6905d1:{ // PFSUB MM0,MM3
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6905d5;}
case 0x6905d5:{ // MOVQ qword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905d9;}
case 0x6905d9:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6905dd;}
case 0x6905dd:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6905e0;}
case 0x6905e0:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6905e4;}
case 0x6905e4:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6905ec;}
case 0x6905ec:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6905ef;}
case 0x6905ef:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6905f7;}
case 0x6905f7:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6905fa;}
case 0x6905fa:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690602;}
case 0x690602:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690605;}
case 0x690605:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690608;}
case 0x690608:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x69060c;}
case 0x69060c:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69060f;}
case 0x69060f:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690618;}
case 0x690618:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690620;}
case 0x690620:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690624;}
case 0x690624:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690627;}
case 0x690627:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690630;}
case 0x690630:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690634;}
case 0x690634:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690638;}
case 0x690638:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69063c;}
case 0x69063c:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690645;}
case 0x690645:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690649;}
case 0x690649:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69064d;}
case 0x69064d:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690651;}
case 0x690651:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x69065a;}
case 0x69065a:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69065e;}
case 0x69065e:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690662;}
case 0x690662:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690666;}
case 0x690666:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69066a;}
case 0x69066a:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69066d;}
case 0x69066d:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690675;}
case 0x690675:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690679;}
case 0x690679:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69067c;}
case 0x69067c:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690684;}
case 0x690684:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690687;}
case 0x690687:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69068f;}
case 0x69068f:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690692;}
case 0x690692:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690695;}
case 0x690695:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690699;}
case 0x690699:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69069c;}
case 0x69069c:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6906a5;}
case 0x6906a5:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6906ad;}
case 0x6906ad:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6906b1;}
case 0x6906b1:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6906b4;}
case 0x6906b4:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6906bd;}
case 0x6906bd:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6906c1;}
case 0x6906c1:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6906c5;}
case 0x6906c5:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6906c9;}
case 0x6906c9:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6906d2;}
case 0x6906d2:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6906d6;}
case 0x6906d6:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6906da;}
case 0x6906da:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6906de;}
case 0x6906de:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6906e7;}
case 0x6906e7:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6906eb;}
case 0x6906eb:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6906ef;}
case 0x6906ef:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6906f3;}
case 0x6906f3:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6906f7;}
case 0x6906f7:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6906fb;}
case 0x6906fb:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690703;}
case 0x690703:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690707;}
case 0x690707:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69070a;}
case 0x69070a:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690712;}
case 0x690712:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690715;}
case 0x690715:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69071d;}
case 0x69071d:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690720;}
case 0x690720:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690723;}
case 0x690723:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690727;}
case 0x690727:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69072a;}
case 0x69072a:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690733;}
case 0x690733:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69073b;}
case 0x69073b:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69073f;}
case 0x69073f:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690742;}
case 0x690742:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69074b;}
case 0x69074b:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x69074f;}
case 0x69074f:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690753;}
case 0x690753:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690757;}
case 0x690757:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690760;}
case 0x690760:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690764;}
case 0x690764:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690768;}
case 0x690768:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69076c;}
case 0x69076c:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690775;}
case 0x690775:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690779;}
case 0x690779:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69077d;}
case 0x69077d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690781;}
case 0x690781:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690785;}
case 0x690785:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690789;}
case 0x690789:{ // MOVQ MM4,qword ptr [ESP + 0x80]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690791;}
case 0x690791:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690795;}
case 0x690795:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690798;}
case 0x690798:{ // MOVQ MM5,qword ptr [ESP + 0x90]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6907a0;}
case 0x6907a0:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6907a3;}
case 0x6907a3:{ // MOVQ MM6,qword ptr [ESP + 0xa0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6907ab;}
case 0x6907ab:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6907ae;}
case 0x6907ae:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6907b1;}
case 0x6907b1:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6907b5;}
case 0x6907b5:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6907b8;}
case 0x6907b8:{ // PFMUL MM0,qword ptr [ESP + 0x88]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6907c1;}
case 0x6907c1:{ // MOVQ MM7,qword ptr [ESP + 0xb0]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb0ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6907c9;}
case 0x6907c9:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6907cd;}
case 0x6907cd:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6907d0;}
case 0x6907d0:{ // PFMUL MM2,qword ptr [ESP + 0x98]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6907d9;}
case 0x6907d9:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6907dd;}
case 0x6907dd:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6907e1;}
case 0x6907e1:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6907e5;}
case 0x6907e5:{ // PFMUL MM1,qword ptr [ESP + 0xa8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6907ee;}
case 0x6907ee:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6907f2;}
case 0x6907f2:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6907f6;}
case 0x6907f6:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6907fa;}
case 0x6907fa:{ // PFMUL MM3,qword ptr [ESP + 0xb8]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xb8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690803;}
case 0x690803:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690807;}
case 0x690807:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69080b;}
case 0x69080b:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69080f;}
case 0x69080f:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690813;}
case 0x690813:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690816;}
case 0x690816:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69081a;}
case 0x69081a:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69081e;}
case 0x69081e:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690821;}
case 0x690821:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690826;}
case 0x690826:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690829;}
case 0x690829:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69082e;}
case 0x69082e:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690831;}
case 0x690831:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690834;}
case 0x690834:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690838;}
case 0x690838:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x69083b;}
case 0x69083b:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690841;}
case 0x690841:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690846;}
case 0x690846:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x69084a;}
case 0x69084a:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69084d;}
case 0x69084d:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690853;}
case 0x690853:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690857;}
case 0x690857:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x69085b;}
case 0x69085b:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x69085f;}
case 0x69085f:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690865;}
case 0x690865:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690869;}
case 0x690869:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x69086d;}
case 0x69086d:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690871;}
case 0x690871:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690877;}
case 0x690877:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x69087b;}
case 0x69087b:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69087f;}
case 0x69087f:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690883;}
case 0x690883:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690887;}
case 0x690887:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69088a;}
case 0x69088a:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69088e;}
case 0x69088e:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690892;}
case 0x690892:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690895;}
case 0x690895:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69089a;}
case 0x69089a:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x69089d;}
case 0x69089d:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6908a2;}
case 0x6908a2:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6908a5;}
case 0x6908a5:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6908a8;}
case 0x6908a8:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x6908ac;}
case 0x6908ac:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x6908af;}
case 0x6908af:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6908b5;}
case 0x6908b5:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6908ba;}
case 0x6908ba:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6908be;}
case 0x6908be:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6908c1;}
case 0x6908c1:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6908c7;}
case 0x6908c7:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6908cb;}
case 0x6908cb:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6908cf;}
case 0x6908cf:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6908d3;}
case 0x6908d3:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6908d9;}
case 0x6908d9:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6908dd;}
case 0x6908dd:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6908e1;}
case 0x6908e1:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6908e5;}
case 0x6908e5:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6908eb;}
case 0x6908eb:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6908ef;}
case 0x6908ef:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6908f3;}
case 0x6908f3:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6908f7;}
case 0x6908f7:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6908fb;}
case 0x6908fb:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6908ff;}
case 0x6908ff:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690903;}
case 0x690903:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690907;}
case 0x690907:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69090a;}
case 0x69090a:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69090f;}
case 0x69090f:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690912;}
case 0x690912:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690917;}
case 0x690917:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69091a;}
case 0x69091a:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x69091d;}
case 0x69091d:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690921;}
case 0x690921:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690924;}
case 0x690924:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69092a;}
case 0x69092a:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69092f;}
case 0x69092f:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690933;}
case 0x690933:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690936;}
case 0x690936:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x69093c;}
case 0x69093c:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690940;}
case 0x690940:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690944;}
case 0x690944:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690948;}
case 0x690948:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x69094e;}
case 0x69094e:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690952;}
case 0x690952:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690956;}
case 0x690956:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x69095a;}
case 0x69095a:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690960;}
case 0x690960:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690964;}
case 0x690964:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690968;}
case 0x690968:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x69096c;}
case 0x69096c:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690970;}
case 0x690970:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690974;}
case 0x690974:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690978;}
case 0x690978:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x69097c;}
case 0x69097c:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x69097f;}
case 0x69097f:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690984;}
case 0x690984:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690987;}
case 0x690987:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69098c;}
case 0x69098c:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x69098f;}
case 0x69098f:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690992;}
case 0x690992:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690996;}
case 0x690996:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690999;}
case 0x690999:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69099f;}
case 0x69099f:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6909a4;}
case 0x6909a4:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x6909a8;}
case 0x6909a8:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x6909ab;}
case 0x6909ab:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6909b1;}
case 0x6909b1:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6909b5;}
case 0x6909b5:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x6909b9;}
case 0x6909b9:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x6909bd;}
case 0x6909bd:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6909c3;}
case 0x6909c3:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6909c7;}
case 0x6909c7:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x6909cb;}
case 0x6909cb:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x6909cf;}
case 0x6909cf:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6909d5;}
case 0x6909d5:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x6909d9;}
case 0x6909d9:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x6909dd;}
case 0x6909dd:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6909e1;}
case 0x6909e1:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6909e5;}
case 0x6909e5:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6909e8;}
case 0x6909e8:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6909ec;}
case 0x6909ec:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6909f1;}
case 0x6909f1:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x6909f4;}
case 0x6909f4:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6909f9;}
case 0x6909f9:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6909fc;}
case 0x6909fc:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a01;}
case 0x690a01:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690a04;}
case 0x690a04:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690a07;}
case 0x690a07:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690a0b;}
case 0x690a0b:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690a0e;}
case 0x690a0e:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690a14;}
case 0x690a14:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a19;}
case 0x690a19:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690a1d;}
case 0x690a1d:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690a20;}
case 0x690a20:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690a26;}
case 0x690a26:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690a2a;}
case 0x690a2a:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690a2e;}
case 0x690a2e:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690a32;}
case 0x690a32:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690a38;}
case 0x690a38:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690a3c;}
case 0x690a3c:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690a40;}
case 0x690a40:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690a44;}
case 0x690a44:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690a4a;}
case 0x690a4a:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690a4e;}
case 0x690a4e:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a52;}
case 0x690a52:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690a56;}
case 0x690a56:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a5a;}
case 0x690a5a:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x690a5d;}
case 0x690a5d:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a62;}
case 0x690a62:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690a66;}
case 0x690a66:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690a69;}
case 0x690a69:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a6e;}
case 0x690a6e:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690a71;}
case 0x690a71:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a76;}
case 0x690a76:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690a79;}
case 0x690a79:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690a7c;}
case 0x690a7c:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690a80;}
case 0x690a80:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690a83;}
case 0x690a83:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690a89;}
case 0x690a89:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690a8e;}
case 0x690a8e:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690a92;}
case 0x690a92:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690a95;}
case 0x690a95:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690a9b;}
case 0x690a9b:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690a9f;}
case 0x690a9f:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690aa3;}
case 0x690aa3:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690aa7;}
case 0x690aa7:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690aad;}
case 0x690aad:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690ab1;}
case 0x690ab1:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690ab5;}
case 0x690ab5:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690ab9;}
case 0x690ab9:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690abf;}
case 0x690abf:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690ac3;}
case 0x690ac3:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690ac7;}
case 0x690ac7:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690acb;}
case 0x690acb:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690acf;}
case 0x690acf:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690ad3;}
case 0x690ad3:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690ad8;}
case 0x690ad8:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690adc;}
case 0x690adc:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690adf;}
case 0x690adf:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690ae4;}
case 0x690ae4:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690ae7;}
case 0x690ae7:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690aec;}
case 0x690aec:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690aef;}
case 0x690aef:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690af2;}
case 0x690af2:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690af6;}
case 0x690af6:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690af9;}
case 0x690af9:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690aff;}
case 0x690aff:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b04;}
case 0x690b04:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690b08;}
case 0x690b08:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690b0b;}
case 0x690b0b:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690b11;}
case 0x690b11:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690b15;}
case 0x690b15:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690b19;}
case 0x690b19:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690b1d;}
case 0x690b1d:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690b23;}
case 0x690b23:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690b27;}
case 0x690b27:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690b2b;}
case 0x690b2b:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690b2f;}
case 0x690b2f:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690b35;}
case 0x690b35:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690b39;}
case 0x690b39:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b3d;}
case 0x690b3d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690b41;}
case 0x690b41:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b45;}
case 0x690b45:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690b49;}
case 0x690b49:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b4e;}
case 0x690b4e:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690b52;}
case 0x690b52:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690b55;}
case 0x690b55:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b5a;}
case 0x690b5a:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690b5d;}
case 0x690b5d:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b62;}
case 0x690b62:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690b65;}
case 0x690b65:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690b68;}
case 0x690b68:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690b6c;}
case 0x690b6c:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690b6f;}
case 0x690b6f:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690b75;}
case 0x690b75:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690b7a;}
case 0x690b7a:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690b7e;}
case 0x690b7e:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690b81;}
case 0x690b81:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690b87;}
case 0x690b87:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690b8b;}
case 0x690b8b:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690b8f;}
case 0x690b8f:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690b93;}
case 0x690b93:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690b99;}
case 0x690b99:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690b9d;}
case 0x690b9d:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690ba1;}
case 0x690ba1:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690ba5;}
case 0x690ba5:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690bab;}
case 0x690bab:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690baf;}
case 0x690baf:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690bb3;}
case 0x690bb3:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690bb7;}
case 0x690bb7:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690bbb;}
case 0x690bbb:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690bbe;}
case 0x690bbe:{ // MOVQ MM1,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690bc2;}
case 0x690bc2:{ // MOVD MM2,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x690bc6;}
case 0x690bc6:{ // MOVD MM3,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x690bca;}
case 0x690bca:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x690bce;}
case 0x690bce:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x690bd2;}
case 0x690bd2:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690bd6;}
case 0x690bd6:{ // MOVD dword ptr [EAX + 0x38],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x690bda;}
case 0x690bda:{ // JMP 0x006910c9
return 0x6910c9;
return 0x690bdf;}
case 0x690bdf:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690be2;}
case 0x690be2:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690be7;}
case 0x690be7:{ // MOVQ MM1,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690bec;}
case 0x690bec:{ // MOVQ MM3,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690bf1;}
case 0x690bf1:{ // MOVQ MM4,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690bf6;}
case 0x690bf6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690bf9;}
case 0x690bf9:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690bfc;}
case 0x690bfc:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690bff;}
case 0x690bff:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x690c02;}
case 0x690c02:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x690c05;}
case 0x690c05:{ // MOVQ qword ptr [EAX + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c09;}
case 0x690c09:{ // MOVQ MM6,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c0e;}
case 0x690c0e:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690c11;}
case 0x690c11:{ // MOVQ MM7,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c16;}
case 0x690c16:{ // MOVQ MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c1b;}
case 0x690c1b:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690c1e;}
case 0x690c1e:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x690c21;}
case 0x690c21:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c25;}
case 0x690c25:{ // MOVQ qword ptr [EAX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c29;}
case 0x690c29:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x690c2c;}
case 0x690c2c:{ // MOVQ MM4,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c31;}
case 0x690c31:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x690c34;}
case 0x690c34:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x690c37;}
case 0x690c37:{ // MOVQ qword ptr [EAX + 0x20],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c3b;}
case 0x690c3b:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x690c3e;}
case 0x690c3e:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x690c41;}
case 0x690c41:{ // MOVQ qword ptr [EAX + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c45;}
case 0x690c45:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c49;}
case 0x690c49:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690c4d;}
case 0x690c4d:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c50;}
case 0x690c50:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c54;}
case 0x690c54:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c58;}
case 0x690c58:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690c5b;}
case 0x690c5b:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c60;}
case 0x690c60:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690c63;}
case 0x690c63:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c68;}
case 0x690c68:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690c6b;}
case 0x690c6b:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690c6e;}
case 0x690c6e:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690c72;}
case 0x690c72:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690c75;}
case 0x690c75:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690c7b;}
case 0x690c7b:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690c80;}
case 0x690c80:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690c84;}
case 0x690c84:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690c87;}
case 0x690c87:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690c8d;}
case 0x690c8d:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690c91;}
case 0x690c91:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690c95;}
case 0x690c95:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690c99;}
case 0x690c99:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690c9f;}
case 0x690c9f:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690ca3;}
case 0x690ca3:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690ca7;}
case 0x690ca7:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690cab;}
case 0x690cab:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690cb1;}
case 0x690cb1:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690cb5;}
case 0x690cb5:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cb9;}
case 0x690cb9:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690cbd;}
case 0x690cbd:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cc1;}
case 0x690cc1:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x690cc4;}
case 0x690cc4:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cc8;}
case 0x690cc8:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690ccc;}
case 0x690ccc:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690ccf;}
case 0x690ccf:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cd4;}
case 0x690cd4:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690cd7;}
case 0x690cd7:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cdc;}
case 0x690cdc:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690cdf;}
case 0x690cdf:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690ce2;}
case 0x690ce2:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690ce6;}
case 0x690ce6:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690ce9;}
case 0x690ce9:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690cef;}
case 0x690cef:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690cf4;}
case 0x690cf4:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690cf8;}
case 0x690cf8:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690cfb;}
case 0x690cfb:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690d01;}
case 0x690d01:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690d05;}
case 0x690d05:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690d09;}
case 0x690d09:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690d0d;}
case 0x690d0d:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690d13;}
case 0x690d13:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690d17;}
case 0x690d17:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690d1b;}
case 0x690d1b:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690d1f;}
case 0x690d1f:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690d25;}
case 0x690d25:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690d29;}
case 0x690d29:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d2d;}
case 0x690d2d:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690d31;}
case 0x690d31:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d35;}
case 0x690d35:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690d39;}
case 0x690d39:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d3d;}
case 0x690d3d:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690d41;}
case 0x690d41:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690d44;}
case 0x690d44:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d49;}
case 0x690d49:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690d4c;}
case 0x690d4c:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d51;}
case 0x690d51:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690d54;}
case 0x690d54:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690d57;}
case 0x690d57:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690d5b;}
case 0x690d5b:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690d5e;}
case 0x690d5e:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690d64;}
case 0x690d64:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690d69;}
case 0x690d69:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690d6d;}
case 0x690d6d:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690d70;}
case 0x690d70:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690d76;}
case 0x690d76:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690d7a;}
case 0x690d7a:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690d7e;}
case 0x690d7e:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690d82;}
case 0x690d82:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690d88;}
case 0x690d88:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690d8c;}
case 0x690d8c:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690d90;}
case 0x690d90:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690d94;}
case 0x690d94:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690d9a;}
case 0x690d9a:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690d9e;}
case 0x690d9e:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690da2;}
case 0x690da2:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690da6;}
case 0x690da6:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690daa;}
case 0x690daa:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690dae;}
case 0x690dae:{ // MOVQ MM4,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690db2;}
case 0x690db2:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690db6;}
case 0x690db6:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690db9;}
case 0x690db9:{ // MOVQ MM5,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690dbe;}
case 0x690dbe:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690dc1;}
case 0x690dc1:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690dc6;}
case 0x690dc6:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690dc9;}
case 0x690dc9:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690dcc;}
case 0x690dcc:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690dd0;}
case 0x690dd0:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690dd3;}
case 0x690dd3:{ // PFMUL MM0,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690dd9;}
case 0x690dd9:{ // MOVQ MM7,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690dde;}
case 0x690dde:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690de2;}
case 0x690de2:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690de5;}
case 0x690de5:{ // PFMUL MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690deb;}
case 0x690deb:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690def;}
case 0x690def:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690df3;}
case 0x690df3:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690df7;}
case 0x690df7:{ // PFMUL MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690dfd;}
case 0x690dfd:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690e01;}
case 0x690e01:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690e05;}
case 0x690e05:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690e09;}
case 0x690e09:{ // PFMUL MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690e0f;}
case 0x690e0f:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690e13;}
case 0x690e13:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690e17;}
case 0x690e17:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690e1b;}
case 0x690e1b:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690e1f;}
case 0x690e1f:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e22;}
case 0x690e22:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e26;}
case 0x690e26:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e2b;}
case 0x690e2b:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690e2e;}
case 0x690e2e:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e33;}
case 0x690e33:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690e36;}
case 0x690e36:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e3b;}
case 0x690e3b:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690e3e;}
case 0x690e3e:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690e41;}
case 0x690e41:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690e45;}
case 0x690e45:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690e48;}
case 0x690e48:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690e4e;}
case 0x690e4e:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e53;}
case 0x690e53:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690e57;}
case 0x690e57:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690e5a;}
case 0x690e5a:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690e60;}
case 0x690e60:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690e64;}
case 0x690e64:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690e68;}
case 0x690e68:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690e6c;}
case 0x690e6c:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690e72;}
case 0x690e72:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690e76;}
case 0x690e76:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690e7a;}
case 0x690e7a:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690e7e;}
case 0x690e7e:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690e84;}
case 0x690e84:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690e88;}
case 0x690e88:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e8c;}
case 0x690e8c:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690e90;}
case 0x690e90:{ // MOVQ MM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e94;}
case 0x690e94:{ // MOVQ qword ptr [EAX],MM7
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x690e97;}
case 0x690e97:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690e9c;}
case 0x690e9c:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690ea0;}
case 0x690ea0:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690ea3;}
case 0x690ea3:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690ea8;}
case 0x690ea8:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690eab;}
case 0x690eab:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690eb0;}
case 0x690eb0:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690eb3;}
case 0x690eb3:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690eb6;}
case 0x690eb6:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690eba;}
case 0x690eba:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690ebd;}
case 0x690ebd:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690ec3;}
case 0x690ec3:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690ec8;}
case 0x690ec8:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690ecc;}
case 0x690ecc:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690ecf;}
case 0x690ecf:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690ed5;}
case 0x690ed5:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690ed9;}
case 0x690ed9:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690edd;}
case 0x690edd:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690ee1;}
case 0x690ee1:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690ee7;}
case 0x690ee7:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690eeb;}
case 0x690eeb:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690eef;}
case 0x690eef:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690ef3;}
case 0x690ef3:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690ef9;}
case 0x690ef9:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690efd;}
case 0x690efd:{ // MOVQ MM0,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f01;}
case 0x690f01:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690f05;}
case 0x690f05:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f09;}
case 0x690f09:{ // MOVQ qword ptr [EAX + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690f0d;}
case 0x690f0d:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f12;}
case 0x690f12:{ // MOVQ qword ptr [EAX + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690f16;}
case 0x690f16:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690f19;}
case 0x690f19:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f1e;}
case 0x690f1e:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690f21;}
case 0x690f21:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f26;}
case 0x690f26:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690f29;}
case 0x690f29:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690f2c;}
case 0x690f2c:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690f30;}
case 0x690f30:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690f33;}
case 0x690f33:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690f39;}
case 0x690f39:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f3e;}
case 0x690f3e:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690f42;}
case 0x690f42:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690f45;}
case 0x690f45:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690f4b;}
case 0x690f4b:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690f4f;}
case 0x690f4f:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690f53;}
case 0x690f53:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690f57;}
case 0x690f57:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690f5d;}
case 0x690f5d:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690f61;}
case 0x690f61:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690f65;}
case 0x690f65:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690f69;}
case 0x690f69:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690f6f;}
case 0x690f6f:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690f73;}
case 0x690f73:{ // MOVQ MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f77;}
case 0x690f77:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690f7b;}
case 0x690f7b:{ // MOVQ MM1,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f7f;}
case 0x690f7f:{ // MOVQ qword ptr [EAX + 0x20],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690f83;}
case 0x690f83:{ // MOVQ MM4,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f88;}
case 0x690f88:{ // MOVQ qword ptr [EAX + 0x28],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690f8c;}
case 0x690f8c:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x690f8f;}
case 0x690f8f:{ // MOVQ MM5,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f94;}
case 0x690f94:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x690f97;}
case 0x690f97:{ // MOVQ MM6,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690f9c;}
case 0x690f9c:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x690f9f;}
case 0x690f9f:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x690fa2;}
case 0x690fa2:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x690fa6;}
case 0x690fa6:{ // PUNPCKHDQ MM2,MM2
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x690fa9;}
case 0x690fa9:{ // PFMUL MM0,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x690faf;}
case 0x690faf:{ // MOVQ MM7,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x690fb4;}
case 0x690fb4:{ // PFMUL MM5,MM2
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x690fb8;}
case 0x690fb8:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x690fbb;}
case 0x690fbb:{ // PFMUL MM2,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x690fc1;}
case 0x690fc1:{ // PFADD MM5,MM4
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x690fc5;}
case 0x690fc5:{ // PFMUL MM6,MM1
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x690fc9;}
case 0x690fc9:{ // PFADD MM2,MM0
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x690fcd;}
case 0x690fcd:{ // PFMUL MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x690fd3;}
case 0x690fd3:{ // PFADD MM6,MM5
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x690fd7;}
case 0x690fd7:{ // PFMUL MM7,MM3
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x690fdb;}
case 0x690fdb:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x690fdf;}
case 0x690fdf:{ // PFMUL MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x690fe5;}
case 0x690fe5:{ // PFADD MM7,MM6
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1160)}));
return 0x690fe9;}
case 0x690fe9:{ // PFADD MM3,MM2
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x690fed;}
case 0x690fed:{ // MOVQ qword ptr [EAX + 0x30],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690ff1;}
case 0x690ff1:{ // MOVQ qword ptr [EAX + 0x38],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x690ff5;}
case 0x690ff5:{ // JMP 0x006910c9
return 0x6910c9;
return 0x690ffa;}
case 0x690ffa:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x690ffd;}
case 0x690ffd:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x690fff;}
case 0x690fff:{ // JZ 0x00691059
if(r<1>(c,0x206)){return 0x691059;}
return 0x691001;}
default:missing_instruction(c.pc);}}
}
