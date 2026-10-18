#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_694(Cpu& c){switch(c.pc){
case 0x694000:{ // JMP 0x00694064
return 0x694064;
return 0x694002;}
case 0x694002:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x694004;}
case 0x694004:{ // JMP 0x00694064
return 0x694064;
return 0x694006;}
case 0x694006:{ // MOV ESI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694009;}
case 0x694009:{ // JMP 0x00694064
return 0x694064;
return 0x69400b;}
case 0x69400b:{ // FEMMS
user_op(c,251,{});
return 0x69400d;}
case 0x69400d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69400e;}
case 0x69400e:{ // PUSH dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694011;}
case 0x694011:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694014;}
case 0x694014:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694015;}
case 0x694015:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69401aull);
return 0x693d9b;
return 0x69401a;}
case 0x69401a:{ // FEMMS
user_op(c,251,{});
return 0x69401c;}
case 0x69401c:{ // JMP 0x00694064
return 0x694064;
return 0x69401e;}
case 0x69401e:{ // MOV ESI,EDI
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x694020;}
case 0x694020:{ // JMP 0x00694064
return 0x694064;
return 0x694022;}
case 0x694022:{ // FEMMS
user_op(c,251,{});
return 0x694024;}
case 0x694024:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694025;}
case 0x694025:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694026;}
case 0x694026:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694029;}
case 0x694029:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69402a;}
case 0x69402a:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69402full);
return 0x693d9b;
return 0x69402f;}
case 0x69402f:{ // FEMMS
user_op(c,251,{});
return 0x694031;}
case 0x694031:{ // JMP 0x00694064
return 0x694064;
return 0x694033;}
case 0x694033:{ // FEMMS
user_op(c,251,{});
return 0x694035;}
case 0x694035:{ // PUSH dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694038;}
case 0x694038:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69403b;}
case 0x69403b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69403c;}
case 0x69403c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69403d;}
case 0x69403d:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694042ull);
return 0x693d9b;
return 0x694042;}
case 0x694042:{ // FEMMS
user_op(c,251,{});
return 0x694044;}
case 0x694044:{ // JMP 0x00694064
return 0x694064;
return 0x694046;}
case 0x694046:{ // FEMMS
user_op(c,251,{});
return 0x694048;}
case 0x694048:{ // PUSH dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69404b;}
case 0x69404b:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69404e;}
case 0x69404e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69404f;}
case 0x69404f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694050;}
case 0x694050:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694055ull);
return 0x693d9b;
return 0x694055;}
case 0x694055:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694058;}
case 0x694058:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69405b;}
case 0x69405b:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69405c;}
case 0x69405c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69405d;}
case 0x69405d:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694062ull);
return 0x693d9b;
return 0x694062;}
case 0x694062:{ // FEMMS
user_op(c,251,{});
return 0x694064;}
case 0x694064:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694065;}
case 0x694065:{ // PUSH dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694068;}
case 0x694068:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69406b;}
case 0x69406b:{ // CALL 0x00693d0e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694070ull);
return 0x693d0e;
return 0x694070;}
case 0x694070:{ // CMP dword ptr [EBP + 0x10],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694074;}
case 0x694074:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x694075;}
case 0x694075:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x694076;}
case 0x694076:{ // JZ 0x006940d4
if(r<1>(c,0x206)){return 0x6940d4;}
return 0x694078;}
case 0x694078:{ // FEMMS
user_op(c,251,{});
return 0x69407a;}
case 0x69407a:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69407d;}
case 0x69407d:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694080;}
case 0x694080:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694083;}
case 0x694083:{ // MOVD MM1,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694087;}
case 0x694087:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69408a;}
case 0x69408a:{ // PXOR MM0,qword ptr [0x007b71d8]
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b71d8)));
return 0x694091;}
case 0x694091:{ // MOVQ MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694095;}
case 0x694095:{ // MOVQ MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694099;}
case 0x694099:{ // PI2FD MM2,MM2
wr<8>(c,0x1120,user_op(c,524520,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x69409d;}
case 0x69409d:{ // PI2FD MM3,MM3
wr<8>(c,0x1130,user_op(c,524520,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x6940a1;}
case 0x6940a1:{ // PFADD MM0,qword ptr [0x007b71e0]
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),m<8>(c,0x7b71e0)}));
return 0x6940a9;}
case 0x6940a9:{ // PFMUL MM3,qword ptr [0x007b71e8]
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),m<8>(c,0x7b71e8)}));
return 0x6940b1;}
case 0x6940b1:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x6940b4;}
case 0x6940b4:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x6940b7;}
case 0x6940b7:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6940bb;}
case 0x6940bb:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6940bf;}
case 0x6940bf:{ // PFMUL MM1,MM5
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x6940c3;}
case 0x6940c3:{ // PFADD MM1,MM4
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x6940c7;}
case 0x6940c7:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6940cb;}
case 0x6940cb:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6940ce;}
case 0x6940ce:{ // MOVD dword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6940d2;}
case 0x6940d2:{ // FEMMS
user_op(c,251,{});
return 0x6940d4;}
case 0x6940d4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6940d7;}
case 0x6940d7:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x6940d8;}
case 0x6940d8:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x6940db;}
case 0x6940fb:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6940fd;}
case 0x6940fd:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6940fe;}
case 0x6940fe:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x694100;}
case 0x694100:{ // SUB ESP,0x40
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694103;}
case 0x694103:{ // MOV ECX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694106;}
case 0x694106:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694108;}
case 0x694108:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694109;}
case 0x694109:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69410b;}
case 0x69410b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69410c;}
case 0x69410c:{ // MOV EDI,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69410f;}
case 0x69410f:{ // CMP EDI,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694111;}
case 0x694111:{ // SETNZ AL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x694114;}
case 0x694114:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694116;}
case 0x694116:{ // SHL EAX,0x1
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
return 0x694118;}
case 0x694118:{ // CMP ECX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69411a;}
case 0x69411a:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x69411d;}
case 0x69411d:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69411f;}
case 0x69411f:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694121;}
case 0x694121:{ // SHL EAX,0x1
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
return 0x694123;}
case 0x694123:{ // CMP dword ptr [EBP + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694126;}
case 0x694126:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x694129;}
case 0x694129:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69412b;}
case 0x69412b:{ // CMP EAX,0x7
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
return 0x69412e;}
case 0x69412e:{ // JA 0x0069424a
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x69424a;}
return 0x694134;}
case 0x694134:{ // JMP dword ptr [EAX*0x4 + 0x6942f8]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x6942f8ull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x69413b;}
case 0x69413b:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69413bull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69413d;}
case 0x69413d:{ // FSTP float ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69413dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694140;}
case 0x694140:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694140ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694142;}
case 0x694142:{ // FSTP float ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694142ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694145;}
case 0x694145:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694145ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694147;}
case 0x694147:{ // FSTP float ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694147ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69414a;}
case 0x69414a:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69414aull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69414c;}
case 0x69414c:{ // FSTP float ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69414cull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69414f;}
case 0x69414f:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69414full));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694151;}
case 0x694151:{ // FSTP float ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694151ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694154;}
case 0x694154:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694154ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694156;}
case 0x694156:{ // FSTP float ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694156ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694159;}
case 0x694159:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694159ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69415b;}
case 0x69415b:{ // FSTP float ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69415bull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69415e;}
case 0x69415e:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69415eull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694160;}
case 0x694160:{ // FSTP float ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694160ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694163;}
case 0x694163:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694163ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694165;}
case 0x694165:{ // FSTP float ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694165ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694168;}
case 0x694168:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694168ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69416a;}
case 0x69416a:{ // FSTP float ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69416aull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69416d;}
case 0x69416d:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69416dull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69416f;}
case 0x69416f:{ // FSTP float ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69416full));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694172;}
case 0x694172:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694172ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694174;}
case 0x694174:{ // FSTP float ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694174ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694177;}
case 0x694177:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694177ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x694179;}
case 0x694179:{ // FSTP float ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694179ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69417c;}
case 0x69417c:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69417cull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x69417e;}
case 0x69417e:{ // FSTP float ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69417eull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694181;}
case 0x694181:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694181ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x694183;}
case 0x694183:{ // FSTP float ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694183ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694186;}
case 0x694186:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694186ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x694188;}
case 0x694188:{ // FSTP float ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694188ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69418b;}
case 0x69418b:{ // JMP 0x0069424a
return 0x69424a;
return 0x694190;}
case 0x694190:{ // FEMMS
user_op(c,251,{});
return 0x694192;}
case 0x694192:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694195;}
case 0x694195:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694198;}
case 0x694198:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694199;}
case 0x694199:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69419a;}
case 0x69419a:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69419full);
return 0x693650;
return 0x69419f;}
case 0x69419f:{ // FEMMS
user_op(c,251,{});
return 0x6941a1;}
case 0x6941a1:{ // JMP 0x0069424a
return 0x69424a;
return 0x6941a6;}
case 0x6941a6:{ // FEMMS
user_op(c,251,{});
return 0x6941a8;}
case 0x6941a8:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941a9;}
case 0x6941a9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941aa;}
case 0x6941aa:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941ad;}
case 0x6941ad:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941ae;}
case 0x6941ae:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6941b3ull);
return 0x693650;
return 0x6941b3;}
case 0x6941b3:{ // FEMMS
user_op(c,251,{});
return 0x6941b5;}
case 0x6941b5:{ // JMP 0x0069424a
return 0x69424a;
return 0x6941ba;}
case 0x6941ba:{ // FEMMS
user_op(c,251,{});
return 0x6941bc;}
case 0x6941bc:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941bf;}
case 0x6941bf:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941c2;}
case 0x6941c2:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941c3;}
case 0x6941c3:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941c4;}
case 0x6941c4:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6941c9ull);
return 0x693d9b;
return 0x6941c9;}
case 0x6941c9:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941cc;}
case 0x6941cc:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941cd;}
case 0x6941cd:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941ce;}
case 0x6941ce:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941cf;}
case 0x6941cf:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6941d4ull);
return 0x693650;
return 0x6941d4;}
case 0x6941d4:{ // FEMMS
user_op(c,251,{});
return 0x6941d6;}
case 0x6941d6:{ // JMP 0x0069424a
return 0x69424a;
return 0x6941d8;}
case 0x6941d8:{ // FEMMS
user_op(c,251,{});
return 0x6941da;}
case 0x6941da:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941db;}
case 0x6941db:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941dc;}
case 0x6941dc:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941df;}
case 0x6941df:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941e0;}
case 0x6941e0:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6941e5ull);
return 0x693650;
return 0x6941e5;}
case 0x6941e5:{ // FEMMS
user_op(c,251,{});
return 0x6941e7;}
case 0x6941e7:{ // JMP 0x0069424a
return 0x69424a;
return 0x6941e9;}
case 0x6941e9:{ // FEMMS
user_op(c,251,{});
return 0x6941eb;}
case 0x6941eb:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941ee;}
case 0x6941ee:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941f1;}
case 0x6941f1:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941f2;}
case 0x6941f2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941f3;}
case 0x6941f3:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6941f8ull);
return 0x693d9b;
return 0x6941f8;}
case 0x6941f8:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6941fb;}
case 0x6941fb:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941fc;}
case 0x6941fc:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941fd;}
case 0x6941fd:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6941fe;}
case 0x6941fe:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694203ull);
return 0x693650;
return 0x694203;}
case 0x694203:{ // FEMMS
user_op(c,251,{});
return 0x694205;}
case 0x694205:{ // JMP 0x0069424a
return 0x69424a;
return 0x694207;}
case 0x694207:{ // FEMMS
user_op(c,251,{});
return 0x694209;}
case 0x694209:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69420a;}
case 0x69420a:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69420b;}
case 0x69420b:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69420e;}
case 0x69420e:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69420f;}
case 0x69420f:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694214ull);
return 0x693d9b;
return 0x694214;}
case 0x694214:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694217;}
case 0x694217:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694218;}
case 0x694218:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694219;}
case 0x694219:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69421a;}
case 0x69421a:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69421full);
return 0x693650;
return 0x69421f;}
case 0x69421f:{ // FEMMS
user_op(c,251,{});
return 0x694221;}
case 0x694221:{ // JMP 0x0069424a
return 0x69424a;
return 0x694223;}
case 0x694223:{ // FEMMS
user_op(c,251,{});
return 0x694225;}
case 0x694225:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694226;}
case 0x694226:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694227;}
case 0x694227:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69422a;}
case 0x69422a:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69422b;}
case 0x69422b:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694230ull);
return 0x693d9b;
return 0x694230;}
case 0x694230:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694233;}
case 0x694233:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694236;}
case 0x694236:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694237;}
case 0x694237:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694238;}
case 0x694238:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69423dull);
return 0x693d9b;
return 0x69423d;}
case 0x69423d:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694240;}
case 0x694240:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694241;}
case 0x694241:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694242;}
case 0x694242:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694243;}
case 0x694243:{ // CALL 0x00693650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694248ull);
return 0x693650;
return 0x694248;}
case 0x694248:{ // FEMMS
user_op(c,251,{});
return 0x69424a;}
case 0x69424a:{ // CMP dword ptr [EBP + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69424d;}
case 0x69424d:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x69424e;}
case 0x69424e:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x69424f;}
case 0x69424f:{ // JZ 0x006942e2
if(r<1>(c,0x206)){return 0x6942e2;}
return 0x694255;}
case 0x694255:{ // FEMMS
user_op(c,251,{});
return 0x694257;}
case 0x694257:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69425a;}
case 0x69425a:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69425d;}
case 0x69425d:{ // MOV EDX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694260;}
case 0x694260:{ // MOVQ MM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694263;}
case 0x694263:{ // MOVQ MM2,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694267;}
case 0x694267:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69426a;}
case 0x69426a:{ // PI2FD MM1,MM1
wr<8>(c,0x1110,user_op(c,524520,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x69426e;}
case 0x69426e:{ // MOVQ MM4,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694272;}
case 0x694272:{ // PI2FD MM2,MM2
wr<8>(c,0x1120,user_op(c,524520,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x694276;}
case 0x694276:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694279;}
case 0x694279:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69427c;}
case 0x69427c:{ // PFRCP MM5,MM2
wr<8>(c,0x1150,user_op(c,524532,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x694280;}
case 0x694280:{ // PFRCP MM3,MM3
wr<8>(c,0x1130,user_op(c,524532,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x694284;}
case 0x694284:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694288;}
case 0x694288:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x69428b;}
case 0x69428b:{ // PFRCPIT1 MM2,MM5
wr<8>(c,0x1120,user_op(c,524534,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x69428f;}
case 0x69428f:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694293;}
case 0x694293:{ // PFRCPIT2 MM2,MM5
wr<8>(c,0x1120,user_op(c,524536,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x694297;}
case 0x694297:{ // PFMUL MM2,qword ptr [0x007b71f0]
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),m<8>(c,0x7b71f0)}));
return 0x69429f;}
case 0x69429f:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x6942a2;}
case 0x6942a2:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x6942a6;}
case 0x6942a6:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x6942a9;}
case 0x6942a9:{ // PFSUB MM0,qword ptr [0x007b71e0]
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),m<8>(c,0x7b71e0)}));
return 0x6942b1;}
case 0x6942b1:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x6942b5;}
case 0x6942b5:{ // PFRCP MM6,MM5
wr<8>(c,0x1160,user_op(c,524532,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x6942b9;}
case 0x6942b9:{ // PXOR MM0,qword ptr [0x007b71d8]
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b71d8)));
return 0x6942c0;}
case 0x6942c0:{ // PFRCPIT1 MM5,MM6
wr<8>(c,0x1150,user_op(c,524534,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x6942c4;}
case 0x6942c4:{ // PFRCPIT2 MM5,MM6
wr<8>(c,0x1150,user_op(c,524536,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x6942c8;}
case 0x6942c8:{ // PFSUB MM3,MM4
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x6942cc;}
case 0x6942cc:{ // PFMUL MM3,MM5
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x6942d0;}
case 0x6942d0:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x6942d3;}
case 0x6942d3:{ // MOVD dword ptr [EDX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x6942d7;}
case 0x6942d7:{ // FEMMS
user_op(c,251,{});
return 0x6942d9;}
case 0x6942d9:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6942dc;}
case 0x6942dc:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6942dd;}
case 0x6942dd:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6942e0;}
case 0x6942e0:{ // JMP 0x006942e9
return 0x6942e9;
return 0x6942e2;}
case 0x6942e2:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6942e5;}
case 0x6942e5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6942e6;}
case 0x6942e6:{ // PUSH dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6942e9;}
case 0x6942e9:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6942ec;}
case 0x6942ec:{ // CALL 0x00693d0e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6942f1ull);
return 0x693d0e;
return 0x6942f1;}
case 0x6942f1:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6942f4;}
case 0x6942f4:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x6942f5;}
case 0x6942f5:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x6942f8;}
case 0x694318:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x69431a;}
case 0x69431a:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69431b;}
case 0x69431b:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x69431d;}
case 0x69431d:{ // SUB ESP,0x40
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694320;}
case 0x694320:{ // MOV ECX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694323;}
case 0x694323:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694325;}
case 0x694325:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694326;}
case 0x694326:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694328;}
case 0x694328:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694329;}
case 0x694329:{ // MOV EDI,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69432c;}
case 0x69432c:{ // CMP EDI,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69432e;}
case 0x69432e:{ // SETNZ AL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x694331;}
case 0x694331:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694333;}
case 0x694333:{ // SHL EAX,0x1
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
return 0x694335;}
case 0x694335:{ // CMP ECX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694337;}
case 0x694337:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x69433a;}
case 0x69433a:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69433c;}
case 0x69433c:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69433e;}
case 0x69433e:{ // SHL EAX,0x1
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
return 0x694340;}
case 0x694340:{ // CMP dword ptr [EBP + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694343;}
case 0x694343:{ // SETNZ DL
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17c00)));
return 0x694346;}
case 0x694346:{ // OR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694348;}
case 0x694348:{ // CMP EAX,0x7
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
return 0x69434b;}
case 0x69434b:{ // JA 0x006943ed
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x6943ed;}
return 0x694351;}
case 0x694351:{ // JMP dword ptr [EAX*0x4 + 0x69449b]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x69449bull,u<4>(c,0x6d00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6f00)));
return uint32_t(u<4>(c,0x17200));
return 0x694358;}
case 0x694358:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694358ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69435a;}
case 0x69435a:{ // FSTP float ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69435aull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69435d;}
case 0x69435d:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69435dull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69435f;}
case 0x69435f:{ // FSTP float ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69435full));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694362;}
case 0x694362:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694362ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694364;}
case 0x694364:{ // FSTP float ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694364ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694367;}
case 0x694367:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694367ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694369;}
case 0x694369:{ // FSTP float ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694369ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69436c;}
case 0x69436c:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69436cull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69436e;}
case 0x69436e:{ // FSTP float ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69436eull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694371;}
case 0x694371:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694371ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694373;}
case 0x694373:{ // FSTP float ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694373ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694376;}
case 0x694376:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694376ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694378;}
case 0x694378:{ // FSTP float ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694378ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69437b;}
case 0x69437b:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69437bull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69437d;}
case 0x69437d:{ // FSTP float ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69437dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694380;}
case 0x694380:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694380ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694382;}
case 0x694382:{ // FSTP float ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694382ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694385;}
case 0x694385:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694385ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694387;}
case 0x694387:{ // FSTP float ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694387ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69438a;}
case 0x69438a:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69438aull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x69438c;}
case 0x69438c:{ // FSTP float ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69438cull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69438f;}
case 0x69438f:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69438full));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x694391;}
case 0x694391:{ // FSTP float ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694391ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694394;}
case 0x694394:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694394ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x694396;}
case 0x694396:{ // FSTP float ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694396ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x694399;}
case 0x694399:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x694399ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x69439b;}
case 0x69439b:{ // FSTP float ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69439bull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x69439e;}
case 0x69439e:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x69439eull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x6943a0;}
case 0x6943a0:{ // FSTP float ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x6943a0ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x6943a3;}
case 0x6943a3:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x6943a3ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x6943a5;}
case 0x6943a5:{ // FSTP float ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x6943a5ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x6943a8;}
case 0x6943a8:{ // JMP 0x006943ed
return 0x6943ed;
return 0x6943aa;}
case 0x6943aa:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943ad;}
case 0x6943ad:{ // JMP 0x006943e3
return 0x6943e3;
return 0x6943af;}
case 0x6943af:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943b0;}
case 0x6943b0:{ // JMP 0x006943e3
return 0x6943e3;
return 0x6943b2;}
case 0x6943b2:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943b5;}
case 0x6943b5:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943b6;}
case 0x6943b6:{ // JMP 0x006943d6
return 0x6943d6;
return 0x6943b8;}
case 0x6943b8:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943b9;}
case 0x6943b9:{ // JMP 0x006943e3
return 0x6943e3;
return 0x6943bb;}
case 0x6943bb:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943be;}
case 0x6943be:{ // JMP 0x006943c1
return 0x6943c1;
return 0x6943c0;}
case 0x6943c0:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943c1;}
case 0x6943c1:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943c2;}
case 0x6943c2:{ // JMP 0x006943d6
return 0x6943d6;
return 0x6943c4;}
case 0x6943c4:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943c5;}
case 0x6943c5:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943c6;}
case 0x6943c6:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6943c9;}
case 0x6943c9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943ca;}
case 0x6943ca:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6943cfull);
return 0x693d9b;
return 0x6943cf;}
case 0x6943cf:{ // PUSH dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943d2;}
case 0x6943d2:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6943d5;}
case 0x6943d5:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943d6;}
case 0x6943d6:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6943d9;}
case 0x6943d9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943da;}
case 0x6943da:{ // CALL 0x00693d9b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6943dfull);
return 0x693d9b;
return 0x6943df;}
case 0x6943df:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6943e2;}
case 0x6943e2:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943e3;}
case 0x6943e3:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6943e6;}
case 0x6943e6:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943e7;}
case 0x6943e7:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6943e8;}
case 0x6943e8:{ // CALL 0x00692f76
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6943edull);
return 0x692f76;
return 0x6943ed;}
case 0x6943ed:{ // CMP dword ptr [EBP + 0x10],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6943f0;}
case 0x6943f0:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6943f1;}
case 0x6943f1:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6943f2;}
case 0x6943f2:{ // JZ 0x00694485
if(r<1>(c,0x206)){return 0x694485;}
return 0x6943f8;}
case 0x6943f8:{ // FEMMS
user_op(c,251,{});
return 0x6943fa;}
case 0x6943fa:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6943fd;}
case 0x6943fd:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694400;}
case 0x694400:{ // MOV EDX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694403;}
case 0x694403:{ // MOVQ MM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694406;}
case 0x694406:{ // MOVQ MM2,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69440a;}
case 0x69440a:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69440d;}
case 0x69440d:{ // PI2FD MM1,MM1
wr<8>(c,0x1110,user_op(c,524520,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x694411;}
case 0x694411:{ // MOVQ MM4,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694415;}
case 0x694415:{ // PI2FD MM2,MM2
wr<8>(c,0x1120,user_op(c,524520,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x694419;}
case 0x694419:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x69441c;}
case 0x69441c:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x69441f;}
case 0x69441f:{ // PFRCP MM5,MM2
wr<8>(c,0x1150,user_op(c,524532,{r<8>(c,0x1150),r<8>(c,0x1120)}));
return 0x694423;}
case 0x694423:{ // PFRCP MM3,MM3
wr<8>(c,0x1130,user_op(c,524532,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x694427;}
case 0x694427:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69442b;}
case 0x69442b:{ // PUNPCKLDQ MM5,MM3
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x69442e;}
case 0x69442e:{ // PFRCPIT1 MM2,MM5
wr<8>(c,0x1120,user_op(c,524534,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x694432;}
case 0x694432:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694436;}
case 0x694436:{ // PFRCPIT2 MM2,MM5
wr<8>(c,0x1120,user_op(c,524536,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x69443a;}
case 0x69443a:{ // PFMUL MM2,qword ptr [0x007b71f0]
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),m<8>(c,0x7b71f0)}));
return 0x694442;}
case 0x694442:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694445;}
case 0x694445:{ // PFMUL MM0,MM2
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694449;}
case 0x694449:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x69444c;}
case 0x69444c:{ // PFSUB MM0,qword ptr [0x007b71e0]
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),m<8>(c,0x7b71e0)}));
return 0x694454;}
case 0x694454:{ // PFSUB MM5,MM4
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x694458;}
case 0x694458:{ // PFRCP MM6,MM5
wr<8>(c,0x1160,user_op(c,524532,{r<8>(c,0x1160),r<8>(c,0x1150)}));
return 0x69445c;}
case 0x69445c:{ // PXOR MM0,qword ptr [0x007b71d8]
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),m<8>(c,0x7b71d8)));
return 0x694463;}
case 0x694463:{ // PFRCPIT1 MM5,MM6
wr<8>(c,0x1150,user_op(c,524534,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x694467;}
case 0x694467:{ // PFRCPIT2 MM5,MM6
wr<8>(c,0x1150,user_op(c,524536,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x69446b;}
case 0x69446b:{ // PFSUB MM3,MM4
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x69446f;}
case 0x69446f:{ // PFMUL MM3,MM5
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x694473;}
case 0x694473:{ // MOVQ qword ptr [EDX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x694476;}
case 0x694476:{ // MOVD dword ptr [EDX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x69447a;}
case 0x69447a:{ // FEMMS
user_op(c,251,{});
return 0x69447c;}
case 0x69447c:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69447f;}
case 0x69447f:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694480;}
case 0x694480:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694483;}
case 0x694483:{ // JMP 0x0069448c
return 0x69448c;
return 0x694485;}
case 0x694485:{ // LEA EAX,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694488;}
case 0x694488:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694489;}
case 0x694489:{ // PUSH dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69448c;}
case 0x69448c:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69448f;}
case 0x69448f:{ // CALL 0x00693d0e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x694494ull);
return 0x693d0e;
return 0x694494;}
case 0x694494:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694497;}
case 0x694497:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x694498;}
case 0x694498:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x69449b;}
case 0x6944c0:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6944c3;}
case 0x6944c3:{ // MOV dword ptr [ESP],EBP
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x6944c6;}
case 0x6944c6:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6944ca;}
case 0x6944ca:{ // MOV dword ptr [ESP + 0x8],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6944ce;}
case 0x6944ce:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x6944d0;}
case 0x6944d0:{ // MOV ECX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6944d3;}
case 0x6944d3:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6944d6;}
case 0x6944d6:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6944d9;}
case 0x6944d9:{ // CMP ECX,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6944dc;}
case 0x6944dc:{ // JGE 0x006944ff
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x6944ff;}
return 0x6944de;}
case 0x6944de:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6944e1;}
case 0x6944e1:{ // JZ 0x006945d2
if(r<1>(c,0x206)){return 0x6945d2;}
return 0x6944e7;}
case 0x6944e7:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6944ea;}
case 0x6944ea:{ // MOV dword ptr [ESP],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x6944ed;}
case 0x6944ed:{ // MOV dword ptr [ESP + 0x4],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6944f1;}
case 0x6944f1:{ // MOV dword ptr [ESP + 0x8],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x6944f5;}
case 0x6944f5:{ // CALL 0x0063be32
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x6944faull);
return 0x63be32;
return 0x6944fa;}
case 0x6944fa:{ // JMP 0x006945d2
return 0x6945d2;
return 0x6944ff;}
case 0x6944ff:{ // CMP ECX,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694502;}
case 0x694502:{ // JL 0x006945b2
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x6945b2;}
return 0x694508;}
case 0x694508:{ // MOVD MM0,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69450b;}
case 0x69450b:{ // MOVD MM1,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69450f;}
case 0x69450f:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x694512;}
case 0x694512:{ // MOVQ MM7,qword ptr [0x0080af00]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x80af00)));
return 0x694519;}
case 0x694519:{ // PUNPCKLWD MM0,MM6
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x69451c;}
case 0x69451c:{ // PUNPCKLWD MM1,MM6
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x69451f;}
case 0x69451f:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694522;}
case 0x694522:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694525;}
case 0x694525:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694528;}
case 0x694528:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69452b;}
case 0x69452b:{ // PAND MM0,MM7
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1170)));
return 0x69452e;}
case 0x69452e:{ // PAND MM1,MM7
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1170)));
return 0x694531;}
case 0x694531:{ // MOVQ MM7,qword ptr [0x0080af10]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x80af10)));
return 0x694538;}
case 0x694538:{ // PCMPEQD MM0,MM6
wu<1>(c,0xf4b00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wu<4>(c,0xf4c00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xf4b00)));
wr<4>(c,0x1100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xf4c00),0xffffffffull));
wu<1>(c,0xf4e00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
wu<4>(c,0xf4f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xf4e00)));
wr<4>(c,0x1104,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xf4f00),0xffffffffull));
return 0x69453b;}
case 0x69453b:{ // PCMPEQD MM1,MM6
wu<1>(c,0xf4b00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1110),r<4>(c,0x1160)));
wu<4>(c,0xf4c00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xf4b00)));
wr<4>(c,0x1110,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xf4c00),0xffffffffull));
wu<1>(c,0xf4e00,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1114),r<4>(c,0x1164)));
wu<4>(c,0xf4f00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xf4e00)));
wr<4>(c,0x1114,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xf4f00),0xffffffffull));
return 0x69453e;}
case 0x69453e:{ // MOVQ MM6,qword ptr [0x0080af20]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x80af20)));
return 0x694545;}
case 0x694545:{ // PAND MM2,MM6
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1160)));
return 0x694548;}
case 0x694548:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x69454b;}
case 0x69454b:{ // PXOR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x69454e;}
case 0x69454e:{ // PXOR MM5,MM4
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1140)));
return 0x694551;}
case 0x694551:{ // PADDD MM3,MM7
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1170)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1174)));
return 0x694554;}
case 0x694554:{ // PADDD MM5,MM7
wr<4>(c,0x1150,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1150),r<4>(c,0x1170)));
wr<4>(c,0x1154,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1154),r<4>(c,0x1174)));
return 0x694557;}
case 0x694557:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69455a;}
case 0x69455a:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x69455d;}
case 0x69455d:{ // PAND MM0,qword ptr [0x0080af30]
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),m<8>(c,0x80af30)));
return 0x694564;}
case 0x694564:{ // PAND MM1,qword ptr [0x0080af30]
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),m<8>(c,0x80af30)));
return 0x69456b;}
case 0x69456b:{ // PADDD MM3,MM0
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1100)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1104)));
return 0x69456e;}
case 0x69456e:{ // PADDD MM5,MM1
wr<4>(c,0x1150,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1150),r<4>(c,0x1110)));
wr<4>(c,0x1154,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1154),r<4>(c,0x1114)));
return 0x694571;}
case 0x694571:{ // PAND MM6,qword ptr [0x0080af40]
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),m<8>(c,0x80af40)));
return 0x694578;}
case 0x694578:{ // PAND MM7,qword ptr [0x0080af40]
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),m<8>(c,0x80af40)));
return 0x69457f;}
case 0x69457f:{ // PSLLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x694583;}
case 0x694583:{ // PSLLD MM4,0x10
wr<4>(c,0x1140,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1140),0x10ull));
wr<4>(c,0x1144,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1144),0x10ull));
return 0x694587;}
case 0x694587:{ // PSLLD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x69458b;}
case 0x69458b:{ // PSLLD MM5,0xd
wr<4>(c,0x1150,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1150),0xdull));
wr<4>(c,0x1154,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1154),0xdull));
return 0x69458f;}
case 0x69458f:{ // PFSUB MM3,MM6
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1160)}));
return 0x694593;}
case 0x694593:{ // PFSUB MM5,MM7
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x694597;}
case 0x694597:{ // POR MM3,MM2
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1120)));
return 0x69459a;}
case 0x69459a:{ // POR MM5,MM4
wr<8>(c,0x1150,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1140)));
return 0x69459d;}
case 0x69459d:{ // MOVQ qword ptr [EAX],MM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x6945a0;}
case 0x6945a0:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6945a4;}
case 0x6945a4:{ // LEA EAX,[EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6945a7;}
case 0x6945a7:{ // LEA EDX,[EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x6945aa;}
case 0x6945aa:{ // SUB ECX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945ad;}
case 0x6945ad:{ // JMP 0x006944ff
return 0x6944ff;
return 0x6945b2;}
case 0x6945b2:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945b5;}
case 0x6945b5:{ // JZ 0x006945d2
if(r<1>(c,0x206)){return 0x6945d2;}
return 0x6945b7;}
case 0x6945b7:{ // SUB ECX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945ba;}
case 0x6945ba:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x6945bc;}
case 0x6945bc:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x6945be;}
case 0x6945be:{ // IMUL EDI,EDI,0x4
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x4ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x1c,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x6945c1;}
case 0x6945c1:{ // IMUL ESI,ESI,0x2
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x2ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x18,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x6945c4;}
case 0x6945c4:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945c6;}
case 0x6945c6:{ // ADD EAX,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945c8;}
case 0x6945c8:{ // MOV ECX,0x4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x4ull));
return 0x6945cd;}
case 0x6945cd:{ // JMP 0x006944ff
return 0x6944ff;
return 0x6945d2;}
case 0x6945d2:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x6945d4;}
case 0x6945d4:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6945d7;}
case 0x6945d7:{ // MOV EBP,dword ptr [ESP]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6945da;}
case 0x6945da:{ // MOV ESI,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6945de;}
case 0x6945de:{ // MOV EDI,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6945e2;}
case 0x6945e2:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6945e5;}
case 0x6945e5:{ // FEMMS
user_op(c,251,{});
return 0x6945e7;}
case 0x6945e7:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x6945ea;}
case 0x694600:{ // SUB ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694603;}
case 0x694603:{ // MOV dword ptr [ESP + 0x10],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x694607;}
case 0x694607:{ // MOV dword ptr [ESP + 0x14],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x69460b;}
case 0x69460b:{ // MOV dword ptr [ESP + 0x18],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x69460f;}
case 0x69460f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x694611;}
case 0x694611:{ // AND ESP,0xfffffff8
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694614;}
case 0x694614:{ // MOV ECX,dword ptr [EBP + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694617;}
case 0x694617:{ // MOV EAX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69461a;}
case 0x69461a:{ // MOV EDX,dword ptr [EBP + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69461d;}
case 0x69461d:{ // CMP ECX,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694620;}
case 0x694620:{ // JGE 0x00694643
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x694643;}
return 0x694622;}
case 0x694622:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694625;}
case 0x694625:{ // JZ 0x00694762
if(r<1>(c,0x206)){return 0x694762;}
return 0x69462b;}
case 0x69462b:{ // SUB ESP,0xc
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69462e;}
case 0x69462e:{ // MOV dword ptr [ESP],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x694631;}
case 0x694631:{ // MOV dword ptr [ESP + 0x4],EDX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x694635;}
case 0x694635:{ // MOV dword ptr [ESP + 0x8],ECX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x694639;}
case 0x694639:{ // CALL 0x0063bd7d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x69463eull);
return 0x63bd7d;
return 0x69463e;}
case 0x69463e:{ // JMP 0x00694762
return 0x694762;
return 0x694643;}
case 0x694643:{ // CMP ECX,0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694646;}
case 0x694646:{ // JL 0x00694742
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x694742;}
return 0x69464c;}
case 0x69464c:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69464f;}
case 0x69464f:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694653;}
case 0x694653:{ // MOVQ MM6,qword ptr [0x0080af70]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x80af70)));
return 0x69465a;}
case 0x69465a:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x69465d;}
case 0x69465d:{ // PAND MM6,MM0
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1100)));
return 0x694660;}
case 0x694660:{ // PAND MM7,MM1
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1110)));
return 0x694663;}
case 0x694663:{ // PSRLD MM6,0x12
wr<4>(c,0x1160,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1160),0x12ull));
wr<4>(c,0x1164,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1164),0x12ull));
return 0x694667;}
case 0x694667:{ // PSRLD MM7,0x12
wr<4>(c,0x1170,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1170),0x12ull));
wr<4>(c,0x1174,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1174),0x12ull));
return 0x69466b;}
case 0x69466b:{ // PACKSSDW MM6,MM7
wr<8>(c,0x1160,user_op(c,524425,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x69466e;}
case 0x69466e:{ // PSLLD MM6,0x2
wr<4>(c,0x1160,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1160),0x2ull));
wr<4>(c,0x1164,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x1164),0x2ull));
return 0x694672;}
case 0x694672:{ // MOVQ qword ptr [ESP],MM6
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x694676;}
case 0x694676:{ // MOVQ MM2,qword ptr [0x0080afc0]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x80afc0)));
return 0x69467d;}
case 0x69467d:{ // PAND MM0,MM2
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1120)));
return 0x694680;}
case 0x694680:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x694683;}
case 0x694683:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694686;}
case 0x694686:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694689;}
case 0x694689:{ // MOVQ MM3,qword ptr [0x0080af60]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x80af60)));
return 0x694690;}
case 0x694690:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694693;}
case 0x694693:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694696;}
case 0x694696:{ // PFCMPGE MM3,MM0
wr<8>(c,0x1130,user_op(c,524522,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x69469a;}
case 0x69469a:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x69469d;}
case 0x69469d:{ // PAND MM3,MM4
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1140)));
return 0x6946a0;}
case 0x6946a0:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x6946a4;}
case 0x6946a4:{ // PAND MM2,qword ptr [0x0080afd0]
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1120),m<8>(c,0x80afd0)));
return 0x6946ab;}
case 0x6946ab:{ // PSUBD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x6946ae;}
case 0x6946ae:{ // PFCMPGE MM5,MM1
wr<8>(c,0x1150,user_op(c,524522,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x6946b2;}
case 0x6946b2:{ // MOVQ MM3,MM5
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x6946b5;}
case 0x6946b5:{ // PAND MM5,MM4
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1140)));
return 0x6946b8;}
case 0x6946b8:{ // PFADD MM1,MM5
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x6946bc;}
case 0x6946bc:{ // PAND MM3,qword ptr [0x0080afd0]
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),m<8>(c,0x80afd0)));
return 0x6946c3;}
case 0x6946c3:{ // PSUBD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x6946c6;}
case 0x6946c6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6946c9;}
case 0x6946c9:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6946cc;}
case 0x6946cc:{ // PSRLD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x6946d0;}
case 0x6946d0:{ // PSRLD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x6946d4;}
case 0x6946d4:{ // MOVQ MM4,qword ptr [0x0080af90]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x80af90)));
return 0x6946db;}
case 0x6946db:{ // PAND MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x6946de;}
case 0x6946de:{ // PAND MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x6946e1;}
case 0x6946e1:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x6946e4;}
case 0x6946e4:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x6946e7;}
case 0x6946e7:{ // MOVQ MM4,qword ptr [0x0080af50]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x80af50)));
return 0x6946ee;}
case 0x6946ee:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x6946f1;}
case 0x6946f1:{ // PFCMPGT MM4,MM6
wr<8>(c,0x1140,user_op(c,524523,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x6946f5;}
case 0x6946f5:{ // PFCMPGT MM5,MM7
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x6946f9;}
case 0x6946f9:{ // MOVQ MM6,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6946fd;}
case 0x6946fd:{ // MOVQ MM2,qword ptr [0x0080afa0]
wr<8>(c,0x1120,eval<Op::COPY,8,8>(m<8>(c,0x80afa0)));
return 0x694704;}
case 0x694704:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x694707;}
case 0x694707:{ // PADDD MM1,MM2
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1120)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1124)));
return 0x69470a;}
case 0x69470a:{ // MOVQ MM3,qword ptr [0x0080afe0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x80afe0)));
return 0x694711;}
case 0x694711:{ // PSRLD MM0,0xd
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0xdull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0xdull));
return 0x694715;}
case 0x694715:{ // PSRLD MM1,0xd
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0xdull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0xdull));
return 0x694719;}
case 0x694719:{ // PAND MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x69471c;}
case 0x69471c:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x69471f;}
case 0x69471f:{ // PANDN MM4,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1140)));
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x694722;}
case 0x694722:{ // PANDN MM5,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1150)));
wr<8>(c,0x1150,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x694725;}
case 0x694725:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x694728;}
case 0x694728:{ // POR MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x69472b;}
case 0x69472b:{ // PACKSSDW MM0,MM1
wr<8>(c,0x1100,user_op(c,524425,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69472e;}
case 0x69472e:{ // POR MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x694731;}
case 0x694731:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694734;}
case 0x694734:{ // LEA EAX,[EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x694737;}
case 0x694737:{ // LEA EDX,[EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x69473a;}
case 0x69473a:{ // SUB ECX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69473d;}
case 0x69473d:{ // JMP 0x00694643
return 0x694643;
return 0x694742;}
case 0x694742:{ // CMP ECX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694745;}
case 0x694745:{ // JZ 0x00694762
if(r<1>(c,0x206)){return 0x694762;}
return 0x694747;}
case 0x694747:{ // SUB ECX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x4ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x69474a;}
case 0x69474a:{ // MOV EDI,ECX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x69474c;}
case 0x69474c:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x69474e;}
case 0x69474e:{ // IMUL EDI,EDI,0x2
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x2ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x1c,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x694751;}
case 0x694751:{ // IMUL ESI,ESI,0x4
wu<8>(c,0x75900,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wu<8>(c,0x75a00,eval<Op::INT_SEXT,8,4>(0x4ull));
wu<8>(c,0x75c00,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x75900),u<8>(c,0x75a00)));
wr<4>(c,0x18,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x0ull));
wu<4>(c,0x75f00,eval<Op::SUBPIECE,4,8,4>(u<8>(c,0x75c00),0x4ull));
wu<8>(c,0x4b700,eval<Op::INT_SEXT,8,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,8,8>(u<8>(c,0x4b700),u<8>(c,0x75c00)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x694754;}
case 0x694754:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694756;}
case 0x694756:{ // ADD EAX,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694758;}
case 0x694758:{ // MOV ECX,0x4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x4ull));
return 0x69475d;}
case 0x69475d:{ // JMP 0x00694643
return 0x694643;
return 0x694762;}
case 0x694762:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x694764;}
case 0x694764:{ // MOV EAX,dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694767;}
case 0x694767:{ // MOV EBP,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69476b;}
case 0x69476b:{ // MOV ESI,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69476f;}
case 0x69476f:{ // MOV EDI,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694773;}
case 0x694773:{ // ADD ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694776;}
case 0x694776:{ // FEMMS
user_op(c,251,{});
return 0x694778;}
case 0x694778:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x69477b;}
case 0x69477b:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x69477d;}
case 0x69477d:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x69477e;}
case 0x69477e:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x694780;}
case 0x694780:{ // FEMMS
user_op(c,251,{});
return 0x694782;}
case 0x694782:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694785;}
case 0x694785:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694788;}
case 0x694788:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69478b;}
case 0x69478b:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69478e;}
case 0x69478e:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694791;}
case 0x694791:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694794;}
case 0x694794:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694797;}
case 0x694797:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69479a;}
case 0x69479a:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69479e;}
case 0x69479e:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6947a1;}
case 0x6947a1:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6947a6;}
case 0x6947a6:{ // PFADD MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6947ab;}
case 0x6947ab:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6947b0;}
case 0x6947b0:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x6947b5;}
case 0x6947b5:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6947b9;}
case 0x6947b9:{ // PFADD MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x6947be;}
case 0x6947be:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x6947c2;}
case 0x6947c2:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x6947c5;}
case 0x6947c5:{ // MOVQ qword ptr [ECX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x6947c9;}
case 0x6947c9:{ // FEMMS
user_op(c,251,{});
return 0x6947cb;}
case 0x6947cb:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6947ce;}
case 0x6947ce:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x6947cf;}
case 0x6947cf:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x6947d2;}
case 0x6947d2:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x6947d4;}
case 0x6947d4:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x6947d5;}
case 0x6947d5:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x6947d7;}
case 0x6947d7:{ // FEMMS
user_op(c,251,{});
return 0x6947d9;}
case 0x6947d9:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6947dc;}
case 0x6947dc:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6947df;}
case 0x6947df:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6947e2;}
case 0x6947e2:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x6947e5;}
case 0x6947e5:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6947e8;}
case 0x6947e8:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6947eb;}
case 0x6947eb:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6947ee;}
case 0x6947ee:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6947f1;}
case 0x6947f1:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x6947f5;}
case 0x6947f5:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6947f8;}
case 0x6947f8:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6947fd;}
case 0x6947fd:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694801;}
case 0x694801:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x694804;}
case 0x694804:{ // FEMMS
user_op(c,251,{});
return 0x694806;}
case 0x694806:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694809;}
case 0x694809:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x69480a;}
case 0x69480a:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x69480d;}
case 0x69480d:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x69480f;}
case 0x69480f:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694810;}
case 0x694810:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x694812;}
case 0x694812:{ // FEMMS
user_op(c,251,{});
return 0x694814;}
case 0x694814:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694817;}
case 0x694817:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69481a;}
case 0x69481a:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69481d;}
case 0x69481d:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694820;}
case 0x694820:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694823;}
case 0x694823:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694826;}
case 0x694826:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694829;}
case 0x694829:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69482c;}
case 0x69482c:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694830;}
case 0x694830:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694833;}
case 0x694833:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x694838;}
case 0x694838:{ // PFADD MM0,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x69483d;}
case 0x69483d:{ // PFMUL MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694842;}
case 0x694842:{ // PFMUL MM4,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x694847;}
case 0x694847:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x69484b;}
case 0x69484b:{ // PFADD MM3,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694850;}
case 0x694850:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x694854;}
case 0x694854:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694857;}
case 0x694857:{ // PFRCP MM4,MM3
wr<8>(c,0x1140,user_op(c,524532,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x69485b;}
case 0x69485b:{ // PFRCPIT1 MM3,MM4
wr<8>(c,0x1130,user_op(c,524534,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x69485f;}
case 0x69485f:{ // PFRCPIT2 MM3,MM4
wr<8>(c,0x1130,user_op(c,524536,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x694863;}
case 0x694863:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x694867;}
case 0x694867:{ // MOVQ qword ptr [ECX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x69486a;}
case 0x69486a:{ // FEMMS
user_op(c,251,{});
return 0x69486c;}
case 0x69486c:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69486f;}
case 0x69486f:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x694870;}
case 0x694870:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x694873;}
case 0x694873:{ // FEMMS
user_op(c,251,{});
return 0x694875;}
case 0x694875:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69487a;}
case 0x69487a:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69487d;}
case 0x69487d:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x694881;}
case 0x694881:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694884;}
case 0x694884:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x694888;}
case 0x694888:{ // MOVQ MM3,qword ptr [0x007b71f0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b71f0)));
return 0x69488f;}
case 0x69488f:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694892;}
case 0x694892:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694895;}
case 0x694895:{ // PFSUB MM7,MM1
wr<8>(c,0x1170,user_op(c,524527,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x694899;}
case 0x694899:{ // PFMUL MM4,MM3
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x69489d;}
case 0x69489d:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x6948a0;}
case 0x6948a0:{ // PFMUL MM1,qword ptr [0x007b71f8]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7b71f8)}));
return 0x6948a8;}
case 0x6948a8:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x6948ac;}
case 0x6948ac:{ // PFSUB MM6,MM4
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x6948b0;}
case 0x6948b0:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6948b3;}
case 0x6948b3:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x6948b7;}
case 0x6948b7:{ // PFADD MM6,MM0
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x6948bb;}
case 0x6948bb:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x6948bf;}
case 0x6948bf:{ // PFADD MM2,qword ptr [0x007b71e0]
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),m<8>(c,0x7b71e0)}));
return 0x6948c7;}
case 0x6948c7:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6948cb;}
case 0x6948cb:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6948cf;}
case 0x6948cf:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6948d2;}
case 0x6948d2:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6948d6;}
case 0x6948d6:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x6948d9;}
case 0x6948d9:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x6948dc;}
case 0x6948dc:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x6948df;}
case 0x6948df:{ // PFMUL MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x6948e3;}
case 0x6948e3:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6948e7;}
case 0x6948e7:{ // PFMUL MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x6948eb;}
case 0x6948eb:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6948ef;}
case 0x6948ef:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x6948f3;}
case 0x6948f3:{ // PFMUL MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x6948f7;}
case 0x6948f7:{ // PFMUL MM7,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x6948fb;}
case 0x6948fb:{ // PFADD MM1,MM7
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x6948ff;}
case 0x6948ff:{ // PFADD MM2,MM1
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1110)}));
return 0x694903;}
case 0x694903:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694906;}
case 0x694906:{ // FEMMS
user_op(c,251,{});
return 0x694908;}
case 0x694908:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x69490b;}
case 0x69490b:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x69490f;}
case 0x69490f:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694913;}
case 0x694913:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694917;}
case 0x694917:{ // MOVD MM6,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69491c;}
case 0x69491c:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69491f;}
case 0x69491f:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694922;}
case 0x694922:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694925;}
case 0x694925:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694928;}
case 0x694928:{ // MOVD MM7,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69492d;}
case 0x69492d:{ // PFSUB MM0,MM4
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x694931;}
case 0x694931:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694935;}
case 0x694935:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x694938;}
case 0x694938:{ // PFMUL MM0,MM6
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1160)}));
return 0x69493c;}
case 0x69493c:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x694940;}
case 0x694940:{ // PFADD MM4,MM0
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x694944;}
case 0x694944:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x694948;}
case 0x694948:{ // PFADD MM4,MM2
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x69494c;}
case 0x69494c:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x69494f;}
case 0x69494f:{ // FEMMS
user_op(c,251,{});
return 0x694951;}
case 0x694951:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x694954;}
case 0x694954:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694958;}
case 0x694958:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x69495b;}
case 0x69495b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69495e;}
case 0x69495e:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x694962;}
case 0x694962:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694966;}
case 0x694966:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x69496a;}
case 0x69496a:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69496d;}
case 0x69496d:{ // PFRSQRT MM4,MM0
wr<8>(c,0x1140,user_op(c,524533,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x694971;}
case 0x694971:{ // PFCMPGT MM2,qword ptr [0x007b71c8]
wr<8>(c,0x1120,user_op(c,524523,{r<8>(c,0x1120),m<8>(c,0x7b71c8)}));
return 0x694979;}
case 0x694979:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x69497c;}
case 0x69497c:{ // PFMUL MM4,MM4
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x694980;}
case 0x694980:{ // PFRSQIT1 MM4,MM0
wr<8>(c,0x1140,user_op(c,524535,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x694984;}
case 0x694984:{ // PAND MM1,MM2
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1120)));
return 0x694987;}
case 0x694987:{ // PFRCPIT2 MM4,MM5
wr<8>(c,0x1140,user_op(c,524536,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x69498b;}
case 0x69498b:{ // PFMUL MM1,MM4
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x69498f;}
case 0x69498f:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694992;}
case 0x694992:{ // FEMMS
user_op(c,251,{});
return 0x694994;}
case 0x694994:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x694997;}
case 0x694997:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x69499c;}
case 0x69499c:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x69499f;}
case 0x69499f:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x6949a2;}
case 0x6949a2:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x6949a6;}
case 0x6949a6:{ // PUNPCKLDQ MM1,dword ptr [0x007b7158]
wr<4>(c,0x1114,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x6949ad;}
case 0x6949ad:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6949b1;}
case 0x6949b1:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6949b4;}
case 0x6949b4:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x6949b8;}
case 0x6949b8:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6949bc;}
case 0x6949bc:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x6949bf;}
case 0x6949bf:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x6949c3;}
case 0x6949c3:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x6949c6;}
case 0x6949c6:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6949c9;}
case 0x6949c9:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x6949cc;}
case 0x6949cc:{ // PFMUL MM0,qword ptr [0x007b7168]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7168)}));
return 0x6949d4;}
case 0x6949d4:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6949d7;}
case 0x6949d7:{ // PUNPCKLDQ MM0,MM4
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x6949da;}
case 0x6949da:{ // PXOR MM3,qword ptr [0x007b7178]
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7178)));
return 0x6949e1;}
case 0x6949e1:{ // PUNPCKHDQ MM5,MM7
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x6949e4;}
case 0x6949e4:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x6949e8;}
case 0x6949e8:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x6949ec;}
case 0x6949ec:{ // PFSUB MM1,MM0
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x6949f0;}
case 0x6949f0:{ // PFSUB MM0,MM5
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x6949f4;}
case 0x6949f4:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x6949f7;}
case 0x6949f7:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x6949fa;}
case 0x6949fa:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x6949fd;}
case 0x6949fd:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694a00;}
case 0x694a00:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a04;}
case 0x694a04:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694a07;}
case 0x694a07:{ // PFMUL MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x694a0b;}
case 0x694a0b:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694a0e;}
case 0x694a0e:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694a12;}
case 0x694a12:{ // PFMUL MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x694a16;}
case 0x694a16:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694a1a;}
case 0x694a1a:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a1e;}
case 0x694a1e:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x694a22;}
case 0x694a22:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a26;}
case 0x694a26:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694a2a;}
case 0x694a2a:{ // PFMUL MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694a2e;}
case 0x694a2e:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x694a32;}
case 0x694a32:{ // PFMUL MM0,qword ptr [0x007b71c0]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b71c0)}));
return 0x694a3a;}
case 0x694a3a:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694a3d;}
case 0x694a3d:{ // FEMMS
user_op(c,251,{});
return 0x694a3f;}
case 0x694a3f:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x694a42;}
case 0x694a42:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x694a44;}
case 0x694a44:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694a45;}
case 0x694a45:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x694a47;}
case 0x694a47:{ // FEMMS
user_op(c,251,{});
return 0x694a49;}
case 0x694a49:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a4c;}
case 0x694a4c:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a4f;}
case 0x694a4f:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694a52;}
case 0x694a52:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694a55;}
case 0x694a55:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694a58;}
case 0x694a58:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694a5b;}
case 0x694a5b:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694a5e;}
case 0x694a5e:{ // MOVQ MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694a62;}
case 0x694a62:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694a65;}
case 0x694a65:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694a68;}
case 0x694a68:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694a6b;}
case 0x694a6b:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694a6e;}
case 0x694a6e:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694a72;}
case 0x694a72:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694a75;}
case 0x694a75:{ // PFMUL MM1,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x694a7a;}
case 0x694a7a:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694a7d;}
case 0x694a7d:{ // PFMUL MM2,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x694a82;}
case 0x694a82:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694a85;}
case 0x694a85:{ // PFMUL MM3,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694a8a;}
case 0x694a8a:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694a8e;}
case 0x694a8e:{ // PFMUL MM4,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x694a93;}
case 0x694a93:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x694a97;}
case 0x694a97:{ // PFMUL MM5,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x694a9c;}
case 0x694a9c:{ // PFMUL MM6,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x694aa1;}
case 0x694aa1:{ // PFMUL MM7,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x694aa6;}
case 0x694aa6:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694aaa;}
case 0x694aaa:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x694aae;}
case 0x694aae:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x694ab2;}
case 0x694ab2:{ // PFADD MM4,MM6
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x694ab6;}
case 0x694ab6:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694ab9;}
case 0x694ab9:{ // MOVQ qword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694abd;}
case 0x694abd:{ // FEMMS
user_op(c,251,{});
return 0x694abf;}
case 0x694abf:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694ac2;}
case 0x694ac2:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x694ac3;}
case 0x694ac3:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x694ac6;}
case 0x694ac6:{ // FEMMS
user_op(c,251,{});
return 0x694ac8;}
case 0x694ac8:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694acc;}
case 0x694acc:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694acf;}
case 0x694acf:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694ad2;}
case 0x694ad2:{ // MOVQ MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694ad6;}
case 0x694ad6:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694ad9;}
case 0x694ad9:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x694add;}
case 0x694add:{ // PFMUL MM2,MM2
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x694ae1;}
case 0x694ae1:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694ae5;}
case 0x694ae5:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x694ae9;}
case 0x694ae9:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694aed;}
case 0x694aed:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694af0;}
case 0x694af0:{ // PFRSQRT MM4,MM0
wr<8>(c,0x1140,user_op(c,524533,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x694af4;}
case 0x694af4:{ // PFCMPGT MM5,qword ptr [0x007b71c8]
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),m<8>(c,0x7b71c8)}));
return 0x694afc;}
case 0x694afc:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694aff;}
case 0x694aff:{ // PFMUL MM2,MM4
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x694b03;}
case 0x694b03:{ // PFRSQIT1 MM0,MM2
wr<8>(c,0x1100,user_op(c,524535,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694b07;}
case 0x694b07:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x694b0a;}
case 0x694b0a:{ // PAND MM3,MM5
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1150)));
return 0x694b0d;}
case 0x694b0d:{ // PFRCPIT2 MM0,MM4
wr<8>(c,0x1100,user_op(c,524536,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x694b11;}
case 0x694b11:{ // PFMUL MM1,MM0
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x694b15;}
case 0x694b15:{ // PFMUL MM3,MM0
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1100)}));
return 0x694b19;}
case 0x694b19:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694b1c;}
case 0x694b1c:{ // MOVQ qword ptr [EAX + 0x8],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694b20;}
case 0x694b20:{ // FEMMS
user_op(c,251,{});
return 0x694b22;}
case 0x694b22:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x694b25;}
case 0x694b25:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x694b27;}
case 0x694b27:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x694b28;}
case 0x694b28:{ // FEMMS
user_op(c,251,{});
return 0x694b2a;}
case 0x694b2a:{ // MOV EBX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694b2e;}
case 0x694b2e:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694b32;}
case 0x694b32:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694b36;}
case 0x694b36:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694b3a;}
case 0x694b3a:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694b3d;}
case 0x694b3d:{ // MOVQ MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694b40;}
case 0x694b40:{ // MOVQ MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694b44;}
case 0x694b44:{ // MOVQ MM3,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694b48;}
case 0x694b48:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694b4b;}
case 0x694b4b:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694b4e;}
case 0x694b4e:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x694b51;}
case 0x694b51:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x694b54;}
case 0x694b54:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694b57;}
case 0x694b57:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694b5a;}
case 0x694b5a:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x694b5d;}
case 0x694b5d:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x694b60;}
case 0x694b60:{ // PUNPCKHDQ MM5,MM0
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x694b63;}
case 0x694b63:{ // PUNPCKHDQ MM7,MM1
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694b66;}
case 0x694b66:{ // PFMUL MM4,MM5
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x694b6a;}
case 0x694b6a:{ // PFMUL MM6,MM7
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x694b6e;}
case 0x694b6e:{ // PFSUB MM4,MM6
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x694b72;}
case 0x694b72:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694b75;}
case 0x694b75:{ // PUNPCKHDQ MM5,MM2
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x694b78;}
case 0x694b78:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694b7b;}
case 0x694b7b:{ // PUNPCKLDQ MM6,MM1
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x694b7e;}
case 0x694b7e:{ // PFMUL MM5,MM6
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x694b82;}
case 0x694b82:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694b85;}
case 0x694b85:{ // PUNPCKHDQ MM6,MM3
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694b88;}
case 0x694b88:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694b8b;}
case 0x694b8b:{ // PUNPCKLDQ MM7,MM0
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694b8e;}
case 0x694b8e:{ // PFMUL MM6,MM7
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x694b92;}
case 0x694b92:{ // PFSUB MM5,MM6
wr<8>(c,0x1150,user_op(c,524527,{r<8>(c,0x1150),r<8>(c,0x1160)}));
return 0x694b96;}
case 0x694b96:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694b99;}
case 0x694b99:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694b9c;}
case 0x694b9c:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694b9f;}
case 0x694b9f:{ // PUNPCKHDQ MM2,MM0
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
return 0x694ba2;}
case 0x694ba2:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x694ba5;}
case 0x694ba5:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694ba8;}
case 0x694ba8:{ // PFMUL MM6,MM2
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x694bac;}
case 0x694bac:{ // PUNPCKHDQ MM3,MM1
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694baf;}
case 0x694baf:{ // PFMUL MM0,MM3
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x694bb3;}
case 0x694bb3:{ // PFSUB MM6,MM0
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x694bb7;}
case 0x694bb7:{ // MOVQ MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694bba;}
case 0x694bba:{ // MOVQ MM1,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694bbe;}
case 0x694bbe:{ // MOVQ MM7,qword ptr [0x007b71d8]
wr<8>(c,0x1170,eval<Op::COPY,8,8>(m<8>(c,0x7b71d8)));
return 0x694bc5;}
case 0x694bc5:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694bc8;}
case 0x694bc8:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694bcb;}
case 0x694bcb:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694bce;}
case 0x694bce:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x694bd1;}
case 0x694bd1:{ // PXOR MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x694bd4;}
case 0x694bd4:{ // PUNPCKHDQ MM0,MM3
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694bd7;}
case 0x694bd7:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x694bdb;}
case 0x694bdb:{ // MOVQ MM0,MM7
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x694bde;}
case 0x694bde:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694be1;}
case 0x694be1:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x694be4;}
case 0x694be4:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694be7;}
case 0x694be7:{ // PUNPCKHDQ MM7,MM7
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x694bea;}
case 0x694bea:{ // PUNPCKLDQ MM3,MM5
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x694bed;}
case 0x694bed:{ // PUNPCKLDQ MM7,MM6
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694bf0;}
case 0x694bf0:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x694bf4;}
case 0x694bf4:{ // PFMUL MM7,MM1
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x694bf8;}
case 0x694bf8:{ // PXOR MM3,MM0
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1100)));
return 0x694bfb;}
case 0x694bfb:{ // PXOR MM7,MM0
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1100)));
return 0x694bfe;}
case 0x694bfe:{ // PFACC MM3,MM7
wr<8>(c,0x1130,user_op(c,524525,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x694c02;}
case 0x694c02:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694c05;}
case 0x694c05:{ // MOVQ MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c08;}
case 0x694c08:{ // PFSUB MM2,MM3
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x694c0c;}
case 0x694c0c:{ // MOVQ qword ptr [EAX],MM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694c0f;}
case 0x694c0f:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x694c12;}
case 0x694c12:{ // PXOR MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x694c15;}
case 0x694c15:{ // MOVQ MM2,MM5
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x694c18;}
case 0x694c18:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x694c1c;}
case 0x694c1c:{ // PUNPCKLDQ MM2,MM6
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694c1f;}
case 0x694c1f:{ // PXOR MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x694c22;}
case 0x694c22:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x694c25;}
case 0x694c25:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694c28;}
case 0x694c28:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x694c2b;}
case 0x694c2b:{ // PXOR MM6,MM7
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1170)));
return 0x694c2e;}
case 0x694c2e:{ // PUNPCKHDQ MM1,MM3
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694c31;}
case 0x694c31:{ // PSLLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x20ull));
return 0x694c35;}
case 0x694c35:{ // PFMUL MM4,MM0
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x694c39;}
case 0x694c39:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x694c3d;}
case 0x694c3d:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x694c41;}
case 0x694c41:{ // PXOR MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x694c44;}
case 0x694c44:{ // PXOR MM2,MM7
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1170)));
return 0x694c47;}
case 0x694c47:{ // PFACC MM4,MM2
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x694c4b;}
case 0x694c4b:{ // PFADD MM1,MM4
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1140)}));
return 0x694c4f;}
case 0x694c4f:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694c53;}
case 0x694c53:{ // FEMMS
user_op(c,251,{});
return 0x694c55;}
case 0x694c55:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x694c56;}
case 0x694c56:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x694c59;}
case 0x694c59:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694c5d;}
case 0x694c5d:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694c61;}
case 0x694c61:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694c65;}
case 0x694c65:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c68;}
case 0x694c68:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c6c;}
case 0x694c6c:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c6f;}
case 0x694c6f:{ // MOVQ MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c73;}
case 0x694c73:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c76;}
case 0x694c76:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694c7a;}
case 0x694c7a:{ // MOVD MM6,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694c7f;}
case 0x694c7f:{ // MOVD MM7,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694c84;}
case 0x694c84:{ // PFSUB MM0,MM4
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x694c88;}
case 0x694c88:{ // PFSUB MM1,MM5
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x694c8c;}
case 0x694c8c:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694c90;}
case 0x694c90:{ // PFSUB MM2,MM4
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x694c94;}
case 0x694c94:{ // PFSUB MM3,MM5
wr<8>(c,0x1130,user_op(c,524527,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x694c98;}
case 0x694c98:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694c9b;}
case 0x694c9b:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x694c9e;}
case 0x694c9e:{ // PFMUL MM0,MM6
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1160)}));
return 0x694ca2;}
case 0x694ca2:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x694ca6;}
case 0x694ca6:{ // PFMUL MM2,MM7
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1170)}));
return 0x694caa;}
case 0x694caa:{ // PFADD MM0,MM4
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x694cae;}
case 0x694cae:{ // PFMUL MM3,MM7
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1170)}));
return 0x694cb2;}
case 0x694cb2:{ // PFADD MM1,MM5
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x694cb6;}
case 0x694cb6:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694cba;}
case 0x694cba:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x694cbe;}
case 0x694cbe:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694cc1;}
case 0x694cc1:{ // MOVQ qword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694cc5;}
case 0x694cc5:{ // FEMMS
user_op(c,251,{});
return 0x694cc7;}
case 0x694cc7:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x694cca;}
case 0x694cca:{ // FEMMS
user_op(c,251,{});
return 0x694ccc;}
case 0x694ccc:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694cd1;}
case 0x694cd1:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694cd4;}
case 0x694cd4:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x694cd8;}
case 0x694cd8:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694cdb;}
case 0x694cdb:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x694cdf;}
case 0x694cdf:{ // MOVQ MM3,qword ptr [0x007b71f0]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b71f0)));
return 0x694ce6;}
case 0x694ce6:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694ce9;}
case 0x694ce9:{ // MOVQ MM7,MM2
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694cec;}
case 0x694cec:{ // PFSUB MM7,MM1
wr<8>(c,0x1170,user_op(c,524527,{r<8>(c,0x1170),r<8>(c,0x1110)}));
return 0x694cf0;}
case 0x694cf0:{ // PFMUL MM4,MM3
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x694cf4;}
case 0x694cf4:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694cf7;}
case 0x694cf7:{ // PFMUL MM1,qword ptr [0x007b71f8]
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),m<8>(c,0x7b71f8)}));
return 0x694cff;}
case 0x694cff:{ // PFMUL MM2,MM3
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x694d03;}
case 0x694d03:{ // PFSUB MM6,MM4
wr<8>(c,0x1160,user_op(c,524527,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x694d07;}
case 0x694d07:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694d0a;}
case 0x694d0a:{ // PFSUB MM1,MM2
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x694d0e;}
case 0x694d0e:{ // PFADD MM6,MM0
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1100)}));
return 0x694d12;}
case 0x694d12:{ // PFSUB MM2,MM5
wr<8>(c,0x1120,user_op(c,524527,{r<8>(c,0x1120),r<8>(c,0x1150)}));
return 0x694d16;}
case 0x694d16:{ // PFADD MM2,qword ptr [0x007b71e0]
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),m<8>(c,0x7b71e0)}));
return 0x694d1e;}
case 0x694d1e:{ // MOV EAX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d22;}
case 0x694d22:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d26;}
case 0x694d26:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d2a;}
case 0x694d2a:{ // PUNPCKLDQ MM7,MM7
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x694d2d;}
case 0x694d2d:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x694d30;}
case 0x694d30:{ // PUNPCKLDQ MM6,MM6
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1160)));
return 0x694d33;}
case 0x694d33:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694d36;}
case 0x694d36:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x694d39;}
case 0x694d39:{ // PFMUL MM7,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x694d3d;}
case 0x694d3d:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694d40;}
case 0x694d40:{ // PFMUL MM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x694d44;}
case 0x694d44:{ // PFMUL MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x694d49;}
case 0x694d49:{ // PFMUL MM0,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694d4e;}
case 0x694d4e:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d52;}
case 0x694d52:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d56;}
case 0x694d56:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x694d59;}
case 0x694d59:{ // PFMUL MM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x694d5d;}
case 0x694d5d:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694d60;}
case 0x694d60:{ // PFMUL MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x694d64;}
case 0x694d64:{ // PFMUL MM4,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x694d69;}
case 0x694d69:{ // PFMUL MM3,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694d6e;}
case 0x694d6e:{ // PFADD MM1,MM7
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1170)}));
return 0x694d72;}
case 0x694d72:{ // PFADD MM0,MM5
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x694d76;}
case 0x694d76:{ // PFADD MM2,MM6
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1160)}));
return 0x694d7a;}
case 0x694d7a:{ // PFADD MM3,MM4
wr<8>(c,0x1130,user_op(c,524526,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x694d7e;}
case 0x694d7e:{ // PFADD MM1,MM2
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x694d82;}
case 0x694d82:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x694d86;}
case 0x694d86:{ // MOVQ qword ptr [EAX],MM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694d89;}
case 0x694d89:{ // MOVQ qword ptr [EAX + 0x8],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694d8d;}
case 0x694d8d:{ // FEMMS
user_op(c,251,{});
return 0x694d8f;}
case 0x694d8f:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x694d92;}
case 0x694d92:{ // MOVD MM0,dword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694d97;}
case 0x694d97:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694d9b;}
case 0x694d9b:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694d9e;}
case 0x694d9e:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694da1;}
case 0x694da1:{ // PFMUL MM0,MM0
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x694da5;}
case 0x694da5:{ // PUNPCKLDQ MM1,dword ptr [0x007b7158]
wr<4>(c,0x1114,eval<Op::COPY,4,4>(m<4>(c,0x7b7158)));
return 0x694dac;}
case 0x694dac:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694db0;}
case 0x694db0:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694db3;}
case 0x694db3:{ // PFMUL MM1,MM1
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x694db7;}
case 0x694db7:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x694dba;}
case 0x694dba:{ // PFSUB MM0,MM1
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694dbe;}
case 0x694dbe:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x694dc1;}
case 0x694dc1:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694dc4;}
case 0x694dc4:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x694dc7;}
case 0x694dc7:{ // PFMUL MM0,qword ptr [0x007b7168]
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),m<8>(c,0x7b7168)}));
return 0x694dcf;}
case 0x694dcf:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694dd2;}
case 0x694dd2:{ // PUNPCKLDQ MM0,MM4
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1140)));
return 0x694dd5;}
case 0x694dd5:{ // PXOR MM3,qword ptr [0x007b7178]
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x7b7178)));
return 0x694ddc;}
case 0x694ddc:{ // PUNPCKHDQ MM5,MM7
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x694ddf;}
case 0x694ddf:{ // PFADD MM1,MM3
wr<8>(c,0x1110,user_op(c,524526,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x694de3;}
case 0x694de3:{ // PFSUB MM1,MM0
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x694de7;}
case 0x694de7:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694deb;}
case 0x694deb:{ // PFSUB MM0,MM5
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),r<8>(c,0x1150)}));
return 0x694def;}
case 0x694def:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694df2;}
case 0x694df2:{ // PUNPCKHDQ MM1,MM1
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
return 0x694df5;}
case 0x694df5:{ // MOVQ MM3,MM0
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694df8;}
case 0x694df8:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694dfb;}
case 0x694dfb:{ // MOV EAX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694dff;}
case 0x694dff:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x694e02;}
case 0x694e02:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694e05;}
case 0x694e05:{ // PFMUL MM1,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x694e09;}
case 0x694e09:{ // PUNPCKHDQ MM3,MM3
wr<4>(c,0x1130,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694e0c;}
case 0x694e0c:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694e0f;}
case 0x694e0f:{ // PFMUL MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694e13;}
case 0x694e13:{ // MOVQ MM6,MM2
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x694e16;}
case 0x694e16:{ // PFMUL MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x694e1a;}
case 0x694e1a:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x694e1d;}
case 0x694e1d:{ // PFMUL MM4,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x694e22;}
case 0x694e22:{ // MOV EDX,dword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694e26;}
case 0x694e26:{ // PFMUL MM5,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x694e2b;}
case 0x694e2b:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694e2f;}
case 0x694e2f:{ // PFMUL MM6,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x694e34;}
case 0x694e34:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694e38;}
case 0x694e38:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x694e3c;}
case 0x694e3c:{ // PFADD MM0,MM2
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1120)}));
return 0x694e40;}
case 0x694e40:{ // PFMUL MM3,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x694e44;}
case 0x694e44:{ // MOVQ MM1,qword ptr [0x007b71c0]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x7b71c0)));
return 0x694e4b;}
case 0x694e4b:{ // PFADD MM0,MM3
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1130)}));
return 0x694e4f;}
case 0x694e4f:{ // PFMUL MM7,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x694e54;}
case 0x694e54:{ // PFADD MM4,MM6
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x694e58;}
case 0x694e58:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694e5c;}
case 0x694e5c:{ // PFADD MM4,MM7
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1170)}));
return 0x694e60;}
case 0x694e60:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694e63;}
case 0x694e63:{ // PFMUL MM4,MM1
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1110)}));
return 0x694e67;}
case 0x694e67:{ // MOVQ qword ptr [EAX + 0x8],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694e6b;}
case 0x694e6b:{ // FEMMS
user_op(c,251,{});
return 0x694e6d;}
case 0x694e6d:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x694e70;}
case 0x694e70:{ // FEMMS
user_op(c,251,{});
return 0x694e72;}
case 0x694e72:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694e76;}
case 0x694e76:{ // MOV EDX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694e7a;}
case 0x694e7a:{ // MOV ECX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694e7e;}
case 0x694e7e:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694e81;}
case 0x694e81:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694e85;}
case 0x694e85:{ // MOVQ MM2,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694e88;}
case 0x694e88:{ // MOVD MM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694e8c;}
case 0x694e8c:{ // PFMUL MM2,MM0
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1100)}));
return 0x694e90;}
case 0x694e90:{ // PFMUL MM3,MM1
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1110)}));
return 0x694e94;}
case 0x694e94:{ // PFACC MM2,MM2
wr<8>(c,0x1120,user_op(c,524525,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x694e98;}
case 0x694e98:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x694e9c;}
case 0x694e9c:{ // MOVQ qword ptr [EAX],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694e9f;}
case 0x694e9f:{ // PXOR MM2,qword ptr [0x007b71d0]
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),m<8>(c,0x7b71d0)));
return 0x694ea6;}
case 0x694ea6:{ // MOVD dword ptr [EAX + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1110),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x694eaa;}
case 0x694eaa:{ // MOVD dword ptr [EAX + 0xc],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x694eae;}
case 0x694eae:{ // FEMMS
user_op(c,251,{});
return 0x694eb0;}
case 0x694eb0:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x694eb3;}
case 0x694eb3:{ // FEMMS
user_op(c,251,{});
return 0x694eb5;}
case 0x694eb5:{ // MOV EAX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694eb9;}
case 0x694eb9:{ // MOV ECX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694ebd;}
case 0x694ebd:{ // MOV EDX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694ec1;}
case 0x694ec1:{ // MOVQ MM3,qword ptr [0x007b71d8]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7b71d8)));
return 0x694ec8;}
case 0x694ec8:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694ecb;}
case 0x694ecb:{ // MOVD MM1,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694ecf;}
case 0x694ecf:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694ed2;}
case 0x694ed2:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694ed5;}
case 0x694ed5:{ // MOVD MM6,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694ed9;}
case 0x694ed9:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x694edc;}
case 0x694edc:{ // PUNPCKLDQ MM6,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
return 0x694ee0;}
case 0x694ee0:{ // PFSUB MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,user_op(c,524527,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694ee4;}
case 0x694ee4:{ // PFSUB MM1,MM6
wr<8>(c,0x1110,user_op(c,524527,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x694ee8;}
case 0x694ee8:{ // PFSUB MM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x694eec;}
case 0x694eec:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x694eef;}
case 0x694eef:{ // PFSUB MM7,MM4
wr<8>(c,0x1170,user_op(c,524527,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x694ef3;}
case 0x694ef3:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694ef6;}
case 0x694ef6:{ // PUNPCKHDQ MM0,MM7
wr<4>(c,0x1100,eval<Op::COPY,4,4>(r<4>(c,0x1104)));
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x694ef9;}
case 0x694ef9:{ // PFMUL MM0,MM1
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694efd;}
case 0x694efd:{ // MOVQ MM6,MM7
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x694f00;}
case 0x694f00:{ // PUNPCKLDQ MM6,MM1
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x694f03;}
case 0x694f03:{ // PUNPCKHDQ MM1,MM3
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1134)));
return 0x694f06;}
case 0x694f06:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x694f09;}
case 0x694f09:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x694f0d;}
case 0x694f0d:{ // PFACC MM0,MM1
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694f11;}
case 0x694f11:{ // PXOR MM0,MM3
wr<8>(c,0x1100,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1130)));
return 0x694f14;}
case 0x694f14:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694f17;}
case 0x694f17:{ // PUNPCKLDQ MM4,MM7
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x694f1a;}
case 0x694f1a:{ // PUNPCKHDQ MM1,MM4
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x694f1d;}
case 0x694f1d:{ // PFMUL MM1,MM5
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1150)}));
return 0x694f21;}
case 0x694f21:{ // PFACC MM1,MM1
wr<8>(c,0x1110,user_op(c,524525,{r<8>(c,0x1110),r<8>(c,0x1110)}));
return 0x694f25;}
case 0x694f25:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694f28;}
case 0x694f28:{ // MOVQ MM7,MM1
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694f2b;}
case 0x694f2b:{ // PSLLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1170),0x20ull));
return 0x694f2f;}
case 0x694f2f:{ // PFMUL MM6,MM6
wr<8>(c,0x1160,user_op(c,524531,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x694f33;}
case 0x694f33:{ // PFMUL MM7,MM7
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1170)}));
return 0x694f37;}
case 0x694f37:{ // PFADD MM6,MM7
wr<8>(c,0x1160,user_op(c,524526,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x694f3b;}
case 0x694f3b:{ // PFACC MM6,MM6
wr<8>(c,0x1160,user_op(c,524525,{r<8>(c,0x1160),r<8>(c,0x1160)}));
return 0x694f3f;}
case 0x694f3f:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x694f42;}
case 0x694f42:{ // PFRSQRT MM4,MM6
wr<8>(c,0x1140,user_op(c,524533,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x694f46;}
case 0x694f46:{ // PFCMPGT MM5,qword ptr [0x007b71c8]
wr<8>(c,0x1150,user_op(c,524523,{r<8>(c,0x1150),m<8>(c,0x7b71c8)}));
return 0x694f4e;}
case 0x694f4e:{ // MOVQ MM7,MM4
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x694f51;}
case 0x694f51:{ // PFMUL MM7,MM4
wr<8>(c,0x1170,user_op(c,524531,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x694f55;}
case 0x694f55:{ // PFRSQIT1 MM6,MM7
wr<8>(c,0x1160,user_op(c,524535,{r<8>(c,0x1160),r<8>(c,0x1170)}));
return 0x694f59;}
case 0x694f59:{ // PAND MM0,MM5
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1150)));
return 0x694f5c;}
case 0x694f5c:{ // PAND MM1,MM5
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1150)));
return 0x694f5f;}
case 0x694f5f:{ // PFRCPIT2 MM6,MM4
wr<8>(c,0x1160,user_op(c,524536,{r<8>(c,0x1160),r<8>(c,0x1140)}));
return 0x694f63;}
case 0x694f63:{ // PFMUL MM0,MM6
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),r<8>(c,0x1160)}));
return 0x694f67;}
case 0x694f67:{ // PFMUL MM1,MM6
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x694f6b;}
case 0x694f6b:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694f6f;}
case 0x694f6f:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694f72;}
case 0x694f72:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694f75;}
case 0x694f75:{ // PFMUL MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,user_op(c,524531,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x694f79;}
case 0x694f79:{ // PFMUL MM1,MM2
wr<8>(c,0x1110,user_op(c,524531,{r<8>(c,0x1110),r<8>(c,0x1120)}));
return 0x694f7d;}
case 0x694f7d:{ // PFACC MM0,MM0
wr<8>(c,0x1100,user_op(c,524525,{r<8>(c,0x1100),r<8>(c,0x1100)}));
return 0x694f81;}
case 0x694f81:{ // PFADD MM0,MM1
wr<8>(c,0x1100,user_op(c,524526,{r<8>(c,0x1100),r<8>(c,0x1110)}));
return 0x694f85;}
case 0x694f85:{ // PUNPCKLDQ MM5,MM0
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x694f88;}
case 0x694f88:{ // PXOR MM5,MM3
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1130)));
return 0x694f8b;}
case 0x694f8b:{ // MOVQ qword ptr [EAX],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x694f8e;}
case 0x694f8e:{ // MOVQ qword ptr [EAX + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x694f92;}
case 0x694f92:{ // FEMMS
user_op(c,251,{});
return 0x694f94;}
case 0x694f94:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x694f97;}
case 0x694f97:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694f9b;}
case 0x694f9b:{ // MOV EDX,dword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694f9f;}
case 0x694f9f:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694fa2;}
case 0x694fa2:{ // MOVQ MM1,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694fa6;}
case 0x694fa6:{ // MOV ECX,dword ptr [ESP + 0xc]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0xcull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x694faa;}
case 0x694faa:{ // MOVQ MM4,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694fad;}
case 0x694fad:{ // MOVD MM5,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694fb1;}
case 0x694fb1:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694fb4;}
case 0x694fb4:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694fb7;}
case 0x694fb7:{ // MOVQ MM6,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x694fba;}
case 0x694fba:{ // PFMUL MM2,MM4
wr<8>(c,0x1120,user_op(c,524531,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x694fbe;}
case 0x694fbe:{ // PFMUL MM3,MM5
wr<8>(c,0x1130,user_op(c,524531,{r<8>(c,0x1130),r<8>(c,0x1150)}));
return 0x694fc2;}
case 0x694fc2:{ // MOVD MM7,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x694fc6;}
case 0x694fc6:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694fc9;}
case 0x694fc9:{ // PFADD MM2,MM3
wr<8>(c,0x1120,user_op(c,524526,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x694fcd;}
case 0x694fcd:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x694fd0;}
case 0x694fd0:{ // PFMUL MM4,MM6
wr<8>(c,0x1140,user_op(c,524531,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x694fd4;}
case 0x694fd4:{ // PFMUL MM5,MM7
wr<8>(c,0x1150,user_op(c,524531,{r<8>(c,0x1150),r<8>(c,0x1170)}));
return 0x694fd8;}
case 0x694fd8:{ // PFADD MM4,MM5
wr<8>(c,0x1140,user_op(c,524526,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x694fdc;}
case 0x694fdc:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x694fdf;}
case 0x694fdf:{ // PFSUB MM4,MM2
wr<8>(c,0x1140,user_op(c,524527,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x694fe3;}
case 0x694fe3:{ // PUNPCKLDQ MM7,dword ptr [0x007b7148]
wr<4>(c,0x1174,eval<Op::COPY,4,4>(m<4>(c,0x7b7148)));
return 0x694fea;}
case 0x694fea:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x694fed;}
case 0x694fed:{ // PFACC MM4,MM4
wr<8>(c,0x1140,user_op(c,524525,{r<8>(c,0x1140),r<8>(c,0x1140)}));
return 0x694ff1;}
case 0x694ff1:{ // PFCMPEQ MM3,MM4
wr<8>(c,0x1130,user_op(c,524524,{r<8>(c,0x1130),r<8>(c,0x1140)}));
return 0x694ff5;}
case 0x694ff5:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x694ff8;}
case 0x694ff8:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x694ffa;}
case 0x694ffa:{ // PFRCP MM5,MM4
wr<8>(c,0x1150,user_op(c,524532,{r<8>(c,0x1150),r<8>(c,0x1140)}));
return 0x694ffe;}
case 0x694ffe:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x695002;}
default:missing_instruction(c.pc);}}
}
