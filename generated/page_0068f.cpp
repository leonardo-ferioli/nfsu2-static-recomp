#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_68f(Cpu& c){switch(c.pc){
case 0x68f003:{ // MOVD dword ptr [ESP],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f007;}
case 0x68f007:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f00b;}
case 0x68f00b:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f00f;}
case 0x68f00f:{ // CALL 0x006d4560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f014ull);
return 0x6d4560;
return 0x68f014;}
case 0x68f014:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f017;}
case 0x68f017:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f01b;}
case 0x68f01b:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f01f;}
case 0x68f01f:{ // PAND MM3,qword ptr [0x007b7198]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7198)));
return 0x68f026;}
case 0x68f026:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f02a;}
case 0x68f02a:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f02e;}
case 0x68f02e:{ // PFCMPGE MM3,qword ptr [0x007b71a0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71a0)}));
return 0x68f036;}
case 0x68f036:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f039;}
case 0x68f039:{ // MOVQ MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f03c;}
case 0x68f03c:{ // MOVQ MM2,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f040;}
case 0x68f040:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f042;}
case 0x68f042:{ // JZ 0x0068f063
if(r<1>(c,0x206)){return 0x68f063;}
return 0x68f044;}
case 0x68f044:{ // MOVD MM3,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f048;}
case 0x68f048:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f04c;}
case 0x68f04c:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f04f;}
case 0x68f04f:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f053;}
case 0x68f053:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f057;}
case 0x68f057:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f05b;}
case 0x68f05b:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f05f;}
case 0x68f05f:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f063;}
case 0x68f063:{ // PAND MM2,qword ptr [0x007b71a8]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71a8)));
return 0x68f06a;}
case 0x68f06a:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68f06d;}
case 0x68f06d:{ // MOVQ qword ptr [EAX + 0x8],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68f071;}
case 0x68f071:{ // FEMMS
user_op(c,251,{});
return 0x68f073;}
case 0x68f073:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f076;}
case 0x68f076:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x68f079;}
case 0x68f079:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f07d;}
case 0x68f07d:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f080;}
case 0x68f080:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f083;}
case 0x68f083:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f087;}
case 0x68f087:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f08b;}
case 0x68f08b:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f08f;}
case 0x68f08f:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68f093;}
case 0x68f093:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f097;}
case 0x68f097:{ // PFRSQRT MM1,MM0
wr<8>(c,0x1110,user_op(c,524533,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f09b;}
case 0x68f09b:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68f09e;}
case 0x68f09e:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f0a2;}
case 0x68f0a2:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f0a6;}
case 0x68f0a6:{ // PFRSQIT1 MM1,MM0
wr<8>(c,0x1110,user_op(c,524535,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f0aa;}
case 0x68f0aa:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f0ae;}
case 0x68f0ae:{ // PFRCPIT2 MM1,MM2
wr<8>(c,0x1110,user_op(c,524536,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x68f0b2;}
case 0x68f0b2:{ // MOVD dword ptr [ESP],MM1
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f0b6;}
case 0x68f0b6:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68f0ba;}
case 0x68f0ba:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f0bfull);
return 0x6d4460;
return 0x68f0bf;}
case 0x68f0bf:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f0c2;}
case 0x68f0c2:{ // PAND MM0,qword ptr [0x007b7190]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b7190)));
return 0x68f0c9;}
case 0x68f0c9:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f0cd;}
case 0x68f0cd:{ // PFCMPGE MM0,qword ptr [0x007b71a0]
wr<8>(c,0x1100,user_op(c,524522,{r<8>(c,0x1100),m<8>(c,0x7b71a0)}));
return 0x68f0d5;}
case 0x68f0d5:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f0d9;}
case 0x68f0d9:{ // PUNPCKHDQ MM0,MM0
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x68f0dc;}
case 0x68f0dc:{ // MOVD ECX,MM0
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x68f0df;}
case 0x68f0df:{ // MOVQ MM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f0e2;}
case 0x68f0e2:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68f0e5;}
case 0x68f0e5:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x68f0e8;}
case 0x68f0e8:{ // TEST ECX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4000,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4000),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f0ee;}
case 0x68f0ee:{ // PFMUL MM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68f0f3;}
case 0x68f0f3:{ // MOVD MM3,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f0f7;}
case 0x68f0f7:{ // JZ 0x0068f104
if(r<1>(c,0x206)){return 0x68f104;}
return 0x68f0f9;}
case 0x68f0f9:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x68f0fc;}
case 0x68f0fc:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x68f100;}
case 0x68f100:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f104;}
case 0x68f104:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x68f107;}
case 0x68f107:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68f10a;}
case 0x68f10a:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68f10e;}
case 0x68f10e:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f112;}
case 0x68f112:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f116;}
case 0x68f116:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f119;}
case 0x68f119:{ // FEMMS
user_op(c,251,{});
return 0x68f11b;}
case 0x68f11b:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x68f11e;}
case 0x68f11e:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68f120;}
case 0x68f120:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68f121;}
case 0x68f121:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68f123;}
case 0x68f123:{ // SUB ESP,0xa0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xa0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xa0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xa0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f129;}
case 0x68f129:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f12c;}
case 0x68f12c:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f12f;}
case 0x68f12f:{ // MOV ECX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f132;}
case 0x68f132:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f135;}
case 0x68f135:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f139;}
case 0x68f139:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f13c;}
case 0x68f13c:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68f13f;}
case 0x68f13f:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x68f143;}
case 0x68f143:{ // MOVQ qword ptr [ESP + 0x8],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f148;}
case 0x68f148:{ // MOVQ MM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f14b;}
case 0x68f14b:{ // MOVQ MM5,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f14f;}
case 0x68f14f:{ // MOVQ qword ptr [ESP + 0x10],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f154;}
case 0x68f154:{ // PFADD MM0,MM4
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f158;}
case 0x68f158:{ // MOVQ qword ptr [ESP + 0x18],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f15d;}
case 0x68f15d:{ // PFADD MM1,MM5
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x68f161;}
case 0x68f161:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x68f165;}
case 0x68f165:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f169;}
case 0x68f169:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x68f16d;}
case 0x68f16d:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f171;}
case 0x68f171:{ // MOV EDX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f174;}
case 0x68f174:{ // PFMUL MM2,MM2
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x68f178;}
case 0x68f178:{ // PFMUL MM3,MM3
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x68f17c;}
case 0x68f17c:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68f180;}
case 0x68f180:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f184;}
case 0x68f184:{ // MOVQ MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f187;}
case 0x68f187:{ // MOVQ MM7,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f18b;}
case 0x68f18b:{ // MOVQ qword ptr [ESP + 0x20],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f190;}
case 0x68f190:{ // MOVQ qword ptr [ESP + 0x28],MM7
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f195;}
case 0x68f195:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f198;}
case 0x68f198:{ // MOVQ MM3,MM5
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f19b;}
case 0x68f19b:{ // PFADD MM4,MM6
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68f19f;}
case 0x68f19f:{ // PFADD MM5,MM7
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68f1a3;}
case 0x68f1a3:{ // PFSUB MM1,MM6
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x68f1a7;}
case 0x68f1a7:{ // PFSUB MM3,MM7
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x68f1ab;}
case 0x68f1ab:{ // PFMUL MM4,MM4
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x68f1af;}
case 0x68f1af:{ // PFMUL MM5,MM5
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x68f1b3;}
case 0x68f1b3:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f1b7;}
case 0x68f1b7:{ // PFMUL MM3,MM3
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x68f1bb;}
case 0x68f1bb:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f1bf;}
case 0x68f1bf:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f1c3;}
case 0x68f1c3:{ // PFACC MM0,MM4
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f1c7;}
case 0x68f1c7:{ // PFACC MM2,MM1
wr<8>(c,0x1120,user_op(c,524525,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f1cb;}
case 0x68f1cb:{ // PFCMPGT MM2,MM0
wr<8>(c,0x1120,user_op(c,524523,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x68f1cf;}
case 0x68f1cf:{ // PACKSSWB MM2,MM2
wr<8>(c,0x1120,user_op(c,524424,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x68f1d2;}
case 0x68f1d2:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x68f1d5;}
case 0x68f1d5:{ // TEST EAX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa3a00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa3a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f1da;}
case 0x68f1da:{ // MOVQ MM0,qword ptr [0x007b7180]
wr<8>(c,0x1100,eval<Op::COPY,8,8>(m<8>(c,0x7b7180)));
return 0x68f1e1;}
case 0x68f1e1:{ // JZ 0x0068f1fc
if(r<1>(c,0x206)){return 0x68f1fc;}
return 0x68f1e3;}
case 0x68f1e3:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f1e6;}
case 0x68f1e6:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f1e9;}
case 0x68f1e9:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f1ec;}
case 0x68f1ec:{ // PXOR MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x68f1ef;}
case 0x68f1ef:{ // PXOR MM2,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),u<8>(c,0xa400)));
return 0x68f1f3;}
case 0x68f1f3:{ // MOVQ qword ptr [ESP],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x68f1f7;}
case 0x68f1f7:{ // MOVQ qword ptr [ESP + 0x8],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f1fc;}
case 0x68f1fc:{ // TEST EAX,0x10000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa3a00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x10000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa3a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f201;}
case 0x68f201:{ // JZ 0x0068f21d
if(r<1>(c,0x206)){return 0x68f21d;}
return 0x68f203;}
case 0x68f203:{ // MOV ECX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f206;}
case 0x68f206:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f209;}
case 0x68f209:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f20c;}
case 0x68f20c:{ // PXOR MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),u<8>(c,0xa400)));
return 0x68f20f;}
case 0x68f20f:{ // PXOR MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),u<8>(c,0xa400)));
return 0x68f213;}
case 0x68f213:{ // MOVQ qword ptr [ESP + 0x20],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f218;}
case 0x68f218:{ // MOVQ qword ptr [ESP + 0x28],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f21d;}
case 0x68f21d:{ // MOV ECX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f220;}
case 0x68f220:{ // MOVQ MM6,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f225;}
case 0x68f225:{ // MOVQ MM7,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f22a;}
case 0x68f22a:{ // MOVQ MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f22d;}
case 0x68f22d:{ // MOVQ MM4,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f231;}
case 0x68f231:{ // MOVQ MM3,MM6
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68f234;}
case 0x68f234:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x68f237;}
case 0x68f237:{ // PFADD MM6,MM1
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1110)}));
return 0x68f23b;}
case 0x68f23b:{ // MOVQ qword ptr [ESP + 0x30],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f240;}
case 0x68f240:{ // PFADD MM7,MM4
wr<8>(c,0x1170,user_op(c,524526,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x68f244;}
case 0x68f244:{ // MOVQ qword ptr [ESP + 0x38],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f249;}
case 0x68f249:{ // PFSUB MM3,MM1
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x68f24d;}
case 0x68f24d:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x68f251;}
case 0x68f251:{ // PFMUL MM6,MM6
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x68f255;}
case 0x68f255:{ // PFMUL MM7,MM7
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x68f259;}
case 0x68f259:{ // PFMUL MM3,MM3
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x68f25d;}
case 0x68f25d:{ // PFMUL MM5,MM5
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1150)}));
return 0x68f261;}
case 0x68f261:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f265;}
case 0x68f265:{ // PFADD MM3,MM5
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x68f269;}
case 0x68f269:{ // PFACC MM6,MM6
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x68f26d;}
case 0x68f26d:{ // PFACC MM3,MM3
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x68f271;}
case 0x68f271:{ // PFCMPGT MM3,MM6
wr<8>(c,0x1130,user_op(c,524523,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x68f275;}
case 0x68f275:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f278;}
case 0x68f278:{ // TEST EAX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa3a00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa3a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f27d;}
case 0x68f27d:{ // JZ 0x0068f296
if(r<1>(c,0x206)){return 0x68f296;}
return 0x68f27f;}
case 0x68f27f:{ // MOV EDX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f282;}
case 0x68f282:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f285;}
case 0x68f285:{ // PXOR MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),u<8>(c,0xa400)));
return 0x68f288;}
case 0x68f288:{ // PXOR MM2,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),u<8>(c,0xa400)));
return 0x68f28c;}
case 0x68f28c:{ // MOVQ qword ptr [ESP + 0x30],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f291;}
case 0x68f291:{ // MOVQ qword ptr [ESP + 0x38],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f296;}
case 0x68f296:{ // MOVQ MM0,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f29b;}
case 0x68f29b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f29e;}
case 0x68f29e:{ // MOVQ MM2,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f2a3;}
case 0x68f2a3:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f2a6;}
case 0x68f2a6:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f2aa;}
case 0x68f2aa:{ // PFMUL MM2,MM2
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x68f2ae;}
case 0x68f2ae:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68f2b2;}
case 0x68f2b2:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f2b6;}
case 0x68f2b6:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f2b9;}
case 0x68f2b9:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f2bd;}
case 0x68f2bd:{ // PFCMPGT MM5,qword ptr [0x007b71c8]
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),m<8>(c,0x7b71c8)}));
return 0x68f2c5;}
case 0x68f2c5:{ // PXOR MM1,qword ptr [0x007b7228]
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),m<8>(c,0x7b7228)));
return 0x68f2cc;}
case 0x68f2cc:{ // PXOR MM3,qword ptr [0x007b7170]
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7170)));
return 0x68f2d3;}
case 0x68f2d3:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f2d7;}
case 0x68f2d7:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x68f2da;}
case 0x68f2da:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x68f2dd;}
case 0x68f2dd:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f2e1;}
case 0x68f2e1:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f2e5;}
case 0x68f2e5:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f2e9;}
case 0x68f2e9:{ // MOVQ qword ptr [ESP + 0x40],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f2ee;}
case 0x68f2ee:{ // MOVQ qword ptr [ESP + 0x48],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f2f3;}
case 0x68f2f3:{ // MOVQ MM2,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f2f7;}
case 0x68f2f7:{ // MOVQ MM3,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f2fc;}
case 0x68f2fc:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f2ff;}
case 0x68f2ff:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f302;}
case 0x68f302:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f307;}
case 0x68f307:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68f30a;}
case 0x68f30a:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f30d;}
case 0x68f30d:{ // MOVQ MM1,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f312;}
case 0x68f312:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68f315;}
case 0x68f315:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f318;}
case 0x68f318:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f31b;}
case 0x68f31b:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f31e;}
case 0x68f31e:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f322;}
case 0x68f322:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f329;}
case 0x68f329:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f32d;}
case 0x68f32d:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68f334;}
case 0x68f334:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68f338;}
case 0x68f338:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68f33c;}
case 0x68f33c:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f340;}
case 0x68f340:{ // MOVQ MM3,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f344;}
case 0x68f344:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f348;}
case 0x68f348:{ // MOVQ MM5,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f34d;}
case 0x68f34d:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68f351;}
case 0x68f351:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68f358;}
case 0x68f358:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68f35c;}
case 0x68f35c:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68f360;}
case 0x68f360:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f367;}
case 0x68f367:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f36b;}
case 0x68f36b:{ // MOVQ qword ptr [ESP + 0x80],MM4
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f373;}
case 0x68f373:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68f377;}
case 0x68f377:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f37b;}
case 0x68f37b:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68f37f;}
case 0x68f37f:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68f383;}
case 0x68f383:{ // MOVQ qword ptr [ESP + 0x88],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f38b;}
case 0x68f38b:{ // MOVQ MM2,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f390;}
case 0x68f390:{ // MOVQ MM3,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f395;}
case 0x68f395:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f398;}
case 0x68f398:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f39b;}
case 0x68f39b:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f3a0;}
case 0x68f3a0:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68f3a3;}
case 0x68f3a3:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f3a6;}
case 0x68f3a6:{ // MOVQ MM1,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f3ab;}
case 0x68f3ab:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68f3ae;}
case 0x68f3ae:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f3b1;}
case 0x68f3b1:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f3b4;}
case 0x68f3b4:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f3b7;}
case 0x68f3b7:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f3bb;}
case 0x68f3bb:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f3c2;}
case 0x68f3c2:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f3c6;}
case 0x68f3c6:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68f3cd;}
case 0x68f3cd:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68f3d1;}
case 0x68f3d1:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68f3d5;}
case 0x68f3d5:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f3d9;}
case 0x68f3d9:{ // MOVQ MM3,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f3de;}
case 0x68f3de:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f3e2;}
case 0x68f3e2:{ // MOVQ MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f3e7;}
case 0x68f3e7:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68f3eb;}
case 0x68f3eb:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68f3f2;}
case 0x68f3f2:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68f3f6;}
case 0x68f3f6:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68f3fa;}
case 0x68f3fa:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f401;}
case 0x68f401:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f405;}
case 0x68f405:{ // MOVQ qword ptr [ESP + 0x90],MM4
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f40d;}
case 0x68f40d:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68f411;}
case 0x68f411:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f415;}
case 0x68f415:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68f419;}
case 0x68f419:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68f41d;}
case 0x68f41d:{ // MOVQ qword ptr [ESP + 0x98],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f425;}
case 0x68f425:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f428;}
case 0x68f428:{ // MOVQ MM1,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f430;}
case 0x68f430:{ // MOVQ MM2,qword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f438;}
case 0x68f438:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f43b;}
case 0x68f43b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f43e;}
case 0x68f43e:{ // MOVQ MM0,MM3
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f441;}
case 0x68f441:{ // PFCMPGE MM3,qword ptr [0x007b71e0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71e0)}));
return 0x68f449;}
case 0x68f449:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f44c;}
case 0x68f44c:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f44e;}
case 0x68f44e:{ // JNZ 0x0068f4b6
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68f4b6;}
return 0x68f450;}
case 0x68f450:{ // CALL 0x006d3e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f455ull);
return 0x6d3e80;
return 0x68f455;}
case 0x68f455:{ // MOVD dword ptr [ESP],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f459;}
case 0x68f459:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f45d;}
case 0x68f45d:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f461;}
case 0x68f461:{ // CALL 0x006d4560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f466ull);
return 0x6d4560;
return 0x68f466;}
case 0x68f466:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f469;}
case 0x68f469:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f46d;}
case 0x68f46d:{ // PAND MM3,qword ptr [0x007b7198]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7198)));
return 0x68f474;}
case 0x68f474:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f478;}
case 0x68f478:{ // PFCMPGE MM3,qword ptr [0x007b71a0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71a0)}));
return 0x68f480;}
case 0x68f480:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f483;}
case 0x68f483:{ // MOVQ MM1,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f48b;}
case 0x68f48b:{ // MOVQ MM2,qword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f493;}
case 0x68f493:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f495;}
case 0x68f495:{ // JZ 0x0068f4b6
if(r<1>(c,0x206)){return 0x68f4b6;}
return 0x68f497;}
case 0x68f497:{ // MOVD MM3,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f49b;}
case 0x68f49b:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f49f;}
case 0x68f49f:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f4a2;}
case 0x68f4a2:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f4a6;}
case 0x68f4a6:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f4aa;}
case 0x68f4aa:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f4ae;}
case 0x68f4ae:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f4b2;}
case 0x68f4b2:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f4b6;}
case 0x68f4b6:{ // PAND MM2,qword ptr [0x007b71a8]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71a8)));
return 0x68f4bd;}
case 0x68f4bd:{ // MOVQ qword ptr [ESP + 0x5c],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x5cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f4c2;}
case 0x68f4c2:{ // MOVQ qword ptr [ESP + 0x64],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x64ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f4c7;}
case 0x68f4c7:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f4ca;}
case 0x68f4ca:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f4cd;}
case 0x68f4cd:{ // MOVQ MM1,qword ptr [ESP + 0x9c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x9cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f4d5;}
case 0x68f4d5:{ // MOVQ MM2,qword ptr [ESP + 0xa4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f4dd;}
case 0x68f4dd:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f4e0;}
case 0x68f4e0:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f4e3;}
case 0x68f4e3:{ // MOVQ MM0,MM3
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f4e6;}
case 0x68f4e6:{ // PFCMPGE MM3,qword ptr [0x007b71e0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71e0)}));
return 0x68f4ee;}
case 0x68f4ee:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f4f1;}
case 0x68f4f1:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f4f3;}
case 0x68f4f3:{ // JNZ 0x0068f55b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68f55b;}
return 0x68f4f5;}
case 0x68f4f5:{ // CALL 0x006d3e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f4faull);
return 0x6d3e80;
return 0x68f4fa;}
case 0x68f4fa:{ // MOVD dword ptr [ESP],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f4fe;}
case 0x68f4fe:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f502;}
case 0x68f502:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f506;}
case 0x68f506:{ // CALL 0x006d4560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f50bull);
return 0x6d4560;
return 0x68f50b;}
case 0x68f50b:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f50e;}
case 0x68f50e:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f512;}
case 0x68f512:{ // PAND MM3,qword ptr [0x007b7198]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7198)));
return 0x68f519;}
case 0x68f519:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f51d;}
case 0x68f51d:{ // PFCMPGE MM3,qword ptr [0x007b71a0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71a0)}));
return 0x68f525;}
case 0x68f525:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f528;}
case 0x68f528:{ // MOVQ MM1,qword ptr [ESP + 0x9c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x9cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f530;}
case 0x68f530:{ // MOVQ MM2,qword ptr [ESP + 0xa4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f538;}
case 0x68f538:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f53a;}
case 0x68f53a:{ // JZ 0x0068f55b
if(r<1>(c,0x206)){return 0x68f55b;}
return 0x68f53c;}
case 0x68f53c:{ // MOVD MM3,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f540;}
case 0x68f540:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f544;}
case 0x68f544:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f547;}
case 0x68f547:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f54b;}
case 0x68f54b:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f54f;}
case 0x68f54f:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f553;}
case 0x68f553:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f557;}
case 0x68f557:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f55b;}
case 0x68f55b:{ // PAND MM2,qword ptr [0x007b71a8]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71a8)));
return 0x68f562;}
case 0x68f562:{ // MOVQ qword ptr [ESP + 0x6c],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f567;}
case 0x68f567:{ // MOVQ qword ptr [ESP + 0x74],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x74ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f56c;}
case 0x68f56c:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f56f;}
case 0x68f56f:{ // MOVQ MM0,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f574;}
case 0x68f574:{ // MOVQ MM1,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f579;}
case 0x68f579:{ // PFADD MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68f57f;}
case 0x68f57f:{ // PFADD MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68f585;}
case 0x68f585:{ // PFMUL MM0,qword ptr [0x007bab50]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7bab50)}));
return 0x68f58d;}
case 0x68f58d:{ // PFMUL MM1,qword ptr [0x007bab50]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7bab50)}));
return 0x68f595;}
case 0x68f595:{ // MOVQ qword ptr [ESP + 0x80],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f59d;}
case 0x68f59d:{ // MOVQ qword ptr [ESP + 0x88],MM1
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f5a5;}
case 0x68f5a5:{ // MOVQ MM7,qword ptr [0x007b71a0]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7b71a0)));
return 0x68f5ac;}
case 0x68f5ac:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f5af;}
case 0x68f5af:{ // MOVQ MM0,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f5b7;}
case 0x68f5b7:{ // MOVD MM1,dword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f5bf;}
case 0x68f5bf:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f5c3;}
case 0x68f5c3:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f5c7;}
case 0x68f5c7:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68f5cb;}
case 0x68f5cb:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f5cf;}
case 0x68f5cf:{ // PFRSQRT MM1,MM0
wr<8>(c,0x1110,user_op(c,524533,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f5d3;}
case 0x68f5d3:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68f5d6;}
case 0x68f5d6:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68f5da;}
case 0x68f5da:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f5de;}
case 0x68f5de:{ // PFRSQIT1 MM1,MM0
wr<8>(c,0x1110,user_op(c,524535,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f5e2;}
case 0x68f5e2:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f5e6;}
case 0x68f5e6:{ // PFRCPIT2 MM1,MM2
wr<8>(c,0x1110,user_op(c,524536,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x68f5ea;}
case 0x68f5ea:{ // MOVD dword ptr [ESP],MM1
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f5ee;}
case 0x68f5ee:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68f5f2;}
case 0x68f5f2:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f5f7ull);
return 0x6d4460;
return 0x68f5f7;}
case 0x68f5f7:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f5fa;}
case 0x68f5fa:{ // PAND MM0,qword ptr [0x007b7190]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b7190)));
return 0x68f601;}
case 0x68f601:{ // PFCMPGE MM0,qword ptr [0x007b71a0]
wr<8>(c,0x1100,user_op(c,524522,{r<8>(c,0x1100),m<8>(c,0x7b71a0)}));
return 0x68f609;}
case 0x68f609:{ // PUNPCKHDQ MM0,MM0
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x68f60c;}
case 0x68f60c:{ // MOVD ECX,MM0
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x68f60f;}
case 0x68f60f:{ // MOVQ MM2,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f617;}
case 0x68f617:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68f61a;}
case 0x68f61a:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x68f61d;}
case 0x68f61d:{ // TEST ECX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4000,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4000),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f623;}
case 0x68f623:{ // PFMUL MM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68f628;}
case 0x68f628:{ // MOVD MM3,dword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f630;}
case 0x68f630:{ // JZ 0x0068f63d
if(r<1>(c,0x206)){return 0x68f63d;}
return 0x68f632;}
case 0x68f632:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x68f635;}
case 0x68f635:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x68f639;}
case 0x68f639:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f63d;}
case 0x68f63d:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x68f640;}
case 0x68f640:{ // MOVQ qword ptr [ESP + 0x7c],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x7cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f645;}
case 0x68f645:{ // MOVQ qword ptr [ESP + 0x84],MM3
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x84ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f64d;}
case 0x68f64d:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f651;}
case 0x68f651:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f655;}
case 0x68f655:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f658;}
case 0x68f658:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f65b;}
case 0x68f65b:{ // MOVQ MM2,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f660;}
case 0x68f660:{ // MOVQ MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f665;}
case 0x68f665:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f668;}
case 0x68f668:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f66b;}
case 0x68f66b:{ // MOVQ MM0,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f670;}
case 0x68f670:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68f673;}
case 0x68f673:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f676;}
case 0x68f676:{ // MOVQ MM1,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f67b;}
case 0x68f67b:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68f67e;}
case 0x68f67e:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f681;}
case 0x68f681:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f684;}
case 0x68f684:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f687;}
case 0x68f687:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f68b;}
case 0x68f68b:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f692;}
case 0x68f692:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f696;}
case 0x68f696:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68f69d;}
case 0x68f69d:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68f6a1;}
case 0x68f6a1:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68f6a5;}
case 0x68f6a5:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f6a9;}
case 0x68f6a9:{ // MOVQ MM3,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f6ae;}
case 0x68f6ae:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f6b2;}
case 0x68f6b2:{ // MOVQ MM5,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f6b7;}
case 0x68f6b7:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68f6bb;}
case 0x68f6bb:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68f6c2;}
case 0x68f6c2:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68f6c6;}
case 0x68f6c6:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68f6ca;}
case 0x68f6ca:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f6d1;}
case 0x68f6d1:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f6d5;}
case 0x68f6d5:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68f6d8;}
case 0x68f6d8:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68f6dc;}
case 0x68f6dc:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f6e0;}
case 0x68f6e0:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68f6e4;}
case 0x68f6e4:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68f6e8;}
case 0x68f6e8:{ // MOVQ qword ptr [EAX + 0x8],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68f6ec;}
case 0x68f6ec:{ // MOVQ MM0,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f6f1;}
case 0x68f6f1:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f6f4;}
case 0x68f6f4:{ // MOVQ MM2,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f6f9;}
case 0x68f6f9:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f6fc;}
case 0x68f6fc:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f700;}
case 0x68f700:{ // PFMUL MM2,MM2
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x68f704;}
case 0x68f704:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68f708;}
case 0x68f708:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68f70c;}
case 0x68f70c:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f70f;}
case 0x68f70f:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f713;}
case 0x68f713:{ // PFCMPGT MM5,qword ptr [0x007b71c8]
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),m<8>(c,0x7b71c8)}));
return 0x68f71b;}
case 0x68f71b:{ // PXOR MM1,qword ptr [0x007b7228]
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),m<8>(c,0x7b7228)));
return 0x68f722;}
case 0x68f722:{ // PXOR MM3,qword ptr [0x007b7170]
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7170)));
return 0x68f729;}
case 0x68f729:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f72d;}
case 0x68f72d:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x68f730;}
case 0x68f730:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x68f733;}
case 0x68f733:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f737;}
case 0x68f737:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68f73b;}
case 0x68f73b:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f73f;}
case 0x68f73f:{ // MOVQ qword ptr [ESP + 0x40],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f744;}
case 0x68f744:{ // MOVQ qword ptr [ESP + 0x48],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f749;}
case 0x68f749:{ // MOVQ MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f74e;}
case 0x68f74e:{ // MOVQ MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f753;}
case 0x68f753:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f756;}
case 0x68f756:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f759;}
case 0x68f759:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f75e;}
case 0x68f75e:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68f761;}
case 0x68f761:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f764;}
case 0x68f764:{ // MOVQ MM1,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f769;}
case 0x68f769:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68f76c;}
case 0x68f76c:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f76f;}
case 0x68f76f:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f772;}
case 0x68f772:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f775;}
case 0x68f775:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f779;}
case 0x68f779:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f780;}
case 0x68f780:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f784;}
case 0x68f784:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68f78b;}
case 0x68f78b:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68f78f;}
case 0x68f78f:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68f793;}
case 0x68f793:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f797;}
case 0x68f797:{ // MOVQ MM3,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f79c;}
case 0x68f79c:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f7a0;}
case 0x68f7a0:{ // MOVQ MM5,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f7a5;}
case 0x68f7a5:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68f7a9;}
case 0x68f7a9:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68f7b0;}
case 0x68f7b0:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68f7b4;}
case 0x68f7b4:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68f7b8;}
case 0x68f7b8:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f7bf;}
case 0x68f7bf:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f7c3;}
case 0x68f7c3:{ // MOVQ qword ptr [ESP + 0x80],MM4
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f7cb;}
case 0x68f7cb:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68f7cf;}
case 0x68f7cf:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f7d3;}
case 0x68f7d3:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68f7d7;}
case 0x68f7d7:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68f7db;}
case 0x68f7db:{ // MOVQ qword ptr [ESP + 0x88],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f7e3;}
case 0x68f7e3:{ // MOVQ MM2,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f7e8;}
case 0x68f7e8:{ // MOVQ MM3,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f7ed;}
case 0x68f7ed:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f7f0;}
case 0x68f7f0:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f7f3;}
case 0x68f7f3:{ // MOVQ MM0,qword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f7f8;}
case 0x68f7f8:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68f7fb;}
case 0x68f7fb:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f7fe;}
case 0x68f7fe:{ // MOVQ MM1,qword ptr [ESP + 0x48]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x48ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f803;}
case 0x68f803:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68f806;}
case 0x68f806:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f809;}
case 0x68f809:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68f80c;}
case 0x68f80c:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68f80f;}
case 0x68f80f:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68f813;}
case 0x68f813:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f81a;}
case 0x68f81a:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f81e;}
case 0x68f81e:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68f825;}
case 0x68f825:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68f829;}
case 0x68f829:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68f82d;}
case 0x68f82d:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f831;}
case 0x68f831:{ // MOVQ MM3,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f836;}
case 0x68f836:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68f83a;}
case 0x68f83a:{ // MOVQ MM5,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f83f;}
case 0x68f83f:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68f843;}
case 0x68f843:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68f84a;}
case 0x68f84a:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68f84e;}
case 0x68f84e:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68f852;}
case 0x68f852:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68f859;}
case 0x68f859:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f85d;}
case 0x68f85d:{ // MOVQ qword ptr [ESP + 0x90],MM4
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x90ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f865;}
case 0x68f865:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68f869;}
case 0x68f869:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68f86d;}
case 0x68f86d:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68f871;}
case 0x68f871:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68f875;}
case 0x68f875:{ // MOVQ qword ptr [ESP + 0x98],MM6
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x98ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f87d;}
case 0x68f87d:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f880;}
case 0x68f880:{ // MOVQ MM1,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f888;}
case 0x68f888:{ // MOVQ MM2,qword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f890;}
case 0x68f890:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f893;}
case 0x68f893:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f896;}
case 0x68f896:{ // MOVQ MM0,MM3
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f899;}
case 0x68f899:{ // PFCMPGE MM3,qword ptr [0x007b71e0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71e0)}));
return 0x68f8a1;}
case 0x68f8a1:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f8a4;}
case 0x68f8a4:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f8a6;}
case 0x68f8a6:{ // JNZ 0x0068f90e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68f90e;}
return 0x68f8a8;}
case 0x68f8a8:{ // CALL 0x006d3e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f8adull);
return 0x6d3e80;
return 0x68f8ad;}
case 0x68f8ad:{ // MOVD dword ptr [ESP],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f8b1;}
case 0x68f8b1:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f8b5;}
case 0x68f8b5:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f8b9;}
case 0x68f8b9:{ // CALL 0x006d4560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f8beull);
return 0x6d4560;
return 0x68f8be;}
case 0x68f8be:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f8c1;}
case 0x68f8c1:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f8c5;}
case 0x68f8c5:{ // PAND MM3,qword ptr [0x007b7198]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7198)));
return 0x68f8cc;}
case 0x68f8cc:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f8d0;}
case 0x68f8d0:{ // PFCMPGE MM3,qword ptr [0x007b71a0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71a0)}));
return 0x68f8d8;}
case 0x68f8d8:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f8db;}
case 0x68f8db:{ // MOVQ MM1,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f8e3;}
case 0x68f8e3:{ // MOVQ MM2,qword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f8eb;}
case 0x68f8eb:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f8ed;}
case 0x68f8ed:{ // JZ 0x0068f90e
if(r<1>(c,0x206)){return 0x68f90e;}
return 0x68f8ef;}
case 0x68f8ef:{ // MOVD MM3,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f8f3;}
case 0x68f8f3:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f8f7;}
case 0x68f8f7:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f8fa;}
case 0x68f8fa:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f8fe;}
case 0x68f8fe:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f902;}
case 0x68f902:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f906;}
case 0x68f906:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f90a;}
case 0x68f90a:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f90e;}
case 0x68f90e:{ // PAND MM2,qword ptr [0x007b71a8]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71a8)));
return 0x68f915;}
case 0x68f915:{ // MOVQ qword ptr [ESP + 0x5c],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x5cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f91a;}
case 0x68f91a:{ // MOVQ qword ptr [ESP + 0x64],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x64ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f91f;}
case 0x68f91f:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f922;}
case 0x68f922:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f925;}
case 0x68f925:{ // MOVQ MM1,qword ptr [ESP + 0x9c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x9cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f92d;}
case 0x68f92d:{ // MOVQ MM2,qword ptr [ESP + 0xa4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f935;}
case 0x68f935:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68f938;}
case 0x68f938:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68f93b;}
case 0x68f93b:{ // MOVQ MM0,MM3
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68f93e;}
case 0x68f93e:{ // PFCMPGE MM3,qword ptr [0x007b71e0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71e0)}));
return 0x68f946;}
case 0x68f946:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f949;}
case 0x68f949:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f94b;}
case 0x68f94b:{ // JNZ 0x0068f9b3
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68f9b3;}
return 0x68f94d;}
case 0x68f94d:{ // CALL 0x006d3e80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f952ull);
return 0x6d3e80;
return 0x68f952;}
case 0x68f952:{ // MOVD dword ptr [ESP],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68f956;}
case 0x68f956:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f95a;}
case 0x68f95a:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68f95e;}
case 0x68f95e:{ // CALL 0x006d4560
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68f963ull);
return 0x6d4560;
return 0x68f963;}
case 0x68f963:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68f966;}
case 0x68f966:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f96a;}
case 0x68f96a:{ // PAND MM3,qword ptr [0x007b7198]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7198)));
return 0x68f971;}
case 0x68f971:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68f975;}
case 0x68f975:{ // PFCMPGE MM3,qword ptr [0x007b71a0]
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),m<8>(c,0x7b71a0)}));
return 0x68f97d;}
case 0x68f97d:{ // MOVD ECX,MM3
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x68f980;}
case 0x68f980:{ // MOVQ MM1,qword ptr [ESP + 0x9c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x9cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f988;}
case 0x68f988:{ // MOVQ MM2,qword ptr [ESP + 0xa4]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0xa4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f990;}
case 0x68f990:{ // TEST ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f992;}
case 0x68f992:{ // JZ 0x0068f9b3
if(r<1>(c,0x206)){return 0x68f9b3;}
return 0x68f994;}
case 0x68f994:{ // MOVD MM3,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68f998;}
case 0x68f998:{ // PFRCP MM4,MM0
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68f99c;}
case 0x68f99c:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68f99f;}
case 0x68f99f:{ // PFRCPIT1 MM0,MM4
wr<8>(c,0x1100,user_op(c,524534,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f9a3;}
case 0x68f9a3:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x68f9a7;}
case 0x68f9a7:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68f9ab;}
case 0x68f9ab:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68f9af;}
case 0x68f9af:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68f9b3;}
case 0x68f9b3:{ // PAND MM2,qword ptr [0x007b71a8]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71a8)));
return 0x68f9ba;}
case 0x68f9ba:{ // MOVQ qword ptr [ESP + 0x6c],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f9bf;}
case 0x68f9bf:{ // MOVQ qword ptr [ESP + 0x74],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x74ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68f9c4;}
case 0x68f9c4:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68f9c7;}
case 0x68f9c7:{ // MOVQ MM0,qword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f9cc;}
case 0x68f9cc:{ // MOVQ MM1,qword ptr [ESP + 0x58]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x58ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68f9d1;}
case 0x68f9d1:{ // PFADD MM0,qword ptr [ESP + 0x60]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x60ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68f9d7;}
case 0x68f9d7:{ // PFADD MM1,qword ptr [ESP + 0x68]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x68ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68f9dd;}
case 0x68f9dd:{ // PFMUL MM0,qword ptr [0x007bab50]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7bab50)}));
return 0x68f9e5;}
case 0x68f9e5:{ // PFMUL MM1,qword ptr [0x007bab50]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7bab50)}));
return 0x68f9ed;}
case 0x68f9ed:{ // MOVQ qword ptr [ESP + 0x80],MM0
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x80ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f9f5;}
case 0x68f9f5:{ // MOVQ qword ptr [ESP + 0x88],MM1
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x88ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68f9fd;}
case 0x68f9fd:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68fa00;}
case 0x68fa00:{ // MOVQ MM0,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fa08;}
case 0x68fa08:{ // MOVD MM1,dword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68fa10;}
case 0x68fa10:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68fa14;}
case 0x68fa14:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68fa18;}
case 0x68fa18:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fa1c;}
case 0x68fa1c:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x68fa20;}
case 0x68fa20:{ // PFRSQRT MM1,MM0
wr<8>(c,0x1110,user_op(c,524533,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68fa24;}
case 0x68fa24:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fa27;}
case 0x68fa27:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68fa2b;}
case 0x68fa2b:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68fa2f;}
case 0x68fa2f:{ // PFRSQIT1 MM1,MM0
wr<8>(c,0x1110,user_op(c,524535,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68fa33;}
case 0x68fa33:{ // MOV dword ptr [ESP + 0x8],EBX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68fa37;}
case 0x68fa37:{ // PFRCPIT2 MM1,MM2
wr<8>(c,0x1110,user_op(c,524536,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x68fa3b;}
case 0x68fa3b:{ // MOVD dword ptr [ESP],MM1
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x17200));
return 0x68fa3f;}
case 0x68fa3f:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fa43;}
case 0x68fa43:{ // CALL 0x006d4460
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68fa48ull);
return 0x6d4460;
return 0x68fa48;}
case 0x68fa48:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fa4b;}
case 0x68fa4b:{ // PAND MM0,qword ptr [0x007b7190]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b7190)));
return 0x68fa52;}
case 0x68fa52:{ // PFCMPGE MM0,qword ptr [0x007b71a0]
wr<8>(c,0x1100,user_op(c,524522,{r<8>(c,0x1100),m<8>(c,0x7b71a0)}));
return 0x68fa5a;}
case 0x68fa5a:{ // PUNPCKHDQ MM0,MM0
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x68fa5d;}
case 0x68fa5d:{ // MOVD ECX,MM0
wr<4>(c,0x4,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
return 0x68fa60;}
case 0x68fa60:{ // MOVQ MM2,qword ptr [ESP + 0x8c]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x8cull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fa68;}
case 0x68fa68:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fa6b;}
case 0x68fa6b:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x68fa6e;}
case 0x68fa6e:{ // TEST ECX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4000,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4000),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4000),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4000),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68fa74;}
case 0x68fa74:{ // PFMUL MM1,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68fa79;}
case 0x68fa79:{ // MOVD MM3,dword ptr [ESP + 0x94]
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x94ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7f00)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68fa81;}
case 0x68fa81:{ // JZ 0x0068fa8e
if(r<1>(c,0x206)){return 0x68fa8e;}
return 0x68fa83;}
case 0x68fa83:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x68fa86;}
case 0x68fa86:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x68fa8a;}
case 0x68fa8a:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68fa8e;}
case 0x68fa8e:{ // PUNPCKLDQ MM3,MM0
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x68fa91;}
case 0x68fa91:{ // MOVQ qword ptr [ESP + 0x7c],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x7cull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fa96;}
case 0x68fa96:{ // MOVQ qword ptr [ESP + 0x84],MM3
wu<4>(c,0x7f00,eval<Op::INT_ADD,4,4,4>(0x84ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7f00),u<8>(c,0xa400));
return 0x68fa9e;}
case 0x68fa9e:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68faa2;}
case 0x68faa2:{ // MOV EBX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68faa6;}
case 0x68faa6:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68faa9;}
case 0x68faa9:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68faac;}
case 0x68faac:{ // MOVQ MM2,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fab1;}
case 0x68fab1:{ // MOVQ MM3,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fab6;}
case 0x68fab6:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fab9;}
case 0x68fab9:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fabc;}
case 0x68fabc:{ // MOVQ MM0,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fac1;}
case 0x68fac1:{ // PUNPCKHDQ MM4,MM2
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x68fac4;}
case 0x68fac4:{ // PUNPCKHDQ MM5,MM3
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x68fac7;}
case 0x68fac7:{ // MOVQ MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68facc;}
case 0x68facc:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68facf;}
case 0x68facf:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x68fad2;}
case 0x68fad2:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68fad5;}
case 0x68fad5:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x68fad8;}
case 0x68fad8:{ // PFMUL MM2,MM1
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x68fadc;}
case 0x68fadc:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68fae3;}
case 0x68fae3:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68fae7;}
case 0x68fae7:{ // PXOR MM2,qword ptr [0x007b7170]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7170)));
return 0x68faee;}
case 0x68faee:{ // PFMUL MM5,MM0
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1100)}));
return 0x68faf2;}
case 0x68faf2:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68faf6;}
case 0x68faf6:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68fafa;}
case 0x68fafa:{ // MOVQ MM3,qword ptr [ESP + 0x70]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x70ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68faff;}
case 0x68faff:{ // PFSUB MM4,MM5
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68fb03;}
case 0x68fb03:{ // MOVQ MM5,qword ptr [ESP + 0x78]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x78ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb08;}
case 0x68fb08:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68fb0c;}
case 0x68fb0c:{ // PXOR MM6,qword ptr [0x007b7170]
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),m<8>(c,0x7b7170)));
return 0x68fb13;}
case 0x68fb13:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x68fb17;}
case 0x68fb17:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68fb1b;}
case 0x68fb1b:{ // PXOR MM5,qword ptr [0x007b7170]
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),m<8>(c,0x7b7170)));
return 0x68fb22;}
case 0x68fb22:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68fb26;}
case 0x68fb26:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68fb29;}
case 0x68fb29:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68fb2d;}
case 0x68fb2d:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x68fb31;}
case 0x68fb31:{ // PFSUB MM5,MM3
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68fb35;}
case 0x68fb35:{ // PFACC MM6,MM5
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x68fb39;}
case 0x68fb39:{ // MOVQ qword ptr [EAX + 0x8],MM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fb3d;}
case 0x68fb3d:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fb40;}
case 0x68fb40:{ // MOVQ MM0,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb45;}
case 0x68fb45:{ // MOVQ MM1,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb4a;}
case 0x68fb4a:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68fb4d;}
case 0x68fb4d:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fb51;}
case 0x68fb51:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68fb53;}
case 0x68fb53:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68fb54;}
case 0x68fb54:{ // FEMMS
user_op(c,251,{});
return 0x68fb56;}
case 0x68fb56:{ // RET 0x1c
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
return uint32_t(r<4>(c,0x284));
return 0x68fb59;}
case 0x68fb59:{ // FEMMS
user_op(c,251,{});
return 0x68fb5b;}
case 0x68fb5b:{ // SUB ESP,0x44
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68fb5e;}
case 0x68fb5e:{ // MOV EDX,dword ptr [ESP + 0x50]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x50ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fb62;}
case 0x68fb62:{ // MOV dword ptr [ESP + 0x40],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68fb66;}
case 0x68fb66:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68fb68;}
case 0x68fb68:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68fb6b;}
case 0x68fb6b:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb6e;}
case 0x68fb6e:{ // MOVQ MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb72;}
case 0x68fb72:{ // MOVQ MM3,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb76;}
case 0x68fb76:{ // MOVQ MM4,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb7a;}
case 0x68fb7a:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fb7d;}
case 0x68fb7d:{ // PUNPCKLDQ MM0,MM1
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x68fb80;}
case 0x68fb80:{ // PUNPCKHDQ MM2,MM1
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x68fb83;}
case 0x68fb83:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fb86;}
case 0x68fb86:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x68fb8a;}
case 0x68fb8a:{ // MOVQ qword ptr [ESP + 0x10],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fb8f;}
case 0x68fb8f:{ // MOVQ MM6,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb93;}
case 0x68fb93:{ // PUNPCKLDQ MM3,MM4
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68fb96;}
case 0x68fb96:{ // MOVQ MM7,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb9a;}
case 0x68fb9a:{ // MOVQ MM0,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fb9e;}
case 0x68fb9e:{ // PUNPCKHDQ MM5,MM4
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68fba1;}
case 0x68fba1:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68fba4;}
case 0x68fba4:{ // MOVQ qword ptr [ESP + 0x28],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fba9;}
case 0x68fba9:{ // MOVQ qword ptr [ESP + 0x38],MM5
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fbae;}
case 0x68fbae:{ // MOV ECX,dword ptr [EBP + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fbb1;}
case 0x68fbb1:{ // PUNPCKLDQ MM6,MM7
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x68fbb4;}
case 0x68fbb4:{ // MOVQ MM4,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fbb8;}
case 0x68fbb8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fbbb;}
case 0x68fbbb:{ // PUNPCKHDQ MM1,MM7
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x68fbbe;}
case 0x68fbbe:{ // MOVQ qword ptr [ESP + 0x20],MM6
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fbc3;}
case 0x68fbc3:{ // PUNPCKHDQ MM0,MM4
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68fbc6;}
case 0x68fbc6:{ // PUNPCKLDQ MM2,MM4
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68fbc9;}
case 0x68fbc9:{ // MOVQ qword ptr [ESP + 0x30],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fbce;}
case 0x68fbce:{ // MOVQ qword ptr [ESP + 0x18],MM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fbd3;}
case 0x68fbd3:{ // MOVQ qword ptr [ESP + 0x8],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x68fbd8;}
case 0x68fbd8:{ // MOV EAX,dword ptr [EBP + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x48ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fbdb;}
case 0x68fbdb:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fbde;}
case 0x68fbde:{ // MOVQ MM1,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fbe2;}
case 0x68fbe2:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fbe5;}
case 0x68fbe5:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fbe8;}
case 0x68fbe8:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fbeb;}
case 0x68fbeb:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fbee;}
case 0x68fbee:{ // PFMUL MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68fbf3;}
case 0x68fbf3:{ // PFMUL MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68fbf9;}
case 0x68fbf9:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fbfc;}
case 0x68fbfc:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fbff;}
case 0x68fbff:{ // PFMUL MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x68fc05;}
case 0x68fc05:{ // PFMUL MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x68fc0b;}
case 0x68fc0b:{ // PFMUL MM4,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x68fc11;}
case 0x68fc11:{ // PFMUL MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x68fc17;}
case 0x68fc17:{ // PFMUL MM6,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x68fc1d;}
case 0x68fc1d:{ // PFMUL MM7,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x68fc23;}
case 0x68fc23:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68fc27;}
case 0x68fc27:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68fc2b;}
case 0x68fc2b:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68fc2f;}
case 0x68fc2f:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68fc33;}
case 0x68fc33:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fc37;}
case 0x68fc37:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68fc3b;}
case 0x68fc3b:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68fc3e;}
case 0x68fc3e:{ // MOVQ qword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fc42;}
case 0x68fc42:{ // MOVQ MM0,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fc46;}
case 0x68fc46:{ // MOVQ MM1,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fc4a;}
case 0x68fc4a:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fc4d;}
case 0x68fc4d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fc50;}
case 0x68fc50:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fc53;}
case 0x68fc53:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fc56;}
case 0x68fc56:{ // PFMUL MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68fc5b;}
case 0x68fc5b:{ // PFMUL MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68fc61;}
case 0x68fc61:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fc64;}
case 0x68fc64:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fc67;}
case 0x68fc67:{ // PFMUL MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x68fc6d;}
case 0x68fc6d:{ // PFMUL MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x68fc73;}
case 0x68fc73:{ // PFMUL MM4,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x68fc79;}
case 0x68fc79:{ // PFMUL MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x68fc7f;}
case 0x68fc7f:{ // PFMUL MM6,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x68fc85;}
case 0x68fc85:{ // PFMUL MM7,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x68fc8b;}
case 0x68fc8b:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68fc8f;}
case 0x68fc8f:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68fc93;}
case 0x68fc93:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68fc97;}
case 0x68fc97:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68fc9b;}
case 0x68fc9b:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fc9f;}
case 0x68fc9f:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68fca3;}
case 0x68fca3:{ // MOVQ qword ptr [EAX + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fca7;}
case 0x68fca7:{ // MOVQ qword ptr [EAX + 0x18],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fcab;}
case 0x68fcab:{ // MOVQ MM0,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fcaf;}
case 0x68fcaf:{ // MOVQ MM1,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fcb3;}
case 0x68fcb3:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fcb6;}
case 0x68fcb6:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fcb9;}
case 0x68fcb9:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fcbc;}
case 0x68fcbc:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fcbf;}
case 0x68fcbf:{ // PFMUL MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68fcc4;}
case 0x68fcc4:{ // PFMUL MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68fcca;}
case 0x68fcca:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fccd;}
case 0x68fccd:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fcd0;}
case 0x68fcd0:{ // PFMUL MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x68fcd6;}
case 0x68fcd6:{ // PFMUL MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x68fcdc;}
case 0x68fcdc:{ // PFMUL MM4,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x68fce2;}
case 0x68fce2:{ // PFMUL MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x68fce8;}
case 0x68fce8:{ // PFMUL MM6,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x68fcee;}
case 0x68fcee:{ // PFMUL MM7,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x68fcf4;}
case 0x68fcf4:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68fcf8;}
case 0x68fcf8:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68fcfc;}
case 0x68fcfc:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68fd00;}
case 0x68fd00:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68fd04;}
case 0x68fd04:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fd08;}
case 0x68fd08:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68fd0c;}
case 0x68fd0c:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fd10;}
case 0x68fd10:{ // MOVQ qword ptr [EAX + 0x28],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fd14;}
case 0x68fd14:{ // MOVQ MM0,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fd18;}
case 0x68fd18:{ // MOVQ MM1,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fd1c;}
case 0x68fd1c:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fd1f;}
case 0x68fd1f:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fd22;}
case 0x68fd22:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68fd25;}
case 0x68fd25:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fd28;}
case 0x68fd28:{ // PFMUL MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68fd2d;}
case 0x68fd2d:{ // PFMUL MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x68fd33;}
case 0x68fd33:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fd36;}
case 0x68fd36:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fd39;}
case 0x68fd39:{ // PFMUL MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x68fd3f;}
case 0x68fd3f:{ // PFMUL MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x68fd45;}
case 0x68fd45:{ // PFMUL MM4,qword ptr [ESP + 0x20]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x20ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x68fd4b;}
case 0x68fd4b:{ // PFMUL MM5,qword ptr [ESP + 0x28]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x28ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x68fd51;}
case 0x68fd51:{ // PFMUL MM6,qword ptr [ESP + 0x30]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x30ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x68fd57;}
case 0x68fd57:{ // PFMUL MM7,qword ptr [ESP + 0x38]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x68fd5d;}
case 0x68fd5d:{ // PFACC MM0,MM2
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x68fd61;}
case 0x68fd61:{ // PFACC MM1,MM3
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68fd65;}
case 0x68fd65:{ // PFACC MM4,MM6
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68fd69;}
case 0x68fd69:{ // PFACC MM5,MM7
wr<8>(c,0x1150,user_op(c,524525,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68fd6d;}
case 0x68fd6d:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x68fd71;}
case 0x68fd71:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x68fd75;}
case 0x68fd75:{ // MOVQ qword ptr [EAX + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fd79;}
case 0x68fd79:{ // MOVQ qword ptr [EAX + 0x38],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fd7d;}
case 0x68fd7d:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68fd7f;}
case 0x68fd7f:{ // MOV EBP,dword ptr [ESP + 0x40]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x40ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fd83;}
case 0x68fd83:{ // ADD ESP,0x44
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x44ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68fd86;}
case 0x68fd86:{ // FEMMS
user_op(c,251,{});
return 0x68fd88;}
case 0x68fd88:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68fd8b;}
case 0x68fd8b:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fd8f;}
case 0x68fd8f:{ // MOVQ MM2,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fd93;}
case 0x68fd93:{ // MOVQ MM1,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fd97;}
case 0x68fd97:{ // MOVQ MM0,qword ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fd9b;}
case 0x68fd9b:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x68fd9e;}
case 0x68fd9e:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68fda1;}
case 0x68fda1:{ // MOVQ MM5,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fda5;}
case 0x68fda5:{ // MOVQ MM4,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fda9;}
case 0x68fda9:{ // MOVQ MM3,qword ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fdad;}
case 0x68fdad:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68fdb0;}
case 0x68fdb0:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x68fdb3;}
case 0x68fdb3:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68fdb7;}
case 0x68fdb7:{ // PFMUL MM1,MM3
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68fdbb;}
case 0x68fdbb:{ // PFSUB MM4,MM1
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68fdbf;}
case 0x68fdbf:{ // PFMUL MM2,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x68fdc4;}
case 0x68fdc4:{ // PFMUL MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x68fdc9;}
case 0x68fdc9:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x68fdcd;}
case 0x68fdcd:{ // PFMUL MM3,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x68fdd2;}
case 0x68fdd2:{ // PFMUL MM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x68fdd7;}
case 0x68fdd7:{ // PFSUB MM3,MM0
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x68fddb;}
case 0x68fddb:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68fdde;}
case 0x68fdde:{ // PUNPCKHDQ MM0,MM0
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x68fde1;}
case 0x68fde1:{ // PUNPCKLDQ MM0,MM4
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68fde4;}
case 0x68fde4:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fde7;}
case 0x68fde7:{ // PUNPCKHDQ MM1,MM4
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68fdea;}
case 0x68fdea:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fded;}
case 0x68fded:{ // PUNPCKLDQ MM5,MM2
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68fdf0;}
case 0x68fdf0:{ // MOVQ MM6,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fdf4;}
case 0x68fdf4:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68fdf7;}
case 0x68fdf7:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x68fdfa;}
case 0x68fdfa:{ // PFMUL MM4,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x68fdff;}
case 0x68fdff:{ // PFMUL MM3,MM6
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x68fe03;}
case 0x68fe03:{ // PFADD MM4,MM3
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x68fe07;}
case 0x68fe07:{ // MOVQ MM3,qword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fe0b;}
case 0x68fe0b:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x68fe0f;}
case 0x68fe0f:{ // PFSUB MM4,MM0
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68fe13;}
case 0x68fe13:{ // MOVQ MM0,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fe17;}
case 0x68fe17:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x68fe1a;}
case 0x68fe1a:{ // MOVQ MM6,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fe1e;}
case 0x68fe1e:{ // PUNPCKLDQ MM6,dword ptr [EAX]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
return 0x68fe21;}
case 0x68fe21:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68fe25;}
case 0x68fe25:{ // MOVQ MM6,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fe29;}
case 0x68fe29:{ // PUNPCKHDQ MM6,qword ptr [EAX]
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wu<4>(c,0x308e00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa404,m<4>(c,u<4>(c,0x308e00)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(u<4>(c,0xa404)));
return 0x68fe2c;}
case 0x68fe2c:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68fe30;}
case 0x68fe30:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x68fe34;}
case 0x68fe34:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68fe38;}
case 0x68fe38:{ // PFADD MM1,MM5
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x68fe3c;}
case 0x68fe3c:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x68fe40;}
case 0x68fe40:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x68fe44;}
case 0x68fe44:{ // PFSUB MM4,MM1
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68fe48;}
case 0x68fe48:{ // PFACC MM4,MM4
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x68fe4c;}
case 0x68fe4c:{ // MOVD dword ptr [ESP + 0x4],MM4
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1140),0x0ull));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0x17200));
return 0x68fe51;}
case 0x68fe51:{ // FEMMS
user_op(c,251,{});
return 0x68fe53;}
case 0x68fe53:{ // FLD float ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68fe53ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x68fe57;}
case 0x68fe57:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68fe5a;}
case 0x68fe5a:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fe5e;}
case 0x68fe5e:{ // FEMMS
user_op(c,251,{});
return 0x68fe60;}
case 0x68fe60:{ // MOVD MM4,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68fe65;}
case 0x68fe65:{ // MOVQ MM1,qword ptr [0x007b7218]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b7218)));
return 0x68fe6c;}
case 0x68fe6c:{ // PXOR MM0,MM0
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1100)));
return 0x68fe6f;}
case 0x68fe6f:{ // MOVQ MM2,qword ptr [0x007b7220]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x7b7220)));
return 0x68fe76;}
case 0x68fe76:{ // MOVD MM3,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68fe7b;}
case 0x68fe7b:{ // MOVD MM5,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x68fe80;}
case 0x68fe80:{ // PUNPCKLDQ MM4,MM2
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x68fe83;}
case 0x68fe83:{ // PUNPCKLDQ MM3,MM5
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x68fe86;}
case 0x68fe86:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68fe89;}
case 0x68fe89:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fe8d;}
case 0x68fe8d:{ // MOVQ qword ptr [EAX + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fe91;}
case 0x68fe91:{ // MOVQ qword ptr [EAX + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fe95;}
case 0x68fe95:{ // MOVQ qword ptr [EAX + 0x20],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fe99;}
case 0x68fe99:{ // MOVQ qword ptr [EAX + 0x28],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fe9d;}
case 0x68fe9d:{ // MOVQ qword ptr [EAX + 0x30],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fea1;}
case 0x68fea1:{ // MOVQ qword ptr [EAX + 0x38],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68fea5;}
case 0x68fea5:{ // FEMMS
user_op(c,251,{});
return 0x68fea7;}
case 0x68fea7:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x68feaa;}
case 0x68feaa:{ // FEMMS
user_op(c,251,{});
return 0x68feac;}
case 0x68feac:{ // SUB ESP,0x14
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68feaf;}
case 0x68feaf:{ // MOV dword ptr [ESP + 0x10],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68feb3;}
case 0x68feb3:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68feb5;}
case 0x68feb5:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68feb8;}
case 0x68feb8:{ // MOV ECX,ESP
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68feba;}
case 0x68feba:{ // PUSH dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68febd;}
case 0x68febd:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68febe;}
case 0x68febe:{ // CALL 0x00695055
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68fec3ull);
return 0x695055;
return 0x68fec3;}
case 0x68fec3:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fec6;}
case 0x68fec6:{ // MOV ECX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68fec9;}
case 0x68fec9:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fecd;}
case 0x68fecd:{ // MOVQ MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fed0;}
case 0x68fed0:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68fed3;}
case 0x68fed3:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x68fed7;}
case 0x68fed7:{ // MOVQ MM2,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fedc;}
case 0x68fedc:{ // MOVQ MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68fee0;}
case 0x68fee0:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x68fee3;}
case 0x68fee3:{ // PFMUL MM3,MM2
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1120)}));
return 0x68fee7;}
case 0x68fee7:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x68feeb;}
case 0x68feeb:{ // PXOR MM0,qword ptr [0x007b7228]
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b7228)));
return 0x68fef2;}
case 0x68fef2:{ // PXOR MM2,qword ptr [0x007b7228]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b7228)));
return 0x68fef9;}
case 0x68fef9:{ // PFACC MM1,MM1
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x68fefd;}
case 0x68fefd:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68ff00;}
case 0x68ff00:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68ff03;}
case 0x68ff03:{ // PUNPCKLDQ MM3,MM1
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x68ff06;}
case 0x68ff06:{ // PSLLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1110),0x20ull));
return 0x68ff0a;}
case 0x68ff0a:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x68ff0e;}
case 0x68ff0e:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68ff11;}
case 0x68ff11:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x68ff14;}
case 0x68ff14:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68ff18;}
case 0x68ff18:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68ff1c;}
case 0x68ff1c:{ // PFADD MM4,MM3
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x68ff20;}
case 0x68ff20:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68ff23;}
case 0x68ff23:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff27;}
case 0x68ff27:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68ff2a;}
case 0x68ff2a:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68ff2d;}
case 0x68ff2d:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68ff30;}
case 0x68ff30:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x68ff33;}
case 0x68ff33:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68ff37;}
case 0x68ff37:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68ff3b;}
case 0x68ff3b:{ // PFADD MM4,MM1
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x68ff3f;}
case 0x68ff3f:{ // MOVQ qword ptr [EAX + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff43;}
case 0x68ff43:{ // MOVQ qword ptr [EAX + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff47;}
case 0x68ff47:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ff4a;}
case 0x68ff4a:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ff4d;}
case 0x68ff4d:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68ff50;}
case 0x68ff50:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x68ff53;}
case 0x68ff53:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68ff57;}
case 0x68ff57:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68ff5b;}
case 0x68ff5b:{ // PFADD MM5,MM3
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x68ff5f;}
case 0x68ff5f:{ // MOVQ qword ptr [EAX + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff63;}
case 0x68ff63:{ // MOVQ qword ptr [EAX + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff67;}
case 0x68ff67:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ff6a;}
case 0x68ff6a:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ff6d;}
case 0x68ff6d:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x68ff70;}
case 0x68ff70:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x68ff73;}
case 0x68ff73:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x68ff77;}
case 0x68ff77:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x68ff7b;}
case 0x68ff7b:{ // PFADD MM5,MM1
wr<8>(c,0x1150,user_op(c,524526,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68ff7f;}
case 0x68ff7f:{ // MOVQ qword ptr [EAX + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff83;}
case 0x68ff83:{ // MOVQ qword ptr [EAX + 0x38],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68ff87;}
case 0x68ff87:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68ff89;}
case 0x68ff89:{ // MOV EBP,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ff8d;}
case 0x68ff8d:{ // ADD ESP,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ff90;}
case 0x68ff90:{ // FEMMS
user_op(c,251,{});
return 0x68ff92;}
case 0x68ff92:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68ff95;}
case 0x68ff95:{ // FEMMS
user_op(c,251,{});
return 0x68ff97;}
case 0x68ff97:{ // SUB ESP,0x14
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ff9a;}
case 0x68ff9a:{ // MOV dword ptr [ESP + 0x10],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68ff9e;}
case 0x68ff9e:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ffa0;}
case 0x68ffa0:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ffa3;}
case 0x68ffa3:{ // MOV ECX,ESP
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ffa5;}
case 0x68ffa5:{ // PUSH dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ffa8;}
case 0x68ffa8:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ffa9;}
case 0x68ffa9:{ // CALL 0x00695055
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x68ffaeull);
return 0x695055;
return 0x68ffae;}
case 0x68ffae:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ffb1;}
case 0x68ffb1:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ffb5;}
case 0x68ffb5:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ffba;}
case 0x68ffba:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x68ffbd;}
case 0x68ffbd:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x68ffc0;}
case 0x68ffc0:{ // PFMUL MM0,qword ptr [0x007b7230]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7230)}));
return 0x68ffc8;}
case 0x68ffc8:{ // PFMUL MM1,qword ptr [0x007b7238]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7b7238)}));
return 0x68ffd0;}
case 0x68ffd0:{ // MOVQ MM4,MM2
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ffd3;}
case 0x68ffd3:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x68ffd6;}
case 0x68ffd6:{ // PUNPCKLDQ MM4,MM4
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x68ffd9;}
case 0x68ffd9:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x68ffdc;}
case 0x68ffdc:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x68ffdf;}
case 0x68ffdf:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x68ffe2;}
case 0x68ffe2:{ // PSRLQ MM5,0x20
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x20ull));
return 0x68ffe6;}
case 0x68ffe6:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x68ffea;}
case 0x68ffea:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x68ffee;}
case 0x68ffee:{ // PFMUL MM5,MM1
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x68fff2;}
case 0x68fff2:{ // PFMUL MM6,MM0
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x68fff6;}
case 0x68fff6:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x68fffa;}
case 0x68fffa:{ // PFADD MM4,qword ptr [0x007b7220]
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),m<8>(c,0x7b7220)}));
return 0x690002;}
default:missing_instruction(c.pc);}}
}
