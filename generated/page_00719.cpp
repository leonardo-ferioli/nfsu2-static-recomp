#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_719(Cpu& c){switch(c.pc){
case 0x719002:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719003;}
case 0x719003:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719006;}
case 0x719006:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x71900a;}
case 0x71900a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71900c;}
case 0x71900c:{ // SUB ESP,0x988
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x988ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x988ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x988ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719012;}
case 0x719012:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719013;}
case 0x719013:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719014;}
case 0x719014:{ // EMMS
wr<2>(c,0x10a4,eval<Op::COPY,2,2>(0xffffull));
return 0x719016;}
case 0x719016:{ // PUSH 0x3f
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3full));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x719018;}
case 0x719018:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719019;}
case 0x719019:{ // SUB EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71901c;}
case 0x71901c:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71901e;}
case 0x71901e:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719021;}
case 0x719021:{ // FILD dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719021ull));
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
return 0x719024;}
case 0x719024:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719027;}
case 0x719027:{ // FMUL double ptr [0x007c4610]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7c4610),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719027ull));
return 0x71902d;}
case 0x71902d:{ // FADD double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71902dull));
wu<10>(c,0xa9700,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9700),10,10));
return 0x719033;}
case 0x719033:{ // FSTP double ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719033ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x719036;}
case 0x719036:{ // FLD double ptr [0x007c4608]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719036ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7c4608),8,0x0ull,4,10));
return 0x71903c;}
case 0x71903c:{ // FSTP double ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71903cull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x71903f;}
case 0x71903f:{ // FLD double ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71903full));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x719042;}
case 0x719042:{ // SUB ESP,0x18
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719045;}
case 0x719045:{ // FSTP double ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719045ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x719049;}
case 0x719049:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719049ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x71904b;}
case 0x71904b:{ // FSTP double ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71904bull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x71904f;}
case 0x71904f:{ // FLD double ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71904full));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x719052;}
case 0x719052:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719052ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x719055;}
case 0x719055:{ // CALL 0x007033a5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71905aull);
return 0x7033a5;
return 0x71905a;}
case 0x71905a:{ // FMUL double ptr [0x007c4600]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7c4600),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71905aull));
return 0x719060;}
case 0x719060:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719063;}
case 0x719063:{ // FADD double ptr [0x007864e0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x719063ull));
wu<10>(c,0xa9700,float_op("FLOAT2FLOAT",m<8>(c,0x7864e0),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9700),10,10));
return 0x719069;}
case 0x719069:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71906eull);
return 0x75bed4;
return 0x71906e;}
case 0x71906e:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x719070;}
case 0x719070:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719072;}
case 0x719072:{ // MOV dword ptr [EBP + -0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719075;}
case 0x719075:{ // JZ 0x007190b7
if(r<1>(c,0x206)){return 0x7190b7;}
return 0x719077;}
case 0x719077:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719079;}
case 0x719079:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71907b;}
case 0x71907b:{ // JLE 0x007190b2
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x7190b2;}
return 0x71907d;}
case 0x71907d:{ // FLD double ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x71907dull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x719080;}
case 0x719080:{ // LEA EDI,[EBP + EDI*0x1 + 0xfffffe80]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe80ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7d00)));
return 0x719087;}
case 0x719087:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71908cull);
return 0x75bed4;
return 0x71908c;}
case 0x71908c:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x71908e;}
case 0x71908e:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x719090;}
case 0x719090:{ // MOV dword ptr [EBP + -0x4],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719093;}
case 0x719093:{ // MOV DL,AL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x719095;}
case 0x719095:{ // MOV DH,DL
wr<1>(c,0x9,eval<Op::COPY,1,1>(r<1>(c,0x8)));
return 0x719097;}
case 0x719097:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
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
return 0x71909a;}
case 0x71909a:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x71909c;}
case 0x71909c:{ // SHL EAX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x71909f;}
case 0x71909f:{ // MOV AX,DX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x8)));
return 0x7190a2;}
case 0x7190a2:{ // MOV EDX,ESI
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x7190a4;}
case 0x7190a4:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x7190a6;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x7190a4;
return 0x7190a6;}
case 0x7190a6:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7190a8;}
case 0x7190a8:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190ab;}
case 0x7190ab:{ // STOSB.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x7190ad;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x7190ab;
return 0x7190ad;}
case 0x7190ad:{ // MOV EDI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7190b0;}
case 0x7190b0:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x7190b2;}
case 0x7190b2:{ // ADD EDI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190b4;}
case 0x7190b4:{ // MOV dword ptr [EBP + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7190b7;}
case 0x7190b7:{ // FLD double ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7190b7ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x7190ba;}
case 0x7190ba:{ // FADD double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7190baull));
wu<10>(c,0xa9700,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9700),10,10));
return 0x7190c0;}
case 0x7190c0:{ // FST double ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7190c0ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
return 0x7190c3;}
case 0x7190c3:{ // FCOMP double ptr [0x007c45f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7190c3ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x7c45f8),8,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab800),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab800),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab800),10,1));
wr<1>(c,0x1093,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4ea00)));
wu<2>(c,0x4ec00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0x4ed00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ec00),0x8ull));
wu<2>(c,0x4ee00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0x4ef00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4ee00),0x9ull));
wu<2>(c,0x4f000,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4ed00),u<2>(c,0x4ef00)));
wu<2>(c,0x4f100,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0x4f200,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f100),0xaull));
wu<2>(c,0x4f300,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f000),u<2>(c,0x4f200)));
wu<2>(c,0x4f400,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0x4f500,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0x4f400),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0x4f300),u<2>(c,0x4f500)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7190c9;}
case 0x7190c9:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7190cb;}
case 0x7190cb:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190ce;}
case 0x7190ce:{ // JNP 0x0071903f
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x71903f;}
return 0x7190d4;}
case 0x7190d4:{ // MOV ECX,0x100
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x100ull));
return 0x7190d9;}
case 0x7190d9:{ // CMP EDI,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190db;}
case 0x7190db:{ // JGE 0x007190f8
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x7190f8;}
return 0x7190dd;}
case 0x7190dd:{ // SUB ECX,EDI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190df;}
case 0x7190df:{ // LEA EDX,[EBP + EDI*0x1 + 0xfffffe80]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe80ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7d00)));
return 0x7190e6;}
case 0x7190e6:{ // MOV EDI,EDX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7190e8;}
case 0x7190e8:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x7190ea;}
case 0x7190ea:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
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
return 0x7190ed;}
case 0x7190ed:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190ef;}
case 0x7190ef:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x7190f1;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x7190ef;
return 0x7190f1;}
case 0x7190f1:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7190f3;}
case 0x7190f3:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190f6;}
case 0x7190f6:{ // STOSB.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x7190f8;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x7190f6;
return 0x7190f8;}
case 0x7190f8:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7190fa;}
case 0x7190fa:{ // CALL 0x00760d7d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7190ffull);
return 0x760d7d;
return 0x7190ff;}
case 0x7190ff:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719104;}
case 0x719104:{ // MOV AL,byte ptr [EBP + EAX*0x1 + 0xfffffe80]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe80ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7d00)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x71910b;}
case 0x71910b:{ // MOV byte ptr [EBP + ESI*0x1 + 0xfffff680],AL
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffff680ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x7d00),u<1>(c,0xa100));
return 0x719112;}
case 0x719112:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719113;}
case 0x719113:{ // CMP ESI,0x800
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x800ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x800ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x800ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719119;}
case 0x719119:{ // JC 0x007190fa
if(r<1>(c,0x200)){return 0x7190fa;}
return 0x71911b;}
case 0x71911b:{ // MOV AL,byte ptr [EBP + 0xfffffe80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe80ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x719121;}
case 0x719121:{ // MOV CL,AL
wr<1>(c,0x4,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x719123;}
case 0x719123:{ // MOV DL,0xfe
wr<1>(c,0x8,eval<Op::COPY,1,1>(0xfeull));
return 0x719125;}
case 0x719125:{ // IMUL DL
wu<2>(c,0x73500,eval<Op::INT_SEXT,2,1>(r<1>(c,0x0)));
wu<2>(c,0x73600,eval<Op::INT_SEXT,2,1>(r<1>(c,0x8)));
wr<2>(c,0x0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0x73500),u<2>(c,0x73600)));
wu<2>(c,0x4b700,eval<Op::INT_SEXT,2,1>(r<1>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,2,2>(u<2>(c,0x4b700),r<2>(c,0x0)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(r<1>(c,0x200)));
return 0x719127;}
case 0x719127:{ // MOV DL,AL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x719129;}
case 0x719129:{ // MOV DH,DL
wr<1>(c,0x9,eval<Op::COPY,1,1>(r<1>(c,0x8)));
return 0x71912b;}
case 0x71912b:{ // LEA EDI,[EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x71912e;}
case 0x71912e:{ // NEG CL
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(0x0ull,r<1>(c,0x4)));
wr<1>(c,0x4,eval<Op::INT_2COMP,1,1>(r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719130;}
case 0x719130:{ // MOV CH,CL
wr<1>(c,0x5,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x719132;}
case 0x719132:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x719134;}
case 0x719134:{ // SHL EAX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x719137;}
case 0x719137:{ // MOV AX,DX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x8)));
return 0x71913a;}
case 0x71913a:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71913b;}
case 0x71913b:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71913c;}
case 0x71913c:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71913d;}
case 0x71913d:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x71913e;}
case 0x71913e:{ // MOV AL,CL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x719140;}
case 0x719140:{ // MOV DL,AL
wr<1>(c,0x8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x719142;}
case 0x719142:{ // MOV DH,DL
wr<1>(c,0x9,eval<Op::COPY,1,1>(r<1>(c,0x8)));
return 0x719144;}
case 0x719144:{ // LEA EDI,[EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x719147;}
case 0x719147:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x719149;}
case 0x719149:{ // SHL EAX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x71914c;}
case 0x71914c:{ // MOV AX,DX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x8)));
return 0x71914f;}
case 0x71914f:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719150;}
case 0x719150:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719151;}
case 0x719151:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719152;}
case 0x719152:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719153;}
case 0x719153:{ // MOV AL,CL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x719155;}
case 0x719155:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x719157;}
case 0x719157:{ // SHL EAX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
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
return 0x71915a;}
case 0x71915a:{ // MOV AX,CX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x4)));
return 0x71915d;}
case 0x71915d:{ // LEA EDI,[EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x719160;}
case 0x719160:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719161;}
case 0x719161:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719162;}
case 0x719162:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719163;}
case 0x719163:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719164;}
case 0x719164:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719167;}
case 0x719167:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719169;}
case 0x719169:{ // JBE 0x007191cd
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x7191cd;}
return 0x71916b;}
case 0x71916b:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71916e;}
case 0x71916e:{ // MOV dword ptr [EBP + -0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719171;}
case 0x719171:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719174;}
case 0x719174:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719177;}
case 0x719177:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71917a;}
case 0x71917a:{ // CALL 0x00760d7d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x71917full);
return 0x760d7d;
return 0x71917f;}
case 0x71917f:{ // AND EAX,0xff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719184;}
case 0x719184:{ // LEA EAX,[EBP + EAX*0x1 + 0xfffff680]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffff680ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7d00)));
return 0x71918b;}
case 0x71918b:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71918e;}
case 0x71918e:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719191;}
case 0x719191:{ // MOV ESI,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719194;}
case 0x719194:{ // MOV EDI,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719197;}
case 0x719197:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719199;}
case 0x719199:{ // MOVDQU XMM1,xmmword ptr [ESI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71919e;}
case 0x71919e:{ // PSUBUSB XMM1,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048746,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x7191a3;}
case 0x7191a3:{ // PADDUSB XMM1,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048719,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x7191a8;}
case 0x7191a8:{ // PSUBUSB XMM1,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,user_op(c,1048746,{r<16>(c,0x1240),u<16>(c,0xa600)}));
return 0x7191ad;}
case 0x7191ad:{ // MOVDQU XMM2,xmmword ptr [EDI + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7191b2;}
case 0x7191b2:{ // PADDB XMM1,XMM2
wr<1>(c,0x1240,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1240),r<1>(c,0x1280)));
wr<1>(c,0x1241,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1241),r<1>(c,0x1281)));
wr<1>(c,0x1242,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1242),r<1>(c,0x1282)));
wr<1>(c,0x1243,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1243),r<1>(c,0x1283)));
wr<1>(c,0x1244,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1244),r<1>(c,0x1284)));
wr<1>(c,0x1245,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1245),r<1>(c,0x1285)));
wr<1>(c,0x1246,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1246),r<1>(c,0x1286)));
wr<1>(c,0x1247,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1247),r<1>(c,0x1287)));
wr<1>(c,0x1248,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1248),r<1>(c,0x1288)));
wr<1>(c,0x1249,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x1249),r<1>(c,0x1289)));
wr<1>(c,0x124a,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124a),r<1>(c,0x128a)));
wr<1>(c,0x124b,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124b),r<1>(c,0x128b)));
wr<1>(c,0x124c,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124c),r<1>(c,0x128c)));
wr<1>(c,0x124d,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124d),r<1>(c,0x128d)));
wr<1>(c,0x124e,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124e),r<1>(c,0x128e)));
wr<1>(c,0x124f,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x124f),r<1>(c,0x128f)));
return 0x7191b6;}
case 0x7191b6:{ // MOVDQU xmmword ptr [ESI + EAX*0x1],XMM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6c00),u<16>(c,0xa600));
return 0x7191bb;}
case 0x7191bb:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7191be;}
case 0x7191be:{ // CMP EAX,ECX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7191c0;}
case 0x7191c0:{ // JL 0x00719199
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x719199;}
return 0x7191c2;}
case 0x7191c2:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7191c5;}
case 0x7191c5:{ // ADD dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x7191c8;}
case 0x7191c8:{ // DEC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x7191cb;}
case 0x7191cb:{ // JNZ 0x00719174
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x719174;}
return 0x7191cd;}
case 0x7191cd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7191ce;}
case 0x7191ce:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7191cf;}
case 0x7191cf:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x7191d1;}
case 0x7191d1:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7191d2;}
case 0x7191d2:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x7191d4;}
case 0x7191d4:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7191d5;}
case 0x7191d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7191d6;}
case 0x7191d6:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7191d7;}
case 0x7191d7:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7191d9;}
case 0x7191d9:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7191dc;}
case 0x7191dc:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7191dd;}
case 0x7191dd:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7191de;}
case 0x7191de:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7191e1;}
case 0x7191e1:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x7191e3;}
case 0x7191e3:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
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
return 0x7191e6;}
case 0x7191e6:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7191e7;}
case 0x7191e7:{ // MOV EDI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7191ea;}
case 0x7191ea:{ // MOV dword ptr [EBP + 0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7191ed;}
case 0x7191ed:{ // MOV dword ptr [EBP + 0xc],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7191f0;}
case 0x7191f0:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x7191f2;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x14300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x14400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x14500,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x14600,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x14500)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x14400),u<4>(c,0x14600)));
wu<4>(c,0x14800,m<4>(c,u<4>(c,0x14300)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(u<4>(c,0x14800)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x7191f0;
return 0x7191f2;}
case 0x7191f2:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x7191f4;}
case 0x7191f4:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7191f7;}
case 0x7191f7:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7191fa;}
case 0x7191fa:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7191fb;}
case 0x7191fb:{ // CMP EAX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7191fe;}
case 0x7191fe:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x719200;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<4>(c,0x12900,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x12a00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x12b00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x12c00,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x12b00)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x12a00),u<4>(c,0x12c00)));
wu<1>(c,0x12e00,m<1>(c,u<4>(c,0x12900)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(u<1>(c,0x12e00)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x7191fe;
return 0x719200;}
case 0x719200:{ // JLE 0x00719274
wu<1>(c,0x18a00,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x18c00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x206),u<1>(c,0x18a00)));
if(u<1>(c,0x18c00)){return 0x719274;}
return 0x719202;}
case 0x719202:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719203;}
case 0x719203:{ // MOV dword ptr [EBP + 0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719206;}
case 0x719206:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719209;}
case 0x719209:{ // ADD dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
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
return 0x71920c;}
case 0x71920c:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71920f;}
case 0x71920f:{ // MOV EDI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719212;}
case 0x719212:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719214;}
case 0x719214:{ // MOV EDX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719217;}
case 0x719217:{ // LEA EAX,[ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71921a;}
case 0x71921a:{ // LEA EDX,[EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71921d;}
case 0x71921d:{ // MOV EBX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719220;}
case 0x719220:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x719224;}
case 0x719224:{ // MOVQ XMM0,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x719229;}
case 0x719229:{ // MOVQ XMM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71922e;}
case 0x71922e:{ // PUNPCKLBW XMM0,XMM7
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
return 0x719232;}
case 0x719232:{ // MOVQ XMM2,qword ptr [EDX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x719237;}
case 0x719237:{ // PUNPCKLBW XMM1,XMM7
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
return 0x71923b;}
case 0x71923b:{ // PADDW XMM0,xmmword ptr [0x00817720]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x817720)));
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),u<2>(c,0xe6d00)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),u<2>(c,0xe6d02)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),u<2>(c,0xe6d04)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),u<2>(c,0xe6d06)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),u<2>(c,0xe6d08)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),u<2>(c,0xe6d0a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),u<2>(c,0xe6d0c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),u<2>(c,0xe6d0e)));
return 0x719243;}
case 0x719243:{ // PSLLW XMM1,0x1
wr<16>(c,0x1240,user_op(c,1048742,{r<16>(c,0x1240),0x1ull}));
return 0x719248;}
case 0x719248:{ // PUNPCKLBW XMM2,XMM7
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
return 0x71924c;}
case 0x71924c:{ // PADDW XMM0,XMM1
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1240)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1242)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1244)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1246)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1248)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x124a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x124c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x124e)));
return 0x719250;}
case 0x719250:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x719254;}
case 0x719254:{ // PSRAW XMM0,0x2
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x2ull}));
return 0x719259;}
case 0x719259:{ // PACKUSWB XMM0,XMM7
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1200,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x120f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71925d;}
case 0x71925d:{ // MOVQ qword ptr [EDI + ECX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719262;}
case 0x719262:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719265;}
case 0x719265:{ // CMP ECX,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719267;}
case 0x719267:{ // JL 0x00719224
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x719224;}
return 0x719269;}
case 0x719269:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71926c;}
case 0x71926c:{ // ADD dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
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
return 0x71926f;}
case 0x71926f:{ // DEC dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x719272;}
case 0x719272:{ // JNZ 0x00719206
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x719206;}
return 0x719274;}
case 0x719274:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719277;}
case 0x719277:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71927a;}
case 0x71927a:{ // ADD ESI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71927d;}
case 0x71927d:{ // MOV EDI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719280;}
case 0x719280:{ // ADD EDI,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719283;}
case 0x719283:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x719285;}
case 0x719285:{ // SHR ECX,0x2
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x4,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0xa1b00)));
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
return 0x719288;}
case 0x719288:{ // MOVSD.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x71928a;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x14300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x14400,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x14500,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x14600,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x14500)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x14400),u<4>(c,0x14600)));
wu<4>(c,0x14800,m<4>(c,u<4>(c,0x14300)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(u<4>(c,0x14800)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x719288;
return 0x71928a;}
case 0x71928a:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x71928c;}
case 0x71928c:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71928f;}
case 0x71928f:{ // MOVSB.REP ES:EDI,ESI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x719291;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<4>(c,0x12900,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wu<4>(c,0x12a00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x12b00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x12c00,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x12b00)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x12a00),u<4>(c,0x12c00)));
wu<1>(c,0x12e00,m<1>(c,u<4>(c,0x12900)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(u<1>(c,0x12e00)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x71928f;
return 0x719291;}
case 0x719291:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719292;}
case 0x719292:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719293;}
case 0x719293:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719294;}
case 0x719294:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719295;}
case 0x719295:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719296;}
case 0x719296:{ // MOV EAX,[0x008b9c40]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8b9c40)));
return 0x71929b;}
case 0x71929b:{ // MOV ECX,0x8b9942
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8b9942ull));
return 0x7192a0;}
case 0x7192a0:{ // MOV DX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7192a3;}
case 0x7192a3:{ // MOV word ptr [ECX + -0x2],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffffeull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7192a7;}
case 0x7192a7:{ // MOV DX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7192aa;}
case 0x7192aa:{ // MOV word ptr [ECX],DX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,r<4>(c,0x4),u<2>(c,0xa200));
return 0x7192ad;}
case 0x7192ad:{ // MOV DX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7192b0;}
case 0x7192b0:{ // MOV word ptr [ECX + 0x2],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7192b4;}
case 0x7192b4:{ // MOV DX,word ptr [EAX]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7192b7;}
case 0x7192b7:{ // MOV word ptr [ECX + 0x4],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7192bb;}
case 0x7192bb:{ // ADD ECX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x8ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192be;}
case 0x7192be:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192c1;}
case 0x7192c1:{ // CMP ECX,0x8b9b42
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x8b9b42ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x8b9b42ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x8b9b42ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192c7;}
case 0x7192c7:{ // JL 0x007192a0
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x7192a0;}
return 0x7192c9;}
case 0x7192c9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7192ca;}
case 0x7192ca:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192cb;}
case 0x7192cb:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7192cd;}
case 0x7192cd:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192ce;}
case 0x7192ce:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192cf;}
case 0x7192cf:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192d2;}
case 0x7192d2:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192d5;}
case 0x7192d5:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192d6;}
case 0x7192d6:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7192d9;}
case 0x7192d9:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x7192dd;}
case 0x7192dd:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7192df;}
case 0x7192df:{ // SUB ESP,0x58
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x58ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x58ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x58ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7192e2;}
case 0x7192e2:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7192e5;}
case 0x7192e5:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192e6;}
case 0x7192e6:{ // LEA EAX,[EAX*0x8 + 0x8b9940]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8b9940ull,u<4>(c,0x6d00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x7192ed;}
case 0x7192ed:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7192ee;}
case 0x7192ee:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7192f1;}
case 0x7192f1:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x7192f3;}
case 0x7192f3:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7192f4;}
case 0x7192f4:{ // MOV word ptr [EBP + -0x30],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7192f8;}
case 0x7192f8:{ // MOV word ptr [EBP + -0x2e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7192fc;}
case 0x7192fc:{ // MOV word ptr [EBP + -0x2c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719300;}
case 0x719300:{ // MOV word ptr [EBP + -0x2a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719304;}
case 0x719304:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719306;}
case 0x719306:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719307;}
case 0x719307:{ // MOV word ptr [EBP + -0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71930b;}
case 0x71930b:{ // MOV word ptr [EBP + -0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71930f;}
case 0x71930f:{ // MOV word ptr [EBP + -0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719313;}
case 0x719313:{ // MOV word ptr [EBP + -0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719317;}
case 0x719317:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71931a;}
case 0x71931a:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71931d;}
case 0x71931d:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719320;}
case 0x719320:{ // LEA EDI,[EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x719323;}
case 0x719323:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x719325;}
case 0x719325:{ // MOVD MM0,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719329;}
case 0x719329:{ // MOVD MM4,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71932c;}
case 0x71932c:{ // PSRLD MM0,0x10
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0x10ull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0x10ull));
return 0x719330;}
case 0x719330:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719335;}
case 0x719335:{ // PUNPCKLWD MM0,MM4
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719338;}
case 0x719338:{ // MOVD MM4,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71933c;}
case 0x71933c:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x719340;}
case 0x719340:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719343;}
case 0x719343:{ // LEA EDX,[EDX + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719346;}
case 0x719346:{ // MOVD MM2,dword ptr [ESI + ECX*0x2 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71934b;}
case 0x71934b:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71934e;}
case 0x71934e:{ // MOVD MM4,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719352;}
case 0x719352:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x719356;}
case 0x719356:{ // MOVD MM1,dword ptr [ESI + EDX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71935b;}
case 0x71935b:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71935e;}
case 0x71935e:{ // MOVD MM4,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719362;}
case 0x719362:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x719366;}
case 0x719366:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719369;}
case 0x719369:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71936c;}
case 0x71936c:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71936f;}
case 0x71936f:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719372;}
case 0x719372:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x719375;}
case 0x719375:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719378;}
case 0x719378:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71937b;}
case 0x71937b:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71937e;}
case 0x71937e:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x719381;}
case 0x719381:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719384;}
case 0x719384:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x719388;}
case 0x719388:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x71938c;}
case 0x71938c:{ // MOVD MM7,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719390;}
case 0x719390:{ // PUNPCKLBW MM1,MM4
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719393;}
case 0x719393:{ // MOVD MM4,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719396;}
case 0x719396:{ // PSRLD MM7,0x10
wr<4>(c,0x1170,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1170),0x10ull));
wr<4>(c,0x1174,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1174),0x10ull));
return 0x71939a;}
case 0x71939a:{ // MOVD MM5,dword ptr [ESI + ECX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71939f;}
case 0x71939f:{ // PUNPCKLWD MM7,MM4
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7193a2;}
case 0x7193a2:{ // MOVD MM4,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7193a6;}
case 0x7193a6:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x7193aa;}
case 0x7193aa:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7193ad;}
case 0x7193ad:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x7193b0;}
case 0x7193b0:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x7193b3;}
case 0x7193b3:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x7193b7;}
case 0x7193b7:{ // PSUBW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x7193ba;}
case 0x7193ba:{ // PUNPCKLBW MM7,MM5
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x7193bd;}
case 0x7193bd:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7193c0;}
case 0x7193c0:{ // PUNPCKLBW MM6,MM4
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x7193c3;}
case 0x7193c3:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7193c6;}
case 0x7193c6:{ // PUNPCKLBW MM2,MM4
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x7193c9;}
case 0x7193c9:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7193cc;}
case 0x7193cc:{ // PADDW MM1,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x7193d0;}
case 0x7193d0:{ // PSUBW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x7193d3;}
case 0x7193d3:{ // MOVD MM2,dword ptr [ESI + ECX*0x2 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7193d8;}
case 0x7193d8:{ // PADDW MM6,MM1
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1110)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1112)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1114)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1116)));
return 0x7193db;}
case 0x7193db:{ // MOVD MM4,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7193df;}
case 0x7193df:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x7193e3;}
case 0x7193e3:{ // MOVD MM5,dword ptr [ESI + EDX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7193e8;}
case 0x7193e8:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7193eb;}
case 0x7193eb:{ // MOVD MM4,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7193ef;}
case 0x7193ef:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x7193f3;}
case 0x7193f3:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7193f6;}
case 0x7193f6:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7193f9;}
case 0x7193f9:{ // PSRAW MM6,0x3
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x3ull}));
return 0x7193fd;}
case 0x7193fd:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x719400;}
case 0x719400:{ // PUNPCKLBW MM2,MM5
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x719403;}
case 0x719403:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x719406;}
case 0x719406:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x719409;}
case 0x719409:{ // PUNPCKHWD MM5,MM2
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71940c;}
case 0x71940c:{ // MOVQ qword ptr [EDI + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x719410;}
case 0x719410:{ // PUNPCKLWD MM7,MM2
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x719413;}
case 0x719413:{ // MOVQ qword ptr [EDI + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x719417;}
case 0x719417:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x71941b;}
case 0x71941b:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71941e;}
case 0x71941e:{ // MOVQ MM0,MM7
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x719421;}
case 0x719421:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x719425;}
case 0x719425:{ // PXOR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x719428;}
case 0x719428:{ // PSUBSW MM1,MM6
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x71942b;}
case 0x71942b:{ // PUNPCKLBW MM5,MM4
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71942e;}
case 0x71942e:{ // POR MM6,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x719432;}
case 0x719432:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x719435;}
case 0x719435:{ // PUNPCKLBW MM7,MM4
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719438;}
case 0x719438:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71943b;}
case 0x71943b:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71943e;}
case 0x71943e:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x719442;}
case 0x719442:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x719445;}
case 0x719445:{ // PXOR MM4,MM3
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1130)));
return 0x719448;}
case 0x719448:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x71944b;}
case 0x71944b:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x71944e;}
case 0x71944e:{ // MOVD MM1,dword ptr [EDI + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719452;}
case 0x719452:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719455;}
case 0x719455:{ // PUNPCKLBW MM0,MM3
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x719458;}
case 0x719458:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71945b;}
case 0x71945b:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71945e;}
case 0x71945e:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719461;}
case 0x719461:{ // PUNPCKLBW MM1,MM3
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x719464;}
case 0x719464:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x719467;}
case 0x719467:{ // PADDW MM5,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x71946b;}
case 0x71946b:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71946e;}
case 0x71946e:{ // PADDW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719471;}
case 0x719471:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x719474;}
case 0x719474:{ // MOVD MM7,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719478;}
case 0x719478:{ // PSRAW MM0,0x3
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x3ull}));
return 0x71947c;}
case 0x71947c:{ // MOVD MM3,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719480;}
case 0x719480:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x719483;}
case 0x719483:{ // PSUBW MM7,MM2
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1120)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1124)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1126)));
return 0x719486;}
case 0x719486:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x719489;}
case 0x719489:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71948c;}
case 0x71948c:{ // PACKUSWB MM7,MM7
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
return 0x71948f;}
case 0x71948f:{ // PACKUSWB MM3,MM3
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
return 0x719492;}
case 0x719492:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719495;}
case 0x719495:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719498;}
case 0x719498:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x71949c;}
case 0x71949c:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71949f;}
case 0x71949f:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7194a2;}
case 0x7194a2:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7194a5;}
case 0x7194a5:{ // PXOR MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x7194a8;}
case 0x7194a8:{ // MOV word ptr [ESI + -0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7194ac;}
case 0x7194ac:{ // PSUBSW MM1,MM0
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x7194af;}
case 0x7194af:{ // SHR EAX,0x10
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
return 0x7194b2;}
case 0x7194b2:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7194b5;}
case 0x7194b5:{ // MOV word ptr [ESI + ECX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7194ba;}
case 0x7194ba:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7194be;}
case 0x7194be:{ // POR MM7,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x7194c2;}
case 0x7194c2:{ // PSUBW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x7194c5;}
case 0x7194c5:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7194c8;}
case 0x7194c8:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7194cb;}
case 0x7194cb:{ // MOV word ptr [ESI + ECX*0x2 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7194d0;}
case 0x7194d0:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x7194d4;}
case 0x7194d4:{ // SHR EAX,0x10
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
return 0x7194d7;}
case 0x7194d7:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x7194da;}
case 0x7194da:{ // MOV word ptr [ESI + EDX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7194df;}
case 0x7194df:{ // PSUBSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x7194e2;}
case 0x7194e2:{ // MOVD MM5,dword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7194e6;}
case 0x7194e6:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x7194e9;}
case 0x7194e9:{ // PMULLW MM2,MM7
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1170)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1172)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1174)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1176)));
return 0x7194ec;}
case 0x7194ec:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x7194ef;}
case 0x7194ef:{ // MOVD MM3,dword ptr [EDI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7194f3;}
case 0x7194f3:{ // PUNPCKLBW MM5,MM6
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7194f6;}
case 0x7194f6:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7194f9;}
case 0x7194f9:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7194fc;}
case 0x7194fc:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7194ff;}
case 0x7194ff:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x719502;}
case 0x719502:{ // PACKUSWB MM3,MM3
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
return 0x719505;}
case 0x719505:{ // PACKUSWB MM5,MM5
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
return 0x719508;}
case 0x719508:{ // PUNPCKLBW MM3,MM5
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71950b;}
case 0x71950b:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x71950e;}
case 0x71950e:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x719512;}
case 0x719512:{ // MOV word ptr [ESI + -0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719516;}
case 0x719516:{ // SHR EAX,0x10
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
return 0x719519;}
case 0x719519:{ // MOV word ptr [ESI + ECX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71951e;}
case 0x71951e:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x719521;}
case 0x719521:{ // MOV word ptr [ESI + ECX*0x2 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x719526;}
case 0x719526:{ // SHR EAX,0x10
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
return 0x719529;}
case 0x719529:{ // MOV word ptr [ESI + EDX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71952e;}
case 0x71952e:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71952f;}
case 0x71952f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719530;}
case 0x719530:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x719532;}
case 0x719532:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719533;}
case 0x719533:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x719535;}
case 0x719535:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719536;}
case 0x719536:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719537;}
case 0x719537:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719538;}
case 0x719538:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71953a;}
case 0x71953a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71953b;}
case 0x71953b:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71953c;}
case 0x71953c:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71953f;}
case 0x71953f:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719542;}
case 0x719542:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719543;}
case 0x719543:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719546;}
case 0x719546:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x71954a;}
case 0x71954a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71954c;}
case 0x71954c:{ // SUB ESP,0x3c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x3cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71954f;}
case 0x71954f:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719552;}
case 0x719552:{ // LEA EAX,[EAX*0x8 + 0x8b9940]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8b9940ull,u<4>(c,0x6d00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x719559;}
case 0x719559:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71955a;}
case 0x71955a:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71955d;}
case 0x71955d:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71955f;}
case 0x71955f:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719560;}
case 0x719560:{ // MOV word ptr [EBP + -0x30],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719564;}
case 0x719564:{ // MOV word ptr [EBP + -0x2e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719568;}
case 0x719568:{ // MOV word ptr [EBP + -0x2c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71956c;}
case 0x71956c:{ // MOV word ptr [EBP + -0x2a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719570;}
case 0x719570:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719572;}
case 0x719572:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719573;}
case 0x719573:{ // MOV word ptr [EBP + -0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719577;}
case 0x719577:{ // MOV word ptr [EBP + -0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71957b;}
case 0x71957b:{ // MOV word ptr [EBP + -0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71957f;}
case 0x71957f:{ // MOV word ptr [EBP + -0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719583;}
case 0x719583:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719586;}
case 0x719586:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719589;}
case 0x719589:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71958b;}
case 0x71958b:{ // SUB ECX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71958d;}
case 0x71958d:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719590;}
case 0x719590:{ // MOVD MM0,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719593;}
case 0x719593:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719596;}
case 0x719596:{ // MOVD MM1,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71959a;}
case 0x71959a:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71959d;}
case 0x71959d:{ // MOVD MM2,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7195a1;}
case 0x7195a1:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7195a4;}
case 0x7195a4:{ // MOVD MM3,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7195a8;}
case 0x7195a8:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7195ab;}
case 0x7195ab:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7195ae;}
case 0x7195ae:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x7195b1;}
case 0x7195b1:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7195b4;}
case 0x7195b4:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7195b7;}
case 0x7195b7:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7195ba;}
case 0x7195ba:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x7195bd;}
case 0x7195bd:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7195c0;}
case 0x7195c0:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x7195c3;}
case 0x7195c3:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7195c6;}
case 0x7195c6:{ // PADDW MM3,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7195ca;}
case 0x7195ca:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7195cd;}
case 0x7195cd:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x7195d1;}
case 0x7195d1:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7195d4;}
case 0x7195d4:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x7195d8;}
case 0x7195d8:{ // PXOR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x7195db;}
case 0x7195db:{ // PSUBSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x7195de;}
case 0x7195de:{ // POR MM3,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x7195e2;}
case 0x7195e2:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7195e5;}
case 0x7195e5:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x7195e8;}
case 0x7195e8:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7195eb;}
case 0x7195eb:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x7195ef;}
case 0x7195ef:{ // PXOR MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7195f2;}
case 0x7195f2:{ // PSUBSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7195f5;}
case 0x7195f5:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x7195f8;}
case 0x7195f8:{ // PMULLW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7195fb;}
case 0x7195fb:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x7195fe;}
case 0x7195fe:{ // PADDW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719601;}
case 0x719601:{ // PACKUSWB MM5,MM5
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
return 0x719604;}
case 0x719604:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x719607;}
case 0x719607:{ // MOVD dword ptr [ESI],MM5
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0x17200));
return 0x71960a;}
case 0x71960a:{ // MOVD dword ptr [ESI + ECX*0x1],MM6
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x71960e;}
case 0x71960e:{ // MOVD MM0,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719612;}
case 0x719612:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719617;}
case 0x719617:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71961a;}
case 0x71961a:{ // MOVD MM2,dword ptr [ESI + EDX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71961f;}
case 0x71961f:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719622;}
case 0x719622:{ // MOVD MM3,dword ptr [ESI + ECX*0x2 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719627;}
case 0x719627:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71962a;}
case 0x71962a:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71962d;}
case 0x71962d:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719630;}
case 0x719630:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719633;}
case 0x719633:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719636;}
case 0x719636:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719639;}
case 0x719639:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71963c;}
case 0x71963c:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71963f;}
case 0x71963f:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719642;}
case 0x719642:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719645;}
case 0x719645:{ // PADDW MM3,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719649;}
case 0x719649:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71964c;}
case 0x71964c:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x719650;}
case 0x719650:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719653;}
case 0x719653:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x719657;}
case 0x719657:{ // PXOR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x71965a;}
case 0x71965a:{ // PSUBSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x71965d;}
case 0x71965d:{ // POR MM3,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x719661;}
case 0x719661:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719664;}
case 0x719664:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719667;}
case 0x719667:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71966a;}
case 0x71966a:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x71966e;}
case 0x71966e:{ // PXOR MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x719671;}
case 0x719671:{ // PSUBSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x719674;}
case 0x719674:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719677;}
case 0x719677:{ // PMULLW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71967a;}
case 0x71967a:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x71967d;}
case 0x71967d:{ // PADDW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719680;}
case 0x719680:{ // PACKUSWB MM5,MM5
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
return 0x719683;}
case 0x719683:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x719686;}
case 0x719686:{ // MOVD dword ptr [ESI + 0x4],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x71968a;}
case 0x71968a:{ // MOVD dword ptr [ESI + ECX*0x1 + 0x4],MM6
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0x17200));
return 0x71968f;}
case 0x71968f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719690;}
case 0x719690:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x719692;}
case 0x719692:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719693;}
case 0x719693:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x719695;}
case 0x719695:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719696;}
case 0x719696:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719697;}
case 0x719697:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719698;}
case 0x719698:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x71969a;}
case 0x71969a:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71969b;}
case 0x71969b:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71969c;}
case 0x71969c:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71969f;}
case 0x71969f:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7196a2;}
case 0x7196a2:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7196a3;}
case 0x7196a3:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7196a6;}
case 0x7196a6:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x7196aa;}
case 0x7196aa:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7196ac;}
case 0x7196ac:{ // SUB ESP,0x58
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x58ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x58ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x58ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7196af;}
case 0x7196af:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7196b2;}
case 0x7196b2:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7196b3;}
case 0x7196b3:{ // LEA EAX,[EAX*0x8 + 0x8b9940]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8b9940ull,u<4>(c,0x6d00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x7196ba;}
case 0x7196ba:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7196bb;}
case 0x7196bb:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7196be;}
case 0x7196be:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x7196c0;}
case 0x7196c0:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7196c1;}
case 0x7196c1:{ // MOV word ptr [EBP + -0x30],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196c5;}
case 0x7196c5:{ // MOV word ptr [EBP + -0x2e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196c9;}
case 0x7196c9:{ // MOV word ptr [EBP + -0x2c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196cd;}
case 0x7196cd:{ // MOV word ptr [EBP + -0x2a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196d1;}
case 0x7196d1:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7196d3;}
case 0x7196d3:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7196d4;}
case 0x7196d4:{ // MOV word ptr [EBP + -0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196d8;}
case 0x7196d8:{ // MOV word ptr [EBP + -0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196dc;}
case 0x7196dc:{ // MOV word ptr [EBP + -0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196e0;}
case 0x7196e0:{ // MOV word ptr [EBP + -0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7196e4;}
case 0x7196e4:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7196e7;}
case 0x7196e7:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7196ea;}
case 0x7196ea:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7196ed;}
case 0x7196ed:{ // LEA EDI,[EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x7196f0;}
case 0x7196f0:{ // MOV ECX,EDX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7196f2;}
case 0x7196f2:{ // MOVD MM0,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7196f6;}
case 0x7196f6:{ // MOVD MM4,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7196f9;}
case 0x7196f9:{ // PSRLD MM0,0x10
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0x10ull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0x10ull));
return 0x7196fd;}
case 0x7196fd:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719702;}
case 0x719702:{ // PUNPCKLWD MM0,MM4
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719705;}
case 0x719705:{ // MOVD MM4,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719709;}
case 0x719709:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x71970d;}
case 0x71970d:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719710;}
case 0x719710:{ // LEA EDX,[EDX + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719713;}
case 0x719713:{ // MOVD MM2,dword ptr [ESI + ECX*0x2 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719718;}
case 0x719718:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71971b;}
case 0x71971b:{ // MOVD MM4,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71971f;}
case 0x71971f:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x719723;}
case 0x719723:{ // MOVD MM1,dword ptr [ESI + EDX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719728;}
case 0x719728:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71972b;}
case 0x71972b:{ // MOVD MM4,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71972f;}
case 0x71972f:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x719733;}
case 0x719733:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719736;}
case 0x719736:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x719739;}
case 0x719739:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71973c;}
case 0x71973c:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71973f;}
case 0x71973f:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x719742;}
case 0x719742:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719745;}
case 0x719745:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x719748;}
case 0x719748:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71974b;}
case 0x71974b:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x71974e;}
case 0x71974e:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719751;}
case 0x719751:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x719755;}
case 0x719755:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x719759;}
case 0x719759:{ // MOVD MM7,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71975d;}
case 0x71975d:{ // PUNPCKLBW MM1,MM4
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719760;}
case 0x719760:{ // MOVD MM4,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719763;}
case 0x719763:{ // PSRLD MM7,0x10
wr<4>(c,0x1170,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1170),0x10ull));
wr<4>(c,0x1174,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1174),0x10ull));
return 0x719767;}
case 0x719767:{ // MOVD MM5,dword ptr [ESI + ECX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71976c;}
case 0x71976c:{ // PUNPCKLWD MM7,MM4
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71976f;}
case 0x71976f:{ // MOVD MM4,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719773;}
case 0x719773:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x719777;}
case 0x719777:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71977a;}
case 0x71977a:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x71977d;}
case 0x71977d:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719780;}
case 0x719780:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x719784;}
case 0x719784:{ // PSUBW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719787;}
case 0x719787:{ // PUNPCKLBW MM7,MM5
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x71978a;}
case 0x71978a:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71978d;}
case 0x71978d:{ // PUNPCKLBW MM6,MM4
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719790;}
case 0x719790:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719793;}
case 0x719793:{ // PUNPCKLBW MM2,MM4
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719796;}
case 0x719796:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x719799;}
case 0x719799:{ // PADDW MM1,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x71979d;}
case 0x71979d:{ // PSUBW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x7197a0;}
case 0x7197a0:{ // MOVD MM2,dword ptr [ESI + ECX*0x2 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7197a5;}
case 0x7197a5:{ // PADDW MM6,MM1
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1110)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1112)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1114)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1116)));
return 0x7197a8;}
case 0x7197a8:{ // MOVD MM4,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7197ac;}
case 0x7197ac:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x7197b0;}
case 0x7197b0:{ // MOVD MM5,dword ptr [ESI + EDX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7197b5;}
case 0x7197b5:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7197b8;}
case 0x7197b8:{ // MOVD MM4,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7197bc;}
case 0x7197bc:{ // PSRLD MM5,0x10
wr<4>(c,0x1150,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1150),0x10ull));
wr<4>(c,0x1154,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1154),0x10ull));
return 0x7197c0;}
case 0x7197c0:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7197c3;}
case 0x7197c3:{ // PUNPCKLWD MM5,MM4
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x7197c6;}
case 0x7197c6:{ // PSRAW MM6,0x3
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x3ull}));
return 0x7197ca;}
case 0x7197ca:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x7197cd;}
case 0x7197cd:{ // PUNPCKLBW MM2,MM5
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x7197d0;}
case 0x7197d0:{ // MOVQ MM5,MM7
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x7197d3;}
case 0x7197d3:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7197d6;}
case 0x7197d6:{ // PUNPCKHWD MM5,MM2
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x7197d9;}
case 0x7197d9:{ // MOVQ qword ptr [EDI + 0x18],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7197dd;}
case 0x7197dd:{ // PUNPCKLWD MM7,MM2
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1172)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x7197e0;}
case 0x7197e0:{ // MOVQ qword ptr [EDI + 0x10],MM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7197e4;}
case 0x7197e4:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x7197e8;}
case 0x7197e8:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7197eb;}
case 0x7197eb:{ // MOVQ MM0,MM7
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x7197ee;}
case 0x7197ee:{ // PSRLQ MM7,0x20
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x20ull));
return 0x7197f2;}
case 0x7197f2:{ // PXOR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x7197f5;}
case 0x7197f5:{ // PSUBSW MM1,MM6
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x7197f8;}
case 0x7197f8:{ // PUNPCKLBW MM5,MM4
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x7197fb;}
case 0x7197fb:{ // POR MM6,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x7197ff;}
case 0x7197ff:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x719802;}
case 0x719802:{ // PUNPCKLBW MM7,MM4
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719805;}
case 0x719805:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719808;}
case 0x719808:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71980b;}
case 0x71980b:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x71980f;}
case 0x71980f:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x719812;}
case 0x719812:{ // PXOR MM4,MM3
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1130)));
return 0x719815;}
case 0x719815:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x719818;}
case 0x719818:{ // PXOR MM3,MM3
wr<8>(c,0x1130,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1130)));
return 0x71981b;}
case 0x71981b:{ // MOVD MM1,dword ptr [EDI + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71981f;}
case 0x71981f:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719822;}
case 0x719822:{ // PUNPCKLBW MM0,MM3
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x719825;}
case 0x719825:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x719828;}
case 0x719828:{ // PADDW MM7,MM5
wr<2>(c,0x1170,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1150)));
wr<2>(c,0x1172,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1152)));
wr<2>(c,0x1174,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1154)));
wr<2>(c,0x1176,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1156)));
return 0x71982b;}
case 0x71982b:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x71982e;}
case 0x71982e:{ // PUNPCKLBW MM1,MM3
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x719831;}
case 0x719831:{ // PADDW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x719834;}
case 0x719834:{ // PADDW MM5,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),u<2>(c,0xe3e00)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),u<2>(c,0xe3e02)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),u<2>(c,0xe3e04)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),u<2>(c,0xe3e06)));
return 0x719838;}
case 0x719838:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x71983b;}
case 0x71983b:{ // PADDW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x71983e;}
case 0x71983e:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x719841;}
case 0x719841:{ // MOVD MM7,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719845;}
case 0x719845:{ // PSRAW MM0,0x3
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x3ull}));
return 0x719849;}
case 0x719849:{ // MOVD MM3,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71984d;}
case 0x71984d:{ // PUNPCKLBW MM7,MM6
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x719850;}
case 0x719850:{ // PSUBW MM7,MM2
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1120)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1124)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1126)));
return 0x719853;}
case 0x719853:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x719856;}
case 0x719856:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x719859;}
case 0x719859:{ // PACKUSWB MM7,MM7
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
return 0x71985c;}
case 0x71985c:{ // PACKUSWB MM3,MM3
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
return 0x71985f;}
case 0x71985f:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719862;}
case 0x719862:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719865;}
case 0x719865:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x719869;}
case 0x719869:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71986c;}
case 0x71986c:{ // MOVQ MM7,MM0
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71986f;}
case 0x71986f:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x719872;}
case 0x719872:{ // PXOR MM1,MM0
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1100)));
return 0x719875;}
case 0x719875:{ // MOV word ptr [ESI + -0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719879;}
case 0x719879:{ // PSUBSW MM1,MM0
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1100)}));
return 0x71987c;}
case 0x71987c:{ // SHR EAX,0x10
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
return 0x71987f;}
case 0x71987f:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x719882;}
case 0x719882:{ // MOV word ptr [ESI + ECX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x719887;}
case 0x719887:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x71988b;}
case 0x71988b:{ // POR MM7,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),u<8>(c,0xa400)));
return 0x71988f;}
case 0x71988f:{ // PSUBW MM5,MM1
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1110)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1112)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1114)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1116)));
return 0x719892;}
case 0x719892:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x719895;}
case 0x719895:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x719898;}
case 0x719898:{ // MOV word ptr [ESI + ECX*0x2 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x71989d;}
case 0x71989d:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x7198a1;}
case 0x7198a1:{ // SHR EAX,0x10
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
return 0x7198a4;}
case 0x7198a4:{ // PXOR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x7198a7;}
case 0x7198a7:{ // MOV word ptr [ESI + EDX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7198ac;}
case 0x7198ac:{ // PSUBSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x7198af;}
case 0x7198af:{ // MOVD MM5,dword ptr [EDI + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7198b3;}
case 0x7198b3:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x7198b6;}
case 0x7198b6:{ // PMULLW MM2,MM7
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1170)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1172)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1174)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1176)));
return 0x7198b9;}
case 0x7198b9:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x7198bc;}
case 0x7198bc:{ // MOVD MM3,dword ptr [EDI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7198c0;}
case 0x7198c0:{ // PUNPCKLBW MM5,MM6
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7198c3;}
case 0x7198c3:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7198c6;}
case 0x7198c6:{ // PUNPCKLBW MM3,MM6
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x7198c9;}
case 0x7198c9:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7198cc;}
case 0x7198cc:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x7198cf;}
case 0x7198cf:{ // PACKUSWB MM3,MM3
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
return 0x7198d2;}
case 0x7198d2:{ // PACKUSWB MM5,MM5
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
return 0x7198d5;}
case 0x7198d5:{ // PUNPCKLBW MM3,MM5
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x7198d8;}
case 0x7198d8:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7198db;}
case 0x7198db:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7198df;}
case 0x7198df:{ // MOV word ptr [ESI + -0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7198e3;}
case 0x7198e3:{ // SHR EAX,0x10
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
return 0x7198e6;}
case 0x7198e6:{ // MOV word ptr [ESI + ECX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7198eb;}
case 0x7198eb:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7198ee;}
case 0x7198ee:{ // MOV word ptr [ESI + ECX*0x2 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7198f3;}
case 0x7198f3:{ // SHR EAX,0x10
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
return 0x7198f6;}
case 0x7198f6:{ // MOV word ptr [ESI + EDX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7198fb;}
case 0x7198fb:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7198fe;}
case 0x7198fe:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719901;}
case 0x719901:{ // MOVD MM0,dword ptr [ESI + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719905;}
case 0x719905:{ // MOVD MM4,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719908;}
case 0x719908:{ // PSRLD MM0,0x10
wr<4>(c,0x1100,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1100),0x10ull));
wr<4>(c,0x1104,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1104),0x10ull));
return 0x71990c;}
case 0x71990c:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719911;}
case 0x719911:{ // PUNPCKLWD MM0,MM4
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719914;}
case 0x719914:{ // MOVD MM4,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719918;}
case 0x719918:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x71991c;}
case 0x71991c:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x71991f;}
case 0x71991f:{ // MOVD MM2,dword ptr [ESI + ECX*0x2 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719924;}
case 0x719924:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x719927;}
case 0x719927:{ // MOVD MM4,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71992b;}
case 0x71992b:{ // PSRLD MM2,0x10
wr<4>(c,0x1120,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1120),0x10ull));
wr<4>(c,0x1124,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1124),0x10ull));
return 0x71992f;}
case 0x71992f:{ // MOVD MM1,dword ptr [ESI + EDX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719934;}
case 0x719934:{ // PUNPCKLWD MM2,MM4
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719937;}
case 0x719937:{ // MOVD MM4,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x71993b;}
case 0x71993b:{ // PSRLD MM1,0x10
wr<4>(c,0x1110,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1110),0x10ull));
wr<4>(c,0x1114,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x1114),0x10ull));
return 0x71993f;}
case 0x71993f:{ // PUNPCKLWD MM1,MM4
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1140)));
return 0x719942;}
case 0x719942:{ // PXOR MM4,MM4
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1140)));
return 0x719945;}
case 0x719945:{ // PUNPCKLBW MM2,MM1
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x719948;}
case 0x719948:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71994b;}
case 0x71994b:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71994e;}
case 0x71994e:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x719951;}
case 0x719951:{ // MOVQ MM6,MM0
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719954;}
case 0x719954:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x719957;}
case 0x719957:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71995a;}
case 0x71995a:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71995e;}
case 0x71995e:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x719962;}
case 0x719962:{ // PUNPCKLBW MM1,MM4
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719965;}
case 0x719965:{ // PUNPCKLBW MM0,MM4
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719968;}
case 0x719968:{ // PSRLQ MM2,0x20
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x20ull));
return 0x71996c;}
case 0x71996c:{ // PSUBW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x71996f;}
case 0x71996f:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719972;}
case 0x719972:{ // PUNPCKLBW MM6,MM4
wr<1>(c,0x1167,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x719975;}
case 0x719975:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719978;}
case 0x719978:{ // PUNPCKLBW MM2,MM4
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1140)));
return 0x71997b;}
case 0x71997b:{ // PADDW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x71997e;}
case 0x71997e:{ // PADDW MM1,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x719982;}
case 0x719982:{ // PSUBW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719985;}
case 0x719985:{ // PADDW MM6,MM1
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1110)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1112)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1114)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1116)));
return 0x719988;}
case 0x719988:{ // PSRAW MM6,0x3
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x3ull}));
return 0x71998c;}
case 0x71998c:{ // MOVQ MM1,MM6
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71998f;}
case 0x71998f:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x719993;}
case 0x719993:{ // PXOR MM1,MM6
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1160)));
return 0x719996;}
case 0x719996:{ // PSUBSW MM1,MM6
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1160)}));
return 0x719999;}
case 0x719999:{ // POR MM6,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1160),u<8>(c,0xa400)));
return 0x71999d;}
case 0x71999d:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7199a0;}
case 0x7199a0:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7199a3;}
case 0x7199a3:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7199a6;}
case 0x7199a6:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7199a9;}
case 0x7199a9:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x7199ad;}
case 0x7199ad:{ // PXOR MM4,MM3
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1130)));
return 0x7199b0;}
case 0x7199b0:{ // PSUBSW MM4,MM3
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1130)}));
return 0x7199b3;}
case 0x7199b3:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x7199b6;}
case 0x7199b6:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x7199b9;}
case 0x7199b9:{ // PXOR MM5,MM5
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1150)));
return 0x7199bc;}
case 0x7199bc:{ // MOVD MM7,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7199c0;}
case 0x7199c0:{ // PUNPCKLBW MM7,MM5
wr<1>(c,0x1177,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1176,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1175,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1174,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1173,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1172,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1171,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x7199c3;}
case 0x7199c3:{ // MOVD MM3,dword ptr [EDI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x7199c7;}
case 0x7199c7:{ // PSUBW MM7,MM2
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),r<2>(c,0x1120)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),r<2>(c,0x1122)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),r<2>(c,0x1124)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),r<2>(c,0x1126)));
return 0x7199ca;}
case 0x7199ca:{ // PUNPCKLBW MM3,MM5
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1153)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1152)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1151)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1150)));
return 0x7199cd;}
case 0x7199cd:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7199d0;}
case 0x7199d0:{ // PACKUSWB MM7,MM7
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
return 0x7199d3;}
case 0x7199d3:{ // PACKUSWB MM3,MM3
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
return 0x7199d6;}
case 0x7199d6:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7199d9;}
case 0x7199d9:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7199dc;}
case 0x7199dc:{ // PSRLQ MM3,0x20
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x20ull));
return 0x7199e0;}
case 0x7199e0:{ // MOV word ptr [ESI + -0x1],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xffffffffull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7199e4;}
case 0x7199e4:{ // SHR EAX,0x10
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
return 0x7199e7;}
case 0x7199e7:{ // MOV word ptr [ESI + ECX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7199ec;}
case 0x7199ec:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x7199ef;}
case 0x7199ef:{ // MOV word ptr [ESI + ECX*0x2 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7199f4;}
case 0x7199f4:{ // SHR EAX,0x10
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
return 0x7199f7;}
case 0x7199f7:{ // MOV word ptr [ESI + EDX*0x1 + -0x1],AX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xffffffffull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x7199fc;}
case 0x7199fc:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7199fd;}
case 0x7199fd:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7199fe;}
case 0x7199fe:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x719a00;}
case 0x719a00:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719a01;}
case 0x719a01:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x719a03;}
case 0x719a03:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719a04;}
case 0x719a04:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719a05;}
case 0x719a05:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719a06;}
case 0x719a06:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719a08;}
case 0x719a08:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719a09;}
case 0x719a09:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719a0a;}
case 0x719a0a:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a0d;}
case 0x719a0d:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a10;}
case 0x719a10:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719a11;}
case 0x719a11:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719a14;}
case 0x719a14:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x719a18;}
case 0x719a18:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719a1a;}
case 0x719a1a:{ // SUB ESP,0x3c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x3cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x3cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a1d;}
case 0x719a1d:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719a20;}
case 0x719a20:{ // LEA EAX,[EAX*0x8 + 0x8b9940]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8b9940ull,u<4>(c,0x6d00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x719a27;}
case 0x719a27:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719a28;}
case 0x719a28:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x719a2b;}
case 0x719a2b:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x719a2d;}
case 0x719a2d:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719a2e;}
case 0x719a2e:{ // MOV word ptr [EBP + -0x30],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a32;}
case 0x719a32:{ // MOV word ptr [EBP + -0x2e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a36;}
case 0x719a36:{ // MOV word ptr [EBP + -0x2c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a3a;}
case 0x719a3a:{ // MOV word ptr [EBP + -0x2a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a3e;}
case 0x719a3e:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a40;}
case 0x719a40:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a41;}
case 0x719a41:{ // MOV word ptr [EBP + -0x20],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a45;}
case 0x719a45:{ // MOV word ptr [EBP + -0x1e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a49;}
case 0x719a49:{ // MOV word ptr [EBP + -0x1c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a4d;}
case 0x719a4d:{ // MOV word ptr [EBP + -0x1a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x719a51;}
case 0x719a51:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719a54;}
case 0x719a54:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719a57;}
case 0x719a57:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a59;}
case 0x719a59:{ // SUB ECX,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719a5b;}
case 0x719a5b:{ // MOV ESI,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719a5e;}
case 0x719a5e:{ // MOVD MM0,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719a61;}
case 0x719a61:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719a64;}
case 0x719a64:{ // MOVD MM1,dword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719a68;}
case 0x719a68:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719a6b;}
case 0x719a6b:{ // MOVD MM2,dword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719a6f;}
case 0x719a6f:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719a72;}
case 0x719a72:{ // MOVD MM3,dword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719a76;}
case 0x719a76:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719a79;}
case 0x719a79:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719a7c;}
case 0x719a7c:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719a7f;}
case 0x719a7f:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719a82;}
case 0x719a82:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719a85;}
case 0x719a85:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719a88;}
case 0x719a88:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719a8b;}
case 0x719a8b:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x719a8e;}
case 0x719a8e:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719a91;}
case 0x719a91:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719a94;}
case 0x719a94:{ // PADDW MM3,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719a98;}
case 0x719a98:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719a9b;}
case 0x719a9b:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x719a9f;}
case 0x719a9f:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719aa2;}
case 0x719aa2:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x719aa6;}
case 0x719aa6:{ // PXOR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x719aa9;}
case 0x719aa9:{ // PSUBSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x719aac;}
case 0x719aac:{ // POR MM3,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x719ab0;}
case 0x719ab0:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719ab3;}
case 0x719ab3:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719ab6;}
case 0x719ab6:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719ab9;}
case 0x719ab9:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x719abd;}
case 0x719abd:{ // PXOR MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x719ac0;}
case 0x719ac0:{ // PSUBSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x719ac3;}
case 0x719ac3:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719ac6;}
case 0x719ac6:{ // PMULLW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x719ac9;}
case 0x719ac9:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x719acc;}
case 0x719acc:{ // PADDW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719acf;}
case 0x719acf:{ // PACKUSWB MM5,MM5
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
return 0x719ad2;}
case 0x719ad2:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x719ad5;}
case 0x719ad5:{ // MOVD dword ptr [ESI],MM5
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0x17200));
return 0x719ad8;}
case 0x719ad8:{ // MOVD dword ptr [ESI + ECX*0x1],MM6
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x6c00),u<4>(c,0x17200));
return 0x719adc;}
case 0x719adc:{ // MOVD MM0,dword ptr [ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719ae0;}
case 0x719ae0:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719ae5;}
case 0x719ae5:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719ae8;}
case 0x719ae8:{ // MOVD MM2,dword ptr [ESI + EDX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719aed;}
case 0x719aed:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719af0;}
case 0x719af0:{ // MOVD MM3,dword ptr [ESI + ECX*0x2 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719af5;}
case 0x719af5:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719af8;}
case 0x719af8:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719afb;}
case 0x719afb:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719afe;}
case 0x719afe:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b01;}
case 0x719b01:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719b04;}
case 0x719b04:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b07;}
case 0x719b07:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719b0a;}
case 0x719b0a:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x719b0d;}
case 0x719b0d:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719b10;}
case 0x719b10:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719b13;}
case 0x719b13:{ // PADDW MM3,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719b17;}
case 0x719b17:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719b1a;}
case 0x719b1a:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x719b1e;}
case 0x719b1e:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719b21;}
case 0x719b21:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x719b25;}
case 0x719b25:{ // PXOR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x719b28;}
case 0x719b28:{ // PSUBSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x719b2b;}
case 0x719b2b:{ // POR MM3,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x719b2f;}
case 0x719b2f:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719b32;}
case 0x719b32:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719b35;}
case 0x719b35:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719b38;}
case 0x719b38:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x719b3c;}
case 0x719b3c:{ // PXOR MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x719b3f;}
case 0x719b3f:{ // PSUBSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x719b42;}
case 0x719b42:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719b45;}
case 0x719b45:{ // PMULLW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x719b48;}
case 0x719b48:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x719b4b;}
case 0x719b4b:{ // PADDW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719b4e;}
case 0x719b4e:{ // PACKUSWB MM5,MM5
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
return 0x719b51;}
case 0x719b51:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x719b54;}
case 0x719b54:{ // MOVD dword ptr [ESI + 0x4],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719b58;}
case 0x719b58:{ // MOVD dword ptr [ESI + ECX*0x1 + 0x4],MM6
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0x17200));
return 0x719b5d;}
case 0x719b5d:{ // MOVD MM0,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719b61;}
case 0x719b61:{ // MOVD MM1,dword ptr [ESI + ECX*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719b66;}
case 0x719b66:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b69;}
case 0x719b69:{ // MOVD MM2,dword ptr [ESI + EDX*0x1 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1120,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719b6e;}
case 0x719b6e:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b71;}
case 0x719b71:{ // MOVD MM3,dword ptr [ESI + ECX*0x2 + 0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<8>(c,0x1130,eval<Op::INT_ZEXT,8,4>(u<4>(c,0x17200)));
return 0x719b76;}
case 0x719b76:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719b79;}
case 0x719b79:{ // MOVQ MM6,MM1
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719b7c;}
case 0x719b7c:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719b7f;}
case 0x719b7f:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b82;}
case 0x719b82:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719b85;}
case 0x719b85:{ // PUNPCKLBW MM3,MM7
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719b88;}
case 0x719b88:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719b8b;}
case 0x719b8b:{ // PSUBW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x719b8e;}
case 0x719b8e:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719b91;}
case 0x719b91:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x719b94;}
case 0x719b94:{ // PADDW MM3,qword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719b98;}
case 0x719b98:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719b9b;}
case 0x719b9b:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x719b9f;}
case 0x719b9f:{ // MOVQ MM1,MM3
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719ba2;}
case 0x719ba2:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x719ba6;}
case 0x719ba6:{ // PXOR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x719ba9;}
case 0x719ba9:{ // PSUBSW MM1,MM3
wr<8>(c,0x1110,user_op(c,524457,{r<8>(c,0x1110),r<8>(c,0x1130)}));
return 0x719bac;}
case 0x719bac:{ // POR MM3,qword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),u<8>(c,0xa400)));
return 0x719bb0;}
case 0x719bb0:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719bb3;}
case 0x719bb3:{ // PSUBW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719bb6;}
case 0x719bb6:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719bb9;}
case 0x719bb9:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x719bbd;}
case 0x719bbd:{ // PXOR MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x719bc0;}
case 0x719bc0:{ // PSUBSW MM4,MM0
wr<8>(c,0x1140,user_op(c,524457,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x719bc3;}
case 0x719bc3:{ // PSUBUSW MM2,MM4
wr<8>(c,0x1120,user_op(c,524459,{r<8>(c,0x1120),r<8>(c,0x1140)}));
return 0x719bc6;}
case 0x719bc6:{ // PMULLW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x719bc9;}
case 0x719bc9:{ // PSUBW MM5,MM2
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1120)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1122)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1124)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1126)));
return 0x719bcc;}
case 0x719bcc:{ // PADDW MM6,MM2
wr<2>(c,0x1160,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1120)));
wr<2>(c,0x1162,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1122)));
wr<2>(c,0x1164,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1124)));
wr<2>(c,0x1166,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1126)));
return 0x719bcf;}
case 0x719bcf:{ // PACKUSWB MM5,MM5
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
return 0x719bd2;}
case 0x719bd2:{ // PACKUSWB MM6,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
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
wr<1>(c,0x1160,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1161,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1162,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1163,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1164,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1165,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1166,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1167,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x719bd5;}
case 0x719bd5:{ // MOVD dword ptr [ESI + 0x8],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1150),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719bd9;}
case 0x719bd9:{ // MOVD dword ptr [ESI + ECX*0x1 + 0x8],MM6
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
wm<4>(c,u<4>(c,0x7400),u<4>(c,0x17200));
return 0x719bde;}
case 0x719bde:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719bdf;}
case 0x719bdf:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x719be1;}
case 0x719be1:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719be2;}
case 0x719be2:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x719be4;}
case 0x719be4:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719be5;}
case 0x719be5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719be6;}
case 0x719be6:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719be7;}
case 0x719be7:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719be9;}
case 0x719be9:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719bea;}
case 0x719bea:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719beb;}
case 0x719beb:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719bec;}
case 0x719bec:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719bed;}
case 0x719bed:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719bf0;}
case 0x719bf0:{ // MOV EDI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719bf3;}
case 0x719bf3:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719bf6;}
case 0x719bf6:{ // LEA EDX,[ESI + ECX*0x1 + -0x3]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffdull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x719bfa;}
case 0x719bfa:{ // MOVQ MM5,qword ptr [0x007c6760]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c6760)));
return 0x719c01;}
case 0x719c01:{ // MOVQ MM6,qword ptr [0x007c6750]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c6750)));
return 0x719c08;}
case 0x719c08:{ // MOVQ MM4,qword ptr [0x007c6700]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
return 0x719c0f;}
case 0x719c0f:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719c12;}
case 0x719c12:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719c14;}
case 0x719c14:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x719c16;}
case 0x719c16:{ // AND EBX,0xffff00
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffff00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c1c;}
case 0x719c1c:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x719c1e;}
case 0x719c1e:{ // AND EAX,0xffff0000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffff0000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c23;}
case 0x719c23:{ // XOR ECX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c25;}
case 0x719c25:{ // SHR EBX,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0xc),u<4>(c,0xa1b00)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x719c28;}
case 0x719c28:{ // OR EAX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c2a;}
case 0x719c2a:{ // SHL EBX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0xc),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x719c2d;}
case 0x719c2d:{ // MOVD MM1,EAX
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x719c30;}
case 0x719c30:{ // OR EBX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_OR,4,4,4>(r<4>(c,0xc),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c32;}
case 0x719c32:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719c35;}
case 0x719c35:{ // MOVD MM0,EBX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0xc)));
return 0x719c38;}
case 0x719c38:{ // PMULLW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x719c3b;}
case 0x719c3b:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719c3e;}
case 0x719c3e:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719c41;}
case 0x719c41:{ // MOV dword ptr [EDI],EBX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x719c43;}
case 0x719c43:{ // ADD ESI,0x3
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x3ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c46;}
case 0x719c46:{ // ADD EDI,0x5
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x5ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c49;}
case 0x719c49:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719c4c;}
case 0x719c4c:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719c4f;}
case 0x719c4f:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719c53;}
case 0x719c53:{ // CMP ESI,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c55;}
case 0x719c55:{ // PACKUSWB MM0,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719c58;}
case 0x719c58:{ // MOVD dword ptr [EDI + -0x4],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xfffffffcull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719c5c;}
case 0x719c5c:{ // JL 0x00719c12
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x719c12;}
return 0x719c5e;}
case 0x719c5e:{ // MOV EAX,dword ptr [ESI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719c60;}
case 0x719c60:{ // MOV EBX,EAX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x719c62;}
case 0x719c62:{ // AND EBX,0xffff00
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffff00ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c68;}
case 0x719c68:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x719c6a;}
case 0x719c6a:{ // AND EAX,0xffff0000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffff0000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c6f;}
case 0x719c6f:{ // XOR ECX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c71;}
case 0x719c71:{ // SHR EBX,0x8
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0xc),u<4>(c,0xa1b00)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x719c74;}
case 0x719c74:{ // OR EAX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c76;}
case 0x719c76:{ // SHL EAX,0x8
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x8ull,0x1full));
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
return 0x719c79;}
case 0x719c79:{ // AND EAX,0xffff0000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffff0000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c7e;}
case 0x719c7e:{ // OR EAX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c80;}
case 0x719c80:{ // SHL EBX,0x10
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x10ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0xc,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0xc),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x719c83;}
case 0x719c83:{ // MOVD MM1,EAX
wr<8>(c,0x1110,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x719c86;}
case 0x719c86:{ // OR EBX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_OR,4,4,4>(r<4>(c,0xc),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719c88;}
case 0x719c88:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719c8b;}
case 0x719c8b:{ // MOVD MM0,EBX
wr<8>(c,0x1100,eval<Op::INT_ZEXT,8,4>(r<4>(c,0xc)));
return 0x719c8e;}
case 0x719c8e:{ // PMULLW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x719c91;}
case 0x719c91:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719c94;}
case 0x719c94:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719c97;}
case 0x719c97:{ // MOV dword ptr [EDI],EBX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x719c99;}
case 0x719c99:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719c9c;}
case 0x719c9c:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719c9f;}
case 0x719c9f:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719ca3;}
case 0x719ca3:{ // PACKUSWB MM0,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719ca6;}
case 0x719ca6:{ // MOVD dword ptr [EDI + 0x1],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719caa;}
case 0x719caa:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719cab;}
case 0x719cab:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719cac;}
case 0x719cac:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719cad;}
case 0x719cad:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719cae;}
case 0x719cae:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719caf;}
case 0x719caf:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719cb0;}
case 0x719cb0:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719cb1;}
case 0x719cb1:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719cb3;}
case 0x719cb3:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719cb4;}
case 0x719cb4:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719cb5;}
case 0x719cb5:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719cb8;}
case 0x719cb8:{ // MOV EDI,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719cbb;}
case 0x719cbb:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719cbe;}
case 0x719cbe:{ // LEA EDX,[ESI + ECX*0x1 + -0x8]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffff8ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x719cc2;}
case 0x719cc2:{ // MOVQ MM5,qword ptr [0x007c6730]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c6730)));
return 0x719cc9;}
case 0x719cc9:{ // MOVQ MM6,qword ptr [0x007c6720]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c6720)));
return 0x719cd0;}
case 0x719cd0:{ // MOVQ MM4,qword ptr [0x007c6700]
wr<8>(c,0x1140,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
return 0x719cd7;}
case 0x719cd7:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719cda;}
case 0x719cda:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719cdd;}
case 0x719cdd:{ // MOVQ MM1,qword ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719ce1;}
case 0x719ce1:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719ce4;}
case 0x719ce4:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719ce7;}
case 0x719ce7:{ // MOVD dword ptr [EDI],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0x17200));
return 0x719cea;}
case 0x719cea:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719ced;}
case 0x719ced:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719cf0;}
case 0x719cf0:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719cf3;}
case 0x719cf3:{ // PMULLW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x719cf6;}
case 0x719cf6:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719cf9;}
case 0x719cf9:{ // MOVD dword ptr [EDI + 0x5],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x5ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719cfd;}
case 0x719cfd:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719d00;}
case 0x719d00:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719d03;}
case 0x719d03:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x719d06;}
case 0x719d06:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719d09;}
case 0x719d09:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719d0c;}
case 0x719d0c:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719d10;}
case 0x719d10:{ // PACKUSWB MM0,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719d13;}
case 0x719d13:{ // MOVD dword ptr [EDI + 0x1],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719d17;}
case 0x719d17:{ // ADD EDI,0xa
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0xaull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0xaull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xaull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719d1a;}
case 0x719d1a:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719d1d;}
case 0x719d1d:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x719d20;}
case 0x719d20:{ // PADDW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x719d23;}
case 0x719d23:{ // CMP ESI,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719d25;}
case 0x719d25:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x719d29;}
case 0x719d29:{ // PACKUSWB MM2,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
return 0x719d2c;}
case 0x719d2c:{ // MOVD dword ptr [EDI + -0x4],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0xfffffffcull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719d30;}
case 0x719d30:{ // JL 0x00719cda
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x719cda;}
return 0x719d32;}
case 0x719d32:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719d35;}
case 0x719d35:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719d38;}
case 0x719d38:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719d3b;}
case 0x719d3b:{ // PSRLQ MM1,0x8
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x8ull));
return 0x719d3f;}
case 0x719d3f:{ // MOVQ MM3,qword ptr [0x007c6740]
wr<8>(c,0x1130,eval<Op::COPY,8,8>(m<8>(c,0x7c6740)));
return 0x719d46;}
case 0x719d46:{ // PAND MM3,MM1
wr<8>(c,0x1130,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1130),r<8>(c,0x1110)));
return 0x719d49;}
case 0x719d49:{ // PSLLQ MM3,0x8
wr<8>(c,0x1130,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1130),0x8ull));
return 0x719d4d;}
case 0x719d4d:{ // POR MM1,MM3
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1130)));
return 0x719d50;}
case 0x719d50:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719d53;}
case 0x719d53:{ // MOVD dword ptr [EDI],MM0
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0x17200));
return 0x719d56;}
case 0x719d56:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719d59;}
case 0x719d59:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719d5c;}
case 0x719d5c:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719d5f;}
case 0x719d5f:{ // PMULLW MM1,MM6
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1160)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1162)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1164)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1166)));
return 0x719d62;}
case 0x719d62:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719d65;}
case 0x719d65:{ // MOVD dword ptr [EDI + 0x5],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x5ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719d69;}
case 0x719d69:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719d6c;}
case 0x719d6c:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719d6f;}
case 0x719d6f:{ // PMULLW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x719d72;}
case 0x719d72:{ // PADDW MM0,MM1
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1110)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1114)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1116)));
return 0x719d75;}
case 0x719d75:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719d78;}
case 0x719d78:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719d7c;}
case 0x719d7c:{ // PACKUSWB MM0,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719d7f;}
case 0x719d7f:{ // MOVD dword ptr [EDI + 0x1],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1100),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719d83;}
case 0x719d83:{ // PADDW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x719d86;}
case 0x719d86:{ // PADDW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x719d89;}
case 0x719d89:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x719d8d;}
case 0x719d8d:{ // PACKUSWB MM2,MM7
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
return 0x719d90;}
case 0x719d90:{ // MOVD dword ptr [EDI + 0x6],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x6ull));
wu<4>(c,0x17200,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0x17200));
return 0x719d94;}
case 0x719d94:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719d95;}
case 0x719d95:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719d96;}
case 0x719d96:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719d97;}
case 0x719d97:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719d98;}
case 0x719d98:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719d99;}
case 0x719d99:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719d9b;}
case 0x719d9b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719d9c;}
case 0x719d9c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719d9d;}
case 0x719d9d:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719da0;}
case 0x719da0:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719da3;}
case 0x719da3:{ // LEA EDI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719da6;}
case 0x719da6:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719da8;}
case 0x719da8:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719dab;}
case 0x719dab:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719dae;}
case 0x719dae:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719db1;}
case 0x719db1:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719db5;}
case 0x719db5:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719db8;}
case 0x719db8:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719dbb;}
case 0x719dbb:{ // MOVQ MM5,qword ptr [0x007c66c0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
return 0x719dc2;}
case 0x719dc2:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719dc5;}
case 0x719dc5:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719dc8;}
case 0x719dc8:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719dcb;}
case 0x719dcb:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719dce;}
case 0x719dce:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719dd1;}
case 0x719dd1:{ // MOVQ MM6,qword ptr [0x007c66f0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
return 0x719dd8;}
case 0x719dd8:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719ddb;}
case 0x719ddb:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x719dde;}
case 0x719dde:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719de1;}
case 0x719de1:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719de4;}
case 0x719de4:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x719de7;}
case 0x719de7:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719dea;}
case 0x719dea:{ // PADDW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719ded;}
case 0x719ded:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x719df4;}
case 0x719df4:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x719dfb;}
case 0x719dfb:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719dff;}
case 0x719dff:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x719e03;}
case 0x719e03:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719e06;}
case 0x719e06:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719e0a;}
case 0x719e0a:{ // MOVQ MM0,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719e0e;}
case 0x719e0e:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x719e15;}
case 0x719e15:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719e18;}
case 0x719e18:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x719e1b;}
case 0x719e1b:{ // MOVQ MM6,qword ptr [0x007c66e0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66e0)));
return 0x719e22;}
case 0x719e22:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719e25;}
case 0x719e25:{ // PMULLW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x719e28;}
case 0x719e28:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719e2b;}
case 0x719e2b:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719e2e;}
case 0x719e2e:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x719e31;}
case 0x719e31:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x719e34;}
case 0x719e34:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x719e37;}
case 0x719e37:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x719e3a;}
case 0x719e3a:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x719e3d;}
case 0x719e3d:{ // PADDW MM1,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x719e44;}
case 0x719e44:{ // PADDW MM3,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719e4b;}
case 0x719e4b:{ // PSRLW MM1,0x8
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x8ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x8ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x8ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x8ull));
return 0x719e4f;}
case 0x719e4f:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x719e53;}
case 0x719e53:{ // PACKUSWB MM1,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x719e56;}
case 0x719e56:{ // MOVQ qword ptr [ESI + ECX*0x2],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719e5a;}
case 0x719e5a:{ // MOVQ MM1,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719e5d;}
case 0x719e5d:{ // PMULLW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x719e60;}
case 0x719e60:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x719e67;}
case 0x719e67:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719e6a;}
case 0x719e6a:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719e6d;}
case 0x719e6d:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719e70;}
case 0x719e70:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719e73;}
case 0x719e73:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719e76;}
case 0x719e76:{ // PMULLW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x719e79;}
case 0x719e79:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719e7c;}
case 0x719e7c:{ // PMULLW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x719e7f;}
case 0x719e7f:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719e82;}
case 0x719e82:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719e85;}
case 0x719e85:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x719e8c;}
case 0x719e8c:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x719e93;}
case 0x719e93:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719e97;}
case 0x719e97:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x719e9b;}
case 0x719e9b:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719e9e;}
case 0x719e9e:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x719ea1;}
case 0x719ea1:{ // MOVQ MM0,qword ptr [EDI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719ea5;}
case 0x719ea5:{ // MOVQ MM5,qword ptr [0x007c66f0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
return 0x719eac;}
case 0x719eac:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x719eaf;}
case 0x719eaf:{ // MOVQ MM6,qword ptr [0x007c66c0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
return 0x719eb6;}
case 0x719eb6:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719eb9;}
case 0x719eb9:{ // PMULLW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x719ebc;}
case 0x719ebc:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719ebf;}
case 0x719ebf:{ // PMULLW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x719ec2;}
case 0x719ec2:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719ec5;}
case 0x719ec5:{ // PADDW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x719ec8;}
case 0x719ec8:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719ecb;}
case 0x719ecb:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x719ece;}
case 0x719ece:{ // PADDW MM1,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x719ed5;}
case 0x719ed5:{ // PADDW MM3,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719edc;}
case 0x719edc:{ // PSRLW MM1,0x8
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x8ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x8ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x8ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x8ull));
return 0x719ee0;}
case 0x719ee0:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x719ee4;}
case 0x719ee4:{ // PACKUSWB MM1,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x719ee7;}
case 0x719ee7:{ // MOVQ qword ptr [EDI + ECX*0x1],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719eeb;}
case 0x719eeb:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719eee;}
case 0x719eee:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719ef1;}
case 0x719ef1:{ // SUB EDX,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x8ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719ef4;}
case 0x719ef4:{ // JG 0x00719dae
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x719dae;}
return 0x719efa;}
case 0x719efa:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719efb;}
case 0x719efb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719efc;}
case 0x719efc:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x719efd;}
case 0x719efd:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x719efe;}
case 0x719efe:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719eff;}
case 0x719eff:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x719f01;}
case 0x719f01:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719f02;}
case 0x719f02:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x719f03;}
case 0x719f03:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719f06;}
case 0x719f06:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719f09;}
case 0x719f09:{ // LEA EDI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x719f0c;}
case 0x719f0c:{ // ADD EDI,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719f0e;}
case 0x719f0e:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x719f11;}
case 0x719f11:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x719f14;}
case 0x719f14:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719f17;}
case 0x719f17:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719f1b;}
case 0x719f1b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719f1e;}
case 0x719f1e:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719f21;}
case 0x719f21:{ // MOVQ MM5,qword ptr [0x007c66c0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66c0)));
return 0x719f28;}
case 0x719f28:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719f2b;}
case 0x719f2b:{ // PMULLW MM0,MM5
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1150)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1152)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1154)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1156)));
return 0x719f2e;}
case 0x719f2e:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719f31;}
case 0x719f31:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719f34;}
case 0x719f34:{ // PMULLW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719f37;}
case 0x719f37:{ // MOVQ MM6,qword ptr [0x007c66f0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66f0)));
return 0x719f3e;}
case 0x719f3e:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719f41;}
case 0x719f41:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x719f44;}
case 0x719f44:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719f47;}
case 0x719f47:{ // MOVQ MM5,MM3
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719f4a;}
case 0x719f4a:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x719f4d;}
case 0x719f4d:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719f50;}
case 0x719f50:{ // PADDW MM2,MM5
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1150)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1154)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1156)));
return 0x719f53;}
case 0x719f53:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x719f5a;}
case 0x719f5a:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x719f61;}
case 0x719f61:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x719f65;}
case 0x719f65:{ // PSRLW MM2,0x8
wr<2>(c,0x1120,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1120),0x8ull));
wr<2>(c,0x1122,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1122),0x8ull));
wr<2>(c,0x1124,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1124),0x8ull));
wr<2>(c,0x1126,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1126),0x8ull));
return 0x719f69;}
case 0x719f69:{ // PACKUSWB MM0,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x719f6c;}
case 0x719f6c:{ // MOVQ qword ptr [ESI + ECX*0x1],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719f70;}
case 0x719f70:{ // MOVQ MM0,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719f74;}
case 0x719f74:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x719f7b;}
case 0x719f7b:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719f7e;}
case 0x719f7e:{ // PMULLW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x719f81;}
case 0x719f81:{ // MOVQ MM6,qword ptr [0x007c66e0]
wr<8>(c,0x1160,eval<Op::COPY,8,8>(m<8>(c,0x7c66e0)));
return 0x719f88;}
case 0x719f88:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719f8b;}
case 0x719f8b:{ // PMULLW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x719f8e;}
case 0x719f8e:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x719f91;}
case 0x719f91:{ // PUNPCKHBW MM2,MM7
wr<1>(c,0x1120,eval<Op::COPY,1,1>(r<1>(c,0x1124)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1125)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1126)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1127)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719f94;}
case 0x719f94:{ // PMULLW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x719f97;}
case 0x719f97:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x719f9a;}
case 0x719f9a:{ // PMULLW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x719f9d;}
case 0x719f9d:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x719fa0;}
case 0x719fa0:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x719fa3;}
case 0x719fa3:{ // PADDW MM1,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),u<2>(c,0xe3e00)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),u<2>(c,0xe3e02)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),u<2>(c,0xe3e04)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),u<2>(c,0xe3e06)));
return 0x719faa;}
case 0x719faa:{ // PADDW MM3,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x719fb1;}
case 0x719fb1:{ // PSRLW MM1,0x8
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x8ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x8ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x8ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x8ull));
return 0x719fb5;}
case 0x719fb5:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x719fb9;}
case 0x719fb9:{ // PACKUSWB MM1,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x719fbc;}
case 0x719fbc:{ // MOVQ qword ptr [ESI + ECX*0x2],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719fc0;}
case 0x719fc0:{ // MOVQ MM1,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x719fc3;}
case 0x719fc3:{ // MOVQ qword ptr [EDI + ECX*0x1],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x719fc7;}
case 0x719fc7:{ // PMULLW MM0,MM6
wr<2>(c,0x1100,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1160)));
wr<2>(c,0x1102,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1162)));
wr<2>(c,0x1104,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1164)));
wr<2>(c,0x1106,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1166)));
return 0x719fca;}
case 0x719fca:{ // MOVQ MM5,qword ptr [0x007c66d0]
wr<8>(c,0x1150,eval<Op::COPY,8,8>(m<8>(c,0x7c66d0)));
return 0x719fd1;}
case 0x719fd1:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719fd4;}
case 0x719fd4:{ // PMULLW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719fd7;}
case 0x719fd7:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x719fda;}
case 0x719fda:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x719fdd;}
case 0x719fdd:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x719fe0;}
case 0x719fe0:{ // PMULLW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x719fe3;}
case 0x719fe3:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x719fe6;}
case 0x719fe6:{ // PMULLW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x719fe9;}
case 0x719fe9:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x719fec;}
case 0x719fec:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x719fef;}
case 0x719fef:{ // PADDW MM0,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),u<2>(c,0xe3e00)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),u<2>(c,0xe3e02)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),u<2>(c,0xe3e04)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),u<2>(c,0xe3e06)));
return 0x719ff6;}
case 0x719ff6:{ // PADDW MM2,qword ptr [0x007c6700]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x7c6700)));
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),u<2>(c,0xe3e00)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),u<2>(c,0xe3e02)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),u<2>(c,0xe3e04)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),u<2>(c,0xe3e06)));
return 0x719ffd;}
case 0x719ffd:{ // PSRLW MM0,0x8
wr<2>(c,0x1100,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1100),0x8ull));
wr<2>(c,0x1102,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1102),0x8ull));
wr<2>(c,0x1104,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1104),0x8ull));
wr<2>(c,0x1106,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1106),0x8ull));
return 0x71a001;}
default:missing_instruction(c.pc);}}
}
